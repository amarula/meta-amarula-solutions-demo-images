DISTRO_FEATURES:remove = "efi"
DISTRO_FEATURES:append = " \
    efi-secure-boot \
    modsign \
"
INITRAMFS_IMAGE = "secure-core-image-initramfs"
EFI_PROVIDER = "grub-efi"
MACHINE_FEATURES_NATIVE:append = " efi"
MACHINE_FEATURES:append = " efi"

PACKAGE_CLASSES = "package_rpm"

GRUB_SIGN_VERIFY = "1"

UEFI_SB = "1"
UEFI_SELOADER = "0"
