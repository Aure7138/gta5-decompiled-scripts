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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	float fLocal_59 = 0f;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
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
	struct<4> Local_121 = { 0, 0, 0, 0 } ;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 32;
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
	var uLocal_143 = 0;
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
	var uLocal_164 = 32;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
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
	var uLocal_180 = 0;
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
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	int iLocal_200 = 0;
	struct<3> Local_201[32];
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 16;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
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
	bool bLocal_468 = 0;
	bool bLocal_469 = 0;
	int iLocal_470 = 0;
	char* sLocal_471 = NULL;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_59 = ((0.05f + 0.275f) - 0.01f);
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
	bLocal_469 = true;
	sLocal_471 = "MP_INTRO_MCS_13";
	func_215(ScriptParam_0);
	while (true)
	{
		func_214();
		if (func_205())
		{
			func_201();
		}
		func_195(&Global_1761063);
		switch (func_194(unk_0x88641E5BC172153A()))
		{
			case 0:
				if (func_193() == 2)
				{
					Local_201[unk_0x88641E5BC172153A() /*3*/] = 2;
				}
				else if (func_193() == 6)
				{
					Local_201[unk_0x88641E5BC172153A() /*3*/] = 5;
				}
				break;
			
			case 2:
				if (func_193() == 2)
				{
					if (!func_192(unk_0x0FFED3E94261A832()))
					{
						func_19();
					}
					else if (unk_0xBDD3EABACAB97D09(Global_1761063))
					{
						func_12();
						unk_0xD42DEAFD12809447(Global_1761063, 0);
						unk_0x789C84F1B8496AD0(&Global_1761063);
						if (unk_0xAA4F14DA15DB0B51(uLocal_470, 3))
						{
							unk_0x27378D398128FEC6();
						}
						unk_0xF6082E2ADA1C795B(&(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2), 0);
					}
					if (func_8(unk_0x0FFED3E94261A832()))
					{
						Local_201[unk_0x88641E5BC172153A() /*3*/] = 3;
						Global_2497344.f_1680 = 0;
					}
				}
				else if (func_193() == 6)
				{
					Local_201[unk_0x88641E5BC172153A() /*3*/] = 5;
				}
				break;
			
			case 5:
				func_6(&(Local_121.f_3));
				if (func_5(&(Local_121.f_3)))
				{
					Local_201[unk_0x88641E5BC172153A() /*3*/] = 6;
				}
				break;
			
			case 3:
				Local_201[unk_0x88641E5BC172153A() /*3*/] = 6;
			
			case 6:
				func_201();
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			switch (func_193())
			{
				case 0:
					Local_121.f_2 = -1;
					Local_121.f_0 = 2;
					break;
				
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						Local_121.f_0 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	if (unk_0x62E688B72E3C57B0())
	{
	}
}

void func_3()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x62E688B72E3C57B0())
	{
		if (iLocal_200 == 0)
		{
			unk_0x507FE690B1271947(&uLocal_470, 0);
			unk_0xF6082E2ADA1C795B(&uLocal_470, 1);
			if (Local_121.f_2 != -1)
			{
				if (!unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(Local_121.f_2)))
				{
					Local_121.f_2 = -1;
				}
			}
		}
		iVar0 = iLocal_200;
		if (unk_0x9E8AB4FC19962A90(iVar0))
		{
			uVar1 = unk_0x2AFA21CE4322B48D(iVar0);
			if (!unk_0xAA4F14DA15DB0B51(Local_201[iLocal_200 /*3*/].f_2, 0))
			{
				unk_0x507FE690B1271947(&uLocal_470, 1);
			}
			if (func_4(uVar1, 0, 1))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_201[iLocal_200 /*3*/].f_2, 1))
				{
					unk_0xF6082E2ADA1C795B(&uLocal_470, 12);
					if (Local_121.f_2 == -1)
					{
						if (Local_121.f_2 != iLocal_200)
						{
							Local_121.f_2 = iLocal_200;
						}
					}
				}
				else if (Local_121.f_2 == iLocal_200)
				{
					Local_121.f_2 = -1;
				}
			}
		}
		iLocal_200++;
		if (iLocal_200 == 32)
		{
			if (unk_0xAA4F14DA15DB0B51(uLocal_470, 1))
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 0);
			}
			if (!unk_0xAA4F14DA15DB0B51(uLocal_470, 12))
			{
				if (Local_121.f_2 != -1)
				{
					Local_121.f_2 = -1;
				}
			}
			unk_0xF6082E2ADA1C795B(&uLocal_470, 0);
			iLocal_200 = 0;
		}
	}
}

int func_4(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(uParam0))
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

int func_5(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_6(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x62E688B72E3C57B0())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
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

int func_8(int iParam0)
{
	if (func_11(iParam0))
	{
		return 1;
	}
	if (func_9(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

int func_11(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

void func_12()
{
	if (!func_18())
	{
		return;
	}
	if (!unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == Global_1312575.f_9)
	{
		return;
	}
	func_13();
}

void func_13()
{
	func_15();
	func_14(0);
}

void func_14(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x591AF4C50B46E014();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0x11ABC381A58DD5AB();
		Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
	}
	StringCopy(&(Global_1312575.f_12), "", 16);
	StringCopy(&(Global_1312575.f_16), "", 64);
	StringCopy(&(Global_1312575.f_32), "", 64);
	Global_1312575.f_52 = 0;
	Global_1312575.f_53 = 0;
	Global_1312575.f_54 = 0;
	Global_1312575.f_55 = -1;
	Global_1312575.f_56 = 0;
	Global_1312575.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_15()
{
	if (!func_17())
	{
	}
	if (func_18())
	{
		unk_0x2EDDA24620ABEEBA(&(Global_1312575.f_12));
		func_16();
		unk_0x3CBB1A3F50D6B58F();
	}
}

void func_16()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			unk_0xEA97619D8B89D387(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		default:
	}
}

int func_17()
{
	if (!func_18())
	{
		return 0;
	}
	unk_0x7474291EEDB9BF12(&(Global_1312575.f_12));
	func_16();
	return unk_0x0D3452E263E036CA();
}

int func_18()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

void func_19()
{
	var uVar0;
	
	switch (Local_201[unk_0x88641E5BC172153A() /*3*/].f_1)
	{
		case 0:
			if (!unk_0xAA4F14DA15DB0B51(uLocal_470, 2))
			{
				if (!unk_0xAA4F14DA15DB0B51(uLocal_470, 5))
				{
					if (!func_191())
					{
						if (!func_190())
						{
							if (!func_188())
							{
								if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 0)
								{
									if (!func_187(0))
									{
										if (!func_184(unk_0x0FFED3E94261A832(), 1))
										{
											if (!func_183())
											{
												if (func_182() == 0)
												{
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(uLocal_470, 5))
			{
				if (((((func_184(unk_0x0FFED3E94261A832(), 1) || func_183()) || func_182() > 0) || func_181()) || func_179()) || func_178())
				{
					unk_0xF6082E2ADA1C795B(&uLocal_470, 5);
					func_12();
					if (unk_0xBDD3EABACAB97D09(Global_1761063))
					{
						unk_0xD42DEAFD12809447(Global_1761063, 0);
						unk_0x789C84F1B8496AD0(&Global_1761063);
					}
				}
				else
				{
					if (unk_0xBDD3EABACAB97D09(Global_1761063))
					{
						if (!unk_0xAA4F14DA15DB0B51(uLocal_470, 14))
						{
							if (Local_121.f_2 != -1)
							{
								if (Local_121.f_2 != unk_0x88641E5BC172153A())
								{
									unk_0xEB5D36079067EBA5(Global_1761063, 39);
									unk_0x0B584E556B01101F(Global_1761063, 0.7f);
									unk_0xF6082E2ADA1C795B(&uLocal_470, 14);
								}
							}
						}
						else if (Local_121.f_2 == -1 || Local_121.f_2 == unk_0x88641E5BC172153A())
						{
							unk_0xEB5D36079067EBA5(Global_1761063, 0);
							unk_0x0B584E556B01101F(Global_1761063, 1f);
							unk_0x507FE690B1271947(&uLocal_470, 14);
						}
					}
					if (unk_0xAA4F14DA15DB0B51(uLocal_470, 8))
					{
						unk_0x507FE690B1271947(&uLocal_470, 8);
					}
					if (func_177())
					{
						if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 0)
						{
							if ((bLocal_468 && unk_0xA1EDDE074DA26387()) || !bLocal_468)
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2, 1))
								{
									unk_0xF6082E2ADA1C795B(&(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2), 1);
								}
								if (unk_0xAA4F14DA15DB0B51(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2, 1))
								{
									if (Local_121.f_2 == unk_0x88641E5BC172153A())
									{
										func_12();
										if (unk_0xBDD3EABACAB97D09(Global_1761063))
										{
											unk_0xD42DEAFD12809447(Global_1761063, 0);
											unk_0x789C84F1B8496AD0(&Global_1761063);
										}
										unk_0x7D53B6FFAEDA810A(1);
										func_176(12, 1);
										func_174();
										unk_0x1EF72C87138AD63D(unk_0x0FFED3E94261A832(), 1);
										unk_0xF6082E2ADA1C795B(&uLocal_470, 25);
										unk_0x333EF04F1A5ADEB5(1274.854f, -1721.154f, 53.6808f, 2f, 1, 0, 0, 1);
										if (bLocal_469)
										{
											func_173();
											uLocal_478 = unk_0x4D6D22510A2467D9("SECURITY_CAM");
										}
										Local_201[unk_0x88641E5BC172153A() /*3*/].f_1 = 1;
									}
									else if (Local_121.f_2 != -1)
									{
										if (!unk_0xAA4F14DA15DB0B51(uLocal_470, 13))
										{
											if (func_166(1, 1, 1, 1))
											{
												func_165("FM_LCUT_LRB", -1);
												unk_0xF6082E2ADA1C795B(&uLocal_470, 13);
											}
										}
									}
								}
							}
						}
						else if (!unk_0x6235C49EA2DBA22D())
						{
							if (!func_164("FM_LCUT_LCP"))
							{
								func_165("FM_LCUT_LCP", -1);
							}
						}
					}
					else
					{
						if (!unk_0xAA4F14DA15DB0B51(uLocal_470, 9))
						{
							if (func_166(0, 1, 1, 1))
							{
								if (!func_181())
								{
									func_165("FM_LCUT_LBLP", -1);
									if (!unk_0xBDD3EABACAB97D09(Global_1761063))
									{
										Global_1761063 = unk_0x9EDB165CAADCAB2C(Global_1761064);
										unk_0x9FD1808EF916E312(Global_1761063, 77);
										unk_0xA4F6216A8431C2E8(Global_1761063, 1);
										unk_0x43FC07DB1C2FA4B3(Global_1761063, 7000);
									}
									unk_0xF6082E2ADA1C795B(&uLocal_470, 2);
									unk_0xF6082E2ADA1C795B(&uLocal_470, 9);
								}
							}
						}
						if (unk_0xAA4F14DA15DB0B51(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2, 1))
						{
							unk_0x507FE690B1271947(&(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2), 1);
						}
						if (unk_0xAA4F14DA15DB0B51(uLocal_470, 13))
						{
							unk_0x507FE690B1271947(&uLocal_470, 13);
						}
					}
				}
			}
			else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
				{
					if (unk_0x0B21CC5276C2CE1B())
					{
						if ((((!func_184(unk_0x0FFED3E94261A832(), 1) && !func_183()) && func_182() == 0) && !func_181()) && !func_179())
						{
							if (!func_163(&uLocal_473))
							{
								func_7(&uLocal_473, 0, 0);
							}
							else if (func_162(&uLocal_473, 10, 0))
							{
								unk_0x507FE690B1271947(&uLocal_470, 5);
								unk_0x507FE690B1271947(&uLocal_470, 2);
								unk_0x507FE690B1271947(&uLocal_470, 3);
								unk_0x507FE690B1271947(&uLocal_470, 8);
								func_161(&uLocal_473);
								if (!unk_0xBDD3EABACAB97D09(Global_1761063))
								{
									Global_1761063 = unk_0x9EDB165CAADCAB2C(Global_1761064);
									unk_0x9FD1808EF916E312(Global_1761063, 77);
								}
							}
						}
					}
				}
			}
			if (bLocal_468)
			{
			}
			break;
		
		case 1:
			if (bLocal_468)
			{
				if (func_160())
				{
					Local_201[unk_0x88641E5BC172153A() /*3*/].f_1 = 2;
				}
			}
			else if (func_127())
			{
				Local_201[unk_0x88641E5BC172153A() /*3*/].f_1 = 2;
			}
			break;
		
		case 2:
			if (func_83())
			{
				Local_201[unk_0x88641E5BC172153A() /*3*/].f_1 = 3;
			}
			break;
		
		case 3:
			if (!unk_0xAA4F14DA15DB0B51(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2, 0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2), 0);
			}
			break;
	}
	if (func_82())
	{
		if (unk_0xBDD3EABACAB97D09(Global_1761063))
		{
			unk_0x789C84F1B8496AD0(&Global_1761063);
		}
		func_12();
		uVar0 = Global_1361996[func_81(-1)];
		unk_0xF6082E2ADA1C795B(&uVar0, 2);
		unk_0xF6082E2ADA1C795B(&(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2), 0);
		func_80(1299, uVar0, -1, 1);
		func_176(12, 0);
		if (bLocal_468)
		{
			unk_0x27378D398128FEC6();
		}
		func_71();
		func_20(1);
	}
}

void func_20(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312446)
	{
		if (!func_70())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574366[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_67(unk_0x0FFED3E94261A832(), bParam0);
	iVar2 = func_65(iVar1, bParam0);
	if (!func_64(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574366[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574366[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 228)
	{
		iVar3 = func_63(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_61(iVar4))
			{
				func_53(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_47(func_48(59, 0, 0), 0);
	func_42(func_48(135, 0, 0), 1);
	func_40(func_48(22, 0, 0), func_48(73, 0, 0));
	if (func_70())
	{
		if (func_39(77, -1))
		{
			func_38(1);
			func_37(1);
		}
	}
	if (func_36() || func_35())
	{
		func_33(77, 1, -1, 1);
		if (unk_0x591AF4C50B46E014())
		{
			func_21(28, 1, 0);
			func_21(29, 1, 0);
			func_21(30, 1, 0);
			func_21(31, 1, 0);
			func_21(32, 1, 0);
			func_21(33, 1, 0);
			func_21(34, 1, 0);
			func_21(35, 1, 0);
			func_21(36, 1, 0);
			func_21(37, 1, 0);
			func_21(38, 1, 0);
		}
	}
	if (func_48(21, 0, 0))
	{
		unk_0x34FC316780901654(0);
	}
	Global_979820 = 0;
}

void func_21(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_32(iParam0, 0, 0))
		{
			if (iParam2 && Global_91829.f_18[iParam0])
			{
				if (func_31(iParam0) == 3 && !func_30(iParam0))
				{
					func_29(iParam0);
					func_28(iParam0, 0, 0);
					func_23(iParam0, 1, 0);
					func_22(iParam0);
				}
				else
				{
					func_28(iParam0, 1, 0);
					func_22(iParam0);
				}
			}
			else
			{
				func_28(iParam0, 0, 0);
				func_23(iParam0, 1, 0);
				func_22(iParam0);
			}
		}
		else
		{
			func_23(iParam0, 1, 0);
			func_22(iParam0);
		}
	}
	else if (func_32(iParam0, 0, 0))
	{
		func_23(iParam0, 0, 0);
		func_23(iParam0, 1, 0);
		func_22(iParam0);
	}
}

void func_22(int iParam0)
{
	Global_91829.f_163[iParam0] = 1;
	Global_91829.f_162 = 1;
}

void func_23(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x507FE690B1271947(&(Global_91829.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_27() == 0)
		{
			iVar0 = func_25(func_26(iParam0), -1, 0);
			unk_0x507FE690B1271947(&iVar0, iParam1);
			func_24(func_26(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_103236.f_668[iParam0]), iParam1);
	}
}

void func_24(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

int func_25(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_81(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 823;
			break;
		
		case 1:
			return 824;
			break;
		
		case 2:
			return 825;
			break;
		
		case 3:
			return 826;
			break;
		
		case 4:
			return 827;
			break;
		
		case 5:
			return 828;
			break;
		
		case 6:
			return 829;
			break;
		
		case 7:
			return 830;
			break;
		
		case 8:
			return 831;
			break;
		
		case 9:
			return 832;
			break;
		
		case 10:
			return 833;
			break;
		
		case 11:
			return 834;
			break;
		
		case 12:
			return 835;
			break;
		
		case 13:
			return 836;
			break;
		
		case 14:
			return 837;
			break;
		
		case 15:
			return 839;
			break;
		
		case 16:
			return 840;
			break;
		
		case 17:
			return 841;
			break;
		
		case 18:
			return 842;
			break;
		
		case 19:
			return 843;
			break;
		
		case 20:
			return 844;
			break;
		
		case 21:
			return 845;
			break;
		
		case 22:
			return 846;
			break;
		
		case 23:
			return 847;
			break;
		
		case 24:
			return 848;
			break;
		
		case 25:
			return 849;
			break;
		
		case 26:
			return 850;
			break;
		
		case 27:
			return 851;
			break;
		
		case 28:
			return 852;
			break;
		
		case 29:
			return 853;
			break;
		
		case 30:
			return 854;
			break;
		
		case 31:
			return 855;
			break;
		
		case 32:
			return 856;
			break;
		
		case 33:
			return 857;
			break;
		
		case 34:
			return 858;
			break;
		
		case 35:
			return 859;
			break;
		
		case 36:
			return 860;
			break;
		
		case 37:
			return 861;
			break;
		
		case 38:
			return 862;
			break;
		
		case 39:
			return 863;
			break;
		
		case 40:
			return 867;
			break;
		
		case 41:
			return 868;
			break;
		
		case 42:
			return 869;
			break;
		
		case 43:
			return 870;
			break;
		
		case 44:
			return 6134;
			break;
		
		case 45:
			return 3783;
			break;
		
		case 46:
			return 5358;
			break;
		
		default:
			break;
	}
	return 6309;
}

int func_27()
{
	return Global_25222;
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF6082E2ADA1C795B(&(Global_91829.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_27() == 0)
		{
			iVar0 = func_25(func_26(iParam0), -1, 0);
			unk_0xF6082E2ADA1C795B(&iVar0, iParam1);
			func_24(func_26(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_668[iParam0]), iParam1);
	}
}

void func_29(int iParam0)
{
	if (Global_91829.f_18[iParam0])
	{
		func_28(iParam0, 10, 1);
		func_28(iParam0, 19, 1);
	}
}

bool func_30(int iParam0)
{
	return func_32(iParam0, 5, 1);
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
	}
	return 6;
}

int func_32(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xAA4F14DA15DB0B51(Global_91829.f_1315[iParam0], iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_27() == 0)
		{
			return unk_0xAA4F14DA15DB0B51(func_25(func_26(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_34())
	{
		iVar0 = Global_2526994[iParam0 /*3*/][func_81(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0D7634B211BCB8B0(iVar0, iParam1, iParam3);
		}
	}
}

int func_34()
{
	return 1;
	return 0;
}

bool func_35()
{
	return Global_1312840;
}

bool func_36()
{
	return Global_1312842;
}

void func_37(bool bParam0)
{
	if (!unk_0x591AF4C50B46E014())
	{
		return;
	}
	func_21(28, bParam0, 0);
	func_21(30, bParam0, 0);
	func_21(31, bParam0, 0);
	func_21(33, bParam0, 0);
	func_21(34, bParam0, 0);
	func_21(38, bParam0, 0);
}

void func_38(bool bParam0)
{
	if (!unk_0x591AF4C50B46E014())
	{
		return;
	}
	func_21(29, bParam0, 0);
	func_21(32, bParam0, 0);
	func_21(36, bParam0, 0);
	func_21(35, bParam0, 0);
	func_21(37, bParam0, 0);
}

int func_39(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2526994[iParam0 /*3*/][func_81(iParam1)];
	if (unk_0x17DA8BAE529C4AC7(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_40(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x591AF4C50B46E014())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_21(0, bParam0, 1);
	func_21(1, bParam0, 1);
	func_21(2, bParam0, 1);
	func_21(3, bParam0, 1);
	func_21(4, bParam0, 1);
	func_21(5, bParam0, 1);
	func_21(6, bParam0, 1);
	func_21(7, bParam0, bVar0);
	func_21(8, bParam0, 1);
	func_21(9, bParam0, 1);
	func_21(10, bParam0, 1);
	func_21(11, bParam0, 1);
	func_21(12, bParam0, bVar0);
	func_21(13, bParam0, 1);
	func_21(21, bParam0, 1);
	func_21(14, bParam0, 1);
	func_21(15, bParam0, 1);
	func_21(16, bParam0, 1);
	func_21(17, bParam0, 1);
	func_21(18, bParam0, 1);
	func_21(19, bParam0, 1);
	func_21(20, bParam0, 1);
	func_21(22, bParam0, 1);
	func_21(23, bParam0, 1);
	func_21(24, bParam0, 1);
	func_21(25, bParam0, 1);
	func_21(26, bParam0, 1);
	func_21(27, bParam0, 1);
	func_41(1, !bParam1);
	if (!bVar0)
	{
		func_29(12);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_91829.f_9[iParam0] = 1;
	}
	else
	{
		Global_91829.f_9[iParam0] = 0;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x591AF4C50B46E014())
	{
		return;
	}
	uVar0 = func_46(0);
	if (Global_262145.f_63 == 1 && func_48(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_21(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_30(44))
		{
			func_29(44);
		}
	}
	if (bParam0)
	{
		if (func_43(0) > 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1698), 10);
		}
	}
}

int func_43(int iParam0)
{
	int iVar0;
	
	if (Global_1770656[iParam0 /*8*/] == -1)
	{
		iVar0 = func_25(func_45(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_44(iParam0, 0);
			iVar0 = 0;
		}
		Global_1770656[iParam0 /*8*/] = iVar0;
	}
	return Global_1770656[iParam0 /*8*/];
}

void func_44(int iParam0, int iParam1)
{
	Global_1770656[iParam0 /*8*/] = iParam1;
	func_24(func_45(iParam0), iParam1, -1, 1, 0);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6135;
		
		default:
	}
	return 6135;
}

int func_46(bool bParam0)
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_1689, 26))
		{
			uVar0 = func_25(1187, -1, 0);
			if (!unk_0xAA4F14DA15DB0B51(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_39(122, -1);
}

void func_47(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x591AF4C50B46E014())
	{
		return;
	}
	uVar0 = func_46(0);
	func_21(39, bParam0, 0);
	func_21(40, bParam0, 0);
	func_21(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_21(43, bParam0, 0);
		func_21(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_30(39))
		{
			func_29(39);
		}
		if (!func_30(40))
		{
			func_29(40);
		}
		if (!func_30(41))
		{
			func_29(41);
		}
		if (!func_30(42))
		{
			func_29(42);
		}
		if (!func_30(43))
		{
			func_29(43);
		}
	}
}

bool func_48(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6600 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_50(unk_0x0FFED3E94261A832(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4882 == 1)
		{
			return 1;
		}
	}
	if (func_36() || func_35())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_49())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1574366[iVar1], iVar0);
}

int func_49()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_1694, 23))
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	uVar0 = Global_1361996[func_81(-1)];
	if (unk_0xAA4F14DA15DB0B51(uVar0, 7))
	{
		unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1694), 23);
		return 1;
	}
	return 0;
}

bool func_50(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_70())
	{
		return 0;
	}
	if (func_52())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_51(iParam1);
	iVar1 = uVar0;
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_524, iVar1);
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_52()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_144, 3);
}

void func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_60(-1))
			{
				if (!func_70())
				{
					return;
				}
			}
			if (!func_60(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_59() && !func_58())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_57())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_60(-1))
				{
					if (!func_54())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0xF6082E2ADA1C795B(&(Global_1574366[iVar1]), iVar0);
	}
}

int func_54()
{
	var uVar0;
	
	if (func_192(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	uVar0 = Global_1361996[func_81(-1)];
	if (unk_0xAA4F14DA15DB0B51(uVar0, 2))
	{
		func_55(1);
		return 1;
	}
	return 0;
}

void func_55(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 25))
		{
			func_56(unk_0x0FFED3E94261A832(), 12);
			unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 25);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 25))
	{
		unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 25);
	}
}

void func_56(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_51(iParam1);
	iVar1 = uVar0;
	unk_0xF6082E2ADA1C795B(&(Global_1592456[iParam0 /*635*/].f_524), iVar1);
}

int func_57()
{
	var uVar0;
	
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_1694, 6))
	{
		return 1;
	}
	uVar0 = Global_1361996[func_81(-1)];
	if (unk_0xAA4F14DA15DB0B51(uVar0, 0))
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_1694, 6))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1694), 6);
		}
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_144, 7);
}

int func_59()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return func_39(121, -1);
}

bool func_60(int iParam0)
{
	return func_39(123, iParam0);
}

int func_61(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			uVar0 = func_25(func_62(iParam0), -1, 0);
			if (unk_0xAA4F14DA15DB0B51(uVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1196;
		
		case 1:
			return 1197;
		
		case 2:
			return 1198;
		
		case 3:
			return 1199;
		
		case 4:
			return 1200;
		
		case 5:
			return 1202;
		
		case 6:
			return 3790;
		
		case 7:
			return 3993;
		
		case 8:
			return 5447;
		
		default:
	}
	return 1196;
}

int func_63(int iParam0)
{
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
			if (!func_60(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_64(int iParam0)
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return func_39(119, iParam0);
}

int func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_66(iParam0, 0);
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_282038[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_282038[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_67(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_68(iParam0);
}

int func_68(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_81(-1)];
			}
			else if (func_69(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_81(-1)];
	}
	return 0;
}

int func_69(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_2434604.f_1, iParam0);
	}
	return 1;
}

int func_70()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return func_39(120, -1);
}

void func_71()
{
	if (!func_79(1, -1))
	{
		func_77(1, -1);
	}
	if (func_181() && func_27() == 0)
	{
	}
	else
	{
		unk_0x8CBD190EC95B5F8A(0);
	}
	if (func_76(1))
	{
		unk_0x3C15FC3023A4E9E6(1);
	}
	else
	{
		unk_0x3C15FC3023A4E9E6(0);
	}
	Global_2445217.f_622 = 0;
	if (func_72())
	{
		if (!func_39(133, -1))
		{
			func_33(133, 1, -1, 1);
		}
	}
}

int func_72()
{
	if (func_74() && func_73(0))
	{
		return 1;
	}
	return 0;
}

var func_73(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_74()
{
	return func_73(func_75() + 1);
}

int func_75()
{
	return Global_1312735;
}

bool func_76(int iParam0)
{
	return Global_1761244.f_16[iParam0 /*44*/].f_3;
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_75();
	}
	Global_1361881 = 0;
	if (unk_0x4ED4E0D471EA6680() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0xDE8FC36D22CF9D2D(0, iParam1);
			uVar1 = func_78(iParam1);
			iVar0 = unk_0x29B06605BA5CF280(uVar1);
			break;
		
		default:
			uVar1 = func_78(iParam1);
			iVar0 = unk_0x29B06605BA5CF280(uVar1);
			if (!unk_0xAA4F14DA15DB0B51(iVar0, iParam0))
			{
				unk_0xF6082E2ADA1C795B(&iVar0, iParam0);
				unk_0xDE8FC36D22CF9D2D(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_33(120, 0, iParam1, 1);
			func_33(124, 0, iParam1, 1);
			func_33(115, 0, iParam1, 1);
			func_33(119, 0, iParam1, 1);
			func_33(121, 0, iParam1, 1);
			func_33(122, 0, iParam1, 1);
			func_33(125, 0, iParam1, 1);
			func_24(1299, 0, iParam1, 1, 0);
			break;
	}
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_75();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

bool func_79(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_75();
	}
	uVar0 = func_78(iParam1);
	uVar1 = unk_0x29B06605BA5CF280(uVar0);
	return unk_0xAA4F14DA15DB0B51(uVar1, iParam0);
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_81(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_81(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_81(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_81(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_81(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_81(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_81(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_81(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_81(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_81(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_81(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_81(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_81(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_81(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_81(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_81(iParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_81(iParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_81(iParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_81(iParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_81(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_81(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_81(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_81(iParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_81(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_81(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_81(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_81(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_81(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_81(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_81(iParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_81(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_75();
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

int func_82()
{
	if (unk_0xAA4F14DA15DB0B51(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2, 0))
	{
		return 1;
	}
	return 0;
}

int func_83()
{
	switch (iLocal_298)
	{
		case 0:
			if (!unk_0xAA4F14DA15DB0B51(uLocal_470, 18))
			{
				if (!unk_0x769F0F6444C1ABE0(uLocal_299))
				{
					uLocal_472 = unk_0x9E3A324AB806771E(uLocal_299);
					unk_0xE1DA6FCEE4F2BEEC(uLocal_472, 1);
					unk_0xA6B842B66643C116(uLocal_472, "FM_LEST_BLP");
					func_121("FM_LEST_GTL", 0);
					unk_0xF6082E2ADA1C795B(&iLocal_470, 18);
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 20))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					if (!unk_0x769F0F6444C1ABE0(uLocal_299))
					{
						if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), 1272.747f, -1715.223f, 53.45897f, 1273.732f, -1717.427f, 55.70897f, 2f, 0, 1, 0))
						{
							uLocal_302 = unk_0x6D46C949A32B8D73(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
							unk_0x5F778B8D6D7DF47B(uLocal_299, uLocal_302, "missfinale_c2leadinoutfin_c_int", "_LEADIN_ACTION_LESTER", 1000f, -8f, 5, 16, 1148846080, 0);
							unk_0xA5537C55BC0E41FD(uLocal_301, uLocal_302, "_LEADIN_ACTION_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1148846080);
							unk_0xF6082E2ADA1C795B(&iLocal_470, 20);
						}
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 3))
			{
				unk_0x7C58954B914236EF(sLocal_471, 8);
				unk_0xF6082E2ADA1C795B(&iLocal_470, 3);
			}
			else if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 10))
			{
				if (unk_0x4492AAB360D28093())
				{
					unk_0x9C27559FFF13554A("MP_1", 0, 1);
					unk_0xF6082E2ADA1C795B(&iLocal_470, 10);
				}
			}
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), 1275.095f, -1715.769f, 53.70897f, 1274.382f, -1714.219f, 56.02147f, 1.375f, 0, 1, 0))
				{
					if (unk_0xAA4F14DA15DB0B51(iLocal_470, 10))
					{
						iLocal_298++;
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xA1EDDE074DA26387())
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == joaat("mp_f_freemode_01"))
					{
						unk_0x063C67E5BF3D0895(unk_0x2A5EB8B0FE590B91(), "MP_1", 0, 0, 64);
					}
					else
					{
						unk_0x063C67E5BF3D0895(unk_0x2A5EB8B0FE590B91(), "MP_1", 0, 0, 64);
					}
				}
				func_120(1);
				unk_0x256CC452D2C1731B(0);
				unk_0x154C8E1E6EFF1585(0);
				func_113(unk_0x0FFED3E94261A832(), 0, 32772);
				func_111(0);
				iLocal_298++;
			}
			break;
		
		case 2:
			if (unk_0x863D84AFAC2AB730())
			{
				func_108();
				iLocal_298++;
			}
			break;
		
		case 3:
			if (unk_0x863D84AFAC2AB730())
			{
				func_107();
			}
			else
			{
				iLocal_298++;
			}
			break;
		
		case 4:
			if (iLocal_476)
			{
				if (!unk_0x4F561A675BAC81C6())
				{
					if (unk_0xF4EE9D6C8E60AE22() || unk_0xEF08C8E0C4679477())
					{
						unk_0x9B0467159FAB9F56(500);
					}
					iLocal_476 = 0;
				}
			}
			else if (unk_0xE47930B7E8D2BA53())
			{
				func_86(1, 1);
				unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), true, 0);
				unk_0x154C8E1E6EFF1585(1);
				if (unk_0xAA4F14DA15DB0B51(iLocal_470, 25))
				{
					unk_0x1EF72C87138AD63D(unk_0x0FFED3E94261A832(), 0);
				}
				if (iLocal_475 != 0)
				{
					unk_0x4BECDF7222654A56(iLocal_475);
				}
				unk_0x507FE690B1271947(&(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2), 1);
				func_84();
				iLocal_298++;
			}
			break;
		
		case 5:
			return 1;
			break;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 11))
	{
		if (unk_0x2C290803FEDB1727("MP_1", 0))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), 1275.219f, -1722.503f, 53.655f, 1, 0, 0, 1);
				unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), 228.4235f);
				unk_0x4C1FCB3943DAF647(unk_0x2A5EB8B0FE590B91(), false, 0);
				unk_0x164CA344DBD7B6F3(0f);
				unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
				unk_0xF6082E2ADA1C795B(&iLocal_470, 11);
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 26))
	{
		if (iLocal_298 > 2)
		{
			if (unk_0x05E45421C17E15FD(0))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0x4C1FCB3943DAF647(unk_0x2A5EB8B0FE590B91(), true, 0);
					unk_0x164CA344DBD7B6F3(0f);
					unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
					unk_0xF6082E2ADA1C795B(&iLocal_470, 26);
				}
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_470, 19))
	{
		unk_0x4E6996123FABDB93(0, 37, 1);
		unk_0x4E6996123FABDB93(0, 14, 1);
		unk_0x4E6996123FABDB93(0, 15, 1);
	}
	return 0;
}

void func_84()
{
	int iVar0;
	
	iVar0 = func_85(53);
	Global_2413368[iVar0 /*83*/] = 53;
	StringCopy(&(Global_2413368[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2413368[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413368[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_86(bool bParam0, int iParam1)
{
	func_105();
	if (bParam0)
	{
		func_103(1);
		unk_0x7D53B6FFAEDA810A(1);
	}
	unk_0x0508903FC1B0ED24();
	func_100();
	unk_0x06C5FE32E76D8B52(0);
	func_96(0, 1, 1, 0);
	func_95();
	func_94(12, 0, -1);
	func_93(1);
	unk_0x44FC1DFD412D8376(0, -1);
	unk_0xA6C8C7573424CA93(1);
	unk_0xDA0C5084402DA99C(1);
	func_92();
	unk_0x6040865446FA4030(1);
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0x45A42C7863C1A2B9())
		{
			unk_0x98C476D8F2ACDB57(0, 0);
		}
	}
	func_120(0);
	if (((func_181() == 0 && func_91() == 0) && iParam1) && !func_87(unk_0x0FFED3E94261A832()))
	{
		func_113(unk_0x0FFED3E94261A832(), 1, 0);
	}
	Global_2434604.f_3491 = 0;
}

int func_87(int iParam0)
{
	if (func_89(iParam0, 0))
	{
		return 1;
	}
	if (func_88())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_88()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

bool func_89(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_90(-1, 0) == 8;
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

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_75();
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

bool func_91()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 7);
}

void func_92()
{
	Global_17151.f_5 = 0;
}

void func_93(int iParam0)
{
	Global_2497344.f_4450 = iParam0;
}

void func_94(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1351508.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_1351508.f_1046), iParam0);
			}
			else
			{
				unk_0x507FE690B1271947(&(Global_1351508.f_1046), iParam0);
			}
			break;
	}
}

void func_95()
{
	func_93(1);
	func_94(4, 0, -1);
	func_94(6, 0, -1);
	func_94(7, 0, -1);
	func_94(3, 0, -1);
	func_94(1, 0, -1);
	func_94(2, 0, -1);
	func_94(11, 0, -1);
	func_94(13, 0, -1);
	func_94(14, 0, -1);
	func_94(16, 0, -1);
}

void func_96(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xFEDBEA905C0956B1(unk_0x0FFED3E94261A832());
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 1);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 1);
		func_120(1);
		unk_0x2200CE3F471C6FE7();
		unk_0xFF9AC2CB876656B2();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3813EBE69CF8CAD2())
			{
				unk_0xE40123A348A5FEDA(0);
			}
			if (!func_99())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_98(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_69798 = 1;
	}
	else
	{
		func_120(0);
		unk_0x5827AA638AD6DBC3();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x387F543932786998();
		}
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 0);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 0);
		func_98(0, iParam3, iParam2, 0);
		if (unk_0x591AF4C50B46E014())
		{
			if (((!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_87(unk_0x0FFED3E94261A832())) && !func_89(unk_0x0FFED3E94261A832(), 0)) && !func_97())
			{
				unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
			}
		}
		else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_87(unk_0x0FFED3E94261A832()))
		{
			unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
		}
		Global_69798 = 0;
	}
}

bool func_97()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

int func_98(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0xDBE931ADE82E8C84() != iParam0 && uParam2)
		{
			unk_0xD1D26ECE1663B2D6(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_99()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_100()
{
	func_101(0);
}

void func_101(bool bParam0)
{
	if (bParam0)
	{
		func_102();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xF6082E2ADA1C795B(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_187(0))
		{
			func_111(0);
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

void func_102()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_103(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101890)
	{
		unk_0xCE563FE94BCF6479(iVar0, iParam0);
		func_104(iVar0);
		iVar0++;
	}
}

void func_104(int iParam0)
{
	Global_101890[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_101890[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_101890[iParam0 /*28*/].f_4), "", 64);
	Global_101890[iParam0 /*28*/].f_23 = 0;
	Global_101890[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_101890[iParam0 /*28*/].f_27 = 0;
	Global_101890[iParam0 /*28*/].f_20 = 0;
	Global_101890[iParam0 /*28*/].f_22 = 0;
}

void func_105()
{
	if (!Global_1312567)
	{
		return;
	}
	func_106();
}

void func_106()
{
	Global_1312567 = 0;
	StringCopy(&(Global_1312567.f_1), "", 24);
	Global_1312567.f_7 = 0;
}

void func_107()
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0x3EFE40733EFB6649(unk_0x2A5EB8B0FE590B91(), 346, 1);
		if (unk_0x729BF5CC88F79452(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xE5F8C765E19B2642(unk_0x0FFED3E94261A832()))
			{
			}
		}
	}
}

void func_108()
{
	var uVar0;
	
	if (unk_0xBDD3EABACAB97D09(uLocal_472))
	{
		unk_0x789C84F1B8496AD0(&uLocal_472);
	}
	if (unk_0x2137828D03306CAF(uLocal_299))
	{
		uVar0 = uLocal_299;
		unk_0xA54DE0E68212CD6B(&uVar0);
	}
	if (unk_0x2137828D03306CAF(uLocal_301))
	{
		uVar0 = uLocal_301;
		unk_0xA54DE0E68212CD6B(&uVar0);
	}
	func_12();
	unk_0xFD213087BC4CC3B3(func_109(12));
	unk_0xFD213087BC4CC3B3(joaat("prop_wheelchair_01_s"));
	unk_0x15167ADA0B7D44AE("missfinale_c2leadinoutfin_c_int");
}

int func_109(int iParam0)
{
	if (!func_110(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_110(int iParam0)
{
	return iParam0 < 3;
}

void func_111(int iParam0)
{
	if (Global_14604)
	{
		func_112(0, 0);
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
	if (!func_99())
	{
		Global_14443.f_1 = 3;
	}
}

void func_112(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_187(0))
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

void func_113(int iParam0, bool bParam1, int iParam2)
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
		if (!func_118())
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
				if (!func_117(uVar25) && !unk_0x1CF549F1B0277DA6(uVar25))
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
				func_116();
				func_115();
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
				if (!func_117(uVar25) && !unk_0x1CF549F1B0277DA6(uVar25))
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
					if (func_114(Global_1638223.f_112772))
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

bool func_114(int iParam0)
{
	return iParam0 == 17;
}

void func_115()
{
	struct<2> Var0;
	
	Global_2434604.f_1010 = 0;
	Global_2434604.f_1011 = 0;
	Global_2434604.f_1012 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2434604.f_1017 = -1;
	Global_2404996.f_2472 = { Var0 };
}

void func_116()
{
	Global_2404996.f_664 = 0;
	Global_2404996.f_2513 = 0;
	Global_2404996.f_502 = 0;
	Global_2404996.f_578 = 0;
	Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_216 = 0;
}

int func_117(var uParam0)
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

int func_118()
{
	if (func_119() == 0)
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	return Global_1312466.f_18;
}

void func_120(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 13);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 13);
	}
}

void func_121(char* sParam0, bool bParam1)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return;
	}
	if (func_125(sParam0))
	{
		return;
	}
	func_13();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_124();
	func_123(bParam1);
	func_122();
}

void func_122()
{
	unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 1);
}

void func_123(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x507FE690B1271947(&(Global_1312575.f_59), 0);
}

void func_124()
{
	Global_1312575.f_10 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 86400000);
	Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
}

bool func_125(char* sParam0)
{
	if (!func_18())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_126(uParam0);
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12));
}

bool func_126(char* sParam0)
{
	if (!func_18())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

int func_127()
{
	switch (iLocal_477)
	{
		case 0:
			if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 25))
			{
				unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 1);
				unk_0xF6082E2ADA1C795B(&iLocal_470, 25);
			}
			if (unk_0xA8AF99BD8D81CFB7(uLocal_478) && func_173())
			{
				func_156();
				func_155();
				func_152(0, 0, 1, 0, 1, 1, 0);
				func_113(unk_0x0FFED3E94261A832(), 0, 8196);
				unk_0x75B1AC87ADB58EDD(0, 1);
				unk_0x1A523A6A03E13CF9(unk_0x2A5EB8B0FE590B91(), 1, 1);
				func_149(1, 1);
				if (!unk_0x769F0F6444C1ABE0(uLocal_300))
				{
					unk_0x333EF04F1A5ADEB5(1273.885f, -1718.004f, 53.7715f, 3f, 1, 0, 0, 0);
					unk_0x5DE3EC94E90BB96F(uLocal_300);
					unk_0x8E979F037EACE55A(uLocal_300, 1275.256f, -1722.368f, 53.655f, 1, 0, 0, 1);
					unk_0x2681BA3707AF6DA7(uLocal_300, 12.6638f);
					unk_0xAEE1122D64BCDB87(uLocal_300, joaat("MotionState_Walk"), 0, 0, 0);
					unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
					unk_0x1776A639860985BF(uLocal_300, joaat("weapon_unarmed"), 1);
				}
				uLocal_479 = unk_0x1FF428E592B6F928("DEFAULT_SCRIPTED_CAMERA", 0);
				unk_0xD429163073BD3A47(uLocal_479, 1);
				unk_0xF3FE3F0E2BC462D7(uLocal_479, 1276.409f, -1719.918f, 56.1054f, -29.932f, 0f, 137.9132f, 50f, 0, 1, 1, 2);
				unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 0, 0);
				unk_0xD1FCC52F87A98873(uLocal_478, "SET_DETAILS");
				func_148("FM_LEST_CAM");
				unk_0x8123397DC676E794();
				unk_0xD1FCC52F87A98873(uLocal_478, "SET_LOCATION");
				func_148("FM_LEST_CAM2");
				unk_0x8123397DC676E794();
				if (unk_0x134E720A17978737() == -1)
				{
					unk_0x7BBCA8A7F92B5FFC("scanline_cam");
				}
				unk_0xF6082E2ADA1C795B(&iLocal_470, 15);
				func_7(&uLocal_480, 0, 0);
				unk_0x0F39DF6675B2333E(func_109(12));
				unk_0x0F39DF6675B2333E(joaat("prop_wheelchair_01_s"));
				unk_0xA7C81DED990D3418("MissLester1ALeadInOut");
				unk_0xF6082E2ADA1C795B(&iLocal_470, 23);
				if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 17))
				{
					if (unk_0x5D03CCED0E46E032(208246292))
					{
						unk_0x6ADA8071E27ECAB6(208246292, 0, 0, 0);
						unk_0xF6082E2ADA1C795B(&iLocal_470, 17);
					}
				}
				iLocal_477 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x769F0F6444C1ABE0(uLocal_300))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 21))
				{
					if (func_162(&uLocal_480, 1000, 0))
					{
						unk_0x6B823DB6B46BB1F2(uLocal_300, 1276.409f, -1719.918f, 56.1054f, -1, 0, 2);
						unk_0xF6082E2ADA1C795B(&iLocal_470, 21);
					}
				}
			}
			if (func_162(&uLocal_480, 1500, 0))
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_470, 17))
				{
					if (!unk_0x769F0F6444C1ABE0(uLocal_300))
					{
						if (!unk_0x769F0F6444C1ABE0(uLocal_299))
						{
							if (func_133(&uLocal_303, "FM_1AU", "FM_LESTCUT", 7, 0, 0, 0))
							{
								func_161(&uLocal_480);
								func_7(&uLocal_480, 0, 0);
								iLocal_477++;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x769F0F6444C1ABE0(uLocal_300))
			{
				if (!func_191())
				{
					unk_0x31AC59B7C21A2047(uLocal_300, 104, 1);
					unk_0xF6082E2ADA1C795B(&iLocal_470, 22);
					unk_0xAF2C217E49954DFD(uLocal_300);
					unk_0x28FB7E63A217D6DE(uLocal_300, 1273.576f, -1718.459f, 53.7715f, 1f, 20000, 1048576000, 0, 1193033728);
					func_161(&uLocal_480);
					func_7(&uLocal_480, 0, 0);
					iLocal_477++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x769F0F6444C1ABE0(uLocal_300))
			{
				if (func_162(&uLocal_480, 5000, 0) || unk_0x9A46207BB68ED2F0(uLocal_300, 1275.138f, -1718.426f, 53.72994f, 1272.451f, -1719.627f, 55.45897f, 1.5625f, 0, 1, 0))
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), 1273.885f, -1718.004f, 53.7715f, 1, 0, 0, 1);
						unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), 21.8709f);
						unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), joaat("weapon_unarmed"), 1);
						if (unk_0xC1A55CEDE7782B6F(0) == 4)
						{
							unk_0xAEE1122D64BCDB87(unk_0x2A5EB8B0FE590B91(), joaat("MotionState_Aiming"), 0, 0, 0);
							unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
						}
					}
					func_132();
					func_86(1, 1);
					unk_0x507FE690B1271947(&iLocal_470, 22);
					unk_0x164CA344DBD7B6F3(0);
					unk_0x61C3B2A4FEFA1D6D(0, 1065353216);
					func_113(unk_0x0FFED3E94261A832(), 1, 0);
					unk_0x1EF72C87138AD63D(unk_0x0FFED3E94261A832(), 1);
					unk_0xF6082E2ADA1C795B(&iLocal_470, 25);
					unk_0xCA165B76DEE8DBC9(0);
					unk_0xF6082E2ADA1C795B(&iLocal_470, 24);
					iLocal_477 = 99;
				}
			}
			break;
		
		case 99:
			if (unk_0x5D03CCED0E46E032(208246292))
			{
				unk_0x6ADA8071E27ECAB6(208246292, 4, 0, 0);
				unk_0xF6082E2ADA1C795B(&iLocal_470, 19);
				iLocal_477 = 100;
			}
			break;
		
		case 100:
			return 1;
			break;
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_470, 15))
	{
		if (unk_0xA8AF99BD8D81CFB7(uLocal_478))
		{
			unk_0xD1FCC52F87A98873(uLocal_478, "SET_TIME");
			if (unk_0xDA870B7547A455EA() >= 0 && unk_0xDA870B7547A455EA() <= 12)
			{
				unk_0x4CECF13AF144A8F6(unk_0xDA870B7547A455EA());
			}
			else
			{
				unk_0x4CECF13AF144A8F6((unk_0xDA870B7547A455EA() - 12));
			}
			unk_0x4CECF13AF144A8F6(unk_0xA4EAAF8247A3A69E());
			unk_0x4CECF13AF144A8F6(0);
			if (unk_0xDA870B7547A455EA() >= 0 && unk_0xDA870B7547A455EA() < 12)
			{
				func_148("FM_LEST_AM");
			}
			else
			{
				func_148("FM_LEST_PM");
			}
			unk_0x8123397DC676E794();
			unk_0x792C5262A7BE057A(uLocal_478, 255, 255, 255, 255, 0);
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_470, 22))
	{
		if (!unk_0x769F0F6444C1ABE0(uLocal_300))
		{
			unk_0x31AC59B7C21A2047(uLocal_300, 104, 1);
			unk_0x3EFE40733EFB6649(uLocal_300, 60, 1);
			unk_0x3EFE40733EFB6649(uLocal_300, 342, 1);
			unk_0x3EFE40733EFB6649(uLocal_300, 348, 1);
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_470, 23))
	{
		if (func_128())
		{
			unk_0x507FE690B1271947(&iLocal_470, 23);
		}
	}
	return 0;
}

int func_128()
{
	bool bVar0;
	
	unk_0x0F39DF6675B2333E(func_109(12));
	unk_0x0F39DF6675B2333E(joaat("prop_wheelchair_01_s"));
	unk_0xA7C81DED990D3418("missfinale_c2leadinoutfin_c_int");
	if (!unk_0x2137828D03306CAF(uLocal_299))
	{
		if (unk_0xA1FC9D7AEA164881(func_109(12)))
		{
			if (func_130(&uLocal_299, 12, 1276.39f, -1712.845f, 54.372f, 338.0729f, 1))
			{
				unk_0x4C47904AE69D7393(uLocal_299, 1);
				unk_0xF65C7766FB8D4B2C(uLocal_299, 1);
				func_129(&uLocal_303, 8, uLocal_299, "Lester", 0, 1);
				unk_0xDEC831C0189DE207(uLocal_299, 1, 0, 0, 0);
			}
		}
	}
	if (!unk_0x2137828D03306CAF(uLocal_301))
	{
		if (unk_0xA1FC9D7AEA164881(joaat("prop_wheelchair_01_s")))
		{
			uLocal_301 = unk_0xA3618B5F6184DAD2(joaat("prop_wheelchair_01_s"), 1276.39f, -1712.845f, 54.372f, 0, 0, 0);
		}
	}
	if (!unk_0x2137828D03306CAF(uLocal_299))
	{
		return 0;
	}
	if (!unk_0x769F0F6444C1ABE0(uLocal_299))
	{
		if (!unk_0x39A87EB82832D16C(uLocal_299))
		{
			return 0;
		}
	}
	if (!unk_0x2137828D03306CAF(uLocal_301))
	{
		return 0;
	}
	if (!unk_0x45834D6C20FFF689("missfinale_c2leadinoutfin_c_int"))
	{
		return 0;
	}
	if (!unk_0x769F0F6444C1ABE0(uLocal_299))
	{
		uLocal_302 = unk_0x6D46C949A32B8D73(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
		unk_0x5F778B8D6D7DF47B(uLocal_299, uLocal_302, "missfinale_c2leadinoutfin_c_int", "_LEADIN_LOOP1_LESTER", 1000f, -8f, 5, 0, 1148846080, 0);
		unk_0xA5537C55BC0E41FD(uLocal_301, uLocal_302, "_LEADIN_LOOP1_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, -8f, 4, 1148846080);
		unk_0xA2218E1CAB0028A5(uLocal_302, 1);
		bVar0 = true;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_129(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(uParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(uParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(uParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(uParam2, 1);
			}
		}
	}
}

int func_130(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_110(iParam1))
	{
		iVar0 = func_109(iParam1);
		unk_0x0F39DF6675B2333E(iVar0);
		if (unk_0xA1FC9D7AEA164881(iVar0))
		{
			if (unk_0x2137828D03306CAF(*uParam0))
			{
				unk_0x27BAC9B39BCC6522(uParam0);
			}
			*uParam0 = unk_0xD00B79C0E206E082(26, iVar0, Param2, fParam5, 0, 0);
			unk_0x1EC40B161E6A203A(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x29D988205B5459BD(*uParam0, 3) == 0)
				{
					unk_0x6CA29A70250F194F(*uParam0, 5, 2, 0, 0);
				}
			}
			func_131(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0xFD213087BC4CC3B3(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_131(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_87756[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_132()
{
	var uVar0;
	
	if (unk_0x9FA769EB6C3BCCE4(uLocal_479))
	{
		unk_0xD429163073BD3A47(uLocal_479, 0);
		unk_0x1E2E6AAAD9AE1286(uLocal_479, 0);
	}
	unk_0x507FE690B1271947(&iLocal_470, 15);
	unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
	if (unk_0x2137828D03306CAF(uLocal_300))
	{
		uVar0 = uLocal_300;
		unk_0xA54DE0E68212CD6B(&uVar0);
	}
	unk_0x73F5E7B6BB964839(&uLocal_478);
	unk_0x64418B7144C47685();
}

bool func_133(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_147(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_134(sParam2, iParam3, 0);
}

int func_134(char* sParam0, int iParam1, bool bParam2)
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
					func_146();
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
		if (func_145(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_144();
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
				func_138();
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
				if (func_137())
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
			if (func_99())
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
			func_136();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_135();
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
		func_146();
	}
	return 0;
}

void func_135()
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

void func_136()
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

int func_137()
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

void func_138()
{
	if (func_143(14))
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
		Global_14443 = func_139();
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

var func_139()
{
	func_140();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_140()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_142(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_141(unk_0x2A5EB8B0FE590B91());
			if (func_110(iVar0) && (!func_143(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_110(Global_103236.f_2164.f_539.f_4301))
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

int func_141(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_142(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_142(int iParam0)
{
	if (func_110(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_143(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_144()
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

bool func_145(int iParam0, int iParam1)
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

void func_146()
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

void func_147(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_148(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

void func_149(bool bParam0, int iParam1)
{
	func_151();
	func_103(1);
	unk_0x7D53B6FFAEDA810A(1);
	unk_0x0508903FC1B0ED24();
	func_96(1, 1, 1, 0);
	func_150();
	func_94(12, 1, -1);
	func_93(0);
	unk_0x44FC1DFD412D8376(1, -1);
	unk_0xA6C8C7573424CA93(0);
	unk_0xDA0C5084402DA99C(0);
	func_103(1);
	func_120(1);
	Global_2434604.f_3491 = 1;
	if (bParam0)
	{
		if (!unk_0x45A42C7863C1A2B9())
		{
			unk_0x98C476D8F2ACDB57(1, iParam1);
		}
	}
}

void func_150()
{
	func_93(0);
	func_94(4, 1, -1);
	func_94(6, 1, -1);
	func_94(7, 1, -1);
	func_94(3, 1, -1);
	func_94(1, 1, -1);
	func_94(2, 1, -1);
	func_94(11, 1, -1);
	func_94(13, 1, -1);
	func_94(14, 1, -1);
	func_94(16, 1, -1);
}

void func_151()
{
	Global_1312567 = 1;
	StringCopy(&(Global_1312567.f_1), unk_0xFABF5258A318B1DC(), 24);
	Global_1312567.f_7 = unk_0xCAEDBF30E3EA14FC(&(Global_1312567.f_1));
}

void func_152(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_154();
	func_101(1);
	func_93(1);
	func_94(12, 1, -1);
	func_153();
	unk_0x6040865446FA4030(0);
	if (bParam0)
	{
		unk_0x9FD131F22473B3D7(unk_0x0FFED3E94261A832(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_113(unk_0x0FFED3E94261A832(), 0, iVar0);
	if (bParam5)
	{
		if (unk_0x79AB623AEFBB0906(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0xF09DCA8124694AF7(unk_0x2A5EB8B0FE590B91(), 0);
		}
	}
}

void func_153()
{
	Global_17151.f_5 = 1;
}

void func_154()
{
	func_111(0);
	func_101(1);
}

void func_155()
{
	Global_2434604.f_933.f_9 = 1;
}

void func_156()
{
	if (func_159() || func_158())
	{
		func_157();
	}
}

void func_157()
{
	Global_2445217.f_635 = 1;
}

var func_158()
{
	return Global_2445217.f_614;
}

bool func_159()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 11);
}

int func_160()
{
	switch (iLocal_298)
	{
		case 0:
			if (unk_0x863D84AFAC2AB730())
			{
				iLocal_298++;
			}
			break;
		
		case 1:
			if (unk_0x863D84AFAC2AB730())
			{
				func_107();
			}
			else
			{
				iLocal_298++;
			}
			break;
		
		case 2:
			if (iLocal_476)
			{
				if (!unk_0x4F561A675BAC81C6())
				{
					if (unk_0xF4EE9D6C8E60AE22() || unk_0xEF08C8E0C4679477())
					{
						unk_0x9B0467159FAB9F56(500);
					}
					iLocal_476 = 0;
				}
			}
			else if (unk_0xE47930B7E8D2BA53())
			{
				func_86(1, 1);
				unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), true, 0);
				unk_0x154C8E1E6EFF1585(1);
				if (iLocal_475 != 0)
				{
					unk_0x4BECDF7222654A56(iLocal_475);
				}
				unk_0x507FE690B1271947(&(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2), 1);
				iLocal_298++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_470, 11))
	{
		if (unk_0x2C290803FEDB1727("MP_1", 0))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), 1275.219f, -1722.503f, 53.655f, 1, 0, 0, 1);
				unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), 228.4235f);
				unk_0xF6082E2ADA1C795B(&iLocal_470, 11);
			}
		}
	}
	return 0;
}

void func_161(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_162(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

bool func_163(var uParam0)
{
	return uParam0->f_1;
}

bool func_164(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

void func_165(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

int func_166(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6235C49EA2DBA22D())
	{
		return 0;
	}
	if (func_191())
	{
		return 0;
	}
	if (!unk_0x0B21CC5276C2CE1B())
	{
		return 0;
	}
	if (func_172())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_184(unk_0x0FFED3E94261A832(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_171(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (func_170())
	{
		return 0;
	}
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (Global_1574107)
	{
		return 0;
	}
	if (func_169())
	{
		return 0;
	}
	if (func_168())
	{
		return 0;
	}
	if (func_167())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (Global_2506007)
	{
		return 0;
	}
	return 1;
}

bool func_167()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189 != 0;
}

bool func_168()
{
	return Global_2445217.f_571;
}

bool func_169()
{
	return Global_2445217.f_723;
}

bool func_170()
{
	return Global_2434604.f_2791.f_578;
}

int func_171(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_172()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

int func_173()
{
	var uVar0;
	
	if (!unk_0x2137828D03306CAF(uLocal_300))
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			uVar0 = unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91());
			uLocal_300 = unk_0xD00B79C0E206E082(4, uVar0, 1273.827f, -1717.873f, 53.7715f, 19.2225f, 0, 0);
			unk_0xF65C7766FB8D4B2C(uLocal_300, 1);
			unk_0x4C47904AE69D7393(uLocal_300, 1);
			unk_0x78A0ED7B3653F566(unk_0x2A5EB8B0FE590B91(), uLocal_300);
		}
	}
	if (!unk_0x2137828D03306CAF(uLocal_300))
	{
		return 0;
	}
	if (!unk_0x769F0F6444C1ABE0(uLocal_300))
	{
		if (!unk_0x39A87EB82832D16C(uLocal_300))
		{
			return 0;
		}
	}
	return 1;
}

void func_174()
{
	unk_0x8CBD190EC95B5F8A(1);
	func_175(1, -1);
	unk_0x3C15FC3023A4E9E6(1);
	if (func_39(133, -1))
	{
		func_33(133, 0, -1, 1);
	}
	Global_2445217.f_622 = 1;
}

void func_175(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_75();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xDE8FC36D22CF9D2D(0, iParam1);
			break;
		
		default:
			uVar1 = func_78(iParam1);
			iVar0 = unk_0x29B06605BA5CF280(uVar1);
			if (unk_0xAA4F14DA15DB0B51(iVar0, iParam0))
			{
				unk_0x507FE690B1271947(&iVar0, iParam0);
				unk_0xDE8FC36D22CF9D2D(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_33(120, 0, iParam1, 1);
			func_33(124, 0, iParam1, 1);
			func_33(115, 0, iParam1, 1);
			func_33(119, 0, iParam1, 1);
			break;
	}
}

void func_176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_217, iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_217), iParam0);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_217, iParam0))
	{
		unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_217), iParam0);
	}
}

int func_177()
{
	var uVar0;
	
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (bLocal_469)
	{
		if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 1274.547f, -1720.694f, 53.6807f) > 500f)
		{
			if (unk_0x2137828D03306CAF(uLocal_300))
			{
				uVar0 = uLocal_300;
				unk_0xA54DE0E68212CD6B(&uVar0);
			}
			return 0;
		}
		func_173();
	}
	if (!unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), 1273.804f, -1722.466f, 53.21749f, 1277.147f, -1720.779f, 56.09249f, 3.4375f, 0, 1, 0))
	{
		return 0;
	}
	return 1;
}

var func_178()
{
	return Global_1773252;
}

int func_179()
{
	int iVar0;
	
	return 0;
	if (func_180(0))
	{
		iVar0 = 1;
	}
	if (func_180(9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_180(int iParam0)
{
	var uVar0;
	
	uVar0 = func_25(2464, -1, 0);
	return unk_0xAA4F14DA15DB0B51(uVar0, iParam0);
}

bool func_181()
{
	return Global_1312852;
}

int func_182()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_190;
}

bool func_183()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

int func_184(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_185(iParam0))
		{
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_185(int iParam0)
{
	return func_186(iParam0);
}

bool func_186(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

int func_187(int iParam0)
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

bool func_188()
{
	return func_189();
}

bool func_189()
{
	return Global_1345111.f_40 == 3;
}

int func_190()
{
	if (Global_15745 == 4)
	{
		if (unk_0x3813EBE69CF8CAD2())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_191()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

bool func_192(int iParam0)
{
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_140, 25);
}

int func_193()
{
	return Local_121.f_0;
}

int func_194(int iParam0)
{
	return Local_201[iParam0 /*3*/];
}

void func_195(var uParam0)
{
	if (func_197(1))
	{
		if (unk_0xBDD3EABACAB97D09(*uParam0) && !unk_0x3F4FA5B8AF70F535(*uParam0))
		{
			unk_0x462AF05FA2053F74(*uParam0, 1);
			unk_0xF0294C21DCD42897(*uParam0, 0);
			unk_0x697F84823ACFF84C(*uParam0, 5);
		}
	}
	else if (unk_0xBDD3EABACAB97D09(*uParam0) && (unk_0x3F4FA5B8AF70F535(*uParam0) && !func_196()))
	{
		unk_0x462AF05FA2053F74(*uParam0, 0);
		unk_0xF0294C21DCD42897(*uParam0, 1);
	}
}

int func_196()
{
	return 0;
}

bool func_197(bool bParam0)
{
	return func_198(unk_0x0FFED3E94261A832(), bParam0);
}

bool func_198(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_200(iParam0))
		{
			return 0;
		}
	}
	return Global_1622795[iParam0 /*431*/].f_11 != func_199();
}

int func_199()
{
	return -1;
}

int func_200(int iParam0)
{
	if (iParam0 != func_199())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_199())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_201()
{
	var uVar0;
	
	func_12();
	func_176(12, 0);
	func_71();
	if (iLocal_475 != 0)
	{
		unk_0x4BECDF7222654A56(iLocal_475);
	}
	if (unk_0x2137828D03306CAF(uLocal_300))
	{
		uVar0 = uLocal_300;
		unk_0xA54DE0E68212CD6B(&uVar0);
	}
	if (unk_0xBDD3EABACAB97D09(Global_1761063))
	{
		unk_0xD42DEAFD12809447(Global_1761063, 0);
		unk_0x789C84F1B8496AD0(&Global_1761063);
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_470, 17))
	{
		if (unk_0x5D03CCED0E46E032(208246292))
		{
			unk_0x6ADA8071E27ECAB6(208246292, 4, 0, 0);
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_470, 19))
	{
		unk_0x2C6CBE6F28447D42(0, 37, 1);
		unk_0x2C6CBE6F28447D42(0, 14, 1);
		unk_0x2C6CBE6F28447D42(0, 15, 1);
	}
	if (func_204())
	{
		func_203();
	}
	if (unk_0x591AF4C50B46E014())
	{
		unk_0x507FE690B1271947(&(Local_201[unk_0x88641E5BC172153A() /*3*/].f_2), 1);
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_470, 25))
	{
		unk_0x1EF72C87138AD63D(unk_0x0FFED3E94261A832(), 0);
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_470, 24))
	{
		unk_0xCA165B76DEE8DBC9(1);
	}
	func_108();
	unk_0x27378D398128FEC6();
	func_202();
}

void func_202()
{
	unk_0xA232817B0B36F2E5();
}

void func_203()
{
	Global_2434604.f_933.f_9 = 0;
}

bool func_204()
{
	return Global_2434604.f_933.f_9;
}

int func_205()
{
	var uVar0;
	
	func_211(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_210())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_209())
	{
		return 1;
	}
	if (func_208(157))
	{
		if (!func_207())
		{
			return 1;
		}
	}
	if (func_208(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_206() != 0)
	{
		if (unk_0x09952BA662A7629B(func_206()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_206()
{
	switch (func_27())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_207()
{
	return Global_2445217.f_578;
}

int func_208(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_209()
{
	return Global_2454709;
}

bool func_210()
{
	return Global_2445217.f_573;
}

void func_211(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_212(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_212(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_4(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(uVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(uVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_213(uVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_213(var uParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(uParam0))
		{
			if (unk_0x3321AFCAE6E141D4(uParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(uParam0)))
				{
					unk_0x216B434C1A609F5B(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(uParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_214()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_215(struct<21> Param0)
{
	func_219(func_220(Param0.f_0), Param0);
	func_217(0, -1, 0);
	unk_0x2D179B3FFCF1AADA(&Local_121, 79);
	unk_0xA5929B03CD847BE8(&Local_201, 97);
	unk_0xAC09235E2065C253(0);
	if (!func_216())
	{
		func_201();
	}
}

int func_216()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x591AF4C50B46E014())
		{
			return 0;
		}
		if (unk_0x3F76B69AE9B695DD())
		{
			return 1;
		}
		if (func_210())
		{
			return 0;
		}
		if (func_208(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_217(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_202();
			}
			else
			{
				return 0;
			}
		}
		if (!func_218())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_202();
					}
					else
					{
						return 0;
					}
				}
				if (func_210())
				{
					if (!bParam2)
					{
						func_202();
					}
					else
					{
						return 0;
					}
				}
				if (func_208(155))
				{
					if (!bParam2)
					{
						func_202();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAD61841DF357CB5C())
			{
				if (!bParam2)
				{
					func_202();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBC3BAD18EBEFD169();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			if (!bParam2)
			{
				func_202();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAD61841DF357CB5C())
	{
		if (!bParam2)
		{
			func_202();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_218()
{
	return Global_1312829;
}

void func_219(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_202();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 109:
			return 32;
		
		case 110:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 2;
		
		case 132:
			return 1;
		
		case 128:
			return 2;
		
		case 129:
			return 4;
		
		case 130:
			return 2;
		
		case 131:
			return 2;
		
		case 113:
			return 1;
		
		case 133:
			return 2;
		
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return 0;
		
		case 143:
			return 1;
		
		case 140:
			return 4;
		
		case 141:
			return 16;
		
		case 142:
			return 32;
		
		default:
	}
	return 0;
}

