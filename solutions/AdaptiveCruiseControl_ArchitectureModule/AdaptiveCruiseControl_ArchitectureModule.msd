<?xml version="1.0" encoding="UTF-8"?>
<solution name="AdaptiveCruiseControl_ArchitectureModule" uuid="83806b36-c769-4ad4-ae61-2a0dafeaa196" moduleVersion="0" compileInMPS="true">
  <models>
    <modelRoot contentPath="${module}" type="default">
      <sourceRoot location="models" />
    </modelRoot>
  </models>
  <sourcePath />
  <usedDevKits>
    <usedDevKit>9d6f81e1-9ac3-47a6-9f80-ceba2efcadad(DataDictionary)</usedDevKit>
    <usedDevKit>ed36face-06da-4ece-98fb-6f64b68c4584(PhysicalUnits)</usedDevKit>
    <usedDevKit>84a6edcf-c6e8-49f1-af3b-05b24d2eec70(DataFlow)</usedDevKit>
    <usedDevKit>2f364326-5dc9-47c7-b7f0-d53df6ffd9e4(ConstantGroups)</usedDevKit>
    <usedDevKit>277935d2-18de-4304-b853-7770de1fb32c(Analyses)</usedDevKit>
    <usedDevKit>a2812605-e334-464d-acc7-8fb864755ed7(FeatureModels)</usedDevKit>
    <usedDevKit>dee9d228-3a6e-4197-9138-6647a60f7a90(ProcessSupport)</usedDevKit>
    <usedDevKit>5659195e-1bd3-4b93-87f9-9509f556692f(AmesimExport)</usedDevKit>
    <usedDevKit>7cb7a2e0-fff0-4922-bf5e-ec095e163238(PolarionRM)</usedDevKit>
  </usedDevKits>
  <languageVersions>
    <language slang="l:7c8baff8-6b47-46a9-88cf-5e77056f3d91:com.lmsintl.accent.analyses.blocks" version="0" />
    <language slang="l:9ac8b6c2-9247-4444-b735-dfa57406d69b:com.lmsintl.accent.analyses.blocks.similarity" version="1" />
    <language slang="l:31f70732-7f14-4aa0-abff-6f50f7e5fbf2:com.lmsintl.accent.analyses.datadictionary" version="1" />
    <language slang="l:7559bd04-3428-420f-88db-0425d3b8eec2:com.lmsintl.accent.analyses.fm" version="0" />
    <language slang="l:c545ad37-f878-4f56-a3c1-ca74890b652c:com.lmsintl.accent.blocks.amesim" version="0" />
    <language slang="l:0aa7a488-a49e-431e-b271-0de1c2aa708e:com.lmsintl.accent.blocks.base" version="9" />
    <language slang="l:edcb64af-197d-4ced-a7cd-8438a3c1931e:com.lmsintl.accent.blocks.baseLanguage.export" version="1" />
    <language slang="l:a361da06-8832-42f3-810c-121e744e2e13:com.lmsintl.accent.blocks.c" version="1" />
    <language slang="l:e3800c72-4d44-4592-b155-dad1a681f3c7:com.lmsintl.accent.blocks.composite" version="0" />
    <language slang="l:a48e4029-5556-45a5-88d2-ea85b80a6c42:com.lmsintl.accent.blocks.execution" version="1" />
    <language slang="l:84247009-5205-4266-8ff3-42de1125506d:com.lmsintl.accent.blocks.ext" version="0" />
    <language slang="l:7644af7a-e964-4abe-9894-c5f8446cffcb:com.lmsintl.accent.blocks.instantiation" version="2" />
    <language slang="l:d1ec100b-616b-4ea9-a22c-f19b794de6e0:com.lmsintl.accent.blocks.legacy" version="0" />
    <language slang="l:023473ba-7b02-4fbf-ab98-b8e70fadd015:com.lmsintl.accent.blocks.qa" version="0" />
    <language slang="l:a36521e3-962e-4039-9b1a-6ca98078bc89:com.lmsintl.accent.blocks.simulation" version="2" />
    <language slang="l:ef2cf32b-dbd4-4a7b-b54f-47750a14fad1:com.lmsintl.accent.blocks.statemachine" version="0" />
    <language slang="l:1c0775f7-0b6b-40c6-b8d3-521fe642b38d:com.lmsintl.accent.blocks.test" version="1" />
    <language slang="l:d7c39d58-3682-4eac-83d5-8d20c49b7c6f:com.lmsintl.accent.closedloopsimulation" version="0" />
    <language slang="l:459957bc-0c03-4f16-bbc5-51283f88e74b:com.lmsintl.accent.components.test" version="0" />
    <language slang="l:2a54be15-b75a-45ed-b58e-a4ca1d4ab33f:com.lmsintl.accent.constantgroups" version="1" />
    <language slang="l:3e69b1ff-b264-422d-8dfa-681e167af189:com.lmsintl.accent.datadictionary" version="2" />
    <language slang="l:a7602ae7-5a1d-4c52-ba78-6cd5301b831e:com.lmsintl.accent.lookuptable" version="0" />
    <language slang="l:5fc691b1-c445-4ec6-82a5-f16abb643e22:com.lmsintl.accent.pcomponents" version="0" />
    <language slang="l:8609df1a-d052-4b05-a2ac-a5d2c3f63c6d:com.lmsintl.accent.req.export" version="0" />
    <language slang="l:201d599b-73d5-46e5-b3a8-ede3e87dfed5:com.lmsintl.accent.req.ext" version="0" />
    <language slang="l:264d4799-1c45-47d7-9e67-2d176982240d:com.lmsintl.accent.requirements.polarion" version="0" />
    <language slang="l:dfe2d067-f0ab-44cf-8f63-d712e06badfd:com.lmsintl.accent.test" version="0" />
    <language slang="l:89265165-b7fa-4313-a684-9b9843de77a4:com.lmsintl.accent.util" version="1" />
    <language slang="l:5d09074f-babf-4f2b-b78b-e9929af0f3be:com.mbeddr.analyses.base" version="0" />
    <language slang="l:42270baf-e92c-4c32-b263-d617b3fce239:com.mbeddr.analyses.cbmc" version="2" />
    <language slang="l:c9a5ade7-5f6a-41ae-a703-5d94a418cf4f:com.mbeddr.analyses.cbmc.components" version="0" />
    <language slang="l:0a02a8f9-14d0-4970-9bd2-ca35a097c80d:com.mbeddr.analyses.cbmc.core" version="0" />
    <language slang="l:daa1849d-6955-4fef-afe3-8aea1f61e6fa:com.mbeddr.analyses.cbmc.statemachines" version="0" />
    <language slang="l:66fa30ae-4b73-4f2b-b199-9a072902ec06:com.mbeddr.analyses.cbmc.testsgen" version="0" />
    <language slang="l:e865cad2-7cc8-437a-951a-665bcbcb8b1a:com.mbeddr.cc.requirements" version="0" />
    <language slang="l:f3ed62ca-3490-40d0-890b-9b3133cc2ead:com.mbeddr.cc.requirements.c" version="0" />
    <language slang="l:7a52ca96-9053-41d2-ae13-8cee05f36698:com.mbeddr.cc.requirements.c2doc" version="0" />
    <language slang="l:983e02f8-8062-426e-b60d-bc044a46b93a:com.mbeddr.cc.requirements.report" version="0" />
    <language slang="l:d6714220-402d-48cb-a4a2-88223c6257f6:com.mbeddr.cc.requirements.scenarios" version="0" />
    <language slang="l:e530d4cb-efad-4822-92f8-1d114f03f836:com.mbeddr.cc.requirements.wp" version="0" />
    <language slang="l:53bab999-e9c3-428a-80be-fef5bed08f55:com.mbeddr.cc.trace" version="0" />
    <language slang="l:017fba0e-af15-4a23-b0a8-02b5c1141e75:com.mbeddr.cc.var.annotations" version="0" />
    <language slang="l:634736cf-ea73-4eb1-abe9-d2ecc5fcf837:com.mbeddr.cc.var.c" version="0" />
    <language slang="l:e401b447-8019-4ccd-a72c-bfb0230f5782:com.mbeddr.cc.var.fm" version="1" />
    <language slang="l:b8eeb935-038d-48d8-ae7f-0c6768b8d4fc:com.mbeddr.cc.var.rt" version="0" />
    <language slang="l:d4280a54-f6df-4383-aa41-d1b2bffa7eb1:com.mbeddr.core.base" version="3" />
    <language slang="l:2d7fadf5-33f6-4e80-a78f-0f739add2bde:com.mbeddr.core.buildconfig" version="1" />
    <language slang="l:b2da2e1a-b542-47f5-9be0-4dc21efe74a4:com.mbeddr.core.checks" version="0" />
    <language slang="l:390de4af-0c8d-4716-8dec-3d05ca751b28:com.mbeddr.core.cinterpreter" version="0" />
    <language slang="l:223dd778-c44f-4ef3-9535-7aa7d12244a6:com.mbeddr.core.debug" version="0" />
    <language slang="l:ebb5e132-d298-4649-b320-b3f4d7f3acff:com.mbeddr.core.debug.blext" version="0" />
    <language slang="l:783af01f-87a7-412c-be99-293a162652b5:com.mbeddr.core.embedded" version="0" />
    <language slang="l:61c69711-ed61-4850-81d9-7714ff227fb0:com.mbeddr.core.expressions" version="3" />
    <language slang="l:ad5e9db1-9600-47c7-86ef-614165b281b8:com.mbeddr.core.legacy" version="0" />
    <language slang="l:f93d1dbe-bfd1-42dd-932a-f375fa6f5373:com.mbeddr.core.make" version="1" />
    <language slang="l:6d11763d-483d-4b2b-8efc-09336c1b0001:com.mbeddr.core.modules" version="4" />
    <language slang="l:62296a07-bc38-46d2-8034-198c24063588:com.mbeddr.core.modules.gen" version="0" />
    <language slang="l:3bf5377a-e904-4ded-9754-5a516023bfaa:com.mbeddr.core.pointers" version="0" />
    <language slang="l:a9d69647-0840-491e-bf39-2eb0805d2011:com.mbeddr.core.statements" version="1" />
    <language slang="l:efda956e-491e-4f00-ba14-36af2f213ecf:com.mbeddr.core.udt" version="1" />
    <language slang="l:06d68b77-b699-4918-83b8-857e63787800:com.mbeddr.core.unittest" version="3" />
    <language slang="l:2693fc71-9b0e-4b05-ab13-f57227d675f2:com.mbeddr.core.util" version="0" />
    <language slang="l:2374bc90-7e37-41f1-a9c4-c2e35194c36a:com.mbeddr.doc" version="0" />
    <language slang="l:f44f6b9a-bf30-4f73-866e-fac17c177409:com.mbeddr.doc.gen_latex" version="0" />
    <language slang="l:2dec0852-3a21-4c4e-a68c-b05236cc37f2:com.mbeddr.doc.gen_xhtml" version="0" />
    <language slang="l:f8f68d92-c6d2-44b3-8d63-c00ade75ec86:com.mbeddr.doc.latex" version="0" />
    <language slang="l:e06345c7-da82-4f8b-bd44-1425fe158640:com.mbeddr.doc.meta" version="0" />
    <language slang="l:97d24244-51db-4e2e-97fc-7bd73b1f5f40:com.mbeddr.ext.components" version="1" />
    <language slang="l:028899e1-bfee-4db6-b470-ed0f9ee5f662:com.mbeddr.ext.components.embedded" version="0" />
    <language slang="l:bd640b8f-4be4-42b6-8dc0-2c94d1ddf606:com.mbeddr.ext.components.gen_nomw" version="0" />
    <language slang="l:36a565f1-3fa0-42d6-baac-f87e209c9789:com.mbeddr.ext.components.mock" version="0" />
    <language slang="l:13a36f90-83c5-4bf6-9dd6-70e455f1ef36:com.mbeddr.ext.components.statemachine" version="0" />
    <language slang="l:41911c23-eb23-4ee6-872f-bc7f7ebce290:com.mbeddr.ext.components.test" version="0" />
    <language slang="l:54f2a59b-97bb-4c09-af92-928ebf9c5966:com.mbeddr.ext.compositecomponents" version="0" />
    <language slang="l:b879012d-402b-40e0-8df7-e6fa93b9b711:com.mbeddr.ext.concurrency" version="0" />
    <language slang="l:d6943f81-8340-4661-9d57-8fc1e2d23b36:com.mbeddr.ext.concurrency.plainC" version="0" />
    <language slang="l:b574d547-b77e-4fed-9f60-c349c4410765:com.mbeddr.ext.math" version="0" />
    <language slang="l:564e97d6-8fb7-41f5-bfc1-c7ed376efd62:com.mbeddr.ext.statemachines" version="0" />
    <language slang="l:0d04a6cc-773e-4069-b9b0-11884b2ff1c8:com.mbeddr.ext.units" version="1" />
    <language slang="l:63e0e566-5131-447e-90e3-12ea330e1a00:com.mbeddr.mpsutil.blutil" version="1" />
    <language slang="l:a482b416-d0c9-473f-8f67-725ed642b3f3:com.mbeddr.mpsutil.breadcrumb" version="0" />
    <language slang="l:1c897ba5-9d43-4035-ac7f-0306495743ac:com.mbeddr.mpsutil.interpreter.test" version="0" />
    <language slang="l:d09a16fb-1d68-4a92-a5a4-20b4b2f86a62:com.mbeddr.mpsutil.jung" version="0" />
    <language slang="l:92f195b6-a209-4804-ad65-f5248ecd5873:com.mbeddr.mpsutil.margincell" version="0" />
    <language slang="l:b4d28e19-7d2d-47e9-943e-3a41f97a0e52:com.mbeddr.mpsutil.plantuml.node" version="0" />
    <language slang="l:c788b046-2019-4656-8b60-8bb9bbb177b5:com.mbeddr.mpsutil.review" version="0" />
    <language slang="l:7a060fae-09e0-4372-be36-6696d6554c0e:com.mbeddr.mpsutil.review.annotation" version="0" />
    <language slang="l:c1c2a88a-323c-4605-a37d-9ab77a2ccbd2:com.mbeddr.mpsutil.suppresswarning" version="0" />
    <language slang="l:8ca79d43-eb45-4791-bdd4-0d6130ff895b:de.itemis.mps.editor.diagram.layout" version="0" />
    <language slang="l:92d2ea16-5a42-4fdf-a676-c7604efe3504:de.slisson.mps.richtext" version="0" />
    <language slang="l:f3061a53-9226-4cc5-a443-f952ceaf5816:jetbrains.mps.baseLanguage" version="4" />
    <language slang="l:ed6d7656-532c-4bc2-81d1-af945aeb8280:jetbrains.mps.baseLanguage.blTypes" version="0" />
    <language slang="l:fd392034-7849-419d-9071-12563d152375:jetbrains.mps.baseLanguage.closures" version="0" />
    <language slang="l:83888646-71ce-4f1c-9c53-c54016f6ad4f:jetbrains.mps.baseLanguage.collections" version="0" />
    <language slang="l:760a0a8c-eabb-4521-8bfd-65db761a9ba3:jetbrains.mps.baseLanguage.logging" version="0" />
    <language slang="l:f61473f9-130f-42f6-b98d-6c438812c2f6:jetbrains.mps.baseLanguage.unitTest" version="0" />
    <language slang="l:479c7a8c-02f9-43b5-9139-d910cb22f298:jetbrains.mps.core.xml" version="0" />
    <language slang="l:63650c59-16c8-498a-99c8-005c7ee9515d:jetbrains.mps.lang.access" version="0" />
    <language slang="l:af65afd8-f0dd-4942-87d9-63a55f2a9db1:jetbrains.mps.lang.behavior" version="0" />
    <language slang="l:ceab5195-25ea-4f22-9b92-103b95ca8c0c:jetbrains.mps.lang.core" version="1" />
    <language slang="l:86ef8290-12bb-4ca7-947f-093788f263a9:jetbrains.mps.lang.project" version="0" />
    <language slang="l:7866978e-a0f0-4cc7-81bc-4d213d9375e1:jetbrains.mps.lang.smodel" version="4" />
    <language slang="l:c72da2b9-7cce-4447-8389-f407dc1158b7:jetbrains.mps.lang.structure" version="3" />
    <language slang="l:9ded098b-ad6a-4657-bfd9-48636cfe8bc3:jetbrains.mps.lang.traceable" version="0" />
    <language slang="l:7a5dda62-9140-4668-ab76-d5ed1746f2b2:jetbrains.mps.lang.typesystem" version="0" />
  </languageVersions>
  <dependencyVersions>
    <module reference="83806b36-c769-4ad4-ae61-2a0dafeaa196(AdaptiveCruiseControl_ArchitectureModule)" version="0" />
    <module reference="6354ebe7-c22a-4a0f-ac54-50b52ab9b065(JDK)" version="0" />
    <module reference="eb06d7f4-bdee-47c1-9464-7b56844560e7(com.lmsintl.accent.analyses.blocks.pluginSolution)" version="0" />
    <module reference="5d491ec0-3396-42f1-98ee-c82994c364b0(com.lmsintl.accent.analyses.core_ext.pluginSolution)" version="0" />
    <module reference="4fd9d0b1-2819-431a-858c-b8849fa41748(com.lmsintl.accent.analyses.core_ext.rt)" version="0" />
    <module reference="e9216a02-20b0-4fff-b3fd-961b5b03be9e(com.lmsintl.accent.analyses.fm.rt)" version="0" />
    <module reference="13c63209-1eb7-491d-accf-3ba493379657(com.mbeddr.analyses.cbmc.components.pluginSolution)" version="0" />
    <module reference="603a3466-f1f4-442a-b544-048f481ec3bb(com.mbeddr.analyses.cbmc.components.rt)" version="0" />
    <module reference="fbe54499-edb8-4097-b473-699993bd8a01(com.mbeddr.analyses.cbmc.core.pluginSolution)" version="0" />
    <module reference="9506d0a9-4e49-4605-b51a-d3aeb0070ba3(com.mbeddr.analyses.cbmc.core.rt)" version="0" />
    <module reference="397da8bd-bcff-4d80-87cb-c4eaba8e2cb2(com.mbeddr.analyses.cbmc.pluginSolution)" version="0" />
    <module reference="a3733d9d-fa94-4706-bdd4-596b968eba8e(com.mbeddr.analyses.cbmc.rt)" version="0" />
    <module reference="93df2f50-c615-4300-ad92-915871dcae02(com.mbeddr.analyses.cbmc.statemachines.pluginSolution)" version="0" />
    <module reference="0a31509b-f803-4558-b840-db9f6dc14b2f(com.mbeddr.analyses.cbmc.statemachines.rt)" version="0" />
    <module reference="d280cd6b-3d77-4bf2-b70d-fe049ab4c77e(com.mbeddr.analyses.sat4j)" version="0" />
    <module reference="c34744c1-dc64-4da4-9850-885dee7d4a0c(com.mbeddr.analyses.sat4j.fm)" version="0" />
    <module reference="a71037fe-a093-42d0-8f70-3a899fe590db(com.mbeddr.analyses.sat4j.fm.pluginSolution)" version="0" />
    <module reference="4c16cb42-7fa3-47c7-89c7-1c479c287588(com.mbeddr.analyses.utils)" version="0" />
  </dependencyVersions>
</solution>

