Constructing Splicer requires assembling components from a diverse ecosystem of suppliers. Wherever possible, the sourcing strategy prioritizes reuse, local acquisition, and open markets, both to reduce cost and to underscore Splicer’s conceptual position as an apparatus built against the black-box nature of commercial image-making systems.

### General Approach

Splicer is built from a combination of:

- Industrial surplus (primary source for core imaging and computing components)
- Newly purchased parts (for motion control and electronics)
- 3D-printed and DIY-fabricated elements
- Standard mechanical components (fasteners, extrusions, cables, etc.)

Wherever viable, local sourcing or reuse from surplus markets is encouraged, this strategy not only aligns with the sustainability of the project, but also fosters an ethic of critical making.

---

### Industrial Surplus 

#### Key Components Sourced via Surplus Vendors

- Lens (Schneider Componon-S 80mm)
- Line-scan sensor (Teledyne Dalsa Piranha series)
- Frame grabber (e.g., Sapera-compatible)
- Camlink cables
- Monitors/screens for Splicer’s operator interface

#### Recommended platforms

- [eBay](https://www.ebay.com/) (international)
- [Ricardo.ch](https://www.ricardo.ch/) (Switzerland)
- Local online surplus sites (check for industrial electronics auctions or liquidation offers)

These platforms are particularly useful for accessing professional-grade imaging components that are unaffordable new but robust and reliable when reused.

---

### New Components

Some components are best purchased new due to availability, reliability, or performance guarantees:

#### CNC Controller Boards

- Mesa 7i96, 7i78 or compatible boards from [mesanet.com](https://www.mesanet.com/)
- Motion Controller Computer: Raspberry Pi 5 (used with real-time kernel and LinuxCNC)
- Stepper Motors and Drivers: NEMA 17/23 class motors, closed-loop Servos
- Power Supplies, emergency stop, limit switches.

---

### Mechanical Structure

- Aluminium extrusions, T-slot profiles, and linear guideways form the core mechanical framework.
- CNC-milled aluminium plates are used for structural reinforcements.

### Reliable suppliers

- [Dold Mechatronik (Germany)](https://dold-mechatronik.de/)
- [Vallder (Europe)](https://vallder.com/)

---

### Miscellaneous Parts

For cabling, connectors, power adapters, small mechanical parts and other “fiddly bits”:

[AliExpress](https://www.aliexpress.com/) Has proven to be the most accessible and complete resource for:

- RJ45 and stepper connectors
- Cable chains
- DC power supplys
- Screw terminals

---

### 3D-Printed Parts

Many structural or non-load-bearing components are 3D printed, including:

- Sensor mount
- Camera gantry
- Motor mounts for focussing system
- Cable and dragchain mounts
- Filter wheel and lens mount
- Sample holders

The CAD files for the 3D printed parts are available on Github.

**Recommended settings**: eSUN ABS+ filament, 0.4 mm nozzle, 4 walls, 40% grid infill (per Voron Design guidelines)
**Alternatives**: PLA / PETG may work for parts not in direct contact with motors or warm surfaces. For parts near stepper motors or lights, only ABS has proven thermally robust

---

### Illumination

Photographic lighting must meet high-frequency requirements due to Splicer’s extremely short exposure times: LED continuous lighting with flicker-free dimming performance is essential. Modifiers (diffusers, reflectors) can be standard studio-grade or DIY-fabricated depending on sample geometry and texture.
