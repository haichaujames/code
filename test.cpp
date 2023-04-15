┌ 184: fcn.016106a0 (int64_t arg_10h);
│ ; arg int64_t arg_10h @ sp+0x30
│ ; var int64_t var_10h @ sp+0x10
│ 0x016106a0      28008052       mov w8, 1
│ 0x016106a4      a8761c39       strb w8, [x21, 0x71d]
│ 0x016106a8      800240f9       ldr x0, [x20]                         ; 0xee
│ 0x016106ac      758e40f9       ldr x21, [x19, 0x118]                 ; 0xed
│ 0x016106b0      08e040b9       ldr w8, [x0, 0xe0]                    ; 0xda
│ 0x016106b4      48000035       cbnz w8, 0x16106bc
| // true: 0x016106bc  false: 0x016106b8
│ 0x016106b8      e0c6de97       bl 0xdc2238
| // true: 0x016106bc
│ 0x016106bc      e00315aa       mov x0, x21                           ; '\xff\xff\xff\xff\xff\xff\xff\xff'
│ 0x016106c0      e1031faa       mov x1, xzr                           ; '\xff\xff\xff\xff\xff\xff\xff\xff'
│ 0x016106c4      e2031faa       mov x2, xzr                           ; '\xff\xff\xff\xff\xff\xff\xff\xff'
│ 0x016106c8      74620491       add x20, x19, 0x118
│ 0x016106cc      17ff5394       bl 0x2b10328
│ 0x016106d0      60020036       tbz w0, 0, 0x161071c
| // true: 0x0161071c  false: 0x016106d4
│ 0x016106d4      e00313aa       mov x0, x19                           ; '\xff\xff\xff\xff\xff\xff\xff\xff'
│ 0x016106d8      e1031faa       mov x1, xzr                           ; '\xff\xff\xff\xff\xff\xff\xff\xff'
│ 0x016106dc      3a733a94       bl 0x24ad3c4
│ 0x016106e0      600200b4       cbz x0, 0x161072c
| // true: 0x0161072c  false: 0x016106e4
│ 0x016106e4      c87d01f0       adrp x8, 0x45cb000
│ 0x016106e8      081143f9       ldr x8, [x8, 0x620]                   ; 0xe2
│ 0x016106ec      e2031faa       mov x2, xzr                           ; '\xff\xff\xff\xff\xff\xff\xff\xff'
│ 0x016106f0      010140f9       ldr x1, [x8]                          ; 0xe2
│ 0x016106f4      ccb75494       bl 0x2b3e624
│ 0x016106f8      a00100b4       cbz x0, 0x161072c
| // true: 0x0161072c  false: 0x016106fc
│ 0x016106fc      487c01f0       adrp x8, 0x459b000
│ 0x01610700      081547f9       ldr x8, [x8, 0xe28]
│ 0x01610704      010140f9       ldr x1, [x8]                          ; 0xe2
│ 0x01610708      43fa6594       bl 0x2f8f014
│ 0x0161070c      e10300aa       mov x1, x0                            ; '\xff\xff\xff\xff\xff\xff\xff\xff'
│ 0x01610710      800200f9       str x0, [x20]
│ 0x01610714      e00314aa       mov x0, x20                           ; '\xff\xff\xff\xff\xff\xff\xff\xff'
│ 0x01610718      79c6de97       bl 0xdc20fc
| // true: 0x0161071c
│ 0x0161071c      800240f9       ldr x0, [x20]                         ; 0xee
│ 0x01610720      f37b41a9       ldp x19, x30, [arg_10h]
│ 0x01610724      f553c2a8       ldp x21, x20, [sp], 0x20
│ 0x01610728      c0035fd6       ret

│ 0x0161072c      ccc6de97       bl 0xdc225c
│ 0x01610730      f40f1ef8       str x20, [sp, -0x20]!
│ 0x01610734      f37b01a9       stp x19, x30, [sp, 0x10]
│ 0x01610738      f303012a       mov w19, w1                           ; '\xff\xff\xff\xff\xff\xff\xff\xff'
│ 0x0161073c      e1031faa       mov x1, xzr                           ; '\xff\xff\xff\xff\xff\xff\xff\xff'
│ 0x01610740      f40300aa       mov x20, x0                           ; '\xff\xff\xff\xff\xff\xff\xff\xff'
│ 0x01610744      ec126c94       bl 0x31152f4
│ 0x01610748      931200b9       str w19, [x20, 0x10]
│ 0x0161074c      f37b41a9       ldp x19, x30, [var_10h]
│ 0x01610750      f40742f8       ldr x20, [sp], 0x20                   ; 0x5
└ 0x01610754      c0035fd6       ret

