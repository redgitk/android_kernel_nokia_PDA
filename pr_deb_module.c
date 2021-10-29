#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int load_fun(void)
{
	pr_debug("Hello, World  kernel :) \n");
	return 0;
}

static void unload_fun(void)
{
	pr_debug("unloading...\n");
}

module_init(load_fun);
module_exit(unload_fun);

MODULE_LICENSE(" GPL ");
