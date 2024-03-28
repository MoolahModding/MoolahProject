#include "SBZSideBarNotifications.h"


void USBZSideBarNotifications::AddNewNotification(const FSBZSideBarNotificationData& InSideBarNotificationData) {
}

USBZSideBarNotifications::USBZSideBarNotifications() {
    this->bIsDisplaying = false;
    this->Animation_OpenWidget = NULL;
    this->DisplayTimeLeft = -1.00f;
}

