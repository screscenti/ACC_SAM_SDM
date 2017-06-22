<?xml version="1.0" encoding="UTF-8"?>
<model ref="r:c29bea57-d07f-4e2c-800a-ce2b7ae722f1(_31_ArchitectureValidation)">
  <persistence version="9" />
  <languages>
    <devkit ref="9d6f81e1-9ac3-47a6-9f80-ceba2efcadad(DataDictionary)" />
    <devkit ref="a2812605-e334-464d-acc7-8fb864755ed7(FeatureModels)" />
    <devkit ref="277935d2-18de-4304-b853-7770de1fb32c(Analyses)" />
    <devkit ref="84a6edcf-c6e8-49f1-af3b-05b24d2eec70(DataFlow)" />
    <devkit ref="2f364326-5dc9-47c7-b7f0-d53df6ffd9e4(ConstantGroups)" />
    <devkit ref="dee9d228-3a6e-4197-9138-6647a60f7a90(ProcessSupport)" />
    <devkit ref="ed36face-06da-4ece-98fb-6f64b68c4584(PhysicalUnits)" />
  </languages>
  <imports>
    <import index="apm3" ref="r:37dd1674-fd74-4173-9e1d-8876a030925a(_20_DataModel)" />
    <import index="nppk" ref="r:915e0ada-2a2f-495c-ab84-81ebfefe6f85(_10_Config)" />
    <import index="idgr" ref="r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)" />
    <import index="vg1v" ref="3c4eda0f-1c8d-4cd3-b50a-5e3b5354aa39/r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib/ClaStdLib)" implicit="true" />
    <import index="wleb" ref="r:894318cf-1d46-42d9-bf5d-cf7a79235e3f(ClaHeaders)" implicit="true" />
  </imports>
  <registry>
    <language id="53bab999-e9c3-428a-80be-fef5bed08f55" name="com.mbeddr.cc.trace">
      <concept id="8626086128969157722" name="com.mbeddr.cc.trace.structure.TracingConfigItem" flags="ng" index="3C_SZV" />
    </language>
    <language id="0d04a6cc-773e-4069-b9b0-11884b2ff1c8" name="com.mbeddr.ext.units">
      <concept id="5348704582971040037" name="com.mbeddr.ext.units.structure.UnitConfigItem" flags="ng" index="2eh4Hv" />
    </language>
    <language id="31f70732-7f14-4aa0-abff-6f50f7e5fbf2" name="com.lmsintl.accent.analyses.datadictionary">
      <concept id="221948837289890044" name="com.lmsintl.accent.analyses.datadictionary.structure.AnalysesDataDictionaryConstraintCheck" flags="ng" index="2BVhmQ">
        <property id="221948837289890293" name="enabled" index="2BVhiZ" />
      </concept>
    </language>
    <language id="3e69b1ff-b264-422d-8dfa-681e167af189" name="com.lmsintl.accent.datadictionary">
      <concept id="7106149303796447457" name="com.lmsintl.accent.datadictionary.structure.ReportValidationConstraintCheck" flags="ng" index="JcMn5" />
      <concept id="2313746784473239840" name="com.lmsintl.accent.datadictionary.structure.DataDictionaryConstraintsItem" flags="ng" index="ODGlh">
        <child id="7106149303796447439" name="constraintChecks" index="JcMnF" />
      </concept>
      <concept id="5778906858803960867" name="com.lmsintl.accent.datadictionary.structure.ReportDataDictionaryConstraintCheck" flags="ng" index="3t9H48">
        <child id="5778906858803960917" name="kind" index="3t9H5Y" />
      </concept>
    </language>
    <language id="7c8baff8-6b47-46a9-88cf-5e77056f3d91" name="com.lmsintl.accent.analyses.blocks">
      <concept id="2331667280820295309" name="com.lmsintl.accent.analyses.blocks.structure.AnalysisConfiguration" flags="ng" index="3BUAA4" />
      <concept id="5146546317692861330" name="com.lmsintl.accent.analyses.blocks.structure.AGCompositeBlockAnalysisConfig" flags="ng" index="3TgkW9">
        <property id="4369067991017294619" name="recursively" index="2SJSsF" />
      </concept>
      <concept id="4655187301461056347" name="com.lmsintl.accent.analyses.blocks.structure.BlockAnalysisConfigBase" flags="ng" index="3UT5tO">
        <property id="4557270800828594485" name="checkVacuity" index="3zAPig" />
        <reference id="4655187301461124205" name="analyzedBlock" index="3UTmx2" />
        <child id="744142370529838572" name="simTimeIncr" index="jV3LB" />
        <child id="744142370529790296" name="initialSimTime" index="jVn3j" />
      </concept>
    </language>
    <language id="2d7fadf5-33f6-4e80-a78f-0f739add2bde" name="com.mbeddr.core.buildconfig">
      <concept id="2671893947946158498" name="com.mbeddr.core.buildconfig.structure.StaticLibrary" flags="ng" index="29Nb31" />
      <concept id="5046689135693761556" name="com.mbeddr.core.buildconfig.structure.Binary" flags="ng" index="2eOfOj">
        <child id="5046689135693761559" name="referencedModules" index="2eOfOg" />
      </concept>
      <concept id="7717755763392524104" name="com.mbeddr.core.buildconfig.structure.BuildConfiguration" flags="ng" index="2v9HqL">
        <child id="5046689135694070731" name="binaries" index="2ePNbc" />
        <child id="5323740605968447026" name="target" index="2AWWZH" />
      </concept>
      <concept id="7717755763392524107" name="com.mbeddr.core.buildconfig.structure.ModuleRef" flags="ng" index="2v9HqM">
        <reference id="7717755763392524108" name="module" index="2v9HqP" />
      </concept>
      <concept id="5323740605968447022" name="com.mbeddr.core.buildconfig.structure.DesktopPlatform" flags="ng" index="2AWWZL">
        <property id="5323740605968447025" name="compilerOptions" index="2AWWZI" />
        <property id="5323740605968447024" name="compiler" index="2AWWZJ" />
        <property id="3963667026125442601" name="gdb" index="3r8Kw1" />
        <property id="3963667026125442676" name="make" index="3r8Kxs" />
      </concept>
      <concept id="2736179788492003936" name="com.mbeddr.core.buildconfig.structure.IDebuggablePlatform" flags="ng" index="1FkSt_">
        <property id="2736179788492003937" name="debugOptions" index="1FkSt$" />
      </concept>
    </language>
    <language id="42270baf-e92c-4c32-b263-d617b3fce239" name="com.mbeddr.analyses.cbmc">
      <concept id="4355827153833266" name="com.mbeddr.analyses.cbmc.structure.AnalysisConfigItem" flags="ng" index="aeBiC">
        <child id="7633344798597539205" name="configs" index="3p_7cz" />
      </concept>
      <concept id="8327535879610131181" name="com.mbeddr.analyses.cbmc.structure.ICbmcSettings" flags="ng" index="2lUzGJ">
        <property id="348741627183644680" name="hasLocalArchitectureSettings" index="22uFEx" />
        <property id="8327535879610783176" name="timeoutInSeconds" index="2l50Ka" />
        <property id="8327535879610783188" name="timeoutForSingleAnalysis" index="2l50Km" />
        <property id="8327535879610783118" name="hasLocalTimeout" index="2l50Lc" />
        <property id="8327535879610783060" name="sliceFormula" index="2l50Mm" />
        <property id="8327535879613056020" name="hasLocalCbmcSettings" index="2lelRm" />
        <property id="8327535879610145579" name="analysisDepth" index="2lUGbD" />
        <property id="8327535879610145521" name="useRefinement" index="2lUGcN" />
        <property id="8327535879610145463" name="partialLoops" index="2lUGdP" />
        <property id="8327535879610145347" name="hasUnwindingDepth" index="2lUGe1" />
        <property id="8327535879610145405" name="unwindingAssertions" index="2lUGeZ" />
        <property id="8327535879610142482" name="unwindingDepth" index="2lUHrg" />
        <property id="3246959727582218046" name="hasExternalFilesSettings" index="1Bxwel" />
      </concept>
      <concept id="7633344798597539167" name="com.mbeddr.analyses.cbmc.structure.CBMCAnalysisConfigurationRef" flags="ng" index="3p_7fT">
        <reference id="7633344798597539200" name="config" index="3p_7cA" />
      </concept>
    </language>
    <language id="2693fc71-9b0e-4b05-ab13-f57227d675f2" name="com.mbeddr.core.util">
      <concept id="4459718605982051949" name="com.mbeddr.core.util.structure.ReportingConfiguration" flags="ng" index="2Q9Fgs">
        <child id="4459718605982051999" name="strategy" index="2Q9FjI" />
      </concept>
      <concept id="4459718605982051980" name="com.mbeddr.core.util.structure.PrintfReportingStrategy" flags="ng" index="2Q9FjX" />
      <concept id="6307143892175911066" name="com.mbeddr.core.util.structure.RangeExpression" flags="ng" index="1vV05I">
        <property id="8729447926330623085" name="rightExclude" index="n43Ve" />
        <property id="8729447926330623084" name="leftExclude" index="n43Vf" />
        <child id="6307143892175911068" name="right" index="1vV05C" />
        <child id="6307143892175911067" name="left" index="1vV05J" />
      </concept>
    </language>
    <language id="2a54be15-b75a-45ed-b58e-a4ca1d4ab33f" name="com.lmsintl.accent.constantgroups">
      <concept id="5268005027694394816" name="com.lmsintl.accent.constantgroups.structure.ConstantGroupsConfigItem" flags="ng" index="nEoHD" />
    </language>
    <language id="d4280a54-f6df-4383-aa41-d1b2bffa7eb1" name="com.mbeddr.core.base">
      <concept id="4459718605982007337" name="com.mbeddr.core.base.structure.IConfigurationContainer" flags="ng" index="2Q9xDo">
        <child id="4459718605982007338" name="configurationItems" index="2Q9xDr" />
      </concept>
      <concept id="747084250476811597" name="com.mbeddr.core.base.structure.DefaultGenericChunkDependency" flags="ng" index="3GEVxB">
        <reference id="747084250476878887" name="chunk" index="3GEb4d" />
      </concept>
    </language>
    <language id="a48e4029-5556-45a5-88d2-ea85b80a6c42" name="com.lmsintl.accent.blocks.execution">
      <concept id="408641808351444898" name="com.lmsintl.accent.blocks.execution.structure.Blocks2CGenerationStrategy" flags="ng" index="16wJoH" />
    </language>
    <language id="1c0775f7-0b6b-40c6-b8d3-521fe642b38d" name="com.lmsintl.accent.blocks.test">
      <concept id="1720297823044588574" name="com.lmsintl.accent.blocks.test.structure.BlockUnitTestConfigItems" flags="ng" index="1XFeRv" />
    </language>
    <language id="5d09074f-babf-4f2b-b78b-e9929af0f3be" name="com.mbeddr.analyses.base">
      <concept id="6472990431939580591" name="com.mbeddr.analyses.base.structure.AnalysisConfiguration" flags="ng" index="3V_BKJ">
        <child id="6472990431939692464" name="analyses" index="3V$2$K" />
        <child id="559958203687603517" name="imports" index="3W6d8T" />
      </concept>
    </language>
    <language id="06d68b77-b699-4918-83b8-857e63787800" name="com.mbeddr.core.unittest">
      <concept id="8610007178384196427" name="com.mbeddr.core.unittest.structure.TestCaseConfigItem" flags="ng" index="12mU2y">
        <child id="842732463503928104" name="testStrategy" index="3GpDut" />
      </concept>
      <concept id="842732463503928106" name="com.mbeddr.core.unittest.structure.NoTestIsolationStrategy" flags="ng" index="3GpDuv" />
    </language>
    <language id="b574d547-b77e-4fed-9f60-c349c4410765" name="com.mbeddr.ext.math">
      <concept id="666324024671982185" name="com.mbeddr.ext.math.structure.MathConfigurationItem" flags="ng" index="22RD12" />
    </language>
    <language id="0aa7a488-a49e-431e-b271-0de1c2aa708e" name="com.lmsintl.accent.blocks.base">
      <concept id="3639003978751428255" name="com.lmsintl.accent.blocks.base.structure.ReportAllContractsCheckingStrategy" flags="ng" index="2jdx19" />
      <concept id="8047110689381024187" name="com.lmsintl.accent.blocks.base.structure.BlockGeneratorConfig" flags="ng" index="NoLkM">
        <property id="8047110689381024190" name="ppcChecking" index="NoLkR" />
        <child id="408641808351444880" name="generationStrategy" index="16wJov" />
      </concept>
      <concept id="2313746784473063248" name="com.lmsintl.accent.blocks.base.structure.BlockContractsItem" flags="ng" index="OD0Gx">
        <property id="1335758539214048091" name="generateAssertions" index="1x1tCb" />
        <child id="3639003978750853195" name="reportingStrategy" index="2jbtqt" />
      </concept>
      <concept id="2313746784473019151" name="com.lmsintl.accent.blocks.base.structure.ContractChecksConfigItem" flags="ng" index="OEQtY">
        <child id="2313746784473063087" name="items" index="OD0Fu" />
      </concept>
    </language>
    <language id="017fba0e-af15-4a23-b0a8-02b5c1141e75" name="com.mbeddr.cc.var.annotations">
      <concept id="6617704999132114000" name="com.mbeddr.cc.var.annotations.structure.ConfigurationMapping" flags="ng" index="IjAfM">
        <reference id="6617704999132114002" name="featureModel" index="IjAfK" />
        <reference id="6617704999132114003" name="configurationModel" index="IjAfL" />
      </concept>
      <concept id="6514264311693667923" name="com.mbeddr.cc.var.annotations.structure.VariabilityConfigItem" flags="ng" index="35TzUN">
        <child id="4920787109780106774" name="mappings" index="19yoJo" />
      </concept>
    </language>
    <language id="ceab5195-25ea-4f22-9b92-103b95ca8c0c" name="jetbrains.mps.lang.core">
      <concept id="1169194658468" name="jetbrains.mps.lang.core.structure.INamedConcept" flags="ng" index="TrEIO">
        <property id="1169194664001" name="name" index="TrG5h" />
      </concept>
    </language>
    <language id="61c69711-ed61-4850-81d9-7714ff227fb0" name="com.mbeddr.core.expressions">
      <concept id="2212975673976017893" name="com.mbeddr.core.expressions.structure.NumericLiteral" flags="ng" index="2hns93">
        <property id="2212975673976043696" name="value" index="2hmy$m" />
      </concept>
      <concept id="8860443239512128103" name="com.mbeddr.core.expressions.structure.NumberLiteral" flags="ng" index="3TlMh9" />
    </language>
  </registry>
  <node concept="3BUAA4" id="46QLwDQSltb">
    <property role="2lelRm" value="false" />
    <property role="2lUGe1" value="true" />
    <property role="2l50Lc" value="false" />
    <property role="22uFEx" value="false" />
    <property role="1Bxwel" value="false" />
    <property role="2l50Ka" value="none" />
    <property role="2l50Km" value="none" />
    <property role="2lUGeZ" value="true" />
    <property role="2lUGdP" value="false" />
    <property role="2lUHrg" value="25" />
    <property role="2lUGbD" value="none" />
    <property role="2lUGcN" value="false" />
    <property role="2l50Mm" value="false" />
    <property role="TrG5h" value="architecture_validation" />
    <node concept="3TgkW9" id="46QLwDQSltg" role="3V$2$K">
      <property role="2lelRm" value="false" />
      <property role="2lUGe1" value="true" />
      <property role="2l50Lc" value="false" />
      <property role="22uFEx" value="false" />
      <property role="1Bxwel" value="false" />
      <property role="2l50Ka" value="none" />
      <property role="2l50Km" value="none" />
      <property role="2lUGeZ" value="true" />
      <property role="2lUGdP" value="false" />
      <property role="2lUHrg" value="25" />
      <property role="2lUGbD" value="none" />
      <property role="2lUGcN" value="false" />
      <property role="2l50Mm" value="false" />
      <property role="3zAPig" value="false" />
      <property role="2SJSsF" value="false" />
      <ref role="3UTmx2" to="idgr:5$OC5nkIuf_" resolve="acc_control" />
      <node concept="1vV05I" id="1NUCkELFwJo" role="jVn3j">
        <property role="n43Ve" value="false" />
        <property role="n43Vf" value="false" />
        <node concept="3TlMh9" id="1NUCkELFwJm" role="1vV05J">
          <property role="2hmy$m" value="0" />
        </node>
        <node concept="3TlMh9" id="1NUCkELFwJn" role="1vV05C">
          <property role="2hmy$m" value="5" />
        </node>
      </node>
      <node concept="1vV05I" id="1NUCkELFwJr" role="jV3LB">
        <property role="n43Ve" value="false" />
        <property role="n43Vf" value="false" />
        <node concept="3TlMh9" id="1NUCkELFwJp" role="1vV05J">
          <property role="2hmy$m" value="0" />
        </node>
        <node concept="3TlMh9" id="1NUCkELFwJq" role="1vV05C">
          <property role="2hmy$m" value="1" />
        </node>
      </node>
    </node>
    <node concept="3GEVxB" id="46QLwDQSltc" role="3W6d8T">
      <ref role="3GEb4d" to="idgr:5$OC5nkIuf$" resolve="Top_Level_System" />
    </node>
  </node>
  <node concept="2v9HqL" id="46QLwDQSlJI">
    <node concept="2AWWZL" id="46QLwDQSlJJ" role="2AWWZH">
      <property role="2AWWZJ" value="gcc" />
      <property role="3r8Kw1" value="gdb" />
      <property role="3r8Kxs" value="make" />
      <property role="2AWWZI" value="-std=c99" />
      <property role="1FkSt$" value="-g" />
    </node>
    <node concept="2Q9Fgs" id="46QLwDQSlJL" role="2Q9xDr">
      <node concept="2Q9FjX" id="46QLwDQSlJM" role="2Q9FjI" />
    </node>
    <node concept="NoLkM" id="46QLwDQSlJT" role="2Q9xDr">
      <property role="NoLkR" value="true" />
      <node concept="16wJoH" id="46QLwDQSlJY" role="16wJov" />
    </node>
    <node concept="35TzUN" id="46QLwDQSlK6" role="2Q9xDr">
      <node concept="IjAfM" id="46QLwDQSlKd" role="19yoJo">
        <ref role="IjAfK" to="nppk:5$OC5nkIr32" resolve="car" />
        <ref role="IjAfL" to="nppk:7BCn9nl6DD8" resolve="ProductLine2" />
      </node>
    </node>
    <node concept="nEoHD" id="46QLwDQSlKn" role="2Q9xDr" />
    <node concept="OEQtY" id="46QLwDQSlKD" role="2Q9xDr">
      <node concept="OD0Gx" id="46QLwDQSlKN" role="OD0Fu">
        <property role="1x1tCb" value="false" />
        <node concept="2jdx19" id="46QLwDQSlKO" role="2jbtqt" />
      </node>
      <node concept="ODGlh" id="46QLwDQSlKV" role="OD0Fu">
        <node concept="2BVhmQ" id="46QLwDQSlLn" role="JcMnF">
          <property role="2BVhiZ" value="true" />
        </node>
        <node concept="3t9H48" id="46QLwDQSlKW" role="JcMnF">
          <node concept="JcMn5" id="46QLwDQSlKX" role="3t9H5Y" />
        </node>
      </node>
    </node>
    <node concept="2eh4Hv" id="46QLwDQSlLs" role="2Q9xDr" />
    <node concept="22RD12" id="46QLwDQSlLY" role="2Q9xDr" />
    <node concept="3C_SZV" id="46QLwDQSlMy" role="2Q9xDr" />
    <node concept="1XFeRv" id="46QLwDQSrdS" role="2Q9xDr" />
    <node concept="12mU2y" id="46QLwDQSwm4" role="2Q9xDr">
      <node concept="3GpDuv" id="46QLwDQSwmt" role="3GpDut" />
    </node>
    <node concept="aeBiC" id="46QLwDQSm5I" role="2Q9xDr">
      <node concept="3p_7fT" id="46QLwDQSm62" role="3p_7cz">
        <ref role="3p_7cA" node="46QLwDQSltb" resolve="architecture_validation" />
      </node>
    </node>
    <node concept="29Nb31" id="46QLwDQSlMP" role="2ePNbc">
      <property role="TrG5h" value="test_architecture" />
      <node concept="2v9HqM" id="46QLwDQSlMR" role="2eOfOg">
        <ref role="2v9HqP" to="idgr:5$OC5nkIuf$" resolve="Top_Level_System" />
      </node>
      <node concept="2v9HqM" id="46QLwDQSlMT" role="2eOfOg">
        <ref role="2v9HqP" to="vg1v:3fZHoupq6HH" resolve="Cla_Discrete" />
      </node>
      <node concept="2v9HqM" id="46QLwDQSlMU" role="2eOfOg">
        <ref role="2v9HqP" to="idgr:5$OC5nkIu0t" resolve="Composite_Systems" />
      </node>
      <node concept="2v9HqM" id="46QLwDQSlMV" role="2eOfOg">
        <ref role="2v9HqP" to="idgr:5$OC5nkI$iy" resolve="BlockInterfaces" />
      </node>
      <node concept="2v9HqM" id="46QLwDQSlMW" role="2eOfOg">
        <ref role="2v9HqP" to="wleb:2eN85D1ueY6" resolve="stdlib" />
      </node>
      <node concept="2v9HqM" id="46QLwDQSlMX" role="2eOfOg">
        <ref role="2v9HqP" to="wleb:2eN85D1uf2c" resolve="math" />
      </node>
      <node concept="2v9HqM" id="46QLwDQSlMY" role="2eOfOg">
        <ref role="2v9HqP" to="wleb:2eN85D1uff1" resolve="stdio" />
      </node>
      <node concept="2v9HqM" id="46QLwDQSlMZ" role="2eOfOg">
        <ref role="2v9HqP" to="vg1v:3BoJYs1xbQg" resolve="Cla_Operators" />
      </node>
      <node concept="2v9HqM" id="46QLwDQSlN0" role="2eOfOg">
        <ref role="2v9HqP" to="vg1v:39ai4Jw_wIb" resolve="Cla_Sources" />
      </node>
      <node concept="2v9HqM" id="46QLwDQSlN1" role="2eOfOg">
        <ref role="2v9HqP" to="vg1v:6VhvpNlzV7_" resolve="Cla_PredefinedConstants" />
      </node>
    </node>
  </node>
</model>

