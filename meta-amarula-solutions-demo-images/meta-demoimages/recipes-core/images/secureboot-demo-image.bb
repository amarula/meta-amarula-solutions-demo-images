SUMMARY = "Demo image with uEFI secureboot enabled"

include recipes-core/images/include/demo-images-base.inc
include recipes-core/images/secure-core-image.inc

IMAGE_INSTALL:append = " \
    kernel-image-bzimage \
    ovmf-shell-efi \
"

# UEFI secureboot settings
IMAGE_FSTYPES += " wic"
QB_DEFAULT_FSTYPE = "wic"
WKS_FILE = "secureboot-demo-image.wks"
