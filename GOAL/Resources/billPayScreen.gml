<?xml version="1.0" encoding="UTF-8"?>
<!-- ============================================================ -->
<!-- billPayScreen.gml                              -->
<!-- ============================================================ -->
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
<!-- The uniqueness of each <idname> is automatically checked     -->
<!-- (in the editor and at build time).                           -->
<!-- ============================================================ -->
<DAL xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="http://www.ingenico.com/schemas/dal/1_0">
  <version DAL_version="01.00" this_version="01.00"/>
  <goal name="billPayScreen">
    <window>
      <borders>
        <left>0</left>
        <top>0</top>
        <right>0</right>
        <bottom>0</bottom>
        <unit>perthousand</unit>
        <color>0xFF000000</color>
      </borders>
      <backcolor>0xFFFFFFFF</backcolor>
      <forecolor>0xF9FFFFFF</forecolor>
      <children>
        <edit>
          <idname>../widgetMappings.iml#ID_EDIT_6</idname>
          <expand>all</expand>
          <textalign>left</textalign>
          <state>focused</state>
          <position>
            <x>0</x>
            <y>462</y>
            <unit>perthousand</unit>
          </position>
          <size>
            <width>990</width>
            <height>195</height>
            <unit>perthousand</unit>
          </size>
          <mask>/d/d/d/d/d/d/d/d/Ksh</mask>
        </edit>
        <button>
          <idname>../widgetMappings.iml#ID_BUTTON_8</idname>
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
          <position>
            <x>46</x>
            <y>762</y>
            <unit>perthousand</unit>
          </position>
          <size>
            <width>300</width>
            <height>145</height>
            <unit>perthousand</unit>
          </size>
          <text>Ok</text>
        </button>
        <button>
          <idname>../widgetMappings.iml#ID_BUTTON_9</idname>
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
          <position>
            <x>590</x>
            <y>762</y>
            <unit>perthousand</unit>
          </position>
          <size>
            <width>300</width>
            <height>133</height>
            <unit>perthousand</unit>
          </size>
          <text>Cancel</text>
        </button>
        <label>
          <idname>../widgetMappings.iml#ID_LABEL_10</idname>
          <expand>width</expand>
          <backcolor>0xF00000A0</backcolor>
          <forecolor>0xFFFFFFFF</forecolor>
          <position>
            <x>6</x>
            <y>0</y>
            <unit>perthousand</unit>
          </position>
          <size>
            <width>990</width>
            <height>250</height>
            <unit>perthousand</unit>
          </size>
          <text>BILL PAYMENT: </text>
          <font>
            <size>
              <height>MEDIUM</height>
            </size>
          </font>
        </label>
        <label>
          <idname>../widgetMappings.iml#ID_LABEL_11</idname>
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
          <position>
            <x>250</x>
            <y>300</y>
            <unit>perthousand</unit>
          </position>
          <text>Enter Bill amount:</text>
          <font>
            <size>
              <height>XSMALL</height>
            </size>
          </font>
        </label>
      </children>
    </window>
  </goal>
</DAL>