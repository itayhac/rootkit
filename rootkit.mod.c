#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x12c2450, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x2582a41d, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x2a2cbae2, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x974681d, __VMLINUX_SYMBOL_STR(commit_creds) },
	{ 0x4d3226b3, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x205fe975, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xee8fca27, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x8355363, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb16a0e96, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x647e7c44, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0x128b7500, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd98397d8, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3312CA5DF3792E919EF8FDD");
