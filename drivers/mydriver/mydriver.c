#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/decompress/unlzma.h>
#include <linux/slab.h>

static int __init mydriver_init(void)
{
    printk(KERN_INFO "MyDriver: Loading...\n");

    // LZMA funksiyasını sınaq üçün çağırırıq (hələlik heç bir data yoxdur)
    // Əgər real sıxılmış data varsa, onu burada istifadə et
    // int ret = unlzma(src, src_len, NULL, NULL, dst, dst_len, NULL);
    printk(KERN_INFO "MyDriver: LZMA decompress support is ready.\n");

    return 0;
}

static void __exit mydriver_exit(void)
{
    printk(KERN_INFO "MyDriver: Unloading...\n");
}

module_init(mydriver_init);
module_exit(mydriver_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("My custom driver with LZMA support");
MODULE_AUTHOR("Farhad");
