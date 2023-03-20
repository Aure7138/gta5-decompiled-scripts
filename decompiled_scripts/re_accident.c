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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	bool bLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	struct<5> Local_66[31];
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	struct<5> Local_229[14];
	float fLocal_300 = 0f;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	struct<3> Local_305 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	bool bLocal_343 = 0;
	bool bLocal_344 = 0;
	bool bLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 16;
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
	struct<3> Local_523 = { 0, 0, 0 } ;
	struct<3> Local_526 = { 0, 0, 0 } ;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	bool bLocal_536 = 0;
	struct<33> Local_537 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_570 = 1;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_51 = -1;
	iLocal_54 = -1;
	fLocal_57 = 0.5f;
	fLocal_58 = 0f;
	iLocal_223 = 1;
	fLocal_300 = 160f;
	iLocal_304 = 55000;
	Local_311 = { 30f, 30f, 5f };
	iLocal_352 = -1;
	Local_523 = { -458.4085f, -984.6459f, 22.5892f };
	Local_526 = { -458.1934f, -995.4897f, 22.7427f };
	Local_305 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x24862A9CDC8F8874(11))
	{
		func_173();
	}
	if (unk_0x342FDFC48311CCCE() > 18 || unk_0x342FDFC48311CCCE() < 5)
	{
		unk_0xA4E0D8FD51F2A6F7();
	}
	if (func_131(Local_305, -1, 0, 0, 0))
	{
		func_128(-1);
	}
	else
	{
		unk_0xA4E0D8FD51F2A6F7();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xCAA967E16BBE69CE())
		{
			if (!func_127())
			{
				if (func_126())
				{
					func_173();
				}
			}
			unk_0xBB5777EE55D3B041("RE_CA", 0);
			switch (iLocal_301)
			{
				case 0:
					if (func_114())
					{
						func_173();
					}
					func_108();
					func_105(&Local_537);
					break;
				
				case 1:
					func_21();
					func_105(&Local_537);
					func_12();
					break;
				
				case 2:
					if (((unk_0x95CCECA3948CFE7B(iLocal_317) && unk_0x902595DAD7718896(iLocal_317, 1)) && iLocal_348 < 5) && !bLocal_345)
					{
						func_11();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_173();
		}
	}
}

void func_1()
{
	if (iLocal_534 && !iLocal_535)
	{
		unk_0x233432976E597324("RE14A_FAIL");
		iLocal_347 = 0;
		while (iLocal_347 < 11)
		{
			if (unk_0x95CCECA3948CFE7B(uLocal_327[iLocal_347]))
			{
				unk_0xB7A2078CD1C9A82F(uLocal_327[iLocal_347], 0);
			}
			iLocal_347++;
		}
		if (!unk_0xB6900B8CB0ABBD2B(iLocal_319))
		{
			unk_0x62C4DFB4097A1725(iLocal_319, 0f);
			unk_0xB7A2078CD1C9A82F(iLocal_319, 0);
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_339))
		{
			unk_0xB7A2078CD1C9A82F(iLocal_339, 0);
		}
		unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
		unk_0xB7709513BF7C1AC0(1);
		unk_0xB1DF6C0157E453DE(1);
		func_2(0, 1, 1, 0);
		iLocal_342 = 1;
		unk_0x196C7025F0C44A36(1f);
		unk_0x3ECF1E41E6ED71D8("re@construction");
		if (unk_0x844838E5D8A21336(uLocal_529))
		{
			unk_0x5CF5A880ED809DDA(uLocal_529, 0);
			unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
			unk_0x8C67D2FDE360FBCA(0f);
			unk_0x0F9FDCEB321235AB(0f, 1065353216);
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
			unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 0);
		}
		if (unk_0x6B4865E08E90ACC5(uLocal_323))
		{
			unk_0x5356E82C1E5E0C44(&uLocal_323);
		}
		if (unk_0x6B4865E08E90ACC5(uLocal_324))
		{
			unk_0x5356E82C1E5E0C44(&uLocal_324);
		}
		if (unk_0x6B4865E08E90ACC5(uLocal_325))
		{
			unk_0x5356E82C1E5E0C44(&uLocal_325);
		}
		if (unk_0x6B4865E08E90ACC5(uLocal_326))
		{
			unk_0x5356E82C1E5E0C44(&uLocal_326);
		}
		iLocal_535 = 1;
	}
	if (unk_0x95CCECA3948CFE7B(uLocal_327[0]) || unk_0x95CCECA3948CFE7B(uLocal_327[1]))
	{
		if (!unk_0x8EBAC9BC4005929D(Local_308 + Vector(20f, 0f, 0f), 30f) && !unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_308, 80f, 80f, 80f, 0, 1, 0))
		{
			func_173();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 1);
		func_10(1);
		unk_0xC0E7FF19962AE47A();
		unk_0x31592941AC9991FE();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x44E93B894936152F())
			{
				unk_0xB518E9C8553B1D2B(0);
			}
			if (!func_9())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_8(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_10(0);
		unk_0x11D0AD0D13C88D1A();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x48D86334348F315A();
		}
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 0);
		func_8(0, iParam3, iParam2, 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_3(unk_0xA34E7C2A5118D638()))
		{
			unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
		}
		Global_69315 = 0;
	}
}

int func_3(int iParam0)
{
	if (func_5(iParam0, 0))
	{
		return 1;
	}
	if (func_4())
	{
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_4()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_5(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_6(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_6(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
	}
	if (Global_1315889[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_7()
{
	return Global_1312746;
}

int func_8(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x751EF148528839D5() != iParam0 && uParam2)
		{
			unk_0xE3A1C9182C52F4F2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_9()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 13);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 13);
	}
}

void func_11()
{
	if (iLocal_352 == -1)
	{
		iLocal_352 = unk_0x693EBB4F13506457() + 5000;
	}
	if (unk_0x693EBB4F13506457() > iLocal_352)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_319))
		{
			unk_0xB7A2078CD1C9A82F(iLocal_319, 0);
			unk_0x3A2304A561B7D162(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (!unk_0xB6900B8CB0ABBD2B(iLocal_319))
			{
				unk_0x15C4AABC624B231C(iLocal_319, 1, 0);
			}
		}
	}
}

void func_12()
{
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		func_20();
		func_19();
		func_16();
		func_13();
	}
}

void func_13()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	Var1 = { 0f, 0f, 0f };
	if (iLocal_222 == 0)
	{
		if (unk_0xEA2A06DF77A9D16E(&Var1, Local_229[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_229.f_0)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + unk_0x4F982ED5336EA899(Local_229[(iVar0 - 1) /*5*/], Local_229[iVar0 /*5*/], 1));
				}
				if (Local_229[iVar0 /*5*/].f_4)
				{
					if (unk_0xEA2A06DF77A9D16E(&Var1, Local_229[iVar0 /*5*/]))
					{
						fVar6 = unk_0x4F982ED5336EA899(Local_229[iVar0 /*5*/], Var1, 1);
						if (fVar6 < fVar7)
						{
							fVar7 = fVar6;
							fVar8 = fVar4;
							iVar5 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar7 < fLocal_57)
			{
				iVar5 = iVar5;
				iLocal_222 = 1;
				iLocal_224 = unk_0x693EBB4F13506457();
				fVar8 = fVar8;
				Local_62 = { Local_229[iVar5 /*5*/] };
				iLocal_65 = iVar5;
				iLocal_225 = iVar5 * 2;
				iLocal_227 = iLocal_225;
				iLocal_228 = iLocal_225;
				if (iLocal_228 < 0)
				{
					iLocal_228 = 0;
				}
				if (iLocal_227 >= Local_229.f_0 * 2)
				{
					iLocal_227 = (Local_229.f_0 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_222 == 1)
	{
		unk_0x83DE6CD915A9CA77();
		fVar9 = (unk_0xBBDA792448DB5A89((unk_0x693EBB4F13506457() - iLocal_224)) / fLocal_300);
		iVar10 = (unk_0xF34EE736CF047844((fVar9 / (1f / 2f))) - 1);
		iVar11 = (iLocal_225 + iVar10);
		iVar12 = (iLocal_225 - iVar10);
		if (iVar11 >= 28)
		{
			iVar11 = 27;
		}
		if (iVar12 < 0)
		{
			iVar12 = 0;
		}
		if (iVar11 > iLocal_227)
		{
			iVar0 = iLocal_227 + 1;
			while (iVar0 <= iVar11)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_229.f_0)
				{
					if (Local_229[iVar13 /*5*/].f_4)
					{
						func_14(iVar0, 1);
					}
					else
					{
						iVar11 = (iVar0 - 1);
						iVar0 = iVar11 + 1;
					}
				}
				iVar0++;
			}
			iLocal_227 = iVar11;
		}
		if (iVar12 < iLocal_228)
		{
			iVar0 = (iLocal_228 - 1);
			while (iVar0 >= iVar12)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_229.f_0)
				{
					if (Local_229[iVar13 /*5*/].f_4)
					{
						func_14(iVar0, 1);
					}
					else
					{
						iVar12 = iVar0 + 1;
						iVar0 = (iVar12 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_228 = iVar12;
		}
		iVar0 = 0;
		while (iVar0 < Local_66.f_0)
		{
			if ((unk_0x693EBB4F13506457() - Local_66[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0xA578ABADA0A4C679(Local_66[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((unk_0x693EBB4F13506457() - Local_66[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0x46D5E9DC9AA9712F(Local_66[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_14(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				func_15(Local_229[(iParam0 / 2) /*5*/] + Local_229[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_58, fLocal_58, fLocal_58), iParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_15(Local_229[(iParam0 / 2) /*5*/] + Vector(fLocal_58, fLocal_58, fLocal_58), iParam1);
		}
	}
}

void func_15(struct<3> Param0, int iParam3)
{
	if (iLocal_223 == 0)
	{
		iParam3 = 0;
	}
	unk_0x46D5E9DC9AA9712F(Local_66[iLocal_226 /*5*/]);
	if (Local_66[iLocal_226 /*5*/].f_4 != 0)
	{
		unk_0xA578ABADA0A4C679(Local_66[iLocal_226 /*5*/].f_1, 0.4f, 1f);
	}
	Local_66[iLocal_226 /*5*/].f_4 = unk_0x693EBB4F13506457();
	Local_66[iLocal_226 /*5*/].f_1 = { Param0 };
	Local_66[iLocal_226 /*5*/] = unk_0x6EF1817A9074CC5B(Param0, uLocal_55, iParam3);
	iLocal_226++;
	if (iLocal_226 >= 31)
	{
		iLocal_226 = 0;
	}
}

void func_16()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_50)
	{
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0x0139E142C27412BC(0, 24) && unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
			{
				if (iLocal_56 == 0)
				{
					unk_0xD810132681A9B83C(2f, 8f, 4);
					iLocal_56 = unk_0x693EBB4F13506457() + 250;
				}
				if (unk_0x693EBB4F13506457() > iLocal_56)
				{
					if (!bLocal_46)
					{
						fVar4 = 9999.9f;
						Local_59 = { func_18() };
						iVar0 = 0;
						while (iVar0 < Local_229.f_0)
						{
							if (unk_0x6B4865E08E90ACC5(Local_229[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0x4F982ED5336EA899(Local_59, unk_0xEACB9E183BFE83FD(Local_229[iVar0 /*5*/].f_3), 1);
								fVar3 = unk_0x4F982ED5336EA899(Local_229[iVar0 /*5*/], unk_0xEACB9E183BFE83FD(Local_229[iVar0 /*5*/].f_3), 1);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_229[iVar0 /*5*/] = { Local_59 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_52 != -1)
							{
								if (unk_0xA1836B70A59643DD((iLocal_53 - iVar5)) > 1)
								{
									iLocal_53 = -1;
								}
								if (iLocal_53 == -1)
								{
									iLocal_53 = iLocal_52;
								}
								if (unk_0xA1836B70A59643DD((iLocal_53 - iVar5)) < 3 && unk_0xA1836B70A59643DD((iLocal_53 - iVar5)) > 0)
								{
									if (iLocal_53 < iVar5)
									{
										iVar6 = iLocal_53;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0x6B4865E08E90ACC5(Local_229[iVar6 /*5*/].f_3))
											{
												if (unk_0xF40F7B5C29E813BB(Local_229[iVar6 /*5*/].f_3) > 0)
												{
													unk_0x7DF168F8439ABF1A(Local_229[iVar6 /*5*/].f_3, 0);
													Local_229[iVar6 /*5*/].f_4 = 1;
													iLocal_54 = (iLocal_54 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_53)
										{
											if (unk_0x6B4865E08E90ACC5(Local_229[iVar6 /*5*/].f_3))
											{
												if (unk_0xF40F7B5C29E813BB(Local_229[iVar6 /*5*/].f_3) > 0)
												{
													unk_0x7DF168F8439ABF1A(Local_229[iVar6 /*5*/].f_3, 0);
													Local_229[iVar6 /*5*/].f_4 = 1;
													iLocal_54 = (iLocal_54 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_53 = iLocal_52;
								}
								if (iVar5 == 0)
								{
									if (unk_0x6B4865E08E90ACC5(Local_229[iVar5 /*5*/].f_3))
									{
										if (unk_0xF40F7B5C29E813BB(Local_229[iVar5 /*5*/].f_3) > 0)
										{
											unk_0x7DF168F8439ABF1A(Local_229[iVar5 /*5*/].f_3, 0);
											Local_229[iVar5 /*5*/].f_4 = 1;
											iLocal_54 = (iLocal_54 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (unk_0x6B4865E08E90ACC5(Local_229[iVar5 /*5*/].f_3))
									{
										if (unk_0xF40F7B5C29E813BB(Local_229[iVar5 /*5*/].f_3) > 0)
										{
											unk_0x7DF168F8439ABF1A(Local_229[iVar5 /*5*/].f_3, 0);
											Local_229[iVar5 /*5*/].f_4 = 1;
											iLocal_54 = (iLocal_54 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_17(Local_229[iVar5 + 1 /*5*/]))
									{
										if (unk_0x6B4865E08E90ACC5(Local_229[iVar5 /*5*/].f_3))
										{
											if (unk_0xF40F7B5C29E813BB(Local_229[iVar5 /*5*/].f_3) > 0)
											{
												unk_0x7DF168F8439ABF1A(Local_229[iVar5 /*5*/].f_3, 0);
												Local_229[iVar5 /*5*/].f_4 = 1;
												iLocal_54 = (iLocal_54 - 1);
											}
										}
									}
								}
							}
							iLocal_52 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_52 = -1;
				iLocal_53 = -1;
				iLocal_56 = 0;
			}
		}
	}
}

int func_17(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_18()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	var uVar8;
	
	iVar0 = unk_0xA7C2E7868E127D65(unk_0xC8B93D94F8954288());
	if (unk_0x95CCECA3948CFE7B(iVar0))
	{
		iVar1 = unk_0x71EC6CC1E45B4DF1(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { unk_0xEA9A8033D5CFC295(iVar0, iVar1) };
		Var2 = { unk_0xE79F1883B253E5B8(Var2, unk_0x59DD203239FBDCAD(iVar0), 0.35f, 0f, -0.15f) };
		unk_0x32B7B9548CC32D81(Var2, &uVar8, 0);
		Var5 = { Var2.f_0, Var2.f_1, uVar8 };
	}
	return Var5;
}

void func_19()
{
	int iVar0;
	
	if (iLocal_48)
	{
		if (iLocal_222)
		{
			iVar0 = 0;
			while (iVar0 < Local_66.f_0)
			{
				unk_0x46D5E9DC9AA9712F(Local_66[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_48 = 0;
		iLocal_222 = 1;
		iLocal_224 = unk_0x693EBB4F13506457();
		iVar0 = 0;
		while (iVar0 < Local_229.f_0)
		{
			Local_229[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_51 != -1)
		{
			iLocal_228 = iLocal_51;
			iLocal_227 = iLocal_51;
			iLocal_225 = iLocal_51;
		}
		else
		{
			iLocal_228 = -1;
			iLocal_227 = -1;
			iLocal_225 = iLocal_51;
		}
		iLocal_226 = 1;
	}
}

void func_20()
{
	if (!iLocal_49)
	{
		iLocal_49 = 1;
	}
}

void func_21()
{
	switch (iLocal_302)
	{
		case 0:
			unk_0xC4C141A321D45FD8("CONSTRUCTION_ACCIDENT_1", false);
			unk_0xC0E8B67A4385D37D("re@construction");
			if (Local_537.f_32 <= 0)
			{
				Local_537.f_32 = unk_0xB36863F9C6D42649();
			}
			func_104(&Local_537, joaat("s_m_m_dockwork_01"));
			func_104(&Local_537, joaat("prop_generator_01a"));
			func_104(&Local_537, joaat("p_amb_phone_01"));
			func_101(&Local_537);
			if ((unk_0xC4C141A321D45FD8("CONSTRUCTION_ACCIDENT_1", false) && unk_0xF9B86DC1728F1339("re@construction")) && func_97(&Local_537))
			{
				if (unk_0x5D42322C7DB888D0(iLocal_319, 0))
				{
					iLocal_317 = unk_0xDEFAEEE1A4058454(iLocal_319, 26, joaat("s_m_m_dockwork_01"), -1, 1, 1);
					unk_0x8C245572EDB27776(iLocal_317, 0, 1, 0, 0);
					unk_0x8C245572EDB27776(iLocal_317, 3, 1, 1, 0);
					unk_0x8C245572EDB27776(iLocal_317, 4, 0, 1, 0);
					unk_0x8C245572EDB27776(iLocal_317, 8, 0, 0, 0);
					unk_0x5323F488E6A1B660(iLocal_317, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, 0, 0, 0);
					iLocal_340 = unk_0x7C62BC1EB194D985(joaat("p_amb_phone_01"), -455.6561f, -985.8071f, 22.4868f, 1, 1, 0);
					unk_0x4BBD72565A0AF033(joaat("p_amb_phone_01"));
					unk_0xAD318582A32CA5D2(iLocal_340, iLocal_317, unk_0xF2122440C667309F(iLocal_317, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x1296D571B761D748(iLocal_317, 17, 1);
					unk_0x3D3422B1705EBBD6(iLocal_317, 1);
					unk_0xAAD662D7E0D59F4C(iLocal_317, 1);
					unk_0x58F516BB5E324590(iLocal_317, 0);
					func_96(&uLocal_358, 3, iLocal_317, "RECONACWorker", 0, 1);
					unk_0xB7F5BF6BE1CE7627(iLocal_317, "S_M_Y_GENERICWORKER_01_WHITE_01");
					uLocal_318 = unk_0x71DD988C1B903F5D(26, joaat("s_m_m_dockwork_01"), -462.2982f, -978.3272f, 65f, 221.4041f, 1, 1);
					unk_0xAAD662D7E0D59F4C(uLocal_318, 1);
					unk_0x05BE583DF8C6A617(iLocal_318, 1);
					unk_0xB7A2078CD1C9A82F(iLocal_318, 1);
					unk_0xA8542D59C88A5262(iLocal_317, joaat("empty"));
					unk_0xC37FD566D2846EAF(joaat("empty"), 24);
					unk_0xC37FD566D2846EAF(joaat("empty"), 46);
					unk_0xC37FD566D2846EAF(joaat("empty"), 61);
					unk_0xC37FD566D2846EAF(joaat("empty"), 136);
					unk_0xC37FD566D2846EAF(joaat("empty"), 55);
					iLocal_339 = unk_0x7C62BC1EB194D985(joaat("prop_generator_01a"), Local_526.f_0, (Local_526.f_1 + 0.5f), (Local_526.f_2 - 0.25f), 1, 1, 0);
					unk_0x765E3FA65D011F03(iLocal_339, 75f);
					unk_0x916DBBB1A4A313B5(iLocal_339, 0, 1, 1, 0, 0, 0, 0, 0);
					uLocal_533 = unk_0x9312E3EA66F1F738("scr_sparking_generator", iLocal_339, 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					unk_0xB7A2078CD1C9A82F(iLocal_339, 1);
					func_95(&uLocal_358, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_351 = unk_0x693EBB4F13506457();
					iLocal_302 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_341)
			{
				func_90();
			}
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (!iLocal_342)
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
					{
						if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, 0, 1, 0))
						{
							if (!unk_0xB6900B8CB0ABBD2B(iLocal_319))
							{
								if (!unk_0x6B4865E08E90ACC5(uLocal_324))
								{
									uLocal_324 = func_89(iLocal_319, 0, 0);
								}
							}
						}
						if (unk_0x87D4C731B013290A(iLocal_317, unk_0xC8B93D94F8954288(), 1) || unk_0x87D4C731B013290A(iLocal_319, unk_0xC8B93D94F8954288(), 1))
						{
							unk_0xB7A2078CD1C9A82F(iLocal_319, 0);
							unk_0x5124C5FA52D2AF3E(iLocal_317);
							unk_0x3E2E609450787FFE(&uLocal_357);
							unk_0xE5F6BE3F8E937ACE(0, 0, 0);
							unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 150f, -1, 0, 0);
							unk_0x939BC11172AA1303(uLocal_357);
							unk_0xBFE865E3B513451B(iLocal_317, uLocal_357);
							unk_0xA9351C9309E03069(&uLocal_357);
							func_88();
						}
						unk_0x7567CEA8E6B5340B(joaat("prop_ld_pipe_single_01"));
						if ((((unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, 0, 1, 0) && !unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288())) && !unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288())) && func_87(1, 0, 1)) && unk_0x0845149A26DABBA5(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_127())
							{
								if (!unk_0xB6900B8CB0ABBD2B(unk_0x974516F979AD07BC()))
								{
									iLocal_322 = unk_0x974516F979AD07BC();
								}
								func_77(1);
							}
							iLocal_341 = 1;
						}
					}
					else
					{
						func_88();
					}
				}
				else
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
					{
						if (unk_0x277ECDA23D8CCEB4(iLocal_317, 0))
						{
							if (!unk_0xB6900B8CB0ABBD2B(iLocal_319) && !unk_0x6B4865E08E90ACC5(uLocal_324))
							{
								uLocal_324 = func_89(iLocal_319, 0, 0);
							}
						}
						else if (!unk_0x6B4865E08E90ACC5(uLocal_323))
						{
							if (unk_0x6B4865E08E90ACC5(uLocal_324))
							{
								unk_0x5356E82C1E5E0C44(&uLocal_324);
							}
							uLocal_323 = func_74(iLocal_317, 0, 145);
						}
					}
					func_45();
					func_42();
					if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
					{
						if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_317, Local_311, 0, 1, 0))
						{
							if (!bLocal_343)
							{
								func_41();
							}
						}
					}
					else
					{
						if (unk_0x6B4865E08E90ACC5(uLocal_323))
						{
							unk_0x5356E82C1E5E0C44(&uLocal_323);
						}
						if (unk_0x6B4865E08E90ACC5(uLocal_324))
						{
							unk_0x5356E82C1E5E0C44(&uLocal_324);
						}
						if (unk_0x6B4865E08E90ACC5(uLocal_325))
						{
							unk_0x5356E82C1E5E0C44(&uLocal_325);
						}
						if (unk_0x2DC9BA2299B45EA6(iLocal_317) || unk_0xB6900B8CB0ABBD2B(iLocal_319))
						{
							func_88();
						}
					}
					if (!unk_0x5D42322C7DB888D0(iLocal_320, 0))
					{
						if (unk_0x6B4865E08E90ACC5(uLocal_325))
						{
							unk_0x5356E82C1E5E0C44(&uLocal_325);
							if (!unk_0xB6900B8CB0ABBD2B(iLocal_319) && !unk_0x6B4865E08E90ACC5(uLocal_324))
							{
								uLocal_324 = func_89(iLocal_319, 0, 0);
							}
						}
					}
				}
				if (unk_0x5D42322C7DB888D0(iLocal_320, 0))
				{
					if (iLocal_353 >= 3)
					{
						if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0x65C04D5A473900A3(unk_0xC8B93D94F8954288(), joaat("bulldozer")))
						{
							if (unk_0x6B4865E08E90ACC5(uLocal_325))
							{
								unk_0x5356E82C1E5E0C44(&uLocal_325);
								if (!unk_0x2DC9BA2299B45EA6(iLocal_317) && !unk_0xB6900B8CB0ABBD2B(iLocal_319))
								{
									if (unk_0x277ECDA23D8CCEB4(iLocal_317, 0) && !unk_0x6B4865E08E90ACC5(uLocal_324))
									{
										uLocal_324 = func_89(iLocal_319, 0, 0);
									}
								}
							}
						}
						else if (!unk_0x2DC9BA2299B45EA6(iLocal_317) && !unk_0xB6900B8CB0ABBD2B(iLocal_319))
						{
							if (unk_0x277ECDA23D8CCEB4(iLocal_317, 0) && unk_0x6B4865E08E90ACC5(uLocal_324))
							{
								unk_0x5356E82C1E5E0C44(&uLocal_324);
								if (!unk_0x6B4865E08E90ACC5(uLocal_325))
								{
									uLocal_325 = func_89(iLocal_320, 0, 0);
								}
							}
						}
					}
				}
				if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
				{
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						if (unk_0x65C04D5A473900A3(unk_0xC8B93D94F8954288(), joaat("bulldozer")))
						{
							iLocal_347 = 0;
							while (iLocal_347 < 11)
							{
								if (unk_0x95CCECA3948CFE7B(uLocal_327[iLocal_347]))
								{
									unk_0xB7A2078CD1C9A82F(uLocal_327[iLocal_347], 0);
								}
								iLocal_347++;
							}
						}
					}
				}
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_319))
				{
					if (unk_0x79E944054F6C9DCD(iLocal_319))
					{
						iLocal_347 = 0;
						while (iLocal_347 < 11)
						{
							if (unk_0x95CCECA3948CFE7B(uLocal_327[iLocal_347]))
							{
								unk_0xB7A2078CD1C9A82F(uLocal_327[iLocal_347], 0);
							}
							iLocal_347++;
						}
						unk_0xB7A2078CD1C9A82F(iLocal_319, 0);
						if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
						{
							if (unk_0x277ECDA23D8CCEB4(iLocal_317, 0))
							{
								unk_0xAAD662D7E0D59F4C(iLocal_317, 1);
								unk_0xC778754E36F3FFD6(iLocal_317, 116, 0);
								unk_0xC778754E36F3FFD6(iLocal_317, 29, 0);
								if (!bLocal_345)
								{
									func_39();
									unk_0x4EDE34FBADD967A6(0);
									func_23(&uLocal_358, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (func_22())
									{
										unk_0x4EDE34FBADD967A6(0);
									}
									bLocal_345 = true;
								}
								if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
								{
									unk_0xFE93132CC8944C8C(iLocal_317, 99);
								}
								if (!unk_0xB6900B8CB0ABBD2B(iLocal_319))
								{
									unk_0xB7A2078CD1C9A82F(iLocal_319, 0);
									unk_0x3A2304A561B7D162(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
									unk_0x15C4AABC624B231C(iLocal_319, 1, 0);
								}
								func_88();
							}
						}
					}
				}
			}
			break;
	}
}

int func_22()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

int func_23(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_24(sParam2, iParam3, 0);
}

int func_24(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xB518E9C8553B1D2B(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2964A62922189B93())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_35();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
			if (bParam2)
			{
				func_28();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
					if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
				}
			}
			if (func_9())
			{
				return 0;
			}
			else
			{
				switch (Global_14413.f_1)
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
				{
					return 0;
				}
			}
			func_26();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_25();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}
	return 0;
}

void func_25()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB518E9C8553B1D2B(0);
	Global_15712 = 1;
}

void func_26()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x77621132305B133B(&Global_2284, 16);
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xA4860063B4E6B963() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x0917C1C640BB7484(unk_0xC8B93D94F8954288(), 78, 1))
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

void func_28()
{
	if (func_34(14))
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_29();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

int func_29()
{
	func_30();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_30()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_33(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_32(unk_0xC8B93D94F8954288());
			if (func_31(iVar0) && (!func_34(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_31(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_34(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

void func_37()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_39()
{
	Global_14578 = 0;
	func_40();
}

void func_40()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
	}
}

void func_41()
{
	switch (iLocal_353)
	{
		case 0:
			if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
			{
				if ((unk_0x693EBB4F13506457() - iLocal_351) > 3000)
				{
					func_23(&uLocal_358, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_355 = unk_0x693EBB4F13506457();
					iLocal_351 = unk_0x693EBB4F13506457();
					iLocal_353 = 2;
				}
			}
			break;
		
		case 1:
			if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
			{
				if ((unk_0x693EBB4F13506457() - iLocal_351) > 3000)
				{
					iLocal_351 = unk_0x693EBB4F13506457();
					iLocal_353++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
			{
				if ((unk_0x693EBB4F13506457() - iLocal_351) > 5000 && !func_22())
				{
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						iLocal_356 = unk_0x6D5BB810CC209E15(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0));
					}
					if (unk_0x277ECDA23D8CCEB4(iLocal_317, 0))
					{
						if (unk_0x5D42322C7DB888D0(iLocal_320, 0))
						{
							if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
							{
								if (!unk_0x65C04D5A473900A3(unk_0xC8B93D94F8954288(), joaat("bulldozer")))
								{
									if (!unk_0x6B4865E08E90ACC5(uLocal_325))
									{
										uLocal_325 = func_89(iLocal_320, 0, 0);
										if (unk_0x6B4865E08E90ACC5(uLocal_324))
										{
											unk_0x5356E82C1E5E0C44(&uLocal_324);
										}
									}
								}
							}
							else if (!unk_0x6B4865E08E90ACC5(uLocal_325))
							{
								uLocal_325 = func_89(iLocal_320, 0, 0);
								if (unk_0x6B4865E08E90ACC5(uLocal_324))
								{
									unk_0x5356E82C1E5E0C44(&uLocal_324);
								}
							}
						}
					}
					if (iLocal_356 == joaat("bulldozer"))
					{
						func_23(&uLocal_358, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						func_23(&uLocal_358, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_351 = unk_0x693EBB4F13506457();
					iLocal_353++;
				}
			}
			break;
		
		case 3:
			if (unk_0x693EBB4F13506457() - iLocal_351) > unk_0x531444754C426278(5000, 8000)
			{
				if (!func_22())
				{
					func_23(&uLocal_358, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_351 = unk_0x693EBB4F13506457();
				}
			}
			break;
	}
}

void func_42()
{
	switch (iLocal_349)
	{
		case 0:
			unk_0x8FF5EBBA7EC63C8B(Local_526 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x2C92464B6C4E602E(1f);
			unk_0xDE010A825A0B7D7C(Local_523, 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xDE010A825A0B7D7C(Local_523 - Vector(0f, 4f, 0f), 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xDE010A825A0B7D7C(Local_523 - Vector(0f, 8f, 0f), 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xDE010A825A0B7D7C(Local_526, 1f);
			unk_0x0C6B05B771656EFA();
			iLocal_355 = unk_0x693EBB4F13506457();
			iLocal_349 = 2;
			break;
		
		case 2:
			if ((unk_0x693EBB4F13506457() - iLocal_355) > iLocal_304 || func_44())
			{
				if (unk_0xCFB07F483F9F95C1(uLocal_533))
				{
					unk_0x939ED2D95F7BD8A8(uLocal_533, 0);
				}
				func_43();
				if (!bLocal_345)
				{
					if (!unk_0x2DC9BA2299B45EA6(iLocal_317) && !unk_0xB6900B8CB0ABBD2B(iLocal_319))
					{
						if (!unk_0xF6D1796681289C21(iLocal_317, iLocal_319, -1, 0, 0) && !unk_0xF6D1796681289C21(iLocal_317, iLocal_319, 0, 0, 0))
						{
							func_39();
							unk_0x4EDE34FBADD967A6(0);
							func_23(&uLocal_358, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_345 = true;
						}
					}
				}
				unk_0x21F5FB3C8D48F7F5(3, 1);
				unk_0xF8C5A0126361D769(80f);
				unk_0xE897212B1DA43802(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				unk_0x864B477954CEA834(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_532);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_349 = 3;
			}
			break;
		
		case 3:
			if (unk_0x95CCECA3948CFE7B(iLocal_319))
			{
				if (!unk_0x79E944054F6C9DCD(iLocal_319))
				{
				}
			}
			if (iLocal_348 < 2)
			{
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (!unk_0xB6900B8CB0ABBD2B(iLocal_319))
					{
						unk_0xB7A2078CD1C9A82F(iLocal_319, 0);
						unk_0x3A2304A561B7D162(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0x15C4AABC624B231C(iLocal_319, 1, 0);
					}
				}
			}
			break;
	}
}

void func_43()
{
	iLocal_48 = 1;
}

int func_44()
{
	if (iLocal_222 == 1)
	{
		return 1;
	}
	return 0;
}

void func_45()
{
	struct<3> Var0;
	
	switch (iLocal_348)
	{
		case 0:
			if (iLocal_353 >= 2)
			{
				if (!unk_0x2DC9BA2299B45EA6(iLocal_317) && !unk_0xB6900B8CB0ABBD2B(iLocal_319))
				{
					if (!unk_0x277ECDA23D8CCEB4(iLocal_317, 0))
					{
						iLocal_348++;
					}
					unk_0xA278ECBE30D8AE4F(&iLocal_340);
					if (unk_0xF6D1796681289C21(iLocal_317, iLocal_319, -1, 0, 0) || unk_0xF6D1796681289C21(iLocal_317, iLocal_319, 0, 0, 0))
					{
						if (unk_0xF6D1796681289C21(iLocal_317, iLocal_319, -1, 0, 0))
						{
							bLocal_344 = true;
							Local_314 = { unk_0x44C17CCB85A88A1F(iLocal_319, 0) + Vector(0f, -1f, -3f) };
						}
						else
						{
							Local_314 = { unk_0x44C17CCB85A88A1F(iLocal_319, 0) + Vector(0f, 1.5f, -3f) };
						}
						if (unk_0xA0C23498D8E0BB93(unk_0x974516F979AD07BC(), Local_314, 4.2f, 4f, 5f, 0, 1, 0))
						{
							if (!bLocal_343)
							{
								func_39();
								unk_0x4EDE34FBADD967A6(0);
								func_23(&uLocal_358, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
								bLocal_343 = true;
							}
						}
						else
						{
							bLocal_343 = true;
							iLocal_348++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x2DC9BA2299B45EA6(iLocal_317) && !unk_0xB6900B8CB0ABBD2B(iLocal_319))
			{
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_320))
				{
					unk_0x916DBBB1A4A313B5(iLocal_320, 0, 1, 1, 0, 0, 0, 0, 0);
				}
				unk_0x916DBBB1A4A313B5(iLocal_317, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0xB7A2078CD1C9A82F(iLocal_319, 0);
				unk_0x3E2E609450787FFE(&uLocal_357);
				if (bLocal_344)
				{
					unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), 3000, 0, 2);
					unk_0xE5F6BE3F8E937ACE(0, 0, 0);
					unk_0x81333BEA4837207C(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				else
				{
					unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), 3000, 0, 2);
					unk_0xE5F6BE3F8E937ACE(0, 0, 0);
					unk_0x81333BEA4837207C(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				unk_0x939BC11172AA1303(uLocal_357);
				unk_0xBFE865E3B513451B(iLocal_317, uLocal_357);
				unk_0xA9351C9309E03069(&uLocal_357);
				unk_0xF1A02DDEC7E15D6E(iLocal_317, 1);
				iLocal_351 = unk_0x693EBB4F13506457();
				iLocal_348++;
			}
			break;
		
		case 2:
			if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
			{
				if ((unk_0x693EBB4F13506457() - iLocal_351) > 500 && !unk_0x277ECDA23D8CCEB4(iLocal_317, 0))
				{
					iLocal_304 = 0;
					if (unk_0x5D42322C7DB888D0(iLocal_319, 0))
					{
					}
					func_39();
					unk_0x4EDE34FBADD967A6(0);
					func_23(&uLocal_358, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_351 = unk_0x693EBB4F13506457();
					iLocal_348++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
			{
				if (unk_0xA0C23498D8E0BB93(iLocal_317, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, 0, 1, 0) || (unk_0x693EBB4F13506457() - iLocal_351) > 10000)
				{
					func_23(&uLocal_358, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_348++;
				}
			}
			break;
		
		case 4:
			if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
			{
				if (unk_0xA0C23498D8E0BB93(iLocal_317, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, 0, 1, 0) || (unk_0x693EBB4F13506457() - iLocal_351) > 10000)
				{
					if (!unk_0xB6900B8CB0ABBD2B(iLocal_319))
					{
						unk_0xB7A2078CD1C9A82F(iLocal_319, 0);
						unk_0x3A2304A561B7D162(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0x15C4AABC624B231C(iLocal_319, 1, 0);
					}
					iLocal_348++;
				}
			}
			break;
		
		case 5:
			if ((unk_0x693EBB4F13506457() - iLocal_351) > 3000)
			{
				if (unk_0x5D42322C7DB888D0(iLocal_319, 0))
				{
					unk_0xB7A2078CD1C9A82F(iLocal_319, 0);
					unk_0x3A2304A561B7D162(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					unk_0x15C4AABC624B231C(iLocal_319, 1, 0);
				}
				if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
				{
					unk_0x233432976E597324("RE14A_SAFE");
					if (!unk_0xB6900B8CB0ABBD2B(iLocal_320))
					{
						unk_0x916DBBB1A4A313B5(iLocal_320, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					unk_0x916DBBB1A4A313B5(iLocal_317, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0xCE224502DAE6D698(iLocal_317, 1);
					unk_0x58F516BB5E324590(iLocal_317, 1);
					unk_0x3D3422B1705EBBD6(iLocal_317, 0);
					unk_0xAAD662D7E0D59F4C(iLocal_317, 0);
					unk_0xA8542D59C88A5262(iLocal_317, joaat("DEFAULT"));
					unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
					unk_0x3E2E609450787FFE(&uLocal_357);
					unk_0x5323F488E6A1B660(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0f, 0, 0, 0);
					unk_0x20ACC819883C0E85(uLocal_357, 1);
					unk_0x939BC11172AA1303(uLocal_357);
					unk_0xBFE865E3B513451B(iLocal_317, uLocal_357);
					unk_0xA9351C9309E03069(&uLocal_357);
				}
				unk_0xE897212B1DA43802(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				unk_0x864B477954CEA834(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_532);
				iLocal_351 = unk_0x693EBB4F13506457();
				iLocal_348++;
			}
			break;
		
		case 6:
			if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
			{
				if ((unk_0x693EBB4F13506457() - iLocal_351) > 6400)
				{
					Var0 = { -477.2774f, -990.0638f, 23.5497f };
					if (unk_0x95CCECA3948CFE7B(unk_0x974516F979AD07BC()))
					{
						if (unk_0xA0C23498D8E0BB93(unk_0x974516F979AD07BC(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0x95CCECA3948CFE7B(iLocal_322))
					{
						if (unk_0xA0C23498D8E0BB93(iLocal_322, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0x95CCECA3948CFE7B(iLocal_320))
					{
						if (unk_0xA0C23498D8E0BB93(iLocal_320, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					unk_0x3E2E609450787FFE(&uLocal_357);
					unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), 3000, 2052, 2);
					unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
					unk_0xDF9BE96D850502A6(0, "WORLD_HUMAN_PICNIC", Var0, 304.8172f, 0, 1, 0);
					unk_0x939BC11172AA1303(uLocal_357);
					unk_0xBFE865E3B513451B(iLocal_317, uLocal_357);
					unk_0xA9351C9309E03069(&uLocal_357);
					func_23(&uLocal_358, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
					func_46();
				}
			}
			else
			{
				func_88();
			}
			break;
	}
}

void func_46()
{
	while (!func_73())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_69(func_29(), 4, 2);
	func_50(-1, 0);
	func_47();
	iLocal_301 = 2;
}

void func_47()
{
	func_48();
}

int func_48()
{
	if (func_49(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_49(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

void func_50(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_66(iParam0))
	{
		func_65(iParam0, iParam1);
		if (!func_64(51))
		{
			func_60("RE_REWARD", 1, 0, 4000, 10000, func_63(), 0, 138, 0);
			func_59(51);
		}
		if (func_58(iParam0))
		{
			Global_100976.f_29464.f_2 = 3;
		}
		if (func_57(iParam0, iParam1) != 322)
		{
			func_52(func_57(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_100964 = iParam1;
		if (Global_100962 == 0)
		{
			if (((Global_100965 == 1 || Global_100965 == 5) || Global_100965 == 11) || Global_100965 == 25)
			{
				func_51(2);
			}
			else if ((Global_100965 == 26 || Global_100965 == 8) || Global_100965 == 17)
			{
				func_51(7);
			}
			else
			{
				func_51(1);
			}
		}
	}
}

void func_51(int iParam0)
{
	Global_100962 = iParam0;
}

void func_52(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_56((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_100976.f_8828[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_100976.f_8828[iParam0 /*12*/].f_6 == 11 || Global_100976.f_8828[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_100976.f_8828[iParam0 /*12*/].f_5 = 1;
		Global_100976.f_8828[iParam0 /*12*/].f_10 = uParam1;
		Global_100976.f_8828[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_53();
	}
}

void func_53()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_100712 = 0;
	Global_100713 = 0;
	Global_100714 = 0;
	Global_100715 = 0;
	Global_100716 = 0;
	Global_100717 = 0;
	Global_100718 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_100976.f_8828.f_3853;
	Global_100976.f_8828.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_100976.f_8828[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_100976.f_8828[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100712++;
					fVar1 = (fVar1 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100713++;
					fVar2 = (fVar2 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100714++;
					fVar3 = (fVar3 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100715++;
					fVar4 = (fVar4 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100716++;
					fVar5 = (fVar5 + (Global_100976.f_8828[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100717++;
					fVar6 = (fVar6 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100718++;
					fVar7 = (fVar7 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100695 > 0)
	{
		if (Global_100712 == Global_100695)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100696 > 0)
	{
		if (Global_100713 == Global_100696)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100697 > 0)
	{
		if (Global_100714 == Global_100697)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100698 > 0)
	{
		if (Global_100715 == Global_100698)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100699 > 0)
	{
		if (((Global_100716 == Global_100699 || (Global_100699 * 10 / Global_100716) < 41) || Global_100716 > Global_100702) || Global_100716 == Global_100702)
		{
			if (!unk_0xDCC86F723E82125E(Global_100976.f_8828.f_3856, 14))
			{
				if (Global_100716 == Global_100699)
				{
					unk_0x2343CAF890251A86(joaat("num_rndevents_completed"), Global_100699, 0);
					unk_0x59A0729D503ED758(&(Global_100976.f_8828.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100700 > 0)
	{
		if (Global_100717 == Global_100700)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100701 > 0)
	{
		if (Global_100718 == Global_100701)
		{
			fVar7 = 5f;
		}
	}
	Global_100976.f_8828.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100716 > Global_100702 || Global_100716 == Global_100702)
	{
		iVar9 = Global_100702;
	}
	else
	{
		iVar9 = Global_100716;
	}
	unk_0x071958EFED9481F5(joaat("num_missions_completed"), Global_100712, 1);
	unk_0x071958EFED9481F5(joaat("num_missions_available"), Global_100695, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_completed"), Global_100713, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_available"), Global_100696, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_completed"), Global_100714, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_available"), Global_100697, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_completed"), Global_100715, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_available"), Global_100698, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_available"), Global_100702, 1);
	unk_0x071958EFED9481F5(joaat("num_misc_completed"), (Global_100718 + Global_100717), 1);
	unk_0x071958EFED9481F5(joaat("num_misc_available"), (Global_100701 + Global_100700), 1);
	Global_100719 = (Global_100712 * 100 / Global_100695);
	Global_100721 = ((Global_100714 + Global_100713) * 100 / (Global_100697 + Global_100696));
	Global_100720 = ((Global_100715 + iVar9) * 100 / (Global_100698 + Global_100702));
	Global_100722 = ((Global_100717 + Global_100718) * 100 / (Global_100700 + Global_100701));
	unk_0xB3AF65174F7E38A7(joaat("total_progress_made"), Global_100976.f_8828.f_3853, 1);
	unk_0x071958EFED9481F5(joaat("percent_story_missions"), Global_100719, 1);
	unk_0x071958EFED9481F5(joaat("percent_ambient_missions"), Global_100720, 1);
	unk_0x071958EFED9481F5(joaat("percent_oddjobs"), Global_100721, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853))
	{
		func_55(13, unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853));
	}
	if (!unk_0x11C746AE4DB58A03())
	{
		if (!Global_69317)
		{
			if (func_54() == 2 == 0 && !unk_0xBBAE3E0C60A8AD4B())
			{
				if (unk_0x91629FFED455823B())
				{
					Global_100710 = 0;
				}
				if (!Global_55659)
				{
					func_48();
				}
			}
		}
	}
}

int func_54()
{
	return Global_25115;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x2D6B7C5EAD43367D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x50EEE3FED4DFE988(iParam0, iParam1);
	}
	return 0;
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	
	if (iParam2 == -1)
	{
		iParam2 = func_7();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x76928FD01140B865((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xCCB054268E9EBBCD((iParam0 - 0)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x76928FD01140B865((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xCCB054268E9EBBCD((iParam0 - 192)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x76928FD01140B865((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xCCB054268E9EBBCD((iParam0 - 513)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x76928FD01140B865((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xCCB054268E9EBBCD((iParam0 - 705)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x39DB3B2AF22A3569((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xCCB054268E9EBBCD((iParam0 - 3111)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x39DB3B2AF22A3569((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xCCB054268E9EBBCD((iParam0 - 2919)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD9B02A4858A8C0D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xCCB054268E9EBBCD((iParam0 - 4207)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD9B02A4858A8C0D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xCCB054268E9EBBCD((iParam0 - 4335)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD9B02A4858A8C0D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xCCB054268E9EBBCD((iParam0 - 6029)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7449)
	{
		uVar11 = unk_0xD9B02A4858A8C0D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xCCB054268E9EBBCD((iParam0 - 7385)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD9B02A4858A8C0D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xCCB054268E9EBBCD((iParam0 - 7321)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_57(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x59A0729D503ED758(&(Global_100976.f_24879.f_150[iVar1]), iVar0);
	}
}

void func_60(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_61(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_61(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xF8D041B05C3D1FD4(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_100976.f_24879.f_145)
	{
		if (unk_0xF8D041B05C3D1FD4(&(Global_100976.f_24879[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_100976.f_24879.f_145 < 9)
	{
		StringCopy(&(Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_4), sParam1, 16);
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_8 = (unk_0x693EBB4F13506457() + iParam3);
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_9 = iParam5;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_11 = iParam6;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_12 = uParam2;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_13 = iParam7;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_14 = iParam8;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_10 = ((unk_0x693EBB4F13506457() + iParam3) + iParam4);
		}
		else
		{
			Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_10 = -1;
		}
		Global_100976.f_24879.f_145++;
		func_62();
	}
}

void func_62()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_100976.f_24879.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_100976.f_24879.f_145)
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_24879[iVar0 /*16*/].f_11, 0))
		{
			if (Global_100976.f_24879[iVar0 /*16*/].f_12 > Global_100976.f_24879.f_146[0])
			{
				Global_100976.f_24879.f_146[0] = Global_100976.f_24879[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_100976.f_24879[iVar0 /*16*/].f_11, 1))
		{
			if (Global_100976.f_24879[iVar0 /*16*/].f_12 > Global_100976.f_24879.f_146[1])
			{
				Global_100976.f_24879.f_146[1] = Global_100976.f_24879[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_100976.f_24879[iVar0 /*16*/].f_11, 2))
		{
			if (Global_100976.f_24879[iVar0 /*16*/].f_12 > Global_100976.f_24879.f_146[2])
			{
				Global_100976.f_24879.f_146[2] = Global_100976.f_24879[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_63()
{
	func_30();
	switch (Global_100976.f_1770.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_24879.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_65(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&(Global_100976.f_29464.f_8[iParam0]), iParam1);
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_67()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xC4E68AF0B559FAC4(), 64);
	uVar16 = func_68(Var0);
	return uVar16;
}

int func_68(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x7CBED6EFED40E7EB(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_100976.f_1770.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_100976.f_1770.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3790;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 3790)
			{
				iVar0 = func_72(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_70(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
}

int func_71(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
		if (iVar1 > -1)
		{
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2466774[iParam0 /*5*/][func_71(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_73()
{
	return 1;
}

var func_74(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_75(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x6B4865E08E90ACC5(uVar0)) && unk_0xF2831232D38CD691(&(Global_100976.f_32519[iParam2 /*29*/].f_3)))
	{
		unk_0x8755DAC584918BF9(uVar0, &(Global_100976.f_32519[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x361E437CE4AD5532(iParam0);
	if (unk_0x18BDAFC0B20C2C9E(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_76(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDDD65F4720293225(uVar0, bParam1);
		}
		else
		{
			unk_0x32546F91F646B246(uVar0, 2);
		}
	}
	else if (unk_0x96209AADF56E8FE8(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_76(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
		unk_0xDDD65F4720293225(uVar0, bParam1);
	}
	else if (unk_0x09C656419AB67926(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_76(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_76(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_77(int iParam0)
{
	if (func_81())
	{
		Global_100966 = 1;
		Global_100963 = unk_0x693EBB4F13506457();
		if (func_58(Global_100965))
		{
			func_78(0);
		}
		unk_0x4968FFFAEFDFD625(1, "RE_TITLE");
		if (iParam0 && func_58(Global_100965))
		{
			unk_0x837755F6FCE9B0E2();
		}
		return 1;
	}
	return 0;
}

void func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_100976.f_29464.f_2 < 3)
			{
				if (!unk_0xB5AB8AD14244C87F())
				{
					func_79(func_80(iParam0), -1);
					Global_100976.f_29464.f_2++;
					unk_0x59A0729D503ED758(&Global_100972, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xDCC86F723E82125E(Global_100972, 1))
			{
				if (!unk_0xB5AB8AD14244C87F())
				{
					func_79(func_80(iParam0), -1);
					Global_100976.f_29464.f_3++;
					unk_0x59A0729D503ED758(&Global_100972, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xDCC86F723E82125E(Global_100972, 2))
			{
				if (!unk_0xB5AB8AD14244C87F())
				{
					func_79(func_80(iParam0), -1);
					Global_100976.f_29464.f_4++;
					unk_0x59A0729D503ED758(&Global_100972, 2);
				}
			}
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(uParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

char* func_80(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_81()
{
	switch (func_82(&Global_25174, 0, 5, 0, unk_0x46CF50E0E5A24635()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_82(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88917.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_86(0))
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		unk_0x9B5503F5CD2CEB12(unk_0x1A96BAEAC664567A(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBD11A7205F364E1A(8);
		}
		Global_35700 = iParam2;
		Global_35662 = *uParam0;
		Global_35663 = iParam4;
		Global_35661 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35661 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35661)
			{
				if (Global_35667[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35662 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_84(iParam2))
		{
			return 0;
		}
		if (Global_35661 == 8)
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		Global_35667[Global_35661 /*4*/] = Global_35664;
		Global_35667[Global_35661 /*4*/].f_1 = iParam1;
		Global_35667[Global_35661 /*4*/].f_2 = iParam2;
		Global_35667[Global_35661 /*4*/].f_3 = 0;
		Global_35661++;
		if (iParam4 != 0)
		{
			func_83(uParam0, iParam4);
		}
	}
	return 2;
}

void func_83(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35661 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35661)
	{
		if (Global_35667[iVar0 /*4*/] == *uParam0)
		{
			Global_35667[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_84(int iParam0)
{
	return func_85(iParam0, Global_35700);
}

int func_85(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_86(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_84(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_87(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x6DAFE4284D2E6AD0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (bParam0)
		{
			if (unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				if (unk_0xC0ADAF0814175B68(iVar0, -1) != unk_0xC8B93D94F8954288())
				{
					return 0;
				}
			}
		}
		if (!unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x3E4CBCCFB5F133F1(iVar0) < 0.95f || unk_0x3E4CBCCFB5F133F1(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (!unk_0xBF43288C8D773F6A(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	return 1;
}

void func_88()
{
	unk_0x233432976E597324("RE14A_FAIL");
	iLocal_301 = 2;
}

int func_89(int iParam0, bool bParam1, bool bParam2)
{
	return func_75(iParam0, !bParam1, bParam2);
}

void func_90()
{
	if (func_93(1000))
	{
		func_39();
		unk_0x00F9843B9C06C2E9(800);
		while (unk_0xE71FCE10773CF7B0())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (!unk_0xB6900B8CB0ABBD2B(iLocal_319))
		{
			unk_0x0DCFA7796CD6188A(iLocal_319, 0f, 1f, 1f, 200f, 800f, 1);
		}
		bLocal_536 = true;
		iLocal_303 = 8;
	}
	switch (iLocal_303)
	{
		case 0:
			func_2(1, 1, 1, 0);
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
			unk_0xF4C9DB13E4CF9A58();
			unk_0xB7709513BF7C1AC0(0);
			unk_0xB1DF6C0157E453DE(0);
			unk_0x3529E36B232F1F48(0);
			if (unk_0x95CCECA3948CFE7B(unk_0x974516F979AD07BC()))
			{
				unk_0xFD816D0E738EB817(unk_0x974516F979AD07BC(), 1, 0);
			}
			unk_0x425A7D451DB73551(Local_308, 50f, 0);
			unk_0x3FC9316FEF4E4720(Local_308, 30f, 0, 0, 0, 0, 0);
			unk_0xE3B85EB139EAACDD(Local_308, 100f, 0);
			if (!unk_0xB6900B8CB0ABBD2B(unk_0x974516F979AD07BC()))
			{
				if (unk_0xA0C23498D8E0BB93(unk_0x974516F979AD07BC(), Local_308, 8f, 8f, 8f, 0, 1, 0))
				{
					uLocal_321 = unk_0x974516F979AD07BC();
					unk_0xFD816D0E738EB817(uLocal_321, 1, 0);
					unk_0x95F5F15D238A7F1C(&iLocal_321);
				}
			}
			if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, 0, 1, 0))
			{
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), -477.3538f, -972.67f, 22.5494f, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 237.4839f);
			}
			uLocal_530 = unk_0xD5CF3E0D106CC7B8("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, 1, 2);
			uLocal_531 = unk_0xD5CF3E0D106CC7B8("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, 1, 2);
			unk_0xB61A035EB3575B09(uLocal_530, "HAND_SHAKE", 0.3f);
			unk_0xB61A035EB3575B09(uLocal_531, "HAND_SHAKE", 0.3f);
			func_92();
			unk_0x7D1795B1E14EDFFD(uLocal_530, 1);
			unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
			unk_0x4EDE34FBADD967A6(500);
			unk_0xB306DBE9AFBD23A6(uLocal_531, uLocal_530, 3500, 1, 1);
			unk_0x233432976E597324("RE14A_START");
			iLocal_354 = unk_0x693EBB4F13506457();
			iLocal_303 = 1;
			break;
		
		case 1:
			if ((unk_0x693EBB4F13506457() - iLocal_354) > 3500)
			{
				unk_0xC4EE38A4CFF7544C(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				unk_0xC4EE38A4CFF7544C(iLocal_350, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				unk_0xBA56A0D247C4848D(uLocal_327[0], 1);
				func_91(uLocal_530);
				func_91(uLocal_531);
				uLocal_530 = unk_0xD5CF3E0D106CC7B8("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, 1, 2);
				uLocal_531 = unk_0xD5CF3E0D106CC7B8("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, 1, 2);
				unk_0xB61A035EB3575B09(uLocal_530, "HAND_SHAKE", 0.3f);
				unk_0xB61A035EB3575B09(uLocal_531, "HAND_SHAKE", 0.3f);
				unk_0xB306DBE9AFBD23A6(uLocal_531, uLocal_530, 4000, 1, 0);
				if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
				{
					unk_0x5124C5FA52D2AF3E(iLocal_317);
					unk_0x170E3F679C0C8F29(iLocal_317, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (unk_0x95CCECA3948CFE7B(iLocal_340))
				{
					unk_0xB81176DFD2611E8B(iLocal_340, 1, 1);
					unk_0xA278ECBE30D8AE4F(&iLocal_340);
				}
				iLocal_354 = unk_0x693EBB4F13506457();
				iLocal_303 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x693EBB4F13506457() - iLocal_354) > 1500)
			{
				unk_0xC4EE38A4CFF7544C(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				iLocal_354 = unk_0x693EBB4F13506457();
				iLocal_303 = 3;
			}
			break;
		
		case 3:
			if ((unk_0x693EBB4F13506457() - iLocal_354) > 500)
			{
				if (unk_0x95CCECA3948CFE7B(uLocal_327[0]))
				{
					unk_0xB7A2078CD1C9A82F(uLocal_327[0], 0);
					unk_0x3A2304A561B7D162(uLocal_327[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, 1, 1, 1, 0, 1);
					unk_0x93F5A2A5FA5F0C90(uLocal_327[0], 11, 0);
					unk_0x93F5A2A5FA5F0C90(uLocal_327[0], 18, 0);
					unk_0x93F5A2A5FA5F0C90(uLocal_327[0], 19, 0);
					unk_0x93F5A2A5FA5F0C90(uLocal_327[0], 23, 0);
					unk_0x93F5A2A5FA5F0C90(uLocal_327[0], 9, 0);
					unk_0x93F5A2A5FA5F0C90(uLocal_327[0], 12, 0);
					unk_0x93F5A2A5FA5F0C90(uLocal_327[0], 17, 0);
					unk_0x840D4AE3E3E4D08F("scr_reconstruct_pipefall_debris", uLocal_327[0], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				iLocal_354 = unk_0x693EBB4F13506457();
				iLocal_303 = 4;
			}
			break;
		
		case 4:
			if ((unk_0x693EBB4F13506457() - iLocal_354) > 2000)
			{
				func_91(uLocal_530);
				func_91(uLocal_531);
				uLocal_530 = unk_0xD5CF3E0D106CC7B8("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, 1, 2);
				uLocal_531 = unk_0xD5CF3E0D106CC7B8("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, 1, 2);
				unk_0xB61A035EB3575B09(uLocal_530, "HAND_SHAKE", 0.3f);
				unk_0xB61A035EB3575B09(uLocal_531, "HAND_SHAKE", 0.3f);
				unk_0xB306DBE9AFBD23A6(uLocal_531, uLocal_530, 1000, 3, 3);
				unk_0x7A2D5FC5F94932AA(iLocal_350);
				iLocal_354 = unk_0x693EBB4F13506457();
				iLocal_303 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x693EBB4F13506457() - iLocal_354) > 500)
			{
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_319))
				{
					unk_0xB7A2078CD1C9A82F(iLocal_319, 0);
					unk_0xC4EE38A4CFF7544C(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
					unk_0x0DCFA7796CD6188A(iLocal_319, 0f, 1f, 1f, 200f, 800f, 1);
					if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
					{
						unk_0xD1FE26E80A6E2C00(iLocal_317);
					}
					unk_0x5323F488E6A1B660(iLocal_317, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0f, 0, 0, 0);
					unk_0x840D4AE3E3E4D08F("scr_reconstruct_pipe_impact", iLocal_319, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					func_23(&uLocal_358, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (unk_0x844838E5D8A21336(uLocal_530) && unk_0x844838E5D8A21336(uLocal_531))
					{
						unk_0xB61A035EB3575B09(uLocal_530, "HAND_SHAKE", 1.5f);
						unk_0xB61A035EB3575B09(uLocal_531, "HAND_SHAKE", 1.5f);
					}
					iLocal_354 = unk_0x693EBB4F13506457();
					iLocal_303 = 6;
				}
			}
			break;
		
		case 6:
			if ((unk_0x693EBB4F13506457() - iLocal_354) > 500)
			{
				func_91(uLocal_530);
				func_91(uLocal_531);
				uLocal_530 = unk_0xD5CF3E0D106CC7B8("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, 1, 2);
				uLocal_531 = unk_0xD5CF3E0D106CC7B8("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, 1, 2);
				unk_0xB61A035EB3575B09(uLocal_530, "HAND_SHAKE", 0.5f);
				unk_0xB61A035EB3575B09(uLocal_531, "HAND_SHAKE", 0.5f);
				unk_0xB306DBE9AFBD23A6(uLocal_531, uLocal_530, 2500, 3, 3);
				if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
				{
					unk_0x170E3F679C0C8F29(iLocal_317, unk_0x44C17CCB85A88A1F(iLocal_317, 1) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_354 = unk_0x693EBB4F13506457();
				iLocal_303 = 7;
			}
			break;
		
		case 7:
			if ((unk_0x693EBB4F13506457() - iLocal_354) > 2200 && !iLocal_346)
			{
				if ((unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()) && unk_0xB548555C3ED3CEBE() == 4) || (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0xCA4987CF8AD5A394() == 4))
				{
					unk_0xD7F5001BB6D13A64("CamPushInNeutral", 0, 0);
					unk_0xC4EE38A4CFF7544C(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_346 = 1;
				}
			}
			if ((unk_0x693EBB4F13506457() - iLocal_354) > 2500)
			{
				if (unk_0x5D42322C7DB888D0(iLocal_319, 0))
				{
					unk_0xB7A2078CD1C9A82F(iLocal_319, 1);
				}
				iLocal_303 = 8;
			}
			break;
		
		case 8:
			unk_0x233432976E597324("RE14A_PIPES");
			if (unk_0x95CCECA3948CFE7B(uLocal_327[0]))
			{
				unk_0xA278ECBE30D8AE4F(&(uLocal_327[0]));
			}
			if (unk_0x5D42322C7DB888D0(iLocal_319, 0))
			{
				unk_0x62C4DFB4097A1725(iLocal_319, 250f);
				unk_0xC76B5C68AB6DC7DF(iLocal_319, Local_308, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(iLocal_319, 80f);
				unk_0x83BD643811DA0EA8(Local_308, 50f, 0);
			}
			if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
			{
				unk_0x5124C5FA52D2AF3E(iLocal_317);
				unk_0xD1FE26E80A6E2C00(iLocal_317);
				unk_0x5323F488E6A1B660(iLocal_317, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0f, 0, 0, 0);
			}
			unk_0x7D1795B1E14EDFFD(uLocal_530, 0);
			unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
			unk_0x5CF5A880ED809DDA(uLocal_530, 0);
			unk_0x5CF5A880ED809DDA(uLocal_531, 0);
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
			unk_0x8C67D2FDE360FBCA(0f);
			unk_0xB7709513BF7C1AC0(1);
			unk_0xB1DF6C0157E453DE(1);
			unk_0x3529E36B232F1F48(1);
			func_2(0, 1, 1, 0);
			iLocal_351 = unk_0x693EBB4F13506457();
			unk_0x4BBD72565A0AF033(joaat("prop_pipe_stack_01"));
			uLocal_327[1] = unk_0xB2AD4914C25D1420(joaat("prop_ld_pipe_single_01"), -457.8815f, -988.9059f, 22.9554f, 1, 1, 0);
			unk_0x68931E8B45B3CA92(uLocal_327[1], -0.1939f, 105.0058f, 77.3964f, 2, 1);
			uLocal_327[2] = unk_0xB2AD4914C25D1420(joaat("prop_ld_pipe_single_01"), -451.5131f, -986.8079f, 24.6947f, 1, 1, 0);
			unk_0x68931E8B45B3CA92(uLocal_327[2], 24.3941f, 32.5423f, 80.6862f, 2, 1);
			uLocal_327[3] = unk_0xB2AD4914C25D1420(joaat("prop_ld_pipe_single_01"), -450.8099f, -985.9972f, 24.7104f, 1, 1, 0);
			unk_0x68931E8B45B3CA92(uLocal_327[3], 24.1841f, 110.287f, 78.4357f, 2, 1);
			uLocal_327[4] = unk_0xB2AD4914C25D1420(joaat("prop_ld_pipe_single_01"), -456.6558f, -987.3979f, 22.9537f, 1, 1, 0);
			unk_0x68931E8B45B3CA92(uLocal_327[4], -0.0264f, 29.5754f, 79.1811f, 2, 1);
			uLocal_327[5] = unk_0xB2AD4914C25D1420(joaat("prop_ld_pipe_single_01"), -456.1279f, -988.4162f, 22.9889f, 1, 1, 0);
			unk_0x68931E8B45B3CA92(uLocal_327[5], -0.6337f, 108.4339f, 77.9539f, 2, 1);
			uLocal_327[6] = unk_0xB2AD4914C25D1420(joaat("prop_ld_pipe_single_01"), -457.0807f, -987.3059f, 23.7564f, 1, 1, 0);
			unk_0x68931E8B45B3CA92(uLocal_327[6], 0.0929f, 74.2657f, 79.3839f, 2, 1);
			uLocal_327[7] = unk_0xB2AD4914C25D1420(joaat("prop_ld_pipe_single_01"), -456.6558f, -983.7804f, 22.9712f, 1, 1, 0);
			unk_0x68931E8B45B3CA92(uLocal_327[7], -0.0264f, 29.5754f, 80.9061f, 2, 1);
			uLocal_327[8] = unk_0xB2AD4914C25D1420(joaat("prop_ld_pipe_single_01"), -455.3279f, -983.1712f, 22.9564f, 1, 1, 0);
			unk_0x68931E8B45B3CA92(uLocal_327[8], -0.1087f, 109.7339f, 80.9789f, 2, 1);
			uLocal_327[9] = unk_0xB2AD4914C25D1420(joaat("prop_ld_pipe_single_01"), -456.1632f, -983.9359f, 23.7964f, 1, 1, 0);
			unk_0x68931E8B45B3CA92(uLocal_327[9], -0.3321f, 74.1907f, 81.6089f, 2, 1);
			uLocal_327[10] = unk_0xB2AD4914C25D1420(joaat("prop_ld_pipe_single_01"), -454.644f, -994.1709f, 23.3329f, 1, 1, 0);
			unk_0x68931E8B45B3CA92(uLocal_327[10], 5.7811f, 104.6058f, 104.6964f, 2, 1);
			iLocal_347 = 0;
			while (iLocal_347 < 11)
			{
				if (unk_0x95CCECA3948CFE7B(uLocal_327[iLocal_347]))
				{
					unk_0xFE4533E741E5E8FC(uLocal_327[iLocal_347], 1);
					unk_0xB7A2078CD1C9A82F(uLocal_327[iLocal_347], 1);
				}
				iLocal_347++;
			}
			if (bLocal_536)
			{
				unk_0x31E6EB2040318451(800);
				while (unk_0x2230725B418B1240())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			iLocal_342 = 1;
			iLocal_341 = 0;
			break;
	}
}

void func_91(var uParam0)
{
	if (unk_0x844838E5D8A21336(uParam0))
	{
		unk_0x5CF5A880ED809DDA(uParam0, 0);
	}
}

void func_92()
{
	unk_0x23F5D6D803B5B903();
	Global_16704 = 0;
}

int func_93(int iParam0)
{
	if (unk_0xB66DD474AA9E764E())
	{
		if ((unk_0x693EBB4F13506457() - Global_28) > iParam0)
		{
			Global_27 = unk_0x693EBB4F13506457();
		}
		Global_28 = unk_0x693EBB4F13506457();
		if ((unk_0x693EBB4F13506457() - Global_27) > iParam0)
		{
			if (func_94())
			{
				Global_27 = unk_0x693EBB4F13506457();
				return 1;
			}
		}
	}
	return 0;
}

int func_94()
{
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (unk_0x8D9008B8900A28D0(0, 18) || unk_0x8D9008B8900A28D0(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_95(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 1;
	Global_16709 = 0;
	Global_16707 = iParam7;
	Global_2621441 = 0;
	return func_24(sParam2, iParam3, 0);
}

void func_96(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(iParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(iParam2, 1);
			}
		}
	}
}

int func_97(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_98(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_98(var uParam0)
{
	return func_99(*uParam0, "NULL", uParam0->f_1);
}

int func_99(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xDCC86F723E82125E(iParam0, 30))
	{
		if (unk_0xDCC86F723E82125E(iParam0, 29))
		{
			switch (func_100(iParam0))
			{
				case 0:
					return unk_0x0845149A26DABBA5(uParam2);
					break;
				
				case 1:
					return unk_0xF9B86DC1728F1339(sParam1);
					break;
				
				case 2:
					return unk_0x11896648C9E8F14F(sParam1);
					break;
				
				case 3:
					return unk_0x701C5CF3E1956924(sParam1);
					break;
				
				case 4:
					return unk_0x953ED5E61AD54581(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xCB5C09DEC6D45DA8(sParam1);
					break;
				
				case 6:
					return unk_0xC4C141A321D45FD8(sParam1, unk_0xDCC86F723E82125E(iParam0, 27));
					break;
				
				case 7:
					return unk_0xBEA48FDD63E5E9DD(iParam2);
					break;
				
				case 8:
					return unk_0xF0DCEBB4ADA5D981(iParam2);
					break;
				
				case 9:
					return unk_0xB6161F3A3EDA5AA1();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_100(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xDCC86F723E82125E(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_101(var uParam0)
{
	func_102(uParam0, 9, -1, 0);
}

void func_102(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_103(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x59A0729D503ED758(uParam0[iVar0 /*2*/], iParam1);
			unk_0x59A0729D503ED758(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
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
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_104(var uParam0, int iParam1)
{
	func_102(uParam0, 0, iParam1, 0);
}

void func_105(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xB36863F9C6D42649() >= (uParam0->f_32 + uParam0->f_33) || unk_0xDCC86F723E82125E(Global_91106.f_20, 2)) || unk_0xDCC86F723E82125E(Global_91106.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*2*/], 29))
					{
						func_106(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xB36863F9C6D42649();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_106(var uParam0)
{
	func_107(uParam0, "NULL", uParam0->f_1);
}

void func_107(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xDCC86F723E82125E(*uParam0, 30))
	{
		switch (func_100(*uParam0))
		{
			case 0:
				unk_0x7567CEA8E6B5340B(uParam2);
				break;
			
			case 1:
				unk_0xC0E8B67A4385D37D(sParam1);
				break;
			
			case 2:
				unk_0x841AF342F853B150(sParam1);
				break;
			
			case 3:
				unk_0x1F0D08B8266D20DB(sParam1, unk_0xDCC86F723E82125E(*uParam0, 28));
				break;
			
			case 4:
				unk_0xC80AE0BAE243FFB1(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x354516B1347786F1(sParam1);
				break;
			
			case 6:
				unk_0xC4C141A321D45FD8(sParam1, unk_0xDCC86F723E82125E(*uParam0, 27));
				break;
			
			case 7:
				unk_0x0BDFD9BDBD966ED3(iParam2);
				break;
			
			case 8:
				unk_0xF3AC452C34BF0E13(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x8CBF0FAEA6BA6D37();
				break;
			
			default:
				break;
		}
		unk_0x59A0729D503ED758(uParam0, 29);
	}
}

void func_108()
{
	int iVar0;
	
	func_104(&Local_537, joaat("bulldozer"));
	func_104(&Local_537, joaat("utillitruck2"));
	func_104(&Local_537, joaat("prop_pipe_stack_01"));
	if (func_97(&Local_537))
	{
		unk_0xB7FAA1C591A4664F(joaat("utillitruck2"), 1);
		unk_0xFD62177C7242216E(0.1f);
		unk_0x21F5FB3C8D48F7F5(3, 0);
		unk_0x8738B068D97CDC64(Local_305 + Vector(50f, 50f, 50f), Local_305 - Vector(50f, 50f, 50f), 0, 1, 1, 1);
		Local_308 = { -455.6561f, -985.8071f, 22.4868f };
		iLocal_319 = unk_0xD53B4DCC7B2C8551(joaat("utillitruck2"), Local_308, 80f, 1, 1);
		unk_0x57892FEA93664769(iLocal_319, 0, 1, 0);
		unk_0x0782F0CAEA719452(iLocal_319, 3);
		unk_0xD69CBD64600FE923(iLocal_319, 1, 1);
		unk_0xD69CBD64600FE923(iLocal_319, 2, 1);
		unk_0xD69CBD64600FE923(iLocal_319, 3, 0);
		unk_0xD69CBD64600FE923(iLocal_319, 4, 1);
		unk_0xD69CBD64600FE923(iLocal_319, 5, 1);
		unk_0xD69CBD64600FE923(iLocal_319, 6, 0);
		unk_0xD69CBD64600FE923(iLocal_319, 7, 1);
		unk_0xB7A2078CD1C9A82F(iLocal_319, 1);
		unk_0x916DBBB1A4A313B5(iLocal_319, 0, 0, 0, 1, 0, 0, 0, 0);
		unk_0xDABDA88E15232316(iLocal_319, 10000);
		unk_0x53BDDA5EC3498C68(iLocal_319, 5f);
		iLocal_320 = unk_0xD53B4DCC7B2C8551(joaat("bulldozer"), -472.9444f, -966.671f, 22.5534f, 181.8365f, 1, 1);
		unk_0x98371F41D43CDFA9(Local_308, 10f, 1, 0, 0, 0);
		uLocal_327[0] = unk_0xB2AD4914C25D1420(joaat("prop_pipe_stack_01"), -453.2f, -986.1f, 59.45f, 1, 1, 0);
		unk_0x765E3FA65D011F03(uLocal_327[0], 90f);
		unk_0xB7A2078CD1C9A82F(uLocal_327[0], 1);
		unk_0x916DBBB1A4A313B5(uLocal_327[0], 1, 1, 1, 1, 0, 0, 0, 0);
		unk_0xDABDA88E15232316(uLocal_327[0], 10000000);
		Local_229[0 /*5*/] = { Local_526 };
		Local_229[1 /*5*/] = { Local_526 + Vector(0f, 0.5f, 0f) };
		Local_229[2 /*5*/] = { Local_526 + Vector(0f, 1f, 0f) };
		Local_229[3 /*5*/] = { Local_526 + Vector(0f, 2.5f, 0f) };
		Local_229[4 /*5*/] = { Local_526 + Vector(0f, 3f, 0f) };
		Local_229[5 /*5*/] = { Local_526 + Vector(0f, 3.5f, 0f) };
		Local_229[6 /*5*/] = { Local_526 + Vector(0f, 4f, 0f) };
		Local_229[7 /*5*/] = { Local_526 + Vector(0f, 4.5f, 0f) };
		Local_229[8 /*5*/] = { Local_526 + Vector(0f, 5f, 0f) };
		Local_229[9 /*5*/] = { Local_526 + Vector(0f, 5.5f, 0f) };
		Local_229[10 /*5*/] = { Local_526 + Vector(0f, 6f, 0f) };
		Local_229[11 /*5*/] = { Local_526 + Vector(0f, 6.5f, 0f) };
		Local_229[12 /*5*/] = { Local_526 + Vector(0f, 7f, 0f) };
		Local_229[13 /*5*/] = { Local_523 };
		iVar0 = 0;
		while (iVar0 < Local_229.f_0)
		{
			Local_229[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (!unk_0x6B4865E08E90ACC5(uLocal_326))
		{
		}
		func_109(&Local_537, 0);
		iLocal_534 = 1;
		iLocal_301 = 1;
	}
}

void func_109(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_111(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_110(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_110(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_111(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*2*/], 30))
		{
			func_112(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_112(var uParam0)
{
	func_113(*uParam0, "NULL", uParam0->f_1);
}

void func_113(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xDCC86F723E82125E(uParam0, 30))
	{
		switch (func_100(iParam0))
		{
			case 0:
				unk_0x4BBD72565A0AF033(uParam2);
				break;
			
			case 1:
				unk_0x3ECF1E41E6ED71D8(sParam1);
				break;
			
			case 2:
				unk_0xF762ED015503B979(sParam1);
				break;
			
			case 3:
				unk_0x26574ED84900A376(sParam1);
				break;
			
			case 4:
				unk_0x28ED861DB3DADA0B(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xC83A0582E6D2E6F3(sParam1);
				break;
			
			case 6:
				unk_0x5E56B49A7D5150F6();
				break;
			
			case 7:
				unk_0x9D77813390E90FDB(iParam2);
				break;
			
			case 8:
				unk_0x48591CDE727D1F6A(iParam2, unk_0xDCC86F723E82125E(iParam0, 26));
				break;
			
			case 9:
				unk_0x946BF5DFB2A71B9E();
				break;
			
			default:
				break;
		}
	}
}

int func_114()
{
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x3A5C3B481EEBA95F(unk_0xC8B93D94F8954288())) > 1369f && !func_125())
		{
			return 0;
		}
	}
	if (func_121())
	{
		return 1;
	}
	if (func_115(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_115(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (func_31(func_29()))
		{
			iVar36 = func_63();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xDCC86F723E82125E(Global_100976.f_17208[iVar32 /*6*/], 2) && !unk_0xDCC86F723E82125E(Global_100976.f_17208[iVar32 /*6*/], 3))
				{
					func_116(iVar32, &Var0);
					fVar35 = unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_116(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_117(uParam1, "Abigail1", func_119(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 1:
			func_117(uParam1, "Abigail2", func_119(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 2:
			func_117(uParam1, "Barry1", func_119(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 3:
			func_117(uParam1, "Barry2", func_119(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 4:
			func_117(uParam1, "Barry3", func_119(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 5:
			func_117(uParam1, "Barry3A", func_119(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 6:
			func_117(uParam1, "Barry3C", func_119(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 7:
			func_117(uParam1, "Barry4", func_119(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_118(iParam0), 0, 0);
			break;
		
		case 8:
			func_117(uParam1, "Dreyfuss1", func_119(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 9:
			func_117(uParam1, "Epsilon1", func_119(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 10:
			func_117(uParam1, "Epsilon2", func_119(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 11:
			func_117(uParam1, "Epsilon3", func_119(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 12:
			func_117(uParam1, "Epsilon4", func_119(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 13:
			func_117(uParam1, "Epsilon5", func_119(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 14:
			func_117(uParam1, "Epsilon6", func_119(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 15:
			func_117(uParam1, "Epsilon7", func_119(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 16:
			func_117(uParam1, "Epsilon8", func_119(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 17:
			func_117(uParam1, "Extreme1", func_119(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 18:
			func_117(uParam1, "Extreme2", func_119(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 19:
			func_117(uParam1, "Extreme3", func_119(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 20:
			func_117(uParam1, "Extreme4", func_119(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 21:
			func_117(uParam1, "Fanatic1", func_119(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_118(iParam0), 1, 0);
			break;
		
		case 22:
			func_117(uParam1, "Fanatic2", func_119(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_118(iParam0), 1, 0);
			break;
		
		case 23:
			func_117(uParam1, "Fanatic3", func_119(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_118(iParam0), 0, 1);
			break;
		
		case 24:
			func_117(uParam1, "Hao1", func_119(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_118(iParam0), 0, 1);
			break;
		
		case 25:
			func_117(uParam1, "Hunting1", func_119(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 26:
			func_117(uParam1, "Hunting2", func_119(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 27:
			func_117(uParam1, "Josh1", func_119(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 28:
			func_117(uParam1, "Josh2", func_119(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 29:
			func_117(uParam1, "Josh3", func_119(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 30:
			func_117(uParam1, "Josh4", func_119(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 31:
			func_117(uParam1, "Maude1", func_119(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 32:
			func_117(uParam1, "Minute1", func_119(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 33:
			func_117(uParam1, "Minute2", func_119(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 34:
			func_117(uParam1, "Minute3", func_119(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 35:
			func_117(uParam1, "MrsPhilips1", func_119(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 36:
			func_117(uParam1, "MrsPhilips2", func_119(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 37:
			func_117(uParam1, "Nigel1", func_119(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 38:
			func_117(uParam1, "Nigel1A", func_119(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 39:
			func_117(uParam1, "Nigel1B", func_119(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_118(iParam0), 1, 1);
			break;
		
		case 40:
			func_117(uParam1, "Nigel1C", func_119(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_118(iParam0), 1, 1);
			break;
		
		case 41:
			func_117(uParam1, "Nigel1D", func_119(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_118(iParam0), 1, 1);
			break;
		
		case 42:
			func_117(uParam1, "Nigel2", func_119(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 43:
			func_117(uParam1, "Nigel3", func_119(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 44:
			func_117(uParam1, "Omega1", func_119(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 45:
			func_117(uParam1, "Omega2", func_119(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 46:
			func_117(uParam1, "Paparazzo1", func_119(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 47:
			func_117(uParam1, "Paparazzo2", func_119(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 48:
			func_117(uParam1, "Paparazzo3", func_119(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 49:
			func_117(uParam1, "Paparazzo3A", func_119(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 50:
			func_117(uParam1, "Paparazzo3B", func_119(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 51:
			func_117(uParam1, "Paparazzo4", func_119(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 52:
			func_117(uParam1, "Rampage1", func_119(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 54:
			func_117(uParam1, "Rampage3", func_119(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 55:
			func_117(uParam1, "Rampage4", func_119(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 56:
			func_117(uParam1, "Rampage5", func_119(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 53:
			func_117(uParam1, "Rampage2", func_119(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 57:
			func_117(uParam1, "TheLastOne", func_119(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 58:
			func_117(uParam1, "Tonya1", func_119(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 59:
			func_117(uParam1, "Tonya2", func_119(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 60:
			func_117(uParam1, "Tonya3", func_119(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 61:
			func_117(uParam1, "Tonya4", func_119(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 62:
			func_117(uParam1, "Tonya5", func_119(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_117(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_119(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_120(iParam0) };
	if (unk_0xB8A06E7E729EED0A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_120(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_121()
{
	if (func_124() && !func_125())
	{
		return 1;
	}
	if (func_123() && func_122())
	{
		return 1;
	}
	return 0;
}

bool func_122()
{
	return Global_100694 > 0;
}

int func_123()
{
	if (Global_88361 != -1)
	{
		return 1;
	}
	return 0;
}

int func_124()
{
	if (Global_88361 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 20);
	}
	return 0;
}

int func_125()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x9EAC4A2F633474B9() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_126()
{
	if (!func_84(5))
	{
		return 1;
	}
	if (func_121())
	{
		return 1;
	}
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x3A5C3B481EEBA95F(unk_0xC8B93D94F8954288())) > 1369f && !func_125())
		{
			return 0;
		}
	}
	if (func_115(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	if ((Global_100965 == func_67() && unk_0x0C5B2801849FF3C3()) && Global_100966)
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_130(iParam0);
	unk_0x0FC823641743BB61(0);
	unk_0xDE3A07FF40453D42(1);
	Global_100962 = 0;
	func_129();
}

void func_129()
{
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			unk_0xB7FAA1C591A4664F(unk_0x6D5BB810CC209E15(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)), 1);
		}
		unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 32, 0);
	}
}

void func_130(int iParam0)
{
	Global_100965 = iParam0;
}

int func_131(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_137788)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_67();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_172())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			Var1 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x3A5C3B481EEBA95F(unk_0xC8B93D94F8954288())) > 1369f && !func_125())
			{
				return 0;
			}
		}
		if (!Global_100976.f_7719)
		{
			return 0;
		}
		if (func_49(0))
		{
			return 0;
		}
		if (func_121())
		{
			return 0;
		}
		if (func_171())
		{
			return 0;
		}
		if (Global_100965 != -1)
		{
			return 0;
		}
		if (func_31(func_29()))
		{
			if (func_115(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_170(iParam3))
		{
			return 0;
		}
		if (func_31(func_29()))
		{
			if (func_169(func_29()) == 4 || func_169(func_29()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_29()))
		{
			if (!func_168(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_167(Global_100976.f_29464.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x693EBB4F13506457() - Global_100967) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_166())
		{
			return 0;
		}
		if (unk_0x19959F2595D26484())
		{
			return 0;
		}
		if (unk_0x0C5B2801849FF3C3())
		{
			return 0;
		}
		if (!func_157(4))
		{
			return 0;
		}
		if (!func_84(5))
		{
			return 0;
		}
		if (func_156(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x8F89BA1339F45476(unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288())))
		{
			if ((unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x2F748CE5313AA2BB(377.153f, -717.567f, 10.0536f) || unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x2F748CE5313AA2BB(320.9934f, 265.2515f, 82.1221f)) || unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x2F748CE5313AA2BB(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_156(0, 0))
		{
			return 0;
		}
		if (Global_25261)
		{
			return 0;
		}
		if (func_170(30) && !func_156(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_31(func_29()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_100976.f_1770.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_100976.f_1770.f_539.f_1524[iVar4];
				if (func_155(iVar8))
				{
					if (func_133(iVar4))
					{
						if (!func_132(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Var5) < (210f * 210f))
							{
								if (func_29() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_132(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_100976.f_1770.f_539.f_1524[iParam0];
	return func_134(iVar0);
}

int func_134(int iParam0)
{
	return func_135(iParam0, 1);
}

int func_135(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_155(iParam0))
	{
		return 0;
	}
	func_136(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_136(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_137(func_148(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_137(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_147(iParam0, iParam1))
	{
		iVar0 = func_146(iParam1);
		iVar1 = func_144(iParam0);
		iVar2 = (func_144(iParam0) - func_144(iParam1));
		iVar3 = (func_146(iParam0) - func_146(iParam1));
		iVar4 = (func_143(iParam0) - func_143(iParam1));
		iVar5 = (func_142(iParam0) - func_142(iParam1));
		iVar6 = (func_141(iParam0) - func_141(iParam1));
		iVar7 = (func_140(iParam0) - func_140(iParam1));
	}
	else
	{
		iVar0 = func_146(iParam0);
		iVar1 = func_144(iParam1);
		iVar2 = (func_144(iParam1) - func_144(iParam0));
		iVar3 = (func_146(iParam1) - func_146(iParam0));
		iVar4 = (func_143(iParam1) - func_143(iParam0));
		iVar5 = (func_142(iParam1) - func_142(iParam0));
		iVar6 = (func_141(iParam1) - func_141(iParam0));
		iVar7 = (func_140(iParam1) - func_140(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_139(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_138(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_138(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_139(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_140(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_141(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_142(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_143(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_144(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_145(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
}

int func_145(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_146(int iParam0)
{
	return iParam0 & 15;
}

int func_147(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_155(iParam1) || !func_155(iParam0))
	{
		return 1;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	var uVar0;
	
	func_154(&uVar0, unk_0x4C374828FD653ECC());
	func_153(&uVar0, unk_0x44AD07D9D178F321());
	func_152(&uVar0, unk_0x342FDFC48311CCCE());
	func_151(&uVar0, unk_0x818078CDB71D3E9C());
	func_150(&uVar0, unk_0x49D01BEA8D03E892());
	func_149(&uVar0, unk_0x90D477BB666B03DB());
	return uVar0;
}

void func_149(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_150(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_151(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_146(*uParam0);
	iVar1 = func_144(*uParam0);
	if (iParam1 < 1 || iParam1 > func_139(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_152(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_141(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_142(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_144(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_146(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_143(iParam0);
	if (iVar5 < 1 || iVar5 > func_139(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_156(int iParam0, int iParam1)
{
	if (unk_0xDCC86F723E82125E(Global_100976.f_29464.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
{
	int iVar0;
	
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				iVar0 = func_29();
				if (!func_31(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_165()) || Global_100023) || Global_25117) || func_164()) || func_36(8, -1)) || func_163()) || func_162()) || func_161()) || func_160()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1) || func_165()) || Global_25117) || func_164()) || func_36(8, -1)) || func_161()) || func_163()) || func_162()) || func_160()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_165()) || Global_100023) || Global_25117) || func_164()) || func_36(8, -1)) || func_161()) || func_163()) || func_162()) || func_160()) || Global_100976.f_6322.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_165()) || Global_100023) || Global_25117) || func_164()) || func_36(8, -1)) || func_163()) || func_162()) || func_160()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_165() || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || func_36(8, -1)) || func_160()) || func_159()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_36(8, -1) || func_163()) || func_162()) || func_159()) || func_158())
						{
							return 0;
						}
						if ((unk_0xA8D4B6BDCF6DE72B() && unk_0xF7531C8E64EC584A() != 3) && unk_0xC8DAE7AE33B529B0() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
						{
							if ((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_165()) || Global_25117) || func_164()) || func_36(8, -1)) || func_162()) || func_161()) || func_160()) || Global_100976.f_6322.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || func_165()) || func_162()) || Global_100023) || Global_25117) || func_164()) || Global_36750) || func_36(8, -1)) || func_161()) || func_159()) || func_160()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0)) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1)) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0xF334DA4D1F348F5D(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_165()) || Global_100023) || Global_25117) || func_164()) || func_36(8, -1)) || func_161()) || func_159()) || func_163()) || func_162()) || func_160())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_158()
{
	return Global_91145.f_1;
}

int func_159()
{
	if (Global_88361 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_160()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_161()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return Global_91158.f_297 > 0;
}

bool func_163()
{
	return Global_91158.f_296 > 0;
}

var func_164()
{
	return Global_1315911;
}

int func_165()
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_166()
{
	func_28();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_167(int iParam0)
{
	return func_147(func_148(), iParam0);
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_29();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_169(int iParam0)
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_100976.f_6322.f_919[iParam0];
}

bool func_170(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_172())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xDCC86F723E82125E(Global_100976.f_29464, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xDCC86F723E82125E(Global_100976.f_29464.f_1, iVar0);
	}
	return bVar1;
}

int func_171()
{
	int iVar0;
	
	if (Global_25265)
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x5D42322C7DB888D0(iVar0, 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(unk_0xC0ADAF0814175B68(iVar0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_172()
{
	var uVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x76C144FFABF149C3())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x59A0729D503ED758(&uVar0, 2);
				unk_0x59A0729D503ED758(&uVar0, 4);
				unk_0x59A0729D503ED758(&uVar0, 6);
				unk_0x59A0729D503ED758(&Global_25, 2);
				unk_0x59A0729D503ED758(&Global_25, 4);
				unk_0x59A0729D503ED758(&Global_25, 6);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					iVar0 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&iVar0, 0);
					unk_0x1F071A4E400AAE0A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138040 == 2)
	{
		return 1;
	}
	else if (Global_138040 == 3)
	{
		return 0;
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		if (unk_0xDCC86F723E82125E(unk_0x11BD984A2A4EF9A7(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_173()
{
	if (iLocal_534)
	{
		if (!iLocal_535)
		{
			unk_0x233432976E597324("RE14A_FAIL");
			func_206();
			if (!unk_0x2DC9BA2299B45EA6(iLocal_317))
			{
				unk_0xC778754E36F3FFD6(iLocal_317, 317, 1);
			}
			if (!unk_0xB6900B8CB0ABBD2B(iLocal_322))
			{
				if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_322, 0) && !unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_322, 50f, 50f, 50f, 0, 1, 0))
				{
					func_185(iLocal_322, 0, 145);
				}
			}
			iLocal_347 = 0;
			while (iLocal_347 < 11)
			{
				if (unk_0x95CCECA3948CFE7B(uLocal_327[iLocal_347]))
				{
					unk_0xB7A2078CD1C9A82F(uLocal_327[iLocal_347], 0);
				}
				iLocal_347++;
			}
			if (!unk_0xB6900B8CB0ABBD2B(iLocal_319))
			{
				unk_0x62C4DFB4097A1725(iLocal_319, 0f);
				unk_0xB7A2078CD1C9A82F(iLocal_319, 0);
			}
			if (unk_0x95CCECA3948CFE7B(iLocal_339))
			{
				unk_0xB7A2078CD1C9A82F(iLocal_339, 0);
			}
			unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
			unk_0xB7709513BF7C1AC0(1);
			unk_0xB1DF6C0157E453DE(1);
			func_2(0, 1, 1, 0);
			iLocal_342 = 1;
			unk_0x196C7025F0C44A36(1f);
			unk_0x3ECF1E41E6ED71D8("re@construction");
			if (unk_0x844838E5D8A21336(uLocal_529))
			{
				unk_0x5CF5A880ED809DDA(uLocal_529, 0);
				unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(0f, 1065353216);
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
				unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 0);
			}
			if (unk_0x6B4865E08E90ACC5(uLocal_323))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_323);
			}
			if (unk_0x6B4865E08E90ACC5(uLocal_324))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_324);
			}
			if (unk_0x6B4865E08E90ACC5(uLocal_325))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_325);
			}
			if (unk_0x6B4865E08E90ACC5(uLocal_326))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_326);
			}
		}
		unk_0xEC0157120B9B77B0(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 1);
		unk_0xFD62177C7242216E(1f);
		unk_0x21F5FB3C8D48F7F5(3, 1);
		unk_0x9231AAF9B2E894F5();
		unk_0x80D8D1CE9B26E9A3();
	}
	func_109(&Local_537, 0);
	func_174(-1);
	unk_0xA4E0D8FD51F2A6F7();
}

void func_174(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_127())
	{
		func_178(iParam0);
		unk_0x4968FFFAEFDFD625(0, 0);
		Global_100967 = unk_0x693EBB4F13506457();
		func_177(30000);
		StringCopy(&cVar0, func_176(Global_100965, 1), 64);
		if (func_66(Global_100965) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_100964, 64);
		}
		unk_0x7CCB5DC58A4B30A1(&cVar0, Global_100962, (unk_0x693EBB4F13506457() - Global_100963), 0);
	}
	else if (unk_0xDCC86F723E82125E(Global_100972, 0) && Global_100976.f_29464.f_2 < 3)
	{
		unk_0x77621132305B133B(&Global_100972, 0);
	}
	func_175(&Global_25174);
	Global_100966 = 0;
	func_130(-1);
}

void func_175(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35662)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35661 = 0;
	Global_35663 = 0;
	Global_35700 = 15;
	Global_55656 = 0;
	Global_55657 = 0;
}

char* func_176(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_177(int iParam0)
{
	Global_36251 = (unk_0x693EBB4F13506457() + iParam0);
}

void func_178(int iParam0)
{
	func_179(iParam0, 0, func_184(iParam0));
}

void func_179(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_148();
	func_182(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_181(iParam0, &uVar0);
	Var1 = { func_180(&uVar0) };
}

struct<16> func_180(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_142(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_141(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_140(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_143(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_146(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_144(*uParam0), 64);
	return Var0;
}

void func_181(int iParam0, var uParam1)
{
	Global_100976.f_29464.f_43[iParam0] = *uParam1;
}

void func_182(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_144(*uParam0);
	iVar1 = func_146(*uParam0);
	iVar2 = func_143(*uParam0);
	iVar3 = func_142(*uParam0);
	iVar4 = func_141(*uParam0);
	iVar5 = func_140(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_139(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_139(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_183(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_154(uParam0, iParam1);
	func_153(uParam0, iParam2);
	func_152(uParam0, iParam3);
	func_150(uParam0, iParam5);
	func_151(uParam0, iParam4);
	func_149(uParam0, iParam6);
}

int func_184(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_185(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0xFBF56D2226163A9E(iParam0, &uVar0);
		if (!unk_0xB8A06E7E729EED0A(uVar1))
		{
			if (unk_0x7CBED6EFED40E7EB(uVar1) == unk_0x7CBED6EFED40E7EB("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_186(iParam0, iParam2);
	return 1;
}

void func_186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_191(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xC0ADAF0814175B68(iParam0, -1);
		if (!unk_0x95CCECA3948CFE7B(iVar0))
		{
			iVar0 = unk_0xD58C042006468C27(iParam0, -1);
		}
		if (unk_0x95CCECA3948CFE7B(iVar0) && !unk_0x2DC9BA2299B45EA6(iVar0))
		{
			if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_100976.f_1770.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_100976.f_18751.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_100976.f_18751.f_5590 = iParam1;
	Global_69091 = iParam0;
	Global_100976.f_18751.f_5588 = 1;
	func_187(iParam0, &(Global_100976.f_18751.f_5510));
}

void func_187(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		func_190(uParam1);
		uParam1->f_66 = unk_0x6D5BB810CC209E15(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC51A0D06D98180EB(iParam0), 16);
		*uParam1 = unk_0x65979062393E9301(iParam0);
		unk_0xDDA7228DE9EEDB37(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA968D095B4F299B6(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xD4344DD9CA88E065(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x9D206597121A7CCB(iParam0);
		uParam1->f_67 = unk_0x847A8FEE19DF1C6D(iParam0);
		uParam1->f_69 = unk_0xA57BDD31F092CE61(iParam0);
		uParam1->f_70 = unk_0xA6BAF129343F464F(iParam0);
		unk_0x06FD411B0A723EC9(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3B7BDBECE2C4BB25(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x890D2A0FC3456199(iParam0, 2))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 28);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 3))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 29);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 30);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 1))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xDFCA441625BB8A67(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0033BC594211C96E(iParam0);
		}
		if (unk_0xE924C2C283992918(uParam1->f_66))
		{
			if (unk_0x3D62C266C7E526AD(iParam0))
			{
				switch (unk_0xFF4BF4EFFE3F002D(iParam0))
				{
					case 2:
					case 0:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x59A0729D503ED758(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x77621132305B133B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x675A13D93AEAE680(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 9);
		}
		if (unk_0x4B05424C051859E9(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 10);
		}
		if (unk_0xEAF6FD6E4D109266(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 13);
			unk_0xE089902DB3FDA244(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xF518898EF441871E(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 12);
		}
		func_189(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDB066BBA59B7D1EC(iParam0, iVar0 + 1))
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), func_188(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x40132F2ACE5F8B93(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 11);
		}
		if (unk_0x3D32B80EFC48A92D(iParam0, "IgnoredByQuickSave") && unk_0xD903CC680ECAC86A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 27);
		}
	}
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_189(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5D42322C7DB888D0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x35C1534E81F87E96(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x1AF9344BCD6B878A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x342B167253E636DE(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_190(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_191(int iParam0)
{
	if ((((((((((!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0)) || func_204(iParam0, 0, 0)) || func_204(iParam0, 1, 0)) || func_204(iParam0, 2, 0)) || func_203(iParam0) != 145) || func_202(iParam0)) || func_201(iParam0)) || func_200(iParam0)) || func_199(iParam0)) || !func_192(unk_0x6D5BB810CC209E15(iParam0)))
	{
		if (func_201(iParam0))
		{
		}
		if (func_201(iParam0))
		{
		}
		if (func_204(iParam0, 0, 0))
		{
		}
		if (func_204(iParam0, 1, 0))
		{
		}
		if (func_204(iParam0, 2, 0))
		{
		}
		if (func_203(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_192(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_193(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x9DABB329596B1BD6(iParam0) || unk_0xE924C2C283992918(iParam0)) || unk_0xAF40E7422A6D9D80(iParam0)) || unk_0xC9E810FB9A83EF58(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_193(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x465E33AAA0C48359(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("buffalo3") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("gauntlet2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_172())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x4BE9DEC2073C9C84())
		{
			if (unk_0x0486BD07D3026E5E(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x06C32703437E5BC3(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_198() && !func_197()) && !func_196()) && !func_195()) && !func_172())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF7FE713C9F786F8C() || unk_0x68B0A67658F2D9C2()) || unk_0x62F8BA7ED89768FB())
		{
		}
		else if (!func_196())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_194(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_194(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2457144)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_4998 && !Global_262145.f_10806) && iVar1 < Global_262145.f_10807)
		{
			iVar0 = 0;
		}
	}
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11360 && iVar1 < Global_262145.f_11366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11356 && iVar1 < Global_262145.f_11362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11357 && iVar1 < Global_262145.f_11363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11358 && iVar1 < Global_262145.f_11364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11359 && iVar1 < Global_262145.f_11365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11361 && iVar1 < Global_262145.f_11367)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_195()
{
	return 0;
}

int func_196()
{
	return 1;
}

int func_197()
{
	return 1;
}

int func_198()
{
	if (unk_0x9F37711843A20114(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	uVar1 = unk_0xC51A0D06D98180EB(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xF8D041B05C3D1FD4(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_193(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88800[iVar0]))
		{
			if (Global_88800[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]) && unk_0x5D42322C7DB888D0(Global_88770[iVar0], 0))
			{
				if (Global_88770[iVar0] == iParam0 && unk_0x6D5BB810CC209E15(Global_88770[iVar0]) == unk_0x6D5BB810CC209E15(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[24]))
	{
		if (iParam0 == Global_68186.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68186.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 145;
	}
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			if (Global_88770[iVar0] == iParam0)
			{
				return Global_88780[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_204(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_205(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xDCC86F723E82125E(Global_100976.f_5863[iVar9], 0))
		{
			if (unk_0x86C606C3A2B31739(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_206()
{
	Global_14578 = 0;
	func_207();
}

void func_207()
{
	if (unk_0x2964A62922189B93())
	{
		unk_0xE9A2B98CC2F095D6();
		Global_16723 = 0;
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

