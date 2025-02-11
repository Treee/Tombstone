<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>Tombstone</Name>
    <ExportSettings>
        <Directory></Directory>
        <ExportLBT>1</ExportLBT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile>primary.shp</Shapefile>
            <TaskName>Heightmap: Road integration</TaskName>
            <DEMInputFilename>P:\Tombstone\source\QGIS\gtt_export\gtt_heightmap.asc</DEMInputFilename>
            <DEMOutputFilename>P:\Tombstone\source\QGIS\gtt_export\gtt_heightmap_roads.asc</DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>Level out roads flat</Notes>
            <Parameters>
                <Parameter Name="Road width" Type="0" Value="8"/>
                <Parameter Name="Terrain affected range" Type="0" Value="8"/>
                <Parameter Name="Road maximal slope" Type="0" Value="16"/>
                <Parameter Name="Side maximal slope" Type="0" Value="0"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\Tombstone\source\QGIS\gtt_export\roads.shp</Shapefile>
            <TaskName>Line: Regular</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Place 90% of the roads automatically</Notes>
            <Parameters>
                <Parameter Name="Objects distance" Type="0" Value="6"/>
                <Parameter Name="Centerline offset" Type="0" Value="0"/>
                <Parameter Name="Spline interpolation" Type="0" Value="1"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="mud_6"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="6"/>
                    <Parameter Name="RANDROT" Value="0"/>
                    <Parameter Name="ROTATION" Value="90"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\Tombstone\source\QGIS\gtt_export\shapes.shp</Shapefile>
            <TaskName>Area: High-density Cluster</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>More Trees</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="100"/>
                <Parameter Name="Fraction" Type="0" Value="1"/>
                <Parameter Name="Blend distance" Type="0" Value="5"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PinusSylvestris_1s"/>
                    <Parameter Name="PROB" Value="50"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="15"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_PiceaAbies_1f"/>
                    <Parameter Name="PROB" Value="70"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="8"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_corylusAvellana_1f"/>
                    <Parameter Name="PROB" Value="80"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="9"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_betulaHumilis_1s"/>
                    <Parameter Name="PROB" Value="60"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="13"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_FagusSylvatica_2sb_Trail_G"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="25"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_1f"/>
                    <Parameter Name="PROB" Value="25"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="17"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
