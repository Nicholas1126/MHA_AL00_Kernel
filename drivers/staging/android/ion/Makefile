KCOV_INSTRUMENT		:= n

obj-$(CONFIG_ION) +=	ion.o ion_heap.o ion_page_pool.o ion_system_heap.o \
			ion_carveout_heap.o ion_chunk_heap.o ion_cma_heap.o
obj-$(CONFIG_ION_TEST) += ion_test.o
ifdef CONFIG_COMPAT
obj-$(CONFIG_ION) += compat_ion.o
endif

obj-$(CONFIG_ION_DUMMY) += ion_dummy_driver.o
obj-$(CONFIG_ION_TEGRA) += tegra/
obj-$(CONFIG_ION_HISI) += hisi/
obj-$(CONFIG_ION_HISI_CPUDRAW) += ion_cpudraw_heap.o
obj-$(CONFIG_ION_HISI_SECCM) += ion_seccm_heap.o
obj-$(CONFIG_ION_HISI_DMA_POOL) += ion_dma_pool_heap.o
