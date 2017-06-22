<?xml version="1.0" encoding="UTF-8"?>
<model ref="r:8893c68a-3cda-4f42-847a-55010f9beb5f(_00_Requirements)">
  <persistence version="9" />
  <languages>
    <devkit ref="dee9d228-3a6e-4197-9138-6647a60f7a90(ProcessSupport)" />
    <devkit ref="a2812605-e334-464d-acc7-8fb864755ed7(FeatureModels)" />
  </languages>
  <imports>
    <import index="nppk" ref="r:915e0ada-2a2f-495c-ab84-81ebfefe6f85(_10_Config)" />
  </imports>
  <registry>
    <language id="201d599b-73d5-46e5-b3a8-ede3e87dfed5" name="com.lmsintl.accent.req.ext">
      <concept id="5449787351240798514" name="com.lmsintl.accent.req.ext.structure.TestSpecification" flags="ng" index="2fJBAa">
        <child id="5449787351240798520" name="result" index="2fJBA0" />
        <child id="5449787351240798515" name="init" index="2fJBAb" />
        <child id="5449787351240798517" name="method" index="2fJBAd" />
        <child id="5449787351246627545" name="testedRequirements" index="2fQmDx" />
      </concept>
      <concept id="5449787351240712851" name="com.lmsintl.accent.req.ext.structure.TestKind" flags="ng" index="2fJMCF" />
      <concept id="5449787351246686066" name="com.lmsintl.accent.req.ext.structure.TestReqRef" flags="ng" index="2fQ4Za">
        <reference id="5449787351246686118" name="req" index="2fQ4Wu" />
      </concept>
      <concept id="7089521816338351774" name="com.lmsintl.accent.req.ext.structure.VerificationStatusFailed" flags="ng" index="3gmsKp" />
      <concept id="7089521816338243128" name="com.lmsintl.accent.req.ext.structure.VerificationStatus" flags="ng" index="3gmxiZ">
        <property id="6558720655270961741" name="verifiedAt" index="3Ht2fy" />
        <property id="6558720655270923686" name="verifiedBy" index="3HtoK9" />
      </concept>
      <concept id="7089521816338242673" name="com.lmsintl.accent.req.ext.structure.VerificationStatusTag" flags="ng" index="3gmxrQ">
        <child id="7089521816338248463" name="status" index="3gmzA8" />
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
    <language id="2374bc90-7e37-41f1-a9c4-c2e35194c36a" name="com.mbeddr.doc">
      <concept id="6657644269295214799" name="com.mbeddr.doc.structure.IDocumentLike" flags="ng" index="G9hjZ">
        <reference id="6657644269295214800" name="config" index="G9hjw" />
      </concept>
      <concept id="6386504476136472795" name="com.mbeddr.doc.structure.PathDefinition" flags="ng" index="2SbYGw">
        <child id="2642765975824057986" name="pathPicker" index="9PVG_" />
      </concept>
      <concept id="6386504476136472782" name="com.mbeddr.doc.structure.DocumentConfig" flags="ng" index="2SbYGP">
        <child id="5785245534401182264" name="defaultTempPath" index="Cbewh" />
      </concept>
      <concept id="3350625596580089586" name="com.mbeddr.doc.structure.TextParagraph" flags="ng" index="1_0LV8">
        <child id="3350625596580089613" name="text" index="1_0LWR" />
      </concept>
      <concept id="3350625596580064249" name="com.mbeddr.doc.structure.IDocContentContainer" flags="ng" index="1_0VJ3">
        <child id="3350625596580064250" name="contents" index="1_0VJ0" />
      </concept>
    </language>
    <language id="d4280a54-f6df-4383-aa41-d1b2bffa7eb1" name="com.mbeddr.core.base">
      <concept id="2642765975824060179" name="com.mbeddr.core.base.structure.SolutionRelativeDirPicker" flags="ng" index="9PVaO" />
      <concept id="8375407818529178006" name="com.mbeddr.core.base.structure.TextBlock" flags="ng" index="OjmMv">
        <child id="8375407818529178007" name="text" index="OjmMu" />
      </concept>
      <concept id="747084250476811597" name="com.mbeddr.core.base.structure.DefaultGenericChunkDependency" flags="ng" index="3GEVxB">
        <reference id="747084250476878887" name="chunk" index="3GEb4d" />
      </concept>
    </language>
    <language id="e865cad2-7cc8-437a-951a-665bcbcb8b1a" name="com.mbeddr.cc.requirements">
      <concept id="8921256082857728250" name="com.mbeddr.cc.requirements.structure.FunctionalRequirementKind" flags="ng" index="22Mrfp" />
      <concept id="6657644269295006436" name="com.mbeddr.cc.requirements.structure.ReqDocParagraph" flags="ng" index="GmGrk" />
      <concept id="8983772170066800838" name="com.mbeddr.cc.requirements.structure.DefaultRequirementsClass" flags="ng" index="2RsZnQ" />
      <concept id="8745401669462963169" name="com.mbeddr.cc.requirements.structure.RequirementsModule" flags="ng" index="3fbPIq">
        <child id="2588579461811806005" name="abstract" index="tLAhV" />
        <child id="8983772170066800844" name="cls" index="2RsZnW" />
        <child id="8745401669462963171" name="requirements" index="3fbPIo" />
        <child id="1165432222362099166" name="imports" index="1BwUYK" />
      </concept>
      <concept id="8745401669462952101" name="com.mbeddr.cc.requirements.structure.Requirement" flags="ng" index="3fbQ3u">
        <property id="3266388008823942437" name="createdAt" index="2DRQuN" />
        <property id="3266388008825423946" name="createdBy" index="2DXwbs" />
        <property id="3402431285977818823" name="summmary" index="1ylvJX" />
        <child id="8921256082857728256" name="kind" index="22Mr8z" />
        <child id="6657644269295007507" name="doc" index="GmGcz" />
        <child id="8983772170066710134" name="additionalTags" index="2RsgH6" />
        <child id="8745401669463270518" name="additionalData" index="3faCKd" />
        <child id="8745401669462962629" name="details" index="3fbPAY" />
      </concept>
    </language>
    <language id="017fba0e-af15-4a23-b0a8-02b5c1141e75" name="com.mbeddr.cc.var.annotations">
      <concept id="661141253149262080" name="com.mbeddr.cc.var.annotations.structure.FeatureModelConfiguration" flags="ng" index="2dvl_R">
        <reference id="661141253149262081" name="featureModel" index="2dvl_Q" />
        <reference id="7455436784495586129" name="configModel" index="AiAcg" />
      </concept>
      <concept id="661141253149231475" name="com.mbeddr.cc.var.annotations.structure.PresenceCondition" flags="ng" index="2dvt44">
        <child id="661141253149231543" name="condition" index="2dvt70" />
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
  </registry>
  <node concept="3fbPIq" id="5$OC5nkIqxC">
    <property role="TrG5h" value="ACCRequirements" />
    <ref role="G9hjw" node="5$OC5nkIq$F" resolve="DefaultDocConfig" />
    <node concept="OjmMv" id="5$OC5nkIqxD" role="tLAhV">
      <node concept="19SGf9" id="5$OC5nkIqxE" role="OjmMu">
        <node concept="19SUe$" id="5$OC5nkIqxF" role="19SJt6">
          <property role="19SUeA" value="This document captures the primary functional requirements for the ACC system " />
        </node>
      </node>
    </node>
    <node concept="2RsZnQ" id="5$OC5nkIqxG" role="2RsZnW" />
    <node concept="3fbQ3u" id="5$OC5nkIqy5" role="3fbPIo">
      <property role="1ylvJX" value="Speed Control" />
      <property role="TrG5h" value="SpdCntrl" />
      <node concept="22Mrfp" id="5$OC5nkIqy6" role="22Mr8z" />
      <node concept="GmGrk" id="5$OC5nkIqy7" role="GmGcz">
        <node concept="1_0LV8" id="5$OC5nkIqy8" role="1_0VJ0">
          <node concept="19SGf9" id="5$OC5nkIqy9" role="1_0LWR">
            <node concept="19SUe$" id="5$OC5nkIqya" role="19SJt6">
              <property role="19SUeA" value="This group captures all the requirements that are related to speed control" />
            </node>
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="5$OC5nkIqyb" role="3fbPAY">
        <property role="1ylvJX" value="Maintain target set speed" />
        <property role="TrG5h" value="SpeedControl_1" />
        <node concept="22Mrfp" id="5$OC5nkIqyc" role="22Mr8z" />
        <node concept="GmGrk" id="5$OC5nkIqyd" role="GmGcz">
          <node concept="1_0LV8" id="5$OC5nkIqye" role="1_0VJ0">
            <node concept="19SGf9" id="5$OC5nkIqyf" role="1_0LWR">
              <node concept="19SUe$" id="5$OC5nkIqyg" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall be able to maintain the target vehicle speed set by driver when there is no leading vehicle detected" />
              </node>
            </node>
          </node>
        </node>
        <node concept="2dvt44" id="5NclTJJELNE" role="lGtFl">
          <node concept="3o9_tv" id="5NclTJJELNF" role="2dvt70">
            <node concept="2qVrgw" id="7vQzjOujUx5" role="3o9_ts">
              <ref role="2qVrgz" to="nppk:5$OC5nkIr3c" resolve="SMC" />
            </node>
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="5$OC5nkIqyh" role="3fbPAY">
        <property role="2DRQuN" value="1443433864403" />
        <property role="2DXwbs" value="oezqk7" />
        <property role="TrG5h" value="SpeedControl_2" />
        <property role="1ylvJX" value="Maintain target set speed till safe " />
        <node concept="GmGrk" id="5$OC5nkIqyi" role="GmGcz">
          <node concept="1_0LV8" id="5$OC5nkIqyj" role="1_0VJ0">
            <node concept="19SGf9" id="5$OC5nkIqyk" role="1_0LWR">
              <node concept="19SUe$" id="5$OC5nkIqyl" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall be able to maintain the target vehicle speed set by the driver till a leading vehicle is within the safe distance" />
              </node>
            </node>
          </node>
        </node>
        <node concept="22Mrfp" id="5$OC5nkIqym" role="22Mr8z" />
        <node concept="2dvt44" id="5NclTJJELNS" role="lGtFl">
          <node concept="3o9_tv" id="5NclTJJELNT" role="2dvt70">
            <node concept="2qVrgw" id="5NclTJJELO0" role="3o9_ts">
              <ref role="2qVrgz" to="nppk:5$OC5nkIr37" resolve="Sedan" />
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="3fbQ3u" id="5$OC5nkIqyn" role="3fbPIo">
      <property role="1ylvJX" value="Following distance control" />
      <property role="TrG5h" value="DistCntrl" />
      <node concept="22Mrfp" id="5$OC5nkIqyo" role="22Mr8z" />
      <node concept="GmGrk" id="5$OC5nkIqyp" role="GmGcz">
        <node concept="1_0LV8" id="5$OC5nkIqyq" role="1_0VJ0">
          <node concept="19SGf9" id="5$OC5nkIqyr" role="1_0LWR">
            <node concept="19SUe$" id="5$OC5nkIqys" role="19SJt6">
              <property role="19SUeA" value="This group captures all the functional requirements that are related to following distance control" />
            </node>
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="5$OC5nkIqyt" role="3fbPAY">
        <property role="1ylvJX" value="Safe distance estimation" />
        <property role="TrG5h" value="DistanceControl_1" />
        <node concept="22Mrfp" id="5$OC5nkIqyu" role="22Mr8z" />
        <node concept="GmGrk" id="5$OC5nkIqyv" role="GmGcz">
          <node concept="1_0LV8" id="5$OC5nkIqyw" role="1_0VJ0">
            <node concept="19SGf9" id="5$OC5nkIqyx" role="1_0LWR">
              <node concept="19SUe$" id="5$OC5nkIqyy" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall determine the safe following distance from the leading car within the response time of 2ms" />
              </node>
            </node>
          </node>
        </node>
        <node concept="2dvt44" id="3sY9rDAbnXu" role="lGtFl">
          <node concept="3o9_tv" id="3sY9rDAbnXv" role="2dvt70">
            <node concept="2qVrgw" id="7vQzjOuh2D1" role="3o9_ts">
              <ref role="2qVrgz" to="nppk:5$OC5nkIr3c" resolve="SMC" />
            </node>
          </node>
        </node>
        <node concept="3gmxrQ" id="5d2c0EzLf8U" role="2RsgH6">
          <node concept="3gmsKp" id="5d2c0EzLf8T" role="3gmzA8">
            <property role="3HtoK9" value="Verification Process" />
            <property role="3Ht2fy" value="1476764241168" />
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="3sY9rDAbnWU" role="3fbPAY">
        <property role="1ylvJX" value="Safe distance estimation" />
        <property role="TrG5h" value="DistanceControl_1_1" />
        <node concept="22Mrfp" id="3sY9rDAbnWV" role="22Mr8z" />
        <node concept="GmGrk" id="3sY9rDAbnWW" role="GmGcz">
          <node concept="1_0LV8" id="3sY9rDAbnWX" role="1_0VJ0">
            <node concept="19SGf9" id="3sY9rDAbnWY" role="1_0LWR">
              <node concept="19SUe$" id="3sY9rDAbnWZ" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall determine the safe following distance from the leading car within the response time of 5ms" />
              </node>
            </node>
          </node>
        </node>
        <node concept="2dvt44" id="3sY9rDAbnXI" role="lGtFl">
          <node concept="3o9_tv" id="3sY9rDAbnXJ" role="2dvt70">
            <node concept="2qVrgw" id="3sY9rDAbnY0" role="3o9_ts">
              <ref role="2qVrgz" to="nppk:5$OC5nkIr38" resolve="Hatchback" />
            </node>
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="5$OC5nkIqyz" role="3fbPAY">
        <property role="1ylvJX" value="Maintain safe distance" />
        <property role="TrG5h" value="DistanceControl_2" />
        <node concept="22Mrfp" id="5$OC5nkIqy$" role="22Mr8z" />
        <node concept="GmGrk" id="5$OC5nkIqy_" role="GmGcz">
          <node concept="1_0LV8" id="5$OC5nkIqyA" role="1_0VJ0">
            <node concept="19SGf9" id="5$OC5nkIqyB" role="1_0LWR">
              <node concept="19SUe$" id="5$OC5nkIqyC" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall reduce the speed of the vehicle in such a way that the safe following distance is maintained from the leading vehicle" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="5$OC5nkIqyD" role="3fbPAY">
        <property role="1ylvJX" value="Resume target speed" />
        <property role="TrG5h" value="DistanceControl_3" />
        <node concept="22Mrfp" id="5$OC5nkIqyE" role="22Mr8z" />
        <node concept="GmGrk" id="5$OC5nkIqyF" role="GmGcz">
          <node concept="1_0LV8" id="5$OC5nkIqyG" role="1_0VJ0">
            <node concept="19SGf9" id="5$OC5nkIqyH" role="1_0LWR">
              <node concept="19SUe$" id="5$OC5nkIqyI" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall accelerate to the set speed if the leading vehicle accelerates and moves out of range" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="5$OC5nkIqyJ" role="3fbPAY">
        <property role="1ylvJX" value="Maintain accleration and Decelration within limits" />
        <property role="TrG5h" value="DistanceControl_4" />
        <node concept="22Mrfp" id="5$OC5nkIqyK" role="22Mr8z" />
        <node concept="GmGrk" id="5$OC5nkIqyL" role="GmGcz">
          <node concept="1_0LV8" id="5$OC5nkIqyM" role="1_0VJ0">
            <node concept="19SGf9" id="5$OC5nkIqyN" role="1_0LWR">
              <node concept="19SUe$" id="5$OC5nkIqyO" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall ensure that while maintaining the vehicle speed or safe following distance, the acceleration and decelarion are within a range." />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="3fbQ3u" id="5$OC5nkIqyP" role="3fbPIo">
      <property role="1ylvJX" value="Emergency Braking" />
      <property role="TrG5h" value="BrakeControl" />
      <node concept="22Mrfp" id="5$OC5nkIqyQ" role="22Mr8z" />
      <node concept="GmGrk" id="5$OC5nkIqyR" role="GmGcz">
        <node concept="1_0LV8" id="5$OC5nkIqyS" role="1_0VJ0">
          <node concept="19SGf9" id="5$OC5nkIqyT" role="1_0LWR">
            <node concept="19SUe$" id="5$OC5nkIqyU" role="19SJt6">
              <property role="19SUeA" value="This group captures all the functional requirements that are related to braking control" />
            </node>
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="5$OC5nkIqyV" role="3fbPAY">
        <property role="1ylvJX" value="Warn the driver" />
        <property role="TrG5h" value="BrakeControl_1" />
        <node concept="22Mrfp" id="5$OC5nkIqyW" role="22Mr8z" />
        <node concept="GmGrk" id="5$OC5nkIqyX" role="GmGcz">
          <node concept="1_0LV8" id="5$OC5nkIqyY" role="1_0VJ0">
            <node concept="19SGf9" id="5$OC5nkIqyZ" role="1_0LWR">
              <node concept="19SUe$" id="5$OC5nkIqz0" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall warn the user if the distance between the vehicles is less than the safe following distance" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="5$OC5nkIqz1" role="3fbPAY">
        <property role="1ylvJX" value="Apply brakes" />
        <property role="TrG5h" value="BrakeControl_2" />
        <node concept="22Mrfp" id="5$OC5nkIqz2" role="22Mr8z" />
        <node concept="GmGrk" id="5$OC5nkIqz3" role="GmGcz">
          <node concept="1_0LV8" id="5$OC5nkIqz4" role="1_0VJ0">
            <node concept="19SGf9" id="5$OC5nkIqz5" role="1_0LWR">
              <node concept="19SUe$" id="5$OC5nkIqz6" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall apply brakes if the distance between the vehicles is less than the safe following distance and a colliosion is imminent" />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="3fbQ3u" id="5$OC5nkIqz7" role="3fbPIo">
      <property role="1ylvJX" value="ACC System User Interface" />
      <property role="TrG5h" value="UIReq" />
      <node concept="22Mrfp" id="5$OC5nkIqz8" role="22Mr8z" />
      <node concept="GmGrk" id="5$OC5nkIqz9" role="GmGcz">
        <node concept="1_0LV8" id="5$OC5nkIqza" role="1_0VJ0">
          <node concept="19SGf9" id="5$OC5nkIqzb" role="1_0LWR">
            <node concept="19SUe$" id="5$OC5nkIqzc" role="19SJt6">
              <property role="19SUeA" value="This group captures all the functional requirements that are related to user interface" />
            </node>
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="5$OC5nkIqzd" role="3fbPAY">
        <property role="1ylvJX" value="ACC On/Off switch" />
        <property role="TrG5h" value="UIReq1" />
        <node concept="22Mrfp" id="5$OC5nkIqze" role="22Mr8z" />
        <node concept="GmGrk" id="5$OC5nkIqzf" role="GmGcz">
          <node concept="1_0LV8" id="5$OC5nkIqzg" role="1_0VJ0">
            <node concept="19SGf9" id="5$OC5nkIqzh" role="1_0LWR">
              <node concept="19SUe$" id="5$OC5nkIqzi" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall have a switch to engage or disengage the system" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="5$OC5nkIqzj" role="3fbPAY">
        <property role="1ylvJX" value="ACC disengage" />
        <property role="TrG5h" value="UIReq2" />
        <node concept="22Mrfp" id="5$OC5nkIqzk" role="22Mr8z" />
        <node concept="GmGrk" id="5$OC5nkIqzl" role="GmGcz">
          <node concept="1_0LV8" id="5$OC5nkIqzm" role="1_0VJ0">
            <node concept="19SGf9" id="5$OC5nkIqzn" role="1_0LWR">
              <node concept="19SUe$" id="5$OC5nkIqzo" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall disengage when the driver taps the break pedal" />
              </node>
            </node>
          </node>
        </node>
        <node concept="3fbQ3u" id="5$OC5nkIqzp" role="3fbPAY">
          <property role="1ylvJX" value="ACC Set speed" />
          <property role="TrG5h" value="SetTargetVehSpd" />
          <node concept="22Mrfp" id="5$OC5nkIqzq" role="22Mr8z" />
          <node concept="GmGrk" id="5$OC5nkIqzr" role="GmGcz">
            <node concept="1_0LV8" id="5$OC5nkIqzs" role="1_0VJ0">
              <node concept="19SGf9" id="5$OC5nkIqzt" role="1_0LWR">
                <node concept="19SUe$" id="5$OC5nkIqzu" role="19SJt6">
                  <property role="19SUeA" value="The ACC system shall allow driver to set the target vehicle speed" />
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="5$OC5nkIqzv" role="3fbPAY">
        <property role="1ylvJX" value="ACC warning " />
        <property role="TrG5h" value="UIReq4" />
        <node concept="22Mrfp" id="5$OC5nkIqzw" role="22Mr8z" />
        <node concept="GmGrk" id="5$OC5nkIqzx" role="GmGcz">
          <node concept="1_0LV8" id="5$OC5nkIqzy" role="1_0VJ0">
            <node concept="19SGf9" id="5$OC5nkIqzz" role="1_0LWR">
              <node concept="19SUe$" id="5$OC5nkIqz$" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall have a visual &amp; audible warning system to warn the user incase if the following distance is greater than the distance between the leading &amp; subject " />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="3fbQ3u" id="5$OC5nkIqz_" role="3fbPIo">
      <property role="1ylvJX" value="ACC Performance " />
      <property role="TrG5h" value="PerfReqs" />
      <node concept="22Mrfp" id="5$OC5nkIqzA" role="22Mr8z" />
      <node concept="GmGrk" id="5$OC5nkIqzB" role="GmGcz">
        <node concept="1_0LV8" id="5$OC5nkIqzC" role="1_0VJ0">
          <node concept="19SGf9" id="5$OC5nkIqzD" role="1_0LWR">
            <node concept="19SUe$" id="5$OC5nkIqzE" role="19SJt6">
              <property role="19SUeA" value="This group captures all the performance requiremnts related to ACC system" />
            </node>
          </node>
        </node>
      </node>
      <node concept="3fbQ3u" id="5$OC5nkIqzF" role="3fbPAY">
        <property role="1ylvJX" value="Acceleration and Deceleration Limits" />
        <property role="TrG5h" value="Limits_Accel_Decel" />
        <node concept="22Mrfp" id="5$OC5nkIqzG" role="22Mr8z" />
        <node concept="GmGrk" id="5$OC5nkIqzH" role="GmGcz">
          <node concept="1_0LV8" id="5$OC5nkIqzI" role="1_0VJ0">
            <node concept="19SGf9" id="5$OC5nkIqzJ" role="1_0LWR">
              <node concept="19SUe$" id="5$OC5nkIqzK" role="19SJt6">
                <property role="19SUeA" value="The ACC system shall limit the acceleration and deceleration to following limits so that ACC operation does not distract the driver (ISO limits)" />
              </node>
            </node>
          </node>
        </node>
        <node concept="3fbQ3u" id="5$OC5nkIqzL" role="3fbPAY">
          <property role="1ylvJX" value="Maximum Deceleration" />
          <property role="TrG5h" value="PerfReqs11" />
          <node concept="22Mrfp" id="5$OC5nkIqzM" role="22Mr8z" />
          <node concept="GmGrk" id="5$OC5nkIqzN" role="GmGcz">
            <node concept="1_0LV8" id="5$OC5nkIqzO" role="1_0VJ0">
              <node concept="19SGf9" id="5$OC5nkIqzP" role="1_0LWR">
                <node concept="19SUe$" id="5$OC5nkIqzQ" role="19SJt6">
                  <property role="19SUeA" value="The maximum mean deceleration shall be less than 3.0 m/sec2 (average over 2seconds)" />
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="3fbQ3u" id="5$OC5nkIqzR" role="3fbPAY">
          <property role="1ylvJX" value="Maximum Deceleration Rate" />
          <property role="TrG5h" value="PerfReqs12" />
          <node concept="22Mrfp" id="5$OC5nkIqzS" role="22Mr8z" />
          <node concept="GmGrk" id="5$OC5nkIqzT" role="GmGcz">
            <node concept="1_0LV8" id="5$OC5nkIqzU" role="1_0VJ0">
              <node concept="19SGf9" id="5$OC5nkIqzV" role="1_0LWR">
                <node concept="19SUe$" id="5$OC5nkIqzW" role="19SJt6">
                  <property role="19SUeA" value="The maximum mean deceleration rate shall be less than 2.5 m/sec3 (average over 1 second)" />
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="3fbQ3u" id="5$OC5nkIqzX" role="3fbPAY">
          <property role="1ylvJX" value="Maximum Acceleration" />
          <property role="TrG5h" value="PerfReqs13" />
          <node concept="22Mrfp" id="5$OC5nkIqzY" role="22Mr8z" />
          <node concept="GmGrk" id="5$OC5nkIqzZ" role="GmGcz">
            <node concept="1_0LV8" id="5$OC5nkIq$0" role="1_0VJ0">
              <node concept="19SGf9" id="5$OC5nkIq$1" role="1_0LWR">
                <node concept="19SUe$" id="5$OC5nkIq$2" role="19SJt6">
                  <property role="19SUeA" value="The maximum acceleration shall not exceed 2 m/sec2" />
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="3GEVxB" id="5NclTJJELNC" role="1BwUYK">
      <ref role="3GEb4d" to="nppk:5$OC5nkIr31" resolve="myVar" />
    </node>
    <node concept="2dvl_R" id="5NclTJJELO8" role="lGtFl">
      <ref role="2dvl_Q" to="nppk:5$OC5nkIr32" resolve="car" />
      <ref role="AiAcg" to="nppk:7BCn9nl6DD8" resolve="ProductLine2" />
    </node>
  </node>
  <node concept="3fbPIq" id="5$OC5nkIq$3">
    <property role="TrG5h" value="ACCTestCases" />
    <ref role="G9hjw" node="5$OC5nkIq$F" resolve="DefaultDocConfig" />
    <node concept="3GEVxB" id="5$OC5nkIq$4" role="1BwUYK">
      <ref role="3GEb4d" node="5$OC5nkIqxC" resolve="ACCRequirements" />
    </node>
    <node concept="3GEVxB" id="5NclTJJELO_" role="1BwUYK">
      <ref role="3GEb4d" to="nppk:5$OC5nkIr31" resolve="myVar" />
    </node>
    <node concept="OjmMv" id="5$OC5nkIq$5" role="tLAhV">
      <node concept="19SGf9" id="5$OC5nkIq$6" role="OjmMu">
        <node concept="19SUe$" id="5$OC5nkIq$7" role="19SJt6" />
      </node>
    </node>
    <node concept="2RsZnQ" id="5$OC5nkIq$8" role="2RsZnW" />
    <node concept="3fbQ3u" id="5$OC5nkIq$9" role="3fbPIo">
      <property role="1ylvJX" value="SpeedControl" />
      <property role="TrG5h" value="SpeedCoontrol1" />
      <node concept="GmGrk" id="5$OC5nkIq$a" role="GmGcz">
        <node concept="1_0LV8" id="5$OC5nkIq$b" role="1_0VJ0">
          <node concept="19SGf9" id="5$OC5nkIq$c" role="1_0LWR">
            <node concept="19SUe$" id="5$OC5nkIq$d" role="19SJt6" />
          </node>
        </node>
      </node>
      <node concept="2fJMCF" id="5$OC5nkIq$e" role="22Mr8z" />
      <node concept="2fJBAa" id="5$OC5nkIq$f" role="3faCKd">
        <node concept="OjmMv" id="5$OC5nkIq$g" role="2fJBAb">
          <node concept="19SGf9" id="5$OC5nkIq$h" role="OjmMu">
            <node concept="19SUe$" id="5$OC5nkIq$i" role="19SJt6">
              <property role="19SUeA" value=" " />
            </node>
          </node>
        </node>
        <node concept="OjmMv" id="5$OC5nkIq$j" role="2fJBAd">
          <node concept="19SGf9" id="5$OC5nkIq$k" role="OjmMu">
            <node concept="19SUe$" id="5$OC5nkIq$l" role="19SJt6">
              <property role="19SUeA" value="Set the ACC ON. Set the reference cruising speed. " />
            </node>
          </node>
        </node>
        <node concept="OjmMv" id="5$OC5nkIq$m" role="2fJBA0">
          <node concept="19SGf9" id="5$OC5nkIq$n" role="OjmMu">
            <node concept="19SUe$" id="5$OC5nkIq$o" role="19SJt6">
              <property role="19SUeA" value="The vehicle should cruise at the reference cruise speed" />
            </node>
          </node>
        </node>
        <node concept="2fQ4Za" id="5$OC5nkIq$p" role="2fQmDx">
          <ref role="2fQ4Wu" node="5$OC5nkIqy5" resolve="SpdCntrl" />
        </node>
      </node>
      <node concept="2dvt44" id="5NclTJJELOD" role="lGtFl">
        <node concept="3o9_tv" id="5NclTJJELOE" role="2dvt70">
          <node concept="2qVrgw" id="5NclTJJELOJ" role="3o9_ts">
            <ref role="2qVrgz" to="nppk:5$OC5nkIr38" resolve="Hatchback" />
          </node>
        </node>
      </node>
    </node>
    <node concept="3fbQ3u" id="5$OC5nkIq$q" role="3fbPIo">
      <property role="1ylvJX" value="FollowingDistanceMode" />
      <property role="TrG5h" value="FollowingDistance1" />
      <node concept="GmGrk" id="5$OC5nkIq$r" role="GmGcz">
        <node concept="1_0LV8" id="5$OC5nkIq$s" role="1_0VJ0">
          <node concept="19SGf9" id="5$OC5nkIq$t" role="1_0LWR">
            <node concept="19SUe$" id="5$OC5nkIq$u" role="19SJt6" />
          </node>
        </node>
      </node>
      <node concept="2fJMCF" id="5$OC5nkIq$v" role="22Mr8z" />
      <node concept="2fJBAa" id="5$OC5nkIq$w" role="3faCKd">
        <node concept="OjmMv" id="5$OC5nkIq$x" role="2fJBAb">
          <node concept="19SGf9" id="5$OC5nkIq$y" role="OjmMu">
            <node concept="19SUe$" id="5$OC5nkIq$z" role="19SJt6">
              <property role="19SUeA" value=" " />
            </node>
          </node>
        </node>
        <node concept="OjmMv" id="5$OC5nkIq$$" role="2fJBAd">
          <node concept="19SGf9" id="5$OC5nkIq$_" role="OjmMu">
            <node concept="19SUe$" id="5$OC5nkIq$A" role="19SJt6">
              <property role="19SUeA" value="Set the ACC ON. Set the reference cruising speed greater than leading vehicle speed. " />
            </node>
          </node>
        </node>
        <node concept="OjmMv" id="5$OC5nkIq$B" role="2fJBA0">
          <node concept="19SGf9" id="5$OC5nkIq$C" role="OjmMu">
            <node concept="19SUe$" id="5$OC5nkIq$D" role="19SJt6">
              <property role="19SUeA" value="The vehicle should cruise at a speed less than the reference cruise speed maintaining a safe distance between the vehicles." />
            </node>
          </node>
        </node>
        <node concept="2fQ4Za" id="5LiAYfJCtr0" role="2fQmDx">
          <ref role="2fQ4Wu" node="5$OC5nkIqyt" resolve="DistanceControl_1" />
        </node>
      </node>
      <node concept="3gmxrQ" id="5d2c0EzLoum" role="2RsgH6">
        <node concept="3gmsKp" id="4Amm8JD6yty" role="3gmzA8">
          <property role="3HtoK9" value="Verification Process" />
          <property role="3Ht2fy" value="1481107354583" />
        </node>
      </node>
    </node>
    <node concept="2dvl_R" id="5d2c0EzLoup" role="lGtFl">
      <ref role="2dvl_Q" to="nppk:5$OC5nkIr32" resolve="car" />
      <ref role="AiAcg" to="nppk:7BCn9nl6DD8" resolve="ProductLine2" />
    </node>
  </node>
  <node concept="2SbYGP" id="5$OC5nkIq$F">
    <property role="TrG5h" value="DefaultDocConfig" />
    <node concept="2SbYGw" id="5$OC5nkIq$G" role="Cbewh">
      <property role="TrG5h" value="temp" />
      <node concept="9PVaO" id="5$OC5nkIq$H" role="9PVG_" />
    </node>
  </node>
</model>

