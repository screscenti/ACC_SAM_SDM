<?xml version="1.0" encoding="UTF-8"?>
<model ref="r:221d17b6-0d30-436d-93ec-0fdb6b1be14f(_50_UnitTests)">
  <persistence version="9" />
  <languages>
    <devkit ref="9d6f81e1-9ac3-47a6-9f80-ceba2efcadad(DataDictionary)" />
    <devkit ref="84a6edcf-c6e8-49f1-af3b-05b24d2eec70(DataFlow)" />
    <devkit ref="2f364326-5dc9-47c7-b7f0-d53df6ffd9e4(ConstantGroups)" />
    <devkit ref="ed36face-06da-4ece-98fb-6f64b68c4584(PhysicalUnits)" />
    <devkit ref="29cdba7a-5b75-4c11-839f-333bd3149723(CImporter)" />
    <devkit ref="de54a584-3752-4e6c-8c5f-931ba2b29dd5(SimulinkExport)" />
    <devkit ref="4b986c6d-bc86-440d-8cd0-d6c70baecc55(AADLImport)" />
    <devkit ref="18265215-b106-4da4-a111-5fbf33a71b97(SimulinkImport)" />
    <devkit ref="a2812605-e334-464d-acc7-8fb864755ed7(FeatureModels)" />
    <devkit ref="dee9d228-3a6e-4197-9138-6647a60f7a90(ProcessSupport)" />
    <devkit ref="7cb7a2e0-fff0-4922-bf5e-ec095e163238(PolarionRM)" />
  </languages>
  <imports>
    <import index="apm3" ref="r:37dd1674-fd74-4173-9e1d-8876a030925a(_20_DataModel)" />
    <import index="nppk" ref="r:915e0ada-2a2f-495c-ab84-81ebfefe6f85(_10_Config)" />
    <import index="uphy" ref="r:8893c68a-3cda-4f42-847a-55010f9beb5f(_00_Requirements)" />
    <import index="idgr" ref="r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)" />
    <import index="qvpn" ref="r:fd965414-41f6-4ff0-aaa0-c29ebc54d471(_40_Implementation)" />
    <import index="cmgk" ref="r:679066bc-2da8-4932-a09c-5d2b3d47b911(com.mbeddr.ext.units.siunits)" implicit="true" />
    <import index="wleb" ref="r:894318cf-1d46-42d9-bf5d-cf7a79235e3f(ClaHeaders)" implicit="true" />
    <import index="vg1v" ref="3c4eda0f-1c8d-4cd3-b50a-5e3b5354aa39/r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib/ClaStdLib)" implicit="true" />
  </imports>
  <registry>
    <language id="53bab999-e9c3-428a-80be-fef5bed08f55" name="com.mbeddr.cc.trace">
      <concept id="4577779292081940160" name="com.mbeddr.cc.trace.structure.ITrace" flags="ng" index="FamN3">
        <child id="4577779292081946445" name="refs" index="Fanle" />
        <child id="4577779292081946444" name="tracekind" index="Fanlf" />
      </concept>
      <concept id="8626086128969157722" name="com.mbeddr.cc.trace.structure.TracingConfigItem" flags="ng" index="3C_SZV" />
      <concept id="439567521322928994" name="com.mbeddr.cc.trace.structure.TraceAnnotation" flags="ng" index="3HmicQ" />
      <concept id="439567521322929001" name="com.mbeddr.cc.trace.structure.TestsTraceKind" flags="ng" index="3HmicX" />
      <concept id="439567521322929331" name="com.mbeddr.cc.trace.structure.TraceTargetRef" flags="ng" index="3HmijB">
        <reference id="439567521322959431" name="target" index="3HmaCj" />
      </concept>
    </language>
    <language id="0d04a6cc-773e-4069-b9b0-11884b2ff1c8" name="com.mbeddr.ext.units">
      <concept id="5348704582971040037" name="com.mbeddr.ext.units.structure.UnitConfigItem" flags="ng" index="2eh4Hv" />
      <concept id="8337440621611212272" name="com.mbeddr.ext.units.structure.AnnotatedExpression" flags="ng" index="CIdvy">
        <child id="8337440621611267898" name="innerExpression" index="CIrOC" />
        <child id="8337440621611353453" name="specification" index="CIwXZ" />
      </concept>
      <concept id="8337440621611273669" name="com.mbeddr.ext.units.structure.UnitReference" flags="ng" index="CIsvn">
        <reference id="8337440621611297532" name="unit" index="CIi3I" />
      </concept>
      <concept id="8337440621611270429" name="com.mbeddr.ext.units.structure.UnitSpecification" flags="ng" index="CIsGf">
        <child id="8337440621611297539" name="components" index="CIi4h" />
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
    <language id="2d7fadf5-33f6-4e80-a78f-0f739add2bde" name="com.mbeddr.core.buildconfig">
      <concept id="5046689135693761556" name="com.mbeddr.core.buildconfig.structure.Binary" flags="ng" index="2eOfOj">
        <child id="5046689135693761559" name="referencedModules" index="2eOfOg" />
      </concept>
      <concept id="5046689135693761554" name="com.mbeddr.core.buildconfig.structure.Executable" flags="ng" index="2eOfOl">
        <property id="3431613015799084476" name="isTest" index="iO3LB" />
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
        <property id="1691534949151697076" name="linkerOptions" index="3I8uaA" />
      </concept>
      <concept id="2736179788492003936" name="com.mbeddr.core.buildconfig.structure.IDebuggablePlatform" flags="ng" index="1FkSt_">
        <property id="2736179788492003937" name="debugOptions" index="1FkSt$" />
      </concept>
    </language>
    <language id="2693fc71-9b0e-4b05-ab13-f57227d675f2" name="com.mbeddr.core.util">
      <concept id="4137387759417349282" name="com.mbeddr.core.util.structure.ConvertNamedToPositionalStructInit" flags="ng" index="Ft22t">
        <property id="8243255892346220193" name="replaceMissingWithDefaultValues" index="15_ccI" />
      </concept>
      <concept id="4459718605982051949" name="com.mbeddr.core.util.structure.ReportingConfiguration" flags="ng" index="2Q9Fgs">
        <child id="4459718605982051999" name="strategy" index="2Q9FjI" />
      </concept>
      <concept id="4459718605982051980" name="com.mbeddr.core.util.structure.PrintfReportingStrategy" flags="ng" index="2Q9FjX" />
      <concept id="6290199614771779389" name="com.mbeddr.core.util.structure.C90CompatibleCode" flags="ng" index="1jzx04" />
    </language>
    <language id="2a54be15-b75a-45ed-b58e-a4ca1d4ab33f" name="com.lmsintl.accent.constantgroups">
      <concept id="5268005027694394816" name="com.lmsintl.accent.constantgroups.structure.ConstantGroupsConfigItem" flags="ng" index="nEoHD" />
    </language>
    <language id="d4280a54-f6df-4383-aa41-d1b2bffa7eb1" name="com.mbeddr.core.base">
      <concept id="4459718605982007337" name="com.mbeddr.core.base.structure.IConfigurationContainer" flags="ng" index="2Q9xDo">
        <child id="4459718605982007338" name="configurationItems" index="2Q9xDr" />
      </concept>
      <concept id="747084250476811597" name="com.mbeddr.core.base.structure.DefaultGenericChunkDependency" flags="ng" index="3GEVxB">
        <property id="747084250476874891" name="reexport" index="3GEa6x" />
        <reference id="747084250476878887" name="chunk" index="3GEb4d" />
      </concept>
    </language>
    <language id="dfe2d067-f0ab-44cf-8f63-d712e06badfd" name="com.lmsintl.accent.test">
      <concept id="3209727427932046784" name="com.lmsintl.accent.test.structure.TestSuite" flags="ng" index="3jffJm">
        <child id="3209727427932046796" name="contents" index="3jffJq" />
      </concept>
      <concept id="1720297823043993405" name="com.lmsintl.accent.test.structure.BlockTestSuiteConfigItem" flags="ng" index="1XHorW" />
    </language>
    <language id="a48e4029-5556-45a5-88d2-ea85b80a6c42" name="com.lmsintl.accent.blocks.execution">
      <concept id="408641808351444898" name="com.lmsintl.accent.blocks.execution.structure.Blocks2CGenerationStrategy" flags="ng" index="16wJoH" />
    </language>
    <language id="7644af7a-e964-4abe-9894-c5f8446cffcb" name="com.lmsintl.accent.blocks.instantiation">
      <concept id="3307745037981617315" name="com.lmsintl.accent.blocks.instantiation.structure.IBlockInstanceCfg" flags="ng" index="h$ZgP">
        <reference id="3307745037981617961" name="block" index="h$ZuZ" />
      </concept>
      <concept id="3307745037981617963" name="com.lmsintl.accent.blocks.instantiation.structure.ParameterValue" flags="ng" index="h$ZuX">
        <reference id="3307745037981646025" name="param" index="h$Shv" />
        <child id="3307745037981646027" name="value" index="h$Sht" />
      </concept>
      <concept id="612653144145914592" name="com.lmsintl.accent.blocks.instantiation.structure.IParameterValueSupplier" flags="ng" index="3FPRSD">
        <child id="612653144145914737" name="paramValues" index="3FPRYS" />
      </concept>
    </language>
    <language id="6d11763d-483d-4b2b-8efc-09336c1b0001" name="com.mbeddr.core.modules">
      <concept id="6437088627575722813" name="com.mbeddr.core.modules.structure.Module" flags="ng" index="N3F4X">
        <child id="6437088627575722833" name="contents" index="N3F5h" />
        <child id="1317894735999304826" name="imports" index="2OODSX" />
      </concept>
      <concept id="6437088627575722830" name="com.mbeddr.core.modules.structure.ImplementationModule" flags="ng" index="N3F5e" />
      <concept id="8934095934011938595" name="com.mbeddr.core.modules.structure.EmptyModuleContent" flags="ng" index="2NXPZ9" />
    </language>
    <language id="1c0775f7-0b6b-40c6-b8d3-521fe642b38d" name="com.lmsintl.accent.blocks.test">
      <concept id="2668975618729467403" name="com.lmsintl.accent.blocks.test.structure.BlockUnitTest" flags="ng" index="hx$k$">
        <property id="4928838399880003728" name="reducedfromSimBlock" index="1ogs3T" />
        <child id="2668975618729467420" name="body" index="hx$kN" />
        <child id="5149698356471744301" name="subject" index="2MBy1N" />
      </concept>
      <concept id="2668975618729467419" name="com.lmsintl.accent.blocks.test.structure.TableBlockTestBody" flags="ng" index="hx$kO">
        <child id="5149698356471695306" name="entries" index="2MBY2k" />
      </concept>
      <concept id="6647461755827702359" name="com.lmsintl.accent.blocks.test.structure.OutPortValueSpec" flags="ng" index="qm$PC">
        <reference id="6647461755827702360" name="port" index="qm$PB" />
      </concept>
      <concept id="3411780537800065793" name="com.lmsintl.accent.blocks.test.structure.BlockSubject" flags="ng" index="2KsLtj" />
      <concept id="5149698356471727838" name="com.lmsintl.accent.blocks.test.structure.ExecuteBlockTestStatement" flags="ng" index="2MBA60">
        <reference id="5149698356471727840" name="test" index="2MBA6Y" />
        <child id="5149698356471727841" name="subject" index="2MBA6Z" />
      </concept>
      <concept id="5149698356471692689" name="com.lmsintl.accent.blocks.test.structure.TableEntry" flags="ng" index="2MBLFf" />
      <concept id="3209727427931944402" name="com.lmsintl.accent.blocks.test.structure.IBlockTestItnvoker" flags="ng" index="3jfgJ4">
        <child id="3209727427931957781" name="outvalues" index="3jflg3" />
      </concept>
      <concept id="1720297823044588574" name="com.lmsintl.accent.blocks.test.structure.BlockUnitTestConfigItems" flags="ng" index="1XFeRv" />
    </language>
    <language id="e865cad2-7cc8-437a-951a-665bcbcb8b1a" name="com.mbeddr.cc.requirements">
      <concept id="439567521322984797" name="com.mbeddr.cc.requirements.structure.RequirementRef" flags="ng" index="3HmcO9" />
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
    <language id="89265165-b7fa-4313-a684-9b9843de77a4" name="com.lmsintl.accent.util">
      <concept id="376695306820318136" name="com.lmsintl.accent.util.structure.PlusMinusExpression" flags="ng" index="2UFFBq">
        <child id="376695306820318192" name="value" index="2UFFAi" />
        <child id="376695306820318196" name="tolerance" index="2UFFAm" />
      </concept>
      <concept id="1720297823046268002" name="com.lmsintl.accent.util.structure.AccentUtilitiesConfigItem" flags="ng" index="1XkOQz" />
    </language>
    <language id="0aa7a488-a49e-431e-b271-0de1c2aa708e" name="com.lmsintl.accent.blocks.base">
      <concept id="8047110689381024187" name="com.lmsintl.accent.blocks.base.structure.BlockGeneratorConfig" flags="ng" index="NoLkM">
        <property id="8047110689381024190" name="ppcChecking" index="NoLkR" />
        <child id="408641808351444880" name="generationStrategy" index="16wJov" />
      </concept>
      <concept id="2313746784473019151" name="com.lmsintl.accent.blocks.base.structure.ContractChecksConfigItem" flags="ng" index="OEQtY">
        <child id="2313746784473063087" name="items" index="OD0Fu" />
      </concept>
      <concept id="8891396740501877761" name="com.lmsintl.accent.blocks.base.structure.IIntoBlock" flags="ng" index="1DME8V">
        <child id="3209727427931957670" name="invalues" index="3jfluK" />
      </concept>
      <concept id="8891396740502296817" name="com.lmsintl.accent.blocks.base.structure.InPortValueSpec" flags="ng" index="1DO0Vb">
        <reference id="8891396740502296818" name="port" index="1DO0V8" />
      </concept>
      <concept id="8891396740502208788" name="com.lmsintl.accent.blocks.base.structure.PortValueSpec" flags="ng" index="1DPXsI">
        <child id="8891396740502208789" name="value" index="1DPXsJ" />
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
      <concept id="2613872510229259997" name="com.mbeddr.cc.var.annotations.structure.ConditionalReplacement" flags="ng" index="3o6v7J">
        <child id="2613872510229260000" name="replacement" index="3o6v7i" />
        <child id="2613872510229260001" name="condition" index="3o6v7j" />
      </concept>
      <concept id="2613872510229282925" name="com.mbeddr.cc.var.annotations.structure.FeatureCondition" flags="ng" index="3o9_tv">
        <child id="2613872510229282926" name="expr" index="3o9_ts" />
      </concept>
    </language>
    <language id="e401b447-8019-4ccd-a72c-bfb0230f5782" name="com.mbeddr.cc.var.fm">
      <concept id="7642065485959505457" name="com.mbeddr.cc.var.fm.structure.FeatureRef" flags="ng" index="2qVrgw">
        <reference id="7642065485959505458" name="feature" index="2qVrgz" />
      </concept>
    </language>
    <language id="ceab5195-25ea-4f22-9b92-103b95ca8c0c" name="jetbrains.mps.lang.core">
      <concept id="1133920641626" name="jetbrains.mps.lang.core.structure.BaseConcept" flags="ng" index="2VYdi">
        <child id="5169995583184591170" name="smodelAttribute" index="lGtFl" />
      </concept>
      <concept id="1169194658468" name="jetbrains.mps.lang.core.structure.INamedConcept" flags="ng" index="TrEIO">
        <property id="1169194664001" name="name" index="TrG5h" />
      </concept>
    </language>
    <language id="61c69711-ed61-4850-81d9-7714ff227fb0" name="com.mbeddr.core.expressions">
      <concept id="3005510381523579442" name="com.mbeddr.core.expressions.structure.UnaryExpression" flags="ng" index="2aKSnQ">
        <child id="7254843406768839760" name="expression" index="1_9fRO" />
      </concept>
      <concept id="2212975673976017893" name="com.mbeddr.core.expressions.structure.NumericLiteral" flags="ng" index="2hns93">
        <property id="2212975673976043696" name="value" index="2hmy$m" />
      </concept>
      <concept id="5763383285156533447" name="com.mbeddr.core.expressions.structure.ParensExpression" flags="ng" index="2BPB98" />
      <concept id="8860443239512128103" name="com.mbeddr.core.expressions.structure.NumberLiteral" flags="ng" index="3TlMh9" />
    </language>
  </registry>
  <node concept="N3F5e" id="5$OC5nkI$Hn">
    <property role="TrG5h" value="UnitTesting" />
    <node concept="2NXPZ9" id="2Cn49cnvZpc" role="N3F5h">
      <property role="TrG5h" value="empty_1476880306228_10" />
    </node>
    <node concept="hx$k$" id="3sY9rDAhJq4" role="N3F5h">
      <property role="1ogs3T" value="false" />
      <property role="TrG5h" value="Implementation_UT" />
      <node concept="2KsLtj" id="3sY9rDAik0g" role="2MBy1N">
        <ref role="h$ZuZ" to="qvpn:5$OC5nkIuq9" resolve="ssd_safe_distance_computation" />
        <node concept="h$ZuX" id="3sY9rDAik0m" role="3FPRYS">
          <ref role="h$Shv" to="idgr:5$OC5nkI$iY" resolve="T_SAFE_hatchback" />
          <node concept="CIdvy" id="3sY9rDAiknH" role="h$Sht">
            <node concept="3TlMh9" id="3sY9rDAiknG" role="CIrOC">
              <property role="2hmy$m" value="2" />
            </node>
            <node concept="CIsGf" id="3sY9rDAiknI" role="CIwXZ">
              <node concept="CIsvn" id="3sY9rDAiknJ" role="CIi4h">
                <ref role="CIi3I" to="cmgk:6TeNRL7trCJ" resolve="s" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="hx$kO" id="3sY9rDAikqA" role="hx$kN">
        <node concept="2MBLFf" id="3sY9rDAikqB" role="2MBY2k">
          <node concept="1DO0Vb" id="3sY9rDAikvY" role="3jfluK">
            <ref role="1DO0V8" to="idgr:5$OC5nkI$iJ" resolve="v_acc_demo" />
            <node concept="CIdvy" id="3sY9rDAikNS" role="1DPXsJ">
              <node concept="3TlMh9" id="3sY9rDAikNR" role="CIrOC">
                <property role="2hmy$m" value="28" />
              </node>
              <node concept="CIsGf" id="3sY9rDAikNT" role="CIwXZ">
                <node concept="CIsvn" id="3sY9rDAikNU" role="CIi4h">
                  <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
                </node>
              </node>
            </node>
          </node>
          <node concept="1DO0Vb" id="3sY9rDAikQS" role="3jfluK">
            <ref role="1DO0V8" to="idgr:5$OC5nkI$iO" resolve="v_lead" />
            <node concept="CIdvy" id="3sY9rDAilii" role="1DPXsJ">
              <node concept="3TlMh9" id="3sY9rDAilih" role="CIrOC">
                <property role="2hmy$m" value="27" />
              </node>
              <node concept="CIsGf" id="3sY9rDAilij" role="CIwXZ">
                <node concept="CIsvn" id="3sY9rDAilik" role="CIi4h">
                  <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
                </node>
              </node>
            </node>
          </node>
          <node concept="qm$PC" id="3sY9rDAilli" role="3jflg3">
            <ref role="qm$PB" to="idgr:5$OC5nkI$iT" resolve="d_safe" />
            <node concept="CIdvy" id="3sY9rDAilKj" role="1DPXsJ">
              <node concept="3TlMh9" id="3sY9rDAilKi" role="CIrOC">
                <property role="2hmy$m" value="9" />
                <node concept="3o6v7J" id="3sY9rDAilNa" role="lGtFl">
                  <node concept="3o9_tv" id="3sY9rDAilNb" role="3o6v7j">
                    <node concept="2qVrgw" id="3sY9rDAilQ8" role="3o9_ts">
                      <ref role="2qVrgz" to="nppk:5$OC5nkIr37" resolve="Sedan_VW" />
                    </node>
                  </node>
                  <node concept="3TlMh9" id="3sY9rDAilQj" role="3o6v7i">
                    <property role="2hmy$m" value="12" />
                  </node>
                </node>
              </node>
              <node concept="CIsGf" id="3sY9rDAilKk" role="CIwXZ">
                <node concept="CIsvn" id="3sY9rDAilKl" role="CIi4h">
                  <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="2MBLFf" id="3sY9rDAilTG" role="2MBY2k">
          <node concept="1DO0Vb" id="3sY9rDAim10" role="3jfluK">
            <ref role="1DO0V8" to="idgr:5$OC5nkI$iJ" resolve="v_acc_demo" />
            <node concept="CIdvy" id="3sY9rDAimfg" role="1DPXsJ">
              <node concept="3TlMh9" id="3sY9rDAimff" role="CIrOC">
                <property role="2hmy$m" value="28" />
              </node>
              <node concept="CIsGf" id="3sY9rDAimfh" role="CIwXZ">
                <node concept="CIsvn" id="3sY9rDAimfi" role="CIi4h">
                  <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
                </node>
              </node>
            </node>
          </node>
          <node concept="1DO0Vb" id="3sY9rDAimig" role="3jfluK">
            <ref role="1DO0V8" to="idgr:5$OC5nkI$iO" resolve="v_lead" />
            <node concept="CIdvy" id="3sY9rDAimC0" role="1DPXsJ">
              <node concept="3TlMh9" id="3sY9rDAimBZ" role="CIrOC">
                <property role="2hmy$m" value="29" />
              </node>
              <node concept="CIsGf" id="3sY9rDAimC1" role="CIwXZ">
                <node concept="CIsvn" id="3sY9rDAimC2" role="CIi4h">
                  <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
                </node>
              </node>
            </node>
          </node>
          <node concept="qm$PC" id="3sY9rDAimF0" role="3jflg3">
            <ref role="qm$PB" to="idgr:5$OC5nkI$iT" resolve="d_safe" />
            <node concept="2UFFBq" id="2wOYKhJRzvv" role="1DPXsJ">
              <node concept="2BPB98" id="2wOYKhJRzvw" role="2UFFAi">
                <node concept="CIdvy" id="3sY9rDAin61" role="1_9fRO">
                  <node concept="3TlMh9" id="3sY9rDAin60" role="CIrOC">
                    <property role="2hmy$m" value="2" />
                  </node>
                  <node concept="CIsGf" id="3sY9rDAin62" role="CIwXZ">
                    <node concept="CIsvn" id="3sY9rDAin63" role="CIi4h">
                      <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
                    </node>
                  </node>
                </node>
              </node>
              <node concept="CIdvy" id="2wOYKhJR$5N" role="2UFFAm">
                <node concept="3TlMh9" id="2wOYKhJR$5M" role="CIrOC">
                  <property role="2hmy$m" value="5" />
                </node>
                <node concept="CIsGf" id="2wOYKhJR$5O" role="CIwXZ">
                  <node concept="CIsvn" id="2wOYKhJR$5P" role="CIi4h">
                    <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3HmicQ" id="5d2c0EzHAXA" role="lGtFl">
        <node concept="3HmicX" id="5d2c0EzLfPM" role="Fanlf" />
        <node concept="3HmcO9" id="5d2c0EzLfPJ" role="Fanle">
          <ref role="3HmaCj" to="uphy:5$OC5nkIq$q" resolve="FollowingDistance1" />
        </node>
      </node>
    </node>
    <node concept="2NXPZ9" id="2Cn49cnwrTD" role="N3F5h">
      <property role="TrG5h" value="empty_1476882074562_15" />
    </node>
    <node concept="2NXPZ9" id="2Cn49cnwu1v" role="N3F5h">
      <property role="TrG5h" value="empty_1476882202372_22" />
    </node>
    <node concept="3jffJm" id="5$OC5nkI$HM" role="N3F5h">
      <property role="TrG5h" value="interfaceTesting" />
      <node concept="2MBA60" id="3sY9rDAc5BE" role="3jffJq">
        <ref role="2MBA6Y" to="idgr:3sY9rDAbv4P" resolve="Test_ssd_safe_distance_TableUT" />
        <node concept="2KsLtj" id="3sY9rDAc5He" role="2MBA6Z">
          <ref role="h$ZuZ" to="qvpn:5$OC5nkIuq9" resolve="ssd_safe_distance_computation" />
        </node>
      </node>
      <node concept="2MBA60" id="3sY9rDAc5E_" role="3jffJq">
        <ref role="2MBA6Y" to="idgr:5$OC5nkI$Hp" resolve="Test_ssd_safe_distance_cCode_UT" />
        <node concept="2KsLtj" id="3sY9rDAc5J8" role="2MBA6Z">
          <ref role="h$ZuZ" to="qvpn:5$OC5nkIuq9" resolve="ssd_safe_distance_computation" />
        </node>
      </node>
      <node concept="2MBA60" id="3sY9rDAin8Y" role="3jffJq">
        <ref role="2MBA6Y" node="3sY9rDAhJq4" resolve="Implementation_UT" />
      </node>
    </node>
    <node concept="2NXPZ9" id="5$OC5nkI$HP" role="N3F5h">
      <property role="TrG5h" value="empty_1461304577908_95" />
    </node>
    <node concept="3GEVxB" id="5$OC5nkI$HQ" role="2OODSX">
      <property role="3GEa6x" value="true" />
      <ref role="3GEb4d" to="idgr:5$OC5nkI$iy" resolve="BlockInterfaces" />
    </node>
    <node concept="3GEVxB" id="5$OC5nkI$HR" role="2OODSX">
      <property role="3GEa6x" value="true" />
      <ref role="3GEb4d" to="qvpn:5$OC5nkIuq3" resolve="ACC_SafeDistance_Atomic" />
    </node>
    <node concept="3GEVxB" id="3sY9rDAiktf" role="2OODSX">
      <ref role="3GEb4d" to="nppk:5$OC5nkIr31" resolve="Car_Features" />
    </node>
    <node concept="3GEVxB" id="5d2c0EzHAJU" role="2OODSX">
      <ref role="3GEb4d" to="uphy:5$OC5nkIqxC" resolve="ACCRequirements" />
    </node>
    <node concept="3GEVxB" id="5d2c0EzLfC2" role="2OODSX">
      <ref role="3GEb4d" to="uphy:5$OC5nkIq$3" resolve="ACCTestCases" />
    </node>
  </node>
  <node concept="2v9HqL" id="5$OC5nkI$gy">
    <node concept="2AWWZL" id="5$OC5nkI$gz" role="2AWWZH">
      <property role="2AWWZJ" value="gcc" />
      <property role="3r8Kw1" value="gdb" />
      <property role="3r8Kxs" value="make" />
      <property role="2AWWZI" value="-std=c99" />
      <property role="1FkSt$" value="-g" />
      <property role="3I8uaA" value="" />
    </node>
    <node concept="2Q9Fgs" id="5$OC5nkI$g$" role="2Q9xDr">
      <node concept="2Q9FjX" id="5$OC5nkI$g_" role="2Q9FjI" />
    </node>
    <node concept="1XFeRv" id="5$OC5nkI$gA" role="2Q9xDr" />
    <node concept="12mU2y" id="5$OC5nkI$gB" role="2Q9xDr">
      <node concept="3GpDuv" id="5NclTJJGGjr" role="3GpDut" />
    </node>
    <node concept="35TzUN" id="5NclTJJGGjL" role="2Q9xDr">
      <node concept="IjAfM" id="5NclTJJGGk5" role="19yoJo">
        <ref role="IjAfK" to="nppk:5$OC5nkIr32" resolve="car" />
        <ref role="IjAfL" to="nppk:7BCn9nl6DD8" resolve="ProductLine2" />
      </node>
    </node>
    <node concept="1XHorW" id="5$OC5nkI$gD" role="2Q9xDr" />
    <node concept="22RD12" id="5$OC5nkI$gE" role="2Q9xDr" />
    <node concept="OEQtY" id="5$OC5nkI$gF" role="2Q9xDr">
      <node concept="ODGlh" id="5$OC5nkI$gG" role="OD0Fu">
        <node concept="3t9H48" id="5$OC5nkI$gH" role="JcMnF">
          <node concept="JcMn5" id="5$OC5nkI$gI" role="3t9H5Y" />
        </node>
      </node>
    </node>
    <node concept="NoLkM" id="5$OC5nkI$gJ" role="2Q9xDr">
      <property role="NoLkR" value="true" />
      <node concept="16wJoH" id="5$OC5nkI$gK" role="16wJov" />
    </node>
    <node concept="1jzx04" id="5$OC5nkI$gL" role="2Q9xDr">
      <property role="15_ccI" value="true" />
    </node>
    <node concept="3C_SZV" id="5$OC5nkI$gM" role="2Q9xDr" />
    <node concept="2eh4Hv" id="5$OC5nkI$gN" role="2Q9xDr" />
    <node concept="nEoHD" id="5$OC5nkI$gO" role="2Q9xDr" />
    <node concept="1XkOQz" id="2wOYKhJRDKr" role="2Q9xDr" />
    <node concept="2eOfOl" id="5$OC5nkI$gP" role="2ePNbc">
      <property role="iO3LB" value="true" />
      <property role="TrG5h" value="unit_test_ACC" />
      <node concept="2v9HqM" id="3sY9rDAc6nt" role="2eOfOg">
        <ref role="2v9HqP" node="5$OC5nkI$Hn" resolve="UnitTesting" />
      </node>
      <node concept="2v9HqM" id="3sY9rDAc6nv" role="2eOfOg">
        <ref role="2v9HqP" to="wleb:2eN85D1uf2c" resolve="math" />
      </node>
      <node concept="2v9HqM" id="3sY9rDAc6nw" role="2eOfOg">
        <ref role="2v9HqP" to="qvpn:5$OC5nkIuq3" resolve="ACC_SafeDistance_Atomic" />
      </node>
      <node concept="2v9HqM" id="3sY9rDAc6nx" role="2eOfOg">
        <ref role="2v9HqP" to="vg1v:39ai4Jw_wIb" resolve="Cla_Sources" />
      </node>
      <node concept="2v9HqM" id="3sY9rDAc6ny" role="2eOfOg">
        <ref role="2v9HqP" to="vg1v:3fZHoupq6HH" resolve="Cla_Discrete" />
      </node>
      <node concept="2v9HqM" id="3sY9rDAc6nz" role="2eOfOg">
        <ref role="2v9HqP" to="wleb:2eN85D1uff1" resolve="stdio" />
      </node>
      <node concept="2v9HqM" id="3sY9rDAc6n$" role="2eOfOg">
        <ref role="2v9HqP" to="vg1v:3BoJYs1xbQg" resolve="Cla_Operators" />
      </node>
      <node concept="2v9HqM" id="3sY9rDAc6n_" role="2eOfOg">
        <ref role="2v9HqP" to="wleb:2eN85D1ueY6" resolve="stdlib" />
      </node>
      <node concept="2v9HqM" id="3sY9rDAc6nA" role="2eOfOg">
        <ref role="2v9HqP" to="idgr:5$OC5nkI$iy" resolve="BlockInterfaces" />
      </node>
      <node concept="2v9HqM" id="3sY9rDAc6nB" role="2eOfOg">
        <ref role="2v9HqP" to="vg1v:6VhvpNlzV7_" resolve="Cla_PredefinedConstants" />
      </node>
      <node concept="2v9HqM" id="2qeEN7$LLgW" role="2eOfOg">
        <ref role="2v9HqP" to="idgr:5$OC5nkIu0t" resolve="Composite_Systems" />
      </node>
      <node concept="2v9HqM" id="2qeEN7$LLgX" role="2eOfOg">
        <ref role="2v9HqP" to="idgr:5$OC5nkIuf$" resolve="Top_Level_System" />
      </node>
    </node>
  </node>
</model>

