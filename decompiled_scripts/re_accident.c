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
	if (unk_0x5EBD03AF78E7B4DB(11))
	{
		func_174();
	}
	if (unk_0x34CEB9721AC6A0A9() > 18 || unk_0x34CEB9721AC6A0A9() < 5)
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	if (func_132(Local_305, -1, 0, 0, 0))
	{
		func_129(-1);
	}
	else
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x1F85F8C7CC4639AE())
		{
			if (!func_128())
			{
				if (func_127())
				{
					func_174();
				}
			}
			unk_0x4789FEFEDF029858("RE_CA", 0);
			switch (iLocal_301)
			{
				case 0:
					if (func_115())
					{
						func_174();
					}
					func_109();
					func_106(&Local_537);
					break;
				
				case 1:
					func_22();
					func_106(&Local_537);
					func_13();
					break;
				
				case 2:
					if (((unk_0xDC5D81351D6A4DDB(iLocal_317) && unk_0xD61D0CA14AE902DF(iLocal_317, 1)) && iLocal_348 < 5) && !bLocal_345)
					{
						func_12();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_174();
		}
	}
}

void func_1()
{
	if (iLocal_534 && !iLocal_535)
	{
		unk_0x9444470D6D9ADB88("RE14A_FAIL");
		iLocal_347 = 0;
		while (iLocal_347 < 11)
		{
			if (unk_0xDC5D81351D6A4DDB(uLocal_327[iLocal_347]))
			{
				unk_0xB29E08C7AB729BAD(uLocal_327[iLocal_347], 0);
			}
			iLocal_347++;
		}
		if (!unk_0x7112137033807390(iLocal_319, 0))
		{
			unk_0x70B1045E099298C1(iLocal_319, 0f);
			unk_0xB29E08C7AB729BAD(iLocal_319, 0);
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_339))
		{
			unk_0xB29E08C7AB729BAD(iLocal_339, 0);
		}
		unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
		unk_0xDC374DA4DC566237(1);
		unk_0x85685830EFB9A55E(1);
		func_2(0, 1, 1, 0, 0);
		iLocal_342 = 1;
		unk_0xDED73F11B8CB95B1(1f);
		unk_0x4DC885EA8D6AF7FC("re@construction");
		if (unk_0x37B568B777BC65F9(uLocal_529))
		{
			unk_0x77F0486CE0E598D5(uLocal_529, 0);
			unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
			unk_0xD87B76260C547F31(0f);
			unk_0xAA32DD4848CF93E0(0f, 1065353216);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
			unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), 0);
		}
		if (unk_0xCE3CB618AFE55EFB(uLocal_323))
		{
			unk_0xE1623437A3194332(&uLocal_323);
		}
		if (unk_0xCE3CB618AFE55EFB(uLocal_324))
		{
			unk_0xE1623437A3194332(&uLocal_324);
		}
		if (unk_0xCE3CB618AFE55EFB(uLocal_325))
		{
			unk_0xE1623437A3194332(&uLocal_325);
		}
		if (unk_0xCE3CB618AFE55EFB(uLocal_326))
		{
			unk_0xE1623437A3194332(&uLocal_326);
		}
		iLocal_535 = 1;
	}
	if (unk_0xDC5D81351D6A4DDB(uLocal_327[0]) || unk_0xDC5D81351D6A4DDB(uLocal_327[1]))
	{
		if (!unk_0x317672E799676CA5(Local_308 + Vector(20f, 0f, 0f), 30f) && !unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), Local_308, 80f, 80f, 80f, 0, 1, 0))
		{
			func_174();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_11(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(0);
			}
			if (!func_10())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_9(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_11(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_9(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_7(unk_0xD4E735F4B6A956AC())) && !func_4(unk_0xD4E735F4B6A956AC(), 0)) && !func_3()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_7(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
		}
		Global_71203 = 0;
	}
}

bool func_3()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_4(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_5(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			bVar0 = unk_0xE46ECB9FD23D3264(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_5(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
	}
	if (Global_1312837[iVar1] == 1)
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

int func_6()
{
	return Global_1312736;
}

int func_7(int iParam0)
{
	if (func_4(iParam0, 0))
	{
		return 1;
	}
	if (func_8())
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_9(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0xDA9416DF9C88432D() != iParam0 && uParam2)
		{
			unk_0x5126E6F88EF5B7A1(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_10()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_11(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 13);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 13);
	}
}

void func_12()
{
	if (iLocal_352 == -1)
	{
		iLocal_352 = unk_0xFD34717937104F1C() + 5000;
	}
	if (unk_0xFD34717937104F1C() > iLocal_352)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_319))
		{
			unk_0xB29E08C7AB729BAD(iLocal_319, 0);
			unk_0xFAE5E5AC968944E8(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (!unk_0x7112137033807390(iLocal_319, 0))
			{
				unk_0x67697F97F2A7EE10(iLocal_319, 1, 0);
			}
		}
	}
}

void func_13()
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		func_21();
		func_20();
		func_17();
		func_14();
	}
}

void func_14()
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
		if (unk_0x08198953697A5A22(&Var1, Local_229[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_229.f_0)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + unk_0x499324B3EF19C288(Local_229[(iVar0 - 1) /*5*/], Local_229[iVar0 /*5*/], 1));
				}
				if (Local_229[iVar0 /*5*/].f_4)
				{
					if (unk_0x08198953697A5A22(&Var1, Local_229[iVar0 /*5*/]))
					{
						fVar6 = unk_0x499324B3EF19C288(Local_229[iVar0 /*5*/], Var1, 1);
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
				iLocal_224 = unk_0xFD34717937104F1C();
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
		unk_0x1977C4601F469D7B();
		fVar9 = (unk_0xBBDA792448DB5A89((unk_0xFD34717937104F1C() - iLocal_224)) / fLocal_300);
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
						func_15(iVar0, 1);
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
						func_15(iVar0, 1);
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
			if ((unk_0xFD34717937104F1C() - Local_66[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0x25C7CCF1CBB8C92D(Local_66[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((unk_0xFD34717937104F1C() - Local_66[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0x18F3ABCEA09948FB(Local_66[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_15(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				func_16(Local_229[(iParam0 / 2) /*5*/] + Local_229[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_58, fLocal_58, fLocal_58), iParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_16(Local_229[(iParam0 / 2) /*5*/] + Vector(fLocal_58, fLocal_58, fLocal_58), iParam1);
		}
	}
}

void func_16(struct<3> Param0, int iParam3)
{
	if (iLocal_223 == 0)
	{
		iParam3 = 0;
	}
	unk_0x18F3ABCEA09948FB(Local_66[iLocal_226 /*5*/]);
	if (Local_66[iLocal_226 /*5*/].f_4 != 0)
	{
		unk_0x25C7CCF1CBB8C92D(Local_66[iLocal_226 /*5*/].f_1, 0.4f, 1f);
	}
	Local_66[iLocal_226 /*5*/].f_4 = unk_0xFD34717937104F1C();
	Local_66[iLocal_226 /*5*/].f_1 = { Param0 };
	Local_66[iLocal_226 /*5*/] = unk_0x5F55280D2F9FC5F4(Param0, uLocal_55, iParam3);
	iLocal_226++;
	if (iLocal_226 >= 31)
	{
		iLocal_226 = 0;
	}
}

void func_17()
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
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0xD73B1037F6BD4B90(0, 24) && unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
			{
				if (iLocal_56 == 0)
				{
					unk_0xE061C3261E51F663(2f, 8f, 4);
					iLocal_56 = unk_0xFD34717937104F1C() + 250;
				}
				if (unk_0xFD34717937104F1C() > iLocal_56)
				{
					if (!bLocal_46)
					{
						fVar4 = 9999.9f;
						Local_59 = { func_19() };
						iVar0 = 0;
						while (iVar0 < Local_229.f_0)
						{
							if (unk_0xCE3CB618AFE55EFB(Local_229[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0x499324B3EF19C288(Local_59, unk_0x1C8DAFF0573242F7(Local_229[iVar0 /*5*/].f_3), 1);
								fVar3 = unk_0x499324B3EF19C288(Local_229[iVar0 /*5*/], unk_0x1C8DAFF0573242F7(Local_229[iVar0 /*5*/].f_3), 1);
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
								if (unk_0x69E48309C7AE810E((iLocal_53 - iVar5)) > 1)
								{
									iLocal_53 = -1;
								}
								if (iLocal_53 == -1)
								{
									iLocal_53 = iLocal_52;
								}
								if (unk_0x69E48309C7AE810E((iLocal_53 - iVar5)) < 3 && unk_0x69E48309C7AE810E((iLocal_53 - iVar5)) > 0)
								{
									if (iLocal_53 < iVar5)
									{
										iVar6 = iLocal_53;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0xCE3CB618AFE55EFB(Local_229[iVar6 /*5*/].f_3))
											{
												if (unk_0x1C05D741948BDE08(Local_229[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xE8C2974337833D20(Local_229[iVar6 /*5*/].f_3, 0);
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
											if (unk_0xCE3CB618AFE55EFB(Local_229[iVar6 /*5*/].f_3))
											{
												if (unk_0x1C05D741948BDE08(Local_229[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xE8C2974337833D20(Local_229[iVar6 /*5*/].f_3, 0);
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
									if (unk_0xCE3CB618AFE55EFB(Local_229[iVar5 /*5*/].f_3))
									{
										if (unk_0x1C05D741948BDE08(Local_229[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xE8C2974337833D20(Local_229[iVar5 /*5*/].f_3, 0);
											Local_229[iVar5 /*5*/].f_4 = 1;
											iLocal_54 = (iLocal_54 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (unk_0xCE3CB618AFE55EFB(Local_229[iVar5 /*5*/].f_3))
									{
										if (unk_0x1C05D741948BDE08(Local_229[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xE8C2974337833D20(Local_229[iVar5 /*5*/].f_3, 0);
											Local_229[iVar5 /*5*/].f_4 = 1;
											iLocal_54 = (iLocal_54 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_18(Local_229[iVar5 + 1 /*5*/]))
									{
										if (unk_0xCE3CB618AFE55EFB(Local_229[iVar5 /*5*/].f_3))
										{
											if (unk_0x1C05D741948BDE08(Local_229[iVar5 /*5*/].f_3) > 0)
											{
												unk_0xE8C2974337833D20(Local_229[iVar5 /*5*/].f_3, 0);
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

int func_18(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_19()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	var uVar8;
	
	iVar0 = unk_0xEB808D3948D79F4B(unk_0xA19140A5C42D8715());
	if (unk_0xDC5D81351D6A4DDB(iVar0))
	{
		iVar1 = unk_0x4F9AEAB2CC029A5C(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { unk_0xB31A4B66C16032CC(iVar0, iVar1) };
		Var2 = { unk_0x2F230B37E9FFF23F(Var2, unk_0x552C823E1D2A019C(iVar0), 0.35f, 0f, -0.15f) };
		unk_0x8F7BA8E028ADF980(Var2, &uVar8, 0, 0);
		Var5 = { Var2.f_0, Var2.f_1, uVar8 };
	}
	return Var5;
}

void func_20()
{
	int iVar0;
	
	if (iLocal_48)
	{
		if (iLocal_222)
		{
			iVar0 = 0;
			while (iVar0 < Local_66.f_0)
			{
				unk_0x18F3ABCEA09948FB(Local_66[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_48 = 0;
		iLocal_222 = 1;
		iLocal_224 = unk_0xFD34717937104F1C();
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

void func_21()
{
	if (!iLocal_49)
	{
		iLocal_49 = 1;
	}
}

void func_22()
{
	switch (iLocal_302)
	{
		case 0:
			unk_0x61346376C1469A0E("CONSTRUCTION_ACCIDENT_1", false, -1);
			unk_0x6D68030C791111E0("re@construction");
			if (Local_537.f_32 <= 0)
			{
				Local_537.f_32 = unk_0x817B152F7462D506();
			}
			func_105(&Local_537, joaat("s_m_m_dockwork_01"));
			func_105(&Local_537, joaat("prop_generator_01a"));
			func_105(&Local_537, joaat("p_amb_phone_01"));
			func_102(&Local_537);
			if ((unk_0x61346376C1469A0E("CONSTRUCTION_ACCIDENT_1", false, -1) && unk_0x39C2D9AB77873F84("re@construction")) && func_98(&Local_537))
			{
				if (unk_0x1095F403F52B42E1(iLocal_319, 0))
				{
					iLocal_317 = unk_0x91A7C8CA5E332C03(iLocal_319, 26, joaat("s_m_m_dockwork_01"), -1, 1, 1);
					unk_0x72A0FF8C49CFFC0D(iLocal_317, 0, 1, 0, 0);
					unk_0x72A0FF8C49CFFC0D(iLocal_317, 3, 1, 1, 0);
					unk_0x72A0FF8C49CFFC0D(iLocal_317, 4, 0, 1, 0);
					unk_0x72A0FF8C49CFFC0D(iLocal_317, 8, 0, 0, 0);
					unk_0x3F01127ECD227890(iLocal_317, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, 0, 0, 0);
					iLocal_340 = unk_0xFCFC8CC5FF74580D(joaat("p_amb_phone_01"), -455.6561f, -985.8071f, 22.4868f, 1, 1, 0);
					unk_0xA5DE74AE39867B03(joaat("p_amb_phone_01"));
					unk_0x96B71B23D409A3DB(iLocal_340, iLocal_317, unk_0xF622A022C26057AA(iLocal_317, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x3B7A32E04BBE59A5(iLocal_317, 17, 1);
					unk_0xA78BBA5574A997CD(iLocal_317, 1);
					unk_0x1F4E5EFBFE503FB3(iLocal_317, 1);
					unk_0x96BFF0680C7B6FD5(iLocal_317, 0);
					func_97(&uLocal_358, 3, iLocal_317, "RECONACWorker", 0, 1);
					unk_0x4FE3554969185993(iLocal_317, "S_M_Y_GENERICWORKER_01_WHITE_01");
					uLocal_318 = unk_0x35C6E06B120EB2E3(26, joaat("s_m_m_dockwork_01"), -462.2982f, -978.3272f, 65f, 221.4041f, 1, 1);
					unk_0x1F4E5EFBFE503FB3(uLocal_318, 1);
					unk_0x98D1B1BD9C3AA456(iLocal_318, 1, 1);
					unk_0xB29E08C7AB729BAD(iLocal_318, 1);
					unk_0xB3CE71A0BEB6D4C6(iLocal_317, joaat("empty"));
					unk_0xAD9E9AAB3370CC2C(joaat("empty"), 24);
					unk_0xAD9E9AAB3370CC2C(joaat("empty"), 46);
					unk_0xAD9E9AAB3370CC2C(joaat("empty"), 61);
					unk_0xAD9E9AAB3370CC2C(joaat("empty"), 136);
					unk_0xAD9E9AAB3370CC2C(joaat("empty"), 55);
					iLocal_339 = unk_0xFCFC8CC5FF74580D(joaat("prop_generator_01a"), Local_526.f_0, (Local_526.f_1 + 0.5f), (Local_526.f_2 - 0.25f), 1, 1, 0);
					unk_0x92DDCF53AA47A63D(iLocal_339, 75f);
					unk_0xD6CDDEFB0FD5B191(iLocal_339, 0, 1, 1, 0, 0, 0, 0, 0);
					uLocal_533 = unk_0x8E3AC3DF6783369A("scr_sparking_generator", iLocal_339, 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					unk_0xB29E08C7AB729BAD(iLocal_339, 1);
					func_96(&uLocal_358, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_351 = unk_0xFD34717937104F1C();
					iLocal_302 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_341)
			{
				func_91();
			}
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (!iLocal_342)
				{
					if (!unk_0x4915F4759304D5CF(iLocal_317))
					{
						if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, 0, 1, 0))
						{
							if (!unk_0x7112137033807390(iLocal_319, 0))
							{
								if (!unk_0xCE3CB618AFE55EFB(uLocal_324))
								{
									uLocal_324 = func_90(iLocal_319, 0, 0);
								}
							}
						}
						if (unk_0xDEAEC99031DCB92A(iLocal_317, unk_0xA19140A5C42D8715(), 1) || unk_0xDEAEC99031DCB92A(iLocal_319, unk_0xA19140A5C42D8715(), 1))
						{
							unk_0xB29E08C7AB729BAD(iLocal_319, 0);
							unk_0x9568B1B58F78FF36(iLocal_317);
							unk_0x2F89329397A277BC(&uLocal_357);
							unk_0xCB482EF95FAE4D73(0, 0, 0);
							unk_0x33B5487515BD13D5(0, unk_0xA19140A5C42D8715(), 150f, -1, 0, 0);
							unk_0x301F42EEE3C40328(uLocal_357);
							unk_0xE1072FA2FECBAD96(iLocal_317, uLocal_357);
							unk_0x3A95A0A3221D4208(&uLocal_357);
							func_89();
						}
						unk_0xCACEBBBEAD8F262E(joaat("prop_ld_pipe_single_01"));
						if ((((unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, 0, 1, 0) && !unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715())) && !unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715())) && func_88(1, 0, 1)) && unk_0x7FC99CCC73354033(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_128())
							{
								if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
								{
									iLocal_322 = unk_0xC409B91AC4749F88();
								}
								func_78(1);
							}
							iLocal_341 = 1;
						}
					}
					else
					{
						func_89();
					}
				}
				else
				{
					if (!unk_0x4915F4759304D5CF(iLocal_317))
					{
						if (unk_0x5D7DFE2058701942(iLocal_317, 0))
						{
							if (!unk_0x7112137033807390(iLocal_319, 0) && !unk_0xCE3CB618AFE55EFB(uLocal_324))
							{
								uLocal_324 = func_90(iLocal_319, 0, 0);
							}
						}
						else if (!unk_0xCE3CB618AFE55EFB(uLocal_323))
						{
							if (unk_0xCE3CB618AFE55EFB(uLocal_324))
							{
								unk_0xE1623437A3194332(&uLocal_324);
							}
							uLocal_323 = func_75(iLocal_317, 0, 145);
						}
					}
					func_46();
					func_43();
					if (!unk_0x4915F4759304D5CF(iLocal_317))
					{
						if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_317, Local_311, 0, 1, 0))
						{
							if (!bLocal_343)
							{
								func_42();
							}
						}
					}
					else
					{
						if (unk_0xCE3CB618AFE55EFB(uLocal_323))
						{
							unk_0xE1623437A3194332(&uLocal_323);
						}
						if (unk_0xCE3CB618AFE55EFB(uLocal_324))
						{
							unk_0xE1623437A3194332(&uLocal_324);
						}
						if (unk_0xCE3CB618AFE55EFB(uLocal_325))
						{
							unk_0xE1623437A3194332(&uLocal_325);
						}
						if (unk_0x4915F4759304D5CF(iLocal_317) || unk_0x7112137033807390(iLocal_319, 0))
						{
							func_89();
						}
					}
					if (!unk_0x1095F403F52B42E1(iLocal_320, 0))
					{
						if (unk_0xCE3CB618AFE55EFB(uLocal_325))
						{
							unk_0xE1623437A3194332(&uLocal_325);
							if (!unk_0x7112137033807390(iLocal_319, 0) && !unk_0xCE3CB618AFE55EFB(uLocal_324))
							{
								uLocal_324 = func_90(iLocal_319, 0, 0);
							}
						}
					}
				}
				if (unk_0x1095F403F52B42E1(iLocal_320, 0))
				{
					if (iLocal_353 >= 3)
					{
						if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && unk_0x52BDE3D9BF787D4C(unk_0xA19140A5C42D8715(), joaat("bulldozer")))
						{
							if (unk_0xCE3CB618AFE55EFB(uLocal_325))
							{
								unk_0xE1623437A3194332(&uLocal_325);
								if (!unk_0x4915F4759304D5CF(iLocal_317) && !unk_0x7112137033807390(iLocal_319, 0))
								{
									if (unk_0x5D7DFE2058701942(iLocal_317, 0) && !unk_0xCE3CB618AFE55EFB(uLocal_324))
									{
										uLocal_324 = func_90(iLocal_319, 0, 0);
									}
								}
							}
						}
						else if (!unk_0x4915F4759304D5CF(iLocal_317) && !unk_0x7112137033807390(iLocal_319, 0))
						{
							if (unk_0x5D7DFE2058701942(iLocal_317, 0) && unk_0xCE3CB618AFE55EFB(uLocal_324))
							{
								unk_0xE1623437A3194332(&uLocal_324);
								if (!unk_0xCE3CB618AFE55EFB(uLocal_325))
								{
									uLocal_325 = func_90(iLocal_320, 0, 0);
								}
							}
						}
					}
				}
				if (!unk_0x4915F4759304D5CF(iLocal_317))
				{
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						if (unk_0x52BDE3D9BF787D4C(unk_0xA19140A5C42D8715(), joaat("bulldozer")))
						{
							iLocal_347 = 0;
							while (iLocal_347 < 11)
							{
								if (unk_0xDC5D81351D6A4DDB(uLocal_327[iLocal_347]))
								{
									unk_0xB29E08C7AB729BAD(uLocal_327[iLocal_347], 0);
								}
								iLocal_347++;
							}
						}
					}
				}
				if (!unk_0x7112137033807390(iLocal_319, 0))
				{
					if (unk_0x463E3A48A46C9195(iLocal_319))
					{
						iLocal_347 = 0;
						while (iLocal_347 < 11)
						{
							if (unk_0xDC5D81351D6A4DDB(uLocal_327[iLocal_347]))
							{
								unk_0xB29E08C7AB729BAD(uLocal_327[iLocal_347], 0);
							}
							iLocal_347++;
						}
						unk_0xB29E08C7AB729BAD(iLocal_319, 0);
						if (!unk_0x4915F4759304D5CF(iLocal_317))
						{
							if (unk_0x5D7DFE2058701942(iLocal_317, 0))
							{
								unk_0x1F4E5EFBFE503FB3(iLocal_317, 1);
								unk_0x13E0A8160525AE55(iLocal_317, 116, 0);
								unk_0x13E0A8160525AE55(iLocal_317, 29, 0);
								if (!bLocal_345)
								{
									func_40();
									unk_0x4EDE34FBADD967A6(0);
									func_24(&uLocal_358, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (func_23())
									{
										unk_0x4EDE34FBADD967A6(0);
									}
									bLocal_345 = true;
								}
								if (!unk_0x4915F4759304D5CF(iLocal_317))
								{
									unk_0x6259CDB47862A4F3(iLocal_317, 99, 0);
								}
								if (!unk_0x7112137033807390(iLocal_319, 0))
								{
									unk_0xB29E08C7AB729BAD(iLocal_319, 0);
									unk_0xFAE5E5AC968944E8(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
									unk_0x67697F97F2A7EE10(iLocal_319, 1, 0);
								}
								func_89();
							}
						}
					}
				}
			}
			break;
	}
}

int func_23()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

int func_24(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
	return func_25(sParam2, iParam3, 0);
}

int func_25(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					unk_0xA8B97F91CBDE376C(0);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
				}
				else
				{
					func_38();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x904275961B875DEB())
		{
			return 0;
		}
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_36();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			unk_0xFA57C719261AA55D(&Global_2383, 20);
			unk_0xFA57C719261AA55D(&Global_2384, 17);
			unk_0xFA57C719261AA55D(&Global_2385, 0);
			if (bParam2)
			{
				func_29();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (func_28())
				{
					return 0;
				}
				if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x3977B7555441B490(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x45F0F396A506B7CD(unk_0xA19140A5C42D8715(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
					if (unk_0x1CD6AC2CF787DFCB(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
				}
			}
			if (func_10())
			{
				return 0;
			}
			else
			{
				switch (Global_14513.f_1)
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
				if (unk_0x05EFB6A616B6FADE(Global_2383, 9))
				{
					return 0;
				}
			}
			func_27();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_26();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_38();
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xA8B97F91CBDE376C(0);
	Global_15822 = 1;
}

void func_27()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	unk_0xFA57C719261AA55D(&Global_2384, 16);
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA8B3B18A25152B5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x70F79B0BFBB1E7AC(unk_0xA19140A5C42D8715(), 78, 1))
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

void func_29()
{
	if (func_35(14))
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_30();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

int func_30()
{
	func_31();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_31()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_34(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_33(unk_0xA19140A5C42D8715());
			if (func_32(iVar0) && (!func_35(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_32(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)
{
	if (func_32(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_35(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

bool func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_1048, iParam0);
}

void func_38()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if ((unk_0xB39808C1DCE0DCFA() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		unk_0xA8B97F91CBDE376C(0);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(1);
		Global_15822 = 6;
		return;
	}
}

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = uParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

void func_40()
{
	Global_14688 = 0;
	func_41();
}

void func_41()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(0);
		Global_15822 = 6;
	}
}

void func_42()
{
	switch (iLocal_353)
	{
		case 0:
			if (!unk_0x4915F4759304D5CF(iLocal_317))
			{
				if ((unk_0xFD34717937104F1C() - iLocal_351) > 3000)
				{
					func_24(&uLocal_358, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_355 = unk_0xFD34717937104F1C();
					iLocal_351 = unk_0xFD34717937104F1C();
					iLocal_353 = 2;
				}
			}
			break;
		
		case 1:
			if (!unk_0x4915F4759304D5CF(iLocal_317))
			{
				if ((unk_0xFD34717937104F1C() - iLocal_351) > 3000)
				{
					iLocal_351 = unk_0xFD34717937104F1C();
					iLocal_353++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x4915F4759304D5CF(iLocal_317))
			{
				if ((unk_0xFD34717937104F1C() - iLocal_351) > 5000 && !func_23())
				{
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						iLocal_356 = unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0));
					}
					if (unk_0x5D7DFE2058701942(iLocal_317, 0))
					{
						if (unk_0x1095F403F52B42E1(iLocal_320, 0))
						{
							if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
							{
								if (!unk_0x52BDE3D9BF787D4C(unk_0xA19140A5C42D8715(), joaat("bulldozer")))
								{
									if (!unk_0xCE3CB618AFE55EFB(uLocal_325))
									{
										uLocal_325 = func_90(iLocal_320, 0, 0);
										if (unk_0xCE3CB618AFE55EFB(uLocal_324))
										{
											unk_0xE1623437A3194332(&uLocal_324);
										}
									}
								}
							}
							else if (!unk_0xCE3CB618AFE55EFB(uLocal_325))
							{
								uLocal_325 = func_90(iLocal_320, 0, 0);
								if (unk_0xCE3CB618AFE55EFB(uLocal_324))
								{
									unk_0xE1623437A3194332(&uLocal_324);
								}
							}
						}
					}
					if (iLocal_356 == joaat("bulldozer"))
					{
						func_24(&uLocal_358, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						func_24(&uLocal_358, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_351 = unk_0xFD34717937104F1C();
					iLocal_353++;
				}
			}
			break;
		
		case 3:
			if (unk_0xFD34717937104F1C() - iLocal_351) > unk_0x22C775856F4633CA(5000, 8000)
			{
				if (!func_23())
				{
					func_24(&uLocal_358, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_351 = unk_0xFD34717937104F1C();
				}
			}
			break;
	}
}

void func_43()
{
	switch (iLocal_349)
	{
		case 0:
			unk_0x994F699AB446B8E4(Local_526 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xAD256D3DFA3A2FAF(1f);
			unk_0x3D879C2CE78801D5(Local_523, 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x3D879C2CE78801D5(Local_523 - Vector(0f, 4f, 0f), 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x3D879C2CE78801D5(Local_523 - Vector(0f, 8f, 0f), 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x3D879C2CE78801D5(Local_526, 1f);
			unk_0x563C33C310BCEDED();
			iLocal_355 = unk_0xFD34717937104F1C();
			iLocal_349 = 2;
			break;
		
		case 2:
			if ((unk_0xFD34717937104F1C() - iLocal_355) > iLocal_304 || func_45())
			{
				if (unk_0x059A39F1D399060B(uLocal_533))
				{
					unk_0x82E95CCADC55C11E(uLocal_533, 0);
				}
				func_44();
				if (!bLocal_345)
				{
					if (!unk_0x4915F4759304D5CF(iLocal_317) && !unk_0x7112137033807390(iLocal_319, 0))
					{
						if (!unk_0x5860446BFB759B77(iLocal_317, iLocal_319, -1, 0, 0) && !unk_0x5860446BFB759B77(iLocal_317, iLocal_319, 0, 0, 0))
						{
							func_40();
							unk_0x4EDE34FBADD967A6(0);
							func_24(&uLocal_358, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_345 = true;
						}
					}
				}
				unk_0x60DEFBFF740D4C09(3, 1);
				unk_0x4F16A7233E0017B9(80f);
				unk_0xE537EBD7B736A4E2(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				unk_0x4E27F73A7FFC8871(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_532, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_349 = 3;
			}
			break;
		
		case 3:
			if (unk_0xDC5D81351D6A4DDB(iLocal_319))
			{
				if (!unk_0x463E3A48A46C9195(iLocal_319))
				{
				}
			}
			if (iLocal_348 < 2)
			{
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (!unk_0x7112137033807390(iLocal_319, 0))
					{
						unk_0xB29E08C7AB729BAD(iLocal_319, 0);
						unk_0xFAE5E5AC968944E8(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0x67697F97F2A7EE10(iLocal_319, 1, 0);
					}
				}
			}
			break;
	}
}

void func_44()
{
	iLocal_48 = 1;
}

int func_45()
{
	if (iLocal_222 == 1)
	{
		return 1;
	}
	return 0;
}

void func_46()
{
	struct<3> Var0;
	
	switch (iLocal_348)
	{
		case 0:
			if (iLocal_353 >= 2)
			{
				if (!unk_0x4915F4759304D5CF(iLocal_317) && !unk_0x7112137033807390(iLocal_319, 0))
				{
					if (!unk_0x5D7DFE2058701942(iLocal_317, 0))
					{
						iLocal_348++;
					}
					unk_0xC0AC848E56940C34(&iLocal_340);
					if (unk_0x5860446BFB759B77(iLocal_317, iLocal_319, -1, 0, 0) || unk_0x5860446BFB759B77(iLocal_317, iLocal_319, 0, 0, 0))
					{
						if (unk_0x5860446BFB759B77(iLocal_317, iLocal_319, -1, 0, 0))
						{
							bLocal_344 = true;
							Local_314 = { unk_0xE2BBD32891C18569(iLocal_319, 0) + Vector(0f, -1f, -3f) };
						}
						else
						{
							Local_314 = { unk_0xE2BBD32891C18569(iLocal_319, 0) + Vector(0f, 1.5f, -3f) };
						}
						if (unk_0xA60C975CBAB69F34(unk_0xC409B91AC4749F88(), Local_314, 4.2f, 4f, 5f, 0, 1, 0))
						{
							if (!bLocal_343)
							{
								func_40();
								unk_0x4EDE34FBADD967A6(0);
								func_24(&uLocal_358, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
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
			if (!unk_0x4915F4759304D5CF(iLocal_317) && !unk_0x7112137033807390(iLocal_319, 0))
			{
				if (!unk_0x7112137033807390(iLocal_320, 0))
				{
					unk_0xD6CDDEFB0FD5B191(iLocal_320, 0, 1, 1, 0, 0, 0, 0, 0);
				}
				unk_0xD6CDDEFB0FD5B191(iLocal_317, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0xB29E08C7AB729BAD(iLocal_319, 0);
				unk_0x2F89329397A277BC(&uLocal_357);
				if (bLocal_344)
				{
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), 3000, 0, 2);
					unk_0xCB482EF95FAE4D73(0, 0, 0);
					unk_0x956B3CF461C0C1C9(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				else
				{
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), 3000, 0, 2);
					unk_0xCB482EF95FAE4D73(0, 0, 0);
					unk_0x956B3CF461C0C1C9(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				unk_0x301F42EEE3C40328(uLocal_357);
				unk_0xE1072FA2FECBAD96(iLocal_317, uLocal_357);
				unk_0x3A95A0A3221D4208(&uLocal_357);
				unk_0xD738221C247C8B71(iLocal_317, 1);
				iLocal_351 = unk_0xFD34717937104F1C();
				iLocal_348++;
			}
			break;
		
		case 2:
			if (!unk_0x4915F4759304D5CF(iLocal_317))
			{
				if ((unk_0xFD34717937104F1C() - iLocal_351) > 500 && !unk_0x5D7DFE2058701942(iLocal_317, 0))
				{
					iLocal_304 = 0;
					if (unk_0x1095F403F52B42E1(iLocal_319, 0))
					{
					}
					func_40();
					unk_0x4EDE34FBADD967A6(0);
					func_24(&uLocal_358, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_351 = unk_0xFD34717937104F1C();
					iLocal_348++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x4915F4759304D5CF(iLocal_317))
			{
				if (unk_0xA60C975CBAB69F34(iLocal_317, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, 0, 1, 0) || (unk_0xFD34717937104F1C() - iLocal_351) > 10000)
				{
					func_24(&uLocal_358, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_348++;
				}
			}
			break;
		
		case 4:
			if (!unk_0x4915F4759304D5CF(iLocal_317))
			{
				if (unk_0xA60C975CBAB69F34(iLocal_317, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, 0, 1, 0) || (unk_0xFD34717937104F1C() - iLocal_351) > 10000)
				{
					if (!unk_0x7112137033807390(iLocal_319, 0))
					{
						unk_0xB29E08C7AB729BAD(iLocal_319, 0);
						unk_0xFAE5E5AC968944E8(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0x67697F97F2A7EE10(iLocal_319, 1, 0);
					}
					iLocal_348++;
				}
			}
			break;
		
		case 5:
			if ((unk_0xFD34717937104F1C() - iLocal_351) > 3000)
			{
				if (unk_0x1095F403F52B42E1(iLocal_319, 0))
				{
					unk_0xB29E08C7AB729BAD(iLocal_319, 0);
					unk_0xFAE5E5AC968944E8(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					unk_0x67697F97F2A7EE10(iLocal_319, 1, 0);
				}
				if (!unk_0x4915F4759304D5CF(iLocal_317))
				{
					unk_0x9444470D6D9ADB88("RE14A_SAFE");
					if (!unk_0x7112137033807390(iLocal_320, 0))
					{
						unk_0xD6CDDEFB0FD5B191(iLocal_320, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					unk_0xD6CDDEFB0FD5B191(iLocal_317, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x2D2E827C6C3D6D26(iLocal_317, 1);
					unk_0x96BFF0680C7B6FD5(iLocal_317, 1);
					unk_0xA78BBA5574A997CD(iLocal_317, 0);
					unk_0x1F4E5EFBFE503FB3(iLocal_317, 0);
					unk_0xB3CE71A0BEB6D4C6(iLocal_317, joaat("DEFAULT"));
					unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
					unk_0x2F89329397A277BC(&uLocal_357);
					unk_0x3F01127ECD227890(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0f, 0, 0, 0);
					unk_0x4C9989F866EF6731(uLocal_357, 1);
					unk_0x301F42EEE3C40328(uLocal_357);
					unk_0xE1072FA2FECBAD96(iLocal_317, uLocal_357);
					unk_0x3A95A0A3221D4208(&uLocal_357);
				}
				unk_0xE537EBD7B736A4E2(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				unk_0x4E27F73A7FFC8871(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_532, 0, 0);
				iLocal_351 = unk_0xFD34717937104F1C();
				iLocal_348++;
			}
			break;
		
		case 6:
			if (!unk_0x4915F4759304D5CF(iLocal_317))
			{
				if ((unk_0xFD34717937104F1C() - iLocal_351) > 6400)
				{
					Var0 = { -477.2774f, -990.0638f, 23.5497f };
					if (unk_0xDC5D81351D6A4DDB(unk_0xC409B91AC4749F88()))
					{
						if (unk_0xA60C975CBAB69F34(unk_0xC409B91AC4749F88(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0xDC5D81351D6A4DDB(iLocal_322))
					{
						if (unk_0xA60C975CBAB69F34(iLocal_322, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0xDC5D81351D6A4DDB(iLocal_320))
					{
						if (unk_0xA60C975CBAB69F34(iLocal_320, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					unk_0x2F89329397A277BC(&uLocal_357);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), 3000, 2052, 2);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x307C534FCD355232(0, "WORLD_HUMAN_PICNIC", Var0, 304.8172f, 0, 1, 0);
					unk_0x301F42EEE3C40328(uLocal_357);
					unk_0xE1072FA2FECBAD96(iLocal_317, uLocal_357);
					unk_0x3A95A0A3221D4208(&uLocal_357);
					func_24(&uLocal_358, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
					func_47();
				}
			}
			else
			{
				func_89();
			}
			break;
	}
}

void func_47()
{
	while (!func_74())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_70(func_30(), 4, 2);
	func_51(-1, 0);
	func_48();
	iLocal_301 = 2;
}

void func_48()
{
	func_49();
}

int func_49()
{
	if (func_50(0))
	{
		return 0;
	}
	if (Global_93271.f_8)
	{
		if (Global_93271.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93271.f_10 > 1)
	{
		return 0;
	}
	Global_93271.f_10++;
	return 1;
}

bool func_50(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_51(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_68();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_67(iParam0))
	{
		func_66(iParam0, iParam1);
		if (!func_65(51))
		{
			func_61("RE_REWARD", 1, 0, 4000, 10000, func_64(), 0, 138, 0);
			func_60(51);
		}
		if (func_59(iParam0))
		{
			Global_106070.f_24967.f_2 = 3;
		}
		if (func_58(iParam0, iParam1) != 322)
		{
			func_53(func_58(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_106058 = iParam1;
		if (Global_106056 == 0)
		{
			if (((Global_106059 == 1 || Global_106059 == 5) || Global_106059 == 11) || Global_106059 == 25)
			{
				func_52(2);
			}
			else if ((Global_106059 == 26 || Global_106059 == 8) || Global_106059 == 17)
			{
				func_52(7);
			}
			else
			{
				func_52(1);
			}
		}
	}
}

void func_52(int iParam0)
{
	Global_106056 = iParam0;
}

void func_53(int iParam0, var uParam1, var uParam2)
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
		func_57((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106070.f_10166[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106070.f_10166[iParam0 /*12*/].f_6 == 11 || Global_106070.f_10166[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106070.f_10166[iParam0 /*12*/].f_5 = 1;
		Global_106070.f_10166[iParam0 /*12*/].f_10 = uParam1;
		Global_106070.f_10166[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_54();
	}
}

void func_54()
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
	Global_105806 = 0;
	Global_105807 = 0;
	Global_105808 = 0;
	Global_105809 = 0;
	Global_105810 = 0;
	Global_105811 = 0;
	Global_105812 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106070.f_10166.f_3853;
	Global_106070.f_10166.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106070.f_10166[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106070.f_10166[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_105806++;
					fVar1 = (fVar1 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_105807++;
					fVar2 = (fVar2 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_105808++;
					fVar3 = (fVar3 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_105809++;
					fVar4 = (fVar4 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_105810++;
					fVar5 = (fVar5 + (Global_106070.f_10166[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_105811++;
					fVar6 = (fVar6 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_105812++;
					fVar7 = (fVar7 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_105789 > 0)
	{
		if (Global_105806 == Global_105789)
		{
			fVar1 = 55f;
		}
	}
	if (Global_105790 > 0)
	{
		if (Global_105807 == Global_105790)
		{
			fVar2 = 10f;
		}
	}
	if (Global_105791 > 0)
	{
		if (Global_105808 == Global_105791)
		{
			fVar3 = 0f;
		}
	}
	if (Global_105792 > 0)
	{
		if (Global_105809 == Global_105792)
		{
			fVar4 = 10f;
		}
	}
	if (Global_105793 > 0)
	{
		if (((Global_105810 == Global_105793 || (Global_105793 * 10 / Global_105810) < 41) || Global_105810 > Global_105796) || Global_105810 == Global_105796)
		{
			if (!unk_0x05EFB6A616B6FADE(Global_106070.f_10166.f_3856, 14))
			{
				if (Global_105810 == Global_105793)
				{
					unk_0xCEF3BD89444715A5(joaat("num_rndevents_completed"), Global_105793, 0);
					unk_0x2BCFB39E86340DAA(&(Global_106070.f_10166.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_105794 > 0)
	{
		if (Global_105811 == Global_105794)
		{
			fVar6 = 15f;
		}
	}
	if (Global_105795 > 0)
	{
		if (Global_105812 == Global_105795)
		{
			fVar7 = 5f;
		}
	}
	Global_106070.f_10166.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_105810 > Global_105796 || Global_105810 == Global_105796)
	{
		iVar9 = Global_105796;
	}
	else
	{
		iVar9 = Global_105810;
	}
	unk_0x93180BE33E7149EF(joaat("num_missions_completed"), Global_105806, 1);
	unk_0x93180BE33E7149EF(joaat("num_missions_available"), Global_105789, 1);
	unk_0x93180BE33E7149EF(joaat("num_minigames_completed"), Global_105807, 1);
	unk_0x93180BE33E7149EF(joaat("num_minigames_available"), Global_105790, 1);
	unk_0x93180BE33E7149EF(joaat("num_oddjobs_completed"), Global_105808, 1);
	unk_0x93180BE33E7149EF(joaat("num_oddjobs_available"), Global_105791, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndpeople_completed"), Global_105809, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndpeople_available"), Global_105792, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndevents_available"), Global_105796, 1);
	unk_0x93180BE33E7149EF(joaat("num_misc_completed"), (Global_105812 + Global_105811), 1);
	unk_0x93180BE33E7149EF(joaat("num_misc_available"), (Global_105795 + Global_105794), 1);
	Global_105813 = (Global_105806 * 100 / Global_105789);
	Global_105815 = ((Global_105808 + Global_105807) * 100 / (Global_105791 + Global_105790));
	Global_105814 = ((Global_105809 + iVar9) * 100 / (Global_105792 + Global_105796));
	Global_105816 = ((Global_105811 + Global_105812) * 100 / (Global_105794 + Global_105795));
	unk_0x0D3D00C75484323C(joaat("total_progress_made"), Global_106070.f_10166.f_3853, 1);
	unk_0x93180BE33E7149EF(joaat("percent_story_missions"), Global_105813, 1);
	unk_0x93180BE33E7149EF(joaat("percent_ambient_missions"), Global_105814, 1);
	unk_0x93180BE33E7149EF(joaat("percent_oddjobs"), Global_105815, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_106070.f_10166.f_3853))
	{
		func_56(13, unk_0xF34EE736CF047844(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_55() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_49();
				}
			}
		}
	}
}

int func_55()
{
	return Global_25459;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x710B605F9A596359(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1BADC756CBF95E97(iParam0, iParam1);
	}
	return 0;
}

int func_57(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar19, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_58(int iParam0, int iParam1)
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

int func_59(int iParam0)
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

void func_60(int iParam0)
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
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_20382.f_150[iVar1]), iVar0);
	}
}

void func_61(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_62(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_62(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3CAC2741CC1A631F(sParam0, ""))
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
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (unk_0x3CAC2741CC1A631F(&(Global_106070.f_20382[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106070.f_20382.f_145 < 9)
	{
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_4), sParam1, 16);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_8 = (unk_0xFD34717937104F1C() + iParam3);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_9 = iParam5;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_11 = iParam6;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_12 = uParam2;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_13 = iParam7;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_14 = iParam8;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = ((unk_0xFD34717937104F1C() + iParam3) + iParam4);
		}
		else
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = -1;
		}
		Global_106070.f_20382.f_145++;
		func_63();
	}
}

void func_63()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106070.f_20382.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[0])
			{
				Global_106070.f_20382.f_146[0] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[1])
			{
				Global_106070.f_20382.f_146[1] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[2])
			{
				Global_106070.f_20382.f_146[2] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_64()
{
	func_31();
	switch (Global_106070.f_2355.f_539.f_4301)
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

int func_65(int iParam0)
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
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20382.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_66(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_106070.f_24967.f_8[iParam0]), iParam1);
}

int func_67(int iParam0)
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

int func_68()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x61D2332983ACC05C(), 64);
	uVar16 = func_69(Var0);
	return uVar16;
}

int func_69(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xFEB6EEC0545AF7AA(&cParam0))
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

void func_70(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_106070.f_2355.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_106070.f_2355.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 9954;
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
			if (iVar1 != 9954)
			{
				iVar0 = func_73(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_71(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_72(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_74()
{
	return 1;
}

var func_75(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_76(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE3CB618AFE55EFB(uVar0)) && unk_0x445EC9E7EACB710E(&(Global_106070.f_28022[iParam2 /*29*/].f_3)))
	{
		unk_0xC4F12E446CCE89F5(uVar0, &(Global_106070.f_28022[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_76(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x6A15DD6A863D5E27(iParam0);
	if (unk_0xFAC06EE780B57279(iParam0))
	{
		unk_0x575CF00E129E0CE1(uVar0, func_77(unk_0x4C9BACA8D249CB13(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF46EDCACB3804F87(uVar0, bParam1);
		}
		else
		{
			unk_0x570128B7829A8EAA(uVar0, 2);
		}
	}
	else if (unk_0x281590680327CDEA(iParam0))
	{
		unk_0x575CF00E129E0CE1(uVar0, func_77(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
		unk_0xF46EDCACB3804F87(uVar0, bParam1);
	}
	else if (unk_0x92D42293DA8F9805(iParam0))
	{
		unk_0x575CF00E129E0CE1(uVar0, func_77(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_77(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_78(int iParam0)
{
	if (func_82())
	{
		Global_106060 = 1;
		Global_106057 = unk_0xFD34717937104F1C();
		if (func_59(Global_106059))
		{
			func_79(0);
		}
		unk_0x9E212A43A08FF3F9(1, "RE_TITLE");
		if (iParam0 && func_59(Global_106059))
		{
			unk_0xE134853379787E6A();
		}
		return 1;
	}
	return 0;
}

void func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106070.f_24967.f_2 < 3)
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_80(func_81(iParam0), -1);
					Global_106070.f_24967.f_2++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x05EFB6A616B6FADE(Global_106066, 1))
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_80(func_81(iParam0), -1);
					Global_106070.f_24967.f_3++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x05EFB6A616B6FADE(Global_106066, 2))
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_80(func_81(iParam0), -1);
					Global_106070.f_24967.f_4++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 2);
				}
			}
			break;
	}
}

void func_80(var uParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(uParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

char* func_81(int iParam0)
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

int func_82()
{
	switch (func_83(&Global_25518, 0, 5, 0, unk_0xFCB3E4B16B4A9EC1()))
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

int func_83(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90805.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_87(0))
		{
			return 0;
		}
		Global_36081++;
		*uParam0 = Global_36081;
		unk_0xEF06BE39D11763FC(unk_0xA6580F898F4E801C(), 0);
		Global_17228.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA5DD4141C1E70561(8);
		}
		Global_36117 = iParam2;
		Global_36079 = *uParam0;
		Global_36080 = iParam4;
		Global_36078 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36078 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36078)
			{
				if (Global_36084[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36079 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_85(iParam2))
		{
			return 0;
		}
		if (Global_36078 == 8)
		{
			return 0;
		}
		Global_36081++;
		*uParam0 = Global_36081;
		Global_36084[Global_36078 /*4*/] = Global_36081;
		Global_36084[Global_36078 /*4*/].f_1 = iParam1;
		Global_36084[Global_36078 /*4*/].f_2 = iParam2;
		Global_36084[Global_36078 /*4*/].f_3 = 0;
		Global_36078++;
		if (iParam4 != 0)
		{
			func_84(uParam0, iParam4);
		}
	}
	return 2;
}

void func_84(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36078 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36078)
	{
		if (Global_36084[iVar0 /*4*/] == *uParam0)
		{
			Global_36084[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_85(int iParam0)
{
	return func_86(iParam0, Global_36117);
}

int func_86(int iParam0, int iParam1)
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

int func_87(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_85(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_88(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x95129531A8C1F3B9())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (!unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
		{
			return 0;
		}
		iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (bParam0)
		{
			if (unk_0x7112137033807390(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x7112137033807390(iVar0, 0))
			{
				if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) != unk_0xA19140A5C42D8715())
				{
					return 0;
				}
			}
		}
		if (!unk_0x7112137033807390(iVar0, 0))
		{
			if (unk_0xC5F2C603295DE6F0(iVar0) < 0.95f || unk_0xC5F2C603295DE6F0(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (!unk_0x783F4B81000DAFE2(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	return 1;
}

void func_89()
{
	unk_0x9444470D6D9ADB88("RE14A_FAIL");
	iLocal_301 = 2;
}

int func_90(int iParam0, bool bParam1, bool bParam2)
{
	return func_76(iParam0, !bParam1, bParam2);
}

void func_91()
{
	if (func_94(1000))
	{
		func_40();
		unk_0x9662BE461F9FDF9E(800);
		while (unk_0x607776744A243309())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (!unk_0x7112137033807390(iLocal_319, 0))
		{
			unk_0x4C9B98D31D89D901(iLocal_319, 0f, 1f, 1f, 200f, 800f, 1);
		}
		bLocal_536 = true;
		iLocal_303 = 8;
	}
	switch (iLocal_303)
	{
		case 0:
			func_2(1, 1, 1, 0, 0);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 0, 0);
			unk_0xC2F50062F837BE20();
			unk_0xDC374DA4DC566237(0);
			unk_0x85685830EFB9A55E(0);
			unk_0x578D0810E6A7D73C(0);
			if (unk_0xDC5D81351D6A4DDB(unk_0xC409B91AC4749F88()))
			{
				unk_0x1F7948851FB36E88(unk_0xC409B91AC4749F88(), 1, 0);
			}
			unk_0x3521B10FB737CE36(Local_308, 50f, 0);
			unk_0x01AF8CB960828C2B(Local_308, 30f, 0, 0, 0, 0, 0, 0);
			unk_0x9827D9AC8985F888(Local_308, 100f, 0);
			if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
			{
				if (unk_0xA60C975CBAB69F34(unk_0xC409B91AC4749F88(), Local_308, 8f, 8f, 8f, 0, 1, 0))
				{
					uLocal_321 = unk_0xC409B91AC4749F88();
					unk_0x1F7948851FB36E88(uLocal_321, 1, 0);
					unk_0x4C842FAB634AC89E(&iLocal_321);
				}
			}
			if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, 0, 1, 0))
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), -477.3538f, -972.67f, 22.5494f, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 237.4839f);
			}
			uLocal_530 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, 1, 2);
			uLocal_531 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, 1, 2);
			unk_0xBC1542DDC31676C2(uLocal_530, "HAND_SHAKE", 0.3f);
			unk_0xBC1542DDC31676C2(uLocal_531, "HAND_SHAKE", 0.3f);
			func_93();
			unk_0x930701157A4B9374(uLocal_530, 1);
			unk_0x8E88E73F74A9FF79(1, 0, 3000, 1, 0, 0);
			unk_0x4EDE34FBADD967A6(500);
			unk_0xD21CD2A6F93F44A6(uLocal_531, uLocal_530, 3500, 1, 1);
			unk_0x9444470D6D9ADB88("RE14A_START");
			iLocal_354 = unk_0xFD34717937104F1C();
			iLocal_303 = 1;
			break;
		
		case 1:
			if ((unk_0xFD34717937104F1C() - iLocal_354) > 3500)
			{
				unk_0xE11F00B4AC919F45(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				unk_0xE11F00B4AC919F45(iLocal_350, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				unk_0xDDCF77D7F7484413(uLocal_327[0], 1);
				func_92(uLocal_530);
				func_92(uLocal_531);
				uLocal_530 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, 1, 2);
				uLocal_531 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, 1, 2);
				unk_0xBC1542DDC31676C2(uLocal_530, "HAND_SHAKE", 0.3f);
				unk_0xBC1542DDC31676C2(uLocal_531, "HAND_SHAKE", 0.3f);
				unk_0xD21CD2A6F93F44A6(uLocal_531, uLocal_530, 4000, 1, 0);
				if (!unk_0x4915F4759304D5CF(iLocal_317))
				{
					unk_0x9568B1B58F78FF36(iLocal_317);
					unk_0x8CBE3882704F529D(iLocal_317, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (unk_0xDC5D81351D6A4DDB(iLocal_340))
				{
					unk_0xF334C9B245CD323D(iLocal_340, 1, 1);
					unk_0xC0AC848E56940C34(&iLocal_340);
				}
				iLocal_354 = unk_0xFD34717937104F1C();
				iLocal_303 = 2;
			}
			break;
		
		case 2:
			if ((unk_0xFD34717937104F1C() - iLocal_354) > 1500)
			{
				unk_0xE11F00B4AC919F45(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				iLocal_354 = unk_0xFD34717937104F1C();
				iLocal_303 = 3;
			}
			break;
		
		case 3:
			if ((unk_0xFD34717937104F1C() - iLocal_354) > 500)
			{
				if (unk_0xDC5D81351D6A4DDB(uLocal_327[0]))
				{
					unk_0xB29E08C7AB729BAD(uLocal_327[0], 0);
					unk_0xFAE5E5AC968944E8(uLocal_327[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, 1, 1, 1, 0, 1);
					unk_0x8D5247FDD68E4EC4(uLocal_327[0], 11, 0);
					unk_0x8D5247FDD68E4EC4(uLocal_327[0], 18, 0);
					unk_0x8D5247FDD68E4EC4(uLocal_327[0], 19, 0);
					unk_0x8D5247FDD68E4EC4(uLocal_327[0], 23, 0);
					unk_0x8D5247FDD68E4EC4(uLocal_327[0], 9, 0);
					unk_0x8D5247FDD68E4EC4(uLocal_327[0], 12, 0);
					unk_0x8D5247FDD68E4EC4(uLocal_327[0], 17, 0);
					unk_0xF593FC0961E061E6("scr_reconstruct_pipefall_debris", uLocal_327[0], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				iLocal_354 = unk_0xFD34717937104F1C();
				iLocal_303 = 4;
			}
			break;
		
		case 4:
			if ((unk_0xFD34717937104F1C() - iLocal_354) > 2000)
			{
				func_92(uLocal_530);
				func_92(uLocal_531);
				uLocal_530 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, 1, 2);
				uLocal_531 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, 1, 2);
				unk_0xBC1542DDC31676C2(uLocal_530, "HAND_SHAKE", 0.3f);
				unk_0xBC1542DDC31676C2(uLocal_531, "HAND_SHAKE", 0.3f);
				unk_0xD21CD2A6F93F44A6(uLocal_531, uLocal_530, 1000, 3, 3);
				unk_0x5DE59A67B5F326CF(iLocal_350);
				iLocal_354 = unk_0xFD34717937104F1C();
				iLocal_303 = 5;
			}
			break;
		
		case 5:
			if ((unk_0xFD34717937104F1C() - iLocal_354) > 500)
			{
				if (!unk_0x7112137033807390(iLocal_319, 0))
				{
					unk_0xB29E08C7AB729BAD(iLocal_319, 0);
					unk_0xE11F00B4AC919F45(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
					unk_0x4C9B98D31D89D901(iLocal_319, 0f, 1f, 1f, 200f, 800f, 1);
					if (!unk_0x4915F4759304D5CF(iLocal_317))
					{
						unk_0x53FF9BDD8529ACD2(iLocal_317);
					}
					unk_0x3F01127ECD227890(iLocal_317, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0f, 0, 0, 0);
					unk_0xF593FC0961E061E6("scr_reconstruct_pipe_impact", iLocal_319, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					func_24(&uLocal_358, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (unk_0x37B568B777BC65F9(uLocal_530) && unk_0x37B568B777BC65F9(uLocal_531))
					{
						unk_0xBC1542DDC31676C2(uLocal_530, "HAND_SHAKE", 1.5f);
						unk_0xBC1542DDC31676C2(uLocal_531, "HAND_SHAKE", 1.5f);
					}
					iLocal_354 = unk_0xFD34717937104F1C();
					iLocal_303 = 6;
				}
			}
			break;
		
		case 6:
			if ((unk_0xFD34717937104F1C() - iLocal_354) > 500)
			{
				func_92(uLocal_530);
				func_92(uLocal_531);
				uLocal_530 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, 1, 2);
				uLocal_531 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, 1, 2);
				unk_0xBC1542DDC31676C2(uLocal_530, "HAND_SHAKE", 0.5f);
				unk_0xBC1542DDC31676C2(uLocal_531, "HAND_SHAKE", 0.5f);
				unk_0xD21CD2A6F93F44A6(uLocal_531, uLocal_530, 2500, 3, 3);
				if (!unk_0x4915F4759304D5CF(iLocal_317))
				{
					unk_0x8CBE3882704F529D(iLocal_317, unk_0xE2BBD32891C18569(iLocal_317, 1) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_354 = unk_0xFD34717937104F1C();
				iLocal_303 = 7;
			}
			break;
		
		case 7:
			if ((unk_0xFD34717937104F1C() - iLocal_354) > 2200 && !iLocal_346)
			{
				if ((unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()) && unk_0x06EBD57CD6085DD1() == 4) || (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && unk_0xF58C434FFA1FB5F6() == 4))
				{
					unk_0xE60B9F9B48D4783F("CamPushInNeutral", 0, 0);
					unk_0xE11F00B4AC919F45(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_346 = 1;
				}
			}
			if ((unk_0xFD34717937104F1C() - iLocal_354) > 2500)
			{
				if (unk_0x1095F403F52B42E1(iLocal_319, 0))
				{
					unk_0xB29E08C7AB729BAD(iLocal_319, 1);
				}
				iLocal_303 = 8;
			}
			break;
		
		case 8:
			unk_0x9444470D6D9ADB88("RE14A_PIPES");
			if (unk_0xDC5D81351D6A4DDB(uLocal_327[0]))
			{
				unk_0xC0AC848E56940C34(&(uLocal_327[0]));
			}
			if (unk_0x1095F403F52B42E1(iLocal_319, 0))
			{
				unk_0x70B1045E099298C1(iLocal_319, 250f);
				unk_0x4299736016AECE26(iLocal_319, Local_308, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(iLocal_319, 80f);
				unk_0x39F8A3E01BC1A69B(Local_308, 50f, 0);
			}
			if (!unk_0x4915F4759304D5CF(iLocal_317))
			{
				unk_0x9568B1B58F78FF36(iLocal_317);
				unk_0x53FF9BDD8529ACD2(iLocal_317);
				unk_0x3F01127ECD227890(iLocal_317, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0f, 0, 0, 0);
			}
			unk_0x930701157A4B9374(uLocal_530, 0);
			unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
			unk_0x77F0486CE0E598D5(uLocal_530, 0);
			unk_0x77F0486CE0E598D5(uLocal_531, 0);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
			unk_0xD87B76260C547F31(0f);
			unk_0xDC374DA4DC566237(1);
			unk_0x85685830EFB9A55E(1);
			unk_0x578D0810E6A7D73C(1);
			func_2(0, 1, 1, 0, 0);
			iLocal_351 = unk_0xFD34717937104F1C();
			unk_0xA5DE74AE39867B03(joaat("prop_pipe_stack_01"));
			uLocal_327[1] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_pipe_single_01"), -457.8815f, -988.9059f, 22.9554f, 1, 1, 0);
			unk_0x76D3D51F5F66367F(uLocal_327[1], -0.1939f, 105.0058f, 77.3964f, 2, 1);
			uLocal_327[2] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_pipe_single_01"), -451.5131f, -986.8079f, 24.6947f, 1, 1, 0);
			unk_0x76D3D51F5F66367F(uLocal_327[2], 24.3941f, 32.5423f, 80.6862f, 2, 1);
			uLocal_327[3] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_pipe_single_01"), -450.8099f, -985.9972f, 24.7104f, 1, 1, 0);
			unk_0x76D3D51F5F66367F(uLocal_327[3], 24.1841f, 110.287f, 78.4357f, 2, 1);
			uLocal_327[4] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_pipe_single_01"), -456.6558f, -987.3979f, 22.9537f, 1, 1, 0);
			unk_0x76D3D51F5F66367F(uLocal_327[4], -0.0264f, 29.5754f, 79.1811f, 2, 1);
			uLocal_327[5] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_pipe_single_01"), -456.1279f, -988.4162f, 22.9889f, 1, 1, 0);
			unk_0x76D3D51F5F66367F(uLocal_327[5], -0.6337f, 108.4339f, 77.9539f, 2, 1);
			uLocal_327[6] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_pipe_single_01"), -457.0807f, -987.3059f, 23.7564f, 1, 1, 0);
			unk_0x76D3D51F5F66367F(uLocal_327[6], 0.0929f, 74.2657f, 79.3839f, 2, 1);
			uLocal_327[7] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_pipe_single_01"), -456.6558f, -983.7804f, 22.9712f, 1, 1, 0);
			unk_0x76D3D51F5F66367F(uLocal_327[7], -0.0264f, 29.5754f, 80.9061f, 2, 1);
			uLocal_327[8] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_pipe_single_01"), -455.3279f, -983.1712f, 22.9564f, 1, 1, 0);
			unk_0x76D3D51F5F66367F(uLocal_327[8], -0.1087f, 109.7339f, 80.9789f, 2, 1);
			uLocal_327[9] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_pipe_single_01"), -456.1632f, -983.9359f, 23.7964f, 1, 1, 0);
			unk_0x76D3D51F5F66367F(uLocal_327[9], -0.3321f, 74.1907f, 81.6089f, 2, 1);
			uLocal_327[10] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_pipe_single_01"), -454.644f, -994.1709f, 23.3329f, 1, 1, 0);
			unk_0x76D3D51F5F66367F(uLocal_327[10], 5.7811f, 104.6058f, 104.6964f, 2, 1);
			iLocal_347 = 0;
			while (iLocal_347 < 11)
			{
				if (unk_0xDC5D81351D6A4DDB(uLocal_327[iLocal_347]))
				{
					unk_0x9018100BC4DCB099(uLocal_327[iLocal_347], 1);
					unk_0xB29E08C7AB729BAD(uLocal_327[iLocal_347], 1);
				}
				iLocal_347++;
			}
			if (bLocal_536)
			{
				unk_0x70C1F5AA59767FE6(800);
				while (unk_0x3BE8B7AEED1A3971())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			iLocal_342 = 1;
			iLocal_341 = 0;
			break;
	}
}

void func_92(var uParam0)
{
	if (unk_0x37B568B777BC65F9(uParam0))
	{
		unk_0x77F0486CE0E598D5(uParam0, 0);
	}
}

void func_93()
{
	unk_0xB0A387DA05324E42();
	Global_16814 = 0;
}

int func_94(int iParam0)
{
	if (unk_0x3A83743561B4F70C())
	{
		if ((unk_0xFD34717937104F1C() - Global_28) > iParam0)
		{
			Global_27 = unk_0xFD34717937104F1C();
		}
		Global_28 = unk_0xFD34717937104F1C();
		if ((unk_0xFD34717937104F1C() - Global_27) > iParam0)
		{
			if (func_95())
			{
				Global_27 = unk_0xFD34717937104F1C();
				return 1;
			}
		}
	}
	return 0;
}

int func_95()
{
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (unk_0xDF0ADAD7E584090D(0, 18) || unk_0xDF0ADAD7E584090D(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_96(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 1;
	Global_16819 = 0;
	Global_16817 = iParam7;
	Global_2621441 = 0;
	return func_25(sParam2, iParam3, 0);
}

void func_97(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
	{
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xB583A7C3FEE69710(iParam2, 0);
			}
			else
			{
				unk_0xB583A7C3FEE69710(iParam2, 1);
			}
		}
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 0);
			}
			else
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 1);
			}
		}
	}
}

int func_98(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_99(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_99(var uParam0)
{
	return func_100(*uParam0, "NULL", uParam0->f_1);
}

int func_100(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(iParam0, 30))
	{
		if (unk_0x05EFB6A616B6FADE(iParam0, 29))
		{
			switch (func_101(iParam0))
			{
				case 0:
					return unk_0x7FC99CCC73354033(uParam2);
					break;
				
				case 1:
					return unk_0x39C2D9AB77873F84(sParam1);
					break;
				
				case 2:
					return unk_0xD7AFBCBD45CE1D9D(sParam1);
					break;
				
				case 3:
					return unk_0x87DF091EDFE6D083(sParam1);
					break;
				
				case 4:
					return unk_0x6F4A062113883115(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xF8882C5CDED0257A(sParam1);
					break;
				
				case 6:
					return unk_0x61346376C1469A0E(sParam1, unk_0x05EFB6A616B6FADE(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x2106996673968125(iParam2);
					break;
				
				case 8:
					return unk_0xD744813D9841CA9A(iParam2);
					break;
				
				case 9:
					return unk_0x5488D97A1366CE04();
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

int func_101(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x05EFB6A616B6FADE(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_102(var uParam0)
{
	func_103(uParam0, 9, -1, 0);
}

void func_103(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_104(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], iParam1))
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
		if (!unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x2BCFB39E86340DAA(uParam0[iVar0 /*2*/], iParam1);
			unk_0x2BCFB39E86340DAA(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_104(int iParam0)
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

void func_105(var uParam0, int iParam1)
{
	func_103(uParam0, 0, iParam1, 0);
}

void func_106(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0x817B152F7462D506() >= (uParam0->f_32 + uParam0->f_33) || unk_0x05EFB6A616B6FADE(Global_93232.f_20, 2)) || unk_0x05EFB6A616B6FADE(Global_93232.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 29))
					{
						func_107(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x817B152F7462D506();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_107(var uParam0)
{
	func_108(uParam0, "NULL", uParam0->f_1);
}

void func_108(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(*uParam0, 30))
	{
		switch (func_101(*uParam0))
		{
			case 0:
				unk_0xCACEBBBEAD8F262E(uParam2);
				break;
			
			case 1:
				unk_0x6D68030C791111E0(sParam1);
				break;
			
			case 2:
				unk_0x4069FC25AC4F1CFB(sParam1);
				break;
			
			case 3:
				unk_0x8000C77B5F336760(sParam1, unk_0x05EFB6A616B6FADE(*uParam0, 28));
				break;
			
			case 4:
				unk_0x5C2A13372076C38C(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x247955A7AC51D6E6(sParam1);
				break;
			
			case 6:
				unk_0x61346376C1469A0E(sParam1, unk_0x05EFB6A616B6FADE(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x90488A740F13CBEC(iParam2);
				break;
			
			case 8:
				unk_0x6A633E13B2A856AE(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x788BCD68EF8935BE();
				break;
			
			default:
				break;
		}
		unk_0x2BCFB39E86340DAA(uParam0, 29);
	}
}

void func_109()
{
	int iVar0;
	
	func_105(&Local_537, joaat("bulldozer"));
	func_105(&Local_537, joaat("utillitruck2"));
	func_105(&Local_537, joaat("prop_pipe_stack_01"));
	if (func_98(&Local_537))
	{
		unk_0xFC00A668AFC2126D(joaat("utillitruck2"), 1);
		unk_0xBF6EED5D6E0CD9BF(0.1f);
		unk_0x60DEFBFF740D4C09(3, 0);
		unk_0xF66A39BBE7B3C278(Local_305 + Vector(50f, 50f, 50f), Local_305 - Vector(50f, 50f, 50f), 0, 1, 1, 1);
		Local_308 = { -455.6561f, -985.8071f, 22.4868f };
		iLocal_319 = unk_0x48CFBECB146FD1A1(joaat("utillitruck2"), Local_308, 80f, 1, 1, 0);
		unk_0xC19EDC1D7179164C(iLocal_319, 0, 1, 0);
		unk_0x14293208022014FA(iLocal_319, 3);
		unk_0x6202B241A8864FC2(iLocal_319, 1, 1);
		unk_0x6202B241A8864FC2(iLocal_319, 2, 1);
		unk_0x6202B241A8864FC2(iLocal_319, 3, 0);
		unk_0x6202B241A8864FC2(iLocal_319, 4, 1);
		unk_0x6202B241A8864FC2(iLocal_319, 5, 1);
		unk_0x6202B241A8864FC2(iLocal_319, 6, 0);
		unk_0x6202B241A8864FC2(iLocal_319, 7, 1);
		unk_0xB29E08C7AB729BAD(iLocal_319, 1);
		unk_0xD6CDDEFB0FD5B191(iLocal_319, 0, 0, 0, 1, 0, 0, 0, 0);
		unk_0xA45E1AA8B9CF45AD(iLocal_319, 10000);
		unk_0x117F5CD9634D61A9(iLocal_319, 5f);
		iLocal_320 = unk_0x48CFBECB146FD1A1(joaat("bulldozer"), -472.9444f, -966.671f, 22.5534f, 181.8365f, 1, 1, 0);
		unk_0xFDD15D670AD33E10(Local_308, 10f, 1, 0, 0, 0);
		uLocal_327[0] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_pipe_stack_01"), -453.2f, -986.1f, 59.45f, 1, 1, 0);
		unk_0x92DDCF53AA47A63D(uLocal_327[0], 90f);
		unk_0xB29E08C7AB729BAD(uLocal_327[0], 1);
		unk_0xD6CDDEFB0FD5B191(uLocal_327[0], 1, 1, 1, 1, 0, 0, 0, 0);
		unk_0xA45E1AA8B9CF45AD(uLocal_327[0], 10000000);
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
		if (!unk_0xCE3CB618AFE55EFB(uLocal_326))
		{
		}
		func_110(&Local_537, 0);
		iLocal_534 = 1;
		iLocal_301 = 1;
	}
}

void func_110(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_112(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_111(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_111(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_112(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 30))
		{
			func_113(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_113(var uParam0)
{
	func_114(*uParam0, "NULL", uParam0->f_1);
}

void func_114(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(uParam0, 30))
	{
		switch (func_101(iParam0))
		{
			case 0:
				unk_0xA5DE74AE39867B03(uParam2);
				break;
			
			case 1:
				unk_0x4DC885EA8D6AF7FC(sParam1);
				break;
			
			case 2:
				unk_0x5F781B32FAE8FB91(sParam1);
				break;
			
			case 3:
				unk_0x91DE928AD81C6F57(sParam1);
				break;
			
			case 4:
				unk_0xD2BB05DE6C584878(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xDC253F6738C56280(sParam1);
				break;
			
			case 6:
				unk_0x2220B21A4CC075AC();
				break;
			
			case 7:
				unk_0x932A1FC570019F52(iParam2);
				break;
			
			case 8:
				unk_0x93DA13E8C75A3B00(iParam2, unk_0x05EFB6A616B6FADE(iParam0, 26));
				break;
			
			case 9:
				unk_0xCF2B4C5AF45D129E();
				break;
			
			default:
				break;
		}
	}
}

int func_115()
{
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_126())
		{
			return 0;
		}
	}
	if (func_122())
	{
		return 1;
	}
	if (func_116(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_116(float fParam0, bool bParam1)
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
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (func_32(func_30()))
		{
			iVar36 = func_64();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar32 /*6*/], 2) && !unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar32 /*6*/], 3))
				{
					func_117(iVar32, &Var0);
					fVar35 = unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), Var0.f_6, 1);
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

void func_117(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_118(uParam1, "Abigail1", func_120(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 1:
			func_118(uParam1, "Abigail2", func_120(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 2:
			func_118(uParam1, "Barry1", func_120(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 3:
			func_118(uParam1, "Barry2", func_120(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 4:
			func_118(uParam1, "Barry3", func_120(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 5:
			func_118(uParam1, "Barry3A", func_120(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 6:
			func_118(uParam1, "Barry3C", func_120(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 7:
			func_118(uParam1, "Barry4", func_120(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_119(iParam0), 0, 0);
			break;
		
		case 8:
			func_118(uParam1, "Dreyfuss1", func_120(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 9:
			func_118(uParam1, "Epsilon1", func_120(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 10:
			func_118(uParam1, "Epsilon2", func_120(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 11:
			func_118(uParam1, "Epsilon3", func_120(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 12:
			func_118(uParam1, "Epsilon4", func_120(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 13:
			func_118(uParam1, "Epsilon5", func_120(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 14:
			func_118(uParam1, "Epsilon6", func_120(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 15:
			func_118(uParam1, "Epsilon7", func_120(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 16:
			func_118(uParam1, "Epsilon8", func_120(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 17:
			func_118(uParam1, "Extreme1", func_120(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 18:
			func_118(uParam1, "Extreme2", func_120(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 19:
			func_118(uParam1, "Extreme3", func_120(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 20:
			func_118(uParam1, "Extreme4", func_120(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 21:
			func_118(uParam1, "Fanatic1", func_120(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_119(iParam0), 1, 0);
			break;
		
		case 22:
			func_118(uParam1, "Fanatic2", func_120(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_119(iParam0), 1, 0);
			break;
		
		case 23:
			func_118(uParam1, "Fanatic3", func_120(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_119(iParam0), 0, 1);
			break;
		
		case 24:
			func_118(uParam1, "Hao1", func_120(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_119(iParam0), 0, 1);
			break;
		
		case 25:
			func_118(uParam1, "Hunting1", func_120(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 26:
			func_118(uParam1, "Hunting2", func_120(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 27:
			func_118(uParam1, "Josh1", func_120(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 28:
			func_118(uParam1, "Josh2", func_120(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 29:
			func_118(uParam1, "Josh3", func_120(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 30:
			func_118(uParam1, "Josh4", func_120(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 31:
			func_118(uParam1, "Maude1", func_120(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 32:
			func_118(uParam1, "Minute1", func_120(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 33:
			func_118(uParam1, "Minute2", func_120(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 34:
			func_118(uParam1, "Minute3", func_120(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 35:
			func_118(uParam1, "MrsPhilips1", func_120(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 36:
			func_118(uParam1, "MrsPhilips2", func_120(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 37:
			func_118(uParam1, "Nigel1", func_120(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 38:
			func_118(uParam1, "Nigel1A", func_120(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 39:
			func_118(uParam1, "Nigel1B", func_120(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 40:
			func_118(uParam1, "Nigel1C", func_120(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 41:
			func_118(uParam1, "Nigel1D", func_120(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 42:
			func_118(uParam1, "Nigel2", func_120(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 43:
			func_118(uParam1, "Nigel3", func_120(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 44:
			func_118(uParam1, "Omega1", func_120(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 45:
			func_118(uParam1, "Omega2", func_120(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 46:
			func_118(uParam1, "Paparazzo1", func_120(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 47:
			func_118(uParam1, "Paparazzo2", func_120(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 48:
			func_118(uParam1, "Paparazzo3", func_120(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 49:
			func_118(uParam1, "Paparazzo3A", func_120(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 50:
			func_118(uParam1, "Paparazzo3B", func_120(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 51:
			func_118(uParam1, "Paparazzo4", func_120(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 52:
			func_118(uParam1, "Rampage1", func_120(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 54:
			func_118(uParam1, "Rampage3", func_120(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 55:
			func_118(uParam1, "Rampage4", func_120(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 56:
			func_118(uParam1, "Rampage5", func_120(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 53:
			func_118(uParam1, "Rampage2", func_120(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 57:
			func_118(uParam1, "TheLastOne", func_120(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 58:
			func_118(uParam1, "Tonya1", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 59:
			func_118(uParam1, "Tonya2", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 60:
			func_118(uParam1, "Tonya3", func_120(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 61:
			func_118(uParam1, "Tonya4", func_120(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 62:
			func_118(uParam1, "Tonya5", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_118(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_119(int iParam0)
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

struct<2> func_120(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_121(iParam0) };
	if (unk_0x429D45A6C6520026(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_121(int iParam0)
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

int func_122()
{
	if (func_125() && !func_126())
	{
		return 1;
	}
	if (func_124() && func_123())
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return Global_105788 > 0;
}

int func_124()
{
	if (Global_90249 != -1)
	{
		return 1;
	}
	return 0;
}

int func_125()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 20);
	}
	return 0;
}

int func_126()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0x9E14E7823B1059CE() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_127()
{
	if (!func_85(5))
	{
		return 1;
	}
	if (func_122())
	{
		return 1;
	}
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_126())
		{
			return 0;
		}
	}
	if (func_116(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	if ((Global_106059 == func_68() && unk_0x62558A57CB60EE71()) && Global_106060)
	{
		return 1;
	}
	return 0;
}

void func_129(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_68();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_131(iParam0);
	unk_0x7B9D98D1F4280B24(0);
	unk_0x509F44AFDE7B1FCA(1);
	Global_106056 = 0;
	func_130();
}

void func_130()
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			unk_0xFC00A668AFC2126D(unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)), 1);
		}
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 32, 0);
	}
}

void func_131(int iParam0)
{
	Global_106059 = iParam0;
}

int func_132(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_144510)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_68();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_173())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			Var1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_126())
			{
				return 0;
			}
		}
		if (!Global_106070.f_9057)
		{
			return 0;
		}
		if (func_50(0))
		{
			return 0;
		}
		if (func_122())
		{
			return 0;
		}
		if (func_172())
		{
			return 0;
		}
		if (Global_106059 != -1)
		{
			return 0;
		}
		if (func_32(func_30()))
		{
			if (func_116(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_171(iParam3))
		{
			return 0;
		}
		if (func_32(func_30()))
		{
			if (func_170(func_30()) == 4 || func_170(func_30()) == 5)
			{
				return 0;
			}
		}
		if (func_32(func_30()))
		{
			if (!func_169(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_168(Global_106070.f_24967.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xFD34717937104F1C() - Global_106061) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_167())
		{
			return 0;
		}
		if (unk_0x356461BAB19FFA77())
		{
			return 0;
		}
		if (unk_0x62558A57CB60EE71())
		{
			return 0;
		}
		if (!func_158(4))
		{
			return 0;
		}
		if (!func_85(5))
		{
			return 0;
		}
		if (func_157(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x893915B076B1DDF7(unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715())))
		{
			if ((unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0x988A25F5907E93F0(377.153f, -717.567f, 10.0536f) || unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0x988A25F5907E93F0(320.9934f, 265.2515f, 82.1221f)) || unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0x988A25F5907E93F0(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_157(0, 0))
		{
			return 0;
		}
		if (Global_25605)
		{
			return 0;
		}
		if (func_171(30) && !func_157(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_32(func_30()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_106070.f_2355.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_106070.f_2355.f_539.f_2276[iVar4];
				if (func_156(iVar8))
				{
					if (func_134(iVar4))
					{
						if (!func_133(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), Var5) < (210f * 210f))
							{
								if (func_30() != iVar4)
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

bool func_133(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106070.f_2355.f_539.f_2276[iParam0];
	return func_135(iVar0);
}

int func_135(int iParam0)
{
	return func_136(iParam0, 1);
}

int func_136(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_156(iParam0))
	{
		return 0;
	}
	func_137(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_137(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_138(func_149(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_138(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_148(iParam0, iParam1))
	{
		iVar0 = func_147(iParam1);
		iVar1 = func_145(iParam0);
		iVar2 = (func_145(iParam0) - func_145(iParam1));
		iVar3 = (func_147(iParam0) - func_147(iParam1));
		iVar4 = (func_144(iParam0) - func_144(iParam1));
		iVar5 = (func_143(iParam0) - func_143(iParam1));
		iVar6 = (func_142(iParam0) - func_142(iParam1));
		iVar7 = (func_141(iParam0) - func_141(iParam1));
	}
	else
	{
		iVar0 = func_147(iParam0);
		iVar1 = func_145(iParam1);
		iVar2 = (func_145(iParam1) - func_145(iParam0));
		iVar3 = (func_147(iParam1) - func_147(iParam0));
		iVar4 = (func_144(iParam1) - func_144(iParam0));
		iVar5 = (func_143(iParam1) - func_143(iParam0));
		iVar6 = (func_142(iParam1) - func_142(iParam0));
		iVar7 = (func_141(iParam1) - func_141(iParam0));
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
		iVar4 = (iVar4 + func_140(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_139(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_139(float fParam0, float fParam1, float fParam2)
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

int func_140(int iParam0, int iParam1)
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

int func_141(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_142(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_143(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_144(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_145(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_146(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_146(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_147(int iParam0)
{
	return iParam0 & 15;
}

int func_148(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_156(iParam1) || !func_156(iParam0))
	{
		return 1;
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
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_149()
{
	var uVar0;
	
	func_155(&uVar0, unk_0xC5B07C33AC7BB174());
	func_154(&uVar0, unk_0x65DA628D62901275());
	func_153(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_152(&uVar0, unk_0xC9A0B68BA813CF99());
	func_151(&uVar0, unk_0x897D202BD69186D5());
	func_150(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_150(var uParam0, int iParam1)
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

void func_151(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_152(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_147(*uParam0);
	iVar1 = func_145(*uParam0);
	if (iParam1 < 1 || iParam1 > func_140(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_156(int iParam0)
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
	iVar0 = func_141(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_142(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_143(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_145(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_147(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_144(iParam0);
	if (iVar5 < 1 || iVar5 > func_140(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_157(int iParam0, int iParam1)
{
	if (unk_0x05EFB6A616B6FADE(Global_106070.f_24967.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				iVar0 = func_30();
				if (!func_32(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_166()) || Global_105117) || Global_25461) || func_165()) || func_37(8, -1)) || func_164()) || func_163()) || func_162()) || func_161()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1) || func_166()) || Global_25461) || func_165()) || func_37(8, -1)) || func_162()) || func_164()) || func_163()) || func_161()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_166()) || Global_105117) || Global_25461) || func_165()) || func_37(8, -1)) || func_162()) || func_164()) || func_163()) || func_161()) || Global_106070.f_7660.f_919[iVar0] == 5) || Global_36664 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_166()) || Global_105117) || Global_25461) || func_165()) || func_37(8, -1)) || func_164()) || func_163()) || func_161()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_166() || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || func_37(8, -1)) || func_161()) || func_160()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_37(8, -1) || func_164()) || func_163()) || func_160()) || func_159())
						{
							return 0;
						}
						if ((unk_0x47C3DC461C758C29() && unk_0xF6F3AB25005ED460() != 3) && unk_0x84C1DECF60EFBBD7() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
						{
							if ((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_166()) || Global_25461) || func_165()) || func_37(8, -1)) || func_163()) || func_162()) || func_161()) || Global_106070.f_7660.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || func_166()) || func_163()) || Global_105117) || Global_25461) || func_165()) || Global_37271) || func_37(8, -1)) || func_162()) || func_160()) || func_161()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0)) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1)) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0x443A3698D0CD9D06(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_166()) || Global_105117) || Global_25461) || func_165()) || func_37(8, -1)) || func_162()) || func_160()) || func_164()) || func_163()) || func_161())
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

var func_159()
{
	return Global_93271.f_1;
}

int func_160()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 13);
	}
	return 0;
}

int func_161()
{
	if (unk_0x8B1574454E8C2421(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_162()
{
	if (Global_71465)
	{
		return 1;
	}
	else if (Global_56175 && !Global_56181)
	{
		return 1;
	}
	return 0;
}

bool func_163()
{
	return Global_93284.f_328 > 0;
}

bool func_164()
{
	return Global_93284.f_327 > 0;
}

var func_165()
{
	return Global_1312857;
}

int func_166()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

int func_167()
{
	func_29();
	if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_168(int iParam0)
{
	return func_148(func_149(), iParam0);
}

int func_169(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_30();
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

int func_170(int iParam0)
{
	if (!func_32(iParam0))
	{
		return 7;
	}
	return Global_106070.f_7660.f_919[iParam0];
}

bool func_171(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_173())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x05EFB6A616B6FADE(Global_106070.f_24967, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x05EFB6A616B6FADE(Global_106070.f_24967.f_1, iVar0);
	}
	return bVar1;
}

int func_172()
{
	int iVar0;
	
	if (Global_25609)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				if (!unk_0x4915F4759304D5CF(unk_0xB0D49A1F9F054602(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_173()
{
	var uVar0;
	
	if (unk_0xC29B8FF8374918FD())
	{
		if (unk_0x0A68AE586CCE49F6())
		{
			if (unk_0x3750826756EA2005())
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x2BCFB39E86340DAA(&uVar0, 2);
				unk_0x2BCFB39E86340DAA(&uVar0, 4);
				unk_0x2BCFB39E86340DAA(&uVar0, 6);
				unk_0x2BCFB39E86340DAA(&Global_25, 2);
				unk_0x2BCFB39E86340DAA(&Global_25, 4);
				unk_0x2BCFB39E86340DAA(&Global_25, 6);
				unk_0x93180BE33E7149EF(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x63141F5FDACF3D9B())
				{
					iVar0 = unk_0x3278E95F94254201(866);
					unk_0x2BCFB39E86340DAA(&iVar0, 0);
					unk_0xF8B43D25409B2964(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_144765 == 2)
	{
		return 1;
	}
	else if (Global_144765 == 3)
	{
		return 0;
	}
	if (unk_0x63141F5FDACF3D9B())
	{
		if (unk_0x05EFB6A616B6FADE(unk_0x3278E95F94254201(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_174()
{
	if (iLocal_534)
	{
		if (!iLocal_535)
		{
			unk_0x9444470D6D9ADB88("RE14A_FAIL");
			func_210();
			if (!unk_0x4915F4759304D5CF(iLocal_317))
			{
				unk_0x13E0A8160525AE55(iLocal_317, 317, 1);
			}
			if (!unk_0x7112137033807390(iLocal_322, 0))
			{
				if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_322, 0) && !unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_322, 50f, 50f, 50f, 0, 1, 0))
				{
					func_186(iLocal_322, 0, 145);
				}
			}
			iLocal_347 = 0;
			while (iLocal_347 < 11)
			{
				if (unk_0xDC5D81351D6A4DDB(uLocal_327[iLocal_347]))
				{
					unk_0xB29E08C7AB729BAD(uLocal_327[iLocal_347], 0);
				}
				iLocal_347++;
			}
			if (!unk_0x7112137033807390(iLocal_319, 0))
			{
				unk_0x70B1045E099298C1(iLocal_319, 0f);
				unk_0xB29E08C7AB729BAD(iLocal_319, 0);
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_339))
			{
				unk_0xB29E08C7AB729BAD(iLocal_339, 0);
			}
			unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
			unk_0xDC374DA4DC566237(1);
			unk_0x85685830EFB9A55E(1);
			func_2(0, 1, 1, 0, 0);
			iLocal_342 = 1;
			unk_0xDED73F11B8CB95B1(1f);
			unk_0x4DC885EA8D6AF7FC("re@construction");
			if (unk_0x37B568B777BC65F9(uLocal_529))
			{
				unk_0x77F0486CE0E598D5(uLocal_529, 0);
				unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(0f, 1065353216);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
				unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), 0);
			}
			if (unk_0xCE3CB618AFE55EFB(uLocal_323))
			{
				unk_0xE1623437A3194332(&uLocal_323);
			}
			if (unk_0xCE3CB618AFE55EFB(uLocal_324))
			{
				unk_0xE1623437A3194332(&uLocal_324);
			}
			if (unk_0xCE3CB618AFE55EFB(uLocal_325))
			{
				unk_0xE1623437A3194332(&uLocal_325);
			}
			if (unk_0xCE3CB618AFE55EFB(uLocal_326))
			{
				unk_0xE1623437A3194332(&uLocal_326);
			}
		}
		unk_0xE724181C8BE2BA29(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 1);
		unk_0xBF6EED5D6E0CD9BF(1f);
		unk_0x60DEFBFF740D4C09(3, 1);
		unk_0xED84AB4F104D72B9();
		unk_0x4004C3CB2300135E();
	}
	func_110(&Local_537, 0);
	func_175(-1);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_175(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_68();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_128())
	{
		func_179(iParam0);
		unk_0x9E212A43A08FF3F9(0, 0);
		Global_106061 = unk_0xFD34717937104F1C();
		func_178(30000);
		StringCopy(&cVar0, func_177(Global_106059, 1), 64);
		if (func_67(Global_106059) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_106058, 64);
		}
		unk_0xAC757D2BA72C24C9(&cVar0, Global_106056, (unk_0xFD34717937104F1C() - Global_106057), 0);
	}
	else if (unk_0x05EFB6A616B6FADE(Global_106066, 0) && Global_106070.f_24967.f_2 < 3)
	{
		unk_0xFA57C719261AA55D(&Global_106066, 0);
	}
	func_176(&Global_25518);
	Global_106060 = 0;
	func_131(-1);
}

void func_176(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36079)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36078 = 0;
	Global_36080 = 0;
	Global_36117 = 15;
	Global_56178 = 0;
	Global_56179 = 0;
}

char* func_177(int iParam0, bool bParam1)
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

void func_178(int iParam0)
{
	Global_36668 = (unk_0xFD34717937104F1C() + iParam0);
}

void func_179(int iParam0)
{
	func_180(iParam0, 0, func_185(iParam0));
}

void func_180(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_149();
	func_183(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_182(iParam0, &uVar0);
	Var1 = { func_181(&uVar0) };
}

struct<16> func_181(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_143(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
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
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_144(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_147(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_145(*uParam0), 64);
	return Var0;
}

void func_182(int iParam0, var uParam1)
{
	Global_106070.f_24967.f_43[iParam0] = *uParam1;
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_145(*uParam0);
	iVar1 = func_147(*uParam0);
	iVar2 = func_144(*uParam0);
	iVar3 = func_143(*uParam0);
	iVar4 = func_142(*uParam0);
	iVar5 = func_141(*uParam0);
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
	iVar6 = func_140(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_140(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_184(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_184(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, iParam1);
	func_154(uParam0, iParam2);
	func_153(uParam0, iParam3);
	func_151(uParam0, iParam5);
	func_152(uParam0, iParam4);
	func_150(uParam0, iParam6);
}

int func_185(int iParam0)
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

int func_186(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0xB2BB3714AD93D7C5(iParam0, &uVar0);
		if (!unk_0x429D45A6C6520026(uVar1))
		{
			if (unk_0xFEB6EEC0545AF7AA(uVar1) == unk_0xFEB6EEC0545AF7AA("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_187(iParam0, iParam2);
	return 1;
}

void func_187(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_193(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xB0D49A1F9F054602(iParam0, -1, 0);
		if (!unk_0xDC5D81351D6A4DDB(iVar0))
		{
			iVar0 = unk_0xBF8685DA34F4F151(iParam0, -1);
		}
		if (unk_0xDC5D81351D6A4DDB(iVar0) && !unk_0x4915F4759304D5CF(iVar0))
		{
			if (unk_0x8F474E419F56E48D(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x8F474E419F56E48D(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x8F474E419F56E48D(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_106070.f_2355.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x8F474E419F56E48D(iParam0) == Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x429D45A6C6520026(&(Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3CAC2741CC1A631F(unk_0xC5D229CE54955E47(iParam0), &(Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_106070.f_32605.f_5592[iVar1] = iVar2;
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
		if (unk_0x8F474E419F56E48D(iParam0) == Global_106070.f_32605.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x429D45A6C6520026(&(Global_106070.f_32605.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3CAC2741CC1A631F(unk_0xC5D229CE54955E47(iParam0), &(Global_106070.f_32605.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_106070.f_32605.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_106070.f_32605.f_5590 = iParam1;
	Global_70929 = iParam0;
	Global_106070.f_32605.f_5588 = 1;
	func_188(iParam0, &(Global_106070.f_32605.f_5510));
}

void func_188(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		func_192(uParam1);
		uParam1->f_66 = unk_0x8F474E419F56E48D(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC5D229CE54955E47(iParam0), 16);
		*uParam1 = unk_0xDDB38D7590A81CE5(iParam0);
		unk_0x249EC6991E16D61D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD8185C6194306C6E(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x00D0FF77BA971D60(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xBA6EC692A8E9BD41(iParam0);
		uParam1->f_67 = unk_0x9373D3C23637D009(iParam0);
		uParam1->f_69 = unk_0x8342B65392C8BC37(iParam0);
		uParam1->f_70 = unk_0xED16A3D69B141AED(iParam0);
		unk_0x292472155924CBB5(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x922C8705F0BA67E6(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x243FC0956CEB6D1F(iParam0, 2))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 28);
		}
		if (unk_0x243FC0956CEB6D1F(iParam0, 3))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 29);
		}
		if (unk_0x243FC0956CEB6D1F(iParam0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 30);
		}
		if (unk_0x243FC0956CEB6D1F(iParam0, 1))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_191(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xEF6267624B1C9336(iParam0, 0))
		{
			uParam1->f_68 = unk_0x392DF1C78010FB0C(iParam0);
		}
		if (unk_0xCA8C103FCD316F89(uParam1->f_66))
		{
			if (unk_0xB4476DCF5073F3D1(iParam0))
			{
				switch (unk_0xED4856750A5EA5E8(iParam0))
				{
					case 3:
					case 0:
						unk_0xFA57C719261AA55D(&(uParam1->f_77), 23);
						unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xFA57C719261AA55D(&(uParam1->f_77), 23);
						unk_0xFA57C719261AA55D(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xCBFCD862A600B654(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 9);
		}
		if (unk_0x36167F9370DCE78E(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 10);
		}
		if (unk_0x8DEA0E8C80861E9D(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 13);
			unk_0xE5F6CFB0158C9F97(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE9FF101C94B1BBDB(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 12);
		}
		func_190(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xED6D3EA61B44622B(iParam0, iVar0 + 1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), func_189(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x33C323290E3BDAB1(iParam0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(uParam1->f_77), 11);
		}
		if (unk_0xAEAF59799C2F26E4(iParam0, "IgnoredByQuickSave") && unk_0x13AF6A38CAD2D5DD(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(uParam1->f_77), 27);
		}
	}
}

int func_189(int iParam0)
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

int func_190(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x1095F403F52B42E1(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x857E88DF0C8EDB8B(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x9E68AB02E7DC3B39(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x9E68AB02E7DC3B39(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x22D95AF01E737CA1(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB9A77CDBB0A3A5D8(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB9A77CDBB0A3A5D8(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_192(var uParam0)
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

int func_193(int iParam0)
{
	if ((((((((((!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0)) || func_208(iParam0, 0, 0)) || func_208(iParam0, 1, 0)) || func_208(iParam0, 2, 0)) || func_207(iParam0) != 145) || func_206(iParam0)) || func_205(iParam0)) || func_204(iParam0)) || func_203(iParam0)) || !func_194(unk_0x8F474E419F56E48D(iParam0)))
	{
		if (func_205(iParam0))
		{
		}
		if (func_205(iParam0))
		{
		}
		if (func_208(iParam0, 0, 0))
		{
		}
		if (func_208(iParam0, 1, 0))
		{
		}
		if (func_208(iParam0, 2, 0))
		{
		}
		if (func_207(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_194(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_195(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x71852D4EBD08275F(iParam0) || unk_0xCA8C103FCD316F89(iParam0)) || unk_0x7C197233F79C2CB8(iParam0)) || unk_0x289FBFAD3E416C48(iParam0))
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

int func_195(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x671704836D893828(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x4C9BACA8D249CB13()) || (iParam0 == joaat("buffalo3") && !unk_0x4C9BACA8D249CB13())) || (iParam0 == joaat("gauntlet2") && !unk_0x4C9BACA8D249CB13())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x4C9BACA8D249CB13()))
	{
		if (!func_173())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x730B2D99EC02BFBB())
		{
			if (unk_0xED2E7B72F90BB7CF(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x3B61940560400F58(Var1.f_0))
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
		if ((((!func_202() && !func_201()) && !func_200()) && !func_199()) && !func_173())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x29A02C184A66D25E() || unk_0x47C01C0E6F4C1D06()) || unk_0x7DD04831D0FC44CA())
		{
		}
		else if (!func_200())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_198(iParam0))
		{
			return 0;
		}
	}
	if (!func_196(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_196(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_197())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_197()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2503689)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x5E0F2F352218B916();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6488 && !Global_262145.f_12797) && iVar1 < Global_262145.f_12798)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14091 && iVar1 < Global_262145.f_14103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14092 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14093 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14094 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14102)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16718 && iVar1 < Global_262145.f_16682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16717 && iVar1 < Global_262145.f_16681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16716 && iVar1 < Global_262145.f_16680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16879 && iVar1 < Global_262145.f_16901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16880 && iVar1 < Global_262145.f_16902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16881 && iVar1 < Global_262145.f_16903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18528 && iVar1 < Global_262145.f_18625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18529 && iVar1 < Global_262145.f_18626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18530 && iVar1 < Global_262145.f_18627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18531 && iVar1 < Global_262145.f_18628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18532 && iVar1 < Global_262145.f_18629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19608 && iVar1 < Global_262145.f_19604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19609 && iVar1 < Global_262145.f_19605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19610 && iVar1 < Global_262145.f_19606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19611 && iVar1 < Global_262145.f_19607)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20487 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20488 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20489 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20490 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20491 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20492 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21264 && iVar1 < Global_262145.f_21284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21267 && iVar1 < Global_262145.f_21287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21265 && iVar1 < Global_262145.f_21285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21266 && iVar1 < Global_262145.f_21286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21268 && iVar1 < Global_262145.f_21288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21269 && iVar1 < Global_262145.f_21289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22225 && iVar1 < Global_262145.f_22253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22226 && iVar1 < Global_262145.f_22254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22227 && iVar1 < Global_262145.f_22255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22228 && iVar1 < Global_262145.f_22256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22229 && iVar1 < Global_262145.f_22257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22230 && iVar1 < Global_262145.f_22258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23432 && iVar1 < Global_262145.f_23448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23433 && iVar1 < Global_262145.f_23449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23437 && iVar1 < Global_262145.f_23453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23431 && iVar1 < Global_262145.f_23447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23434 && iVar1 < Global_262145.f_23450)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23436 && iVar1 < Global_262145.f_23452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23435 && iVar1 < Global_262145.f_23451)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23522 && iVar1 < Global_262145.f_23509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23523 && iVar1 < Global_262145.f_23510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23528 && iVar1 < Global_262145.f_23515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23527 && iVar1 < Global_262145.f_23514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23525 && iVar1 < Global_262145.f_23512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23524 && iVar1 < Global_262145.f_23511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23526 && iVar1 < Global_262145.f_23513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_25628 && iVar1 < Global_262145.f_25630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_24683 && iVar1 < Global_262145.f_24676)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_24684 && iVar1 < Global_262145.f_24677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_24685 && iVar1 < Global_262145.f_24678)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_24686 && iVar1 < Global_262145.f_24679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_25629 && iVar1 < Global_262145.f_25631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_24687 && iVar1 < Global_262145.f_24680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_24688 && iVar1 < Global_262145.f_24681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_24689 && iVar1 < Global_262145.f_24682)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_199()
{
	return 0;
}

int func_200()
{
	return 1;
}

int func_201()
{
	return 1;
}

int func_202()
{
	if (unk_0x05BEBC245254F6F2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	uVar1 = unk_0xC5D229CE54955E47(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3CAC2741CC1A631F(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_195(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90688[iVar0]))
		{
			if (Global_90688[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]) && unk_0x1095F403F52B42E1(Global_90658[iVar0], 0))
			{
				if (Global_90658[iVar0] == iParam0 && unk_0x8F474E419F56E48D(Global_90658[iVar0]) == unk_0x8F474E419F56E48D(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_206(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(Global_70024.f_484[24]))
	{
		if (iParam0 == Global_70024.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_70024.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_70024.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(int iParam0)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 145;
	}
	if (!unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]))
		{
			if (Global_90658[iVar0] == iParam0)
			{
				return Global_90668[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_208(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_209(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x05EFB6A616B6FADE(Global_106070.f_7201[iVar9], 0))
		{
			if (unk_0xFB166837ACE44C44(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_209(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_210()
{
	Global_14688 = 0;
	func_211();
}

void func_211()
{
	if (unk_0x904275961B875DEB())
	{
		unk_0xB4E5B1A6FE923ECB();
		Global_16833 = 0;
		unk_0xA8B97F91CBDE376C(1);
		Global_15822 = 6;
		return;
	}
}

