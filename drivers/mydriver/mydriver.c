#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/decompress/unlzma.h>

static int __init mydriver_init(void)
{
    printk(KERN_INFO "MyDriver: Loading on zepharo...\n");
    printk(KERN_INFO "MyDriver: LZMA support is ready.\n");
    return 0;
}

static void __exit mydriver_exit(void)
{
    printk(KERN_INFO "MyDriver: Unloading...\n");
}

module_init(mydriver_init);
module_exit(mydriver_exit);
MODULE_LICENSE("GPL");
