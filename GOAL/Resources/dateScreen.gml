<?xml version="1.0" encoding="UTF-8"?>
<!-- ============================================================ -->
<!-- dateScreen.gml                                               -->
<!-- ============================================================ -->
<!-- NOTE: You can optionally associate an "<idname>" element to  -->
<!-- any of the widgets.                                          -->
<!-- The "<idname>" element is required if the application        -->
<!-- business part (written in "C" code) needs to interact with   -->
<!-- the widget.                                                  -->
<!-- The value inside the "<idname>" element must be one of the   -->
<!-- "idname" attributes declared in the "widgetMappings.iml"     -->
<!-- file (located at project root). Please complete this file    -->
<!-- if needed.                                                   -->
<!-- The uniqueness of each ID is automatically checked (in the   -->
<!-- editor and at build time).                                   -->
<!-- ============================================================ -->
<DAL xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="http://www.ingenico.com/schemas/dal/1_0">
  <version DAL_version="01.00" this_version="01.00"/>
  <goal name="dateScreen">
    <window>
      <borders>
        <left>0</left>
        <top>0</top>
        <right>0</right>
        <bottom>0</bottom>
      </borders>
      <position>
        <x>0</x>
        <y>0</y>
        <unit>%</unit>
      </position>
      <size>
        <width>100</width>
        <height>100</height>
        <unit>%</unit>
      </size>
      <children>
        <picture>
          <source>background.jpg</source>
        </picture>
        <layout>
          <children>
            <label>
              <item>
                <column>0</column>
                <row>0</row>
              </item>
              <expand>width</expand>
              <backcolor>0xF00000A0</backcolor>
              <forecolor>0xFFFFFFFF</forecolor>
              <size>
                <height>25</height>
                <unit>%</unit>
              </size>
              <text>SALE: </text>
              <font>
                <size>
                  <height>MEDIUM</height>
                </size>
              </font>
            </label>
            <label>
              <item>
                <column>0</column>
                <row>1</row>
              </item>
              <backalign>center</backalign>
              <margins>
                <left>0</left>
                <top>3</top>
                <right>0</right>
                <bottom>3</bottom>
                <unit>%</unit>
              </margins>
              <backcolor>0xF00000A0</backcolor>
              <forecolor>0xFFFFFFFF</forecolor>
              <text>Enter sale amount:</text>
              <font>
                <size>
                  <height>XSMALL</height>
                </size>
              </font>
            </label>
            <edit>
              <idname>../widgetMappings.iml#DATE_SCREEN_EDIT_DATE</idname>
              <item>
                <column>0</column>
                <row>2</row>
              </item>
              <expand>all</expand>
              <textalign>left</textalign>
              <state>focused</state>
              <mask>/d/d/d/d/ Ksh</mask>
            </edit>
            <layout>
              <item>
                <column>0</column>
                <row>3</row>
              </item>
              <children>
                <button>
                  <idname>../widgetMappings.iml#DATE_SCREEN_BUTTON_OK</idname>
                  <item>
                    <column>0</column>
                    <row>0</row>
                  </item>
                  <backalign>bottom,right</backalign>
                  <margins>
                    <left>0</left>
                    <top>0</top>
                    <right>5</right>
                    <bottom>5</bottom>
                    <unit>%</unit>
                  </margins>
                  <backcolor>0xFF00FF00</backcolor>
                  <shortcut>KEY_VALID</shortcut>
                  <minsize>
                    <width>30</width>
                    <height>0</height>
                    <unit>%</unit>
                  </minsize>
                  <text>Ok</text>
                </button>
                <button>
                  <idname>../widgetMappings.iml#GENERIC_BUTTON_CANCEL</idname>
                  <item>
                    <column>1</column>
                    <row>0</row>
                  </item>
                  <backalign>bottom,left</backalign>
                  <margins>
                    <left>5</left>
                    <top>0</top>
                    <right>0</right>
                    <bottom>5</bottom>
                    <unit>%</unit>
                  </margins>
                  <backcolor>0xFFFF0000</backcolor>
                  <shortcut>KEY_CANCEL</shortcut>
                  <minsize>
                    <width>30</width>
                    <height>0</height>
                    <unit>%</unit>
                  </minsize>
                  <text>Cancel</text>
                </button>
              </children>
            </layout>
          </children>
        </layout>
      </children>
    </window>
  </goal>
</DAL>