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
	if (unk_0xBCA819F9975BEDFA(11))
	{
		func_174();
	}
	if (unk_0x80BC37C67CB292E5() > 18 || unk_0x80BC37C67CB292E5() < 5)
	{
		unk_0x921053BAF754303D();
	}
	if (func_132(Local_305, -1, 0, 0, 0))
	{
		func_129(-1);
	}
	else
	{
		unk_0x921053BAF754303D();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x3291E05256869D44())
		{
			if (!func_128())
			{
				if (func_127())
				{
					func_174();
				}
			}
			unk_0x31683E0D6DBB707E("RE_CA", 0);
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
					if (((unk_0x23E9113C762466ED(iLocal_317) && unk_0xE34CF180A5429DEA(iLocal_317, 1)) && iLocal_348 < 5) && !bLocal_345)
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
		unk_0x5BE53482EFD49141("RE14A_FAIL");
		iLocal_347 = 0;
		while (iLocal_347 < 11)
		{
			if (unk_0x23E9113C762466ED(uLocal_327[iLocal_347]))
			{
				unk_0x98F0FA127445E343(uLocal_327[iLocal_347], 0);
			}
			iLocal_347++;
		}
		if (!unk_0xA929B2923D14E2F8(iLocal_319, 0))
		{
			unk_0xEC0212C05F98C1DF(iLocal_319, 0f);
			unk_0x98F0FA127445E343(iLocal_319, 0);
		}
		if (unk_0x23E9113C762466ED(iLocal_339))
		{
			unk_0x98F0FA127445E343(iLocal_339, 0);
		}
		unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
		unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
		unk_0x2D28D5B324F77D2D(1);
		unk_0xE418A8E16B02C0AC(1);
		func_2(0, 1, 1, 0);
		iLocal_342 = 1;
		unk_0x8ADF92E4B51709E2(1f);
		unk_0xF9FFB9857F3120F8("re@construction");
		if (unk_0x0F1BF24ED3B7ED40(uLocal_529))
		{
			unk_0x2BC4A4AFFC2D937D(uLocal_529, 0);
			unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
			unk_0xBA7CD73403732191(0f);
			unk_0x503F20CB07C55470(0f, 1065353216);
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
			unk_0x98F0FA127445E343(unk_0x17B5CC8A8615737D(), 0);
		}
		if (unk_0xA3794949321E107C(uLocal_323))
		{
			unk_0x020DF7300725ECAB(&uLocal_323);
		}
		if (unk_0xA3794949321E107C(uLocal_324))
		{
			unk_0x020DF7300725ECAB(&uLocal_324);
		}
		if (unk_0xA3794949321E107C(uLocal_325))
		{
			unk_0x020DF7300725ECAB(&uLocal_325);
		}
		if (unk_0xA3794949321E107C(uLocal_326))
		{
			unk_0x020DF7300725ECAB(&uLocal_326);
		}
		iLocal_535 = 1;
	}
	if (unk_0x23E9113C762466ED(uLocal_327[0]) || unk_0x23E9113C762466ED(uLocal_327[1]))
	{
		if (!unk_0xF7E1BD8196545EE3(Local_308 + Vector(20f, 0f, 0f), 30f) && !unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_308, 80f, 80f, 80f, 0, 1, 0))
		{
			func_174();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x75416EE69CE8B797(unk_0xBE369BE1BC57A796());
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 1);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 1);
		func_11(1);
		unk_0x9FB8515100F82AFB();
		unk_0xD57128A757C0216E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3ED8A07C6FA41E1B())
			{
				unk_0x660E8E7836E95077(0);
			}
			if (!func_10())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_9(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else
	{
		func_11(0);
		unk_0x42DE1068884C3BE9();
		Global_55828 = 0;
		if (bParam1)
		{
			unk_0x093227ED19D84FB6();
		}
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 0);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 0);
		func_9(0, iParam3, iParam2, 0);
		if (unk_0x63C468D583002D23())
		{
			if (((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_7(unk_0xBE369BE1BC57A796())) && !func_4(unk_0xBE369BE1BC57A796(), 0)) && !func_3())
			{
				unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
			}
		}
		else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_7(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
		}
		Global_69700 = 0;
	}
}

bool func_3()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

bool func_4(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_5(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
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
	if (Global_1315213[iVar1] == 1)
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

int func_6()
{
	return Global_1312735;
}

int func_7(int iParam0)
{
	if (func_4(iParam0, 0))
	{
		return 1;
	}
	if (func_8())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

int func_9(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5E9889CF18601D1C() != iParam0 && uParam2)
		{
			unk_0xCE7A426067C66E84(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_10()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_11(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 13);
	}
}

void func_12()
{
	if (iLocal_352 == -1)
	{
		iLocal_352 = unk_0x94E3E074F38DF86C() + 5000;
	}
	if (unk_0x94E3E074F38DF86C() > iLocal_352)
	{
		if (unk_0x23E9113C762466ED(iLocal_319))
		{
			unk_0x98F0FA127445E343(iLocal_319, 0);
			unk_0x5C9883713FC5A923(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (!unk_0xA929B2923D14E2F8(iLocal_319, 0))
			{
				unk_0x28EB63CAF526B891(iLocal_319, 1, 0);
			}
		}
	}
}

void func_13()
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
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
		if (unk_0xC17DD6C225DE4EB8(&Var1, Local_229[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_229.f_0)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + unk_0x3DC4639D5F23DEA2(Local_229[(iVar0 - 1) /*5*/], Local_229[iVar0 /*5*/], 1));
				}
				if (Local_229[iVar0 /*5*/].f_4)
				{
					if (unk_0xC17DD6C225DE4EB8(&Var1, Local_229[iVar0 /*5*/]))
					{
						fVar6 = unk_0x3DC4639D5F23DEA2(Local_229[iVar0 /*5*/], Var1, 1);
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
				iLocal_224 = unk_0x94E3E074F38DF86C();
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
		unk_0x5957C9922BF60463();
		fVar9 = (unk_0xBBDA792448DB5A89((unk_0x94E3E074F38DF86C() - iLocal_224)) / fLocal_300);
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
			if ((unk_0x94E3E074F38DF86C() - Local_66[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0x2478F071547F0C76(Local_66[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((unk_0x94E3E074F38DF86C() - Local_66[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0x44E994D596DB215A(Local_66[iVar0 /*5*/]);
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
	unk_0x44E994D596DB215A(Local_66[iLocal_226 /*5*/]);
	if (Local_66[iLocal_226 /*5*/].f_4 != 0)
	{
		unk_0x2478F071547F0C76(Local_66[iLocal_226 /*5*/].f_1, 0.4f, 1f);
	}
	Local_66[iLocal_226 /*5*/].f_4 = unk_0x94E3E074F38DF86C();
	Local_66[iLocal_226 /*5*/].f_1 = { Param0 };
	Local_66[iLocal_226 /*5*/] = unk_0x8A89734A265B8974(Param0, uLocal_55, iParam3);
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
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0x79888727131C6854(0, 24) && unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
			{
				if (iLocal_56 == 0)
				{
					unk_0x2DE9FDD822EE641B(2f, 8f, 4);
					iLocal_56 = unk_0x94E3E074F38DF86C() + 250;
				}
				if (unk_0x94E3E074F38DF86C() > iLocal_56)
				{
					if (!bLocal_46)
					{
						fVar4 = 9999.9f;
						Local_59 = { func_19() };
						iVar0 = 0;
						while (iVar0 < Local_229.f_0)
						{
							if (unk_0xA3794949321E107C(Local_229[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0x3DC4639D5F23DEA2(Local_59, unk_0xCC1DFCD030782230(Local_229[iVar0 /*5*/].f_3), 1);
								fVar3 = unk_0x3DC4639D5F23DEA2(Local_229[iVar0 /*5*/], unk_0xCC1DFCD030782230(Local_229[iVar0 /*5*/].f_3), 1);
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
								if (unk_0x049F77DED8AE0AF4((iLocal_53 - iVar5)) > 1)
								{
									iLocal_53 = -1;
								}
								if (iLocal_53 == -1)
								{
									iLocal_53 = iLocal_52;
								}
								if (unk_0x049F77DED8AE0AF4((iLocal_53 - iVar5)) < 3 && unk_0x049F77DED8AE0AF4((iLocal_53 - iVar5)) > 0)
								{
									if (iLocal_53 < iVar5)
									{
										iVar6 = iLocal_53;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0xA3794949321E107C(Local_229[iVar6 /*5*/].f_3))
											{
												if (unk_0xC6F9754C5842E80A(Local_229[iVar6 /*5*/].f_3) > 0)
												{
													unk_0x5F97CFBDE7F2B599(Local_229[iVar6 /*5*/].f_3, 0);
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
											if (unk_0xA3794949321E107C(Local_229[iVar6 /*5*/].f_3))
											{
												if (unk_0xC6F9754C5842E80A(Local_229[iVar6 /*5*/].f_3) > 0)
												{
													unk_0x5F97CFBDE7F2B599(Local_229[iVar6 /*5*/].f_3, 0);
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
									if (unk_0xA3794949321E107C(Local_229[iVar5 /*5*/].f_3))
									{
										if (unk_0xC6F9754C5842E80A(Local_229[iVar5 /*5*/].f_3) > 0)
										{
											unk_0x5F97CFBDE7F2B599(Local_229[iVar5 /*5*/].f_3, 0);
											Local_229[iVar5 /*5*/].f_4 = 1;
											iLocal_54 = (iLocal_54 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (unk_0xA3794949321E107C(Local_229[iVar5 /*5*/].f_3))
									{
										if (unk_0xC6F9754C5842E80A(Local_229[iVar5 /*5*/].f_3) > 0)
										{
											unk_0x5F97CFBDE7F2B599(Local_229[iVar5 /*5*/].f_3, 0);
											Local_229[iVar5 /*5*/].f_4 = 1;
											iLocal_54 = (iLocal_54 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_18(Local_229[iVar5 + 1 /*5*/]))
									{
										if (unk_0xA3794949321E107C(Local_229[iVar5 /*5*/].f_3))
										{
											if (unk_0xC6F9754C5842E80A(Local_229[iVar5 /*5*/].f_3) > 0)
											{
												unk_0x5F97CFBDE7F2B599(Local_229[iVar5 /*5*/].f_3, 0);
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
	
	iVar0 = unk_0x8AEC1EA268158819(unk_0x17B5CC8A8615737D());
	if (unk_0x23E9113C762466ED(iVar0))
	{
		iVar1 = unk_0x36ACE2C7E56D90D6(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { unk_0xE9833D7A09D570F1(iVar0, iVar1) };
		Var2 = { unk_0x3CE07141081BBC2B(Var2, unk_0x638527C9799F2AE4(iVar0), 0.35f, 0f, -0.15f) };
		unk_0x4F34E573D7F5024B(Var2, &uVar8, 0);
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
				unk_0x44E994D596DB215A(Local_66[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_48 = 0;
		iLocal_222 = 1;
		iLocal_224 = unk_0x94E3E074F38DF86C();
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
			unk_0x985A2515CBAF7290("CONSTRUCTION_ACCIDENT_1", false, -1);
			unk_0xA0E7D0E8FE126EE8("re@construction");
			if (Local_537.f_32 <= 0)
			{
				Local_537.f_32 = unk_0x0385EDD8AAEC86F4();
			}
			func_105(&Local_537, joaat("s_m_m_dockwork_01"));
			func_105(&Local_537, joaat("prop_generator_01a"));
			func_105(&Local_537, joaat("p_amb_phone_01"));
			func_102(&Local_537);
			if ((unk_0x985A2515CBAF7290("CONSTRUCTION_ACCIDENT_1", false, -1) && unk_0xF4F8AE8DD0F08C1E("re@construction")) && func_98(&Local_537))
			{
				if (unk_0x45CD66F0A131E554(iLocal_319, 0))
				{
					iLocal_317 = unk_0x3FBC0964EB7878AF(iLocal_319, 26, joaat("s_m_m_dockwork_01"), -1, 1, 1);
					unk_0x2F933BB106547968(iLocal_317, 0, 1, 0, 0);
					unk_0x2F933BB106547968(iLocal_317, 3, 1, 1, 0);
					unk_0x2F933BB106547968(iLocal_317, 4, 0, 1, 0);
					unk_0x2F933BB106547968(iLocal_317, 8, 0, 0, 0);
					unk_0xEB1EFACA68933402(iLocal_317, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, 0, 0, 0);
					iLocal_340 = unk_0x521A82CF998EDB21(joaat("p_amb_phone_01"), -455.6561f, -985.8071f, 22.4868f, 1, 1, 0);
					unk_0x924CDE68BA2ED3BA(joaat("p_amb_phone_01"));
					unk_0x593C85206F061E3E(iLocal_340, iLocal_317, unk_0x0FC45085FB4E85B8(iLocal_317, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0xC96275575DC981A9(iLocal_317, 17, 1);
					unk_0x7CA9312EDAAC4056(iLocal_317, 1);
					unk_0xCC61640A821F277C(iLocal_317, 1);
					unk_0x6F65279C9BC14EDB(iLocal_317, 0);
					func_97(&uLocal_358, 3, iLocal_317, "RECONACWorker", 0, 1);
					unk_0xA0E70AC53ABAB207(iLocal_317, "S_M_Y_GENERICWORKER_01_WHITE_01");
					uLocal_318 = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_m_dockwork_01"), -462.2982f, -978.3272f, 65f, 221.4041f, 1, 1);
					unk_0xCC61640A821F277C(uLocal_318, 1);
					unk_0x4114B83B329702FF(iLocal_318, 1);
					unk_0x98F0FA127445E343(iLocal_318, 1);
					unk_0xE0157A41E8F9EBB3(iLocal_317, joaat("empty"));
					unk_0x757077E6DE7D5B44(joaat("empty"), 24);
					unk_0x757077E6DE7D5B44(joaat("empty"), 46);
					unk_0x757077E6DE7D5B44(joaat("empty"), 61);
					unk_0x757077E6DE7D5B44(joaat("empty"), 136);
					unk_0x757077E6DE7D5B44(joaat("empty"), 55);
					iLocal_339 = unk_0x521A82CF998EDB21(joaat("prop_generator_01a"), Local_526.f_0, (Local_526.f_1 + 0.5f), (Local_526.f_2 - 0.25f), 1, 1, 0);
					unk_0x0608D50823C6AA6D(iLocal_339, 75f);
					unk_0x4C44C1A3160350E2(iLocal_339, 0, 1, 1, 0, 0, 0, 0, 0);
					uLocal_533 = unk_0x4281F7DFB73874A8("scr_sparking_generator", iLocal_339, 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					unk_0x98F0FA127445E343(iLocal_339, 1);
					func_96(&uLocal_358, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_351 = unk_0x94E3E074F38DF86C();
					iLocal_302 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_341)
			{
				func_91();
			}
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (!iLocal_342)
				{
					if (!unk_0xCA41A00932714525(iLocal_317))
					{
						if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, 0, 1, 0))
						{
							if (!unk_0xA929B2923D14E2F8(iLocal_319, 0))
							{
								if (!unk_0xA3794949321E107C(uLocal_324))
								{
									uLocal_324 = func_90(iLocal_319, 0, 0);
								}
							}
						}
						if (unk_0xC017443DBE6DA4D6(iLocal_317, unk_0x17B5CC8A8615737D(), 1) || unk_0xC017443DBE6DA4D6(iLocal_319, unk_0x17B5CC8A8615737D(), 1))
						{
							unk_0x98F0FA127445E343(iLocal_319, 0);
							unk_0x15848523A8959DBC(iLocal_317);
							unk_0x86DD54980FE55567(&uLocal_357);
							unk_0x83150B7E65C16AFE(0, 0, 0);
							unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 150f, -1, 0, 0);
							unk_0x007AE2AA9E15FA7B(uLocal_357);
							unk_0x00E85C3B3BD34B10(iLocal_317, uLocal_357);
							unk_0x08377FB2AE4C6899(&uLocal_357);
							func_89();
						}
						unk_0xE1324F59713746FA(joaat("prop_ld_pipe_single_01"));
						if ((((unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, 0, 1, 0) && !unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D())) && !unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D())) && func_88(1, 0, 1)) && unk_0x9F746898F7881612(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_128())
							{
								if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
								{
									iLocal_322 = unk_0x0C00E753D78DEA62();
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
					if (!unk_0xCA41A00932714525(iLocal_317))
					{
						if (unk_0xFD0FE723227D5AB6(iLocal_317, 0))
						{
							if (!unk_0xA929B2923D14E2F8(iLocal_319, 0) && !unk_0xA3794949321E107C(uLocal_324))
							{
								uLocal_324 = func_90(iLocal_319, 0, 0);
							}
						}
						else if (!unk_0xA3794949321E107C(uLocal_323))
						{
							if (unk_0xA3794949321E107C(uLocal_324))
							{
								unk_0x020DF7300725ECAB(&uLocal_324);
							}
							uLocal_323 = func_75(iLocal_317, 0, 145);
						}
					}
					func_46();
					func_43();
					if (!unk_0xCA41A00932714525(iLocal_317))
					{
						if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_317, Local_311, 0, 1, 0))
						{
							if (!bLocal_343)
							{
								func_42();
							}
						}
					}
					else
					{
						if (unk_0xA3794949321E107C(uLocal_323))
						{
							unk_0x020DF7300725ECAB(&uLocal_323);
						}
						if (unk_0xA3794949321E107C(uLocal_324))
						{
							unk_0x020DF7300725ECAB(&uLocal_324);
						}
						if (unk_0xA3794949321E107C(uLocal_325))
						{
							unk_0x020DF7300725ECAB(&uLocal_325);
						}
						if (unk_0xCA41A00932714525(iLocal_317) || unk_0xA929B2923D14E2F8(iLocal_319, 0))
						{
							func_89();
						}
					}
					if (!unk_0x45CD66F0A131E554(iLocal_320, 0))
					{
						if (unk_0xA3794949321E107C(uLocal_325))
						{
							unk_0x020DF7300725ECAB(&uLocal_325);
							if (!unk_0xA929B2923D14E2F8(iLocal_319, 0) && !unk_0xA3794949321E107C(uLocal_324))
							{
								uLocal_324 = func_90(iLocal_319, 0, 0);
							}
						}
					}
				}
				if (unk_0x45CD66F0A131E554(iLocal_320, 0))
				{
					if (iLocal_353 >= 3)
					{
						if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && unk_0x0B231830DD7F8FD0(unk_0x17B5CC8A8615737D(), joaat("bulldozer")))
						{
							if (unk_0xA3794949321E107C(uLocal_325))
							{
								unk_0x020DF7300725ECAB(&uLocal_325);
								if (!unk_0xCA41A00932714525(iLocal_317) && !unk_0xA929B2923D14E2F8(iLocal_319, 0))
								{
									if (unk_0xFD0FE723227D5AB6(iLocal_317, 0) && !unk_0xA3794949321E107C(uLocal_324))
									{
										uLocal_324 = func_90(iLocal_319, 0, 0);
									}
								}
							}
						}
						else if (!unk_0xCA41A00932714525(iLocal_317) && !unk_0xA929B2923D14E2F8(iLocal_319, 0))
						{
							if (unk_0xFD0FE723227D5AB6(iLocal_317, 0) && unk_0xA3794949321E107C(uLocal_324))
							{
								unk_0x020DF7300725ECAB(&uLocal_324);
								if (!unk_0xA3794949321E107C(uLocal_325))
								{
									uLocal_325 = func_90(iLocal_320, 0, 0);
								}
							}
						}
					}
				}
				if (!unk_0xCA41A00932714525(iLocal_317))
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						if (unk_0x0B231830DD7F8FD0(unk_0x17B5CC8A8615737D(), joaat("bulldozer")))
						{
							iLocal_347 = 0;
							while (iLocal_347 < 11)
							{
								if (unk_0x23E9113C762466ED(uLocal_327[iLocal_347]))
								{
									unk_0x98F0FA127445E343(uLocal_327[iLocal_347], 0);
								}
								iLocal_347++;
							}
						}
					}
				}
				if (!unk_0xA929B2923D14E2F8(iLocal_319, 0))
				{
					if (unk_0x03767DFC5EE2B0C6(iLocal_319))
					{
						iLocal_347 = 0;
						while (iLocal_347 < 11)
						{
							if (unk_0x23E9113C762466ED(uLocal_327[iLocal_347]))
							{
								unk_0x98F0FA127445E343(uLocal_327[iLocal_347], 0);
							}
							iLocal_347++;
						}
						unk_0x98F0FA127445E343(iLocal_319, 0);
						if (!unk_0xCA41A00932714525(iLocal_317))
						{
							if (unk_0xFD0FE723227D5AB6(iLocal_317, 0))
							{
								unk_0xCC61640A821F277C(iLocal_317, 1);
								unk_0x6018E338F7ABCE75(iLocal_317, 116, 0);
								unk_0x6018E338F7ABCE75(iLocal_317, 29, 0);
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
								if (!unk_0xCA41A00932714525(iLocal_317))
								{
									unk_0x4B04B4FAE554FA03(iLocal_317, 99);
								}
								if (!unk_0xA929B2923D14E2F8(iLocal_319, 0))
								{
									unk_0x98F0FA127445E343(iLocal_319, 0);
									unk_0x5C9883713FC5A923(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
									unk_0x28EB63CAF526B891(iLocal_319, 1, 0);
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
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_25(sParam2, iParam3, 0);
}

int func_25(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x660E8E7836E95077(0);
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
					func_38();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x55C74612BE548D78())
		{
			return 0;
		}
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_36();
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
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
			if (bParam2)
			{
				func_29();
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
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_28())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
				{
					return 0;
				}
			}
			func_27();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_26();
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x660E8E7836E95077(0);
	Global_15745 = 1;
}

void func_27()
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
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
		Global_14443 = func_30();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69702)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_30()
{
	func_31();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_31()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_34(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_33(unk_0x17B5CC8A8615737D());
			if (func_32(iVar0) && (!func_35(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_32(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_35(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_36()
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

bool func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_38()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_40()
{
	Global_14611 = 0;
	func_41();
}

void func_41()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
	}
}

void func_42()
{
	switch (iLocal_353)
	{
		case 0:
			if (!unk_0xCA41A00932714525(iLocal_317))
			{
				if ((unk_0x94E3E074F38DF86C() - iLocal_351) > 3000)
				{
					func_24(&uLocal_358, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_355 = unk_0x94E3E074F38DF86C();
					iLocal_351 = unk_0x94E3E074F38DF86C();
					iLocal_353 = 2;
				}
			}
			break;
		
		case 1:
			if (!unk_0xCA41A00932714525(iLocal_317))
			{
				if ((unk_0x94E3E074F38DF86C() - iLocal_351) > 3000)
				{
					iLocal_351 = unk_0x94E3E074F38DF86C();
					iLocal_353++;
				}
			}
			break;
		
		case 2:
			if (!unk_0xCA41A00932714525(iLocal_317))
			{
				if ((unk_0x94E3E074F38DF86C() - iLocal_351) > 5000 && !func_23())
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						iLocal_356 = unk_0x0324EEB10F81965F(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0));
					}
					if (unk_0xFD0FE723227D5AB6(iLocal_317, 0))
					{
						if (unk_0x45CD66F0A131E554(iLocal_320, 0))
						{
							if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
							{
								if (!unk_0x0B231830DD7F8FD0(unk_0x17B5CC8A8615737D(), joaat("bulldozer")))
								{
									if (!unk_0xA3794949321E107C(uLocal_325))
									{
										uLocal_325 = func_90(iLocal_320, 0, 0);
										if (unk_0xA3794949321E107C(uLocal_324))
										{
											unk_0x020DF7300725ECAB(&uLocal_324);
										}
									}
								}
							}
							else if (!unk_0xA3794949321E107C(uLocal_325))
							{
								uLocal_325 = func_90(iLocal_320, 0, 0);
								if (unk_0xA3794949321E107C(uLocal_324))
								{
									unk_0x020DF7300725ECAB(&uLocal_324);
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
					iLocal_351 = unk_0x94E3E074F38DF86C();
					iLocal_353++;
				}
			}
			break;
		
		case 3:
			if (unk_0x94E3E074F38DF86C() - iLocal_351) > unk_0x0E29C61F26D96FDB(5000, 8000)
			{
				if (!func_23())
				{
					func_24(&uLocal_358, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_351 = unk_0x94E3E074F38DF86C();
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
			unk_0x735E588E3E189B8C(Local_526 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x09CBF03539F97883(1f);
			unk_0xD0D5392B79C2D304(Local_523, 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xD0D5392B79C2D304(Local_523 - Vector(0f, 4f, 0f), 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xD0D5392B79C2D304(Local_523 - Vector(0f, 8f, 0f), 1f);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xD0D5392B79C2D304(Local_526, 1f);
			unk_0xDFCFB4385E3BDC00();
			iLocal_355 = unk_0x94E3E074F38DF86C();
			iLocal_349 = 2;
			break;
		
		case 2:
			if ((unk_0x94E3E074F38DF86C() - iLocal_355) > iLocal_304 || func_45())
			{
				if (unk_0x97F2912BC85D905D(uLocal_533))
				{
					unk_0x0A977DD607DA1424(uLocal_533, 0);
				}
				func_44();
				if (!bLocal_345)
				{
					if (!unk_0xCA41A00932714525(iLocal_317) && !unk_0xA929B2923D14E2F8(iLocal_319, 0))
					{
						if (!unk_0x1626793F639090A0(iLocal_317, iLocal_319, -1, 0, 0) && !unk_0x1626793F639090A0(iLocal_317, iLocal_319, 0, 0, 0))
						{
							func_40();
							unk_0x4EDE34FBADD967A6(0);
							func_24(&uLocal_358, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_345 = true;
						}
					}
				}
				unk_0xFCBD7340FBF1FE46(3, 1);
				unk_0xF49AA4E660769C3E(80f);
				unk_0x286691C5D34EF4EC(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				unk_0xCA99D3B8479D90EC(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_532, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_349 = 3;
			}
			break;
		
		case 3:
			if (unk_0x23E9113C762466ED(iLocal_319))
			{
				if (!unk_0x03767DFC5EE2B0C6(iLocal_319))
				{
				}
			}
			if (iLocal_348 < 2)
			{
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (!unk_0xA929B2923D14E2F8(iLocal_319, 0))
					{
						unk_0x98F0FA127445E343(iLocal_319, 0);
						unk_0x5C9883713FC5A923(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0x28EB63CAF526B891(iLocal_319, 1, 0);
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
				if (!unk_0xCA41A00932714525(iLocal_317) && !unk_0xA929B2923D14E2F8(iLocal_319, 0))
				{
					if (!unk_0xFD0FE723227D5AB6(iLocal_317, 0))
					{
						iLocal_348++;
					}
					unk_0x1AAFEA627BB9C402(&iLocal_340);
					if (unk_0x1626793F639090A0(iLocal_317, iLocal_319, -1, 0, 0) || unk_0x1626793F639090A0(iLocal_317, iLocal_319, 0, 0, 0))
					{
						if (unk_0x1626793F639090A0(iLocal_317, iLocal_319, -1, 0, 0))
						{
							bLocal_344 = true;
							Local_314 = { unk_0x57240623C1BC6E88(iLocal_319, 0) + Vector(0f, -1f, -3f) };
						}
						else
						{
							Local_314 = { unk_0x57240623C1BC6E88(iLocal_319, 0) + Vector(0f, 1.5f, -3f) };
						}
						if (unk_0x1C34CE8087E3897C(unk_0x0C00E753D78DEA62(), Local_314, 4.2f, 4f, 5f, 0, 1, 0))
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
			if (!unk_0xCA41A00932714525(iLocal_317) && !unk_0xA929B2923D14E2F8(iLocal_319, 0))
			{
				if (!unk_0xA929B2923D14E2F8(iLocal_320, 0))
				{
					unk_0x4C44C1A3160350E2(iLocal_320, 0, 1, 1, 0, 0, 0, 0, 0);
				}
				unk_0x4C44C1A3160350E2(iLocal_317, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0x98F0FA127445E343(iLocal_319, 0);
				unk_0x86DD54980FE55567(&uLocal_357);
				if (bLocal_344)
				{
					unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), 3000, 0, 2);
					unk_0x83150B7E65C16AFE(0, 0, 0);
					unk_0x084522380FECC554(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				else
				{
					unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), 3000, 0, 2);
					unk_0x83150B7E65C16AFE(0, 0, 0);
					unk_0x084522380FECC554(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				unk_0x007AE2AA9E15FA7B(uLocal_357);
				unk_0x00E85C3B3BD34B10(iLocal_317, uLocal_357);
				unk_0x08377FB2AE4C6899(&uLocal_357);
				unk_0x650BB0E111420EAF(iLocal_317, 1);
				iLocal_351 = unk_0x94E3E074F38DF86C();
				iLocal_348++;
			}
			break;
		
		case 2:
			if (!unk_0xCA41A00932714525(iLocal_317))
			{
				if ((unk_0x94E3E074F38DF86C() - iLocal_351) > 500 && !unk_0xFD0FE723227D5AB6(iLocal_317, 0))
				{
					iLocal_304 = 0;
					if (unk_0x45CD66F0A131E554(iLocal_319, 0))
					{
					}
					func_40();
					unk_0x4EDE34FBADD967A6(0);
					func_24(&uLocal_358, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_351 = unk_0x94E3E074F38DF86C();
					iLocal_348++;
				}
			}
			break;
		
		case 3:
			if (!unk_0xCA41A00932714525(iLocal_317))
			{
				if (unk_0x1C34CE8087E3897C(iLocal_317, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, 0, 1, 0) || (unk_0x94E3E074F38DF86C() - iLocal_351) > 10000)
				{
					func_24(&uLocal_358, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_348++;
				}
			}
			break;
		
		case 4:
			if (!unk_0xCA41A00932714525(iLocal_317))
			{
				if (unk_0x1C34CE8087E3897C(iLocal_317, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, 0, 1, 0) || (unk_0x94E3E074F38DF86C() - iLocal_351) > 10000)
				{
					if (!unk_0xA929B2923D14E2F8(iLocal_319, 0))
					{
						unk_0x98F0FA127445E343(iLocal_319, 0);
						unk_0x5C9883713FC5A923(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0x28EB63CAF526B891(iLocal_319, 1, 0);
					}
					iLocal_348++;
				}
			}
			break;
		
		case 5:
			if ((unk_0x94E3E074F38DF86C() - iLocal_351) > 3000)
			{
				if (unk_0x45CD66F0A131E554(iLocal_319, 0))
				{
					unk_0x98F0FA127445E343(iLocal_319, 0);
					unk_0x5C9883713FC5A923(iLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					unk_0x28EB63CAF526B891(iLocal_319, 1, 0);
				}
				if (!unk_0xCA41A00932714525(iLocal_317))
				{
					unk_0x5BE53482EFD49141("RE14A_SAFE");
					if (!unk_0xA929B2923D14E2F8(iLocal_320, 0))
					{
						unk_0x4C44C1A3160350E2(iLocal_320, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					unk_0x4C44C1A3160350E2(iLocal_317, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x78F48B47DB1C3316(iLocal_317, 1);
					unk_0x6F65279C9BC14EDB(iLocal_317, 1);
					unk_0x7CA9312EDAAC4056(iLocal_317, 0);
					unk_0xCC61640A821F277C(iLocal_317, 0);
					unk_0xE0157A41E8F9EBB3(iLocal_317, joaat("DEFAULT"));
					unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
					unk_0x86DD54980FE55567(&uLocal_357);
					unk_0xEB1EFACA68933402(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0f, 0, 0, 0);
					unk_0x85111902FC00A5CF(uLocal_357, 1);
					unk_0x007AE2AA9E15FA7B(uLocal_357);
					unk_0x00E85C3B3BD34B10(iLocal_317, uLocal_357);
					unk_0x08377FB2AE4C6899(&uLocal_357);
				}
				unk_0x286691C5D34EF4EC(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				unk_0xCA99D3B8479D90EC(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_532, 0);
				iLocal_351 = unk_0x94E3E074F38DF86C();
				iLocal_348++;
			}
			break;
		
		case 6:
			if (!unk_0xCA41A00932714525(iLocal_317))
			{
				if ((unk_0x94E3E074F38DF86C() - iLocal_351) > 6400)
				{
					Var0 = { -477.2774f, -990.0638f, 23.5497f };
					if (unk_0x23E9113C762466ED(unk_0x0C00E753D78DEA62()))
					{
						if (unk_0x1C34CE8087E3897C(unk_0x0C00E753D78DEA62(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0x23E9113C762466ED(iLocal_322))
					{
						if (unk_0x1C34CE8087E3897C(iLocal_322, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0x23E9113C762466ED(iLocal_320))
					{
						if (unk_0x1C34CE8087E3897C(iLocal_320, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					unk_0x86DD54980FE55567(&uLocal_357);
					unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), 3000, 2052, 2);
					unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
					unk_0x0806B1CDAAB99FB4(0, "WORLD_HUMAN_PICNIC", Var0, 304.8172f, 0, 1, 0);
					unk_0x007AE2AA9E15FA7B(uLocal_357);
					unk_0x00E85C3B3BD34B10(iLocal_317, uLocal_357);
					unk_0x08377FB2AE4C6899(&uLocal_357);
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
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

bool func_50(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
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
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_58(iParam0, iParam1) != 322)
		{
			func_53(func_58(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0)
		{
			if (((Global_101689 == 1 || Global_101689 == 5) || Global_101689 == 11) || Global_101689 == 25)
			{
				func_52(2);
			}
			else if ((Global_101689 == 26 || Global_101689 == 8) || Global_101689 == 17)
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
	Global_101686 = iParam0;
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
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = uParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101436++;
					fVar1 = (fVar1 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101437++;
					fVar2 = (fVar2 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101438++;
					fVar3 = (fVar3 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101439++;
					fVar4 = (fVar4 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101440++;
					fVar5 = (fVar5 + (Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101441++;
					fVar6 = (fVar6 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101442++;
					fVar7 = (fVar7 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101419 > 0)
	{
		if (Global_101436 == Global_101419)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0)
	{
		if (Global_101437 == Global_101420)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0)
	{
		if (Global_101438 == Global_101421)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0)
	{
		if (Global_101439 == Global_101422)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0)
	{
		if (((Global_101440 == Global_101423 || (Global_101423 * 10 / Global_101440) < 41) || Global_101440 > Global_101426) || Global_101440 == Global_101426)
		{
			if (!unk_0x48B8265059381CD0(Global_101700.f_9153.f_3856, 14))
			{
				if (Global_101440 == Global_101423)
				{
					unk_0x76FDB94571A85364(joaat("num_rndevents_completed"), Global_101423, 0);
					unk_0xEB79FECD9022AAF0(&(Global_101700.f_9153.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0)
	{
		if (Global_101441 == Global_101424)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0)
	{
		if (Global_101442 == Global_101425)
		{
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426)
	{
		iVar9 = Global_101426;
	}
	else
	{
		iVar9 = Global_101440;
	}
	unk_0x731753D8494ABECD(joaat("num_missions_completed"), Global_101436, 1);
	unk_0x731753D8494ABECD(joaat("num_missions_available"), Global_101419, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_completed"), Global_101437, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_available"), Global_101420, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_completed"), Global_101438, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_available"), Global_101421, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_completed"), Global_101439, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_available"), Global_101422, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_available"), Global_101426, 1);
	unk_0x731753D8494ABECD(joaat("num_misc_completed"), (Global_101442 + Global_101441), 1);
	unk_0x731753D8494ABECD(joaat("num_misc_available"), (Global_101425 + Global_101424), 1);
	Global_101443 = (Global_101436 * 100 / Global_101419);
	Global_101445 = ((Global_101438 + Global_101437) * 100 / (Global_101421 + Global_101420));
	Global_101444 = ((Global_101439 + iVar9) * 100 / (Global_101422 + Global_101426));
	Global_101446 = ((Global_101441 + Global_101442) * 100 / (Global_101424 + Global_101425));
	unk_0x098CDAAE6268B0D0(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	unk_0x731753D8494ABECD(joaat("percent_story_missions"), Global_101443, 1);
	unk_0x731753D8494ABECD(joaat("percent_ambient_missions"), Global_101444, 1);
	unk_0x731753D8494ABECD(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853))
	{
		func_56(13, unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853));
	}
	if (!unk_0x9710FEDD2413A882())
	{
		if (!Global_69702)
		{
			if (func_55() == 2 == 0 && !unk_0x63C468D583002D23())
			{
				if (unk_0x877FC5FAF7DC9BC5())
				{
					Global_101434 = 0;
				}
				if (!Global_55822)
				{
					func_49();
				}
			}
		}
	}
}

int func_55()
{
	return Global_25190;
}

int func_56(int iParam0, int iParam1)
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
	iVar0 = unk_0x71AAA4D97165244D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1657EA7F5F15A59(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar13, iParam1, iVar1, iParam3);
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
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_19369.f_150[iVar1]), iVar0);
	}
}

void func_61(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_62(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_62(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6A7B0D91FD88D9EE(sParam0, ""))
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
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_19369[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9)
	{
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4), sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = (unk_0x94E3E074F38DF86C() + iParam3);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = ((unk_0x94E3E074F38DF86C() + iParam3) + iParam4);
		}
		else
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_63();
	}
}

void func_63()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0])
			{
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1])
			{
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2])
			{
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_64()
{
	func_31();
	switch (Global_101700.f_2095.f_539.f_3549)
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
		return unk_0x48B8265059381CD0(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_66(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_101700.f_23954.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x6AF6B39BFDB53CB5(), 64);
	uVar16 = func_69(Var0);
	return uVar16;
}

int func_69(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x765F5B806B517045(&cParam0))
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
			Global_101700.f_2095.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_101700.f_2095.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 6022;
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
			if (iVar1 != 6022)
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
	iVar0 = Global_2503826[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
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
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
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
	iVar0 = Global_2503826[iParam0 /*3*/][func_72(iParam1)];
	if (unk_0x7FE4F330D3D74809(iVar0, &uVar1, -1))
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
	if ((iParam2 != 145 && unk_0xA3794949321E107C(uVar0)) && unk_0x63A528817609801B(&(Global_101700.f_27009[iParam2 /*29*/].f_3)))
	{
		unk_0xAAF15482D9DB27D9(uVar0, &(Global_101700.f_27009[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_76(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF1FE04D602EA392E(iParam0);
	if (unk_0x3983CCB0D958159C(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_77(unk_0x63C468D583002D23(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
		}
		else
		{
			unk_0xCC930AE12D020496(uVar0, 2);
		}
	}
	else if (unk_0x80E9CA64E9C8E070(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_77(unk_0x63C468D583002D23(), 0.7f, 0.7f));
		unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
	}
	else if (unk_0x1461B0B259D86067(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_77(unk_0x63C468D583002D23(), 0.7f, 0.7f));
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
		Global_101690 = 1;
		Global_101687 = unk_0x94E3E074F38DF86C();
		if (func_59(Global_101689))
		{
			func_79(0);
		}
		unk_0x2A8465C4D16098B7(1, "RE_TITLE");
		if (iParam0 && func_59(Global_101689))
		{
			unk_0x3CB6B08E51C56965();
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
			if (Global_101700.f_23954.f_2 < 3)
			{
				if (!unk_0x7AED88F5CDBFFB3C())
				{
					func_80(func_81(iParam0), -1);
					Global_101700.f_23954.f_2++;
					unk_0xEB79FECD9022AAF0(&Global_101696, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x48B8265059381CD0(Global_101696, 1))
			{
				if (!unk_0x7AED88F5CDBFFB3C())
				{
					func_80(func_81(iParam0), -1);
					Global_101700.f_23954.f_3++;
					unk_0xEB79FECD9022AAF0(&Global_101696, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x48B8265059381CD0(Global_101696, 2))
			{
				if (!unk_0x7AED88F5CDBFFB3C())
				{
					func_80(func_81(iParam0), -1);
					Global_101700.f_23954.f_4++;
					unk_0xEB79FECD9022AAF0(&Global_101696, 2);
				}
			}
			break;
	}
}

void func_80(var uParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(uParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
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
	switch (func_83(&Global_25249, 0, 5, 0, unk_0xE9A5FDFDC239B2ED()))
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
		if (Global_89302.f_44 == 1)
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
		Global_35745++;
		*uParam0 = Global_35745;
		unk_0xF7A1A67D26D29975(unk_0x592069F95C314814(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBED07ACDB4C03BB0(8);
		}
		Global_35781 = iParam2;
		Global_35743 = *uParam0;
		Global_35744 = iParam4;
		Global_35742 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35742 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35742)
			{
				if (Global_35748[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35743 == *uParam0)
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
		if (Global_35742 == 8)
		{
			return 0;
		}
		Global_35745++;
		*uParam0 = Global_35745;
		Global_35748[Global_35742 /*4*/] = Global_35745;
		Global_35748[Global_35742 /*4*/].f_1 = iParam1;
		Global_35748[Global_35742 /*4*/].f_2 = iParam2;
		Global_35748[Global_35742 /*4*/].f_3 = 0;
		Global_35742++;
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
	
	if (Global_35742 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35742)
	{
		if (Global_35748[iVar0 /*4*/] == *uParam0)
		{
			Global_35748[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_85(int iParam0)
{
	return func_86(iParam0, Global_35781);
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
	if (Global_35781 == 15)
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
	
	if (unk_0xBDEC9B948A62578A())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
		{
			return 0;
		}
		iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (bParam0)
		{
			if (unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				if (unk_0x17206B315923243C(iVar0, -1, 0) != unk_0x17B5CC8A8615737D())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0x2BB7527A68E10019(iVar0) < 0.95f || unk_0x2BB7527A68E10019(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (!unk_0xD37F3675F4465D41(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	return 1;
}

void func_89()
{
	unk_0x5BE53482EFD49141("RE14A_FAIL");
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
		unk_0x50FD1894558DE186(800);
		while (unk_0x46EEE08565CE19CA())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (!unk_0xA929B2923D14E2F8(iLocal_319, 0))
		{
			unk_0xE4FDA285C25BBA3A(iLocal_319, 0f, 1f, 1f, 200f, 800f, 1);
		}
		bLocal_536 = true;
		iLocal_303 = 8;
	}
	switch (iLocal_303)
	{
		case 0:
			func_2(1, 1, 1, 0);
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
			unk_0x05528626031014B3();
			unk_0x2D28D5B324F77D2D(0);
			unk_0xE418A8E16B02C0AC(0);
			unk_0x14416EDB64E4D05E(0);
			if (unk_0x23E9113C762466ED(unk_0x0C00E753D78DEA62()))
			{
				unk_0xF0F77C99098F999B(unk_0x0C00E753D78DEA62(), 1, 0);
			}
			unk_0x26D48449559660BA(Local_308, 50f, 0);
			unk_0x0668B21A0C3A4821(Local_308, 30f, 0, 0, 0, 0, 0);
			unk_0x7B408F9F309B3E56(Local_308, 100f, 0);
			if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
			{
				if (unk_0x1C34CE8087E3897C(unk_0x0C00E753D78DEA62(), Local_308, 8f, 8f, 8f, 0, 1, 0))
				{
					uLocal_321 = unk_0x0C00E753D78DEA62();
					unk_0xF0F77C99098F999B(uLocal_321, 1, 0);
					unk_0x813865264334331D(&iLocal_321);
				}
			}
			if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, 0, 1, 0))
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), -477.3538f, -972.67f, 22.5494f, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 237.4839f);
			}
			uLocal_530 = unk_0x71877D18957B1679("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, 1, 2);
			uLocal_531 = unk_0x71877D18957B1679("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, 1, 2);
			unk_0x2F0C4DC7A4D75C2E(uLocal_530, "HAND_SHAKE", 0.3f);
			unk_0x2F0C4DC7A4D75C2E(uLocal_531, "HAND_SHAKE", 0.3f);
			func_93();
			unk_0xA652CA24468EC747(uLocal_530, 1);
			unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
			unk_0x4EDE34FBADD967A6(500);
			unk_0x6530B35F40F7E78B(uLocal_531, uLocal_530, 3500, 1, 1);
			unk_0x5BE53482EFD49141("RE14A_START");
			iLocal_354 = unk_0x94E3E074F38DF86C();
			iLocal_303 = 1;
			break;
		
		case 1:
			if ((unk_0x94E3E074F38DF86C() - iLocal_354) > 3500)
			{
				unk_0x4988C48537D1AE4F(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				unk_0x4988C48537D1AE4F(iLocal_350, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				unk_0xF880A68A9F678D9F(uLocal_327[0], 1);
				func_92(uLocal_530);
				func_92(uLocal_531);
				uLocal_530 = unk_0x71877D18957B1679("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, 1, 2);
				uLocal_531 = unk_0x71877D18957B1679("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, 1, 2);
				unk_0x2F0C4DC7A4D75C2E(uLocal_530, "HAND_SHAKE", 0.3f);
				unk_0x2F0C4DC7A4D75C2E(uLocal_531, "HAND_SHAKE", 0.3f);
				unk_0x6530B35F40F7E78B(uLocal_531, uLocal_530, 4000, 1, 0);
				if (!unk_0xCA41A00932714525(iLocal_317))
				{
					unk_0x15848523A8959DBC(iLocal_317);
					unk_0x0D322CDF37087C0E(iLocal_317, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (unk_0x23E9113C762466ED(iLocal_340))
				{
					unk_0xB2E72B5CFE1EC372(iLocal_340, 1, 1);
					unk_0x1AAFEA627BB9C402(&iLocal_340);
				}
				iLocal_354 = unk_0x94E3E074F38DF86C();
				iLocal_303 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x94E3E074F38DF86C() - iLocal_354) > 1500)
			{
				unk_0x4988C48537D1AE4F(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				iLocal_354 = unk_0x94E3E074F38DF86C();
				iLocal_303 = 3;
			}
			break;
		
		case 3:
			if ((unk_0x94E3E074F38DF86C() - iLocal_354) > 500)
			{
				if (unk_0x23E9113C762466ED(uLocal_327[0]))
				{
					unk_0x98F0FA127445E343(uLocal_327[0], 0);
					unk_0x5C9883713FC5A923(uLocal_327[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, 1, 1, 1, 0, 1);
					unk_0x23E3549861C69EEC(uLocal_327[0], 11, 0);
					unk_0x23E3549861C69EEC(uLocal_327[0], 18, 0);
					unk_0x23E3549861C69EEC(uLocal_327[0], 19, 0);
					unk_0x23E3549861C69EEC(uLocal_327[0], 23, 0);
					unk_0x23E3549861C69EEC(uLocal_327[0], 9, 0);
					unk_0x23E3549861C69EEC(uLocal_327[0], 12, 0);
					unk_0x23E3549861C69EEC(uLocal_327[0], 17, 0);
					unk_0xD5DF168F17272A98("scr_reconstruct_pipefall_debris", uLocal_327[0], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				iLocal_354 = unk_0x94E3E074F38DF86C();
				iLocal_303 = 4;
			}
			break;
		
		case 4:
			if ((unk_0x94E3E074F38DF86C() - iLocal_354) > 2000)
			{
				func_92(uLocal_530);
				func_92(uLocal_531);
				uLocal_530 = unk_0x71877D18957B1679("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, 1, 2);
				uLocal_531 = unk_0x71877D18957B1679("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, 1, 2);
				unk_0x2F0C4DC7A4D75C2E(uLocal_530, "HAND_SHAKE", 0.3f);
				unk_0x2F0C4DC7A4D75C2E(uLocal_531, "HAND_SHAKE", 0.3f);
				unk_0x6530B35F40F7E78B(uLocal_531, uLocal_530, 1000, 3, 3);
				unk_0x2EB37CDED0E516F3(iLocal_350);
				iLocal_354 = unk_0x94E3E074F38DF86C();
				iLocal_303 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x94E3E074F38DF86C() - iLocal_354) > 500)
			{
				if (!unk_0xA929B2923D14E2F8(iLocal_319, 0))
				{
					unk_0x98F0FA127445E343(iLocal_319, 0);
					unk_0x4988C48537D1AE4F(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
					unk_0xE4FDA285C25BBA3A(iLocal_319, 0f, 1f, 1f, 200f, 800f, 1);
					if (!unk_0xCA41A00932714525(iLocal_317))
					{
						unk_0xEF9294ED57E4AC3D(iLocal_317);
					}
					unk_0xEB1EFACA68933402(iLocal_317, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0f, 0, 0, 0);
					unk_0xD5DF168F17272A98("scr_reconstruct_pipe_impact", iLocal_319, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					func_24(&uLocal_358, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (unk_0x0F1BF24ED3B7ED40(uLocal_530) && unk_0x0F1BF24ED3B7ED40(uLocal_531))
					{
						unk_0x2F0C4DC7A4D75C2E(uLocal_530, "HAND_SHAKE", 1.5f);
						unk_0x2F0C4DC7A4D75C2E(uLocal_531, "HAND_SHAKE", 1.5f);
					}
					iLocal_354 = unk_0x94E3E074F38DF86C();
					iLocal_303 = 6;
				}
			}
			break;
		
		case 6:
			if ((unk_0x94E3E074F38DF86C() - iLocal_354) > 500)
			{
				func_92(uLocal_530);
				func_92(uLocal_531);
				uLocal_530 = unk_0x71877D18957B1679("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, 1, 2);
				uLocal_531 = unk_0x71877D18957B1679("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, 1, 2);
				unk_0x2F0C4DC7A4D75C2E(uLocal_530, "HAND_SHAKE", 0.5f);
				unk_0x2F0C4DC7A4D75C2E(uLocal_531, "HAND_SHAKE", 0.5f);
				unk_0x6530B35F40F7E78B(uLocal_531, uLocal_530, 2500, 3, 3);
				if (!unk_0xCA41A00932714525(iLocal_317))
				{
					unk_0x0D322CDF37087C0E(iLocal_317, unk_0x57240623C1BC6E88(iLocal_317, 1) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_354 = unk_0x94E3E074F38DF86C();
				iLocal_303 = 7;
			}
			break;
		
		case 7:
			if ((unk_0x94E3E074F38DF86C() - iLocal_354) > 2200 && !iLocal_346)
			{
				if ((unk_0x9EFEA3B33DE2B966(unk_0x17B5CC8A8615737D()) && unk_0x1066E7A58E2A0D9D() == 4) || (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && unk_0x428CA09FA2E92B87() == 4))
				{
					unk_0x9AF1ABF0E97411BF("CamPushInNeutral", 0, 0);
					unk_0x4988C48537D1AE4F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_346 = 1;
				}
			}
			if ((unk_0x94E3E074F38DF86C() - iLocal_354) > 2500)
			{
				if (unk_0x45CD66F0A131E554(iLocal_319, 0))
				{
					unk_0x98F0FA127445E343(iLocal_319, 1);
				}
				iLocal_303 = 8;
			}
			break;
		
		case 8:
			unk_0x5BE53482EFD49141("RE14A_PIPES");
			if (unk_0x23E9113C762466ED(uLocal_327[0]))
			{
				unk_0x1AAFEA627BB9C402(&(uLocal_327[0]));
			}
			if (unk_0x45CD66F0A131E554(iLocal_319, 0))
			{
				unk_0xEC0212C05F98C1DF(iLocal_319, 250f);
				unk_0x5DC8C2F2F8A363C2(iLocal_319, Local_308, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(iLocal_319, 80f);
				unk_0x3FE1DC991D646A3B(Local_308, 50f, 0);
			}
			if (!unk_0xCA41A00932714525(iLocal_317))
			{
				unk_0x15848523A8959DBC(iLocal_317);
				unk_0xEF9294ED57E4AC3D(iLocal_317);
				unk_0xEB1EFACA68933402(iLocal_317, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0f, 0, 0, 0);
			}
			unk_0xA652CA24468EC747(uLocal_530, 0);
			unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
			unk_0x2BC4A4AFFC2D937D(uLocal_530, 0);
			unk_0x2BC4A4AFFC2D937D(uLocal_531, 0);
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
			unk_0xBA7CD73403732191(0f);
			unk_0x2D28D5B324F77D2D(1);
			unk_0xE418A8E16B02C0AC(1);
			unk_0x14416EDB64E4D05E(1);
			func_2(0, 1, 1, 0);
			iLocal_351 = unk_0x94E3E074F38DF86C();
			unk_0x924CDE68BA2ED3BA(joaat("prop_pipe_stack_01"));
			uLocal_327[1] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_pipe_single_01"), -457.8815f, -988.9059f, 22.9554f, 1, 1, 0);
			unk_0x04A5FAE5B1EB8E28(uLocal_327[1], -0.1939f, 105.0058f, 77.3964f, 2, 1);
			uLocal_327[2] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_pipe_single_01"), -451.5131f, -986.8079f, 24.6947f, 1, 1, 0);
			unk_0x04A5FAE5B1EB8E28(uLocal_327[2], 24.3941f, 32.5423f, 80.6862f, 2, 1);
			uLocal_327[3] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_pipe_single_01"), -450.8099f, -985.9972f, 24.7104f, 1, 1, 0);
			unk_0x04A5FAE5B1EB8E28(uLocal_327[3], 24.1841f, 110.287f, 78.4357f, 2, 1);
			uLocal_327[4] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_pipe_single_01"), -456.6558f, -987.3979f, 22.9537f, 1, 1, 0);
			unk_0x04A5FAE5B1EB8E28(uLocal_327[4], -0.0264f, 29.5754f, 79.1811f, 2, 1);
			uLocal_327[5] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_pipe_single_01"), -456.1279f, -988.4162f, 22.9889f, 1, 1, 0);
			unk_0x04A5FAE5B1EB8E28(uLocal_327[5], -0.6337f, 108.4339f, 77.9539f, 2, 1);
			uLocal_327[6] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_pipe_single_01"), -457.0807f, -987.3059f, 23.7564f, 1, 1, 0);
			unk_0x04A5FAE5B1EB8E28(uLocal_327[6], 0.0929f, 74.2657f, 79.3839f, 2, 1);
			uLocal_327[7] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_pipe_single_01"), -456.6558f, -983.7804f, 22.9712f, 1, 1, 0);
			unk_0x04A5FAE5B1EB8E28(uLocal_327[7], -0.0264f, 29.5754f, 80.9061f, 2, 1);
			uLocal_327[8] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_pipe_single_01"), -455.3279f, -983.1712f, 22.9564f, 1, 1, 0);
			unk_0x04A5FAE5B1EB8E28(uLocal_327[8], -0.1087f, 109.7339f, 80.9789f, 2, 1);
			uLocal_327[9] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_pipe_single_01"), -456.1632f, -983.9359f, 23.7964f, 1, 1, 0);
			unk_0x04A5FAE5B1EB8E28(uLocal_327[9], -0.3321f, 74.1907f, 81.6089f, 2, 1);
			uLocal_327[10] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_pipe_single_01"), -454.644f, -994.1709f, 23.3329f, 1, 1, 0);
			unk_0x04A5FAE5B1EB8E28(uLocal_327[10], 5.7811f, 104.6058f, 104.6964f, 2, 1);
			iLocal_347 = 0;
			while (iLocal_347 < 11)
			{
				if (unk_0x23E9113C762466ED(uLocal_327[iLocal_347]))
				{
					unk_0x46B421AC0DE69583(uLocal_327[iLocal_347], 1);
					unk_0x98F0FA127445E343(uLocal_327[iLocal_347], 1);
				}
				iLocal_347++;
			}
			if (bLocal_536)
			{
				unk_0xC7845898207D067F(800);
				while (unk_0x5C0856D86B18EE57())
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
	if (unk_0x0F1BF24ED3B7ED40(uParam0))
	{
		unk_0x2BC4A4AFFC2D937D(uParam0, 0);
	}
}

void func_93()
{
	unk_0xFBB765291A96B687();
	Global_16737 = 0;
}

int func_94(int iParam0)
{
	if (unk_0x30F06AB0772AFB80())
	{
		if ((unk_0x94E3E074F38DF86C() - Global_28) > iParam0)
		{
			Global_27 = unk_0x94E3E074F38DF86C();
		}
		Global_28 = unk_0x94E3E074F38DF86C();
		if ((unk_0x94E3E074F38DF86C() - Global_27) > iParam0)
		{
			if (func_95())
			{
				Global_27 = unk_0x94E3E074F38DF86C();
				return 1;
			}
		}
	}
	return 0;
}

int func_95()
{
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (unk_0x4B972043966C2EB8(0, 18) || unk_0x4B972043966C2EB8(2, 18))
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 1;
	Global_16742 = 0;
	Global_16740 = iParam7;
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
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
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
		if (unk_0x48B8265059381CD0((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0x48B8265059381CD0((*uParam0)[iVar0 /*2*/], 29))
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
	if (unk_0x48B8265059381CD0(iParam0, 30))
	{
		if (unk_0x48B8265059381CD0(iParam0, 29))
		{
			switch (func_101(iParam0))
			{
				case 0:
					return unk_0x9F746898F7881612(uParam2);
					break;
				
				case 1:
					return unk_0xF4F8AE8DD0F08C1E(sParam1);
					break;
				
				case 2:
					return unk_0x69EB2CB272E0AD5D(sParam1);
					break;
				
				case 3:
					return unk_0xE0B615EF03FE4422(sParam1);
					break;
				
				case 4:
					return unk_0x63781672EC63FB83(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x246AF348B8F0270F(sParam1);
					break;
				
				case 6:
					return unk_0x985A2515CBAF7290(sParam1, unk_0x48B8265059381CD0(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x1773B272030A4F46(iParam2);
					break;
				
				case 8:
					return unk_0x657558590DD37F85(iParam2);
					break;
				
				case 9:
					return unk_0xD181F97E98E28C18();
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
		if (unk_0x48B8265059381CD0(iParam0, iVar0))
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
		if (unk_0x48B8265059381CD0((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0x48B8265059381CD0((*uParam0)[iVar0 /*2*/], iParam1))
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
		if (!unk_0x48B8265059381CD0((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xEB79FECD9022AAF0(uParam0[iVar0 /*2*/], iParam1);
			unk_0xEB79FECD9022AAF0(uParam0[iVar0 /*2*/], 30);
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
		if ((unk_0x0385EDD8AAEC86F4() >= (uParam0->f_32 + uParam0->f_33) || unk_0x48B8265059381CD0(Global_91491.f_20, 2)) || unk_0x48B8265059381CD0(Global_91491.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x48B8265059381CD0((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0x48B8265059381CD0((*uParam0)[iVar0 /*2*/], 29))
					{
						func_107(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x0385EDD8AAEC86F4();
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
	if (unk_0x48B8265059381CD0(*uParam0, 30))
	{
		switch (func_101(*uParam0))
		{
			case 0:
				unk_0xE1324F59713746FA(uParam2);
				break;
			
			case 1:
				unk_0xA0E7D0E8FE126EE8(sParam1);
				break;
			
			case 2:
				unk_0xFD2E59A7CCE66AB3(sParam1);
				break;
			
			case 3:
				unk_0xA6AD245AF4469018(sParam1, unk_0x48B8265059381CD0(*uParam0, 28));
				break;
			
			case 4:
				unk_0xF5B59A4EB5622187(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xD2EFABA17D4F41B0(sParam1);
				break;
			
			case 6:
				unk_0x985A2515CBAF7290(sParam1, unk_0x48B8265059381CD0(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x40DAFD1EE608CAF6(iParam2);
				break;
			
			case 8:
				unk_0xA73AE78D2491E6E1(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xD250AE1AB37DC648();
				break;
			
			default:
				break;
		}
		unk_0xEB79FECD9022AAF0(uParam0, 29);
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
		unk_0xD90CB3CF9A40791C(joaat("utillitruck2"), 1);
		unk_0x000E46314C3A507F(0.1f);
		unk_0xFCBD7340FBF1FE46(3, 0);
		unk_0xD1D19967E553E144(Local_305 + Vector(50f, 50f, 50f), Local_305 - Vector(50f, 50f, 50f), 0, 1, 1, 1);
		Local_308 = { -455.6561f, -985.8071f, 22.4868f };
		iLocal_319 = unk_0x692A2891A2BA7352(joaat("utillitruck2"), Local_308, 80f, 1, 1);
		unk_0x524A422B74847594(iLocal_319, 0, 1, 0);
		unk_0xD602D152E57C823D(iLocal_319, 3);
		unk_0x70888C5F297D3D80(iLocal_319, 1, 1);
		unk_0x70888C5F297D3D80(iLocal_319, 2, 1);
		unk_0x70888C5F297D3D80(iLocal_319, 3, 0);
		unk_0x70888C5F297D3D80(iLocal_319, 4, 1);
		unk_0x70888C5F297D3D80(iLocal_319, 5, 1);
		unk_0x70888C5F297D3D80(iLocal_319, 6, 0);
		unk_0x70888C5F297D3D80(iLocal_319, 7, 1);
		unk_0x98F0FA127445E343(iLocal_319, 1);
		unk_0x4C44C1A3160350E2(iLocal_319, 0, 0, 0, 1, 0, 0, 0, 0);
		unk_0x2380074FC04D1644(iLocal_319, 10000);
		unk_0x9665F5FB3A8B2550(iLocal_319, 5f);
		iLocal_320 = unk_0x692A2891A2BA7352(joaat("bulldozer"), -472.9444f, -966.671f, 22.5534f, 181.8365f, 1, 1);
		unk_0x1B60289D0F2A2E3C(Local_308, 10f, 1, 0, 0, 0);
		uLocal_327[0] = unk_0x89241A4EA7EE46D2(joaat("prop_pipe_stack_01"), -453.2f, -986.1f, 59.45f, 1, 1, 0);
		unk_0x0608D50823C6AA6D(uLocal_327[0], 90f);
		unk_0x98F0FA127445E343(uLocal_327[0], 1);
		unk_0x4C44C1A3160350E2(uLocal_327[0], 1, 1, 1, 1, 0, 0, 0, 0);
		unk_0x2380074FC04D1644(uLocal_327[0], 10000000);
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
		if (!unk_0xA3794949321E107C(uLocal_326))
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
		if (unk_0x48B8265059381CD0((*uParam0)[iVar0 /*2*/], 30))
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
	if (unk_0x48B8265059381CD0(uParam0, 30))
	{
		switch (func_101(iParam0))
		{
			case 0:
				unk_0x924CDE68BA2ED3BA(uParam2);
				break;
			
			case 1:
				unk_0xF9FFB9857F3120F8(sParam1);
				break;
			
			case 2:
				unk_0x935A2175858BD59D(sParam1);
				break;
			
			case 3:
				unk_0xC07032666ADF86BE(sParam1);
				break;
			
			case 4:
				unk_0xF8E2640CE709A221(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x01ADBE1EAD155D08(sParam1);
				break;
			
			case 6:
				unk_0x9A27E67BCD441C6E();
				break;
			
			case 7:
				unk_0x2B3C688FCF1D85DE(iParam2);
				break;
			
			case 8:
				unk_0x6DB5F7460B043A80(iParam2, unk_0x48B8265059381CD0(iParam0, 26));
				break;
			
			case 9:
				unk_0x7D861B56FA788D3F();
				break;
			
			default:
				break;
		}
	}
}

int func_115()
{
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xACA666C39EA49E82(unk_0x17B5CC8A8615737D())) > 1369f && !func_126())
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
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (func_32(func_30()))
		{
			iVar36 = func_64();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x48B8265059381CD0(Global_101700.f_17533[iVar32 /*6*/], 2) && !unk_0x48B8265059381CD0(Global_101700.f_17533[iVar32 /*6*/], 3))
				{
					func_117(iVar32, &Var0);
					fVar35 = unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), Var0.f_6, 1);
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
	if (unk_0x9C88EB7B70229335(&cVar2))
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
	return Global_101418 > 0;
}

int func_124()
{
	if (Global_88746 != -1)
	{
		return 1;
	}
	return 0;
}

int func_125()
{
	if (Global_88746 != -1)
	{
		return unk_0x48B8265059381CD0(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

int func_126()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x800431CFB358AFCF() == 1f)
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
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xACA666C39EA49E82(unk_0x17B5CC8A8615737D())) > 1369f && !func_126())
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
	if ((Global_101689 == func_68() && unk_0xD3718ACF1D7AD57E()) && Global_101690)
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
	unk_0xB3EFCE1243C98BFD(0);
	unk_0x2BC65DD826D4278E(1);
	Global_101686 = 0;
	func_130();
}

void func_130()
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			unk_0xD90CB3CF9A40791C(unk_0x0324EEB10F81965F(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)), 1);
		}
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 0);
	}
}

void func_131(int iParam0)
{
	Global_101689 = iParam0;
}

int func_132(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_138924)
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			Var1 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xACA666C39EA49E82(unk_0x17B5CC8A8615737D())) > 1369f && !func_126())
			{
				return 0;
			}
		}
		if (!Global_101700.f_8044)
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
		if (Global_101689 != -1)
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !bParam6)
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
		if (!func_168(Global_101700.f_23954.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x94E3E074F38DF86C() - Global_101691) < 150000)
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
		if (unk_0xE6235D8850CC396F())
		{
			return 0;
		}
		if (unk_0xD3718ACF1D7AD57E())
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
		if (unk_0x623BDE1B17A9D9E3(unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D())))
		{
			if ((unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0x1A4C1C534F86E06A(377.153f, -717.567f, 10.0536f) || unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0x1A4C1C534F86E06A(320.9934f, 265.2515f, 82.1221f)) || unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0x1A4C1C534F86E06A(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_157(0, 0))
		{
			return 0;
		}
		if (Global_25336)
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
				Var5 = { Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_156(iVar8))
				{
					if (func_134(iVar4))
					{
						if (!func_133(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_146(unk_0x48B8265059381CD0(iParam0, 31), -1, 1)) + 2011;
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
	
	func_155(&uVar0, unk_0x0956E4296D9CC40A());
	func_154(&uVar0, unk_0x32883EAC7DC86C40());
	func_153(&uVar0, unk_0x80BC37C67CB292E5());
	func_152(&uVar0, unk_0x202B089E6328ABFA());
	func_151(&uVar0, unk_0xCD8338A83E1BCC14());
	func_150(&uVar0, unk_0x1BBFD9409EC2598C());
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
	if (unk_0x48B8265059381CD0(Global_101700.f_23954.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	int iVar0;
	
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
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
						if (((((((((((((((((!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_166()) || Global_100747) || Global_25192) || func_165()) || func_37(8, -1)) || func_164()) || func_163()) || func_162()) || func_161()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1) || func_166()) || Global_25192) || func_165()) || func_37(8, -1)) || func_162()) || func_164()) || func_163()) || func_161()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_166()) || Global_100747) || Global_25192) || func_165()) || func_37(8, -1)) || func_162()) || func_164()) || func_163()) || func_161()) || Global_101700.f_6647.f_919[iVar0] == 5) || Global_36328 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_166()) || Global_100747) || Global_25192) || func_165()) || func_37(8, -1)) || func_164()) || func_163()) || func_161()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_166() || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0) || func_37(8, -1)) || func_161()) || func_160()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_37(8, -1) || func_164()) || func_163()) || func_160()) || func_159())
						{
							return 0;
						}
						if ((unk_0xE9E6B5364105A000() && unk_0x3108C06B8E90438D() != 3) && unk_0x4DA93F059B47A9FA() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
						{
							if ((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || func_166()) || Global_25192) || func_165()) || func_37(8, -1)) || func_163()) || func_162()) || func_161()) || Global_101700.f_6647.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || !unk_0x30F06AB0772AFB80()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || func_166()) || func_163()) || Global_100747) || Global_25192) || func_165()) || Global_36912) || func_37(8, -1)) || func_162()) || func_160()) || func_161()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || !unk_0x30F06AB0772AFB80()) || unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0)) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1)) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5FD7D852A3EAF133(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || func_166()) || Global_100747) || Global_25192) || func_165()) || func_37(8, -1)) || func_162()) || func_160()) || func_164()) || func_163()) || func_161())
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
	return Global_91530.f_1;
}

int func_160()
{
	if (Global_88746 != -1)
	{
		return unk_0x48B8265059381CD0(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

int func_161()
{
	if (unk_0x82F1A060D8F4583B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_162()
{
	if (Global_69962)
	{
		return 1;
	}
	else if (Global_55816 && !Global_55822)
	{
		return 1;
	}
	return 0;
}

bool func_163()
{
	return Global_91543.f_304 > 0;
}

bool func_164()
{
	return Global_91543.f_303 > 0;
}

var func_165()
{
	return Global_1315233;
}

int func_166()
{
	if (!unk_0x63C468D583002D23())
	{
		return Global_89302.f_44 == 1;
	}
	return 0;
}

int func_167()
{
	func_29();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
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
	return Global_101700.f_6647.f_919[iParam0];
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
		bVar1 = unk_0x48B8265059381CD0(Global_101700.f_23954, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x48B8265059381CD0(Global_101700.f_23954.f_1, iVar0);
	}
	return bVar1;
}

int func_172()
{
	int iVar0;
	
	if (Global_25340)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				if (!unk_0xCA41A00932714525(unk_0x17206B315923243C(iVar0, 0, 0)))
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
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xEB79FECD9022AAF0(&uVar0, 2);
				unk_0xEB79FECD9022AAF0(&uVar0, 4);
				unk_0xEB79FECD9022AAF0(&uVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					iVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&iVar0, 0);
					unk_0x0D1285E5ED89254D(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
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
			unk_0x5BE53482EFD49141("RE14A_FAIL");
			func_209();
			if (!unk_0xCA41A00932714525(iLocal_317))
			{
				unk_0x6018E338F7ABCE75(iLocal_317, 317, 1);
			}
			if (!unk_0xA929B2923D14E2F8(iLocal_322, 0))
			{
				if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_322, 0) && !unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_322, 50f, 50f, 50f, 0, 1, 0))
				{
					func_186(iLocal_322, 0, 145);
				}
			}
			iLocal_347 = 0;
			while (iLocal_347 < 11)
			{
				if (unk_0x23E9113C762466ED(uLocal_327[iLocal_347]))
				{
					unk_0x98F0FA127445E343(uLocal_327[iLocal_347], 0);
				}
				iLocal_347++;
			}
			if (!unk_0xA929B2923D14E2F8(iLocal_319, 0))
			{
				unk_0xEC0212C05F98C1DF(iLocal_319, 0f);
				unk_0x98F0FA127445E343(iLocal_319, 0);
			}
			if (unk_0x23E9113C762466ED(iLocal_339))
			{
				unk_0x98F0FA127445E343(iLocal_339, 0);
			}
			unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
			unk_0x2D28D5B324F77D2D(1);
			unk_0xE418A8E16B02C0AC(1);
			func_2(0, 1, 1, 0);
			iLocal_342 = 1;
			unk_0x8ADF92E4B51709E2(1f);
			unk_0xF9FFB9857F3120F8("re@construction");
			if (unk_0x0F1BF24ED3B7ED40(uLocal_529))
			{
				unk_0x2BC4A4AFFC2D937D(uLocal_529, 0);
				unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(0f, 1065353216);
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
				unk_0x98F0FA127445E343(unk_0x17B5CC8A8615737D(), 0);
			}
			if (unk_0xA3794949321E107C(uLocal_323))
			{
				unk_0x020DF7300725ECAB(&uLocal_323);
			}
			if (unk_0xA3794949321E107C(uLocal_324))
			{
				unk_0x020DF7300725ECAB(&uLocal_324);
			}
			if (unk_0xA3794949321E107C(uLocal_325))
			{
				unk_0x020DF7300725ECAB(&uLocal_325);
			}
			if (unk_0xA3794949321E107C(uLocal_326))
			{
				unk_0x020DF7300725ECAB(&uLocal_326);
			}
		}
		unk_0xD211CBCC0E735E4F(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 1);
		unk_0x000E46314C3A507F(1f);
		unk_0xFCBD7340FBF1FE46(3, 1);
		unk_0xD4F40BAC3B3B974C();
		unk_0xCC76050C3A61CF48();
	}
	func_110(&Local_537, 0);
	func_175(-1);
	unk_0x921053BAF754303D();
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
		unk_0x2A8465C4D16098B7(0, 0);
		Global_101691 = unk_0x94E3E074F38DF86C();
		func_178(30000);
		StringCopy(&cVar0, func_177(Global_101689, 1), 64);
		if (func_67(Global_101689) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		unk_0x8B93E6E9B44E0A75(&cVar0, Global_101686, (unk_0x94E3E074F38DF86C() - Global_101687), 0);
	}
	else if (unk_0x48B8265059381CD0(Global_101696, 0) && Global_101700.f_23954.f_2 < 3)
	{
		unk_0x21E7933CCC7B3724(&Global_101696, 0);
	}
	func_176(&Global_25249);
	Global_101690 = 0;
	func_131(-1);
}

void func_176(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35743)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35742 = 0;
	Global_35744 = 0;
	Global_35781 = 15;
	Global_55819 = 0;
	Global_55820 = 0;
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
	Global_36332 = (unk_0x94E3E074F38DF86C() + iParam0);
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
	Global_101700.f_23954.f_43[iParam0] = *uParam1;
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
		uVar1 = unk_0x1F1F11C691B0636E(iParam0, &uVar0);
		if (!unk_0x9C88EB7B70229335(uVar1))
		{
			if (unk_0x765F5B806B517045(uVar1) == unk_0x765F5B806B517045("vehicle_gen_controller"))
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
	
	if (!func_192(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x17206B315923243C(iParam0, -1, 0);
		if (!unk_0x23E9113C762466ED(iVar0))
		{
			iVar0 = unk_0x67649920B2C3A244(iParam0, -1);
		}
		if (unk_0x23E9113C762466ED(iVar0) && !unk_0xCA41A00932714525(iVar0))
		{
			if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
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
		if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_188(iParam0, &(Global_101700.f_31389.f_5510));
}

void func_188(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		func_191(uParam1);
		uParam1->f_66 = unk_0x0324EEB10F81965F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE184AC3A4DAF353D(iParam0), 16);
		*uParam1 = unk_0x420AD4B7A2DA4F74(iParam0);
		unk_0x3C5D9FD265196560(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x5CE46A3E89B49FAE(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xEFB6EA0CF01B73B1(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xB3A30C9CBD0AF035(iParam0);
		uParam1->f_67 = unk_0x7C73B96D4046CE64(iParam0);
		uParam1->f_69 = unk_0x5AADFFFE972FF9B9(iParam0);
		uParam1->f_70 = unk_0xB7541DEA333EE53D(iParam0);
		unk_0x44A79540466923A3(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x86916C0F8ACCF8A7(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 2))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 28);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 3))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 29);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 30);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 1))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x4555FC519F5B33E3(iParam0, 0))
		{
			uParam1->f_68 = unk_0x575D47C669B84572(iParam0);
		}
		if (unk_0x8432EA469FDB418D(uParam1->f_66))
		{
			if (unk_0x3B236BCC7CA86F1F(iParam0))
			{
				switch (unk_0xF4925FA16E991774(iParam0))
				{
					case 2:
					case 0:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x3AAC868F49EC1E0A(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 9);
		}
		if (unk_0xDABC65773FAE7D61(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 10);
		}
		if (unk_0xD74AC52CAC4E709E(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 13);
			unk_0xF1A2595FDE7845CA(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9FC3D9B8F2BAF3E6(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 12);
		}
		func_190(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xA13396827DE7EB7C(iParam0, iVar0 + 1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_189(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA95FCE90BA930118(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 11);
		}
		if (unk_0x44748DA5CF34DA5E(iParam0, "IgnoredByQuickSave") && unk_0x12D059B73664565A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 27);
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
	
	if (!unk_0x45CD66F0A131E554(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFA4A2220118417AE(*iParam0) == 0)
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
			if (unk_0x2E6E95784D18C8E0(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x68BE46B0EA4FCFAF(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_191(var uParam0)
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

int func_192(int iParam0)
{
	if ((((((((((!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0)) || func_207(iParam0, 0, 0)) || func_207(iParam0, 1, 0)) || func_207(iParam0, 2, 0)) || func_206(iParam0) != 145) || func_205(iParam0)) || func_204(iParam0)) || func_203(iParam0)) || func_202(iParam0)) || !func_193(unk_0x0324EEB10F81965F(iParam0)))
	{
		if (func_204(iParam0))
		{
		}
		if (func_204(iParam0))
		{
		}
		if (func_207(iParam0, 0, 0))
		{
		}
		if (func_207(iParam0, 1, 0))
		{
		}
		if (func_207(iParam0, 2, 0))
		{
		}
		if (func_206(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_193(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_194(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xA55B002FED5A9858(iParam0) || unk_0x8432EA469FDB418D(iParam0)) || unk_0xC5082382D5482C0C(iParam0)) || unk_0x3B548F49528B5FA7(iParam0))
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

int func_194(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2ED6701376DBCF71(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x63C468D583002D23()) || (iParam0 == joaat("buffalo3") && !unk_0x63C468D583002D23())) || (iParam0 == joaat("gauntlet2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blista3"))
	{
		if (!func_173())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9AEFEF0C873443F4())
		{
			if (unk_0xE8885AFFB348EA8C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x5D46F50AE982AB28(Var1.f_0))
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
		if ((((!func_201() && !func_200()) && !func_199()) && !func_198()) && !func_173())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x8EA3D5407E9F4AF0() || unk_0xEF4E5E47AF0D4480()) || unk_0x7C2F31E78C33DE0F())
		{
		}
		else if (!func_199())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_197(iParam0))
		{
			return 0;
		}
	}
	if (!func_195(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_196())
	{
		return 1;
	}
	unk_0x5E5FAFB02AD6B99F(&iVar0, &uVar1);
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
	if (!unk_0x03E2F3A2203722EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_196()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482093)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x57E9911EC23E2C54();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5506 && !Global_262145.f_11530) && iVar1 < Global_262145.f_11531)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_198()
{
	return 0;
}

int func_199()
{
	return 1;
}

int func_200()
{
	return 1;
}

int func_201()
{
	if (unk_0x6948821CC8D52AC2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	uVar1 = unk_0xE184AC3A4DAF353D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6A7B0D91FD88D9EE(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_194(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x23E9113C762466ED(Global_89185[iVar0]))
		{
			if (Global_89185[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x23E9113C762466ED(Global_89155[iVar0]) && unk_0x45CD66F0A131E554(Global_89155[iVar0], 0))
			{
				if (Global_89155[iVar0] == iParam0 && unk_0x0324EEB10F81965F(Global_89155[iVar0]) == unk_0x0324EEB10F81965F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(Global_68531.f_484[24]))
	{
		if (iParam0 == Global_68531.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68531.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_206(int iParam0)
{
	int iVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 145;
	}
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (Global_89155[iVar0] == iParam0)
			{
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_207(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_208(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x48B8265059381CD0(Global_101700.f_6188[iVar9], 0))
		{
			if (unk_0xA3342DAAC0684FAC(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_208(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_209()
{
	Global_14611 = 0;
	func_210();
}

void func_210()
{
	if (unk_0x55C74612BE548D78())
	{
		unk_0x5FB0B609B3A49840();
		Global_16756 = 0;
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

