# Tombstone World

## Central Economy

Aside from the proto data, most of the xml's serve as a launch day default and are not really meant to be modified since server owners have access to the `mission`.

## Setup

### Data

- `Tombstone/data/layers/*` will need to be regenerated once the Satellite map is put in the correct spot.

### Navmesh

- `Tombestone/navmesh/navmesh.nm` will need to be regenerated once the heightmap and all objects are placed on the map.

### WRP

- `Tombstone/world/Tombstone.wrp` will need to be regenerated inside Terrain Builder when objects are placed.

#### Source - QGIS

- `heightmap.asc` will need to be placed in `Tombstone/source/QGIS/gtt_export/heightmap.asc`
- `gtt_mask.bmp` will need to be placed in `Tombstone/source/QGIS/gtt_export/gtt_mask.bmp`
- `gtt_satmap.bmp` will need to be placed in `Tombstone/source/QGIS/gtt_export/gtt_satmap.bmp`

These three files form the foundation of the map along with the map frame properties.

- Grid Size: 4096px
- Cell Size: 3.75m
- Terrain Size: 15360m

---

- Sat/Surface Mask Size: 15360m
- Resolution: 1px/m

---

- Tile Size: 512px
- Overlap: 32px

---

- Texture Layer: 30m

[Well Known Map Sizes - https://pmc.editing.wiki/doku.php?id=arma3:terrain:grid-cell-size](https://pmc.editing.wiki/doku.php?id=arma3:terrain:grid-cell-size)
