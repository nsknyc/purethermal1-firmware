/* Vendor-specific interface descriptor = interface 2
 * This interface allows direct Lepton SDK access via USB vendor requests
 * without conflicting with the UVC driver on macOS/Windows.
 * Uses EP0 control transfers only (no additional endpoints).
 */
.vendor_if_desc = {
  .bLength = USB_DT_INTERFACE_SIZE,           // 9
  .bDescriptorType = USB_DESC_TYPE_INTERFACE, // 4
  .bInterfaceNumber = USB_UVC_VENDOR_IF_NUM,  // 2
  .bAlternateSetting = 0x00,                  // 0
  .bNumEndpoints = 0x00,                      // 0 - EP0 control only
  .bInterfaceClass = 0xFF,                    // vendor-specific
  .bInterfaceSubClass = 0x01,                 // Lepton SDK
  .bInterfaceProtocol = 0x01,                 // version 1
  .iInterface = 0x00,                         // no string descriptor
},
