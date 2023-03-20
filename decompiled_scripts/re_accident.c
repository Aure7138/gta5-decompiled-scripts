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
	int iLocal_54 = 0;
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
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_356 = 0;
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
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	var uLocal_531 = 0;
	int iLocal_532 = 0;
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
	if (unk_0xC968670BFACE42D9(11))
	{
		func_172();
	}
	if (unk_0x25223CA6B4D20B7F() > 18 || unk_0x25223CA6B4D20B7F() < 5)
	{
		unk_0x1090044AD1DA76FA();
	}
	if (func_130(Local_304, -1, 0, 0, 0))
	{
		func_127(-1);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC5042CC6F5E3D450())
		{
			if (!func_126())
			{
				if (func_125())
				{
					func_172();
				}
			}
			unk_0x208784099002BC30("RE_CA", 0);
			switch (iLocal_300)
			{
				case 0:
					if (func_113())
					{
						func_172();
					}
					func_107();
					func_104(&Local_536);
					break;
				
				case 1:
					func_21();
					func_104(&Local_536);
					func_12();
					break;
				
				case 2:
					if (((unk_0x7239B21A38F536BA(iLocal_316) && unk_0x3317DEDB88C95038(iLocal_316, true)) && iLocal_347 < 5) && !bLocal_344)
					{
						func_11();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_172();
		}
	}
}

void func_1()
{
	if (iLocal_533 && !iLocal_534)
	{
		unk_0x706D57B0F50DA710("RE14A_FAIL");
		iLocal_346 = 0;
		while (iLocal_346 < 11)
		{
			if (unk_0x7239B21A38F536BA(iLocal_326[iLocal_346]))
			{
				unk_0x428CA6DBD1094446(iLocal_326[iLocal_346], false);
			}
			iLocal_346++;
		}
		if (!unk_0x5F9532F3B5CC2551(iLocal_318))
		{
			unk_0x45F6D8EEF34ABEF1(iLocal_318, 0f);
			unk_0x428CA6DBD1094446(iLocal_318, false);
		}
		if (unk_0x7239B21A38F536BA(iLocal_338))
		{
			unk_0x428CA6DBD1094446(iLocal_338, false);
		}
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
		unk_0xA0EBB943C300E693(true);
		unk_0xA6294919E56FF02A(true);
		func_2(0, 1, 1, 0);
		iLocal_341 = 1;
		unk_0x1D408577D440E81E(1f);
		unk_0xF66A602F829E2A06("re@construction");
		if (unk_0xA7A932170592B50E(iLocal_528))
		{
			unk_0x865908C81A2C22E9(iLocal_528, false);
			unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
			unk_0xB4EC2312F4E5B1F1(0f);
			unk_0x6D0858B8EDFD2B7D(0f, 1f);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
		}
		if (unk_0xA6DB27D19ECBB7DA(iLocal_322))
		{
			unk_0x86A652570E5F25DD(&iLocal_322);
		}
		if (unk_0xA6DB27D19ECBB7DA(iLocal_323))
		{
			unk_0x86A652570E5F25DD(&iLocal_323);
		}
		if (unk_0xA6DB27D19ECBB7DA(iLocal_324))
		{
			unk_0x86A652570E5F25DD(&iLocal_324);
		}
		if (unk_0xA6DB27D19ECBB7DA(iLocal_325))
		{
			unk_0x86A652570E5F25DD(&iLocal_325);
		}
		iLocal_534 = 1;
	}
	if (unk_0x7239B21A38F536BA(iLocal_326[0]) || unk_0x7239B21A38F536BA(iLocal_326[1]))
	{
		if (!unk_0xE33D59DA70B58FDF(Local_307 + Vector(20f, 0f, 0f), 30f) && !unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_307, 80f, 80f, 80f, false, true, 0))
		{
			func_172();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_10(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_9())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_8(1, bParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_10(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_8(0, bParam3, iParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_3(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
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
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_4()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_5(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_6(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
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
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_7()
{
	return Global_1312736;
}

int func_8(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_9()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
	}
}

void func_11()
{
	if (iLocal_351 == -1)
	{
		iLocal_351 = unk_0x9CD27B0045628463() + 5000;
	}
	if (unk_0x9CD27B0045628463() > iLocal_351)
	{
		if (unk_0x7239B21A38F536BA(iLocal_318))
		{
			unk_0x428CA6DBD1094446(iLocal_318, false);
			unk_0xC5F68BE9613E2D18(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
			if (!unk_0x5F9532F3B5CC2551(iLocal_318))
			{
				unk_0xBA71116ADF5B514C(iLocal_318, true, false);
			}
		}
	}
}

void func_12()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
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
		if (unk_0x352A9F6BCF90081F(&Var1, Local_228[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_228.f_0)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + unk_0xF1B760881820C952(Local_228[(iVar0 - 1) /*5*/], Local_228[iVar0 /*5*/], true));
				}
				if (Local_228[iVar0 /*5*/].f_4)
				{
					if (unk_0x352A9F6BCF90081F(&Var1, Local_228[iVar0 /*5*/]))
					{
						fVar6 = unk_0xF1B760881820C952(Local_228[iVar0 /*5*/], Var1, true);
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
				iLocal_223 = unk_0x9CD27B0045628463();
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
		unk_0xD9454B5752C857DC();
		fVar9 = (unk_0xBBDA792448DB5A89((unk_0x9CD27B0045628463() - iLocal_223)) / fLocal_299);
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
			if ((unk_0x9CD27B0045628463() - Local_65[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0xD77EDADB0420E6E0(Local_65[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((unk_0x9CD27B0045628463() - Local_65[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0x7FF548385680673F(Local_65[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_14(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				func_15(Local_228[(iParam0 / 2) /*5*/] + Local_228[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_57, fLocal_57, fLocal_57), bParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_15(Local_228[(iParam0 / 2) /*5*/] + Vector(fLocal_57, fLocal_57, fLocal_57), bParam1);
		}
	}
}

void func_15(struct<3> Param0, bool bParam3)
{
	if (iLocal_222 == 0)
	{
		bParam3 = false;
	}
	unk_0x7FF548385680673F(Local_65[iLocal_225 /*5*/]);
	if (Local_65[iLocal_225 /*5*/].f_4 != 0)
	{
		unk_0xD77EDADB0420E6E0(Local_65[iLocal_225 /*5*/].f_1, 0.4f, 1f);
	}
	Local_65[iLocal_225 /*5*/].f_4 = unk_0x9CD27B0045628463();
	Local_65[iLocal_225 /*5*/].f_1 = { Param0 };
	Local_65[iLocal_225 /*5*/] = unk_0x6B83617E04503888(Param0, iLocal_54, bParam3);
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
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0xF3A21BCD95725A4A(0, 24) && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
			{
				if (iLocal_55 == 0)
				{
					unk_0x293220DA1B46CEBC(2f, 8f, 4);
					iLocal_55 = unk_0x9CD27B0045628463() + 250;
				}
				if (unk_0x9CD27B0045628463() > iLocal_55)
				{
					if (!bLocal_45)
					{
						fVar4 = 9999.9f;
						Local_58 = { func_18() };
						iVar0 = 0;
						while (iVar0 < Local_228.f_0)
						{
							if (unk_0xA6DB27D19ECBB7DA(Local_228[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0xF1B760881820C952(Local_58, unk_0x586AFE3FF72D996E(Local_228[iVar0 /*5*/].f_3), true);
								fVar3 = unk_0xF1B760881820C952(Local_228[iVar0 /*5*/], unk_0x586AFE3FF72D996E(Local_228[iVar0 /*5*/].f_3), true);
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
								if (unk_0xF0D31AD191A74F87((iLocal_52 - iVar5)) > 1)
								{
									iLocal_52 = -1;
								}
								if (iLocal_52 == -1)
								{
									iLocal_52 = iLocal_51;
								}
								if (unk_0xF0D31AD191A74F87((iLocal_52 - iVar5)) < 3 && unk_0xF0D31AD191A74F87((iLocal_52 - iVar5)) > 0)
								{
									if (iLocal_52 < iVar5)
									{
										iVar6 = iLocal_52;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0xA6DB27D19ECBB7DA(Local_228[iVar6 /*5*/].f_3))
											{
												if (unk_0x970F608F0EE6C885(Local_228[iVar6 /*5*/].f_3) > 0)
												{
													unk_0x45FF974EEE1C8734(Local_228[iVar6 /*5*/].f_3, 0);
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
											if (unk_0xA6DB27D19ECBB7DA(Local_228[iVar6 /*5*/].f_3))
											{
												if (unk_0x970F608F0EE6C885(Local_228[iVar6 /*5*/].f_3) > 0)
												{
													unk_0x45FF974EEE1C8734(Local_228[iVar6 /*5*/].f_3, 0);
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
									if (unk_0xA6DB27D19ECBB7DA(Local_228[iVar5 /*5*/].f_3))
									{
										if (unk_0x970F608F0EE6C885(Local_228[iVar5 /*5*/].f_3) > 0)
										{
											unk_0x45FF974EEE1C8734(Local_228[iVar5 /*5*/].f_3, 0);
											Local_228[iVar5 /*5*/].f_4 = 1;
											iLocal_53 = (iLocal_53 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (unk_0xA6DB27D19ECBB7DA(Local_228[iVar5 /*5*/].f_3))
									{
										if (unk_0x970F608F0EE6C885(Local_228[iVar5 /*5*/].f_3) > 0)
										{
											unk_0x45FF974EEE1C8734(Local_228[iVar5 /*5*/].f_3, 0);
											Local_228[iVar5 /*5*/].f_4 = 1;
											iLocal_53 = (iLocal_53 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_17(Local_228[iVar5 + 1 /*5*/]))
									{
										if (unk_0xA6DB27D19ECBB7DA(Local_228[iVar5 /*5*/].f_3))
										{
											if (unk_0x970F608F0EE6C885(Local_228[iVar5 /*5*/].f_3) > 0)
											{
												unk_0x45FF974EEE1C8734(Local_228[iVar5 /*5*/].f_3, 0);
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
	
	iVar0 = unk_0x3B390A939AF0B5FC(unk_0xD80958FC74E988A6());
	if (unk_0x7239B21A38F536BA(iVar0))
	{
		iVar1 = unk_0xFB71170B7E76ACBA(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { unk_0x44A8FCB8ED227738(iVar0, iVar1) };
		Var2 = { unk_0x163E252DE035A133(Var2, unk_0xE83D4F9BA2A38914(iVar0), 0.35f, 0f, -0.15f) };
		unk_0xC906A7DAB05C8D2B(Var2, &uVar8);
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
				unk_0x7FF548385680673F(Local_65[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_47 = 0;
		iLocal_221 = 1;
		iLocal_223 = unk_0x9CD27B0045628463();
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
			unk_0x2F844A8B08D76685("CONSTRUCTION_ACCIDENT_1", false);
			unk_0xD3BD40951412FEF6("re@construction");
			if (Local_536.f_32 <= 0)
			{
				Local_536.f_32 = unk_0xFC8202EFC642E6F2();
			}
			func_103(&Local_536, joaat("s_m_m_dockwork_01"));
			func_103(&Local_536, joaat("prop_generator_01a"));
			func_103(&Local_536, joaat("p_amb_phone_01"));
			func_100(&Local_536);
			if ((unk_0x2F844A8B08D76685("CONSTRUCTION_ACCIDENT_1", false) && unk_0xD031A9162D01088C("re@construction")) && func_96(&Local_536))
			{
				if (unk_0x4C241E39B23DF959(iLocal_318, false))
				{
					iLocal_316 = unk_0x7DD959874C1FD534(iLocal_318, 26, joaat("s_m_m_dockwork_01"), -1, true, true);
					unk_0x262B14F48D29DE80(iLocal_316, 0, 1, 0, 0);
					unk_0x262B14F48D29DE80(iLocal_316, 3, 1, 1, 0);
					unk_0x262B14F48D29DE80(iLocal_316, 4, 0, 1, 0);
					unk_0x262B14F48D29DE80(iLocal_316, 8, 0, 0, 0);
					unk_0xEA47FE3719165B94(iLocal_316, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, false, false, false);
					iLocal_339 = unk_0x509D5878EB39E842(joaat("p_amb_phone_01"), -455.6561f, -985.8071f, 22.4868f, true, true, false);
					unk_0xE532F5D78798DAAB(joaat("p_amb_phone_01"));
					unk_0x6B9BBD38AB0796DF(iLocal_339, iLocal_316, unk_0x3F428D08BE5AAE31(iLocal_316, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true);
					unk_0x9F7794730795E019(iLocal_316, 17, true);
					unk_0xEDF4079F9D54C9A1(iLocal_316, true);
					unk_0x9F8AA94D6D97DBF4(iLocal_316, true);
					unk_0x63F58F7C80513AAD(iLocal_316, false);
					func_95(&uLocal_357, 3, iLocal_316, "RECONACWorker", 0, 1);
					unk_0x6C8065A3B780185B(iLocal_316, "S_M_Y_GENERICWORKER_01_WHITE_01");
					iLocal_317 = unk_0xD49F9B0955C367DE(26, joaat("s_m_m_dockwork_01"), -462.2982f, -978.3272f, 65f, 221.4041f, true, true);
					unk_0x9F8AA94D6D97DBF4(iLocal_317, true);
					unk_0x0DC7CABAB1E9B67E(iLocal_317, 1);
					unk_0x428CA6DBD1094446(iLocal_317, true);
					unk_0xB604A2942ADED0EE(iLocal_316, joaat("empty"));
					unk_0x4FC9381A7AEE8968(joaat("empty"), 24);
					unk_0x4FC9381A7AEE8968(joaat("empty"), 46);
					unk_0x4FC9381A7AEE8968(joaat("empty"), 61);
					unk_0x4FC9381A7AEE8968(joaat("empty"), 136);
					unk_0x4FC9381A7AEE8968(joaat("empty"), 55);
					iLocal_338 = unk_0x509D5878EB39E842(joaat("prop_generator_01a"), Local_525.f_0, (Local_525.f_1 + 0.5f), (Local_525.f_2 - 0.25f), true, true, false);
					unk_0x8E2530AA8ADA980E(iLocal_338, 75f);
					unk_0xFAEE099C6F890BB8(iLocal_338, false, true, true, false, false, false, false, false);
					iLocal_532 = unk_0x1AE42C1660FD6517("scr_sparking_generator", iLocal_338, 0f, 0f, 0.2f, 0f, 0f, 0f, 1f, false, false, false);
					unk_0x428CA6DBD1094446(iLocal_338, true);
					func_94(&uLocal_357, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_350 = unk_0x9CD27B0045628463();
					iLocal_301 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_340)
			{
				func_90();
			}
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (!iLocal_341)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
					{
						if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, false, true, 0))
						{
							if (!unk_0x5F9532F3B5CC2551(iLocal_318))
							{
								if (!unk_0xA6DB27D19ECBB7DA(iLocal_323))
								{
									iLocal_323 = func_89(iLocal_318, 0, 0);
								}
							}
						}
						if (unk_0xC86D67D52A707CF8(iLocal_316, unk_0xD80958FC74E988A6(), true) || unk_0xC86D67D52A707CF8(iLocal_318, unk_0xD80958FC74E988A6(), true))
						{
							unk_0x428CA6DBD1094446(iLocal_318, false);
							unk_0xE1EF3C1216AFF2CD(iLocal_316);
							unk_0xE8854A4326B9E12B(&iLocal_356);
							unk_0x504D54DF3F6F2247(0, 0, 0);
							unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
							unk_0x39E72BC99E6360CB(iLocal_356);
							unk_0x5ABA3986D90D8A3B(iLocal_316, iLocal_356);
							unk_0x3841422E9C488D8C(&iLocal_356);
							func_88();
						}
						unk_0x963D27A58DF860AC(joaat("prop_ld_pipe_single_01"));
						if ((((unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, false, true, 0) && !unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6())) && !unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6())) && func_87(1, 0, 1)) && unk_0x98A4EB5D89A0C952(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_126())
							{
								if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
								{
									iLocal_321 = unk_0xB6997A7EB3F5C8C0();
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
					if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
					{
						if (unk_0x997ABD671D25CA0B(iLocal_316, false))
						{
							if (!unk_0x5F9532F3B5CC2551(iLocal_318) && !unk_0xA6DB27D19ECBB7DA(iLocal_323))
							{
								iLocal_323 = func_89(iLocal_318, 0, 0);
							}
						}
						else if (!unk_0xA6DB27D19ECBB7DA(iLocal_322))
						{
							if (unk_0xA6DB27D19ECBB7DA(iLocal_323))
							{
								unk_0x86A652570E5F25DD(&iLocal_323);
							}
							iLocal_322 = func_74(iLocal_316, 0, 145);
						}
					}
					func_45();
					func_42();
					if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
					{
						if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_316, Local_310, false, true, 0))
						{
							if (!bLocal_342)
							{
								func_41();
							}
						}
					}
					else
					{
						if (unk_0xA6DB27D19ECBB7DA(iLocal_322))
						{
							unk_0x86A652570E5F25DD(&iLocal_322);
						}
						if (unk_0xA6DB27D19ECBB7DA(iLocal_323))
						{
							unk_0x86A652570E5F25DD(&iLocal_323);
						}
						if (unk_0xA6DB27D19ECBB7DA(iLocal_324))
						{
							unk_0x86A652570E5F25DD(&iLocal_324);
						}
						if (unk_0x84A2DD9AC37C35C1(iLocal_316) || unk_0x5F9532F3B5CC2551(iLocal_318))
						{
							func_88();
						}
					}
					if (!unk_0x4C241E39B23DF959(iLocal_319, false))
					{
						if (unk_0xA6DB27D19ECBB7DA(iLocal_324))
						{
							unk_0x86A652570E5F25DD(&iLocal_324);
							if (!unk_0x5F9532F3B5CC2551(iLocal_318) && !unk_0xA6DB27D19ECBB7DA(iLocal_323))
							{
								iLocal_323 = func_89(iLocal_318, 0, 0);
							}
						}
					}
				}
				if (unk_0x4C241E39B23DF959(iLocal_319, false))
				{
					if (iLocal_352 >= 3)
					{
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("bulldozer")))
						{
							if (unk_0xA6DB27D19ECBB7DA(iLocal_324))
							{
								unk_0x86A652570E5F25DD(&iLocal_324);
								if (!unk_0x84A2DD9AC37C35C1(iLocal_316) && !unk_0x5F9532F3B5CC2551(iLocal_318))
								{
									if (unk_0x997ABD671D25CA0B(iLocal_316, false) && !unk_0xA6DB27D19ECBB7DA(iLocal_323))
									{
										iLocal_323 = func_89(iLocal_318, 0, 0);
									}
								}
							}
						}
						else if (!unk_0x84A2DD9AC37C35C1(iLocal_316) && !unk_0x5F9532F3B5CC2551(iLocal_318))
						{
							if (unk_0x997ABD671D25CA0B(iLocal_316, false) && unk_0xA6DB27D19ECBB7DA(iLocal_323))
							{
								unk_0x86A652570E5F25DD(&iLocal_323);
								if (!unk_0xA6DB27D19ECBB7DA(iLocal_324))
								{
									iLocal_324 = func_89(iLocal_319, 0, 0);
								}
							}
						}
					}
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("bulldozer")))
						{
							iLocal_346 = 0;
							while (iLocal_346 < 11)
							{
								if (unk_0x7239B21A38F536BA(iLocal_326[iLocal_346]))
								{
									unk_0x428CA6DBD1094446(iLocal_326[iLocal_346], false);
								}
								iLocal_346++;
							}
						}
					}
				}
				if (!unk_0x5F9532F3B5CC2551(iLocal_318))
				{
					if (unk_0x28D3FED7190D3A0B(iLocal_318))
					{
						iLocal_346 = 0;
						while (iLocal_346 < 11)
						{
							if (unk_0x7239B21A38F536BA(iLocal_326[iLocal_346]))
							{
								unk_0x428CA6DBD1094446(iLocal_326[iLocal_346], false);
							}
							iLocal_346++;
						}
						unk_0x428CA6DBD1094446(iLocal_318, false);
						if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
						{
							if (unk_0x997ABD671D25CA0B(iLocal_316, false))
							{
								unk_0x9F8AA94D6D97DBF4(iLocal_316, true);
								unk_0x1913FE4CBF41C463(iLocal_316, 116, false);
								unk_0x1913FE4CBF41C463(iLocal_316, 29, false);
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
								if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
								{
									unk_0x6B76DC1F3AE6E6A3(iLocal_316, 99);
								}
								if (!unk_0x5F9532F3B5CC2551(iLocal_318))
								{
									unk_0x428CA6DBD1094446(iLocal_318, false);
									unk_0xC5F68BE9613E2D18(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
									unk_0xBA71116ADF5B514C(iLocal_318, true, false);
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
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
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
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_24(sParam2, iParam3, 0);
}

int func_24(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD79DEEFB53455EBA(false);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
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
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_35();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_28();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
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
				switch (Global_14393.f_1)
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_26();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_25();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
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
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_26()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_29();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

int func_29()
{
	func_30();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_30()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_33(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_32(unk_0xD80958FC74E988A6());
			if (func_31(iVar0) && (!func_34(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_31(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_34(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_37()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_39()
{
	Global_14558 = 0;
	func_40();
}

void func_40()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

void func_41()
{
	switch (iLocal_352)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
			{
				if ((unk_0x9CD27B0045628463() - iLocal_350) > 3000)
				{
					func_23(&uLocal_357, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_354 = unk_0x9CD27B0045628463();
					iLocal_350 = unk_0x9CD27B0045628463();
					iLocal_352 = 2;
				}
			}
			break;
		
		case 1:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
			{
				if ((unk_0x9CD27B0045628463() - iLocal_350) > 3000)
				{
					iLocal_350 = unk_0x9CD27B0045628463();
					iLocal_352++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
			{
				if ((unk_0x9CD27B0045628463() - iLocal_350) > 5000 && !func_22())
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						iLocal_355 = unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false));
					}
					if (unk_0x997ABD671D25CA0B(iLocal_316, false))
					{
						if (unk_0x4C241E39B23DF959(iLocal_319, false))
						{
							if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								if (!unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("bulldozer")))
								{
									if (!unk_0xA6DB27D19ECBB7DA(iLocal_324))
									{
										iLocal_324 = func_89(iLocal_319, 0, 0);
										if (unk_0xA6DB27D19ECBB7DA(iLocal_323))
										{
											unk_0x86A652570E5F25DD(&iLocal_323);
										}
									}
								}
							}
							else if (!unk_0xA6DB27D19ECBB7DA(iLocal_324))
							{
								iLocal_324 = func_89(iLocal_319, 0, 0);
								if (unk_0xA6DB27D19ECBB7DA(iLocal_323))
								{
									unk_0x86A652570E5F25DD(&iLocal_323);
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
					iLocal_350 = unk_0x9CD27B0045628463();
					iLocal_352++;
				}
			}
			break;
		
		case 3:
			if (unk_0x9CD27B0045628463() - iLocal_350) > unk_0xD53343AA4FB7DD28(5000, 8000)
			{
				if (!func_22())
				{
					func_23(&uLocal_357, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_350 = unk_0x9CD27B0045628463();
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
			unk_0x4F5212C7AD880DF8(Local_525 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x99AC7F0D8B9C893D(1f);
			unk_0x967278682CB6967A(Local_522, 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x967278682CB6967A(Local_522 - Vector(0f, 4f, 0f), 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x967278682CB6967A(Local_522 - Vector(0f, 8f, 0f), 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x967278682CB6967A(Local_525, 1f);
			unk_0x0A123435A26C36CD();
			iLocal_354 = unk_0x9CD27B0045628463();
			iLocal_348 = 2;
			break;
		
		case 2:
			if ((unk_0x9CD27B0045628463() - iLocal_354) > iLocal_303 || func_44())
			{
				if (unk_0x74AFEF0D2E1E409B(iLocal_532))
				{
					unk_0x8F75998877616996(iLocal_532, false);
				}
				func_43();
				if (!bLocal_344)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_316) && !unk_0x5F9532F3B5CC2551(iLocal_318))
					{
						if (!unk_0x639431E895B9AA57(iLocal_316, iLocal_318, -1, false, false) && !unk_0x639431E895B9AA57(iLocal_316, iLocal_318, 0, false, false))
						{
							func_39();
							unk_0x4EDE34FBADD967A6(0);
							func_23(&uLocal_357, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_344 = true;
						}
					}
				}
				unk_0xDC0F817884CDD856(3, true);
				unk_0x6FE601A64180D423(80f);
				unk_0x1A5AA1208AF5DB59(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, false, true, true);
				unk_0x3F892CAF67444AE7(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_531);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_348 = 3;
			}
			break;
		
		case 3:
			if (unk_0x7239B21A38F536BA(iLocal_318))
			{
				if (!unk_0x28D3FED7190D3A0B(iLocal_318))
				{
				}
			}
			if (iLocal_347 < 2)
			{
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (!unk_0x5F9532F3B5CC2551(iLocal_318))
					{
						unk_0x428CA6DBD1094446(iLocal_318, false);
						unk_0xC5F68BE9613E2D18(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
						unk_0xBA71116ADF5B514C(iLocal_318, true, false);
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
				if (!unk_0x84A2DD9AC37C35C1(iLocal_316) && !unk_0x5F9532F3B5CC2551(iLocal_318))
				{
					if (!unk_0x997ABD671D25CA0B(iLocal_316, false))
					{
						iLocal_347++;
					}
					unk_0x539E0AE3E6634B9F(&iLocal_339);
					if (unk_0x639431E895B9AA57(iLocal_316, iLocal_318, -1, false, false) || unk_0x639431E895B9AA57(iLocal_316, iLocal_318, 0, false, false))
					{
						if (unk_0x639431E895B9AA57(iLocal_316, iLocal_318, -1, false, false))
						{
							bLocal_343 = true;
							Local_313 = { unk_0x3FEF770D40960D5A(iLocal_318, false) + Vector(0f, -1f, -3f) };
						}
						else
						{
							Local_313 = { unk_0x3FEF770D40960D5A(iLocal_318, false) + Vector(0f, 1.5f, -3f) };
						}
						if (unk_0x20B60995556D004F(unk_0xB6997A7EB3F5C8C0(), Local_313, 4.2f, 4f, 5f, false, true, 0))
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_316) && !unk_0x5F9532F3B5CC2551(iLocal_318))
			{
				if (!unk_0x5F9532F3B5CC2551(iLocal_319))
				{
					unk_0xFAEE099C6F890BB8(iLocal_319, false, true, true, false, false, false, false, false);
				}
				unk_0xFAEE099C6F890BB8(iLocal_316, false, true, false, false, false, false, false, false);
				unk_0x428CA6DBD1094446(iLocal_318, false);
				unk_0xE8854A4326B9E12B(&iLocal_356);
				if (bLocal_343)
				{
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), 3000, 0, 2);
					unk_0x504D54DF3F6F2247(0, 0, 0);
					unk_0x15D3A79D4E44B913(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 0.25f, false, 40000f);
				}
				else
				{
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), 3000, 0, 2);
					unk_0x504D54DF3F6F2247(0, 0, 0);
					unk_0x15D3A79D4E44B913(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 0.25f, false, 40000f);
				}
				unk_0x39E72BC99E6360CB(iLocal_356);
				unk_0x5ABA3986D90D8A3B(iLocal_316, iLocal_356);
				unk_0x3841422E9C488D8C(&iLocal_356);
				unk_0x971D38760FBC02EF(iLocal_316, true);
				iLocal_350 = unk_0x9CD27B0045628463();
				iLocal_347++;
			}
			break;
		
		case 2:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
			{
				if ((unk_0x9CD27B0045628463() - iLocal_350) > 500 && !unk_0x997ABD671D25CA0B(iLocal_316, false))
				{
					iLocal_303 = 0;
					if (unk_0x4C241E39B23DF959(iLocal_318, false))
					{
					}
					func_39();
					unk_0x4EDE34FBADD967A6(0);
					func_23(&uLocal_357, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_350 = unk_0x9CD27B0045628463();
					iLocal_347++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
			{
				if (unk_0x20B60995556D004F(iLocal_316, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, false, true, 0) || (unk_0x9CD27B0045628463() - iLocal_350) > 10000)
				{
					func_23(&uLocal_357, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_347++;
				}
			}
			break;
		
		case 4:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
			{
				if (unk_0x20B60995556D004F(iLocal_316, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, false, true, 0) || (unk_0x9CD27B0045628463() - iLocal_350) > 10000)
				{
					if (!unk_0x5F9532F3B5CC2551(iLocal_318))
					{
						unk_0x428CA6DBD1094446(iLocal_318, false);
						unk_0xC5F68BE9613E2D18(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
						unk_0xBA71116ADF5B514C(iLocal_318, true, false);
					}
					iLocal_347++;
				}
			}
			break;
		
		case 5:
			if ((unk_0x9CD27B0045628463() - iLocal_350) > 3000)
			{
				if (unk_0x4C241E39B23DF959(iLocal_318, false))
				{
					unk_0x428CA6DBD1094446(iLocal_318, false);
					unk_0xC5F68BE9613E2D18(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
					unk_0xBA71116ADF5B514C(iLocal_318, true, false);
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
				{
					unk_0x706D57B0F50DA710("RE14A_SAFE");
					if (!unk_0x5F9532F3B5CC2551(iLocal_319))
					{
						unk_0xFAEE099C6F890BB8(iLocal_319, false, false, false, false, false, false, false, false);
					}
					unk_0xFAEE099C6F890BB8(iLocal_316, false, false, false, false, false, false, false, false);
					unk_0xB128377056A54E2A(iLocal_316, true);
					unk_0x63F58F7C80513AAD(iLocal_316, true);
					unk_0xEDF4079F9D54C9A1(iLocal_316, false);
					unk_0x9F8AA94D6D97DBF4(iLocal_316, false);
					unk_0xB604A2942ADED0EE(iLocal_316, joaat("DEFAULT"));
					unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
					unk_0xE8854A4326B9E12B(&iLocal_356);
					unk_0xEA47FE3719165B94(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0f, false, false, false);
					unk_0x58C70CF3A41E4AE7(iLocal_356, true);
					unk_0x39E72BC99E6360CB(iLocal_356);
					unk_0x5ABA3986D90D8A3B(iLocal_316, iLocal_356);
					unk_0x3841422E9C488D8C(&iLocal_356);
				}
				unk_0x1A5AA1208AF5DB59(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, false, true, true);
				unk_0x3F892CAF67444AE7(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_531);
				iLocal_350 = unk_0x9CD27B0045628463();
				iLocal_347++;
			}
			break;
		
		case 6:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
			{
				if ((unk_0x9CD27B0045628463() - iLocal_350) > 6400)
				{
					Var0 = { -477.2774f, -990.0638f, 23.5497f };
					if (unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0()))
					{
						if (unk_0x20B60995556D004F(unk_0xB6997A7EB3F5C8C0(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0x7239B21A38F536BA(iLocal_321))
					{
						if (unk_0x20B60995556D004F(iLocal_321, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0x7239B21A38F536BA(iLocal_319))
					{
						if (unk_0x20B60995556D004F(iLocal_319, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					unk_0xE8854A4326B9E12B(&iLocal_356);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), 3000, 2052, 2);
					unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
					unk_0xFA4EFC79F69D4F07(0, "WORLD_HUMAN_PICNIC", Var0, 304.8172f, 0, true, false);
					unk_0x39E72BC99E6360CB(iLocal_356);
					unk_0x5ABA3986D90D8A3B(iLocal_316, iLocal_356);
					unk_0x3841422E9C488D8C(&iLocal_356);
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
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_49(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
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
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_57(iParam0, iParam1) != 322)
		{
			func_52(func_57(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_51(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
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
	Global_97159 = iParam0;
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
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_55(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_54() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_48();
				}
			}
		}
	}
}

int func_54()
{
	return Global_24444;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
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
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
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
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_60(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_61(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_61(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_62();
	}
}

void func_62()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_63()
{
	func_30();
	switch (Global_97173.f_1729.f_539.f_3213)
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
		return unk_0xA921AA820C25702F(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_65(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar16 = func_68(Var0);
	return uVar16;
}

int func_68(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xD24D37CC275948CC(&cParam0))
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
			Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 2827;
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
			if (iVar1 != 2827)
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

void func_70(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454187[iParam0 /*6*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
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
			Global_2453900 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453900 = 1;
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
	iVar0 = Global_2454187[iParam0 /*6*/][func_71(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_73()
{
	return 1;
}

int func_74(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_75(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_76(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_76(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_76(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
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
		Global_97163 = 1;
		Global_97160 = unk_0x9CD27B0045628463();
		if (func_58(Global_97162))
		{
			func_78(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_58(Global_97162))
		{
			unk_0xF2DD778C22B15BDA();
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
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_79(func_80(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xA921AA820C25702F(Global_97169, 1))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_79(func_80(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xA921AA820C25702F(Global_97169, 2))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_79(func_80(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 2);
				}
			}
			break;
	}
}

void func_79(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
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
	switch (func_82(&Global_24503, 0, 5, 0, unk_0xC30338E8088E2E21()))
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
		if (Global_87667.f_44 == 1)
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
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
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
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
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
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_84(int iParam0)
{
	return func_85(iParam0, Global_34909);
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
	if (Global_34909 == 15)
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
	
	if (unk_0x2B4A15E44DE0F478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (bParam0)
		{
			if (unk_0x5F9532F3B5CC2551(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x5F9532F3B5CC2551(iVar0))
			{
				if (unk_0xBB40DD2270B65366(iVar0, -1) != unk_0xD80958FC74E988A6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0x95EED5A694951F9F(iVar0) < 0.95f || unk_0x95EED5A694951F9F(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

void func_88()
{
	unk_0x706D57B0F50DA710("RE14A_FAIL");
	iLocal_300 = 2;
}

int func_89(int iParam0, bool bParam1, bool bParam2)
{
	return func_75(iParam0, !bParam1, bParam2);
}

void func_90()
{
	if (func_92(1000))
	{
		func_39();
		unk_0x891B5B39AC6302AF(800);
		while (unk_0x797AC7CB535BA28F())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (!unk_0x5F9532F3B5CC2551(iLocal_318))
		{
			unk_0xA1DD317EA8FD4F29(iLocal_318, 0f, 1f, 1f, 200f, 800f, true);
		}
		bLocal_535 = true;
		iLocal_302 = 8;
	}
	switch (iLocal_302)
	{
		case 0:
			func_2(1, 1, 1, 0);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
			unk_0x6178F68A87A4D3A0();
			unk_0xA0EBB943C300E693(false);
			unk_0xA6294919E56FF02A(false);
			unk_0xF7F26C6E9CC9EBB8(false);
			if (unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0()))
			{
				unk_0xAD738C3085FE7E11(unk_0xB6997A7EB3F5C8C0(), true, false);
			}
			unk_0xBE31FD6CE464AC59(Local_307, 50f, 0);
			unk_0x01C7B9B38428AEB6(Local_307, 30f, 0, 0, 0, 0, 0);
			unk_0x0A1CB9094635D1A6(Local_307, 100f, 0);
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
			{
				if (unk_0x20B60995556D004F(unk_0xB6997A7EB3F5C8C0(), Local_307, 8f, 8f, 8f, false, true, 0))
				{
					iLocal_320 = unk_0xB6997A7EB3F5C8C0();
					unk_0xAD738C3085FE7E11(iLocal_320, true, false);
					unk_0xEA386986E786A54F(&iLocal_320);
				}
			}
			if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, false, true, 0))
			{
				unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -477.3538f, -972.67f, 22.5494f, true, false, false, true);
				unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 237.4839f);
			}
			iLocal_529 = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, true, 2);
			iLocal_530 = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, true, 2);
			unk_0x6A25241C340D3822(iLocal_529, "HAND_SHAKE", 0.3f);
			unk_0x6A25241C340D3822(iLocal_530, "HAND_SHAKE", 0.3f);
			func_91();
			unk_0x026FB97D0A425F84(iLocal_529, true);
			unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
			unk_0x4EDE34FBADD967A6(500);
			unk_0x9FBDA379383A52A4(iLocal_530, iLocal_529, 3500, 1, 1);
			unk_0x706D57B0F50DA710("RE14A_START");
			iLocal_353 = unk_0x9CD27B0045628463();
			iLocal_302 = 1;
			break;
		
		case 1:
			if ((unk_0x9CD27B0045628463() - iLocal_353) > 3500)
			{
				unk_0x67C540AA08E4A6F5(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				unk_0x67C540AA08E4A6F5(iLocal_349, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				unk_0x406137F8EF90EAF5(iLocal_326[0], true);
				iLocal_529 = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, true, 2);
				iLocal_530 = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, true, 2);
				unk_0x6A25241C340D3822(iLocal_529, "HAND_SHAKE", 0.3f);
				unk_0x6A25241C340D3822(iLocal_530, "HAND_SHAKE", 0.3f);
				unk_0x9FBDA379383A52A4(iLocal_530, iLocal_529, 4000, 1, 0);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_316);
					unk_0x6FA46612594F7973(iLocal_316, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (unk_0x7239B21A38F536BA(iLocal_339))
				{
					unk_0x961AC54BF0613F5D(iLocal_339, true, true);
					unk_0x539E0AE3E6634B9F(&iLocal_339);
				}
				iLocal_353 = unk_0x9CD27B0045628463();
				iLocal_302 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x9CD27B0045628463() - iLocal_353) > 1500)
			{
				unk_0x67C540AA08E4A6F5(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				iLocal_353 = unk_0x9CD27B0045628463();
				iLocal_302 = 3;
			}
			break;
		
		case 3:
			if ((unk_0x9CD27B0045628463() - iLocal_353) > 500)
			{
				if (unk_0x7239B21A38F536BA(iLocal_326[0]))
				{
					unk_0x428CA6DBD1094446(iLocal_326[0], false);
					unk_0xC5F68BE9613E2D18(iLocal_326[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, true, true, true, false, true);
					unk_0xE7E4C198B0185900(iLocal_326[0], 11, false);
					unk_0xE7E4C198B0185900(iLocal_326[0], 18, false);
					unk_0xE7E4C198B0185900(iLocal_326[0], 19, false);
					unk_0xE7E4C198B0185900(iLocal_326[0], 23, false);
					unk_0xE7E4C198B0185900(iLocal_326[0], 9, false);
					unk_0xE7E4C198B0185900(iLocal_326[0], 12, false);
					unk_0xE7E4C198B0185900(iLocal_326[0], 17, false);
					unk_0x0D53A3B8DA0809D2("scr_reconstruct_pipefall_debris", iLocal_326[0], 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				iLocal_353 = unk_0x9CD27B0045628463();
				iLocal_302 = 4;
			}
			break;
		
		case 4:
			if ((unk_0x9CD27B0045628463() - iLocal_353) > 2000)
			{
				iLocal_529 = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, true, 2);
				iLocal_530 = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, true, 2);
				unk_0x6A25241C340D3822(iLocal_529, "HAND_SHAKE", 0.3f);
				unk_0x6A25241C340D3822(iLocal_530, "HAND_SHAKE", 0.3f);
				unk_0x9FBDA379383A52A4(iLocal_530, iLocal_529, 1000, 3, 3);
				unk_0xA3B0C41BA5CC0BB5(iLocal_349);
				iLocal_353 = unk_0x9CD27B0045628463();
				iLocal_302 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x9CD27B0045628463() - iLocal_353) > 500)
			{
				if (!unk_0x5F9532F3B5CC2551(iLocal_318))
				{
					unk_0x428CA6DBD1094446(iLocal_318, false);
					unk_0x67C540AA08E4A6F5(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
					unk_0xA1DD317EA8FD4F29(iLocal_318, 0f, 1f, 1f, 200f, 800f, true);
					if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
					{
						unk_0x0F804F1DB19B9689(iLocal_316);
					}
					unk_0xEA47FE3719165B94(iLocal_316, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0f, false, false, false);
					unk_0x0D53A3B8DA0809D2("scr_reconstruct_pipe_impact", iLocal_318, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
					func_23(&uLocal_357, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (unk_0xA7A932170592B50E(iLocal_529) && unk_0xA7A932170592B50E(iLocal_530))
					{
						unk_0x6A25241C340D3822(iLocal_529, "HAND_SHAKE", 1.5f);
						unk_0x6A25241C340D3822(iLocal_530, "HAND_SHAKE", 1.5f);
					}
					iLocal_353 = unk_0x9CD27B0045628463();
					iLocal_302 = 6;
				}
			}
			break;
		
		case 6:
			if ((unk_0x9CD27B0045628463() - iLocal_353) > 500)
			{
				iLocal_529 = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, true, 2);
				iLocal_530 = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, true, 2);
				unk_0x6A25241C340D3822(iLocal_529, "HAND_SHAKE", 0.5f);
				unk_0x6A25241C340D3822(iLocal_530, "HAND_SHAKE", 0.5f);
				unk_0x9FBDA379383A52A4(iLocal_530, iLocal_529, 2500, 3, 3);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
				{
					unk_0x6FA46612594F7973(iLocal_316, unk_0x3FEF770D40960D5A(iLocal_316, true) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_353 = unk_0x9CD27B0045628463();
				iLocal_302 = 7;
			}
			break;
		
		case 7:
			if ((unk_0x9CD27B0045628463() - iLocal_353) > 2200 && !iLocal_345)
			{
				if ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && unk_0x8D4D46230B2C353A() == 4) || (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xA4FF579AC0E3AAAE() == 4))
				{
					unk_0x2206BF9A37B7F724("CamPushInNeutral", 0, false);
					unk_0x67C540AA08E4A6F5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_345 = 1;
				}
			}
			if ((unk_0x9CD27B0045628463() - iLocal_353) > 2500)
			{
				if (unk_0x4C241E39B23DF959(iLocal_318, false))
				{
					unk_0x428CA6DBD1094446(iLocal_318, true);
				}
				iLocal_302 = 8;
			}
			break;
		
		case 8:
			unk_0x706D57B0F50DA710("RE14A_PIPES");
			if (unk_0x7239B21A38F536BA(iLocal_326[0]))
			{
				unk_0x539E0AE3E6634B9F(&(iLocal_326[0]));
			}
			if (unk_0x4C241E39B23DF959(iLocal_318, false))
			{
				unk_0x45F6D8EEF34ABEF1(iLocal_318, 250f);
				unk_0x06843DA7060A026B(iLocal_318, Local_307, true, false, false, true);
				unk_0x8E2530AA8ADA980E(iLocal_318, 80f);
				unk_0xDD9B9B385AAC7F5B(Local_307, 50f, 0);
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
			{
				unk_0xE1EF3C1216AFF2CD(iLocal_316);
				unk_0x0F804F1DB19B9689(iLocal_316);
				unk_0xEA47FE3719165B94(iLocal_316, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0f, false, false, false);
			}
			unk_0x026FB97D0A425F84(iLocal_529, false);
			unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
			unk_0x865908C81A2C22E9(iLocal_529, false);
			unk_0x865908C81A2C22E9(iLocal_530, false);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			unk_0xB4EC2312F4E5B1F1(0f);
			unk_0xA0EBB943C300E693(true);
			unk_0xA6294919E56FF02A(true);
			unk_0xF7F26C6E9CC9EBB8(true);
			func_2(0, 1, 1, 0);
			iLocal_350 = unk_0x9CD27B0045628463();
			unk_0xE532F5D78798DAAB(joaat("prop_pipe_stack_01"));
			iLocal_326[1] = unk_0x9A294B2138ABB884(joaat("prop_ld_pipe_single_01"), -457.8815f, -988.9059f, 22.9554f, true, true, false);
			unk_0x8524A8B0171D5E07(iLocal_326[1], -0.1939f, 105.0058f, 77.3964f, 2, true);
			iLocal_326[2] = unk_0x9A294B2138ABB884(joaat("prop_ld_pipe_single_01"), -451.5131f, -986.8079f, 24.6947f, true, true, false);
			unk_0x8524A8B0171D5E07(iLocal_326[2], 24.3941f, 32.5423f, 80.6862f, 2, true);
			iLocal_326[3] = unk_0x9A294B2138ABB884(joaat("prop_ld_pipe_single_01"), -450.8099f, -985.9972f, 24.7104f, true, true, false);
			unk_0x8524A8B0171D5E07(iLocal_326[3], 24.1841f, 110.287f, 78.4357f, 2, true);
			iLocal_326[4] = unk_0x9A294B2138ABB884(joaat("prop_ld_pipe_single_01"), -456.6558f, -987.3979f, 22.9537f, true, true, false);
			unk_0x8524A8B0171D5E07(iLocal_326[4], -0.0264f, 29.5754f, 79.1811f, 2, true);
			iLocal_326[5] = unk_0x9A294B2138ABB884(joaat("prop_ld_pipe_single_01"), -456.1279f, -988.4162f, 22.9889f, true, true, false);
			unk_0x8524A8B0171D5E07(iLocal_326[5], -0.6337f, 108.4339f, 77.9539f, 2, true);
			iLocal_326[6] = unk_0x9A294B2138ABB884(joaat("prop_ld_pipe_single_01"), -457.0807f, -987.3059f, 23.7564f, true, true, false);
			unk_0x8524A8B0171D5E07(iLocal_326[6], 0.0929f, 74.2657f, 79.3839f, 2, true);
			iLocal_326[7] = unk_0x9A294B2138ABB884(joaat("prop_ld_pipe_single_01"), -456.6558f, -983.7804f, 22.9712f, true, true, false);
			unk_0x8524A8B0171D5E07(iLocal_326[7], -0.0264f, 29.5754f, 80.9061f, 2, true);
			iLocal_326[8] = unk_0x9A294B2138ABB884(joaat("prop_ld_pipe_single_01"), -455.3279f, -983.1712f, 22.9564f, true, true, false);
			unk_0x8524A8B0171D5E07(iLocal_326[8], -0.1087f, 109.7339f, 80.9789f, 2, true);
			iLocal_326[9] = unk_0x9A294B2138ABB884(joaat("prop_ld_pipe_single_01"), -456.1632f, -983.9359f, 23.7964f, true, true, false);
			unk_0x8524A8B0171D5E07(iLocal_326[9], -0.3321f, 74.1907f, 81.6089f, 2, true);
			iLocal_326[10] = unk_0x9A294B2138ABB884(joaat("prop_ld_pipe_single_01"), -454.644f, -994.1709f, 23.3329f, true, true, false);
			unk_0x8524A8B0171D5E07(iLocal_326[10], 5.7811f, 104.6058f, 104.6964f, 2, true);
			iLocal_346 = 0;
			while (iLocal_346 < 11)
			{
				if (unk_0x7239B21A38F536BA(iLocal_326[iLocal_346]))
				{
					unk_0x1718DE8E3F2823CA(iLocal_326[iLocal_346], true);
					unk_0x428CA6DBD1094446(iLocal_326[iLocal_346], true);
				}
				iLocal_346++;
			}
			if (bLocal_535)
			{
				unk_0xD4E8E24955024033(800);
				while (unk_0x5C544BC6C57AC575())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			iLocal_341 = 1;
			iLocal_340 = 0;
			break;
	}
}

void func_91()
{
	unk_0x23641AFE870AF385();
	Global_16684 = 0;
}

int func_92(int iParam0)
{
	if (unk_0x5A859503B0C08678())
	{
		if ((unk_0x9CD27B0045628463() - Global_27) > iParam0)
		{
			Global_26 = unk_0x9CD27B0045628463();
		}
		Global_27 = unk_0x9CD27B0045628463();
		if ((unk_0x9CD27B0045628463() - Global_26) > iParam0)
		{
			if (func_93())
			{
				Global_26 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
	}
	return 0;
}

int func_93()
{
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x580417101DDB492F(0, 18) || unk_0x580417101DDB492F(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_94(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 1;
	Global_16689 = 0;
	Global_16687 = iParam7;
	Global_2621441 = 0;
	return func_24(sParam2, iParam3, 0);
}

void func_95(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

int func_96(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_97(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_97(var uParam0)
{
	return func_98(*uParam0, "NULL", uParam0->f_1);
}

int func_98(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA921AA820C25702F(iParam0, 30))
	{
		if (unk_0xA921AA820C25702F(iParam0, 29))
		{
			switch (func_99(iParam0))
			{
				case 0:
					return unk_0x98A4EB5D89A0C952(iParam2);
					break;
				
				case 1:
					return unk_0xD031A9162D01088C(sParam1);
					break;
				
				case 2:
					return unk_0x318234F4F3738AF3(sParam1);
					break;
				
				case 3:
					return unk_0x0145F696AAAAD2E4(sParam1);
					break;
				
				case 4:
					return unk_0x300D614A4C785FC4(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xCB4E8BE8A0063C5D(sParam1);
					break;
				
				case 6:
					return unk_0x2F844A8B08D76685(sParam1, unk_0xA921AA820C25702F(iParam0, 27));
					break;
				
				case 7:
					return unk_0x5F0F0C783EB16C04(iParam2);
					break;
				
				case 8:
					return unk_0x02245FE4BED318B8(iParam2);
					break;
				
				case 9:
					return unk_0xCA7D9B86ECA7481B();
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

int func_99(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xA921AA820C25702F(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_100(var uParam0)
{
	func_101(uParam0, 9, -1, 0);
}

void func_101(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_102(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], iParam1))
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
		if (!unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*2*/], iParam1);
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_102(int iParam0)
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

void func_103(var uParam0, int iParam1)
{
	func_101(uParam0, 0, iParam1, 0);
}

void func_104(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xFC8202EFC642E6F2() >= (uParam0->f_32 + uParam0->f_33) || unk_0xA921AA820C25702F(Global_89784.f_20, 2)) || unk_0xA921AA820C25702F(Global_89784.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 29))
					{
						func_105(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xFC8202EFC642E6F2();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_105(int* iParam0)
{
	func_106(iParam0, "NULL", iParam0->f_1);
}

void func_106(int* iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA921AA820C25702F(*iParam0, 30))
	{
		switch (func_99(*iParam0))
		{
			case 0:
				unk_0x963D27A58DF860AC(iParam2);
				break;
			
			case 1:
				unk_0xD3BD40951412FEF6(sParam1);
				break;
			
			case 2:
				unk_0xD2A71E1A77418A49(sParam1);
				break;
			
			case 3:
				unk_0xDFA2EF8E04127DD5(sParam1, unk_0xA921AA820C25702F(*iParam0, 28));
				break;
			
			case 4:
				unk_0xAF514CABE74CBF15(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x9EEFB62EB27B5792(sParam1);
				break;
			
			case 6:
				unk_0x2F844A8B08D76685(sParam1, unk_0xA921AA820C25702F(*iParam0, 27));
				break;
			
			case 7:
				unk_0xD62A67D26D9653E6(iParam2);
				break;
			
			case 8:
				unk_0x71A78003C8E71424(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x944955FB2A3935C8();
				break;
			
			default:
				break;
		}
		unk_0x933D6A9EEC1BACD0(iParam0, 29);
	}
}

void func_107()
{
	int iVar0;
	
	func_103(&Local_536, joaat("bulldozer"));
	func_103(&Local_536, joaat("utillitruck2"));
	func_103(&Local_536, joaat("prop_pipe_stack_01"));
	if (func_96(&Local_536))
	{
		unk_0x0FC2D89AC25A5814(joaat("utillitruck2"), true);
		unk_0x020E5F00CDA207BA(0.1f);
		unk_0xDC0F817884CDD856(3, false);
		unk_0x1B5C85C612E5256E(Local_304 + Vector(50f, 50f, 50f), Local_304 - Vector(50f, 50f, 50f), false, true, true, true);
		Local_307 = { -455.6561f, -985.8071f, 22.4868f };
		iLocal_318 = unk_0xAF35D0D2583051B0(joaat("utillitruck2"), Local_307, 80f, 1, 1);
		unk_0x2497C4717C8B881E(iLocal_318, 0, 1);
		unk_0xB664292EAECF7FA6(iLocal_318, 3);
		unk_0x7EE3A3C5E4A40CC9(iLocal_318, 1, true);
		unk_0x7EE3A3C5E4A40CC9(iLocal_318, 2, true);
		unk_0x7EE3A3C5E4A40CC9(iLocal_318, 3, false);
		unk_0x7EE3A3C5E4A40CC9(iLocal_318, 4, true);
		unk_0x7EE3A3C5E4A40CC9(iLocal_318, 5, true);
		unk_0x7EE3A3C5E4A40CC9(iLocal_318, 6, false);
		unk_0x7EE3A3C5E4A40CC9(iLocal_318, 7, true);
		unk_0x428CA6DBD1094446(iLocal_318, true);
		unk_0xFAEE099C6F890BB8(iLocal_318, false, false, false, true, false, false, false, false);
		unk_0x5927F96A78577363(iLocal_318, 10000);
		unk_0x93AE6A61BE015BF1(iLocal_318, 5f);
		iLocal_319 = unk_0xAF35D0D2583051B0(joaat("bulldozer"), -472.9444f, -966.671f, 22.5534f, 181.8365f, 1, 1);
		unk_0xA56F01F3765B93A0(Local_307, 10f, true, false, false, false);
		iLocal_326[0] = unk_0x9A294B2138ABB884(joaat("prop_pipe_stack_01"), -453.2f, -986.1f, 59.45f, true, true, false);
		unk_0x8E2530AA8ADA980E(iLocal_326[0], 90f);
		unk_0x428CA6DBD1094446(iLocal_326[0], true);
		unk_0xFAEE099C6F890BB8(iLocal_326[0], true, true, true, true, false, false, false, false);
		unk_0x5927F96A78577363(iLocal_326[0], 10000000);
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
		if (!unk_0xA6DB27D19ECBB7DA(iLocal_325))
		{
		}
		func_108(&Local_536, 0);
		iLocal_533 = 1;
		iLocal_300 = 1;
	}
}

void func_108(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_110(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_109(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_109(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_110(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 30))
		{
			func_111(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_111(var uParam0)
{
	func_112(*uParam0, "NULL", uParam0->f_1);
}

void func_112(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA921AA820C25702F(iParam0, 30))
	{
		switch (func_99(iParam0))
		{
			case 0:
				unk_0xE532F5D78798DAAB(iParam2);
				break;
			
			case 1:
				unk_0xF66A602F829E2A06(sParam1);
				break;
			
			case 2:
				unk_0x01F73A131C18CD94(sParam1);
				break;
			
			case 3:
				unk_0xBE2CACCF5A8AA805(sParam1);
				break;
			
			case 4:
				unk_0xF1160ACCF98A3FC8(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xFF1B8B4AA1C25DC8(sParam1);
				break;
			
			case 6:
				unk_0x7A2D8AD0A9EB9C3F();
				break;
			
			case 7:
				unk_0xC5BC038960E9DB27(iParam2);
				break;
			
			case 8:
				unk_0x2A179DF17CCF04CD(iParam2, unk_0xA921AA820C25702F(iParam0, 26));
				break;
			
			case 9:
				unk_0x88C6814073DD4A73();
				break;
			
			default:
				break;
		}
	}
}

int func_113()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_124())
		{
			return 0;
		}
	}
	if (func_120())
	{
		return 1;
	}
	if (func_114(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_114(float fParam0, bool bParam1)
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
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_31(func_29()))
		{
			iVar36 = func_63();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_115(iVar32, &Var0);
					fVar35 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var0.f_6, true);
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

void func_115(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_116(uParam1, "Abigail1", func_118(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 1:
			func_116(uParam1, "Abigail2", func_118(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 2:
			func_116(uParam1, "Barry1", func_118(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 3:
			func_116(uParam1, "Barry2", func_118(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 4:
			func_116(uParam1, "Barry3", func_118(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 5:
			func_116(uParam1, "Barry3A", func_118(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 6:
			func_116(uParam1, "Barry3C", func_118(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 7:
			func_116(uParam1, "Barry4", func_118(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_117(iParam0), 0, 0);
			break;
		
		case 8:
			func_116(uParam1, "Dreyfuss1", func_118(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 9:
			func_116(uParam1, "Epsilon1", func_118(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 10:
			func_116(uParam1, "Epsilon2", func_118(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 11:
			func_116(uParam1, "Epsilon3", func_118(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 12:
			func_116(uParam1, "Epsilon4", func_118(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 13:
			func_116(uParam1, "Epsilon5", func_118(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 14:
			func_116(uParam1, "Epsilon6", func_118(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 15:
			func_116(uParam1, "Epsilon7", func_118(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 16:
			func_116(uParam1, "Epsilon8", func_118(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 17:
			func_116(uParam1, "Extreme1", func_118(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 18:
			func_116(uParam1, "Extreme2", func_118(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 19:
			func_116(uParam1, "Extreme3", func_118(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 20:
			func_116(uParam1, "Extreme4", func_118(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 21:
			func_116(uParam1, "Fanatic1", func_118(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_117(iParam0), 1, 0);
			break;
		
		case 22:
			func_116(uParam1, "Fanatic2", func_118(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_117(iParam0), 1, 0);
			break;
		
		case 23:
			func_116(uParam1, "Fanatic3", func_118(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_117(iParam0), 0, 1);
			break;
		
		case 24:
			func_116(uParam1, "Hao1", func_118(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_117(iParam0), 0, 1);
			break;
		
		case 25:
			func_116(uParam1, "Hunting1", func_118(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 26:
			func_116(uParam1, "Hunting2", func_118(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 27:
			func_116(uParam1, "Josh1", func_118(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 28:
			func_116(uParam1, "Josh2", func_118(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 29:
			func_116(uParam1, "Josh3", func_118(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 30:
			func_116(uParam1, "Josh4", func_118(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 31:
			func_116(uParam1, "Maude1", func_118(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 32:
			func_116(uParam1, "Minute1", func_118(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 33:
			func_116(uParam1, "Minute2", func_118(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 34:
			func_116(uParam1, "Minute3", func_118(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 35:
			func_116(uParam1, "MrsPhilips1", func_118(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 36:
			func_116(uParam1, "MrsPhilips2", func_118(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 37:
			func_116(uParam1, "Nigel1", func_118(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 38:
			func_116(uParam1, "Nigel1A", func_118(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 39:
			func_116(uParam1, "Nigel1B", func_118(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
		
		case 40:
			func_116(uParam1, "Nigel1C", func_118(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
		
		case 41:
			func_116(uParam1, "Nigel1D", func_118(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
		
		case 42:
			func_116(uParam1, "Nigel2", func_118(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 43:
			func_116(uParam1, "Nigel3", func_118(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 44:
			func_116(uParam1, "Omega1", func_118(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 45:
			func_116(uParam1, "Omega2", func_118(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 46:
			func_116(uParam1, "Paparazzo1", func_118(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 47:
			func_116(uParam1, "Paparazzo2", func_118(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 48:
			func_116(uParam1, "Paparazzo3", func_118(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 49:
			func_116(uParam1, "Paparazzo3A", func_118(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 50:
			func_116(uParam1, "Paparazzo3B", func_118(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 51:
			func_116(uParam1, "Paparazzo4", func_118(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 52:
			func_116(uParam1, "Rampage1", func_118(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 54:
			func_116(uParam1, "Rampage3", func_118(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 55:
			func_116(uParam1, "Rampage4", func_118(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 56:
			func_116(uParam1, "Rampage5", func_118(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 53:
			func_116(uParam1, "Rampage2", func_118(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 57:
			func_116(uParam1, "TheLastOne", func_118(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 58:
			func_116(uParam1, "Tonya1", func_118(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 59:
			func_116(uParam1, "Tonya2", func_118(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 60:
			func_116(uParam1, "Tonya3", func_118(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 61:
			func_116(uParam1, "Tonya4", func_118(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 62:
			func_116(uParam1, "Tonya5", func_118(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_116(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_117(int iParam0)
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

struct<2> func_118(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_119(iParam0) };
	if (unk_0xCA042B6957743895(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_119(int iParam0)
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

int func_120()
{
	if (func_123() && !func_124())
	{
		return 1;
	}
	if (func_122() && func_121())
	{
		return 1;
	}
	return 0;
}

bool func_121()
{
	return Global_96891 > 0;
}

int func_122()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_123()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_124()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_125()
{
	if (!func_84(5))
	{
		return 1;
	}
	if (func_120())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_124())
		{
			return 0;
		}
	}
	if (func_114(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_126()
{
	if ((Global_97162 == func_67() && unk_0xD2D57F1D764117B1()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

void func_127(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_129(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_97159 = 0;
	func_128();
}

void func_128()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0x0FC2D89AC25A5814(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)), true);
		}
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
	}
}

void func_129(int iParam0)
{
	Global_97162 = iParam0;
}

int func_130(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
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
		if (!func_171())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_124())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_49(0))
		{
			return 0;
		}
		if (func_120())
		{
			return 0;
		}
		if (func_170())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_31(func_29()))
		{
			if (func_114(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_169(iParam3))
		{
			return 0;
		}
		if (func_31(func_29()))
		{
			if (func_168(func_29()) == 4 || func_168(func_29()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_29()))
		{
			if (!func_167(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_166(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9CD27B0045628463() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_165())
		{
			return 0;
		}
		if (unk_0xA33CDCCDA663159E())
		{
			return 0;
		}
		if (unk_0xD2D57F1D764117B1())
		{
			return 0;
		}
		if (!func_156(4))
		{
			return 0;
		}
		if (!func_84(5))
		{
			return 0;
		}
		if (func_155(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x26B0E73D7EAAF4D3(unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())))
		{
			if ((unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(377.153f, -717.567f, 10.0536f) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(320.9934f, 265.2515f, 82.1221f)) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_155(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_169(30) && !func_155(30, 0))
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
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_154(iVar8))
				{
					if (func_132(iVar4))
					{
						if (!func_131(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var5) < (210f * 210f))
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

bool func_131(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_133(iVar0);
}

int func_133(int iParam0)
{
	return func_134(iParam0, 1);
}

int func_134(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_154(iParam0))
	{
		return 0;
	}
	func_135(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_136(func_147(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_136(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_146(iParam0, iParam1))
	{
		iVar0 = func_145(iParam1);
		iVar1 = func_143(iParam0);
		iVar2 = (func_143(iParam0) - func_143(iParam1));
		iVar3 = (func_145(iParam0) - func_145(iParam1));
		iVar4 = (func_142(iParam0) - func_142(iParam1));
		iVar5 = (func_141(iParam0) - func_141(iParam1));
		iVar6 = (func_140(iParam0) - func_140(iParam1));
		iVar7 = (func_139(iParam0) - func_139(iParam1));
	}
	else
	{
		iVar0 = func_145(iParam0);
		iVar1 = func_143(iParam1);
		iVar2 = (func_143(iParam1) - func_143(iParam0));
		iVar3 = (func_145(iParam1) - func_145(iParam0));
		iVar4 = (func_142(iParam1) - func_142(iParam0));
		iVar5 = (func_141(iParam1) - func_141(iParam0));
		iVar6 = (func_140(iParam1) - func_140(iParam0));
		iVar7 = (func_139(iParam1) - func_139(iParam0));
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
		iVar4 = (iVar4 + func_138(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_137(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_137(float fParam0, float fParam1, float fParam2)
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

int func_138(int iParam0, int iParam1)
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

int func_139(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_140(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_141(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_142(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_143(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_144(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
}

int func_144(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_145(int iParam0)
{
	return iParam0 & 15;
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_154(iParam1) || !func_154(iParam0))
	{
		return 1;
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
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_147()
{
	var uVar0;
	
	func_153(&uVar0, unk_0x494E97C2EF27C470());
	func_152(&uVar0, unk_0x13D2B8ADD79640F2());
	func_151(&uVar0, unk_0x25223CA6B4D20B7F());
	func_150(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_149(&uVar0, unk_0xBBC72712E80257A1());
	func_148(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_148(var uParam0, int iParam1)
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

void func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_150(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_145(*uParam0);
	iVar1 = func_143(*uParam0);
	if (iParam1 < 1 || iParam1 > func_138(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_151(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_152(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_154(int iParam0)
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
	iVar0 = func_139(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_140(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_141(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_143(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_145(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_142(iParam0);
	if (iVar5 < 1 || iVar5 > func_138(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_155(int iParam0, int iParam1)
{
	if (unk_0xA921AA820C25702F(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_156(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
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
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_164()) || Global_96220) || Global_24446) || func_163()) || func_36(8, -1)) || func_162()) || func_161()) || func_160()) || func_159()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_164()) || Global_24446) || func_163()) || func_36(8, -1)) || func_160()) || func_162()) || func_161()) || func_159()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_164()) || Global_96220) || Global_24446) || func_163()) || func_36(8, -1)) || func_160()) || func_162()) || func_161()) || func_159()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_164()) || Global_96220) || Global_24446) || func_163()) || func_36(8, -1)) || func_162()) || func_161()) || func_159()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_164() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_36(8, -1)) || func_159()) || func_158()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_36(8, -1) || func_162()) || func_161()) || func_158()) || func_157())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_164()) || Global_24446) || func_163()) || func_36(8, -1)) || func_161()) || func_160()) || func_159()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_164()) || func_161()) || Global_96220) || Global_24446) || func_163()) || Global_35953) || func_36(8, -1)) || func_160()) || func_158()) || func_159()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_164()) || Global_96220) || Global_24446) || func_163()) || func_36(8, -1)) || func_160()) || func_158()) || func_162()) || func_161()) || func_159())
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

var func_157()
{
	return Global_89823.f_1;
}

int func_158()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_159()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_161()
{
	return Global_89836.f_291 > 0;
}

bool func_162()
{
	return Global_89836.f_290 > 0;
}

var func_163()
{
	return Global_1315898;
}

int func_164()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_165()
{
	func_28();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0)
{
	return func_146(func_147(), iParam0);
}

int func_167(int iParam0, int iParam1, int iParam2)
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

int func_168(int iParam0)
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_169(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_171())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_170()
{
	int iVar0;
	
	if (Global_24594)
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xBB40DD2270B65366(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_171()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_172()
{
	if (iLocal_533)
	{
		if (!iLocal_534)
		{
			unk_0x706D57B0F50DA710("RE14A_FAIL");
			func_204();
			if (!unk_0x84A2DD9AC37C35C1(iLocal_316))
			{
				unk_0x1913FE4CBF41C463(iLocal_316, 317, true);
			}
			if (!unk_0x5F9532F3B5CC2551(iLocal_321))
			{
				if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_321, false) && !unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_321, 50f, 50f, 50f, false, true, 0))
				{
					func_184(iLocal_321, 0, 145);
				}
			}
			iLocal_346 = 0;
			while (iLocal_346 < 11)
			{
				if (unk_0x7239B21A38F536BA(iLocal_326[iLocal_346]))
				{
					unk_0x428CA6DBD1094446(iLocal_326[iLocal_346], false);
				}
				iLocal_346++;
			}
			if (!unk_0x5F9532F3B5CC2551(iLocal_318))
			{
				unk_0x45F6D8EEF34ABEF1(iLocal_318, 0f);
				unk_0x428CA6DBD1094446(iLocal_318, false);
			}
			if (unk_0x7239B21A38F536BA(iLocal_338))
			{
				unk_0x428CA6DBD1094446(iLocal_338, false);
			}
			unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			unk_0xA0EBB943C300E693(true);
			unk_0xA6294919E56FF02A(true);
			func_2(0, 1, 1, 0);
			iLocal_341 = 1;
			unk_0x1D408577D440E81E(1f);
			unk_0xF66A602F829E2A06("re@construction");
			if (unk_0xA7A932170592B50E(iLocal_528))
			{
				unk_0x865908C81A2C22E9(iLocal_528, false);
				unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
				unk_0xB4EC2312F4E5B1F1(0f);
				unk_0x6D0858B8EDFD2B7D(0f, 1f);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
				unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
			}
			if (unk_0xA6DB27D19ECBB7DA(iLocal_322))
			{
				unk_0x86A652570E5F25DD(&iLocal_322);
			}
			if (unk_0xA6DB27D19ECBB7DA(iLocal_323))
			{
				unk_0x86A652570E5F25DD(&iLocal_323);
			}
			if (unk_0xA6DB27D19ECBB7DA(iLocal_324))
			{
				unk_0x86A652570E5F25DD(&iLocal_324);
			}
			if (unk_0xA6DB27D19ECBB7DA(iLocal_325))
			{
				unk_0x86A652570E5F25DD(&iLocal_325);
			}
		}
		unk_0x0027501B9F3B407E(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 1);
		unk_0x020E5F00CDA207BA(1f);
		unk_0xDC0F817884CDD856(3, true);
		unk_0x77A84429DD9F0A15();
		unk_0xD37401D78A929A49();
	}
	func_108(&Local_536, 0);
	func_173(-1);
	unk_0x1090044AD1DA76FA();
}

void func_173(int iParam0)
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
	if (func_126())
	{
		func_177(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_97164 = unk_0x9CD27B0045628463();
		func_176(30000);
		StringCopy(&cVar0, func_175(Global_97162, 1), 64);
		if (func_66(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x71862B1D855F32E1(&cVar0, Global_97159, (unk_0x9CD27B0045628463() - Global_97160), 0);
	}
	else if (unk_0xA921AA820C25702F(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xE80492A9AC099A93(&Global_97169, 0);
	}
	func_174(&Global_24503);
	Global_97163 = 0;
	func_129(-1);
}

void func_174(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

char* func_175(int iParam0, bool bParam1)
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

void func_176(int iParam0)
{
	Global_35460 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_177(int iParam0)
{
	func_178(iParam0, 0, func_183(iParam0));
}

void func_178(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_147();
	func_181(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_180(iParam0, &uVar0);
	Var1 = { func_179(&uVar0) };
}

struct<16> func_179(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
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
	StringConCat(&Var0, ":", 64);
	iVar16 = func_139(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_142(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_145(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_143(*uParam0), 64);
	return Var0;
}

void func_180(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_181(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_143(*uParam0);
	iVar1 = func_145(*uParam0);
	iVar2 = func_142(*uParam0);
	iVar3 = func_141(*uParam0);
	iVar4 = func_140(*uParam0);
	iVar5 = func_139(*uParam0);
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
	iVar6 = func_138(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_138(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_182(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_182(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_153(uParam0, iParam1);
	func_152(uParam0, iParam2);
	func_151(uParam0, iParam3);
	func_150(uParam0, iParam4);
	func_149(uParam0, iParam5);
	func_148(uParam0, iParam6);
}

int func_183(int iParam0)
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

int func_184(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0xA6E9C38DB51D7748(iParam0, &uVar0);
		if (!unk_0xCA042B6957743895(sVar1))
		{
			if (unk_0xD24D37CC275948CC(sVar1) == unk_0xD24D37CC275948CC("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_185(iParam0, iParam2);
	return 1;
}

void func_185(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_190(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xBB40DD2270B65366(iParam0, -1);
		if (!unk_0x7239B21A38F536BA(iVar0))
		{
			iVar0 = unk_0x83F969AA1EE2A664(iParam0, -1);
		}
		if (unk_0x7239B21A38F536BA(iVar0) && !unk_0x84A2DD9AC37C35C1(iVar0))
		{
			if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97173.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x9F47B058362C84B5(iParam0) == Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0xCA042B6957743895(&(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(iParam0), &(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97173.f_18338.f_4800[iVar1] = iVar2;
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
		if (unk_0x9F47B058362C84B5(iParam0) == Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0xCA042B6957743895(&(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(iParam0), &(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97173.f_18338.f_4798 = iParam1;
	Global_67865 = iParam0;
	Global_97173.f_18338.f_4796 = 1;
	func_186(iParam0, &(Global_97173.f_18338.f_4742));
}

void func_186(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		func_189(uParam1);
		uParam1->f_42 = unk_0x9F47B058362C84B5(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7CE1CCB9B293020E(iParam0), 16);
		*uParam1 = unk_0xF11BC2DD9A3E7195(iParam0);
		unk_0xA19435F193E081AC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x3BC4245933A166F7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB635392A4938B3C3(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x0EE21293DAD47C95(iParam0);
		uParam1->f_43 = unk_0x2BB9230590DA5E8A(iParam0);
		uParam1->f_45 = unk_0xB3ED1BFB4BE636DC(iParam0);
		uParam1->f_46 = unk_0x25BC98A59C2EA962(iParam0);
		unk_0x8389CD56CA8072DC(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x7619EEE8C886757F(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x8C4B92553E4766A5(iParam0, 2))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 28);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 3))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 29);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 30);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x52F357A30698BCCE(iParam0, false))
		{
			uParam1->f_44 = unk_0xF8C397922FC03F41(iParam0);
		}
		if (unk_0xA0948AB42D7BA0DE(uParam1->f_42))
		{
			if (unk_0x4198AB0022B15F87(iParam0))
			{
				switch (unk_0x9B0F3DCA3DB0F4CD(iParam0))
				{
					case 2:
					case 0:
						unk_0xE80492A9AC099A93(&(uParam1->f_53), 23);
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xE80492A9AC099A93(&(uParam1->f_53), 23);
						unk_0xE80492A9AC099A93(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x678B9BB8C3F58FEB(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 9);
		}
		if (unk_0x4AF9BD80EEBEB453(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 10);
		}
		if (unk_0xF095C0405307B21B(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 13);
			unk_0xB64CF2CCA9D95F52(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x910A32E7AAD2656C(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 12);
		}
		func_188(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(iParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), func_187(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x060D935D3981A275(iParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_53), 11);
		}
		if (unk_0x05661B80A8C9165F(iParam0, "IgnoredByQuickSave") && unk_0xDACE671663F2F5DB(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_53), 27);
		}
	}
}

int func_187(int iParam0)
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

int func_188(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4C241E39B23DF959(*iParam0, false))
	{
		return 0;
	}
	if (unk_0x33F2E3FE70EAAE1D(*iParam0) == 0)
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
			if (unk_0x84B233A8C8FC8AE7(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x772960298DA26FDB(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB3924ECD70E095DC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB3924ECD70E095DC(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_189(var uParam0)
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

int func_190(int iParam0)
{
	if ((((((((((!unk_0x7239B21A38F536BA(iParam0) || !unk_0x4C241E39B23DF959(iParam0, false)) || func_202(iParam0, 0, 0)) || func_202(iParam0, 1, 0)) || func_202(iParam0, 2, 0)) || func_201(iParam0) != 145) || func_200(iParam0)) || func_199(iParam0)) || func_198(iParam0)) || func_197(iParam0)) || !func_191(unk_0x9F47B058362C84B5(iParam0)))
	{
		if (func_199(iParam0))
		{
		}
		if (func_199(iParam0))
		{
		}
		if (func_202(iParam0, 0, 0))
		{
		}
		if (func_202(iParam0, 1, 0))
		{
		}
		if (func_202(iParam0, 2, 0))
		{
		}
		if (func_201(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_191(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_192(iParam0))
	{
		return 0;
	}
	if (((unk_0x45A9187928F4B9E3(iParam0) || unk_0xA0948AB42D7BA0DE(iParam0)) || unk_0xDCE4334788AF94EA(iParam0)) || unk_0xAB935175B22E822B(iParam0))
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

int func_192(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x19AAC8F07BFEC53E(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x10FAB35428CCC9D7())) || (iParam0 == joaat("buffalo3") && !unk_0x10FAB35428CCC9D7())) || (iParam0 == joaat("gauntlet2") && !unk_0x10FAB35428CCC9D7())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x10FAB35428CCC9D7())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_171())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xA7A866D21CD2329B())
		{
			if (unk_0x33468EDC08E371F6(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD4D7B033C3AA243C(Var1.f_0))
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
		if ((((!func_196() && !func_195()) && !func_194()) && !func_193()) && !func_171())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x4D982ADB1978442D() || unk_0x48AF36444B965238()) || unk_0xA72BC0B675B1519E())
		{
		}
		else if (!func_194())
		{
			return 0;
		}
	}
	return 1;
}

int func_193()
{
	return 0;
}

int func_194()
{
	return 1;
}

int func_195()
{
	return 1;
}

int func_196()
{
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x9F47B058362C84B5(iParam0);
	sVar1 = unk_0x7CE1CCB9B293020E(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x0C515FAB3FF9EA92(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_192(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7239B21A38F536BA(Global_87550[iVar0]))
		{
			if (Global_87550[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(iParam0) && unk_0x4C241E39B23DF959(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7239B21A38F536BA(Global_87520[iVar0]) && unk_0x4C241E39B23DF959(Global_87520[iVar0], false))
			{
				if (Global_87520[iVar0] == iParam0 && unk_0x9F47B058362C84B5(Global_87520[iVar0]) == unk_0x9F47B058362C84B5(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(Global_66960.f_484[24]))
	{
		if (iParam0 == Global_66960.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7239B21A38F536BA(Global_66960.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_66960.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 145;
	}
	if (!unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_87520[iVar0]))
		{
			if (Global_87520[iVar0] == iParam0)
			{
				return Global_87530[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_202(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x7239B21A38F536BA(iParam0) || !unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_203(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xA921AA820C25702F(Global_97173.f_5486[iVar9], 0))
		{
			if (unk_0xCEE4490CD57BB3C2(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_203(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_204()
{
	Global_14558 = 0;
	func_205();
}

void func_205()
{
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0x9AEB285D1818C9AC();
		Global_16703 = 0;
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

