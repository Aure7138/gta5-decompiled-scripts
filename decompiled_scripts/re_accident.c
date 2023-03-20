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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	bool bLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	float fLocal_56 = 0f;
	float fLocal_57 = 0f;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	int iLocal_64 = 0;
	struct<5> Local_65[31];
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	struct<5> Local_228[14];
	float fLocal_299 = 0f;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	struct<3> Local_304 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	bool bLocal_342 = 0;
	bool bLocal_343 = 0;
	bool bLocal_344 = 0;
	int iLocal_345 = 0;
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
	var uLocal_356 = 0;
	var uLocal_357 = 16;
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
	struct<3> Local_522 = { 0, 0, 0 } ;
	struct<3> Local_525 = { 0, 0, 0 } ;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	bool bLocal_535 = 0;
	struct<33> Local_536 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_569 = 1;
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
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_50 = -1;
	iLocal_53 = -1;
	fLocal_56 = 0.5f;
	fLocal_57 = 0f;
	iLocal_222 = 1;
	fLocal_299 = 160f;
	iLocal_303 = 55000;
	Local_310 = { 30f, 30f, 5f };
	iLocal_351 = -1;
	Local_522 = { -458.4085f, -984.6459f, 22.5892f };
	Local_525 = { -458.1934f, -995.4897f, 22.7427f };
	Local_304 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x2C897F101BA20806(11))
	{
		func_173();
	}
	if (unk_0xBE59E3811BD4FDD7() > 18 || unk_0xBE59E3811BD4FDD7() < 5)
	{
		unk_0x82706E6C897B0FA1();
	}
	if (func_131(Local_304, -1, 0, 0, 0))
	{
		func_128(-1);
	}
	else
	{
		unk_0x82706E6C897B0FA1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xFEC6476AFCF2033F())
		{
			if (!func_127())
			{
				if (func_126())
				{
					func_173();
				}
			}
			unk_0x0022A74B21F0C0B9("RE_CA", 0);
			switch (iLocal_300)
			{
				case 0:
					if (func_114())
					{
						func_173();
					}
					func_108();
					func_105(&Local_536);
					break;
				
				case 1:
					func_21();
					func_105(&Local_536);
					func_12();
					break;
				
				case 2:
					if (((unk_0x538DF9E5B1DF01EB(iLocal_316) && unk_0x3EC29154A6AFBA2A(iLocal_316, 1)) && iLocal_347 < 5) && !bLocal_344)
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
	if (iLocal_533 && !iLocal_534)
	{
		unk_0x495459882382D113("RE14A_FAIL");
		iLocal_346 = 0;
		while (iLocal_346 < 11)
		{
			if (unk_0x538DF9E5B1DF01EB(uLocal_326[iLocal_346]))
			{
				unk_0x3CC3106305C40A28(uLocal_326[iLocal_346], 0);
			}
			iLocal_346++;
		}
		if (!unk_0xE44A580B551C3645(iLocal_318))
		{
			unk_0xBCA53A1278653F4C(iLocal_318, 0f);
			unk_0x3CC3106305C40A28(iLocal_318, 0);
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_338))
		{
			unk_0x3CC3106305C40A28(iLocal_338, 0);
		}
		unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
		unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
		unk_0xA0ED52A12ED3E5E5(1);
		unk_0x6853F2DD1CFD3CA2(1);
		func_2(0, 1, 1, 0);
		iLocal_341 = 1;
		unk_0x4A4C49D89D07255A(1f);
		unk_0xB845ECB6BD2996BD("re@construction");
		if (unk_0xBAB691F99A2A7346(uLocal_528))
		{
			unk_0x27A62B1C26941E13(uLocal_528, 0);
			unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
			unk_0x20D6E0EA145DF751(0f);
			unk_0x60365B850FB7354F(0f, 1065353216);
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
			unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), 0);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_322))
		{
			unk_0xB6FB9702660D84F6(&uLocal_322);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_323))
		{
			unk_0xB6FB9702660D84F6(&uLocal_323);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_324))
		{
			unk_0xB6FB9702660D84F6(&uLocal_324);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_325))
		{
			unk_0xB6FB9702660D84F6(&uLocal_325);
		}
		iLocal_534 = 1;
	}
	if (unk_0x538DF9E5B1DF01EB(uLocal_326[0]) || unk_0x538DF9E5B1DF01EB(uLocal_326[1]))
	{
		if (!unk_0x7A98E0DD2E6FAB7A(Local_307 + Vector(20f, 0f, 0f), 30f) && !unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_307, 80f, 80f, 80f, 0, 1, 0))
		{
			func_173();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x31F1896E6453B935(unk_0x1788E93557766241());
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 1);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 1);
		func_10(1);
		unk_0xB0F2C1CA020DA7DA();
		unk_0xADD1FEC2646B4ECF();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xBE029393332523D7())
			{
				unk_0x0D68C13151B68364(0);
			}
			if (!func_9())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_8(1, iParam3, iParam2);
		Global_54764 = 1;
		Global_67069 = 1;
		Global_68323 = 1;
	}
	else
	{
		func_10(0);
		unk_0x5C6ECA43D8ACED5D();
		Global_54764 = 0;
		if (bParam1)
		{
			unk_0xAB5770BCC9EDAC2C();
		}
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 0);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 0);
		func_8(0, iParam3, iParam2);
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && !func_3(unk_0x1788E93557766241()))
		{
			unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 0);
		}
		Global_68323 = 0;
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
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_4()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

bool func_5(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_6(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
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
	if (Global_1315869[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_7()
{
	return Global_1312729;
}

int func_8(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x24547C720F3E6709() != iParam0 && uParam2)
		{
			unk_0x3EA9937AF099576F(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_9()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 13);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 13);
	}
}

void func_11()
{
	if (iLocal_351 == -1)
	{
		iLocal_351 = unk_0x09560C7DE2A384BD() + 5000;
	}
	if (unk_0x09560C7DE2A384BD() > iLocal_351)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_318))
		{
			unk_0x3CC3106305C40A28(iLocal_318, 0);
			unk_0x3899C3FF414D2D90(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (!unk_0xE44A580B551C3645(iLocal_318))
			{
				unk_0x1BA44265D2A4897B(iLocal_318, 1, 0);
			}
		}
	}
}

void func_12()
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
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
	if (iLocal_221 == 0)
	{
		if (unk_0x46D7E1C1A4FF21DD(&Var1, Local_228[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_228.f_0)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + unk_0x4970185D4CC64616(Local_228[(iVar0 - 1) /*5*/], Local_228[iVar0 /*5*/], 1));
				}
				if (Local_228[iVar0 /*5*/].f_4)
				{
					if (unk_0x46D7E1C1A4FF21DD(&Var1, Local_228[iVar0 /*5*/]))
					{
						fVar6 = unk_0x4970185D4CC64616(Local_228[iVar0 /*5*/], Var1, 1);
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
			if (fVar7 < fLocal_56)
			{
				iVar5 = iVar5;
				iLocal_221 = 1;
				iLocal_223 = unk_0x09560C7DE2A384BD();
				fVar8 = fVar8;
				Local_61 = { Local_228[iVar5 /*5*/] };
				iLocal_64 = iVar5;
				iLocal_224 = iVar5 * 2;
				iLocal_226 = iLocal_224;
				iLocal_227 = iLocal_224;
				if (iLocal_227 < 0)
				{
					iLocal_227 = 0;
				}
				if (iLocal_226 >= Local_228.f_0 * 2)
				{
					iLocal_226 = (Local_228.f_0 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_221 == 1)
	{
		unk_0xFFC0FB8193E7FDFC();
		fVar9 = (unk_0xBBDA792448DB5A89((unk_0x09560C7DE2A384BD() - iLocal_223)) / fLocal_299);
		iVar10 = (unk_0xF34EE736CF047844((fVar9 / (1f / 2f))) - 1);
		iVar11 = (iLocal_224 + iVar10);
		iVar12 = (iLocal_224 - iVar10);
		if (iVar11 >= 28)
		{
			iVar11 = 27;
		}
		if (iVar12 < 0)
		{
			iVar12 = 0;
		}
		if (iVar11 > iLocal_226)
		{
			iVar0 = iLocal_226 + 1;
			while (iVar0 <= iVar11)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_228.f_0)
				{
					if (Local_228[iVar13 /*5*/].f_4)
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
			iLocal_226 = iVar11;
		}
		if (iVar12 < iLocal_227)
		{
			iVar0 = (iLocal_227 - 1);
			while (iVar0 >= iVar12)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_228.f_0)
				{
					if (Local_228[iVar13 /*5*/].f_4)
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
			iLocal_227 = iVar12;
		}
		iVar0 = 0;
		while (iVar0 < Local_65.f_0)
		{
			if ((unk_0x09560C7DE2A384BD() - Local_65[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0x18EF76BF7AC4B5DF(Local_65[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((unk_0x09560C7DE2A384BD() - Local_65[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0xA7C71747D4E91ECD(Local_65[iVar0 /*5*/]);
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
				func_15(Local_228[(iParam0 / 2) /*5*/] + Local_228[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_57, fLocal_57, fLocal_57), iParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_15(Local_228[(iParam0 / 2) /*5*/] + Vector(fLocal_57, fLocal_57, fLocal_57), iParam1);
		}
	}
}

void func_15(struct<3> Param0, int iParam3)
{
	if (iLocal_222 == 0)
	{
		iParam3 = 0;
	}
	unk_0xA7C71747D4E91ECD(Local_65[iLocal_225 /*5*/]);
	if (Local_65[iLocal_225 /*5*/].f_4 != 0)
	{
		unk_0x18EF76BF7AC4B5DF(Local_65[iLocal_225 /*5*/].f_1, 0.4f, 1f);
	}
	Local_65[iLocal_225 /*5*/].f_4 = unk_0x09560C7DE2A384BD();
	Local_65[iLocal_225 /*5*/].f_1 = { Param0 };
	Local_65[iLocal_225 /*5*/] = unk_0xDE188809A4EE8D47(Param0, uLocal_54, iParam3);
	iLocal_225++;
	if (iLocal_225 >= 31)
	{
		iLocal_225 = 0;
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
	
	if (bLocal_49)
	{
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0xF49761626882E968(0, 24) && unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
			{
				if (iLocal_55 == 0)
				{
					unk_0xA01DA3D318F1C532(2f, 8f, 4);
					iLocal_55 = unk_0x09560C7DE2A384BD() + 250;
				}
				if (unk_0x09560C7DE2A384BD() > iLocal_55)
				{
					if (!bLocal_45)
					{
						fVar4 = 9999.9f;
						Local_58 = { func_18() };
						iVar0 = 0;
						while (iVar0 < Local_228.f_0)
						{
							if (unk_0x5660C8AFDD9C1721(Local_228[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0x4970185D4CC64616(Local_58, unk_0x19E074E292E9B9F6(Local_228[iVar0 /*5*/].f_3), 1);
								fVar3 = unk_0x4970185D4CC64616(Local_228[iVar0 /*5*/], unk_0x19E074E292E9B9F6(Local_228[iVar0 /*5*/].f_3), 1);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_228[iVar0 /*5*/] = { Local_58 };
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
							if (iLocal_51 != -1)
							{
								if (unk_0x045E73D0141F51B4((iLocal_52 - iVar5)) > 1)
								{
									iLocal_52 = -1;
								}
								if (iLocal_52 == -1)
								{
									iLocal_52 = iLocal_51;
								}
								if (unk_0x045E73D0141F51B4((iLocal_52 - iVar5)) < 3 && unk_0x045E73D0141F51B4((iLocal_52 - iVar5)) > 0)
								{
									if (iLocal_52 < iVar5)
									{
										iVar6 = iLocal_52;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0x5660C8AFDD9C1721(Local_228[iVar6 /*5*/].f_3))
											{
												if (unk_0x5138EA3D543A08CC(Local_228[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xE30CC26FBB1F8075(Local_228[iVar6 /*5*/].f_3, 0);
													Local_228[iVar6 /*5*/].f_4 = 1;
													iLocal_53 = (iLocal_53 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_52)
										{
											if (unk_0x5660C8AFDD9C1721(Local_228[iVar6 /*5*/].f_3))
											{
												if (unk_0x5138EA3D543A08CC(Local_228[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xE30CC26FBB1F8075(Local_228[iVar6 /*5*/].f_3, 0);
													Local_228[iVar6 /*5*/].f_4 = 1;
													iLocal_53 = (iLocal_53 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_52 = iLocal_51;
								}
								if (iVar5 == 0)
								{
									if (unk_0x5660C8AFDD9C1721(Local_228[iVar5 /*5*/].f_3))
									{
										if (unk_0x5138EA3D543A08CC(Local_228[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xE30CC26FBB1F8075(Local_228[iVar5 /*5*/].f_3, 0);
											Local_228[iVar5 /*5*/].f_4 = 1;
											iLocal_53 = (iLocal_53 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (unk_0x5660C8AFDD9C1721(Local_228[iVar5 /*5*/].f_3))
									{
										if (unk_0x5138EA3D543A08CC(Local_228[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xE30CC26FBB1F8075(Local_228[iVar5 /*5*/].f_3, 0);
											Local_228[iVar5 /*5*/].f_4 = 1;
											iLocal_53 = (iLocal_53 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_17(Local_228[iVar5 + 1 /*5*/]))
									{
										if (unk_0x5660C8AFDD9C1721(Local_228[iVar5 /*5*/].f_3))
										{
											if (unk_0x5138EA3D543A08CC(Local_228[iVar5 /*5*/].f_3) > 0)
											{
												unk_0xE30CC26FBB1F8075(Local_228[iVar5 /*5*/].f_3, 0);
												Local_228[iVar5 /*5*/].f_4 = 1;
												iLocal_53 = (iLocal_53 - 1);
											}
										}
									}
								}
							}
							iLocal_51 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_51 = -1;
				iLocal_52 = -1;
				iLocal_55 = 0;
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
	
	iVar0 = unk_0x67DE942190116DCB(unk_0xA16EC202D9D35357());
	if (unk_0x538DF9E5B1DF01EB(iVar0))
	{
		iVar1 = unk_0xF8AE6180328ED522(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { unk_0x9950C464D8A36D45(iVar0, iVar1) };
		Var2 = { unk_0xCC6B7A025E72F529(Var2, unk_0xD1613577C809E98B(iVar0), 0.35f, 0f, -0.15f) };
		unk_0x21B0D803C4C9C45E(Var2, &uVar8, 0);
		Var5 = { Var2.f_0, Var2.f_1, uVar8 };
	}
	return Var5;
}

void func_19()
{
	int iVar0;
	
	if (iLocal_47)
	{
		if (iLocal_221)
		{
			iVar0 = 0;
			while (iVar0 < Local_65.f_0)
			{
				unk_0xA7C71747D4E91ECD(Local_65[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_47 = 0;
		iLocal_221 = 1;
		iLocal_223 = unk_0x09560C7DE2A384BD();
		iVar0 = 0;
		while (iVar0 < Local_228.f_0)
		{
			Local_228[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_50 != -1)
		{
			iLocal_227 = iLocal_50;
			iLocal_226 = iLocal_50;
			iLocal_224 = iLocal_50;
		}
		else
		{
			iLocal_227 = -1;
			iLocal_226 = -1;
			iLocal_224 = iLocal_50;
		}
		iLocal_225 = 1;
	}
}

void func_20()
{
	if (!iLocal_48)
	{
		iLocal_48 = 1;
	}
}

void func_21()
{
	switch (iLocal_301)
	{
		case 0:
			unk_0x45B7DFCE888B2A02("CONSTRUCTION_ACCIDENT_1", false);
			unk_0x3D28909AF30D70F4("re@construction");
			if (Local_536.f_32 <= 0)
			{
				Local_536.f_32 = unk_0xA152BE858C442B26();
			}
			func_104(&Local_536, joaat("s_m_m_dockwork_01"));
			func_104(&Local_536, joaat("prop_generator_01a"));
			func_104(&Local_536, joaat("p_amb_phone_01"));
			func_101(&Local_536);
			if ((unk_0x45B7DFCE888B2A02("CONSTRUCTION_ACCIDENT_1", false) && unk_0x6C47E32491756A1A("re@construction")) && func_97(&Local_536))
			{
				if (unk_0xECFECDAD51A6184F(iLocal_318, 0))
				{
					iLocal_316 = unk_0x793482A351850A4F(iLocal_318, 26, joaat("s_m_m_dockwork_01"), -1, 1, 1);
					unk_0x42544C0CC4949BD5(iLocal_316, 0, 1, 0, 0);
					unk_0x42544C0CC4949BD5(iLocal_316, 3, 1, 1, 0);
					unk_0x42544C0CC4949BD5(iLocal_316, 4, 0, 1, 0);
					unk_0x42544C0CC4949BD5(iLocal_316, 8, 0, 0, 0);
					unk_0x5B5659C49032B96C(iLocal_316, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, 0, 0, 0);
					iLocal_339 = unk_0x8AC4394F3C9173EE(joaat("p_amb_phone_01"), -455.6561f, -985.8071f, 22.4868f, 1, 1, 0);
					unk_0xEA054561294AEC10(joaat("p_amb_phone_01"));
					unk_0x07CDE0236CD8AAC8(iLocal_339, iLocal_316, unk_0x879EC196F941E547(iLocal_316, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x15EBFEEB77BF84B7(iLocal_316, 17, 1);
					unk_0xC6A4A7E19F5F4919(iLocal_316, 1);
					unk_0x2C4E82CF88213975(iLocal_316, 1);
					unk_0xA8BC819B54F5B824(iLocal_316, 0);
					func_96(&uLocal_357, 3, iLocal_316, "RECONACWorker", 0, 1);
					unk_0x3E99D575EE07FDB3(iLocal_316, "S_M_Y_GENERICWORKER_01_WHITE_01");
					uLocal_317 = unk_0x6F9DE0DE8363ADF1(26, joaat("s_m_m_dockwork_01"), -462.2982f, -978.3272f, 65f, 221.4041f, 1, 1);
					unk_0x2C4E82CF88213975(uLocal_317, 1);
					unk_0xDD56EF930C7A5863(iLocal_317, 1);
					unk_0x3CC3106305C40A28(iLocal_317, 1);
					unk_0x07F91F940B074177(iLocal_316, joaat("empty"));
					unk_0x603C978B2372EF29(joaat("empty"), 24);
					unk_0x603C978B2372EF29(joaat("empty"), 46);
					unk_0x603C978B2372EF29(joaat("empty"), 61);
					unk_0x603C978B2372EF29(joaat("empty"), 136);
					unk_0x603C978B2372EF29(joaat("empty"), 55);
					iLocal_338 = unk_0x8AC4394F3C9173EE(joaat("prop_generator_01a"), Local_525.f_0, (Local_525.f_1 + 0.5f), (Local_525.f_2 - 0.25f), 1, 1, 0);
					unk_0x34639238667C4381(iLocal_338, 75f);
					unk_0x67565210B706E956(iLocal_338, 0, 1, 1, 0, 0, 0, 0, 0);
					uLocal_532 = unk_0xA61A77F0B90645BB("scr_sparking_generator", iLocal_338, 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					unk_0x3CC3106305C40A28(iLocal_338, 1);
					func_95(&uLocal_357, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_350 = unk_0x09560C7DE2A384BD();
					iLocal_301 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_340)
			{
				func_90();
			}
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (!iLocal_341)
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_316))
					{
						if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, 0, 1, 0))
						{
							if (!unk_0xE44A580B551C3645(iLocal_318))
							{
								if (!unk_0x5660C8AFDD9C1721(uLocal_323))
								{
									uLocal_323 = func_89(iLocal_318, 0, 0);
								}
							}
						}
						if (unk_0xBF8ADDCADFC4691E(iLocal_316, unk_0xA16EC202D9D35357(), 1) || unk_0xBF8ADDCADFC4691E(iLocal_318, unk_0xA16EC202D9D35357(), 1))
						{
							unk_0x3CC3106305C40A28(iLocal_318, 0);
							unk_0x937785D9C1929236(iLocal_316);
							unk_0x6D98AA46076A68BE(&uLocal_356);
							unk_0xBB5AA994E06B28E2(0, 0, 0);
							unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 150f, -1, 0, 0);
							unk_0x963BB7C99350D827(uLocal_356);
							unk_0x0891776D0327B77A(iLocal_316, uLocal_356);
							unk_0x2AF68ED52DC74B7D(&uLocal_356);
							func_88();
						}
						unk_0x939DA7EBCC6588FF(joaat("prop_ld_pipe_single_01"));
						if ((((unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, 0, 1, 0) && !unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357())) && !unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357())) && func_87(1, 0, 1)) && unk_0x5494F37F35C1D7D7(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_127())
							{
								if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
								{
									iLocal_321 = unk_0xB49BA83A5C224F40();
								}
								func_77(1);
							}
							iLocal_340 = 1;
						}
					}
					else
					{
						func_88();
					}
				}
				else
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_316))
					{
						if (unk_0x202EF5D8203705EF(iLocal_316, 0))
						{
							if (!unk_0xE44A580B551C3645(iLocal_318) && !unk_0x5660C8AFDD9C1721(uLocal_323))
							{
								uLocal_323 = func_89(iLocal_318, 0, 0);
							}
						}
						else if (!unk_0x5660C8AFDD9C1721(uLocal_322))
						{
							if (unk_0x5660C8AFDD9C1721(uLocal_323))
							{
								unk_0xB6FB9702660D84F6(&uLocal_323);
							}
							uLocal_322 = func_74(iLocal_316, 0, 145);
						}
					}
					func_45();
					func_42();
					if (!unk_0x2DE0B96E966FD817(iLocal_316))
					{
						if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_316, Local_310, 0, 1, 0))
						{
							if (!bLocal_342)
							{
								func_41();
							}
						}
					}
					else
					{
						if (unk_0x5660C8AFDD9C1721(uLocal_322))
						{
							unk_0xB6FB9702660D84F6(&uLocal_322);
						}
						if (unk_0x5660C8AFDD9C1721(uLocal_323))
						{
							unk_0xB6FB9702660D84F6(&uLocal_323);
						}
						if (unk_0x5660C8AFDD9C1721(uLocal_324))
						{
							unk_0xB6FB9702660D84F6(&uLocal_324);
						}
						if (unk_0x2DE0B96E966FD817(iLocal_316) || unk_0xE44A580B551C3645(iLocal_318))
						{
							func_88();
						}
					}
					if (!unk_0xECFECDAD51A6184F(iLocal_319, 0))
					{
						if (unk_0x5660C8AFDD9C1721(uLocal_324))
						{
							unk_0xB6FB9702660D84F6(&uLocal_324);
							if (!unk_0xE44A580B551C3645(iLocal_318) && !unk_0x5660C8AFDD9C1721(uLocal_323))
							{
								uLocal_323 = func_89(iLocal_318, 0, 0);
							}
						}
					}
				}
				if (unk_0xECFECDAD51A6184F(iLocal_319, 0))
				{
					if (iLocal_352 >= 3)
					{
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0x51E5BE292F56EC84(unk_0xA16EC202D9D35357(), joaat("bulldozer")))
						{
							if (unk_0x5660C8AFDD9C1721(uLocal_324))
							{
								unk_0xB6FB9702660D84F6(&uLocal_324);
								if (!unk_0x2DE0B96E966FD817(iLocal_316) && !unk_0xE44A580B551C3645(iLocal_318))
								{
									if (unk_0x202EF5D8203705EF(iLocal_316, 0) && !unk_0x5660C8AFDD9C1721(uLocal_323))
									{
										uLocal_323 = func_89(iLocal_318, 0, 0);
									}
								}
							}
						}
						else if (!unk_0x2DE0B96E966FD817(iLocal_316) && !unk_0xE44A580B551C3645(iLocal_318))
						{
							if (unk_0x202EF5D8203705EF(iLocal_316, 0) && unk_0x5660C8AFDD9C1721(uLocal_323))
							{
								unk_0xB6FB9702660D84F6(&uLocal_323);
								if (!unk_0x5660C8AFDD9C1721(uLocal_324))
								{
									uLocal_324 = func_89(iLocal_319, 0, 0);
								}
							}
						}
					}
				}
				if (!unk_0x2DE0B96E966FD817(iLocal_316))
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if (unk_0x51E5BE292F56EC84(unk_0xA16EC202D9D35357(), joaat("bulldozer")))
						{
							iLocal_346 = 0;
							while (iLocal_346 < 11)
							{
								if (unk_0x538DF9E5B1DF01EB(uLocal_326[iLocal_346]))
								{
									unk_0x3CC3106305C40A28(uLocal_326[iLocal_346], 0);
								}
								iLocal_346++;
							}
						}
					}
				}
				if (!unk_0xE44A580B551C3645(iLocal_318))
				{
					if (unk_0x042EE007A41C88D4(iLocal_318))
					{
						iLocal_346 = 0;
						while (iLocal_346 < 11)
						{
							if (unk_0x538DF9E5B1DF01EB(uLocal_326[iLocal_346]))
							{
								unk_0x3CC3106305C40A28(uLocal_326[iLocal_346], 0);
							}
							iLocal_346++;
						}
						unk_0x3CC3106305C40A28(iLocal_318, 0);
						if (!unk_0x2DE0B96E966FD817(iLocal_316))
						{
							if (unk_0x202EF5D8203705EF(iLocal_316, 0))
							{
								unk_0x2C4E82CF88213975(iLocal_316, 1);
								unk_0xA1478EBA54DDE31B(iLocal_316, 116, 0);
								unk_0xA1478EBA54DDE31B(iLocal_316, 29, 0);
								if (!bLocal_344)
								{
									func_39();
									unk_0x4EDE34FBADD967A6(0);
									func_23(&uLocal_357, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (func_22())
									{
										unk_0x4EDE34FBADD967A6(0);
									}
									bLocal_344 = true;
								}
								if (!unk_0x2DE0B96E966FD817(iLocal_316))
								{
									unk_0x4C31C3561F937348(iLocal_316, 99);
								}
								if (!unk_0xE44A580B551C3645(iLocal_318))
								{
									unk_0x3CC3106305C40A28(iLocal_318, 0);
									unk_0x3899C3FF414D2D90(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
									unk_0x1BA44265D2A4897B(iLocal_318, 1, 0);
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
	if (Global_15693 != 0 || unk_0xD47B332729054512())
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
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_24(sParam2, iParam3, 0);
}

int func_24(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
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
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_35();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_28();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
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
				switch (Global_14394.f_1)
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_26();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_25();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
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
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_26()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_29();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

int func_29()
{
	func_30();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_30()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_33(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_32(unk_0xA16EC202D9D35357());
			if (func_31(iVar0) && (!func_34(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_31(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_34(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_37()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

void func_39()
{
	Global_14559 = 0;
	func_40();
}

void func_40()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
	}
}

void func_41()
{
	switch (iLocal_352)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(iLocal_316))
			{
				if ((unk_0x09560C7DE2A384BD() - iLocal_350) > 3000)
				{
					func_23(&uLocal_357, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_354 = unk_0x09560C7DE2A384BD();
					iLocal_350 = unk_0x09560C7DE2A384BD();
					iLocal_352 = 2;
				}
			}
			break;
		
		case 1:
			if (!unk_0x2DE0B96E966FD817(iLocal_316))
			{
				if ((unk_0x09560C7DE2A384BD() - iLocal_350) > 3000)
				{
					iLocal_350 = unk_0x09560C7DE2A384BD();
					iLocal_352++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x2DE0B96E966FD817(iLocal_316))
			{
				if ((unk_0x09560C7DE2A384BD() - iLocal_350) > 5000 && !func_22())
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						iLocal_355 = unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0));
					}
					if (unk_0x202EF5D8203705EF(iLocal_316, 0))
					{
						if (unk_0xECFECDAD51A6184F(iLocal_319, 0))
						{
							if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
							{
								if (!unk_0x51E5BE292F56EC84(unk_0xA16EC202D9D35357(), joaat("bulldozer")))
								{
									if (!unk_0x5660C8AFDD9C1721(uLocal_324))
									{
										uLocal_324 = func_89(iLocal_319, 0, 0);
										if (unk_0x5660C8AFDD9C1721(uLocal_323))
										{
											unk_0xB6FB9702660D84F6(&uLocal_323);
										}
									}
								}
							}
							else if (!unk_0x5660C8AFDD9C1721(uLocal_324))
							{
								uLocal_324 = func_89(iLocal_319, 0, 0);
								if (unk_0x5660C8AFDD9C1721(uLocal_323))
								{
									unk_0xB6FB9702660D84F6(&uLocal_323);
								}
							}
						}
					}
					if (iLocal_355 == joaat("bulldozer"))
					{
						func_23(&uLocal_357, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						func_23(&uLocal_357, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_350 = unk_0x09560C7DE2A384BD();
					iLocal_352++;
				}
			}
			break;
		
		case 3:
			if (unk_0x09560C7DE2A384BD() - iLocal_350) > unk_0x444ECD635D5FD45F(5000, 8000)
			{
				if (!func_22())
				{
					func_23(&uLocal_357, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_350 = unk_0x09560C7DE2A384BD();
				}
			}
			break;
	}
}

void func_42()
{
	switch (iLocal_348)
	{
		case 0:
			unk_0xE9AFADAE1E185F4E(Local_525 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x2C2C7EF003D13CF5(1f);
			unk_0x694285416F9471B0(Local_522, 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x694285416F9471B0(Local_522 - Vector(0f, 4f, 0f), 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x694285416F9471B0(Local_522 - Vector(0f, 8f, 0f), 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x694285416F9471B0(Local_525, 1f);
			unk_0xC7051255F8203008();
			iLocal_354 = unk_0x09560C7DE2A384BD();
			iLocal_348 = 2;
			break;
		
		case 2:
			if ((unk_0x09560C7DE2A384BD() - iLocal_354) > iLocal_303 || func_44())
			{
				if (unk_0xC9C004EF71A36FBC(uLocal_532))
				{
					unk_0x7B2EA00855157A0A(uLocal_532, 0);
				}
				func_43();
				if (!bLocal_344)
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_316) && !unk_0xE44A580B551C3645(iLocal_318))
					{
						if (!unk_0x033DAC0BAE829DDB(iLocal_316, iLocal_318, -1, 0, 0) && !unk_0x033DAC0BAE829DDB(iLocal_316, iLocal_318, 0, 0, 0))
						{
							func_39();
							unk_0x4EDE34FBADD967A6(0);
							func_23(&uLocal_357, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_344 = true;
						}
					}
				}
				unk_0x24469800558B4973(3, 1);
				unk_0xCAC2F9FD175CE6A2(80f);
				unk_0x01C9658D4C7F66D5(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				unk_0xE37B6C5305D21FE9(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_531);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_348 = 3;
			}
			break;
		
		case 3:
			if (unk_0x538DF9E5B1DF01EB(iLocal_318))
			{
				if (!unk_0x042EE007A41C88D4(iLocal_318))
				{
				}
			}
			if (iLocal_347 < 2)
			{
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (!unk_0xE44A580B551C3645(iLocal_318))
					{
						unk_0x3CC3106305C40A28(iLocal_318, 0);
						unk_0x3899C3FF414D2D90(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0x1BA44265D2A4897B(iLocal_318, 1, 0);
					}
				}
			}
			break;
	}
}

void func_43()
{
	iLocal_47 = 1;
}

int func_44()
{
	if (iLocal_221 == 1)
	{
		return 1;
	}
	return 0;
}

void func_45()
{
	struct<3> Var0;
	
	switch (iLocal_347)
	{
		case 0:
			if (iLocal_352 >= 2)
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_316) && !unk_0xE44A580B551C3645(iLocal_318))
				{
					if (!unk_0x202EF5D8203705EF(iLocal_316, 0))
					{
						iLocal_347++;
					}
					unk_0xD4C90F16EBBFE620(&iLocal_339);
					if (unk_0x033DAC0BAE829DDB(iLocal_316, iLocal_318, -1, 0, 0) || unk_0x033DAC0BAE829DDB(iLocal_316, iLocal_318, 0, 0, 0))
					{
						if (unk_0x033DAC0BAE829DDB(iLocal_316, iLocal_318, -1, 0, 0))
						{
							bLocal_343 = true;
							Local_313 = { unk_0xBF8499F46AD9093A(iLocal_318, 0) + Vector(0f, -1f, -3f) };
						}
						else
						{
							Local_313 = { unk_0xBF8499F46AD9093A(iLocal_318, 0) + Vector(0f, 1.5f, -3f) };
						}
						if (unk_0x965556ACF6A83973(unk_0xB49BA83A5C224F40(), Local_313, 4.2f, 4f, 5f, 0, 1, 0))
						{
							if (!bLocal_342)
							{
								func_39();
								unk_0x4EDE34FBADD967A6(0);
								func_23(&uLocal_357, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
								bLocal_342 = true;
							}
						}
						else
						{
							bLocal_342 = true;
							iLocal_347++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x2DE0B96E966FD817(iLocal_316) && !unk_0xE44A580B551C3645(iLocal_318))
			{
				if (!unk_0xE44A580B551C3645(iLocal_319))
				{
					unk_0x67565210B706E956(iLocal_319, 0, 1, 1, 0, 0, 0, 0, 0);
				}
				unk_0x67565210B706E956(iLocal_316, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0x3CC3106305C40A28(iLocal_318, 0);
				unk_0x6D98AA46076A68BE(&uLocal_356);
				if (bLocal_343)
				{
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 3000, 0, 2);
					unk_0xBB5AA994E06B28E2(0, 0, 0);
					unk_0x353F4B963593F141(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				else
				{
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 3000, 0, 2);
					unk_0xBB5AA994E06B28E2(0, 0, 0);
					unk_0x353F4B963593F141(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				unk_0x963BB7C99350D827(uLocal_356);
				unk_0x0891776D0327B77A(iLocal_316, uLocal_356);
				unk_0x2AF68ED52DC74B7D(&uLocal_356);
				unk_0x2686393074E14730(iLocal_316, 1);
				iLocal_350 = unk_0x09560C7DE2A384BD();
				iLocal_347++;
			}
			break;
		
		case 2:
			if (!unk_0x2DE0B96E966FD817(iLocal_316))
			{
				if ((unk_0x09560C7DE2A384BD() - iLocal_350) > 500 && !unk_0x202EF5D8203705EF(iLocal_316, 0))
				{
					iLocal_303 = 0;
					if (unk_0xECFECDAD51A6184F(iLocal_318, 0))
					{
					}
					func_39();
					unk_0x4EDE34FBADD967A6(0);
					func_23(&uLocal_357, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_350 = unk_0x09560C7DE2A384BD();
					iLocal_347++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(iLocal_316))
			{
				if (unk_0x965556ACF6A83973(iLocal_316, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, 0, 1, 0) || (unk_0x09560C7DE2A384BD() - iLocal_350) > 10000)
				{
					func_23(&uLocal_357, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_347++;
				}
			}
			break;
		
		case 4:
			if (!unk_0x2DE0B96E966FD817(iLocal_316))
			{
				if (unk_0x965556ACF6A83973(iLocal_316, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, 0, 1, 0) || (unk_0x09560C7DE2A384BD() - iLocal_350) > 10000)
				{
					if (!unk_0xE44A580B551C3645(iLocal_318))
					{
						unk_0x3CC3106305C40A28(iLocal_318, 0);
						unk_0x3899C3FF414D2D90(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0x1BA44265D2A4897B(iLocal_318, 1, 0);
					}
					iLocal_347++;
				}
			}
			break;
		
		case 5:
			if ((unk_0x09560C7DE2A384BD() - iLocal_350) > 3000)
			{
				if (unk_0xECFECDAD51A6184F(iLocal_318, 0))
				{
					unk_0x3CC3106305C40A28(iLocal_318, 0);
					unk_0x3899C3FF414D2D90(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					unk_0x1BA44265D2A4897B(iLocal_318, 1, 0);
				}
				if (!unk_0x2DE0B96E966FD817(iLocal_316))
				{
					unk_0x495459882382D113("RE14A_SAFE");
					if (!unk_0xE44A580B551C3645(iLocal_319))
					{
						unk_0x67565210B706E956(iLocal_319, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					unk_0x67565210B706E956(iLocal_316, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x551186C5C186D1DC(iLocal_316, 1);
					unk_0xA8BC819B54F5B824(iLocal_316, 1);
					unk_0xC6A4A7E19F5F4919(iLocal_316, 0);
					unk_0x2C4E82CF88213975(iLocal_316, 0);
					unk_0x07F91F940B074177(iLocal_316, joaat("DEFAULT"));
					unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
					unk_0x6D98AA46076A68BE(&uLocal_356);
					unk_0x5B5659C49032B96C(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0f, 0, 0, 0);
					unk_0x3904B87E2745423A(uLocal_356, 1);
					unk_0x963BB7C99350D827(uLocal_356);
					unk_0x0891776D0327B77A(iLocal_316, uLocal_356);
					unk_0x2AF68ED52DC74B7D(&uLocal_356);
				}
				unk_0x01C9658D4C7F66D5(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				unk_0xE37B6C5305D21FE9(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_531);
				iLocal_350 = unk_0x09560C7DE2A384BD();
				iLocal_347++;
			}
			break;
		
		case 6:
			if (!unk_0x2DE0B96E966FD817(iLocal_316))
			{
				if ((unk_0x09560C7DE2A384BD() - iLocal_350) > 6400)
				{
					Var0 = { -477.2774f, -990.0638f, 23.5497f };
					if (unk_0x538DF9E5B1DF01EB(unk_0xB49BA83A5C224F40()))
					{
						if (unk_0x965556ACF6A83973(unk_0xB49BA83A5C224F40(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0x538DF9E5B1DF01EB(iLocal_321))
					{
						if (unk_0x965556ACF6A83973(iLocal_321, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0x538DF9E5B1DF01EB(iLocal_319))
					{
						if (unk_0x965556ACF6A83973(iLocal_319, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					unk_0x6D98AA46076A68BE(&uLocal_356);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 3000, 2052, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
					unk_0x28C19381C8D92BD5(0, "WORLD_HUMAN_PICNIC", Var0, 304.8172f, 0, 1, 0);
					unk_0x963BB7C99350D827(uLocal_356);
					unk_0x0891776D0327B77A(iLocal_316, uLocal_356);
					unk_0x2AF68ED52DC74B7D(&uLocal_356);
					func_23(&uLocal_357, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
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
	iLocal_300 = 2;
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
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

bool func_49(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
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
			Global_97439.f_28192.f_2 = 3;
		}
		if (func_57(iParam0, iParam1) != 322)
		{
			func_52(func_57(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97427 = iParam1;
		if (Global_97425 == 0)
		{
			if (((Global_97428 == 1 || Global_97428 == 5) || Global_97428 == 11) || Global_97428 == 25)
			{
				func_51(2);
			}
			else if ((Global_97428 == 26 || Global_97428 == 8) || Global_97428 == 17)
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
	Global_97425 = iParam0;
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
	if (Global_97439.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97439.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97439.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97439.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97439.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97439.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_97175 = 0;
	Global_97176 = 0;
	Global_97177 = 0;
	Global_97178 = 0;
	Global_97179 = 0;
	Global_97180 = 0;
	Global_97181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97439.f_8448.f_3853;
	Global_97439.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97439.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97439.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97175++;
					fVar1 = (fVar1 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97176++;
					fVar2 = (fVar2 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97177++;
					fVar3 = (fVar3 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97178++;
					fVar4 = (fVar4 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97179++;
					fVar5 = (fVar5 + (Global_97439.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97180++;
					fVar6 = (fVar6 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97181++;
					fVar7 = (fVar7 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97158 > 0)
	{
		if (Global_97175 == Global_97158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97159 > 0)
	{
		if (Global_97176 == Global_97159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97160 > 0)
	{
		if (Global_97177 == Global_97160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97161 > 0)
	{
		if (Global_97178 == Global_97161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97162 > 0)
	{
		if (((Global_97179 == Global_97162 || (Global_97162 * 10 / Global_97179) < 41) || Global_97179 > Global_97165) || Global_97179 == Global_97165)
		{
			if (!unk_0x889D01384B54BCE3(Global_97439.f_8448.f_3856, 14))
			{
				if (Global_97179 == Global_97162)
				{
					unk_0xC655DD24DA1F5D9D(joaat("num_rndevents_completed"), Global_97162, 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97163 > 0)
	{
		if (Global_97180 == Global_97163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97164 > 0)
	{
		if (Global_97181 == Global_97164)
		{
			fVar7 = 5f;
		}
	}
	Global_97439.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97179 > Global_97165 || Global_97179 == Global_97165)
	{
		iVar9 = Global_97165;
	}
	else
	{
		iVar9 = Global_97179;
	}
	unk_0x680350124CC21957(joaat("num_missions_completed"), Global_97175, 1);
	unk_0x680350124CC21957(joaat("num_missions_available"), Global_97158, 1);
	unk_0x680350124CC21957(joaat("num_minigames_completed"), Global_97176, 1);
	unk_0x680350124CC21957(joaat("num_minigames_available"), Global_97159, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_completed"), Global_97177, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_available"), Global_97160, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_completed"), Global_97178, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_available"), Global_97161, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_available"), Global_97165, 1);
	unk_0x680350124CC21957(joaat("num_misc_completed"), (Global_97181 + Global_97180), 1);
	unk_0x680350124CC21957(joaat("num_misc_available"), (Global_97164 + Global_97163), 1);
	Global_97182 = (Global_97175 * 100 / Global_97158);
	Global_97184 = ((Global_97177 + Global_97176) * 100 / (Global_97160 + Global_97159));
	Global_97183 = ((Global_97178 + iVar9) * 100 / (Global_97161 + Global_97165));
	Global_97185 = ((Global_97180 + Global_97181) * 100 / (Global_97163 + Global_97164));
	unk_0x17B4C1DC107FE8D1(joaat("total_progress_made"), Global_97439.f_8448.f_3853, 1);
	unk_0x680350124CC21957(joaat("percent_story_missions"), Global_97182, 1);
	unk_0x680350124CC21957(joaat("percent_ambient_missions"), Global_97183, 1);
	unk_0x680350124CC21957(joaat("percent_oddjobs"), Global_97184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853))
	{
		func_55(13, unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853));
	}
	if (!unk_0x0DA6B7D4A76F5536())
	{
		if (!Global_68325)
		{
			if (func_54() == 2 == 0 && !unk_0x1DAD7CE53BEE7710())
			{
				if (unk_0xECA1708601B2AF8E())
				{
					Global_97173 = 0;
				}
				if (!Global_54758)
				{
					func_48();
				}
			}
		}
	}
}

int func_54()
{
	return Global_24446;
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
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_7();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar9, iParam1, iVar1, iParam3);
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
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_60(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_61(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_61(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9BA82E09A986BA4B(sParam0, ""))
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
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97439.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_8 = (unk_0x09560C7DE2A384BD() + iParam3);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = ((unk_0x09560C7DE2A384BD() + iParam3) + iParam4);
		}
		else
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97439.f_23635.f_145++;
		func_62();
	}
}

void func_62()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97439.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[0])
			{
				Global_97439.f_23635.f_146[0] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[1])
			{
				Global_97439.f_23635.f_146[1] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[2])
			{
				Global_97439.f_23635.f_146[2] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_63()
{
	func_30();
	switch (Global_97439.f_1729.f_539.f_3213)
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
		return unk_0x889D01384B54BCE3(Global_97439.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_65(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_28192.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x7E5A426328F6E635(), 64);
	uVar16 = func_68(Var0);
	return uVar16;
}

int func_68(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xB793F1A0B6CC4AE1(&cParam0))
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
			Global_97439.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_97439.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3025;
			switch (iParam1)
			{
				case 1:
					iVar1 = 75;
					break;
				
				case 3:
					iVar1 = 77;
					break;
				
				case 2:
					iVar1 = 76;
					break;
				
				case 4:
					iVar1 = 78;
					break;
				
				case 5:
					iVar1 = 79;
					break;
				
				case 6:
					iVar1 = 80;
					break;
				
				case 7:
					iVar1 = 81;
					break;
			}
			if (iVar1 != 3025)
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
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
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
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2455246[iParam0 /*5*/][func_71(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
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
	if ((iParam2 != 145 && unk_0x5660C8AFDD9C1721(uVar0)) && unk_0xC929DDA58687736B(&(Global_97439.f_29795[iParam2 /*29*/].f_3)))
	{
		unk_0xFDA1FE98ECD75505(uVar0, &(Global_97439.f_29795[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(iParam0);
	if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_76(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x060629C917E581A5(uVar0, bParam1);
		}
		else
		{
			unk_0x1AD45E3CF020D50D(uVar0, 2);
		}
	}
	else if (unk_0xA34B85701D8A1FA8(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_76(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(uVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_76(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
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
		Global_97429 = 1;
		Global_97426 = unk_0x09560C7DE2A384BD();
		if (func_58(Global_97428))
		{
			func_78(0);
		}
		unk_0xBE9A45C5385D0AB1(1, "RE_TITLE");
		if (iParam0 && func_58(Global_97428))
		{
			unk_0x94BF9C1CAC4541F9();
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
			if (Global_97439.f_28192.f_2 < 3)
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_79(func_80(iParam0), -1);
					Global_97439.f_28192.f_2++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x889D01384B54BCE3(Global_97435, 1))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_79(func_80(iParam0), -1);
					Global_97439.f_28192.f_3++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x889D01384B54BCE3(Global_97435, 2))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_79(func_80(iParam0), -1);
					Global_97439.f_28192.f_4++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 2);
				}
			}
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(uParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
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
	switch (func_82(&Global_24505, 0, 5, 0, unk_0x60C807BBCBE66CC7()))
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
		if (Global_87925.f_44 == 1)
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
		Global_34879++;
		*uParam0 = Global_34879;
		unk_0x68068FC275E8AC83(unk_0xA495B6AB6F2BF8C7(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x847CD74208BB719C(8);
		}
		Global_34915 = iParam2;
		Global_34877 = *uParam0;
		Global_34878 = iParam4;
		Global_34876 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34876 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34876)
			{
				if (Global_34882[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34877 == *uParam0)
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
		if (Global_34876 == 8)
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		Global_34882[Global_34876 /*4*/] = Global_34879;
		Global_34882[Global_34876 /*4*/].f_1 = iParam1;
		Global_34882[Global_34876 /*4*/].f_2 = iParam2;
		Global_34882[Global_34876 /*4*/].f_3 = 0;
		Global_34876++;
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
	
	if (Global_34876 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34876)
	{
		if (Global_34882[iVar0 /*4*/] == *uParam0)
		{
			Global_34882[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_84(int iParam0)
{
	return func_85(iParam0, Global_34915);
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
	if (Global_34915 == 15)
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
	
	if (unk_0x1F5CEBCEE5E9FAE9())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
		iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (bParam0)
		{
			if (unk_0xE44A580B551C3645(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE44A580B551C3645(iVar0))
			{
				if (unk_0xD8A521688BDBE867(iVar0, -1) != unk_0xA16EC202D9D35357())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE44A580B551C3645(iVar0))
		{
			if (unk_0x70C5C50D16D2D8AB(iVar0) < 0.95f || unk_0x70C5C50D16D2D8AB(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (!unk_0xFF1960471DB3382B(unk_0x1788E93557766241()))
	{
		return 0;
	}
	return 1;
}

void func_88()
{
	unk_0x495459882382D113("RE14A_FAIL");
	iLocal_300 = 2;
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
		unk_0x271524E4281048DC(800);
		while (unk_0xE9A5FF67266655B2())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (!unk_0xE44A580B551C3645(iLocal_318))
		{
			unk_0x69542DE06E708D80(iLocal_318, 0f, 1f, 1f, 200f, 800f, 1);
		}
		bLocal_535 = true;
		iLocal_302 = 8;
	}
	switch (iLocal_302)
	{
		case 0:
			func_2(1, 1, 1, 0);
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
			unk_0xD28031B36012E8A1();
			unk_0xA0ED52A12ED3E5E5(0);
			unk_0x6853F2DD1CFD3CA2(0);
			unk_0x9347554BDF3B888A(0);
			if (unk_0x538DF9E5B1DF01EB(unk_0xB49BA83A5C224F40()))
			{
				unk_0x7B9576B4E099FB1F(unk_0xB49BA83A5C224F40(), 1, 0);
			}
			unk_0x11E84835ED616A25(Local_307, 50f, 0);
			unk_0x597CB55BA0825820(Local_307, 30f, 0, 0, 0, 0, 0);
			unk_0x6ACCA46B5F60314D(Local_307, 100f, 0);
			if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
			{
				if (unk_0x965556ACF6A83973(unk_0xB49BA83A5C224F40(), Local_307, 8f, 8f, 8f, 0, 1, 0))
				{
					uLocal_320 = unk_0xB49BA83A5C224F40();
					unk_0x7B9576B4E099FB1F(uLocal_320, 1, 0);
					unk_0x2F2948A2506AA404(&iLocal_320);
				}
			}
			if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, 0, 1, 0))
			{
				unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -477.3538f, -972.67f, 22.5494f, 1, 0, 0, 1);
				unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), 237.4839f);
			}
			uLocal_529 = unk_0xB506BD07C3E21008("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, 1, 2);
			uLocal_530 = unk_0xB506BD07C3E21008("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, 1, 2);
			unk_0x47FDCDDCBDC99BBB(uLocal_529, "HAND_SHAKE", 0.3f);
			unk_0x47FDCDDCBDC99BBB(uLocal_530, "HAND_SHAKE", 0.3f);
			func_92();
			unk_0xC8CEF95C63B283EC(uLocal_529, 1);
			unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 0, 0);
			unk_0x4EDE34FBADD967A6(500);
			unk_0x0069D19E3A367524(uLocal_530, uLocal_529, 3500, 1, 1);
			unk_0x495459882382D113("RE14A_START");
			iLocal_353 = unk_0x09560C7DE2A384BD();
			iLocal_302 = 1;
			break;
		
		case 1:
			if ((unk_0x09560C7DE2A384BD() - iLocal_353) > 3500)
			{
				unk_0xC2E1777941B4536E(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				unk_0xC2E1777941B4536E(iLocal_349, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				unk_0x9B455E44F65B5BA2(uLocal_326[0], 1);
				func_91(uLocal_529);
				func_91(uLocal_530);
				uLocal_529 = unk_0xB506BD07C3E21008("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, 1, 2);
				uLocal_530 = unk_0xB506BD07C3E21008("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, 1, 2);
				unk_0x47FDCDDCBDC99BBB(uLocal_529, "HAND_SHAKE", 0.3f);
				unk_0x47FDCDDCBDC99BBB(uLocal_530, "HAND_SHAKE", 0.3f);
				unk_0x0069D19E3A367524(uLocal_530, uLocal_529, 4000, 1, 0);
				if (!unk_0x2DE0B96E966FD817(iLocal_316))
				{
					unk_0x937785D9C1929236(iLocal_316);
					unk_0x3116CFED02763A5D(iLocal_316, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_339))
				{
					unk_0xBF1AB1205B822518(iLocal_339, 1, 1);
					unk_0xD4C90F16EBBFE620(&iLocal_339);
				}
				iLocal_353 = unk_0x09560C7DE2A384BD();
				iLocal_302 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x09560C7DE2A384BD() - iLocal_353) > 1500)
			{
				unk_0xC2E1777941B4536E(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				iLocal_353 = unk_0x09560C7DE2A384BD();
				iLocal_302 = 3;
			}
			break;
		
		case 3:
			if ((unk_0x09560C7DE2A384BD() - iLocal_353) > 500)
			{
				if (unk_0x538DF9E5B1DF01EB(uLocal_326[0]))
				{
					unk_0x3CC3106305C40A28(uLocal_326[0], 0);
					unk_0x3899C3FF414D2D90(uLocal_326[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, 1, 1, 1, 0, 1);
					unk_0xE160482E281336D4(uLocal_326[0], 11, 0);
					unk_0xE160482E281336D4(uLocal_326[0], 18, 0);
					unk_0xE160482E281336D4(uLocal_326[0], 19, 0);
					unk_0xE160482E281336D4(uLocal_326[0], 23, 0);
					unk_0xE160482E281336D4(uLocal_326[0], 9, 0);
					unk_0xE160482E281336D4(uLocal_326[0], 12, 0);
					unk_0xE160482E281336D4(uLocal_326[0], 17, 0);
					unk_0x465DC33550A13251("scr_reconstruct_pipefall_debris", uLocal_326[0], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				iLocal_353 = unk_0x09560C7DE2A384BD();
				iLocal_302 = 4;
			}
			break;
		
		case 4:
			if ((unk_0x09560C7DE2A384BD() - iLocal_353) > 2000)
			{
				func_91(uLocal_529);
				func_91(uLocal_530);
				uLocal_529 = unk_0xB506BD07C3E21008("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, 1, 2);
				uLocal_530 = unk_0xB506BD07C3E21008("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, 1, 2);
				unk_0x47FDCDDCBDC99BBB(uLocal_529, "HAND_SHAKE", 0.3f);
				unk_0x47FDCDDCBDC99BBB(uLocal_530, "HAND_SHAKE", 0.3f);
				unk_0x0069D19E3A367524(uLocal_530, uLocal_529, 1000, 3, 3);
				unk_0x7CB5477E93D6A302(iLocal_349);
				iLocal_353 = unk_0x09560C7DE2A384BD();
				iLocal_302 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x09560C7DE2A384BD() - iLocal_353) > 500)
			{
				if (!unk_0xE44A580B551C3645(iLocal_318))
				{
					unk_0x3CC3106305C40A28(iLocal_318, 0);
					unk_0xC2E1777941B4536E(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
					unk_0x69542DE06E708D80(iLocal_318, 0f, 1f, 1f, 200f, 800f, 1);
					if (!unk_0x2DE0B96E966FD817(iLocal_316))
					{
						unk_0x574CC08ACCB0F5FC(iLocal_316);
					}
					unk_0x5B5659C49032B96C(iLocal_316, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0f, 0, 0, 0);
					unk_0x465DC33550A13251("scr_reconstruct_pipe_impact", iLocal_318, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					func_23(&uLocal_357, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (unk_0xBAB691F99A2A7346(uLocal_529) && unk_0xBAB691F99A2A7346(uLocal_530))
					{
						unk_0x47FDCDDCBDC99BBB(uLocal_529, "HAND_SHAKE", 1.5f);
						unk_0x47FDCDDCBDC99BBB(uLocal_530, "HAND_SHAKE", 1.5f);
					}
					iLocal_353 = unk_0x09560C7DE2A384BD();
					iLocal_302 = 6;
				}
			}
			break;
		
		case 6:
			if ((unk_0x09560C7DE2A384BD() - iLocal_353) > 500)
			{
				func_91(uLocal_529);
				func_91(uLocal_530);
				uLocal_529 = unk_0xB506BD07C3E21008("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, 1, 2);
				uLocal_530 = unk_0xB506BD07C3E21008("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, 1, 2);
				unk_0x47FDCDDCBDC99BBB(uLocal_529, "HAND_SHAKE", 0.5f);
				unk_0x47FDCDDCBDC99BBB(uLocal_530, "HAND_SHAKE", 0.5f);
				unk_0x0069D19E3A367524(uLocal_530, uLocal_529, 2500, 3, 3);
				if (!unk_0x2DE0B96E966FD817(iLocal_316))
				{
					unk_0x3116CFED02763A5D(iLocal_316, unk_0xBF8499F46AD9093A(iLocal_316, 1) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_353 = unk_0x09560C7DE2A384BD();
				iLocal_302 = 7;
			}
			break;
		
		case 7:
			if ((unk_0x09560C7DE2A384BD() - iLocal_353) > 2200 && !iLocal_345)
			{
				if ((unk_0xB4AD7D9D08986FF5(unk_0xA16EC202D9D35357()) && unk_0xB9B1005BA7733220() == 4) || (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0xC89B7DD8E2CD22E5() == 4))
				{
					unk_0xDF3B1A0343547226("CamPushInNeutral", 0, 0);
					unk_0xC2E1777941B4536E(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_345 = 1;
				}
			}
			if ((unk_0x09560C7DE2A384BD() - iLocal_353) > 2500)
			{
				if (unk_0xECFECDAD51A6184F(iLocal_318, 0))
				{
					unk_0x3CC3106305C40A28(iLocal_318, 1);
				}
				iLocal_302 = 8;
			}
			break;
		
		case 8:
			unk_0x495459882382D113("RE14A_PIPES");
			if (unk_0x538DF9E5B1DF01EB(uLocal_326[0]))
			{
				unk_0xD4C90F16EBBFE620(&(uLocal_326[0]));
			}
			if (unk_0xECFECDAD51A6184F(iLocal_318, 0))
			{
				unk_0xBCA53A1278653F4C(iLocal_318, 250f);
				unk_0x6C43BF7625967266(iLocal_318, Local_307, 1, 0, 0, 1);
				unk_0x34639238667C4381(iLocal_318, 80f);
				unk_0x035F3FE2F394644A(Local_307, 50f, 0);
			}
			if (!unk_0x2DE0B96E966FD817(iLocal_316))
			{
				unk_0x937785D9C1929236(iLocal_316);
				unk_0x574CC08ACCB0F5FC(iLocal_316);
				unk_0x5B5659C49032B96C(iLocal_316, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0f, 0, 0, 0);
			}
			unk_0xC8CEF95C63B283EC(uLocal_529, 0);
			unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
			unk_0x27A62B1C26941E13(uLocal_529, 0);
			unk_0x27A62B1C26941E13(uLocal_530, 0);
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
			unk_0x20D6E0EA145DF751(0f);
			unk_0xA0ED52A12ED3E5E5(1);
			unk_0x6853F2DD1CFD3CA2(1);
			unk_0x9347554BDF3B888A(1);
			func_2(0, 1, 1, 0);
			iLocal_350 = unk_0x09560C7DE2A384BD();
			unk_0xEA054561294AEC10(joaat("prop_pipe_stack_01"));
			uLocal_326[1] = unk_0xCBF2B33114D43CAA(joaat("prop_ld_pipe_single_01"), -457.8815f, -988.9059f, 22.9554f, 1, 1, 0);
			unk_0x0BBAD8A322CB595E(uLocal_326[1], -0.1939f, 105.0058f, 77.3964f, 2, 1);
			uLocal_326[2] = unk_0xCBF2B33114D43CAA(joaat("prop_ld_pipe_single_01"), -451.5131f, -986.8079f, 24.6947f, 1, 1, 0);
			unk_0x0BBAD8A322CB595E(uLocal_326[2], 24.3941f, 32.5423f, 80.6862f, 2, 1);
			uLocal_326[3] = unk_0xCBF2B33114D43CAA(joaat("prop_ld_pipe_single_01"), -450.8099f, -985.9972f, 24.7104f, 1, 1, 0);
			unk_0x0BBAD8A322CB595E(uLocal_326[3], 24.1841f, 110.287f, 78.4357f, 2, 1);
			uLocal_326[4] = unk_0xCBF2B33114D43CAA(joaat("prop_ld_pipe_single_01"), -456.6558f, -987.3979f, 22.9537f, 1, 1, 0);
			unk_0x0BBAD8A322CB595E(uLocal_326[4], -0.0264f, 29.5754f, 79.1811f, 2, 1);
			uLocal_326[5] = unk_0xCBF2B33114D43CAA(joaat("prop_ld_pipe_single_01"), -456.1279f, -988.4162f, 22.9889f, 1, 1, 0);
			unk_0x0BBAD8A322CB595E(uLocal_326[5], -0.6337f, 108.4339f, 77.9539f, 2, 1);
			uLocal_326[6] = unk_0xCBF2B33114D43CAA(joaat("prop_ld_pipe_single_01"), -457.0807f, -987.3059f, 23.7564f, 1, 1, 0);
			unk_0x0BBAD8A322CB595E(uLocal_326[6], 0.0929f, 74.2657f, 79.3839f, 2, 1);
			uLocal_326[7] = unk_0xCBF2B33114D43CAA(joaat("prop_ld_pipe_single_01"), -456.6558f, -983.7804f, 22.9712f, 1, 1, 0);
			unk_0x0BBAD8A322CB595E(uLocal_326[7], -0.0264f, 29.5754f, 80.9061f, 2, 1);
			uLocal_326[8] = unk_0xCBF2B33114D43CAA(joaat("prop_ld_pipe_single_01"), -455.3279f, -983.1712f, 22.9564f, 1, 1, 0);
			unk_0x0BBAD8A322CB595E(uLocal_326[8], -0.1087f, 109.7339f, 80.9789f, 2, 1);
			uLocal_326[9] = unk_0xCBF2B33114D43CAA(joaat("prop_ld_pipe_single_01"), -456.1632f, -983.9359f, 23.7964f, 1, 1, 0);
			unk_0x0BBAD8A322CB595E(uLocal_326[9], -0.3321f, 74.1907f, 81.6089f, 2, 1);
			uLocal_326[10] = unk_0xCBF2B33114D43CAA(joaat("prop_ld_pipe_single_01"), -454.644f, -994.1709f, 23.3329f, 1, 1, 0);
			unk_0x0BBAD8A322CB595E(uLocal_326[10], 5.7811f, 104.6058f, 104.6964f, 2, 1);
			iLocal_346 = 0;
			while (iLocal_346 < 11)
			{
				if (unk_0x538DF9E5B1DF01EB(uLocal_326[iLocal_346]))
				{
					unk_0xC3C39B8BA6AC5807(uLocal_326[iLocal_346], 1);
					unk_0x3CC3106305C40A28(uLocal_326[iLocal_346], 1);
				}
				iLocal_346++;
			}
			if (bLocal_535)
			{
				unk_0x5FE2A83120E8127F(800);
				while (unk_0x0FFB470AFBDA3DCD())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			iLocal_341 = 1;
			iLocal_340 = 0;
			break;
	}
}

void func_91(var uParam0)
{
	if (unk_0xBAB691F99A2A7346(uParam0))
	{
		unk_0x27A62B1C26941E13(uParam0, 0);
	}
}

void func_92()
{
	unk_0xC4607267104129C5();
	Global_16685 = 0;
}

int func_93(int iParam0)
{
	if (unk_0x83B393DE31BAC8F0())
	{
		if ((unk_0x09560C7DE2A384BD() - Global_28) > iParam0)
		{
			Global_27 = unk_0x09560C7DE2A384BD();
		}
		Global_28 = unk_0x09560C7DE2A384BD();
		if ((unk_0x09560C7DE2A384BD() - Global_27) > iParam0)
		{
			if (func_94())
			{
				Global_27 = unk_0x09560C7DE2A384BD();
				return 1;
			}
		}
	}
	return 0;
}

int func_94()
{
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (unk_0x1453F50088A91E4E(0, 18) || unk_0x1453F50088A91E4E(2, 18))
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
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 1;
	Global_16690 = 0;
	Global_16688 = iParam7;
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
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
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
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 29))
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
	if (unk_0x889D01384B54BCE3(iParam0, 30))
	{
		if (unk_0x889D01384B54BCE3(iParam0, 29))
		{
			switch (func_100(iParam0))
			{
				case 0:
					return unk_0x5494F37F35C1D7D7(uParam2);
					break;
				
				case 1:
					return unk_0x6C47E32491756A1A(sParam1);
					break;
				
				case 2:
					return unk_0x307330CEB84DD3AE(sParam1);
					break;
				
				case 3:
					return unk_0xDC8071F347A8DD3F(sParam1);
					break;
				
				case 4:
					return unk_0x0C73411A25059A28(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xBE56E3F122265AAC(sParam1);
					break;
				
				case 6:
					return unk_0x45B7DFCE888B2A02(sParam1, unk_0x889D01384B54BCE3(iParam0, 27));
					break;
				
				case 7:
					return unk_0xACFDEC9C39CAD932(iParam2);
					break;
				
				case 8:
					return unk_0x5CD78FA34B48CB6E(iParam2);
					break;
				
				case 9:
					return unk_0xEA01082BB3EA9C37();
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
		if (unk_0x889D01384B54BCE3(iParam0, iVar0))
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
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], iParam1))
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
		if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xD0E2BFCE93AE3ABD(uParam0[iVar0 /*2*/], iParam1);
			unk_0xD0E2BFCE93AE3ABD(uParam0[iVar0 /*2*/], 30);
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
		if ((unk_0xA152BE858C442B26() >= (uParam0->f_32 + uParam0->f_33) || unk_0x889D01384B54BCE3(Global_90042.f_20, 2)) || unk_0x889D01384B54BCE3(Global_90042.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 29))
					{
						func_106(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xA152BE858C442B26();
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
	if (unk_0x889D01384B54BCE3(*uParam0, 30))
	{
		switch (func_100(*uParam0))
		{
			case 0:
				unk_0x939DA7EBCC6588FF(uParam2);
				break;
			
			case 1:
				unk_0x3D28909AF30D70F4(sParam1);
				break;
			
			case 2:
				unk_0x660D567D3EB18812(sParam1);
				break;
			
			case 3:
				unk_0x52964052BC489DDD(sParam1, unk_0x889D01384B54BCE3(*uParam0, 28));
				break;
			
			case 4:
				unk_0xDF529DC50AE6BC93(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xB3F2C2105E254F2B(sParam1);
				break;
			
			case 6:
				unk_0x45B7DFCE888B2A02(sParam1, unk_0x889D01384B54BCE3(*uParam0, 27));
				break;
			
			case 7:
				unk_0x2EDAAB9A8F7BCA0B(iParam2);
				break;
			
			case 8:
				unk_0x95AB598E6554985B(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xE8C49E8D4B533F7D();
				break;
			
			default:
				break;
		}
		unk_0xD0E2BFCE93AE3ABD(uParam0, 29);
	}
}

void func_108()
{
	int iVar0;
	
	func_104(&Local_536, joaat("bulldozer"));
	func_104(&Local_536, joaat("utillitruck2"));
	func_104(&Local_536, joaat("prop_pipe_stack_01"));
	if (func_97(&Local_536))
	{
		unk_0x32DC163A33A4AB6D(joaat("utillitruck2"), 1);
		unk_0xABC4F2A6D7D56CF4(0.1f);
		unk_0x24469800558B4973(3, 0);
		unk_0x4210B2DCFC2838AC(Local_304 + Vector(50f, 50f, 50f), Local_304 - Vector(50f, 50f, 50f), 0, 1, 1, 1);
		Local_307 = { -455.6561f, -985.8071f, 22.4868f };
		iLocal_318 = unk_0x9BB6F54E415071A1(joaat("utillitruck2"), Local_307, 80f, 1, 1);
		unk_0x6EBB9B0E214CCF0F(iLocal_318, 0, 1);
		unk_0x542B8BF5C21F2470(iLocal_318, 3);
		unk_0xA4FABA09D10C713D(iLocal_318, 1, 1);
		unk_0xA4FABA09D10C713D(iLocal_318, 2, 1);
		unk_0xA4FABA09D10C713D(iLocal_318, 3, 0);
		unk_0xA4FABA09D10C713D(iLocal_318, 4, 1);
		unk_0xA4FABA09D10C713D(iLocal_318, 5, 1);
		unk_0xA4FABA09D10C713D(iLocal_318, 6, 0);
		unk_0xA4FABA09D10C713D(iLocal_318, 7, 1);
		unk_0x3CC3106305C40A28(iLocal_318, 1);
		unk_0x67565210B706E956(iLocal_318, 0, 0, 0, 1, 0, 0, 0, 0);
		unk_0x4BE0FD78EDE6DDE2(iLocal_318, 10000);
		unk_0x93FA93B50B4307E4(iLocal_318, 5f);
		iLocal_319 = unk_0x9BB6F54E415071A1(joaat("bulldozer"), -472.9444f, -966.671f, 22.5534f, 181.8365f, 1, 1);
		unk_0x84710FE7666EBF7B(Local_307, 10f, 1, 0, 0, 0);
		uLocal_326[0] = unk_0xCBF2B33114D43CAA(joaat("prop_pipe_stack_01"), -453.2f, -986.1f, 59.45f, 1, 1, 0);
		unk_0x34639238667C4381(uLocal_326[0], 90f);
		unk_0x3CC3106305C40A28(uLocal_326[0], 1);
		unk_0x67565210B706E956(uLocal_326[0], 1, 1, 1, 1, 0, 0, 0, 0);
		unk_0x4BE0FD78EDE6DDE2(uLocal_326[0], 10000000);
		Local_228[0 /*5*/] = { Local_525 };
		Local_228[1 /*5*/] = { Local_525 + Vector(0f, 0.5f, 0f) };
		Local_228[2 /*5*/] = { Local_525 + Vector(0f, 1f, 0f) };
		Local_228[3 /*5*/] = { Local_525 + Vector(0f, 2.5f, 0f) };
		Local_228[4 /*5*/] = { Local_525 + Vector(0f, 3f, 0f) };
		Local_228[5 /*5*/] = { Local_525 + Vector(0f, 3.5f, 0f) };
		Local_228[6 /*5*/] = { Local_525 + Vector(0f, 4f, 0f) };
		Local_228[7 /*5*/] = { Local_525 + Vector(0f, 4.5f, 0f) };
		Local_228[8 /*5*/] = { Local_525 + Vector(0f, 5f, 0f) };
		Local_228[9 /*5*/] = { Local_525 + Vector(0f, 5.5f, 0f) };
		Local_228[10 /*5*/] = { Local_525 + Vector(0f, 6f, 0f) };
		Local_228[11 /*5*/] = { Local_525 + Vector(0f, 6.5f, 0f) };
		Local_228[12 /*5*/] = { Local_525 + Vector(0f, 7f, 0f) };
		Local_228[13 /*5*/] = { Local_522 };
		iVar0 = 0;
		while (iVar0 < Local_228.f_0)
		{
			Local_228[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (!unk_0x5660C8AFDD9C1721(uLocal_325))
		{
		}
		func_109(&Local_536, 0);
		iLocal_533 = 1;
		iLocal_300 = 1;
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
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 30))
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
	if (unk_0x889D01384B54BCE3(uParam0, 30))
	{
		switch (func_100(iParam0))
		{
			case 0:
				unk_0xEA054561294AEC10(uParam2);
				break;
			
			case 1:
				unk_0xB845ECB6BD2996BD(sParam1);
				break;
			
			case 2:
				unk_0xF4E0DE38B3046EF1(sParam1);
				break;
			
			case 3:
				unk_0x4A79FCCDF915C20B(sParam1);
				break;
			
			case 4:
				unk_0xA0B5A2A31FD758CC(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x3DE6488DAAEAB507(sParam1);
				break;
			
			case 6:
				unk_0x0C2EDF73A2AD1F31();
				break;
			
			case 7:
				unk_0x7782C61D47F5F794(iParam2);
				break;
			
			case 8:
				unk_0x3D3D5DB8C3B816AF(iParam2, unk_0x889D01384B54BCE3(iParam0, 26));
				break;
			
			case 9:
				unk_0x465D89CA94CBF67D();
				break;
			
			default:
				break;
		}
	}
}

int func_114()
{
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_125())
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
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (func_31(func_29()))
		{
			iVar36 = func_63();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 2) && !unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 3))
				{
					func_116(iVar32, &Var0);
					fVar35 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var0.f_6, 1);
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
	if (unk_0x06771AF7795B3ECF(&cVar2))
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
	return Global_97157 > 0;
}

int func_123()
{
	if (Global_87369 != -1)
	{
		return 1;
	}
	return 0;
}

int func_124()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 20);
	}
	return 0;
}

int func_125()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0xC24CFE5409745AF5() == 1f)
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
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_125())
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
	if ((Global_97428 == func_67() && unk_0x03FD20E179B3FCF4()) && Global_97429)
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
	unk_0xAF49C3B252CD2D4A(0);
	unk_0x612AE23D2DD952F2(1);
	Global_97425 = 0;
	func_129();
}

void func_129()
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			unk_0x32DC163A33A4AB6D(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)), 1);
		}
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 32, 0);
	}
}

void func_130(int iParam0)
{
	Global_97428 = iParam0;
}

int func_131(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131527)
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
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_125())
			{
				return 0;
			}
		}
		if (!Global_97439.f_7341)
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
		if (Global_97428 != -1)
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
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
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
		if (!func_167(Global_97439.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x09560C7DE2A384BD() - Global_97430) < 150000)
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
		if (unk_0x57928D9CA949E471())
		{
			return 0;
		}
		if (unk_0x03FD20E179B3FCF4())
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
		if (unk_0xF7037F2CC07D58B0(unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357())))
		{
			if ((unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(377.153f, -717.567f, 10.0536f) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(320.9934f, 265.2515f, 82.1221f)) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_156(0, 0))
		{
			return 0;
		}
		if (Global_24592)
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
				Var5 = { Global_97439.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97439.f_1729.f_539.f_1524[iVar4];
				if (func_155(iVar8))
				{
					if (func_133(iVar4))
					{
						if (!func_132(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_97439.f_1729.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_145(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
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
	
	func_154(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_153(&uVar0, unk_0x26ADBF0B08315387());
	func_152(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_151(&uVar0, unk_0xA3730885141EEA96());
	func_150(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_149(&uVar0, unk_0x4C29EAF01B84254C());
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
	if (unk_0x889D01384B54BCE3(Global_97439.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
{
	int iVar0;
	
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
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
						if (((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_165()) || Global_96486) || Global_24448) || func_164()) || func_36(8, -1)) || func_163()) || func_162()) || func_161()) || func_160()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1) || func_165()) || Global_24448) || func_164()) || func_36(8, -1)) || func_161()) || func_163()) || func_162()) || func_160()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_165()) || Global_96486) || Global_24448) || func_164()) || func_36(8, -1)) || func_161()) || func_163()) || func_162()) || func_160()) || Global_97439.f_5944.f_919[iVar0] == 5) || Global_35462 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_165()) || Global_96486) || Global_24448) || func_164()) || func_36(8, -1)) || func_163()) || func_162()) || func_160()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_165() || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || func_36(8, -1)) || func_160()) || func_159()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_36(8, -1) || func_163()) || func_162()) || func_159()) || func_158())
						{
							return 0;
						}
						if ((unk_0xB4B5BF5882A555F9() && unk_0xCC285AB3AF3E0AB4() != 3) && unk_0x449E31B77C93FF23() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
						{
							if ((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_165()) || Global_24448) || func_164()) || func_36(8, -1)) || func_162()) || func_161()) || func_160()) || Global_97439.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || func_165()) || func_162()) || Global_96486) || Global_24448) || func_164()) || Global_35965) || func_36(8, -1)) || func_161()) || func_159()) || func_160()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0)) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1)) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_165()) || Global_96486) || Global_24448) || func_164()) || func_36(8, -1)) || func_161()) || func_159()) || func_163()) || func_162()) || func_160())
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
	return Global_90081.f_1;
}

int func_159()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 13);
	}
	return 0;
}

int func_160()
{
	if (unk_0x16CDA1894CFE0781(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_161()
{
	if (Global_68585)
	{
		return 1;
	}
	else if (Global_54752 && !Global_54758)
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return Global_90094.f_291 > 0;
}

bool func_163()
{
	return Global_90094.f_290 > 0;
}

var func_164()
{
	return Global_1315891;
}

int func_165()
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return Global_87925.f_44 == 1;
	}
	return 0;
}

int func_166()
{
	func_28();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
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
	return Global_97439.f_5944.f_919[iParam0];
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
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_171()
{
	int iVar0;
	
	if (Global_24596)
	{
		iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (unk_0xECFECDAD51A6184F(iVar0, 0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xD8A521688BDBE867(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_172()
{
	var uVar0;
	
	if (unk_0xCEFAE6CD543A0383())
	{
		if (unk_0x889D01384B54BCE3(unk_0x7058289E8DD601D6(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131779 == 2)
	{
		return 1;
	}
	if (unk_0x6B7032CA494CCEE4())
	{
		if (unk_0x07ED3AB0A86F77AA())
		{
			if (unk_0xB7DEA1403E206005())
			{
				if (unk_0xCEFAE6CD543A0383())
				{
					uVar0 = unk_0x7058289E8DD601D6(866);
					unk_0xD0E2BFCE93AE3ABD(&uVar0, 0);
					unk_0xBE2CD6E2863337FA(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_173()
{
	if (iLocal_533)
	{
		if (!iLocal_534)
		{
			unk_0x495459882382D113("RE14A_FAIL");
			func_205();
			if (!unk_0x2DE0B96E966FD817(iLocal_316))
			{
				unk_0xA1478EBA54DDE31B(iLocal_316, 317, 1);
			}
			if (!unk_0xE44A580B551C3645(iLocal_321))
			{
				if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_321, 0) && !unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_321, 50f, 50f, 50f, 0, 1, 0))
				{
					func_185(iLocal_321, 0, 145);
				}
			}
			iLocal_346 = 0;
			while (iLocal_346 < 11)
			{
				if (unk_0x538DF9E5B1DF01EB(uLocal_326[iLocal_346]))
				{
					unk_0x3CC3106305C40A28(uLocal_326[iLocal_346], 0);
				}
				iLocal_346++;
			}
			if (!unk_0xE44A580B551C3645(iLocal_318))
			{
				unk_0xBCA53A1278653F4C(iLocal_318, 0f);
				unk_0x3CC3106305C40A28(iLocal_318, 0);
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_338))
			{
				unk_0x3CC3106305C40A28(iLocal_338, 0);
			}
			unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
			unk_0xA0ED52A12ED3E5E5(1);
			unk_0x6853F2DD1CFD3CA2(1);
			func_2(0, 1, 1, 0);
			iLocal_341 = 1;
			unk_0x4A4C49D89D07255A(1f);
			unk_0xB845ECB6BD2996BD("re@construction");
			if (unk_0xBAB691F99A2A7346(uLocal_528))
			{
				unk_0x27A62B1C26941E13(uLocal_528, 0);
				unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
				unk_0x20D6E0EA145DF751(0f);
				unk_0x60365B850FB7354F(0f, 1065353216);
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
				unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), 0);
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_322))
			{
				unk_0xB6FB9702660D84F6(&uLocal_322);
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_323))
			{
				unk_0xB6FB9702660D84F6(&uLocal_323);
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_324))
			{
				unk_0xB6FB9702660D84F6(&uLocal_324);
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_325))
			{
				unk_0xB6FB9702660D84F6(&uLocal_325);
			}
		}
		unk_0xC116CE577D8DDF3C(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 1);
		unk_0xABC4F2A6D7D56CF4(1f);
		unk_0x24469800558B4973(3, 1);
		unk_0xEB1D6ADBED2C0E57();
		unk_0x8C4265EEC0D6FD1A();
	}
	func_109(&Local_536, 0);
	func_174(-1);
	unk_0x82706E6C897B0FA1();
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
		unk_0xBE9A45C5385D0AB1(0, 0);
		Global_97430 = unk_0x09560C7DE2A384BD();
		func_177(30000);
		StringCopy(&cVar0, func_176(Global_97428, 1), 64);
		if (func_66(Global_97428) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97427, 64);
		}
		unk_0x10DE09595D95978F(&cVar0, Global_97425, (unk_0x09560C7DE2A384BD() - Global_97426), 0);
	}
	else if (unk_0x889D01384B54BCE3(Global_97435, 0) && Global_97439.f_28192.f_2 < 3)
	{
		unk_0x29DB79DD4D939B38(&Global_97435, 0);
	}
	func_175(&Global_24505);
	Global_97429 = 0;
	func_130(-1);
}

void func_175(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34877)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34876 = 0;
	Global_34878 = 0;
	Global_34915 = 15;
	Global_54755 = 0;
	Global_54756 = 0;
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
	Global_35466 = (unk_0x09560C7DE2A384BD() + iParam0);
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
	Global_97439.f_28192.f_43[iParam0] = *uParam1;
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
	func_151(uParam0, iParam4);
	func_150(uParam0, iParam5);
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
		uVar1 = unk_0xFD03B2968C4DD469(iParam0, &uVar0);
		if (!unk_0x06771AF7795B3ECF(uVar1))
		{
			if (unk_0xB793F1A0B6CC4AE1(uVar1) == unk_0xB793F1A0B6CC4AE1("vehicle_gen_controller"))
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
		iVar0 = unk_0xD8A521688BDBE867(iParam0, -1);
		if (!unk_0x538DF9E5B1DF01EB(iVar0))
		{
			iVar0 = unk_0x728F548A96B6E588(iParam0, -1);
		}
		if (unk_0x538DF9E5B1DF01EB(iVar0) && !unk_0x2DE0B96E966FD817(iVar0))
		{
			if (unk_0xA609E58449080951(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xA609E58449080951(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xA609E58449080951(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97439.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xA609E58449080951(iParam0) == Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x06771AF7795B3ECF(&(Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x9BA82E09A986BA4B(unk_0xC2E0CBF2F000307B(iParam0), &(Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97439.f_18371.f_4800[iVar1] = iVar2;
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
		if (unk_0xA609E58449080951(iParam0) == Global_97439.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x06771AF7795B3ECF(&(Global_97439.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x9BA82E09A986BA4B(unk_0xC2E0CBF2F000307B(iParam0), &(Global_97439.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97439.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97439.f_18371.f_4798 = iParam1;
	Global_68123 = iParam0;
	Global_97439.f_18371.f_4796 = 1;
	func_187(iParam0, &(Global_97439.f_18371.f_4742));
}

void func_187(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		func_190(uParam1);
		uParam1->f_42 = unk_0xA609E58449080951(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC2E0CBF2F000307B(iParam0), 16);
		*uParam1 = unk_0x6E1ADA6FBEC091EA(iParam0);
		unk_0xABDA00D6C410A603(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xACCED888DA80AA1F(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x27BCAE1F10710BEC(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x4EC2A3086F931215(iParam0);
		uParam1->f_43 = unk_0x960D1BE7E376200B(iParam0);
		uParam1->f_45 = unk_0xD9197C47F38990D8(iParam0);
		uParam1->f_46 = unk_0x5812ABBDAA06BE4A(iParam0);
		unk_0x59A2942E7145EFA4(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xB49AB41D753BA09F(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x5792E99920C570FD(iParam0, 2))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 28);
		}
		if (unk_0x5792E99920C570FD(iParam0, 3))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 29);
		}
		if (unk_0x5792E99920C570FD(iParam0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 30);
		}
		if (unk_0x5792E99920C570FD(iParam0, 1))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0xE19742BCB95B6E28(iParam0, 0))
		{
			uParam1->f_44 = unk_0xBE52DF6606B79B2D(iParam0);
		}
		if (unk_0xEE41D6C2DA208994(uParam1->f_42))
		{
			if (unk_0xC9F64E53159B529B(iParam0))
			{
				switch (unk_0xFA2BD89016FF31B2(iParam0))
				{
					case 2:
					case 0:
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 23);
						unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 23);
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x9610401E9E4D05A2(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 9);
		}
		if (unk_0xA83FD3D7530A5908(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 10);
		}
		if (unk_0x7CFBF44D83E4C08F(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 13);
			unk_0x37565B4952524D39(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x61BB59E7B67E3575(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 12);
		}
		func_189(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5624226E4F913C53(iParam0, iVar0 + 1))
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), func_188(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x8A627BCE7B3FB070(iParam0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(uParam1->f_53), 11);
		}
		if (unk_0x53D28141CF743B83(iParam0, "IgnoredByQuickSave") && unk_0x258D2FF40E1E3219(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(uParam1->f_53), 27);
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
	
	if (!unk_0xECFECDAD51A6184F(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x1496C675F4DE04ED(*iParam0) == 0)
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
			if (unk_0xA71DB4975987C018(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x9602B91EC545B1EA(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x362B5E7A7FB4996C(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x362B5E7A7FB4996C(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_190(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_191(int iParam0)
{
	if ((((((((((!unk_0x538DF9E5B1DF01EB(iParam0) || !unk_0xECFECDAD51A6184F(iParam0, 0)) || func_203(iParam0, 0, 0)) || func_203(iParam0, 1, 0)) || func_203(iParam0, 2, 0)) || func_202(iParam0) != 145) || func_201(iParam0)) || func_200(iParam0)) || func_199(iParam0)) || func_198(iParam0)) || !func_192(unk_0xA609E58449080951(iParam0)))
	{
		if (func_200(iParam0))
		{
		}
		if (func_200(iParam0))
		{
		}
		if (func_203(iParam0, 0, 0))
		{
		}
		if (func_203(iParam0, 1, 0))
		{
		}
		if (func_203(iParam0, 2, 0))
		{
		}
		if (func_202(iParam0) != 145)
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
	if (!func_193(iParam0))
	{
		return 0;
	}
	if (((unk_0xD18BE100522E5F15(iParam0) || unk_0xEE41D6C2DA208994(iParam0)) || unk_0x38B61EB14C5FBA9E(iParam0)) || unk_0xEEE07492AE30B7BC(iParam0))
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

int func_193(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xD3B644BC9C4BCCE4(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1DAD7CE53BEE7710())) || (iParam0 == joaat("buffalo3") && !unk_0x1DAD7CE53BEE7710())) || (iParam0 == joaat("gauntlet2") && !unk_0x1DAD7CE53BEE7710())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1DAD7CE53BEE7710())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_172())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x1D6BD62DDF942BDF())
		{
			if (unk_0x12A9DA9E48BF64B0(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xA90142E282A42D80(Var1.f_0))
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
		if ((((!func_197() && !func_196()) && !func_195()) && !func_194()) && !func_172())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x9F979F481F18EB48() || unk_0xF6BAF9F0C2863FFE()) || unk_0x660675ADB09E441F())
		{
		}
		else if (!func_195())
		{
			return 0;
		}
	}
	return 1;
}

int func_194()
{
	return 0;
}

int func_195()
{
	return 1;
}

int func_196()
{
	return 1;
}

int func_197()
{
	if (unk_0xD5883629B43B6F20(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xA609E58449080951(iParam0);
	uVar1 = unk_0xC2E0CBF2F000307B(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x9BA82E09A986BA4B(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_193(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_87808[iVar0]))
		{
			if (Global_87808[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]) && unk_0xECFECDAD51A6184F(Global_87778[iVar0], 0))
			{
				if (Global_87778[iVar0] == iParam0 && unk_0xA609E58449080951(Global_87778[iVar0]) == unk_0xA609E58449080951(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[24]))
	{
		if (iParam0 == Global_67218.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67218.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 145;
	}
	if (!unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]))
		{
			if (Global_87778[iVar0] == iParam0)
			{
				return Global_87788[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_203(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0) || !unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_204(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x889D01384B54BCE3(Global_97439.f_5486[iVar9], 0))
		{
			if (unk_0x83A989DB79B98F45(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_204(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_205()
{
	Global_14559 = 0;
	func_206();
}

void func_206()
{
	if (unk_0xD47B332729054512())
	{
		unk_0xD01024485E7AB68C();
		Global_16704 = 0;
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

