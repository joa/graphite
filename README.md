### Moonlander Graphite 🚀

QMK implementation of the [Graphite layout](https://github.com/rdavison/graphite-layout) for the [Moonlander](https://www.zsa.io/moonlander/) keyboard.

Includes a _magic key_ similar to [Magic Sturdy](https://github.com/Ikcelaks/keyboard_layouts/blob/main/magic_sturdy/magic_sturdy.md) to combat SFBs
as well as some hacks to support German Umlauts on an US layout.

You can also find an Oryx-friendly version [here](https://configure.zsa.io/moonlander/layouts/GLeeV/latest/0/intro).

```
␛ 1 2 3 4 5 -    = 6 7 8 9 0 `
␡ b l d w z [    ] ' f o u j \
↤ n r t s g ⇑    ⇑ y h a e i ;
⇄ q x m c v        k p , . / ⇑
⇑ C ⇑ ← →          ↑ ↓ [ ] ⇑
      
        ⇧ ⌥    📷 ␣
         ↤       ⏎
          ⋆     ⇄    
```

The magic key `⋆` is reachable from the left thumb. The following combinations are implemented:

| Combo | Result |
| ----- | ------ |
| `r⋆`  | `rl`   |
| `g⋆`  | `gs`   |
| `u⋆`  | `ue`   |
| `s⋆`  | `sc`   |
| `h⋆`  | `hy`   |
| `w⋆`  | `ws`   |
| `o⋆`  | `oa`   |
| `y⋆`  | `y'`   |
| `p⋆`  | `ph`   |
| `e⋆`  | `eu`   |
| `j⋆`  | `ji`   |

If you press `o` for example and then `⋆` you'll get `oa` as a result. Normally you'd have to do some acrobatics or press first `o` with your right middle-finger and then `a` with the same finger (hence the term SFB or same-finger-bigram).
