#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	var uLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	struct<3> Local_106 = { 0, 0, 0 } ;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	float fLocal_113 = 0f;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 17;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 17;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 12;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 12;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 12;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 9;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 9;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	char* sLocal_239 = NULL;
	struct<16> Local_240[8];
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 16;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_93 = ((0.05f + 0.275f) - 0.01f);
	fLocal_96 = -0.05f;
	fLocal_97 = 0.92f;
	fLocal_98 = 1.94f;
	fLocal_99 = 2.99f;
	fLocal_100 = 3.7f;
	Local_102 = { -0.4f, 0.96f, 0.85f };
	fLocal_105 = 0.95f;
	Local_106 = { 0f, 2f, 2.5f };
	fLocal_109 = 1.75f;
	Local_110 = { 0f, 0f, 120f };
	fLocal_113 = 35.5f;
	iLocal_235 = -1;
	iLocal_237 = -1;
	sLocal_239 = "";
	if (unk_0x09952BA662A7629B(unk_0xCAEDBF30E3EA14FC("appCovertOps")) > 1)
	{
		func_205(0, 0);
	}
	func_159();
	while (Global_68165)
	{
		func_155();
		func_142();
		func_140();
		func_37();
		if (!unk_0xAA4F14DA15DB0B51(uLocal_234, 3))
		{
			func_31();
			func_11();
		}
		else
		{
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (((!unk_0xAA4F14DA15DB0B51(uLocal_234, 7) && !unk_0xAA4F14DA15DB0B51(uLocal_234, 6)) && iLocal_372 == 1) && !func_10())
	{
		if (!func_9())
		{
			if (!unk_0x6235C49EA2DBA22D())
			{
				func_8("WVM_LAUNCH_TUT", 9000);
				unk_0xF6082E2ADA1C795B(&uLocal_234, 6);
				func_2();
			}
		}
		else
		{
			unk_0xF6082E2ADA1C795B(&uLocal_234, 6);
		}
	}
}

void func_2()
{
	if (!func_5(15478, -1, -1))
	{
		func_3(15478, 1, -1, 1);
	}
	else if (!func_5(15479, -1, -1))
	{
		func_3(15479, 1, -1, 1);
	}
	else
	{
		func_3(15480, 1, -1, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (iParam2 == -1)
	{
		iParam2 = func_4();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_4()
{
	return Global_1312735;
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_4();
	}
	iVar1 = func_7(iParam0, iParam1);
	uVar2 = func_6(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x03C9AA3ADC1DEAF0(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
	}
	return iVar0;
}

int func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_4();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	return iVar0;
}

void func_8(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

int func_9()
{
	if ((func_5(15478, -1, -1) && func_5(15479, -1, -1)) && func_5(15480, -1, -1))
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	if (iLocal_237 != -1)
	{
		func_12(iLocal_237);
	}
}

void func_12(int iParam0)
{
	if (func_13(&uLocal_378, "GNRCAUD", func_30(iParam0), 8, 0, 0, 0))
	{
		iLocal_237 = -1;
	}
}

bool func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_29(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_14(sParam2, iParam3, 0);
}

int func_14(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0xE40123A348A5FEDA(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_28();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_27(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_26();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_19();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_18())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
				}
			}
			if (func_17())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_16();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_15();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_28();
	}
	return 0;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_16()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_17()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_19()
{
	if (func_25(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_20();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_20()
{
	func_21();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_21()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_24(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_23(unk_0x2A5EB8B0FE590B91());
			if (func_22(iVar0) && (!func_25(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_22(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_22(int iParam0)
{
	return iParam0 < 3;
}

int func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_24(int iParam0)
{
	if (func_22(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_25(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_27(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

void func_28()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_29(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GNRC_WVMPCT1";
		
		case 1:
			return "GNRC_WVMPCT2";
		
		default:
	}
	return "GNRC_WVMPCT1";
}

void func_31()
{
	bool bVar0;
	
	if ((!unk_0xAA4F14DA15DB0B51(uLocal_234, 4) && !func_10()) && iLocal_372 == 1)
	{
		if (!unk_0xAA4F14DA15DB0B51(uLocal_234, 5))
		{
			if (!func_5(15378, -1, -1))
			{
				bVar0 = true;
				iLocal_236 = 9000;
				iLocal_237 = 0;
				func_3(15378, 1, -1, 1);
			}
		}
		else if (!func_5(15379, -1, -1))
		{
			bVar0 = true;
			iLocal_236 = 9000;
			iLocal_237 = 1;
			func_3(15379, 1, -1, 1);
		}
	}
	if (bVar0)
	{
		unk_0xF6082E2ADA1C795B(&uLocal_234, 4);
	}
	else if (unk_0xAA4F14DA15DB0B51(uLocal_234, 4))
	{
		if (!func_36(&uLocal_376))
		{
			func_35(&uLocal_376, 0, 0);
		}
		else if (func_34(&uLocal_376, iLocal_236, 0))
		{
			unk_0x507FE690B1271947(&uLocal_234, 4);
			iLocal_236 = 0;
			func_33(&uLocal_376);
			if (func_32())
			{
				unk_0xF6082E2ADA1C795B(&uLocal_234, 3);
			}
		}
	}
}

int func_32()
{
	if ((func_5(15378, -1, -1) || unk_0xAA4F14DA15DB0B51(uLocal_234, 5)) && func_5(15379, -1, -1))
	{
		return 1;
	}
	return 0;
}

void func_33(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_34(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_35(uParam0, bParam2, 0);
	if (unk_0x591AF4C50B46E014() && !bParam2)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_36(var uParam0)
{
	return uParam0->f_1;
}

void func_37()
{
	int iVar0;
	int iVar1;
	
	func_138();
	if (unk_0xAA4F14DA15DB0B51(uLocal_234, 0))
	{
		if (unk_0x49312763BCF4C85A(uLocal_544) && unk_0x49312763BCF4C85A(uLocal_545))
		{
			iVar0 = unk_0x7E45511185E08C01(uLocal_544);
			iVar1 = unk_0x7E45511185E08C01(uLocal_545);
			switch (iVar0)
			{
				case 102:
					unk_0x08BE237DBCD9CBD9(-1, "Select_Mission_Cancel", "DLC_GR_MOC_Computer_Sounds", 1);
					func_137();
					break;
				
				case 101:
					func_55();
					break;
				
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					func_38(iVar0);
					break;
			}
			iLocal_372 = iVar1;
			unk_0x507FE690B1271947(&uLocal_234, 0);
		}
	}
}

void func_38(int iParam0)
{
	if (!func_46(iParam0))
	{
		func_42("WVM_MIS_TI", func_45(), "OR_OVRLY_OK", "", -1, 0);
		unk_0x08BE237DBCD9CBD9(-1, "Select_Mission_Unavailable", "DLC_GR_MOC_Computer_Sounds", 1);
	}
	else
	{
		func_40(iParam0);
		func_42("WVM_MIS_TI", "SVM_MIS_L", "WHOUSE_CONF", "WHOUSE_CANC", -1, 1);
		unk_0x08BE237DBCD9CBD9(-1, "Select_Mission_Are_You_Sure", "DLC_GR_MOC_Computer_Sounds", 1);
	}
	func_39();
}

void func_39()
{
	sLocal_239 = "";
}

void func_40(int iParam0)
{
	if (iLocal_235 != func_41(iParam0))
	{
		iLocal_235 = func_41(iParam0);
	}
}

int func_41(int iParam0)
{
	return iParam0;
}

void func_42(char* sParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0xD1FCC52F87A98873(uLocal_543, "SHOW_OVERLAY");
	func_44(sParam0);
	unk_0xADBDBA2DF8443753(sParam1);
	if (iParam4 != -1)
	{
		unk_0xEA97619D8B89D387(iParam4);
	}
	unk_0xF7D95CCE1364B5CE();
	func_44(sParam2);
	func_44(sParam3);
	unk_0x8123397DC676E794();
	unk_0xF6082E2ADA1C795B(&uLocal_234, 1);
	func_43(iParam5);
}

void func_43(int iParam0)
{
	if (iLocal_373 != iParam0)
	{
		iLocal_373 = iParam0;
	}
}

void func_44(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

char* func_45()
{
	return sLocal_239;
}

int func_46(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		func_54("SVM_MIS_FL");
		return 0;
	}
	if (!func_52(iParam0))
	{
		func_54("WVM_MIS_FNA");
		return 0;
	}
	if (func_50(unk_0x0FFED3E94261A832()))
	{
		func_54("WVM_MIS_FL2");
		return 0;
	}
	if (unk_0x1B154DE2D4606530())
	{
		func_54("SVM_MIS_FL");
		return 0;
	}
	if (iParam0 == 7 && !func_47(6))
	{
		func_54("WVM_MIS_FDB");
		return 0;
	}
	return 1;
}

bool func_47(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(func_48(5438, -1, 0), iParam0);
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_49(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_49(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_4();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_51(iParam0, 9);
	}
	return 0;
}

bool func_51(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

bool func_52(int iParam0)
{
	return iLocal_238 >= func_53(iParam0);
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_19579;
		
		case 1:
			return Global_262145.f_19580;
		
		case 2:
			return Global_262145.f_19581;
		
		case 3:
			return Global_262145.f_19582;
		
		case 4:
			return Global_262145.f_19583;
		
		case 5:
			return Global_262145.f_19584;
		
		case 6:
			return Global_262145.f_19585;
		
		case 7:
			return Global_262145.f_19586;
		
		default:
	}
	return -1;
}

void func_54(char* sParam0)
{
	sLocal_239 = sParam0;
}

void func_55()
{
	switch (func_136())
	{
		case 1:
			unk_0x08BE237DBCD9CBD9(-1, "Select_Mission_Launch", "DLC_GR_MOC_Computer_Sounds", 1);
			func_56(iLocal_235, 1);
			func_205(0, 0);
			break;
		
		case 0:
			unk_0x08BE237DBCD9CBD9(-1, "Select_Mission_Unavailable_OK", "DLC_GR_MOC_Computer_Sounds", 1);
			break;
	}
	func_137();
}

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	
	iVar0 = func_135(bParam1);
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	if (iVar0 < func_134(bParam1))
	{
		iVar1 = func_132(iVar0, bParam1);
		if (iVar1 != -1)
		{
			func_130(&(Global_794643.f_4[iVar1 /*88*/]));
			func_129();
			if (bParam1)
			{
				func_128(228);
			}
			else
			{
				func_128(222);
			}
			func_127(Global_794643.f_4[iVar1 /*88*/].f_71);
			func_125();
			func_124();
			func_123();
			func_122();
			if (func_119() <= 3)
			{
				func_118();
			}
			func_117();
			unk_0x4A1154920DC947F7("FMMC_PLYLOAD");
			unk_0x6B60B2318195A182(5);
			func_115(func_116(), 0, 0, 0);
			func_58(0, 0, 0f, 0f, 0f, &uVar2, 0f, 0f, 0f, 1, 0, &uVar2, &iVar5, iVar5, 0, 1);
			unk_0xA6C8C7573424CA93(0);
			func_57();
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_96 = 8;
			return 1;
		}
	}
	return 0;
}

void func_57()
{
	unk_0x507FE690B1271947(&Global_2445217, 15);
}

void func_58(int iParam0, int iParam1, struct<3> Param2, var uParam5, struct<3> Param6, bool bParam9, bool bParam10, var uParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	
	func_107(&(Global_2445217.f_659), iParam0, 1, iParam13, 1);
	if (func_105(unk_0x0FFED3E94261A832(), 0))
	{
		if (bParam10)
		{
			if (!unk_0x0AFBA1AD6DC1C540())
			{
				if (!func_104() || bParam14)
				{
					func_101(0);
				}
			}
			return;
		}
	}
	if (!unk_0x9FA769EB6C3BCCE4(Global_2445217.f_659))
	{
		Global_2445217.f_659 = unk_0x1FF428E592B6F928("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	Var3 = { Param6 };
	fVar6 = -1f;
	if (func_100(iParam0))
	{
		*uParam5 = { func_99(iParam0, iParam1) };
		Var3 = { func_98(iParam0, iParam1) };
		fVar6 = func_97(iParam0, iParam1);
	}
	if (!func_96(*uParam5))
	{
		Var0 = { *uParam5 };
	}
	if (func_96(Var0))
	{
		if (!bParam9)
		{
			Var0 = { Param2 };
			if (unk_0xF079EF2C4FF76DFD(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f)))
			{
			}
			else
			{
				Var0.f_2 = (Var0.f_2 + 4f);
			}
		}
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_96(Var0))
		{
			if (func_105(unk_0x0FFED3E94261A832(), 0))
			{
				if (unk_0x2137828D03306CAF(func_93()) && !unk_0xA9A04898798AE9E6(func_93(), 0))
				{
					Var0 = { unk_0xD1EE0E9FCD74A37B(func_93(), 1) };
					Var3 = { 0f, 0f, unk_0x6DAB28241B34DEED(func_93()) };
					if (func_92(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534, 1, 0))
					{
						Var0 = { unk_0xB07517AFB94E5297() };
						Var3 = { unk_0xC46DA33A0FD218EA(2) };
					}
				}
				else
				{
					Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
					Var3 = { 0f, 0f, unk_0x6DAB28241B34DEED(unk_0x2A5EB8B0FE590B91()) };
				}
			}
			else
			{
				Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
				Var3 = { 0f, 0f, unk_0x6DAB28241B34DEED(unk_0x2A5EB8B0FE590B91()) };
			}
			if ((func_91(unk_0x0FFED3E94261A832()) || func_89(unk_0x0FFED3E94261A832())) && func_88())
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
			}
			else if (unk_0xA419466089F321B4(unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91())))
			{
				if (func_91(unk_0x0FFED3E94261A832()))
				{
					Var0.f_2 = (Var0.f_2 + 0.5f);
				}
				else
				{
					Var0.f_2 = (Var0.f_2 + 1.5f);
				}
			}
			else
			{
				Var0.f_2 = (Var0.f_2 + 4f);
			}
		}
	}
	if (func_104() && !bParam14)
	{
		Var0 = { -213.5595f, 316.9778f, 96.9244f };
		Var3 = { -1.0483f, 0f, -127.3989f };
		fVar6 = 25.5102f;
	}
	if (iParam0 == 0 && bParam10)
	{
		func_84();
		func_83(&Var7, 144, Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15);
		if (!func_96(Var7))
		{
			Var0 = { Var7 };
		}
		func_77(&Var7, 144, Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15);
		Var3 = { Var7 };
	}
	unk_0xD429163073BD3A47(Global_2445217.f_659, 1);
	unk_0xADF936AD56C4C4C0(Global_2445217.f_659, Var0);
	unk_0x28BE4B7676B6AD67(Global_2445217.f_659, Var3, 2);
	if (fVar6 > 0f)
	{
		unk_0x4DD38134E80D1D6A(Global_2445217.f_659, fVar6);
	}
	else
	{
		unk_0x4DD38134E80D1D6A(Global_2445217.f_659, 40f);
	}
	if (func_104() && !bParam14)
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (!func_76(unk_0x0FFED3E94261A832()))
			{
				func_69(unk_0x0FFED3E94261A832(), 0, 4);
				unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), joaat("weapon_unarmed"), 1);
				unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), -209.434f, 305.016f, 95.9464f, 1, 0, 0, 1);
				unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), 12.5f);
				unk_0xEB6893E20118DD4D(unk_0x2A5EB8B0FE590B91(), -209.867f, 306.969f, 95.9464f, 1f, 20000, 1193033728, 0.1f);
				unk_0xAEE1122D64BCDB87(unk_0x2A5EB8B0FE590B91(), joaat("MotionState_Walk"), 0, 0, 0);
				unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
			}
		}
		unk_0x17F1CA1754EDB8DB(-209.434f, 305.016f, 95.9464f, 30f, 0, 0, 0, 0, 0);
		func_68(1);
	}
	if (!unk_0x0AFBA1AD6DC1C540())
	{
		if (!func_104() || bParam14)
		{
			func_101(0);
		}
	}
	unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 0, 0);
	if (!unk_0x0B21CC5276C2CE1B() || !unk_0x9AF3AC4F52023B45())
	{
		unk_0x9B0467159FAB9F56(0);
	}
	if (func_65())
	{
		unk_0xD36F38C63C0345CF();
	}
	if (unk_0x0AFBA1AD6DC1C540())
	{
		*uParam11 = { Var0 };
		*uParam12 = 1;
	}
	else
	{
		func_64(Var0);
	}
	unk_0x7155D1139B85886E(unk_0x0FFED3E94261A832(), 1);
	func_59(func_104(), bParam15);
}

void func_59(bool bParam0, bool bParam1)
{
	if (func_105(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	if (!bParam1 && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (unk_0xED01C551E3A161C0(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0xA806066ECDF61E23(unk_0x2A5EB8B0FE590B91(), 1, 1);
			}
		}
	}
	if (!bParam0)
	{
		if (unk_0x591AF4C50B46E014())
		{
			if (func_61())
			{
				unk_0x5DE3EC94E90BB96F(unk_0x2A5EB8B0FE590B91());
			}
			if (func_60())
			{
				func_69(unk_0x0FFED3E94261A832(), 0, 32772);
			}
			else if (!bParam1)
			{
				func_69(unk_0x0FFED3E94261A832(), 0, 319492);
			}
		}
		else
		{
			func_69(unk_0x0FFED3E94261A832(), 0, 57348);
		}
	}
}

bool func_60()
{
	return Global_2445989.f_5921;
}

int func_61()
{
	var uVar0;
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (func_63(uVar0, 1) && !func_62(uVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_62(var uParam0, bool bParam1)
{
	if (Global_69800)
	{
		if (unk_0x2137828D03306CAF(uParam0) && (!bParam1 || unk_0x7FAC45D56235AB39(uParam0, 0)))
		{
			if (unk_0x30BD96CB13063EC9(uParam0, "Player_Vehicle"))
			{
				if (unk_0x01307FD0B54F50D3(uParam0, "Player_Vehicle") == unk_0xA417460779EE0AF0(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_63(var uParam0, bool bParam1)
{
	if (Global_69800)
	{
		if (unk_0x2137828D03306CAF(uParam0) && (!bParam1 || unk_0x7FAC45D56235AB39(uParam0, 0)))
		{
			if (unk_0x30BD96CB13063EC9(uParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_64(struct<3> Param0)
{
	if (!func_65())
	{
		return;
	}
	unk_0xF8B740F31137A7A1(Param0, 0f, 0f, 0f);
	unk_0x45E1ADCAE603052F(1);
}

int func_65()
{
	if (func_105(unk_0x0FFED3E94261A832(), 0))
	{
		if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534 != func_67())
		{
			if (func_66(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534, 0, 1))
			{
				if (func_92(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534, 1, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_66(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	return -1;
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_144), 27);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_144), 27);
	}
}

void func_69(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0x7B399FFF3AC5B678())
		{
			unk_0x6F0F1C5EEC77F84A(0);
		}
	}
	if (!unk_0x591AF4C50B46E014())
	{
		uVar0 = iParam2;
		unk_0x73EC54DB6766EF37(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_74())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x885F483F34E47503(iParam0) && unk_0xB8B285A272E7A79E(iParam0))
		{
			uVar25 = unk_0x1E199569E0295838(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x591AF4C50B46E014())
				{
					unk_0xA64CA7CB069DDFFA(1);
				}
				else
				{
					unk_0x4C1FCB3943DAF647(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x591AF4C50B46E014() && !bVar18)
					{
						unk_0xA64CA7CB069DDFFA(0);
					}
					Global_2422215[iParam0 /*387*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_73(uVar25) && !unk_0x1CF549F1B0277DA6(uVar25))
				{
					if (!bVar21)
					{
						unk_0x81642E3BC0111BF2(uVar25, true, 0);
					}
				}
				if (!unk_0xED01C551E3A161C0(uVar25))
				{
					if (!bVar20)
					{
						unk_0xA32D9C84C1A93920(uVar25, false);
					}
					unk_0xE77EEA92586CF2E8(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xA32D9C84C1A93920(uVar25, false);
				}
				unk_0x2725C3746060DA66(uVar25, true);
				unk_0x1EF72C87138AD63D(iParam0, 0);
				unk_0x81CEA1F6278C00AA(uVar25);
				unk_0xDC7A31134115BFF0(uVar25, 1);
				func_72();
				func_71();
				if (unk_0x57A397BDF5F38342())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xFD918707B1B07874())
				{
				}
				Global_2422215[iParam0 /*387*/].f_254 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_73(uVar25) && !unk_0x1CF549F1B0277DA6(uVar25))
				{
					if (!bVar21)
					{
						unk_0x81642E3BC0111BF2(uVar25, !bVar14, 0);
					}
					if (!unk_0xED01C551E3A161C0(uVar25))
					{
						if (!bVar20)
						{
							unk_0xA32D9C84C1A93920(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xE77EEA92586CF2E8(uVar25, 1);
						}
					}
					if (func_70(Global_1638223.f_112772))
					{
						unk_0xA32D9C84C1A93920(uVar25, true);
					}
				}
				if (bVar9)
				{
					unk_0x1EF72C87138AD63D(iParam0, 0);
				}
				else
				{
					unk_0x1EF72C87138AD63D(iParam0, 1);
				}
				unk_0x2725C3746060DA66(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xE1F938E1A529D851(uVar25) && !unk_0xC4A39E4229BD3ABE(uVar25, 0))
					{
						unk_0x5DE3EC94E90BB96F(uVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x73EC54DB6766EF37(iParam0, bParam1, iVar26);
		}
	}
}

bool func_70(int iParam0)
{
	return iParam0 == 17;
}

void func_71()
{
	struct<2> Var0;
	
	Global_2434604.f_1010 = 0;
	Global_2434604.f_1011 = 0;
	Global_2434604.f_1012 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2434604.f_1017 = -1;
	Global_2404996.f_2472 = { Var0 };
}

void func_72()
{
	Global_2404996.f_664 = 0;
	Global_2404996.f_2513 = 0;
	Global_2404996.f_502 = 0;
	Global_2404996.f_578 = 0;
	Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_216 = 0;
}

int func_73(var uParam0)
{
	int iVar0;
	
	if (unk_0xC4A39E4229BD3ABE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xE897E371352225D5(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_74()
{
	if (func_75() == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()
{
	return Global_1312466.f_18;
}

bool func_76(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_144, 27);
}

int func_77(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_78(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_78(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_78(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
			func_78(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_78(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_78(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
			return 0;
	}
}

void func_78(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<6> Var0[2];
	struct<3> Var13;
	
	Var0[0 /*6*/] = { func_82(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_82(iParam0, bParam4) };
	*uParam2 = { func_80(iParam1, iParam3) };
	Var13 = { *uParam2 - Var0[0 /*6*/] };
	Var13 = { func_79(Var13, -Var0[0 /*6*/].f_3.f_2) };
	Var13 = { func_79(Var13, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0xEBB6A451E594E1A8(Var0[1 /*6*/], 0f, Var13) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_79(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_80(var uParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar23;
	
	iVar23 = 0;
	if (func_81(iParam1, &uVar6))
	{
		iVar23 = 1;
	}
	if (iVar23 && unk_0x21CE6973734660C6(&Var0, &(Var0.f_3), uParam0, uVar6))
	{
		return Var0;
	}
	return Var0;
}

int func_81(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_82(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_83(var uParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_78(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_78(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_78(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
			func_78(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_78(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_78(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0 };
			return 1;
			return 0;
	}
}

void func_84()
{
	int iVar0;
	
	func_87(4, -1);
	if (func_86())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(iVar0)))
		{
			if (unk_0x7C214DA899F05536(iVar0) == unk_0x0FFED3E94261A832())
			{
				if (!func_85(48))
				{
					unk_0xC8B0838E1452B113(unk_0x7C214DA899F05536(iVar0), 0);
				}
			}
			else
			{
				unk_0xC8B0838E1452B113(unk_0x7C214DA899F05536(iVar0), 0);
			}
		}
		iVar0++;
	}
}

bool func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 == 0)
	{
		return unk_0xAA4F14DA15DB0B51(Global_2445989.f_1.f_2813, iVar1);
	}
	if (iVar0 == 1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_2445989.f_1.f_2814, iVar1);
	}
	if (iVar0 == 2)
	{
		return unk_0xAA4F14DA15DB0B51(Global_2445989.f_1.f_2815, iVar1);
	}
	if (iVar0 == 3)
	{
		return unk_0xAA4F14DA15DB0B51(Global_2445989.f_1.f_2816, iVar1);
	}
	if (iVar0 == 4)
	{
		return unk_0xAA4F14DA15DB0B51(Global_2445989.f_1.f_2817, iVar1);
	}
	return unk_0xAA4F14DA15DB0B51(Global_2445989.f_1.f_2818, iVar1);
}

bool func_86()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_30.f_3, 0);
}

void func_87(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1351508.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1351508.f_170[iParam1] = 1;
			}
			break;
	}
}

bool func_88()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_3, 4);
}

int func_89(int iParam0)
{
	if (iParam0 != func_67())
	{
		if (func_66(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_90(Global_2422215[iParam0 /*387*/].f_318.f_1) == 6;
			}
		}
	}
	return 0;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
	}
	return -1;
}

int func_91(int iParam0)
{
	if (iParam0 != func_67())
	{
		if (func_66(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1 && Global_2422215[iParam0 /*387*/].f_318.f_4 != func_67())
			{
				return func_90(Global_2422215[iParam0 /*387*/].f_318.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_92(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_67())
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

var func_93()
{
	if (unk_0x2137828D03306CAF(func_95()))
	{
		return func_95();
	}
	return func_94();
}

var func_94()
{
	return Global_2359301.f_2;
}

var func_95()
{
	return Global_2359301.f_3;
}

int func_96(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_97(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 40.5914f;
		
		case 122:
			return 50f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 50f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 40.4324f;
				
				case 2:
					return 42.2709f;
				
				case 3:
					return 43.6444f;
				
				case 4:
					return 37.3862f;
				
				case 5:
					return 38.6952f;
				
				case 6:
					return 40.9091f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 40.5238f;
				
				case 1:
					return 47.4321f;
				
				case 2:
					return 38.6571f;
				
				case 3:
					return 44.0641f;
				
				case 4:
					return 39.2991f;
				
				case 5:
					return 31.7484f;
				
				case 6:
					return 35.6342f;
				
				case 7:
					return 36.0072f;
				
				case 8:
					return 42.5782f;
				
				case 9:
					return 37.4336f;
				
				default:
			}
			break;
		
		case 14:
			return 50f;
	}
	return 50f;
}

Vector3 func_98(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 1.3773f, 0f, -88.827f;
		
		case 122:
			return -18.1605f, 2.6167f, 113.0513f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2.3039f, 0f, -19.6903f;
				
				case 1:
					return -5.9341f, 0f, -151.6385f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3.627f, 0f, 34.6935f;
				
				case 1:
					return -57.9221f, 0f, 58.3042f;
				
				case 2:
					return -15.4498f, 0f, 161.1361f;
				
				case 3:
					return -1.8386f, 0f, -135.0223f;
				
				case 4:
					return 0.5233f, 0f, -85.7377f;
				
				case 5:
					return -4.2364f, 0f, 173.6634f;
				
				case 6:
					return -3.74f, 0f, -30.7752f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 4.1441f, 0f, 15.6909f;
				
				case 1:
					return 5.4815f, 0f, -127.6695f;
				
				case 2:
					return -4.1889f, 0f, -15.0654f;
				
				case 3:
					return 16.4433f, 0f, -60.3988f;
				
				case 4:
					return 7.8225f, 0f, 39.2409f;
				
				case 5:
					return 2.0405f, 0f, -122.3459f;
				
				case 6:
					return 7.3382f, 0f, 157.6388f;
				
				case 7:
					return 6.481f, 0f, 172.9874f;
				
				case 8:
					return 14.0573f, 0f, 5.0622f;
				
				case 9:
					return -10.1444f, 0f, -131.4038f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8.8196f, 0f, 57.5677f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return -1297.855f, 84.6478f, 54.6519f;
		
		case 122:
			return -855.7661f, -2645.376f, 100.8438f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 13.4678f, -1097.781f, 30.192f;
				
				case 1:
					return 816.6221f, -2160.659f, 30.3139f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1172.111f, -1641.549f, 5.7494f;
				
				case 1:
					return 498.4758f, -226.4275f, 71.0569f;
				
				case 2:
					return -1217.632f, 364.4556f, 86.527f;
				
				case 3:
					return -2884.754f, 32.9823f, 15.1123f;
				
				case 4:
					return -948.1036f, -1260.249f, 8.228f;
				
				case 5:
					return -1614.216f, 302.0945f, 66.0158f;
				
				case 6:
					return -1380.721f, -107.9713f, 50.6998f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 903.8763f, -192.214f, 74.6401f;
				
				case 1:
					return 1419.517f, -2216.034f, 61.8467f;
				
				case 2:
					return -83.9713f, -1331.635f, 29.8383f;
				
				case 3:
					return 364.6455f, -2441.897f, 6.2607f;
				
				case 4:
					return 1237.207f, 2715.999f, 37.6424f;
				
				case 5:
					return 1019.153f, 2680.427f, 41.2254f;
				
				case 6:
					return 269.5203f, 2617.41f, 44.7054f;
				
				case 7:
					return -194.2518f, 6295.688f, 31.0991f;
				
				case 8:
					return 1682.759f, 4954.088f, 42.6891f;
				
				case 9:
					return 2325.447f, 3145.91f, 58.4284f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1993.697f, 3049.667f, 47.7241f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_101(int iParam0)
{
	if (!unk_0x08F3113577065EC7(func_102(0)))
	{
		unk_0x18A0B296F4932A7B(func_102(iParam0), 0, 1);
	}
}

char* func_102(int iParam0)
{
	if (iParam0 || func_85(134))
	{
		return "MenuMGHeistIn";
	}
	if (func_103())
	{
		return "MenuMGTournamentIn";
	}
	return "MenuMGSelectionIn";
}

bool func_103()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445989.f_1.f_2809, 12);
}

bool func_104()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 2);
}

bool func_105(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_106(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_106(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_4();
	}
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

void func_107(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if ((iParam1 != 0 && iParam1 != 3) || iParam2 == 1)
	{
		if (unk_0x9FA769EB6C3BCCE4(*uParam0))
		{
			unk_0xD429163073BD3A47(*uParam0, 0);
			if (bParam4)
			{
				unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 1, 0);
			}
			unk_0x1E2E6AAAD9AE1286(*uParam0, 0);
			*uParam0 = 0;
			func_57();
			if (func_65())
			{
				unk_0xD36F38C63C0345CF();
			}
			unk_0x45E1ADCAE603052F(0);
			if (Global_1312371 == 0 && iParam3 == 1)
			{
				func_109(1, 0);
				func_109(1, 0);
			}
			if (!func_108())
			{
				if (unk_0x97FFE0491AC179A2() || unk_0x429A1F8C699BEE23())
				{
					if (!Global_2453064.f_7)
					{
						unk_0xF07571B6B1209821();
					}
				}
				else
				{
					unk_0xF07571B6B1209821();
				}
			}
		}
	}
}

bool func_108()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 0);
}

void func_109(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_114(1);
	}
	else
	{
		func_110(iParam1);
	}
}

void func_110(int iParam0)
{
	func_113();
	if (iParam0 == 0)
	{
		if (unk_0x82DFF1E96EC2F516())
		{
			return;
		}
	}
	if (func_112() == 0 || unk_0x9E5289F5D782437C())
	{
		func_111(1);
		unk_0x4DE990805F476C4B(0);
		unk_0x4DE990805F476C4B(0);
	}
}

void func_111(int iParam0)
{
	if (Global_1312466.f_20 != iParam0)
	{
		Global_1312466.f_20 = iParam0;
	}
}

int func_112()
{
	return Global_1312466.f_20;
}

void func_113()
{
	Global_2456240 = 1;
}

void func_114(int iParam0)
{
	if ((func_112() == 1 || unk_0x9E5289F5D782437C()) || iParam0)
	{
		func_111(0);
		unk_0x4DE990805F476C4B(1);
		unk_0x4DE990805F476C4B(1);
		unk_0xDB5A5215468442C1();
	}
}

void func_115(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (bParam1 && bParam2)
	{
		return;
	}
	if (bParam3)
	{
		if (!bParam1)
		{
			return;
		}
	}
	Global_2404582 = iParam0;
	if (bParam1)
	{
		Global_2404582 += 10000;
	}
	if (bParam2)
	{
		Global_2404582 += 10000;
		Global_2404582 += 20000;
	}
	if (bParam3)
	{
		Global_2404582 = (Global_2404582 + 40000);
	}
}

int func_116()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15;
}

void func_117()
{
	unk_0xF6082E2ADA1C795B(&(Global_2445217.f_3), 4);
}

void func_118()
{
	unk_0xF6082E2ADA1C795B(&(Global_1621674[unk_0x0FFED3E94261A832() /*35*/].f_28), 12);
}

int func_119()
{
	if (func_121() == func_67())
	{
		return 0;
	}
	return func_120(func_121());
}

var func_120(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_18;
}

int func_121()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11;
}

void func_122()
{
	Global_2445217.f_597 = 1;
}

void func_123()
{
	unk_0x507FE690B1271947(&Global_2445217, 7);
}

void func_124()
{
	unk_0x507FE690B1271947(&(Global_2445217.f_2), 14);
}

void func_125()
{
	unk_0xF6082E2ADA1C795B(&Global_2445217, 5);
	func_126();
}

void func_126()
{
	unk_0xF6082E2ADA1C795B(&Global_2445217, 8);
}

void func_127(var uParam0)
{
	Global_2445217.f_29 = uParam0;
}

void func_128(int iParam0)
{
	Global_2445217.f_5 = iParam0;
}

void func_129()
{
	unk_0xF6082E2ADA1C795B(&(Global_2445217.f_2), 29);
}

void func_130(char* sParam0)
{
	StringCopy(&(Global_2445217.f_738), sParam0, 24);
	if (func_131())
	{
		StringCopy(&(Global_970998.f_42), sParam0, 24);
	}
}

bool func_131()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445989.f_1.f_2809, 5);
}

int func_132(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_133(Global_262145.f_5068[iParam0]);
	}
	return func_133(Global_262145.f_5059[iParam0]);
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1118)
	{
		if (iParam0 == Global_794643.f_98389[iVar0 /*13*/].f_1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_134(bool bParam0)
{
	if (bParam0)
	{
		return 8;
	}
	return 8;
}

int func_135(bool bParam0)
{
	if (bParam0)
	{
		return func_48(5435, -1, 0);
	}
	return func_48(3949, -1, 0);
}

int func_136()
{
	return iLocal_373;
}

void func_137()
{
	unk_0xD1FCC52F87A98873(uLocal_543, "HIDE_OVERLAY");
	unk_0x8123397DC676E794();
	func_43(0);
	unk_0x507FE690B1271947(&uLocal_234, 1);
}

void func_138()
{
	if (func_139())
	{
		if (!unk_0xAA4F14DA15DB0B51(uLocal_234, 0))
		{
			unk_0xD1FCC52F87A98873(uLocal_543, "GET_CURRENT_SELECTION");
			uLocal_544 = unk_0xCA19844C8EBF135B();
			unk_0xD1FCC52F87A98873(uLocal_543, "GET_CURRENT_SCREEN_ID");
			uLocal_545 = unk_0xCA19844C8EBF135B();
			unk_0xF6082E2ADA1C795B(&uLocal_234, 0);
		}
	}
}

int func_139()
{
	if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
	{
		return 1;
	}
	return 0;
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	unk_0x2C6CBE6F28447D42(2, 205, 1);
	if (unk_0x92BC4A8239BDDACC(2, 205))
	{
		unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(205), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	unk_0x2C6CBE6F28447D42(2, 206, 1);
	if (unk_0x92BC4A8239BDDACC(2, 206))
	{
		unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(206), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (unk_0x44E808F6D1BC4ED4(2))
	{
		unk_0x2C6CBE6F28447D42(2, 188, 1);
		if (unk_0x92BC4A8239BDDACC(2, 188))
		{
			unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		unk_0x2C6CBE6F28447D42(2, 187, 1);
		if (unk_0x92BC4A8239BDDACC(2, 187))
		{
			unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (unk_0x69EEC6F255864D43(2, 187))
		{
			unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_RELEASE_EVENT", unk_0xBBDA792448DB5A89(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (unk_0x69EEC6F255864D43(2, 188))
		{
			unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_RELEASE_EVENT", unk_0xBBDA792448DB5A89(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		unk_0x2C6CBE6F28447D42(2, 188, 1);
		if (unk_0x92BC4A8239BDDACC(2, 188))
		{
			unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(188), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		unk_0x2C6CBE6F28447D42(2, 187, 1);
		if (unk_0x92BC4A8239BDDACC(2, 187))
		{
			unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(187), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	unk_0x2C6CBE6F28447D42(2, 189, 1);
	if (unk_0x92BC4A8239BDDACC(2, 189))
	{
		unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(189), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	unk_0x2C6CBE6F28447D42(2, 190, 1);
	if (unk_0x92BC4A8239BDDACC(2, 190))
	{
		unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(190), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	unk_0x2C6CBE6F28447D42(2, 201, 1);
	if (unk_0x92BC4A8239BDDACC(2, 201))
	{
		unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(201), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	unk_0x2C6CBE6F28447D42(2, 202, 1);
	if (unk_0x92BC4A8239BDDACC(2, 202))
	{
		unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(202), -1082130432, -1082130432, -1082130432, -1082130432);
		if (iLocal_372 == 0 || iLocal_372 == 1)
		{
			if (!func_141())
			{
				func_205(1, 0);
			}
		}
		if (func_141())
		{
			unk_0x08BE237DBCD9CBD9(-1, "Select_Mission_Cancel", "DLC_GR_MOC_Computer_Sounds", 1);
			func_137();
		}
	}
	unk_0x2C6CBE6F28447D42(2, 203, 1);
	if (unk_0x92BC4A8239BDDACC(2, 203))
	{
		unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(203), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	unk_0x2C6CBE6F28447D42(2, 204, 1);
	if (unk_0x92BC4A8239BDDACC(2, 204))
	{
		unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(204), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (unk_0x44E808F6D1BC4ED4(2))
	{
		unk_0xD1FCC52F87A98873(uLocal_543, "SET_MOUSE_INPUT");
		unk_0xD3A4A11E4FDC9D63(unk_0x4551F27FA8ED8578(2, 239));
		unk_0xD3A4A11E4FDC9D63(unk_0x4551F27FA8ED8578(2, 240));
		unk_0x8123397DC676E794();
		unk_0x2C6CBE6F28447D42(2, 237, 1);
		if (unk_0x92BC4A8239BDDACC(2, 237))
		{
			unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(201), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		unk_0x2C6CBE6F28447D42(2, 238, 1);
		if (unk_0x92BC4A8239BDDACC(2, 238))
		{
			unk_0x842AF8E8BB29CB45(uLocal_543, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(202), -1082130432, -1082130432, -1082130432, -1082130432);
			if (iLocal_372 == 0 || iLocal_372 == 1)
			{
				if (!func_141())
				{
					func_205(1, 0);
				}
			}
			if (func_141())
			{
				unk_0x08BE237DBCD9CBD9(-1, "Select_Mission_Cancel", "DLC_GR_MOC_Computer_Sounds", 1);
				func_137();
			}
		}
	}
	else
	{
		unk_0x2C6CBE6F28447D42(2, 195, 1);
		unk_0x2C6CBE6F28447D42(2, 196, 1);
		iVar0 = unk_0x86926C56FD96A3D6(2, 195);
		iVar1 = unk_0x86926C56FD96A3D6(2, 196);
		if (((iVar0 != 127 || iLocal_546 != 127) || iVar1 != 127) || iLocal_547 != 127)
		{
			unk_0xD1FCC52F87A98873(uLocal_543, "SET_ANALOG_STICK_INPUT");
			iLocal_546 = iVar0;
			iLocal_547 = iVar1;
			unk_0xD426F7366505EADF(true);
			unk_0x4CECF13AF144A8F6(iLocal_546);
			unk_0x4CECF13AF144A8F6(iLocal_547);
			unk_0x8123397DC676E794();
		}
	}
	unk_0x2C6CBE6F28447D42(2, 197, 1);
	unk_0x2C6CBE6F28447D42(2, 198, 1);
	iVar2 = unk_0x86926C56FD96A3D6(2, 197);
	iVar3 = unk_0x86926C56FD96A3D6(2, 198);
	if (((iVar2 != 127 || iLocal_548 != 127) || iVar3 != 127) || iLocal_549 != 127)
	{
		bVar4 = (unk_0x83F6A1E4E653AD75(2, 242) || unk_0xC20E8B2E17B46871(2, 242));
		if (!bVar4)
		{
			bVar4 = (unk_0x83F6A1E4E653AD75(2, 241) || unk_0xC20E8B2E17B46871(2, 241));
		}
		unk_0xD1FCC52F87A98873(uLocal_543, "SET_ANALOG_STICK_INPUT");
		iLocal_548 = iVar2;
		iLocal_549 = iVar3;
		unk_0xD426F7366505EADF(false);
		unk_0x4CECF13AF144A8F6(iLocal_548);
		unk_0x4CECF13AF144A8F6(iLocal_549);
		unk_0xD426F7366505EADF(bVar4);
		unk_0x8123397DC676E794();
	}
	if ((unk_0x92BC4A8239BDDACC(2, 204) || unk_0xBA36AFDE947F5C56(2, 204)) && !unk_0x3A473E888D0CF9FD(2))
	{
		func_205(1, 0);
	}
}

bool func_141()
{
	return unk_0xAA4F14DA15DB0B51(uLocal_234, 1);
}

void func_142()
{
	unk_0x9BF32B79391A5A8E();
	unk_0x27E1B77F5BF686B0(19);
	unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
	unk_0x164CA344DBD7B6F3(0f);
	func_152();
	if (Global_69800)
	{
		unk_0x8CD25EC3D993ED7A(4);
		unk_0x8CD25EC3D993ED7A(5);
		unk_0x8CD25EC3D993ED7A(13);
		unk_0x8CD25EC3D993ED7A(3);
	}
	unk_0x891A3238A7E50954();
	unk_0x2C6CBE6F28447D42(2, 199, 1);
	unk_0xFF4C3B41848CE5CD(1);
	func_151(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	unk_0xFF4C3B41848CE5CD(1);
	unk_0x792C5262A7BE057A(uLocal_543, 255, 255, 255, 255, 0);
	func_149();
	func_145(0);
	func_143();
}

void func_143()
{
	func_144();
	func_87(4, -1);
	func_87(6, -1);
	func_87(7, -1);
	func_87(3, -1);
	func_87(1, -1);
	func_87(2, -1);
	func_87(11, -1);
	func_87(13, -1);
	func_87(14, -1);
	func_87(16, -1);
}

void func_144()
{
	Global_2497344.f_4451 = 0;
}

void func_145(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_148(0))
		{
			func_146(iParam0);
		}
		unk_0xF6082E2ADA1C795B(&Global_2314, 2);
	}
}

void func_146(int iParam0)
{
	if (Global_14604)
	{
		func_147(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_17())
	{
		Global_14443.f_1 = 3;
	}
}

void func_147(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_148(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_148(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_149()
{
	unk_0x117BBA4FCB43C905();
	func_150();
}

void func_150()
{
	Global_17151.f_134 = 1;
}

void func_151(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xA55ED9111DC832BC((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_152()
{
	func_153(1);
	if (!unk_0x16ACE0FC90DCEE4C() && !unk_0x9E5289F5D782437C())
	{
		unk_0x6ECC243FF0E2C80E(0);
		unk_0x4E6996123FABDB93(2, 200, 1);
	}
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		if (func_154())
		{
			Global_2445217.f_28 = 1;
		}
	}
	else
	{
		Global_2445217.f_28 = 0;
	}
}

bool func_154()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 11);
}

void func_155()
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_205(0, 0);
	}
	else if (unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		func_205(0, 0);
	}
	else if (func_158())
	{
		func_205(1, 0);
	}
	else if (!func_157(unk_0x0FFED3E94261A832()))
	{
		func_205(0, 0);
	}
	else if (func_156(unk_0x0FFED3E94261A832()))
	{
		func_205(0, 0);
	}
}

int func_156(int iParam0)
{
	if (iParam0 != func_67() && func_66(iParam0, 1, 1))
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_318, 3);
	}
	return 0;
}

int func_157(int iParam0)
{
	if (iParam0 != func_67())
	{
		if (func_66(iParam0, 1, 1))
		{
			return Global_2422215[iParam0 /*387*/].f_318.f_1 != -1;
		}
		else if ((Global_1312852 && iParam0 == unk_0x0FFED3E94261A832()) && func_66(iParam0, 1, 0))
		{
			return Global_2422215[iParam0 /*387*/].f_318.f_1 != -1;
		}
	}
	return 0;
}

bool func_158()
{
	return unk_0x237515DD54DDE573() != 0;
}

void func_159()
{
	func_155();
	uLocal_543 = unk_0x4D6D22510A2467D9("COVERT_OPS");
	while (!unk_0xA8AF99BD8D81CFB7(uLocal_543))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xF6082E2ADA1C795B(&uLocal_234, 7);
	func_146(1);
	func_203(1);
	func_202();
	unk_0xFF9AC2CB876656B2();
	Global_68165 = 1;
	func_69(unk_0x0FFED3E94261A832(), 0, 0);
	if (unk_0x78BF2001491914AC(3) || Global_2497344.f_1771)
	{
		if (Global_2497344.f_1771)
		{
		}
		func_205(0, 0);
	}
	Global_68165 = 1;
	func_164();
	func_161();
	if (unk_0x5018862FF5D9F844())
	{
		func_160(1, 1, 1, 1);
	}
}

int func_160(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0xDBE931ADE82E8C84() != iParam0 && iParam2)
		{
			unk_0xD1D26ECE1663B2D6(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_161()
{
	if (func_32())
	{
		unk_0xF6082E2ADA1C795B(&uLocal_234, 3);
	}
	else
	{
		func_163(1);
		func_162(&uLocal_378, 2, 0, "AGENT14", 0, 1);
	}
}

void func_162(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
			}
		}
	}
}

void func_163(bool bParam0)
{
	if (bParam0)
	{
		Global_1573338 = 1;
	}
	else
	{
		Global_1573338 = 0;
	}
}

void func_164()
{
	int iVar0;
	
	unk_0xD1FCC52F87A98873(uLocal_543, "SET_PLAYER_DATA");
	unk_0xE234F0FBDDB9340A(unk_0x4325D353D7D27B34(unk_0x0FFED3E94261A832()));
	unk_0x8123397DC676E794();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_165(iVar0);
		iVar0++;
	}
}

void func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	float fVar5;
	float fVar6;
	
	iLocal_238 = func_200(func_4(), 5);
	iVar1 = func_132(func_41(iParam0), 1);
	iVar2 = func_53(iParam0);
	bVar3 = iLocal_238 >= iVar2;
	uVar4 = func_199(&(Global_68221[func_41(iParam0) /*6*/]));
	fVar5 = 0f;
	fVar6 = 0f;
	if (bVar3)
	{
		if (iParam0 == 3)
		{
			unk_0xF6082E2ADA1C795B(&uLocal_234, 5);
		}
		iVar2 = 0;
		if (iParam0 == 7)
		{
			if (!func_47(6))
			{
				iVar2 = -1;
				bVar3 = false;
			}
		}
	}
	else
	{
		unk_0x507FE690B1271947(&uLocal_234, 7);
	}
	if (iVar1 != -1)
	{
		if (!func_196())
		{
			while (!func_192(Global_794643.f_4[iVar1 /*88*/].f_54))
			{
				if (!func_36(&uLocal_374))
				{
					func_35(&uLocal_374, 0, 0);
				}
				else if (func_34(&uLocal_374, 750, 0))
				{
					iVar1 = -1;
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			func_33(&uLocal_374);
			if (iVar1 != -1)
			{
				func_166(&fVar5, &fVar6, 0, 9, 0, 0, unk_0xCAEDBF30E3EA14FC(&(Global_794643.f_4[iVar1 /*88*/])));
			}
			if (fVar5 == 1f)
			{
				fVar5 = 0f;
			}
			if (fVar6 == 1f)
			{
				fVar6 = 0f;
			}
		}
		else
		{
			iVar1 = -1;
		}
	}
	unk_0xD1FCC52F87A98873(uLocal_543, "ADD_MISSION");
	unk_0x4CECF13AF144A8F6(iParam0);
	if (iVar1 != -1)
	{
		unk_0xE234F0FBDDB9340A(&(Global_794643.f_4[iVar1 /*88*/].f_22));
		unk_0xADBDBA2DF8443753("FMMC_OFFLN_HD");
		iVar0 = 0;
		while (iVar0 < 8)
		{
			unk_0xCF6846167A5EFE98(&(Local_240[iVar0 /*16*/]));
			iVar0++;
		}
		unk_0xF7D95CCE1364B5CE();
	}
	else
	{
		func_44("");
		func_44("");
	}
	unk_0xE234F0FBDDB9340A(uVar4);
	unk_0x4CECF13AF144A8F6(iVar2);
	unk_0xD426F7366505EADF(bVar3);
	unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(fVar6));
	unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(fVar5));
	unk_0x8123397DC676E794();
}

void func_166(float fParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_171(iParam2, iParam3, 0, iParam4, iParam5);
	iVar1 = func_170(uParam6);
	func_167(iVar0, iVar1, joaat("XP_MULTIPLIER"), fParam0, 1);
	func_167(iVar0, iVar1, joaat("CASH_MULTIPLIER"), fParam1, 1);
}

void func_167(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	func_168(0, iParam2, uParam3, bParam4);
	if (iParam0 == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 26:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			func_168(1, iParam2, uParam3, bParam4);
			if (iParam0 == 1)
			{
				return;
			}
			switch (iParam0)
			{
				case 2:
				case 3:
				case 4:
				case 5:
					func_168(2, iParam2, uParam3, bParam4);
					if (iParam0 == 2)
					{
						return;
					}
					switch (iParam0)
					{
						case 3:
						case 4:
						case 5:
							func_168(iParam0, iParam2, uParam3, bParam4);
							return;
						
						case 1:
						case 2:
						case 6:
						case 7:
						case 8:
						case 9:
						case 10:
						case 11:
						case 12:
						case 13:
						case 14:
						case 15:
						case 16:
						case 17:
						case 18:
						case 19:
						case 26:
						case 20:
						case 21:
						case 22:
						case 23:
						case 24:
						case 25:
							return;
						
						default:
					}
					return;
					return;
				
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 26:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
				case 25:
					func_168(6, iParam2, uParam3, bParam4);
					if (iParam0 == 6)
					{
						return;
					}
					switch (iParam0)
					{
						case 7:
						case 16:
						case 17:
						case 18:
						case 19:
						case 26:
						case 24:
							func_168(iParam0, iParam2, uParam3, bParam4);
							if (iParam1 != 27)
							{
								func_168(iParam1, iParam2, uParam3, bParam4);
							}
							return;
						
						case 15:
						case 20:
						case 21:
						case 22:
						case 23:
						case 25:
							func_168(15, iParam2, uParam3, bParam4);
							if (iParam0 == 15)
							{
								if (iParam1 != 27)
								{
									func_168(iParam1, iParam2, uParam3, bParam4);
								}
								return;
							}
							switch (iParam0)
							{
								case 20:
								case 21:
								case 22:
								case 23:
								case 25:
									func_168(iParam0, iParam2, uParam3, bParam4);
									if (iParam1 != 27)
									{
										func_168(iParam1, iParam2, uParam3, bParam4);
									}
									return;
								
								default:
							}
							return;
							return;
						
						case 8:
						case 9:
						case 10:
						case 11:
						case 12:
						case 13:
						case 14:
							func_168(8, iParam2, uParam3, bParam4);
							if (iParam0 == 8)
							{
								if (iParam1 != 27)
								{
									func_168(iParam1, iParam2, uParam3, bParam4);
								}
								return;
							}
							switch (iParam0)
							{
								case 9:
								case 10:
								case 11:
								case 12:
								case 13:
								case 14:
									func_168(iParam0, iParam2, uParam3, bParam4);
									if (iParam1 != 27)
									{
										func_168(iParam1, iParam2, uParam3, bParam4);
									}
									return;
								
								default:
							}
							return;
							return;
						
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
							return;
						
						default:
					}
					return;
					return;
				
				case 1:
					return;
				
				default:
			}
			break;
	}
}

void func_168(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_169(iParam0);
	uVar1 = *uParam2;
	if (!unk_0xFBD4BDB971EA98B9(uVar0, uParam1, uParam2))
	{
		if (bParam3)
		{
		}
		return;
		*uParam2 = uVar1;
	}
	else
	{
		unk_0x36CF41A27BA75B5A(uVar0, uParam1, uParam2);
	}
	if (bParam3)
	{
	}
}

int func_169(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 >= 28)
	{
		StringCopy(&cVar0, "CONTENT_MODIFIER_", 64);
		StringIntConCat(&cVar0, (iParam0 - 28), 64);
		return unk_0xCAEDBF30E3EA14FC(&cVar0);
	}
	switch (iParam0)
	{
		case 0:
			return 190769267;
			break;
		
		case 1:
			return joaat("MP_Global");
			break;
		
		case 2:
			return 1398379561;
			break;
		
		case 3:
			return -295628664;
			break;
		
		case 4:
			return -1157311665;
			break;
		
		case 5:
			return 988790432;
			break;
		
		case 6:
			return 1140746429;
			break;
		
		case 7:
			return 1882254284;
			break;
		
		case 8:
			return -1021097824;
			break;
		
		case 9:
			return 1031194139;
			break;
		
		case 10:
			return -946481156;
			break;
		
		case 11:
			return -364624190;
			break;
		
		case 12:
			return -199795525;
			break;
		
		case 13:
			return -866645446;
			break;
		
		case 14:
			return 1144300534;
			break;
		
		case 15:
			return 539878179;
			break;
		
		case 16:
			return 571975921;
			break;
		
		case 17:
			return 818280646;
			break;
		
		case 18:
			return -183978087;
			break;
		
		case 19:
			return -52527117;
			break;
		
		case 26:
			return -395434754;
			break;
		
		case 20:
			return -1110334219;
			break;
		
		case 21:
			return -1382306730;
			break;
		
		case 22:
			return 1453550531;
			break;
		
		case 23:
			break;
		
		case 24:
			return 1744317449;
			break;
		
		case 25:
			return -1679896800;
			break;
		
		case 27:
			return 2;
			break;
		
		case 29:
			StringCopy(&cVar0, "ILLEGAL TUNABLE CONTEXT", 64);
			break;
	}
	return 0;
}

int func_170(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x08504CE91E84BDD7(uParam0);
	if (iVar0 >= 0)
	{
		return iVar0 + 28;
	}
	return 27;
}

int func_171(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			if (func_172(iParam3, iParam4))
			{
				return 25;
			}
			else if (iParam1 == 0)
			{
				return 15;
			}
			else if (iParam1 == 5)
			{
				return 19;
			}
			else if (iParam1 == 6)
			{
				return 18;
			}
			else if (iParam1 == 4)
			{
				return 22;
			}
			else if (iParam1 == 9)
			{
				return 23;
			}
			else if (iParam1 == 3)
			{
				return 21;
			}
			else if (iParam1 == 2)
			{
				return 20;
			}
			break;
		
		case 129:
			return 25;
			break;
		
		case 165:
			return 23;
			break;
		
		case 7:
			return 19;
			break;
		
		case 4:
			return 18;
			break;
		
		case 10:
			return 22;
			break;
		
		case 9:
			return 20;
			break;
		
		case 1:
			return 7;
		
		case 8:
			return 17;
		
		case 2:
			switch (iParam1)
			{
				case 4:
				case 5:
					return 12;
				
				case 2:
				case 3:
					return 13;
				
				case 8:
				case 9:
					return 17;
				
				case 6:
				case 7:
					return 14;
				
				case 12:
				case 13:
					if (bParam2)
					{
						return 11;
					}
					else
					{
						return 10;
					}
					break;
			}
			return 9;
		
		case 3:
			return 16;
		
		case 6:
			return 24;
	}
	return 0;
}

int func_172(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return 1;
	}
	if ((((((((((((((((((func_191(iParam0) || func_190(iParam0)) || func_189(iParam0)) || func_188(iParam0)) || func_187(iParam0)) || func_186(iParam0)) || func_185(iParam0)) || func_184(iParam0)) || func_183(iParam0)) || func_182(iParam0)) || func_181(iParam0)) || func_180(iParam0)) || func_179(iParam0)) || func_178(iParam0)) || func_177(iParam0)) || func_176(iParam0)) || func_175(iParam0)) || func_174(iParam0)) || func_173(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8056[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_174(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8089[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_175(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8078[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_176(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8067[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_177(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_8043[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_178(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8032[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_179(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8021[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_180(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8010[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_181(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7913[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_182(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7935[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_183(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7924[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_184(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7902[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_185(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7891[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_186(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7880[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_187(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7846[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_188(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7854[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_189(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7841 || iParam0 == Global_262145.f_7842) || iParam0 == Global_262145.f_7843) || iParam0 == Global_262145.f_7844) || iParam0 == Global_262145.f_7845)
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7836 || iParam0 == Global_262145.f_7837) || iParam0 == Global_262145.f_7838) || iParam0 == Global_262145.f_7839) || iParam0 == Global_262145.f_7840)
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_7829 || iParam0 == Global_262145.f_7830) || iParam0 == Global_262145.f_7831) || iParam0 == Global_262145.f_7832) || iParam0 == Global_262145.f_7833) || iParam0 == Global_262145.f_7834) || iParam0 == Global_262145.f_7835)
	{
		return 1;
	}
	return 0;
}

bool func_192(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	bVar0 = true;
	if (iParam0 != 0)
	{
		while (!func_195(iParam0, &Var1))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (!Var1.f_2)
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		iVar8 = 0;
		while (iVar8 < 8)
		{
			StringCopy(&(Local_240[iVar8 /*16*/]), "", 64);
			iVar8++;
		}
		uVar4 = func_193(iParam0, 500);
		iVar6 = unk_0x49828C486339D60D(uVar4);
		while (!bVar9)
		{
			if (iVar5 >= iVar6)
			{
				bVar9 = true;
			}
			else if (iVar7 >= 8)
			{
				bVar9 = true;
			}
			else
			{
				StringCopy(&(Local_240[iVar7 /*16*/]), unk_0xA3CA71F129482548(uVar4, iVar5, iVar6, 63), 64);
				iVar5 = (iVar5 + unk_0x49828C486339D60D(&(Local_240[iVar7 /*16*/])));
				iVar7++;
			}
		}
	}
	return bVar0;
}

var func_193(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return func_194();
	}
	return unk_0x33B7140A95EF51F8(iParam0, iParam1);
}

var func_194()
{
	return unk_0x91D2F083AE17E209("CREATOR_NO_T");
}

int func_195(int iParam0, var uParam1)
{
	if (*uParam1 != iParam0)
	{
		if (*uParam1 != 0)
		{
			unk_0xA4DCBD950EFC4F60(*uParam1);
		}
		uParam1->f_2 = 0;
		*uParam1 = iParam0;
		uParam1->f_1 = 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (uParam1->f_2)
	{
		return 1;
	}
	else
	{
		if (iParam0 == -1)
		{
			uParam1->f_2 = 1;
			return 1;
		}
		if ((!unk_0xA349A1E3B307AC62(iParam0) && uParam1->f_1 == 0) || uParam1->f_1 == -1)
		{
			uParam1->f_1 = unk_0x2E7731530879BF1B(iParam0);
		}
		else if (unk_0xCD8C578642DF464D(iParam0))
		{
			if (unk_0x9AE9E4BF376B5C2C(iParam0))
			{
				uParam1->f_2 = 1;
				return 1;
			}
			else
			{
				uParam1->f_2 = 0;
				return 1;
			}
		}
	}
	return 0;
}

int func_196()
{
	if (!func_197())
	{
		return 1;
	}
	return 0;
}

int func_197()
{
	if (func_198())
	{
		return 0;
	}
	if (unk_0xD49DD4AB66A964B2() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_198()
{
	return Global_2455203;
}

var func_199(var uParam0)
{
	return uParam0;
}

int func_200(var uParam0, int iParam1)
{
	return func_48(func_201(iParam1), uParam0, 0);
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3873;
		
		case 1:
			return 3902;
		
		case 2:
			return 3906;
		
		case 3:
			return 3910;
		
		case 4:
			return 3914;
		
		case 5:
			return 5425;
		
		default:
	}
	return 3873;
}

void func_202()
{
	Global_1312567 = 1;
	StringCopy(&(Global_1312567.f_1), unk_0xFABF5258A318B1DC(), 24);
	Global_1312567.f_7 = unk_0xCAEDBF30E3EA14FC(&(Global_1312567.f_1));
}

void func_203(bool bParam0)
{
	if (bParam0)
	{
		func_204();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xF6082E2ADA1C795B(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_148(0))
		{
			func_146(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_204()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_205(bool bParam0, int iParam1)
{
	unk_0x73F5E7B6BB964839(&uLocal_543);
	Global_68165 = iParam1;
	func_203(0);
	func_206();
	unk_0x8E8E9C74B87B9F11(1000);
	unk_0x08BE237DBCD9CBD9(-1, "Logout", "DLC_GR_MOC_Computer_Sounds", 1);
	if (unk_0x5018862FF5D9F844())
	{
		func_160(0, 1, 1, 1);
	}
	if (bParam0)
	{
		func_69(unk_0x0FFED3E94261A832(), 1, 0);
	}
	unk_0x5827AA638AD6DBC3();
	unk_0xA232817B0B36F2E5();
}

void func_206()
{
	if (!Global_1312567)
	{
		return;
	}
	func_207();
}

void func_207()
{
	Global_1312567 = 0;
	StringCopy(&(Global_1312567.f_1), "", 24);
	Global_1312567.f_7 = 0;
}

