# Knife-Throwing Target (Pro End-Grain Build)

Durable, self-healing knife target made from end-grain 4×6 blocks, framed in 2×6s, backed with plywood.  
The goal: maximum knife stick, minimum bounce, zero drama.

---

## Overview
This is the **Pro** version — the one built to last.  
Each block exposes end grain (the self-healing side of the wood).  
Blocks are removable, replaceable, and held inside a 2×6 frame on a ¾" plywood backer.

You can scale this design from **4×4 blocks (small)** to **4×6 blocks (tournament-style)**.

---

##  Materials

| Item | Quantity | Notes |
|------|-----------|-------|
| 4×6×8 ft posts *(actual 3.5"×5.5")* | 2 | Each yields ~17 blocks cut at 5.5" |
| 2×6×8 ft boards | 2 | For frame |
| ¾" plywood sheet | 1 (cut to 25"×36") | Backer |
| 3" construction screws | ~100 | Attach blocks to backer |
| 2.5" exterior screws | 1 box | Frame corners |
| Strap handle (optional) | 1 | Portability |
| Spray paint | — | For target rings |

---

## Cut List

| Cut | From | Qty | Dimensions |
|------|------|-----|-------------|
| End-grain blocks | 4×6 posts | 24 | 5.5" × 5.5" × 3.5" |
| Frame sides | 2×6 boards | 2 | 33" |
| Frame top/bottom | 2×6 boards | 2 | 22" |
| Backer board | ¾" plywood | 1 | 25" × 36" |

---

## Step-by-Step Build

### 1. Cut the Blocks
- Mark your 4×6 post every **5.5"** down its 96" length.  
- Use a miter saw (best) or circular saw.  
- Each cut piece = **5.5" × 5.5" × 3.5"**.  
- You’ll get ~17 blocks per post.

![Cutting diagram](../docs/images/knife_board/cutting_diagram.png)

---

### 2. Sort and Orient
- Pick the **cleanest end grain** for the front (knots → sides or back).  
- Keep grain direction varied for best stability.  
- Rotate blocks if one starts splitting — that’s normal end-grain behavior.

---

### 3. Build the Frame
- Use 2×6s to build a rectangle **22" wide × 33" tall (inside)**.  
- Screw corners together with 2.5" exterior screws.  
- Dry-fit the blocks — they should sit snug.

---

### 4. Attach the Backer
- Center the frame on your plywood sheet.  
- Screw it down every 6–8".  
- Backer acts as the anchor for your screws.

---

### 5. Install Blocks
- Arrange 4 across × 6 down (24 total).  
- Clamp them tight; drive **3" screws** from the back into each block.  
- Check alignment; face should be flush.

![Block grid](../docs/images/knife_board/block_grid.png)

---

### 6. Finishing Touches
- Add a strap handle to the top if you want to carry it.  
- Lightly mist with water or oil — never polyurethane or epoxy.  
- Paint target rings (outer, middle, bullseye).  
- Let dry, then hang or mount securely.

![Finished board](../docs/images/knife_board/finished_board.jpeg)

---

## 🪵 Wood Tips

| Wood | Works? | Notes |
|------|---------|-------|
| Pine / Spruce / Fir | ✅ | Soft, ideal, self-healing |
| Douglas Fir | ✅ | Slightly harder, still good |
| Cedar | ⚠️ | Splits easily |
| Oak / Maple / Hickory | ❌ | Too hard, dulls knives |

**Softwoods** are your friend — if you can dent it with a thumbnail, it’s perfect.

---

## Optional Code Integration
The `scripts/cutlist.py` tool can read this project’s JSON plan and output a cut list.

Example:
```bash
python scripts/cutlist.py plans/knife_board_pro.json

== Knife-Throwing Board Cut List ==
Target face: 22" × 33"
Using 4×6 end-grain blocks → 24 pieces @ 5.5"
Hardware: 3" construction screws, 2.5" frame screws
Notes: Rotate worn blocks; replace individually.
```


## Dimensions Summary

| Section              | Width | Height | Depth       |
| -------------------- | ----- | ------ | ----------- |
| Target face (blocks) | 22"   | 33"    | 3.5"        |
| With frame           | 25"   | 36"    | 5.5"        |
| With backer          | 25"   | 36"    | 6.25" total |


## Safety & Maintenance

10-ft minimum clear throwing distance.

Check screws regularly.

Replace worn blocks as needed.

Never use near concrete walls or tight spaces — bounce-backs happen.

