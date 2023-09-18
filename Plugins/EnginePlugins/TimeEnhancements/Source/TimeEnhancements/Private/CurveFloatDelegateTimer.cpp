// Copyright (C) 2019 Pedro Montoto Garc�a - All Rights Reserved

#include "CurveFloatDelegateTimer.h"

UCurveFloatDelegateTimer* UCurveFloatDelegateTimer::CreateCurveFloatDelegateTimer(UObject* WorldContextObject, float Period, float DelayToFirstExecution, const UCurveFloat* Curve, bool bLoops, float CurveDuration)
{
  UCurveFloatDelegateTimer* Timer = NewObject<UCurveFloatDelegateTimer>(WorldContextObject);
  return Timer->Init(WorldContextObject, Period, DelayToFirstExecution, Curve, bLoops, CurveDuration);
}

UCurveFloatDelegateTimer* UCurveFloatDelegateTimer::Init(UObject* WorldContextObject, float Period, float DelayToFirstExecution, const UCurveFloat* InCurve, bool InbLoops, float InCurveDuration)
{
  UDelegateTimer* AuxDelegate = UDelegateTimer::CreateDelegateTimer(WorldContextObject, Period, DelayToFirstExecution);
  AuxDelegate->TickExec.AddDynamic(this, &UCurveFloatDelegateTimer::FireCurveEvalTick);
  Curve = InCurve == nullptr ? NewObject<UCurveFloat>() : InCurve;
  bLoops = InbLoops;
  float TimeStart = 0.0f;
  float TimeEnd = 0.0f;
  InCurve->GetCurves()[0].CurveToEdit->GetTimeRange(TimeStart, TimeEnd);
  CurveDuration = InCurveDuration == 0.0f ? TimeEnd - TimeStart : InCurveDuration;
  return this;
}

void UCurveFloatDelegateTimer::FireCurveEvalTick(const UDelegateTimer * Timer, float ElapsedTime, float TimeSinceLast)
{
  UE_LOG(TimeEnhancementsLog, Log, TEXT("Timer %s in UCurveFloatDelegateTimer::FireCurveEvalTick"), *this->GetName());
  if (this->CurveEvalTick.IsBound())
  {
	float ElapsedTimeSinceFirst = (Timer->TimeLastExecution - Timer->TimeFirstExecution).GetTotalSeconds();
    float TimeToEvalCurve = bLoops ? FMath::Fmod(ElapsedTimeSinceFirst, CurveDuration) : CurveDuration;
    CurveEvalTick.Broadcast(this, ElapsedTime, TimeSinceLast, Curve->GetFloatValue(TimeToEvalCurve), TimeToEvalCurve);
  }
}
