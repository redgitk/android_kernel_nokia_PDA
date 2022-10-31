#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init load_fun(void)
{
	pr_debug("Hello, World  kernel :) \n");
	return 0;
}

static void __exit unload_fun(void)
{
	pr_debug("unloading...\n");
}

module_init(load_fun);
module_exit(unload_fun);

MODULE_LICENSE(" GPL ");
