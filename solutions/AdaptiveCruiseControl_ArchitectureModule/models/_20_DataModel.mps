<?xml version="1.0" encoding="UTF-8"?>
<model ref="r:37dd1674-fd74-4173-9e1d-8876a030925a(_20_DataModel)">
  <persistence version="9" />
  <languages>
    <use id="0d04a6cc-773e-4069-b9b0-11884b2ff1c8" name="com.mbeddr.ext.units" version="1" />
    <use id="e401b447-8019-4ccd-a72c-bfb0230f5782" name="com.mbeddr.cc.var.fm" version="1" />
    <use id="92d2ea16-5a42-4fdf-a676-c7604efe3504" name="de.slisson.mps.richtext" version="0" />
    <use id="2a54be15-b75a-45ed-b58e-a4ca1d4ab33f" name="com.lmsintl.accent.constantgroups" version="1" />
    <use id="3e69b1ff-b264-422d-8dfa-681e167af189" name="com.lmsintl.accent.datadictionary" version="2" />
    <use id="d4280a54-f6df-4383-aa41-d1b2bffa7eb1" name="com.mbeddr.core.base" version="3" />
    <use id="61c69711-ed61-4850-81d9-7714ff227fb0" name="com.mbeddr.core.expressions" version="3" />
  </languages>
  <imports>
    <import index="nppk" ref="r:915e0ada-2a2f-495c-ab84-81ebfefe6f85(_10_Config)" />
    <import index="cmgk" ref="r:679066bc-2da8-4932-a09c-5d2b3d47b911(com.mbeddr.ext.units.siunits)" />
  </imports>
  <registry>
    <language id="0d04a6cc-773e-4069-b9b0-11884b2ff1c8" name="com.mbeddr.ext.units">
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
      <concept id="8337440621611400980" name="com.mbeddr.ext.units.structure.AnnotatedType" flags="ng" index="CIVk6">
        <child id="8337440621611401032" name="specification" index="CIVlq" />
      </concept>
    </language>
    <language id="3e69b1ff-b264-422d-8dfa-681e167af189" name="com.lmsintl.accent.datadictionary">
      <concept id="5449787351251541221" name="com.lmsintl.accent.datadictionary.structure.DDEntry" flags="ng" index="2fo_ht">
        <child id="5449787351251541224" name="type" index="2fo_hg" />
        <child id="5449787351251541226" name="unit" index="2fo_hi" />
        <child id="5449787351251543411" name="constraints" index="2foARb" />
        <child id="5449787351251543406" name="description" index="2foARm" />
        <child id="1831260205534461848" name="effectiveType" index="13mkVG" />
        <child id="1743289240559650302" name="kind" index="3GoeQH" />
      </concept>
      <concept id="5449787351251505935" name="com.lmsintl.accent.datadictionary.structure.DataDictionary" flags="ng" index="2foHIR">
        <child id="5449787351251550748" name="entries" index="2fpoE$" />
      </concept>
      <concept id="5449787351251600943" name="com.lmsintl.accent.datadictionary.structure.RootDDCOwner" flags="ng" index="2fpkUn">
        <child id="5449787351251600946" name="dictionary" index="2fpkUa" />
        <child id="3547064050851651076" name="imports" index="VEURM" />
        <child id="6807962574730452615" name="descriprion" index="1wzedz" />
      </concept>
      <concept id="8442343468562530891" name="com.lmsintl.accent.datadictionary.structure.RangeConstraint" flags="ng" index="3eERzG">
        <child id="8442343468562662619" name="max" index="3eFnTW" />
        <child id="8442343468562662617" name="min" index="3eFnTY" />
      </concept>
      <concept id="1743289240559650244" name="com.lmsintl.accent.datadictionary.structure.DDValueKind" flags="ng" index="3GoeQn" />
      <concept id="1743289240559650215" name="com.lmsintl.accent.datadictionary.structure.DDQuantityKind" flags="ng" index="3GoeRO" />
      <concept id="291293396432529016" name="com.lmsintl.accent.datadictionary.structure.MaxConstraint" flags="ng" index="3ZNsuO">
        <child id="291293396432529018" name="max" index="3ZNsuQ" />
      </concept>
    </language>
    <language id="92d2ea16-5a42-4fdf-a676-c7604efe3504" name="de.slisson.mps.richtext">
      <concept id="2557074442922380897" name="de.slisson.mps.richtext.structure.Text" flags="ng" index="19SGf9">
        <child id="2557074442922392302" name="words" index="19SJt6" />
      </concept>
      <concept id="2557074442922438156" name="de.slisson.mps.richtext.structure.Word" flags="ng" index="19SUe$">
        <property id="2557074442922438158" name="escapedValue" index="19SUeA" />
      </concept>
    </language>
    <language id="2a54be15-b75a-45ed-b58e-a4ca1d4ab33f" name="com.lmsintl.accent.constantgroups">
      <concept id="7642065485970623377" name="com.lmsintl.accent.constantgroups.structure.ConstantGroup" flags="ng" index="2rwPA0">
        <child id="7642065485970623378" name="entries" index="2rwPA3" />
        <child id="3457387547004715789" name="variants" index="31U5yE" />
      </concept>
      <concept id="7642065485970623381" name="com.lmsintl.accent.constantgroups.structure.CGEntry" flags="ng" index="2rwPA4">
        <child id="7642065485970623382" name="variantValues" index="2rwPA7" />
        <child id="3457387547005236068" name="defaultValue" index="31S2z3" />
      </concept>
      <concept id="3457387547007317867" name="com.lmsintl.accent.constantgroups.structure.CGEntryValue" flags="ng" index="31KuNc">
        <reference id="3457387547007317919" name="selector" index="31KuKS" />
        <child id="3457387547007317947" name="value" index="31KuKs" />
      </concept>
      <concept id="3457387547006572483" name="com.lmsintl.accent.constantgroups.structure.VariantSelector" flags="ng" index="31P8L$">
        <child id="3457387547006572490" name="expr" index="31P8LH" />
      </concept>
      <concept id="354319151003236552" name="com.lmsintl.accent.constantgroups.structure.ConstantGroupOwner" flags="ng" index="3SgbeF">
        <child id="354319151003262857" name="imports" index="3Sg1jE" />
        <child id="354319151003236581" name="groups" index="3Sgbe6" />
      </concept>
    </language>
    <language id="d4280a54-f6df-4383-aa41-d1b2bffa7eb1" name="com.mbeddr.core.base">
      <concept id="2843190776579063025" name="com.mbeddr.core.base.structure.NameSuffix" flags="ng" index="2HR7o3">
        <property id="2843190776579063838" name="suffix" index="2HR8FG" />
      </concept>
      <concept id="8375407818529178006" name="com.mbeddr.core.base.structure.TextBlock" flags="ng" index="OjmMv">
        <child id="8375407818529178007" name="text" index="OjmMu" />
      </concept>
      <concept id="3111692391937281265" name="com.mbeddr.core.base.structure.ControlledNameAttribute" flags="ng" index="1sAZXf">
        <reference id="3111692391937282009" name="nameController" index="1sAZLB" />
        <child id="2843190776579069816" name="suffix" index="2HR9Qa" />
      </concept>
      <concept id="747084250476811597" name="com.mbeddr.core.base.structure.DefaultGenericChunkDependency" flags="ng" index="3GEVxB">
        <reference id="747084250476878887" name="chunk" index="3GEb4d" />
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
      <concept id="3364660638048049750" name="jetbrains.mps.lang.core.structure.PropertyAttribute" flags="ng" index="A9Btg">
        <property id="1757699476691236117" name="propertyName" index="2qtEX9" />
        <property id="1341860900487648621" name="propertyId" index="P4ACc" />
      </concept>
      <concept id="1169194658468" name="jetbrains.mps.lang.core.structure.INamedConcept" flags="ng" index="TrEIO">
        <property id="1169194664001" name="name" index="TrG5h" />
      </concept>
    </language>
    <language id="61c69711-ed61-4850-81d9-7714ff227fb0" name="com.mbeddr.core.expressions">
      <concept id="8463282783691618461" name="com.mbeddr.core.expressions.structure.UnsignedInt8tType" flags="ng" index="26Vqp4" />
      <concept id="8864856114140038681" name="com.mbeddr.core.expressions.structure.DoubleType" flags="ng" index="2fgwQN" />
      <concept id="2212975673976017893" name="com.mbeddr.core.expressions.structure.NumericLiteral" flags="ng" index="2hns93">
        <property id="2212975673976043696" name="value" index="2hmy$m" />
      </concept>
      <concept id="318113533128716675" name="com.mbeddr.core.expressions.structure.ITyped" flags="ng" index="2C2TGh">
        <child id="318113533128716676" name="type" index="2C2TGm" />
      </concept>
      <concept id="743779816742251347" name="com.mbeddr.core.expressions.structure.ITypeDecorator" flags="ng" index="1Ml8iu">
        <child id="7336544617004013388" name="valueType" index="UxbcT" />
      </concept>
      <concept id="8860443239512128054" name="com.mbeddr.core.expressions.structure.Type" flags="ng" index="3TlMgo">
        <property id="2941277002445651368" name="const" index="2c7vTL" />
        <property id="2941277002448691247" name="volatile" index="2caQfQ" />
      </concept>
      <concept id="8860443239512128103" name="com.mbeddr.core.expressions.structure.NumberLiteral" flags="ng" index="3TlMh9" />
    </language>
  </registry>
  <node concept="2fpkUn" id="2ZezXqsk72O">
    <property role="TrG5h" value="DataDictionary" />
    <node concept="2foHIR" id="2ZezXqsk72P" role="2fpkUa">
      <node concept="2fo_ht" id="2ZezXqsk72Q" role="2fpoE$">
        <property role="TrG5h" value="D_BRAKE_sedan" />
        <node concept="OjmMv" id="2ZezXqsk72R" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk72S" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk72T" role="19SJt6">
              <property role="19SUeA" value="Maximum braking distance (i.e braking distance  at notional maximum vehicle speed  75mph)" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk72U" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeQn" id="2ZezXqsk730" role="3GoeQH" />
        <node concept="3ZNsuO" id="6dAJ1ZF6G2G" role="2foARb">
          <node concept="CIdvy" id="6dAJ1ZF6GpX" role="3ZNsuQ">
            <node concept="3TlMh9" id="6dAJ1ZF6GpW" role="CIrOC">
              <property role="2hmy$m" value="2" />
            </node>
            <node concept="CIsGf" id="6dAJ1ZF6GpY" role="CIwXZ">
              <node concept="CIsvn" id="6dAJ1ZF6GpZ" role="CIi4h">
                <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
              </node>
            </node>
          </node>
        </node>
        <node concept="CIsvn" id="6dAJ1ZF6G_z" role="2fo_hi">
          <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
        </node>
        <node concept="CIVk6" id="6dAJ1ZF6GDv" role="13mkVG">
          <node concept="2fgwQN" id="6dAJ1ZF6GDt" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="6dAJ1ZF6GDw" role="CIVlq">
            <node concept="CIsvn" id="6dAJ1ZF6GDu" role="CIi4h">
              <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk731" role="2fpoE$">
        <property role="TrG5h" value="KP_SS" />
        <node concept="OjmMv" id="2ZezXqsk732" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk733" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk734" role="19SJt6">
              <property role="19SUeA" value="Proportional gain for the speed setpoint computation loop" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk735" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeQn" id="2ZezXqsk736" role="3GoeQH" />
        <node concept="2fgwQN" id="2ZezXqsk737" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk738" role="2fpoE$">
        <property role="TrG5h" value="KI_SS_hatchback" />
        <node concept="OjmMv" id="2ZezXqsk739" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk73a" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk73b" role="19SJt6">
              <property role="19SUeA" value="Integral gain for the speed setpoint computation loop" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk73c" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeQn" id="2ZezXqsk73d" role="3GoeQH" />
        <node concept="2fgwQN" id="2ZezXqsk73e" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3ZNsuO" id="26HZEOga1Sy" role="2foARb">
          <node concept="3TlMh9" id="26HZEOga1SL" role="3ZNsuQ">
            <property role="2hmy$m" value="20" />
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk73f" role="2fpoE$">
        <property role="TrG5h" value="KD_SS" />
        <node concept="OjmMv" id="2ZezXqsk73g" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk73h" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk73i" role="19SJt6">
              <property role="19SUeA" value="Derivative gain for the speed setpoint computation loop" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk73j" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeQn" id="2ZezXqsk73k" role="3GoeQH" />
        <node concept="2fgwQN" id="2ZezXqsk73l" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk73m" role="2fpoE$">
        <property role="TrG5h" value="KP_ST" />
        <node concept="OjmMv" id="2ZezXqsk73n" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk73o" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk73p" role="19SJt6">
              <property role="19SUeA" value="Proportional gain for the speed tracking loop" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk73q" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeQn" id="2ZezXqsk73r" role="3GoeQH" />
        <node concept="2fgwQN" id="2ZezXqsk73s" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk73t" role="2fpoE$">
        <property role="TrG5h" value="KI_ST" />
        <node concept="OjmMv" id="2ZezXqsk73u" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk73v" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk73w" role="19SJt6">
              <property role="19SUeA" value="Integral gain for the speed tracking loop" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk73x" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeQn" id="2ZezXqsk73y" role="3GoeQH" />
        <node concept="2fgwQN" id="2ZezXqsk73z" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk73$" role="2fpoE$">
        <property role="TrG5h" value="KD_ST" />
        <node concept="OjmMv" id="2ZezXqsk73_" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk73A" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk73B" role="19SJt6">
              <property role="19SUeA" value="Derivative gain for the speed tracking loop" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk73C" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeQn" id="2ZezXqsk73D" role="3GoeQH" />
        <node concept="2fgwQN" id="2ZezXqsk73E" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk73F" role="2fpoE$">
        <property role="TrG5h" value="BRAKE_OFF" />
        <node concept="OjmMv" id="2ZezXqsk73G" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk73H" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk73I" role="19SJt6">
              <property role="19SUeA" value="Brake is off" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk73J" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeQn" id="2ZezXqsk73K" role="3GoeQH" />
        <node concept="2fgwQN" id="2ZezXqsk73L" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk73M" role="2fpoE$">
        <property role="TrG5h" value="THROTTLE_ZERO" />
        <node concept="OjmMv" id="2ZezXqsk73N" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk73O" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk73P" role="19SJt6">
              <property role="19SUeA" value="Zero throttle" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk73Q" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeQn" id="2ZezXqsk73R" role="3GoeQH" />
        <node concept="2fgwQN" id="2ZezXqsk73S" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk73T" role="2fpoE$">
        <property role="TrG5h" value="T_SAFE" />
        <node concept="OjmMv" id="2ZezXqsk73U" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk73V" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk73W" role="19SJt6">
              <property role="19SUeA" value="Minimum time required for the driver to avoid collision " />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk73X" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeQn" id="2ZezXqsk73Y" role="3GoeQH" />
        <node concept="CIsvn" id="2ZezXqsk73Z" role="2fo_hi">
          <ref role="CIi3I" to="cmgk:6TeNRL7trCJ" resolve="s" />
        </node>
        <node concept="CIVk6" id="2ZezXqsk740" role="13mkVG">
          <node concept="2fgwQN" id="2ZezXqsk741" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk742" role="CIVlq">
            <node concept="CIsvn" id="2ZezXqsk743" role="CIi4h">
              <ref role="CIi3I" to="cmgk:6TeNRL7trCJ" resolve="s" />
            </node>
          </node>
        </node>
        <node concept="3eERzG" id="2ZezXqsk744" role="2foARb">
          <node concept="CIdvy" id="2ZezXqsk745" role="3eFnTY">
            <node concept="3TlMh9" id="2ZezXqsk746" role="CIrOC">
              <property role="2hmy$m" value="0" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk747" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk748" role="CIi4h">
                <ref role="CIi3I" to="cmgk:6TeNRL7trCJ" resolve="s" />
              </node>
            </node>
          </node>
          <node concept="CIdvy" id="2ZezXqsk749" role="3eFnTW">
            <node concept="3TlMh9" id="2ZezXqsk74a" role="CIrOC">
              <property role="2hmy$m" value="10" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk74b" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk74c" role="CIi4h">
                <ref role="CIi3I" to="cmgk:6TeNRL7trCJ" resolve="s" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk74d" role="2fpoE$">
        <property role="TrG5h" value="MODE_CRUISE" />
        <node concept="OjmMv" id="2ZezXqsk74e" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk74f" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk74g" role="19SJt6">
              <property role="19SUeA" value="Cruise Mode" />
            </node>
          </node>
        </node>
        <node concept="3GoeQn" id="2ZezXqsk74h" role="3GoeQH" />
        <node concept="2fgwQN" id="2ZezXqsk74i" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk74j" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk74k" role="2fpoE$">
        <property role="TrG5h" value="MODE_DISTFOLLOW" />
        <node concept="OjmMv" id="2ZezXqsk74l" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk74m" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk74n" role="19SJt6">
              <property role="19SUeA" value="Distance following mode" />
            </node>
          </node>
        </node>
        <node concept="3GoeQn" id="2ZezXqsk74o" role="3GoeQH" />
        <node concept="2fgwQN" id="2ZezXqsk74p" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk74q" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk74r" role="2fpoE$">
        <property role="TrG5h" value="v_acc" />
        <node concept="OjmMv" id="2ZezXqsk74s" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk74t" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk74u" role="19SJt6">
              <property role="19SUeA" value="ACC Vehicle speed" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk74v" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeRO" id="2ZezXqsk74w" role="3GoeQH" />
        <node concept="CIsvn" id="2ZezXqsk74x" role="2fo_hi">
          <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
        </node>
        <node concept="CIVk6" id="2ZezXqsk74y" role="13mkVG">
          <node concept="2fgwQN" id="2ZezXqsk74z" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk74$" role="CIVlq">
            <node concept="CIsvn" id="2ZezXqsk74_" role="CIi4h">
              <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
            </node>
          </node>
        </node>
        <node concept="3eERzG" id="2ZezXqsk74A" role="2foARb">
          <node concept="CIdvy" id="2ZezXqsk74B" role="3eFnTY">
            <node concept="3TlMh9" id="2ZezXqsk74C" role="CIrOC">
              <property role="2hmy$m" value="0" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk74D" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk74E" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
          <node concept="CIdvy" id="2ZezXqsk74F" role="3eFnTW">
            <node concept="3TlMh9" id="2ZezXqsk74G" role="CIrOC">
              <property role="2hmy$m" value="50" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk74H" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk74I" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk74J" role="2fpoE$">
        <property role="TrG5h" value="v_set" />
        <node concept="OjmMv" id="2ZezXqsk74K" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk74L" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk74M" role="19SJt6">
              <property role="19SUeA" value="Speed setpoint determined by the ACC" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk74N" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeRO" id="2ZezXqsk74O" role="3GoeQH" />
        <node concept="CIsvn" id="2ZezXqsk74P" role="2fo_hi">
          <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
        </node>
        <node concept="CIVk6" id="2ZezXqsk74Q" role="13mkVG">
          <node concept="2fgwQN" id="2ZezXqsk74R" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk74S" role="CIVlq">
            <node concept="CIsvn" id="2ZezXqsk74T" role="CIi4h">
              <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
            </node>
          </node>
        </node>
        <node concept="3eERzG" id="7RxEy5lyP_N" role="2foARb">
          <node concept="CIdvy" id="7RxEy5lyPNH" role="3eFnTY">
            <node concept="3TlMh9" id="7RxEy5lyPNG" role="CIrOC">
              <property role="2hmy$m" value="0" />
            </node>
            <node concept="CIsGf" id="7RxEy5lyPNI" role="CIwXZ">
              <node concept="CIsvn" id="7RxEy5lyPNJ" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
          <node concept="CIdvy" id="7RxEy5lyQ8f" role="3eFnTW">
            <node concept="3TlMh9" id="7RxEy5lyQ8e" role="CIrOC">
              <property role="2hmy$m" value="50" />
            </node>
            <node concept="CIsGf" id="7RxEy5lyQ8g" role="CIwXZ">
              <node concept="CIsvn" id="7RxEy5lyQ8h" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk74U" role="2fpoE$">
        <property role="TrG5h" value="v_lead" />
        <node concept="OjmMv" id="2ZezXqsk74V" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk74W" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk74X" role="19SJt6">
              <property role="19SUeA" value="Leading vehicle Speed" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk74Y" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeRO" id="2ZezXqsk74Z" role="3GoeQH" />
        <node concept="CIsvn" id="2ZezXqsk750" role="2fo_hi">
          <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
        </node>
        <node concept="CIVk6" id="2ZezXqsk751" role="13mkVG">
          <node concept="2fgwQN" id="2ZezXqsk752" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk753" role="CIVlq">
            <node concept="CIsvn" id="2ZezXqsk754" role="CIi4h">
              <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
            </node>
          </node>
        </node>
        <node concept="3eERzG" id="2ZezXqsk755" role="2foARb">
          <node concept="CIdvy" id="2ZezXqsk756" role="3eFnTY">
            <node concept="3TlMh9" id="2ZezXqsk757" role="CIrOC">
              <property role="2hmy$m" value="0" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk758" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk759" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
          <node concept="CIdvy" id="2ZezXqsk75a" role="3eFnTW">
            <node concept="3TlMh9" id="2ZezXqsk75b" role="CIrOC">
              <property role="2hmy$m" value="50" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk75c" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk75d" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk75e" role="2fpoE$">
        <property role="TrG5h" value="d_lead" />
        <node concept="OjmMv" id="2ZezXqsk75f" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk75g" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk75h" role="19SJt6">
              <property role="19SUeA" value="Distance between lead vehicle and car equipped with ACC" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk75i" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeRO" id="2ZezXqsk75j" role="3GoeQH" />
        <node concept="CIsvn" id="2ZezXqsk75k" role="2fo_hi">
          <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
        </node>
        <node concept="CIVk6" id="2ZezXqsk75l" role="13mkVG">
          <node concept="2fgwQN" id="2ZezXqsk75m" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk75n" role="CIVlq">
            <node concept="CIsvn" id="2ZezXqsk75o" role="CIi4h">
              <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
            </node>
          </node>
        </node>
        <node concept="3eERzG" id="2ZezXqsk75p" role="2foARb">
          <node concept="CIdvy" id="2ZezXqsk75q" role="3eFnTY">
            <node concept="CIsGf" id="2ZezXqsk75r" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk75s" role="CIi4h">
                <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
              </node>
            </node>
            <node concept="3TlMh9" id="2ZezXqsk75t" role="CIrOC">
              <property role="2hmy$m" value="0" />
            </node>
          </node>
          <node concept="CIdvy" id="2ZezXqsk75u" role="3eFnTW">
            <node concept="3TlMh9" id="2ZezXqsk75v" role="CIrOC">
              <property role="2hmy$m" value="1000" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk75w" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk75x" role="CIi4h">
                <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk75y" role="2fpoE$">
        <property role="TrG5h" value="d_safe_new" />
        <node concept="OjmMv" id="2ZezXqsk75z" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk75$" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk75_" role="19SJt6">
              <property role="19SUeA" value="Safe distance that need to be maintained to avoid collision" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk75A" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeRO" id="2ZezXqsk75B" role="3GoeQH" />
        <node concept="CIsvn" id="2ZezXqsk75C" role="2fo_hi">
          <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
        </node>
        <node concept="CIVk6" id="2ZezXqsk75D" role="13mkVG">
          <node concept="2fgwQN" id="2ZezXqsk75E" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk75F" role="CIVlq">
            <node concept="CIsvn" id="2ZezXqsk75G" role="CIi4h">
              <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
            </node>
          </node>
        </node>
        <node concept="3eERzG" id="2ZezXqsk75H" role="2foARb">
          <node concept="CIdvy" id="2ZezXqsk75I" role="3eFnTY">
            <node concept="3TlMh9" id="2ZezXqsk75J" role="CIrOC">
              <property role="2hmy$m" value="0" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk75K" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk75L" role="CIi4h">
                <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
              </node>
            </node>
          </node>
          <node concept="CIdvy" id="2ZezXqsk75M" role="3eFnTW">
            <node concept="3TlMh9" id="2ZezXqsk75N" role="CIrOC">
              <property role="2hmy$m" value="1000" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk75O" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk75P" role="CIi4h">
                <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk75Q" role="2fpoE$">
        <property role="TrG5h" value="ACC_switch" />
        <node concept="OjmMv" id="2ZezXqsk75R" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk75S" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk75T" role="19SJt6">
              <property role="19SUeA" value="Switch to turn off and on ACC" />
            </node>
          </node>
        </node>
        <node concept="26Vqp4" id="2ZezXqsk75U" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeRO" id="2ZezXqsk75V" role="3GoeQH" />
        <node concept="26Vqp4" id="2ZezXqsk75W" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3eERzG" id="2ZezXqsk75X" role="2foARb">
          <node concept="3TlMh9" id="2ZezXqsk75Y" role="3eFnTY">
            <property role="2hmy$m" value="0" />
          </node>
          <node concept="3TlMh9" id="2ZezXqsk75Z" role="3eFnTW">
            <property role="2hmy$m" value="1" />
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk760" role="2fpoE$">
        <property role="TrG5h" value="c_vset" />
        <node concept="OjmMv" id="2ZezXqsk761" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk762" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk763" role="19SJt6" />
          </node>
        </node>
        <node concept="3GoeRO" id="2ZezXqsk764" role="3GoeQH" />
        <node concept="CIsvn" id="2ZezXqsk765" role="2fo_hi">
          <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk766" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="CIVk6" id="2ZezXqsk767" role="13mkVG">
          <node concept="2fgwQN" id="2ZezXqsk768" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk769" role="CIVlq">
            <node concept="CIsvn" id="2ZezXqsk76a" role="CIi4h">
              <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
            </node>
          </node>
        </node>
        <node concept="3eERzG" id="2ZezXqsk76b" role="2foARb">
          <node concept="CIdvy" id="2ZezXqsk76c" role="3eFnTY">
            <node concept="3TlMh9" id="2ZezXqsk76d" role="CIrOC">
              <property role="2hmy$m" value="0" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk76e" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk76f" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
          <node concept="CIdvy" id="2ZezXqsk76g" role="3eFnTW">
            <node concept="3TlMh9" id="2ZezXqsk76h" role="CIrOC">
              <property role="2hmy$m" value="50" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk76i" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk76j" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk76k" role="2fpoE$">
        <property role="TrG5h" value="d_vset" />
        <node concept="OjmMv" id="2ZezXqsk76l" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk76m" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk76n" role="19SJt6" />
          </node>
        </node>
        <node concept="3GoeRO" id="2ZezXqsk76o" role="3GoeQH" />
        <node concept="CIsvn" id="2ZezXqsk76p" role="2fo_hi">
          <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk76q" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="CIVk6" id="2ZezXqsk76r" role="13mkVG">
          <node concept="2fgwQN" id="2ZezXqsk76s" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk76t" role="CIVlq">
            <node concept="CIsvn" id="2ZezXqsk76u" role="CIi4h">
              <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
            </node>
          </node>
        </node>
        <node concept="3eERzG" id="2ZezXqsk76v" role="2foARb">
          <node concept="CIdvy" id="2ZezXqsk76w" role="3eFnTY">
            <node concept="3TlMh9" id="2ZezXqsk76x" role="CIrOC">
              <property role="2hmy$m" value="0" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk76y" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk76z" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
          <node concept="CIdvy" id="2ZezXqsk76$" role="3eFnTW">
            <node concept="3TlMh9" id="2ZezXqsk76_" role="CIrOC">
              <property role="2hmy$m" value="50" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk76A" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk76B" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk76C" role="2fpoE$">
        <property role="TrG5h" value="v_ref" />
        <node concept="OjmMv" id="2ZezXqsk76D" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk76E" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk76F" role="19SJt6" />
          </node>
        </node>
        <node concept="3GoeRO" id="2ZezXqsk76G" role="3GoeQH" />
        <node concept="CIsvn" id="2ZezXqsk76H" role="2fo_hi">
          <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk76I" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="CIVk6" id="2ZezXqsk76J" role="13mkVG">
          <node concept="2fgwQN" id="2ZezXqsk76K" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk76L" role="CIVlq">
            <node concept="CIsvn" id="2ZezXqsk76M" role="CIi4h">
              <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
            </node>
          </node>
        </node>
        <node concept="3eERzG" id="2ZezXqsk76N" role="2foARb">
          <node concept="CIdvy" id="2ZezXqsk76O" role="3eFnTY">
            <node concept="3TlMh9" id="2ZezXqsk76P" role="CIrOC">
              <property role="2hmy$m" value="0" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk76Q" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk76R" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
          <node concept="CIdvy" id="2ZezXqsk76S" role="3eFnTW">
            <node concept="3TlMh9" id="2ZezXqsk76T" role="CIrOC">
              <property role="2hmy$m" value="50" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk76U" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk76V" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk76W" role="2fpoE$">
        <property role="TrG5h" value="v_pid" />
        <node concept="OjmMv" id="2ZezXqsk76X" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk76Y" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk76Z" role="19SJt6" />
          </node>
        </node>
        <node concept="3GoeRO" id="2ZezXqsk770" role="3GoeQH" />
        <node concept="CIsvn" id="2ZezXqsk771" role="2fo_hi">
          <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk772" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="CIVk6" id="2ZezXqsk773" role="13mkVG">
          <node concept="2fgwQN" id="2ZezXqsk774" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk775" role="CIVlq">
            <node concept="CIsvn" id="2ZezXqsk776" role="CIi4h">
              <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
            </node>
          </node>
        </node>
        <node concept="3eERzG" id="2ZezXqsk777" role="2foARb">
          <node concept="CIdvy" id="2ZezXqsk778" role="3eFnTY">
            <node concept="3TlMh9" id="2ZezXqsk779" role="CIrOC">
              <property role="2hmy$m" value="0" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk77a" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk77b" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
          <node concept="CIdvy" id="2ZezXqsk77c" role="3eFnTW">
            <node concept="3TlMh9" id="2ZezXqsk77d" role="CIrOC">
              <property role="2hmy$m" value="50" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk77e" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk77f" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="2ZezXqsk77g" role="2fpoE$">
        <property role="TrG5h" value="d_brake" />
        <node concept="OjmMv" id="2ZezXqsk77h" role="2foARm">
          <node concept="19SGf9" id="2ZezXqsk77i" role="OjmMu">
            <node concept="19SUe$" id="2ZezXqsk77j" role="19SJt6">
              <property role="19SUeA" value="Braking distance" />
            </node>
          </node>
        </node>
        <node concept="2fgwQN" id="2ZezXqsk77k" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="3GoeRO" id="2ZezXqsk77l" role="3GoeQH" />
        <node concept="CIsvn" id="2ZezXqsk77m" role="2fo_hi">
          <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
        </node>
        <node concept="CIVk6" id="2ZezXqsk77n" role="13mkVG">
          <node concept="2fgwQN" id="2ZezXqsk77o" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk77p" role="CIVlq">
            <node concept="CIsvn" id="2ZezXqsk77q" role="CIi4h">
              <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
            </node>
          </node>
        </node>
        <node concept="3eERzG" id="2ZezXqsk77r" role="2foARb">
          <node concept="CIdvy" id="2ZezXqsk77s" role="3eFnTY">
            <node concept="3TlMh9" id="2ZezXqsk77t" role="CIrOC">
              <property role="2hmy$m" value="0" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk77u" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk77v" role="CIi4h">
                <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
              </node>
            </node>
          </node>
          <node concept="CIdvy" id="2ZezXqsk77w" role="3eFnTW">
            <node concept="3TlMh9" id="2ZezXqsk77x" role="CIrOC">
              <property role="2hmy$m" value="140" />
            </node>
            <node concept="CIsGf" id="2ZezXqsk77y" role="CIwXZ">
              <node concept="CIsvn" id="2ZezXqsk77z" role="CIi4h">
                <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="4Amm8JDcVzz" role="2fpoE$">
        <property role="TrG5h" value="v_acc_demo" />
        <node concept="OjmMv" id="4Amm8JDcVz$" role="2foARm">
          <node concept="19SGf9" id="4Amm8JDcVz_" role="OjmMu">
            <node concept="19SUe$" id="4Amm8JDcVzA" role="19SJt6" />
          </node>
        </node>
        <node concept="3GoeRO" id="4Amm8JDcVzC" role="3GoeQH" />
        <node concept="CIsvn" id="5$OC5nkI$iN" role="2fo_hi">
          <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
        </node>
        <node concept="2fgwQN" id="4Amm8JDcV$b" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="CIVk6" id="4Amm8JDcXDx" role="13mkVG">
          <node concept="2fgwQN" id="4Amm8JDcXDv" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="4Amm8JDcXDy" role="CIVlq">
            <node concept="CIsvn" id="4Amm8JDcXDw" role="CIi4h">
              <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
            </node>
          </node>
        </node>
        <node concept="3eERzG" id="4Amm8JDcXFT" role="2foARb">
          <node concept="CIdvy" id="4Amm8JDcY2d" role="3eFnTY">
            <node concept="3TlMh9" id="4Amm8JDcY2c" role="CIrOC">
              <property role="2hmy$m" value="0" />
            </node>
            <node concept="CIsGf" id="4Amm8JDcY2e" role="CIwXZ">
              <node concept="CIsvn" id="4Amm8JDcY2f" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
          <node concept="CIdvy" id="4Amm8JDcYBP" role="3eFnTW">
            <node concept="3TlMh9" id="4Amm8JDcYBO" role="CIrOC">
              <property role="2hmy$m" value="20" />
            </node>
            <node concept="CIsGf" id="4Amm8JDcYBQ" role="CIwXZ">
              <node concept="CIsvn" id="4Amm8JDcYBR" role="CIi4h">
                <ref role="CIi3I" to="nppk:5$OC5nkIqVa" resolve="mps" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2fo_ht" id="26HZEOgadPQ" role="2fpoE$">
        <property role="TrG5h" value="dLead" />
        <node concept="OjmMv" id="26HZEOgadPR" role="2foARm">
          <node concept="19SGf9" id="26HZEOgadPS" role="OjmMu">
            <node concept="19SUe$" id="26HZEOgadPT" role="19SJt6" />
          </node>
        </node>
        <node concept="3GoeRO" id="26HZEOgadPV" role="3GoeQH" />
        <node concept="2fgwQN" id="26HZEOgadQ2" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="2fgwQN" id="26HZEOgadQ3" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2fo_ht" id="43GJ$nZoziU" role="2fpoE$">
        <property role="TrG5h" value="tamb" />
        <node concept="OjmMv" id="43GJ$nZoziV" role="2foARm">
          <node concept="19SGf9" id="43GJ$nZoziW" role="OjmMu">
            <node concept="19SUe$" id="43GJ$nZoziX" role="19SJt6" />
          </node>
        </node>
        <node concept="3GoeRO" id="43GJ$nZoziZ" role="3GoeQH" />
        <node concept="2fgwQN" id="43GJ$nZozj6" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="2fgwQN" id="43GJ$nZozj7" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2fo_ht" id="yqLXLaXeXc" role="2fpoE$">
        <property role="TrG5h" value="tact" />
        <node concept="OjmMv" id="yqLXLaXeXd" role="2foARm">
          <node concept="19SGf9" id="yqLXLaXeXe" role="OjmMu">
            <node concept="19SUe$" id="yqLXLaXeXf" role="19SJt6" />
          </node>
        </node>
        <node concept="3GoeRO" id="yqLXLaXeXh" role="3GoeQH" />
        <node concept="2fgwQN" id="yqLXLaXeXo" role="2fo_hg">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="2fgwQN" id="yqLXLaXeXp" role="13mkVG">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
    </node>
    <node concept="3GEVxB" id="2ZezXqsk77$" role="VEURM">
      <ref role="3GEb4d" to="nppk:5$OC5nkIqUY" resolve="CommonUnits" />
    </node>
    <node concept="3GEVxB" id="2ZezXqsk77A" role="VEURM">
      <ref role="3GEb4d" to="cmgk:yGiRIF6Rhw" resolve="SIUnits" />
    </node>
    <node concept="OjmMv" id="1lxMJm9VOwi" role="1wzedz">
      <node concept="19SGf9" id="1lxMJm9VOwj" role="OjmMu">
        <node concept="19SUe$" id="1lxMJm9VOwk" role="19SJt6">
          <property role="19SUeA" value="The data dictionary contais the identified parameters and variables during the preliminary control algorithm design" />
        </node>
      </node>
    </node>
  </node>
  <node concept="3SgbeF" id="2ZezXqsk71V">
    <property role="TrG5h" value="ConstantDictionary" />
    <node concept="2rwPA0" id="26HZEOga0JX" role="3Sgbe6">
      <property role="TrG5h" value="vw_golf_airbag" />
      <node concept="2rwPA4" id="26HZEOga0R6" role="2rwPA3">
        <property role="TrG5h" value="v_acc" />
        <node concept="3TlMh9" id="26HZEOga0RG" role="31S2z3">
          <property role="2hmy$m" value="20" />
        </node>
        <node concept="2fgwQN" id="26HZEOga0Ru" role="2C2TGm">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
        <node concept="1sAZXf" id="26HZEOga0Td" role="lGtFl">
          <property role="P4ACc" value="ceab5195-25ea-4f22-9b92-103b95ca8c0c/1169194658468/1169194664001" />
          <property role="2qtEX9" value="name" />
          <ref role="1sAZLB" node="2ZezXqsk738" resolve="KI_SS_hatchback" />
          <node concept="2HR7o3" id="26HZEOga0Te" role="2HR9Qa">
            <property role="2HR8FG" value="v_acc" />
          </node>
        </node>
        <node concept="31KuNc" id="26HZEOga1Wn" role="2rwPA7">
          <ref role="31KuKS" node="26HZEOga1Wl" />
          <node concept="3TlMh9" id="26HZEOga1ZP" role="31KuKs">
            <property role="2hmy$m" value="12" />
          </node>
        </node>
        <node concept="31KuNc" id="26HZEOga1Y0" role="2rwPA7">
          <ref role="31KuKS" node="26HZEOga1XZ" />
          <node concept="3TlMh9" id="26HZEOga21Q" role="31KuKs">
            <property role="2hmy$m" value="15" />
          </node>
        </node>
      </node>
      <node concept="2rwPA4" id="yqLXLaX22N" role="2rwPA3">
        <property role="TrG5h" value="T_Safe_CG" />
        <node concept="CIdvy" id="yqLXLaX2Sl" role="31S2z3">
          <node concept="3TlMh9" id="yqLXLaX2Sk" role="CIrOC">
            <property role="2hmy$m" value="30" />
          </node>
          <node concept="CIsGf" id="yqLXLaX2Sm" role="CIwXZ">
            <node concept="CIsvn" id="yqLXLaX2Sn" role="CIi4h">
              <ref role="CIi3I" to="cmgk:6TeNRL7trCJ" resolve="s" />
            </node>
          </node>
        </node>
        <node concept="31KuNc" id="yqLXLaX23a" role="2rwPA7">
          <ref role="31KuKS" node="26HZEOga1Wl" />
          <node concept="CIdvy" id="yqLXLaX3s6" role="31KuKs">
            <node concept="3TlMh9" id="yqLXLaX3s5" role="CIrOC">
              <property role="2hmy$m" value="30" />
            </node>
            <node concept="CIsGf" id="yqLXLaX3s7" role="CIwXZ">
              <node concept="CIsvn" id="yqLXLaX3s8" role="CIi4h">
                <ref role="CIi3I" to="cmgk:6TeNRL7trCJ" resolve="s" />
              </node>
            </node>
          </node>
        </node>
        <node concept="31KuNc" id="yqLXLaX23i" role="2rwPA7">
          <ref role="31KuKS" node="26HZEOga1XZ" />
          <node concept="CIdvy" id="yqLXLaX3R8" role="31KuKs">
            <node concept="3TlMh9" id="yqLXLaX3R7" role="CIrOC">
              <property role="2hmy$m" value="30" />
            </node>
            <node concept="CIsGf" id="yqLXLaX3R9" role="CIwXZ">
              <node concept="CIsvn" id="yqLXLaX3Ra" role="CIi4h">
                <ref role="CIi3I" to="cmgk:6TeNRL7trCJ" resolve="s" />
              </node>
            </node>
          </node>
        </node>
        <node concept="1sAZXf" id="yqLXLaX24f" role="lGtFl">
          <property role="P4ACc" value="ceab5195-25ea-4f22-9b92-103b95ca8c0c/1169194658468/1169194664001" />
          <property role="2qtEX9" value="name" />
          <ref role="1sAZLB" node="2ZezXqsk73T" resolve="T_SAFE" />
          <node concept="2HR7o3" id="yqLXLaX24g" role="2HR9Qa">
            <property role="2HR8FG" value="T_Safe_CG" />
          </node>
        </node>
        <node concept="CIVk6" id="yqLXLaX24O" role="2C2TGm">
          <node concept="2fgwQN" id="yqLXLaX24P" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="yqLXLaX24Q" role="CIVlq">
            <node concept="CIsvn" id="yqLXLaX24R" role="CIi4h">
              <ref role="CIi3I" to="cmgk:6TeNRL7trCJ" resolve="s" />
            </node>
          </node>
        </node>
      </node>
      <node concept="31P8L$" id="26HZEOga1Wl" role="31U5yE">
        <node concept="2qVrgw" id="26HZEOga1XU" role="31P8LH">
          <ref role="2qVrgz" to="nppk:5$OC5nkIr38" resolve="Hatchback" />
        </node>
      </node>
      <node concept="31P8L$" id="26HZEOga1XZ" role="31U5yE">
        <node concept="2qVrgw" id="26HZEOga1ZH" role="31P8LH">
          <ref role="2qVrgz" to="nppk:5$OC5nkIr37" resolve="Sedan_VW" />
        </node>
      </node>
    </node>
    <node concept="2rwPA0" id="2ZezXqsk71W" role="3Sgbe6">
      <property role="TrG5h" value="ConfigurationIndependent" />
      <node concept="2rwPA4" id="2ZezXqsk71X" role="2rwPA3">
        <property role="TrG5h" value="T_SAFE" />
        <node concept="CIdvy" id="2ZezXqsk71Z" role="31S2z3">
          <node concept="3TlMh9" id="2ZezXqsk720" role="CIrOC">
            <property role="2hmy$m" value="2" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk721" role="CIwXZ">
            <node concept="CIsvn" id="2ZezXqsk722" role="CIi4h">
              <ref role="CIi3I" to="cmgk:6TeNRL7trCJ" resolve="s" />
            </node>
          </node>
        </node>
        <node concept="CIVk6" id="2ZezXqsk723" role="2C2TGm">
          <node concept="2fgwQN" id="2ZezXqsk724" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk725" role="CIVlq">
            <node concept="CIsvn" id="2ZezXqsk726" role="CIi4h">
              <ref role="CIi3I" to="cmgk:6TeNRL7trCJ" resolve="s" />
            </node>
          </node>
        </node>
        <node concept="1sAZXf" id="2L_j7eCRJgN" role="lGtFl">
          <property role="P4ACc" value="ceab5195-25ea-4f22-9b92-103b95ca8c0c/1169194658468/1169194664001" />
          <property role="2qtEX9" value="name" />
          <ref role="1sAZLB" node="2ZezXqsk73T" resolve="T_SAFE" />
        </node>
      </node>
      <node concept="2rwPA4" id="2ZezXqsk727" role="2rwPA3">
        <node concept="1sAZXf" id="2ZezXqsk728" role="lGtFl">
          <property role="2qtEX9" value="name" />
          <property role="P4ACc" value="ceab5195-25ea-4f22-9b92-103b95ca8c0c/1169194658468/1169194664001" />
          <ref role="1sAZLB" node="2ZezXqsk72Q" resolve="D_BRAKE_sedan" />
        </node>
        <node concept="CIdvy" id="2ZezXqsk729" role="31S2z3">
          <node concept="3TlMh9" id="2ZezXqsk72a" role="CIrOC">
            <property role="2hmy$m" value="70" />
          </node>
          <node concept="CIsGf" id="2ZezXqsk72b" role="CIwXZ">
            <node concept="CIsvn" id="2ZezXqsk72c" role="CIi4h">
              <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
            </node>
          </node>
        </node>
        <node concept="CIVk6" id="7C1JSl0S074" role="2C2TGm">
          <node concept="2fgwQN" id="7C1JSl0S075" role="UxbcT">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="CIsGf" id="7C1JSl0S076" role="CIVlq">
            <node concept="CIsvn" id="7C1JSl0S077" role="CIi4h">
              <ref role="CIi3I" to="cmgk:yGiRIF6RlO" resolve="m" />
            </node>
          </node>
        </node>
      </node>
      <node concept="2rwPA4" id="2ZezXqsk72h" role="2rwPA3">
        <node concept="1sAZXf" id="2ZezXqsk72i" role="lGtFl">
          <property role="2qtEX9" value="name" />
          <property role="P4ACc" value="ceab5195-25ea-4f22-9b92-103b95ca8c0c/1169194658468/1169194664001" />
          <ref role="1sAZLB" node="2ZezXqsk73f" resolve="KD_SS" />
        </node>
        <node concept="3TlMh9" id="2ZezXqsk72j" role="31S2z3">
          <property role="2hmy$m" value="0.0" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk72k" role="2C2TGm">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2rwPA4" id="2ZezXqsk72l" role="2rwPA3">
        <node concept="1sAZXf" id="2ZezXqsk72m" role="lGtFl">
          <property role="2qtEX9" value="name" />
          <property role="P4ACc" value="ceab5195-25ea-4f22-9b92-103b95ca8c0c/1169194658468/1169194664001" />
          <ref role="1sAZLB" node="2ZezXqsk73$" resolve="KD_ST" />
        </node>
        <node concept="3TlMh9" id="2ZezXqsk72n" role="31S2z3">
          <property role="2hmy$m" value="0.0" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk72o" role="2C2TGm">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2rwPA4" id="2ZezXqsk72p" role="2rwPA3">
        <node concept="1sAZXf" id="2ZezXqsk72q" role="lGtFl">
          <property role="2qtEX9" value="name" />
          <property role="P4ACc" value="ceab5195-25ea-4f22-9b92-103b95ca8c0c/1169194658468/1169194664001" />
          <ref role="1sAZLB" node="2ZezXqsk738" resolve="KI_SS_hatchback" />
        </node>
        <node concept="3TlMh9" id="2ZezXqsk72r" role="31S2z3">
          <property role="2hmy$m" value="0.0" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk72s" role="2C2TGm">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2rwPA4" id="2ZezXqsk72t" role="2rwPA3">
        <node concept="1sAZXf" id="2ZezXqsk72u" role="lGtFl">
          <property role="2qtEX9" value="name" />
          <property role="P4ACc" value="ceab5195-25ea-4f22-9b92-103b95ca8c0c/1169194658468/1169194664001" />
          <ref role="1sAZLB" node="2ZezXqsk73t" resolve="KI_ST" />
        </node>
        <node concept="3TlMh9" id="2ZezXqsk72v" role="31S2z3">
          <property role="2hmy$m" value="0.0" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk72w" role="2C2TGm">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2rwPA4" id="2ZezXqsk72x" role="2rwPA3">
        <node concept="1sAZXf" id="2ZezXqsk72y" role="lGtFl">
          <property role="2qtEX9" value="name" />
          <property role="P4ACc" value="ceab5195-25ea-4f22-9b92-103b95ca8c0c/1169194658468/1169194664001" />
          <ref role="1sAZLB" node="2ZezXqsk731" resolve="KP_SS" />
        </node>
        <node concept="3TlMh9" id="2ZezXqsk72z" role="31S2z3">
          <property role="2hmy$m" value="1.0" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk72$" role="2C2TGm">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2rwPA4" id="2ZezXqsk72_" role="2rwPA3">
        <node concept="1sAZXf" id="2ZezXqsk72A" role="lGtFl">
          <property role="2qtEX9" value="name" />
          <property role="P4ACc" value="ceab5195-25ea-4f22-9b92-103b95ca8c0c/1169194658468/1169194664001" />
          <ref role="1sAZLB" node="2ZezXqsk73m" resolve="KP_ST" />
        </node>
        <node concept="3TlMh9" id="2ZezXqsk72B" role="31S2z3">
          <property role="2hmy$m" value="1.0" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk72C" role="2C2TGm">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2rwPA4" id="2ZezXqsk72D" role="2rwPA3">
        <node concept="1sAZXf" id="2ZezXqsk72E" role="lGtFl">
          <property role="2qtEX9" value="name" />
          <property role="P4ACc" value="ceab5195-25ea-4f22-9b92-103b95ca8c0c/1169194658468/1169194664001" />
          <ref role="1sAZLB" node="2ZezXqsk74d" resolve="MODE_CRUISE" />
        </node>
        <node concept="3TlMh9" id="2ZezXqsk72F" role="31S2z3">
          <property role="2hmy$m" value="1.0" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk72G" role="2C2TGm">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="2rwPA4" id="2ZezXqsk72H" role="2rwPA3">
        <node concept="1sAZXf" id="2ZezXqsk72I" role="lGtFl">
          <property role="2qtEX9" value="name" />
          <property role="P4ACc" value="ceab5195-25ea-4f22-9b92-103b95ca8c0c/1169194658468/1169194664001" />
          <ref role="1sAZLB" node="2ZezXqsk74k" resolve="MODE_DISTFOLLOW" />
        </node>
        <node concept="3TlMh9" id="2ZezXqsk72J" role="31S2z3">
          <property role="2hmy$m" value="2.0" />
        </node>
        <node concept="2fgwQN" id="2ZezXqsk72K" role="2C2TGm">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
    </node>
    <node concept="3GEVxB" id="2ZezXqsk72L" role="3Sg1jE">
      <ref role="3GEb4d" to="nppk:5$OC5nkIqUY" resolve="CommonUnits" />
    </node>
    <node concept="3GEVxB" id="2ZezXqsk72M" role="3Sg1jE">
      <ref role="3GEb4d" node="2ZezXqsk72O" resolve="DataDictionary" />
    </node>
    <node concept="3GEVxB" id="2ZezXqsk72N" role="3Sg1jE">
      <ref role="3GEb4d" to="cmgk:yGiRIF6Rhw" resolve="SIUnits" />
    </node>
    <node concept="3GEVxB" id="7C1JSl0RZMc" role="3Sg1jE">
      <ref role="3GEb4d" to="nppk:5$OC5nkIr31" resolve="Car_Features" />
    </node>
  </node>
</model>

