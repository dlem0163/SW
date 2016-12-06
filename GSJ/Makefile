dir = lib app

.PHONY: all clean

all:
	@for d in $(dir); \
	do \
		$(MAKE) -C $$d; \
	done

clean:
	@for d in $(dir); \
	do \
		$(MAKE) -C $$d clean; \
	done

