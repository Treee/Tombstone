# Tombstone Source

## Setup

### Large File Transfer

Since several of these files are very large (Greater than 500MB) storing them in github is not efficient. The outline below will walk you through moving the large files into the correct places to connect all the pieces within **Terrain Builder**

#### Central Economy

`areaflags.map` needs to be placed in `Tombstone/ce/areaflags.map` location

#### Data

`Tombstone/data/layers/*` will need to be regenerated once the Satellite map is put in the correct spot.

#### Navmesh

`Tombestone/navmesh/navmesh.nm` will need to be regenerated once the heightmap and all objects are placed on the map.

#### Source - QGIS

`heightmap.asc` will need to be placed in `Tombstone/source/QGIS/gtt_export/heightmap.asc` location

`gtt_mask.bmp` will need to be placed in `Tombstone/source/QGIS/gtt_export/gtt_mask.bmp` location

`gtt_satmap.bmp` will need to be placed in `Tombstone/source/QGIS/gtt_export/gtt_satmap.bmp` location

These three files form the foundation of the map along with the map frame properties.

Grid Size: 4096px
Cell Size: 3.75m
Terrain Size: 15360m

Sat/Surface Mask Size: 15360m
Resolution: 1px/m

Tile Size: 512px
Overlap: 32px

Texture Layer: 30m

[Map Sizes](https://pmc.editing.wiki/doku.php?id=arma3:terrain:grid-cell-size)

#### World

`Tomstone.wrp` will need to be regenerated after all objects are placed and layers are generated
