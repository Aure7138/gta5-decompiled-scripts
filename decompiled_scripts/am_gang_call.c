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
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	struct<53> Local_91 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_144 = 0;
	struct<5> Local_145[32];
	int iLocal_306 = 0;
	int iLocal_307[3] = { 0, 0, 0 };
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	struct<3> Local_316 = { 0, 0, 0 } ;
	var uLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 16;
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
	var uLocal_497[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	iLocal_312 = -1;
	iLocal_315 = -1;
	if (unk_0x1995B52453EF6537())
	{
		func_504(ScriptParam_0);
	}
	while (true)
	{
		func_503();
		if (func_493())
		{
			func_490();
		}
		uLocal_319 = unk_0x7414B386C0020BEC();
		func_481();
		func_478();
		func_473();
		func_472();
		switch (func_471(unk_0xBF9F666ECB14FCC3()))
		{
			case 0:
				if (func_470() == 1)
				{
					Local_145[unk_0xBF9F666ECB14FCC3() /*5*/] = 1;
				}
				else if (func_470() == 4)
				{
					Local_145[unk_0xBF9F666ECB14FCC3() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_470() == 1)
				{
					func_464();
				}
				else if (func_470() == 0)
				{
					func_458();
					Local_145[unk_0xBF9F666ECB14FCC3() /*5*/] = 0;
				}
				else if (func_470() == 4)
				{
					Local_145[unk_0xBF9F666ECB14FCC3() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_433();
				func_431(&(Local_91.f_52));
				if (func_430(&(Local_91.f_52)))
				{
					iVar0 = 0;
					while (iVar0 < func_429(iLocal_312))
					{
						func_433();
						iVar0++;
					}
					Local_145[unk_0xBF9F666ECB14FCC3() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_145[unk_0xBF9F666ECB14FCC3() /*5*/] = 4;
			
			case 4:
				func_234();
				break;
		}
		if (unk_0x04DE35D10A718EEF())
		{
			func_232();
			func_231();
			func_230();
			switch (func_470())
			{
				case 0:
					func_229();
					if (func_225())
					{
						if (!unk_0xB529B2A4B7C64D6D(unk_0x4572B13EE70C8F52(iLocal_314), 0))
						{
							func_223(unk_0x4572B13EE70C8F52(iLocal_314));
						}
						else
						{
							Local_91.f_36 = { Local_316 };
						}
						unk_0x4EA098C870B73AB7(&(Local_91.f_2), 6);
						Local_91.f_0 = 1;
					}
					break;
				
				case 1:
					if (func_59())
					{
						func_58();
						func_57();
					}
					func_39();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (func_470() < 4)
	{
		if (func_22())
		{
			iLocal_320 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_429(iLocal_312) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_91.f_0 = 4;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<14> Var1;
	
	if (unk_0xF44A5E894FE76438(Local_91.f_10[iLocal_320 /*7*/].f_2, 1) || unk_0xF44A5E894FE76438(Local_91.f_10[iLocal_320 /*7*/].f_2, 6))
	{
		if (unk_0xF6A32456BABBBA74(Local_91.f_10[iLocal_320 /*7*/]))
		{
			if (unk_0x7887B64A08364778(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iLocal_320 /*7*/])))
			{
				if (unk_0xB529B2A4B7C64D6D(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iLocal_320 /*7*/]), 0))
				{
					if (!unk_0xF44A5E894FE76438(Local_91.f_10[iLocal_320 /*7*/].f_2, 6))
					{
						if (iLocal_312 == 0)
						{
							Local_91.f_48++;
							if (!unk_0xF44A5E894FE76438(Local_91.f_2, 12))
							{
								if (unk_0xF15EBC61ACCF20ED(Local_91.f_10[iLocal_320 /*7*/], &uVar0) == iLocal_314)
								{
									unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 12);
								}
							}
							if ((Local_91.f_42 == iLocal_320 && !unk_0xF44A5E894FE76438(Local_91.f_2, 5)) || Local_91.f_48 == func_429(iLocal_312))
							{
								Var1.f_2 = 155;
								Var1.f_10 = iLocal_314;
								Var1.f_11 = iLocal_313;
								if (func_429(iLocal_312) > 1)
								{
									Var1.f_12 = unk_0x7A4693BB354F3CD3(1);
								}
								else
								{
									Var1.f_12 = unk_0x7A4693BB354F3CD3(0);
								}
								Var1.f_3 = Local_91.f_43;
								func_20(Var1, func_21(1));
								if (Local_91.f_42 == iLocal_320)
								{
									unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 5);
								}
							}
							else if (!unk_0xF44A5E894FE76438(Local_91.f_2, 5))
							{
								Var1.f_2 = 154;
								Var1.f_11 = iLocal_313;
								func_20(Var1, func_21(1));
							}
						}
						unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iLocal_320 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!unk_0xF44A5E894FE76438(Local_91.f_10[iLocal_320 /*7*/].f_2, 5))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_306, 2);
					}
					unk_0xB8A73E7DA87B2968(&iLocal_306, 1);
				}
			}
		}
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&iLocal_306, 1);
		unk_0xB8A73E7DA87B2968(&iLocal_306, 2);
	}
	func_3(iLocal_320);
	iLocal_320++;
	if (iLocal_320 >= func_429(iLocal_312))
	{
		iLocal_320 = 0;
		if (unk_0xF44A5E894FE76438(Local_91.f_1, 0))
		{
			if (!unk_0xF44A5E894FE76438(iLocal_306, 1))
			{
				if (!unk_0xF44A5E894FE76438(Local_91.f_1, 1))
				{
					unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 1);
				}
			}
			if (!unk_0xF44A5E894FE76438(iLocal_306, 2))
			{
				if (!unk_0xF44A5E894FE76438(Local_91.f_1, 9))
				{
					unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 9);
				}
			}
		}
		unk_0x4EA098C870B73AB7(&iLocal_306, 1);
		unk_0x4EA098C870B73AB7(&iLocal_306, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0x04DE35D10A718EEF())
	{
		if (unk_0xF6A32456BABBBA74(Local_91.f_10[iParam0 /*7*/]))
		{
			iVar0 = unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]);
			if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				if (!unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_91.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_91.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_91.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((unk_0x798329C4F7E52EF0(iVar0) == 2 || (Global_2421621[iLocal_314 /*358*/].f_239 != -1 && func_18(Global_2421621[iLocal_314 /*358*/].f_239) == 4)) || Global_1589933[iLocal_314 /*601*/].f_507) || func_16(iLocal_314, 0)) || func_9(iLocal_314))
								{
									Local_91.f_10[iParam0 /*7*/].f_3 = uLocal_319;
									unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((unk_0x798329C4F7E52EF0(iVar0) != 2 && Global_2421621[iLocal_314 /*358*/].f_239 == -1) && !Global_1589933[iLocal_314 /*601*/].f_507) && !func_16(iLocal_314, 0)) && !func_9(iLocal_314))
							{
								unk_0x4EA098C870B73AB7(&(Local_91.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (unk_0x05E1706E4465DAA5(uLocal_319, Local_91.f_10[iParam0 /*7*/].f_3) > 10000 || unk_0x798329C4F7E52EF0(iVar0) != 2)
							{
								if (!unk_0xF44A5E894FE76438(Local_91.f_2, 10))
								{
									unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 10);
									Local_91.f_39 = { func_8(iLocal_314) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_429(iLocal_312))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (unk_0xBBDCBA7AB8D5F102(iVar0) == 3f && !unk_0x59701A6EECDD5EEA(iVar0, 118, 1))
									{
										unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (unk_0xF44A5E894FE76438(Local_91.f_2, 1))
						{
							unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_314, 1, 1))
						{
							if (!unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(unk_0xC086F8D75730FA3A(iVar0, 1), unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iLocal_314), 1), 25f) || !func_5(unk_0xC086F8D75730FA3A(iVar0, 1), unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iLocal_314), 1), 625f))
								{
									unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(unk_0xC086F8D75730FA3A(iVar0, 1), unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iLocal_314), 1)) || (unk_0x3DFB3BFF04D48E00(iVar0) && unk_0x18C9C558C3B63E96(iVar0) == unk_0x4572B13EE70C8F52(iLocal_314)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (unk_0xF44A5E894FE76438(Local_91.f_2, 1))
						{
							unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_314, 1, 1))
						{
							if (!func_4(unk_0xC086F8D75730FA3A(iVar0, 1), unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iLocal_314), 1)) && !(unk_0x3DFB3BFF04D48E00(iVar0) && unk_0x18C9C558C3B63E96(iVar0) == unk_0x4572B13EE70C8F52(iLocal_314)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_91.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (unk_0x59701A6EECDD5EEA(iVar0, 118, 1))
								{
									unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xC3D3EC28F0EB3C6D((Param3.f_2 - Param0.f_2)) < 2f)
	{
		Var0.f_0 = Param0.f_0;
		Var0.f_1 = Param0.f_1;
		Var3.f_0 = Param3.f_0;
		Var3.f_1 = Param3.f_1;
		if (func_5(Var0, Var3, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (unk_0xB7A628320EFF8E47(Param0, Param3) < fParam6)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
{
	Local_91.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iParam0), 0);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1E0256D6F1052B31(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = unk_0x4572B13EE70C8F52(iParam0);
			iVar1 = func_11(iParam0);
			if (unk_0x7887B64A08364778(iVar1))
			{
				if (unk_0xA4DB44DF73EF4FE5(iVar1, 0))
				{
					if (unk_0x04D83291EB9DE51D(iVar0, iVar1, 0))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		if (unk_0xFACD5AD331C52454("MPBitset", 3) && unk_0xA438D75809973A56(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x483BD2141ADAC3CE(iParam0, "MPBitset");
			if (unk_0xF44A5E894FE76438(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(int iParam0)
{
	if (func_14(iParam0, 1))
	{
		return Global_2494149.f_4710.f_35[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1618089[iParam0 /*390*/].f_11;
	}
	return func_13();
}

int func_13()
{
	return -1;
}

bool func_14(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_1618089[iParam0 /*390*/].f_11 != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_13())
		{
			return Global_1618089[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = unk_0x4572B13EE70C8F52(iParam0);
		if (unk_0x6A0583ECFCCECC9B(iVar0, iParam1))
		{
			if (func_17(unk_0x0DBD8FE531FD620D(iVar0, iParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0)
{
	if (Global_69697)
	{
		if (unk_0xA438D75809973A56(uParam0, "Player_Vehicle"))
		{
			return 1;
		}
	}
	return 0;
}

int func_18(int iParam0)
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
	}
	return 6;
}

int func_19(int iParam0, int iParam1)
{
	if (unk_0xFACD5AD331C52454("AttributeDamage", 3))
	{
		if (unk_0xA438D75809973A56(iParam0, "AttributeDamage"))
		{
			if (unk_0xF44A5E894FE76438(unk_0x483BD2141ADAC3CE(iParam0, "AttributeDamage"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	if (!iParam14 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Param0, 14, iParam14);
	}
}

int func_21(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
		{
			iVar2 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_22()
{
	if (unk_0xF44A5E894FE76438(Local_91.f_1, 0))
	{
		if (iLocal_312 == 1)
		{
			if (unk_0xF44A5E894FE76438(Local_91.f_1, 4))
			{
				unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 11);
				return 1;
			}
		}
		else if (unk_0xF44A5E894FE76438(Local_91.f_1, 1))
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 0);
			return 1;
		}
	}
	else if (unk_0xF44A5E894FE76438(Local_91.f_1, 2))
	{
		unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 1);
		unk_0xB8A73E7DA87B2968(&Global_1738469, iLocal_312);
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 12))
	{
		return 1;
	}
	if (iLocal_312 == 0)
	{
		if (unk_0xF44A5E894FE76438(Local_91.f_2, 2))
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 2);
			return 1;
		}
		if (unk_0xF44A5E894FE76438(Local_91.f_2, 8))
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 8);
			return 1;
		}
		if (unk_0xF44A5E894FE76438(Local_91.f_2, 5))
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 3);
			return 1;
		}
		if (unk_0xF44A5E894FE76438(Local_91.f_2, 9))
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 9);
			return 1;
		}
		if (unk_0xF44A5E894FE76438(Local_91.f_1, 15))
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_314, 0, 1))
	{
		if (iLocal_312 != 0 || !unk_0xF44A5E894FE76438(Local_91.f_2, 1))
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_37(iLocal_314, 129))
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 13);
			unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 8);
			return 1;
		}
		if (func_37(iLocal_314, 131) || unk_0xF44A5E894FE76438(Global_1618089[iLocal_314 /*390*/].f_1, 11))
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 13);
			unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_37(iLocal_314, 136) || (func_36(unk_0xFB6B3EEFAB2DD12C(), 24) && func_35(iLocal_314)))
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_37(iLocal_314, 146))
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_34(unk_0xFB6B3EEFAB2DD12C()) && ((func_32(unk_0xFB6B3EEFAB2DD12C()) == 148 || func_32(unk_0xFB6B3EEFAB2DD12C()) == 142) || func_32(unk_0xFB6B3EEFAB2DD12C()) == 164))
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_32(unk_0xFB6B3EEFAB2DD12C()) == 153)
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_30(unk_0xFB6B3EEFAB2DD12C()) && func_32(unk_0xFB6B3EEFAB2DD12C()) == 170)
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_32(unk_0xFB6B3EEFAB2DD12C()) == 167)
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_32(unk_0xFB6B3EEFAB2DD12C()) == 168)
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 8);
			return 1;
		}
		if (unk_0xB529B2A4B7C64D6D(unk_0x4572B13EE70C8F52(iLocal_314), 0))
		{
			if (iLocal_312 == 1)
			{
				if (unk_0xF44A5E894FE76438(Local_91.f_1, 0))
				{
					unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (iLocal_312 == 1)
			{
				if (func_37(iLocal_314, 146))
				{
					unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 7);
					return 1;
				}
				if (!unk_0xF44A5E894FE76438(Local_91.f_1, 16))
				{
					if (unk_0x05E1706E4465DAA5(uLocal_319, Local_91.f_9) > 120000)
					{
						unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 7);
					return 1;
				}
				if (func_23(iLocal_314, func_12(iLocal_313), 1))
				{
					unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 7);
					return 1;
				}
			}
			if (iLocal_315 != unk_0x6D9FF4C899CD785F(unk_0x7746E8ACE891BFA4(iLocal_314)))
			{
				unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_23(int iParam0, int iParam1, bool bParam2)
{
	return func_24(iParam0, iParam1, bParam2, 1);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_13() && iParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1618089[iParam0 /*390*/].f_11 != func_13())
		{
			if (iParam1 == Global_1618089[iParam0 /*390*/].f_11)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)
{
	if (func_15(iParam0))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_289 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 != func_13())
			{
				if (Global_1618089[iParam0 /*390*/].f_11 == iParam0)
				{
					if (Global_1618089[iParam0 /*390*/].f_11.f_289 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_27()
{
	if (((func_29(iLocal_314, 1, 0) || func_36(iLocal_314, 0)) || func_36(iLocal_314, 7)) || func_28(iLocal_314))
	{
		return 1;
	}
	return 0;
}

bool func_28(int iParam0)
{
	return Global_1589933[iParam0 /*601*/].f_187 != 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_31(iParam0, 9);
	}
	return 0;
}

bool func_31(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_4, iParam1);
}

int func_32(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_33(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_30(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_35(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 4);
}

bool func_36(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_211, iParam1);
}

int func_37(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/] == iParam1)
	{
		return func_38(iParam0);
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

void func_39()
{
	func_50();
	if (iLocal_312 != 1)
	{
		func_2();
	}
	func_40();
}

void func_40()
{
	int iVar0;
	
	if (func_6(unk_0x7A4693BB354F3CD3(iLocal_321), 0, 1))
	{
		if (iLocal_312 == 1)
		{
			if (unk_0x7A4693BB354F3CD3(iLocal_321) == iLocal_314)
			{
				if (!unk_0xF44A5E894FE76438(Local_91.f_1, 16))
				{
					if (unk_0xF44A5E894FE76438(Local_145[iLocal_321 /*5*/].f_1, 3))
					{
						unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!unk_0xF44A5E894FE76438(Local_91.f_1, 11))
			{
				if (func_46(unk_0x7A4693BB354F3CD3(iLocal_321)))
				{
					if (!unk_0xF44A5E894FE76438(Local_91.f_4, iLocal_321))
					{
						unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 11);
						unk_0xB8A73E7DA87B2968(&(Local_91.f_4), iLocal_321);
					}
				}
				else if (unk_0xF44A5E894FE76438(Local_91.f_4, iLocal_321))
				{
					unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 11);
					unk_0x4EA098C870B73AB7(&(Local_91.f_4), iLocal_321);
				}
			}
			else if (unk_0xF44A5E894FE76438(Local_145[iLocal_321 /*5*/].f_1, 2))
			{
				unk_0x4EA098C870B73AB7(&(Local_91.f_1), 11);
			}
			if (iLocal_312 == 0)
			{
				if (unk_0xF44A5E894FE76438(Local_145[iLocal_321 /*5*/].f_1, 0))
				{
					if (Local_145[iLocal_321 /*5*/].f_2 != -1)
					{
						if (!unk_0xF44A5E894FE76438(Local_91.f_2, 1))
						{
							unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 1);
							Local_91.f_42 = Local_145[iLocal_321 /*5*/].f_2;
							Local_91.f_43 = Local_145[iLocal_321 /*5*/].f_3;
							if (!func_45())
							{
								func_44();
							}
						}
					}
					else if (!unk_0xF44A5E894FE76438(Local_91.f_2, 9))
					{
						if (!func_45())
						{
							func_43();
						}
						iVar0 = 0;
						while (iVar0 < func_429(iLocal_312))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 9);
						unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 1);
					}
				}
				if (func_45())
				{
					if (!unk_0xF44A5E894FE76438(iLocal_306, 17))
					{
						if (unk_0xF44A5E894FE76438(Local_145[iLocal_321 /*5*/].f_1, 5))
						{
							func_44();
							unk_0xB8A73E7DA87B2968(&iLocal_306, 17);
						}
						else if (unk_0xF44A5E894FE76438(Local_145[iLocal_321 /*5*/].f_1, 6))
						{
							func_43();
							unk_0xB8A73E7DA87B2968(&iLocal_306, 17);
						}
					}
				}
				if (!unk_0xF44A5E894FE76438(Local_145[iLocal_321 /*5*/].f_1, 1))
				{
					if (!unk_0xF44A5E894FE76438(iLocal_306, 3))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_306, 3);
					}
				}
				else if (unk_0x7A4693BB354F3CD3(iLocal_321) == iLocal_314)
				{
					if (iLocal_312 == 0)
					{
						if (!unk_0xF44A5E894FE76438(Local_91.f_2, 1))
						{
							if (!unk_0xF44A5E894FE76438(Local_91.f_2, 6))
							{
								unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_321++;
	if (iLocal_321 >= 32)
	{
		iLocal_321 = 0;
		if (iLocal_312 == 0)
		{
			if (!unk_0xF44A5E894FE76438(iLocal_306, 3))
			{
				func_42();
			}
			else
			{
				func_41();
			}
			unk_0x4EA098C870B73AB7(&iLocal_306, 3);
		}
	}
}

void func_41()
{
	if (unk_0xF44A5E894FE76438(Local_91.f_2, 3))
	{
		unk_0x4EA098C870B73AB7(&(Local_91.f_2), 3);
	}
}

void func_42()
{
	if (!unk_0xF44A5E894FE76438(Local_91.f_2, 3))
	{
		Local_91.f_6 = uLocal_319;
		unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 3);
	}
}

void func_43()
{
	struct<14> Var0;
	
	Var0.f_2 = 156;
	Var0.f_10 = iLocal_314;
	Var0.f_11 = iLocal_313;
	func_20(Var0, func_21(1));
}

void func_44()
{
	struct<14> Var0;
	
	Var0.f_2 = 153;
	Var0.f_10 = iLocal_314;
	Var0.f_11 = iLocal_313;
	if (func_429(iLocal_312) > 1)
	{
		Var0.f_12 = unk_0x7A4693BB354F3CD3(1);
	}
	else
	{
		Var0.f_12 = unk_0x7A4693BB354F3CD3(0);
	}
	Var0.f_3 = Local_91.f_43;
	func_20(Var0, func_21(1));
}

int func_45()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

bool func_46(int iParam0)
{
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		return func_49();
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_241.f_136[func_48(10) /*33*/][iParam0], func_47(10));
}

int func_47(int iParam0)
{
	return (iParam0 % 32);
}

int func_48(int iParam0)
{
	return (iParam0 / 32);
}

var func_49()
{
	return Global_1312412;
}

void func_50()
{
	int iVar0;
	
	if (iLocal_312 == 0)
	{
		if (unk_0xF44A5E894FE76438(Local_91.f_2, 3))
		{
			if (unk_0x05E1706E4465DAA5(uLocal_319, Local_91.f_6) > 10000)
			{
				if (unk_0xF44A5E894FE76438(Local_91.f_2, 1))
				{
					unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 2);
				}
			}
		}
		if (unk_0xF44A5E894FE76438(Local_91.f_1, 8))
		{
			if (!unk_0xF44A5E894FE76438(Local_91.f_2, 1))
			{
				if (func_54())
				{
					unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 6);
					func_53();
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_91.f_1, 0))
		{
			if (func_6(iLocal_314, 1, 1))
			{
				iVar0 = unk_0x4572B13EE70C8F52(iLocal_314);
				if (func_52(iVar0))
				{
					func_223(iVar0);
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_91.f_2, 1))
		{
			if (!func_6(iLocal_314, 1, 1) || func_28(iLocal_314))
			{
				unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 15);
			}
		}
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_1, 0))
	{
		if (unk_0xF44A5E894FE76438(Local_91.f_1, 5))
		{
			if (!unk_0xF44A5E894FE76438(Local_91.f_1, 4))
			{
				if (unk_0x05E1706E4465DAA5(uLocal_319, Local_91.f_5) > 600000)
				{
					unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 4);
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_91.f_3, 12))
		{
			if (func_51())
			{
				unk_0xB8A73E7DA87B2968(&(Local_91.f_3), 12);
			}
		}
	}
}

int func_51()
{
	switch (Local_91.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_498 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_498 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_52(int iParam0)
{
	if (unk_0x00B5B0B68211D89B(iParam0))
	{
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_1, 17))
	{
		if (!unk_0x3ACA21A90E0A949C(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_91.f_36, unk_0xC086F8D75730FA3A(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_53()
{
	func_458();
	Local_91.f_0 = 0;
}

int func_54()
{
	if ((((((((unk_0xF44A5E894FE76438(Local_91.f_2, 6) || unk_0x32DE3230A608DBE4(iLocal_314)) || func_29(iLocal_314, 1, 0)) || func_56(iLocal_314)) || func_36(iLocal_314, 0)) || func_36(iLocal_314, 7)) || func_28(iLocal_314)) || Global_2421621[iLocal_314 /*358*/].f_241) || func_55(unk_0x4572B13EE70C8F52(iLocal_314), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_314 != -1)
	{
		if (unk_0xF44A5E894FE76438(Local_145[iLocal_314 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (!unk_0x00B5B0B68211D89B(iParam0))
		{
			if (unk_0x81C4995860081BC3(iParam0))
			{
				uVar0 = unk_0x0DBD8FE531FD620D(iParam0, 0);
				if (unk_0x7887B64A08364778(uVar0))
				{
					if (unk_0xA0A4DA31DEDFAC4F(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 14))
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 11))
	{
		return 1;
	}
	return 0;
}

void func_57()
{
	if (!unk_0xF44A5E894FE76438(Local_91.f_1, 5))
	{
		Local_91.f_5 = uLocal_319;
		unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 5);
	}
}

void func_58()
{
	if (unk_0xF44A5E894FE76438(Local_91.f_1, 5))
	{
		unk_0x4EA098C870B73AB7(&(Local_91.f_1), 5);
	}
}

int func_59()
{
	bool bVar0;
	
	if (unk_0xF44A5E894FE76438(Local_91.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_225())
		{
			if (iLocal_312 == 1)
			{
				bVar0 = true;
			}
			else if (func_220())
			{
				if (func_217())
				{
					if (func_216())
					{
						bVar0 = true;
					}
					else if (func_214(func_215(iLocal_312)))
					{
						if (func_65())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_57();
			if (func_60())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x04DE35D10A718EEF())
	{
		if (unk_0xF44A5E894FE76438(Local_91.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_312)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_429(iLocal_312))
					{
						if ((!unk_0xF6A32456BABBBA74(Local_91.f_10[iVar0 /*7*/]) && !unk_0xF44A5E894FE76438(Local_91.f_10[iVar0 /*7*/].f_2, 1)) && !unk_0xF44A5E894FE76438(Local_91.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_61(iVar0, func_64(iLocal_312), Local_91.f_32, Local_91.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_312 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_429(iLocal_312))
				{
					if (!unk_0xF6A32456BABBBA74(Local_91.f_10[iVar0 /*7*/]))
					{
						if (!unk_0xF44A5E894FE76438(Local_91.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			unk_0xB8A73E7DA87B2968(&iLocal_306, 1);
			unk_0xB8A73E7DA87B2968(&iLocal_306, 2);
			unk_0xB8A73E7DA87B2968(&iLocal_306, 3);
			unk_0xB8A73E7DA87B2968(&iLocal_306, 4);
			unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 0);
			unk_0xB8A73E7DA87B2968(&Global_1738470, iLocal_312);
			return 1;
		}
	}
	return 0;
}

void func_61(int iParam0, var uParam1, struct<3> Param2, var uParam5)
{
	if (unk_0x04DE35D10A718EEF())
	{
		if (!unk_0xF6A32456BABBBA74(Local_91.f_10[iParam0 /*7*/]))
		{
			if (unk_0x1F3C33D4875E4B82(0) < unk_0x45C6A8F0909682A6(false))
			{
				if (unk_0x4EA5429144EA2576(1))
				{
					if (func_214(func_215(iLocal_312)))
					{
						if (func_63(&(Local_91.f_10[iParam0 /*7*/]), 7, func_215(iLocal_312), Param2, uParam5, 1, 1, 1))
						{
							Local_91.f_10[iParam0 /*7*/].f_1 = iLocal_312;
							Local_91.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_62(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_62(int iParam0)
{
	char cVar0[16];
	
	if (!unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_91.f_10[iParam0 /*7*/].f_4 == 0)
			{
				unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), Global_1574683);
				unk_0xB6F2F96B0AA515BE(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 1);
				unk_0x612EEA9D7F0EA8E3(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 0);
			}
			unk_0x490BF4D8A55D8ECA(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
			unk_0xABB48CA0EFB4A847(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 2);
			unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 13, 1);
			unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 41, 1);
			unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 20, 1);
			unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 132, 1);
			unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 118, 0);
			unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 311, 1);
			unk_0x1307B01DBFFE637B(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 300f, 10);
			unk_0x7D99F00F48D15ADB(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 1);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			unk_0x9AAD264322B9D45B(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_91.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 0, 0);
					unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 2, 0);
					unk_0xCEFA2AEA28935397(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 2);
					unk_0x864E32F86CD39E03(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 0);
					unk_0xE95B3D9B1E241453(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 0, -1, 0);
					unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 32, 1);
					unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 4, 0);
					unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 1024, 1);
					unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 128, 1);
					unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 32, 0);
					unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 8, 0);
					unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 64, 0);
					unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 256, 1);
					unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 1, 0);
					unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 2, 1);
					unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 16, 1);
					if (!unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 0))
					{
						unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iParam0 /*7*/].f_2), 2);
					}
					unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 512, 1);
					unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 17, 0);
					unk_0x4408969E7EC5C720(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, 1, 1);
					unk_0xA8C0CC1A37E5B35D(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 0);
					unk_0x0988FFC0C75637DF(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), unk_0x4572B13EE70C8F52(iLocal_314), -1, 0, 2);
					unk_0x195032A438E7C103(Local_91.f_10[iParam0 /*7*/], 1);
					break;
			}
			unk_0xE81D470B804DC69A(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), unk_0xF2DB717A73826179((Global_262145.f_151 * IntToFloat(unk_0xB38A470B669AC00B(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]))))));
			if (!unk_0xF44A5E894FE76438(Local_91.f_1, 8))
			{
				unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 8);
			}
			unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_63(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x4EA5429144EA2576(1))
	{
		return 0;
	}
	uVar0 = unk_0x8C855D8124E955CE(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x3EE3A80A2D8115F8(uVar0);
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(uVar0, iParam9);
		if (unk_0xDB6162AABEF41D01(uVar0))
		{
			if (bParam7)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_65()
{
	struct<26> Var0;
	
	if (unk_0xF44A5E894FE76438(Local_91.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_312)
		{
			case 0:
				if (unk_0x1E0256D6F1052B31(iLocal_314) && func_6(iLocal_314, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_25 = -1082130432;
					Var0 = { unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iLocal_314), 1) };
					Var0.f_5 = 20f;
					if (func_66(Local_91.f_36, 40f, &(Local_91.f_32), &(Local_91.f_35), Var0))
					{
						unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 3);
						return 1;
					}
				}
				else
				{
					unk_0xE8565300808F0BF9();
					unk_0xFFDCA3284D1BB27E();
					if (Global_2404994.f_2025)
					{
						unk_0xF917823066DAF89F();
						Global_2404994.f_2025 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_66(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	struct<11> Var0;
	struct<18> Var18;
	struct<3> Var44;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_16 = 1;
	Var18.f_22 = 1;
	Var18.f_23 = 1;
	Var18.f_24 = 1;
	Var18 = { Param0 };
	Var18.f_3 = Param6.f_11;
	Var18.f_4 = fParam3;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 0;
	Var18.f_15 = 0;
	Var18.f_16 = 1;
	Var18.f_17 = 0;
	if (func_67(&Var18, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			Var44 = { Param0 - Var0[0 /*3*/] };
			if (Var44.f_2 > Param6.f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_10[0] = Param6.f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_67(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	struct<3> Var18;
	struct<3> Var21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar84;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404994.f_2019 == *uParam0 || !Global_2404994.f_2019.f_1 == uParam0->f_1) || !Global_2404994.f_2019.f_2 == uParam0->f_2) || !Global_2404994.f_2022 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404994.f_2033 == uParam0->f_8 || !Global_2404994.f_2033.f_1 == uParam0->f_8.f_1) || !Global_2404994.f_2033.f_2 == uParam0->f_8.f_2) || !Global_2404994.f_2036 == uParam0->f_11) || !Global_2404994.f_2036.f_1 == uParam0->f_11.f_1) || !Global_2404994.f_2036.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404994.f_2033 == uParam0->f_8 || !Global_2404994.f_2033.f_1 == uParam0->f_8.f_1) || !Global_2404994.f_2033.f_2 == uParam0->f_8.f_2) || !Global_2404994.f_2036 == uParam0->f_11) || !Global_2404994.f_2036.f_1 == uParam0->f_11.f_1) || !Global_2404994.f_2036.f_2 == uParam0->f_11.f_2) || !Global_2404994.f_2039 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404994.f_2017 == 1)
		{
			if (unk_0x597C1E51157E5516(Global_2404994.f_2026))
			{
				if (Global_2404994.f_2026 == unk_0x3ED6DDB11A7AD67F())
				{
					if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2023) < func_213(0))
					{
						return 0;
					}
				}
				else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2023) < func_213(0))
				{
					return 0;
				}
			}
			unk_0xE8565300808F0BF9();
			unk_0xFFDCA3284D1BB27E();
			func_212();
		}
		Global_2404994.f_2017 = 0;
	}
	else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2023) > func_213(0))
	{
		Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x491763F024B284EB(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2404994.f_2017)
	{
		unk_0xE8565300808F0BF9();
		unk_0xFFDCA3284D1BB27E();
		func_212();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_211(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xE9B2C327B97A0FE2())
		{
			Global_2404994.f_2040 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404994.f_2019 = { *uParam0 };
					Global_2404994.f_2022 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404994.f_2033 = { uParam0->f_8 };
					Global_2404994.f_2036 = { uParam0->f_11 };
					Global_2404994.f_2039 = 0f;
					Global_2404994.f_2019 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404994.f_2033 = { uParam0->f_8 };
					Global_2404994.f_2036 = { uParam0->f_11 };
					Global_2404994.f_2039 = uParam0->f_14;
					Global_2404994.f_2019 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_210(Var8.f_0, Var8.f_1);
			}
			Global_2404994.f_2018 = 1;
			Global_2404994.f_2017 = 1;
			Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
			Global_2404994.f_2023 = unk_0x7414B386C0020BEC();
			Global_2404994.f_2026 = unk_0x3ED6DDB11A7AD67F();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404994.f_2017)
	{
		if (Global_2404994.f_2018 == 1)
		{
			if (unk_0x5AF533059A5816BC(fVar4, fVar5, fVar6, fVar7) || unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 5000)
			{
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_25 > 0f)
					{
						Var26.f_6 = uParam1->f_25;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_23;
					Var26.f_55 = uParam0->f_16;
					func_191(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_190(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404994.f_2018 = 9;
				}
				else
				{
					Global_2404994.f_2018 = 2;
				}
			}
		}
		if (Global_2404994.f_2018 == 2)
		{
			if ((unk_0x5800AAD1409A90F2(Var11, Var14) || unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 15000) || unk_0xD6486010C4575E7D(Var11, Var14) == 0)
			{
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				if (uParam0->f_5 && !func_187(unk_0xFB6B3EEFAB2DD12C(), 0))
				{
					Global_2404994.f_2018 = 3;
				}
				else
				{
					Global_2404994.f_2018 = 4;
				}
			}
			else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2028) > 7000)
			{
				func_186(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404994.f_2018 == 3)
		{
			if (func_185() || unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 10000)
			{
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				Global_2404994.f_2018 = 4;
			}
		}
		if (Global_2404994.f_2018 == 4)
		{
			if (unk_0xE9B2C327B97A0FE2())
			{
				unk_0xE8565300808F0BF9();
				unk_0xFFDCA3284D1BB27E();
			}
			else
			{
				iVar0 = 0;
				func_179();
				if (uParam0->f_5)
				{
					if (unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0xD476586AFC38802E(unk_0xFB6B3EEFAB2DD12C(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
								Global_2404994.f_2018 = 5;
							}
							break;
						
						case 1:
							func_178(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0xBA68303F8462B64A(unk_0xFB6B3EEFAB2DD12C(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
								Global_2404994.f_2018 = 5;
							}
							break;
						
						case 2:
							if (unk_0xBA68303F8462B64A(unk_0xFB6B3EEFAB2DD12C(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
								Global_2404994.f_2018 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
					Global_2404994.f_2018 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x06256439EFF04C62(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_178(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0xEF5484102E275765(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xEF5484102E275765(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404994.f_2018 == 5)
		{
			if (func_111(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404994.f_2044.f_5)
				{
					Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
					Global_2404994.f_2018 = 6;
				}
				else
				{
					Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404994.f_2018 = 9;
				}
			}
			else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 20000)
			{
				unk_0xE8565300808F0BF9();
				unk_0xFFDCA3284D1BB27E();
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				Global_2404994.f_2018 = 8;
			}
		}
		if (Global_2404994.f_2018 == 6)
		{
			iVar0 = 0;
			Global_2404994.f_2044.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_110(uParam0->f_4))
				{
					if (unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_109(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
			Global_2404994.f_2018 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x06256439EFF04C62(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_178(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0xEF5484102E275765(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xEF5484102E275765(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404994.f_2018 == 7)
		{
			if (func_111(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404994.f_2155[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_190(Global_2404994.f_2155[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404994.f_2155[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_107(Global_2404994.f_2155[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404994.f_2155[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x1FA2886237245376(Global_2404994.f_2155[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404994.f_2155[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_70(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404994.f_2018 = 9;
			}
			else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 20000)
			{
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				Global_2404994.f_2018 = 8;
			}
		}
		if (Global_2404994.f_2018 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_69(Global_2404994.f_476))
				{
				}
			}
			else if (Global_2404994.f_2044.f_2)
			{
				func_68(uParam2, &(Global_2404994.f_2044.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar84 = false;
				}
				else
				{
					bVar84 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404994.f_2019 };
				func_70(uParam2[0 /*3*/], 0, bVar84, 0, 0, uParam0, uParam1);
			}
			Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
			Global_2404994.f_2018 = 9;
		}
		if (Global_2404994.f_2018 == 9)
		{
			Global_2404994.f_2017 = 0;
			unk_0xE8565300808F0BF9();
			unk_0xFFDCA3284D1BB27E();
			func_212();
			return 1;
		}
		Global_2404994.f_2023 = unk_0x7414B386C0020BEC();
	}
	return 0;
}

void func_68(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_14[iVar0] = (*uParam1)[iVar0 /*9*/];
		iVar0++;
	}
}

int func_69(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_70(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar3;
	struct<56> Var4;
	var uVar62;
	int iVar63;
	bool bVar64;
	int iVar65;
	struct<3> Var66;
	struct<3> Var69;
	struct<3> Var72;
	float fVar75;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar65 = 0;
	}
	else
	{
		iVar65 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar65 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var66 = { *uParam5 };
						if (func_110(uParam5->f_4) || !unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var66)))
						{
							iVar65 += 4;
						}
						break;
					
					case 1:
						Var66 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_109(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var66)))
						{
							iVar65 += 4;
						}
						break;
					
					case 2:
						Var66 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_109(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var66)))
						{
							iVar65 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar65 += 4;
		}
	}
	if (func_72(*uParam0, &Var0, iVar65, iParam3, 1))
	{
	}
	else
	{
		bVar64 = true;
	}
	if (bVar64)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_25 > 0f)
		{
			Var4.f_6 = uParam6->f_25;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar63 = 0;
		while (iVar63 < 2)
		{
			Var4.f_38[iVar63 /*3*/] = { uParam6->f_13[iVar63 /*3*/] };
			Var4.f_45[iVar63] = uParam6->f_20[iVar63];
			iVar63++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_191(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var69 = { *uParam5 };
				fVar75 = uParam5->f_4;
				break;
			
			case 1:
				Var69 = { uParam5->f_8 };
				Var72 = { uParam5->f_11 };
				break;
			
			case 2:
				Var69 = { uParam5->f_8 };
				Var72 = { uParam5->f_11 };
				fVar75 = uParam5->f_14;
				break;
		}
		if (!func_71(Var0, uParam5->f_7, Var69, Var72, fVar75))
		{
			if (func_72(*uParam0, &Var0, iVar65, iParam3, 0))
			{
				if (!func_71(Var0, uParam5->f_7, Var69, Var72, fVar75))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var69 + Var72 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var69 };
					}
					if (unk_0x87AA1B4BA52B1360(Var0, &uVar62, 0))
					{
						Var0.f_2 = uVar62;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var69 + Var72 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var69 };
				}
				if (unk_0x87AA1B4BA52B1360(Var0, &uVar62, 0))
				{
					Var0.f_2 = uVar62;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404994.f_616 = 1;
}

int func_71(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (unk_0x2A488C176D52CCA5(Param0, Param4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_107(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x1FA2886237245376(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_72(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_106(Param0, uParam3))
	{
		if (func_73(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0x97FC103562922B9C(Param0, 0, uParam3, iParam4))
	{
		if (func_73(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_73(struct<3> Param0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_88(Global_2404994.f_493, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_80(*uParam3, 1056964608))
			{
				if (!func_74(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_74(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_79(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410138[iVar4])
	{
		if (func_78(Var1, &(Global_2409309[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_75(&Var1, Global_2409309[iVar4 /*92*/][iVar0 /*7*/], Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410138[8])
	{
		if (func_78(Var1, &(Global_2409309[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_75(&Var1, Global_2409309[iVar4 /*92*/][iVar0 /*7*/], Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_75(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_77(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0xA9655095F6A4F24D(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_76(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_76(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = unk_0x2A488C176D52CCA5(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_77(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_77(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0xA9655095F6A4F24D(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_76(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_76(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (unk_0x2A488C176D52CCA5(Var10, *uParam0, uParam0->f_1, 0f) < unk_0x2A488C176D52CCA5(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_76(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_77(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

bool func_78(struct<3> Param0, var uParam3)
{
	return unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_79(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410148[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410148[1])
	{
		if (Param0.f_0 < Global_2410152[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410148[2])
	{
		if (Param0.f_0 < Global_2410152[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410152[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410152[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_80(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_85(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		if (Global_1632166.f_43047 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1632166.f_43047)
			{
				if (Global_1632166.f_43048[iVar0 /*59*/].f_7 != 0)
				{
					if (func_81(Param0, Global_1632166.f_43048[iVar0 /*59*/], Global_1632166.f_43048[iVar0 /*59*/].f_6, Global_1632166.f_43048[iVar0 /*59*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1632166.f_40786 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1632166.f_40786)
			{
				if (Global_1632166.f_40789[iVar0 /*92*/].f_16 != 0)
				{
					if (func_81(Param0, Global_1632166.f_40789[iVar0 /*92*/], Global_1632166.f_40789[iVar0 /*92*/].f_3, Global_1632166.f_40789[iVar0 /*92*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1632166.f_55074 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1632166.f_55074)
			{
				if (Global_1632166.f_55078[iVar0 /*137*/].f_12 != 0)
				{
					if (func_81(Param0, Global_1632166.f_55078[iVar0 /*137*/], Global_1632166.f_55078[iVar0 /*137*/].f_3, Global_1632166.f_55078[iVar0 /*137*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_81(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_84(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_83(&Var0, 0f, 0f, fParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_82(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0xC3D3EC28F0EB3C6D((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0xC3D3EC28F0EB3C6D((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0xC3D3EC28F0EB3C6D((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0x1FA2886237245376(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_82(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0xA8DA2E2DC299ED17(iParam0))
	{
		unk_0xB1C5AB29009DDB95(iParam0, fParam1, fParam2);
	}
	if (unk_0x652D2EEEF1D3E62C(*fParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_83(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_84(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_82(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_85(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_86(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589933[iParam0 /*601*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_86(int iParam0)
{
	return func_87(iParam0);
}

bool func_87(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

int func_88(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_100(Param0))
	{
		if (func_99(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_91(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_90(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (unk_0x2A488C176D52CCA5(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_89(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_89(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_83(&Var0, 0f, 0f, unk_0xB5FEA1F26F05B9F5(0f, 360f));
		}
		else
		{
			func_83(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

int func_90(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404994.f_2258[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_91(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_96(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_93(&Var2, &(Global_2404994.f_355[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_96(Var2, &uVar1) || func_92(Var2))
			{
				Var2 = { *uParam0 };
				func_93(&Var2, &(Global_2404994.f_355[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_92(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404994.f_561 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404994.f_558);
		if (fVar0 < Global_2404994.f_561)
		{
			return 1;
		}
	}
	return 0;
}

void func_93(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_95(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404994.f_2256) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_95(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_95(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_89(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404994.f_2256) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_94(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_75(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_94(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

Vector3 func_95(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_89(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_94(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_75(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x3A6A7A8FACA42CE3(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_190(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_107(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x1FA2886237245376(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_96(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_98();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404994.f_355[iVar0 /*12*/].f_9 == 1)
		{
			if (func_97(Param0, &(Global_2404994.f_355[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_97(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_190(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404994.f_2256) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_107(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404994.f_355[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_99(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409172[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409172[iVar0 /*17*/].f_16))
			{
				if (func_97(*uParam0, &(Global_2409172[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409172[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409172[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_93(&Var1, &(Global_2409172[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_99(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_93(&Var1, &(Global_2409172[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_100(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404994.f_496)
	{
		if (!Global_2404994.f_43.f_311)
		{
			if (!func_104(unk_0xFB6B3EEFAB2DD12C(), 1))
			{
				return 1;
			}
			if (!func_103(Param0, 1008981770))
			{
				if (!func_99(&Param0, 0, 0, 0))
				{
					return 1;
				}
				else if (func_99(&Param0, 0, 1, 0))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_102(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_101(&(Global_2404994.f_43[iVar0 /*12*/])) };
					if (!func_99(&Var1, 0, 0, 0))
					{
						if (!func_99(&Param0, 0, 0, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_101(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_102(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404994.f_43[iVar0 /*12*/].f_9)
		{
			if (func_97(Param0, &(Global_2404994.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_103(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404994.f_43[iVar0 /*12*/].f_9)
		{
			if (func_97(Param0, &(Global_2404994.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_104(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
	{
		return func_105(iParam0) != 0;
	}
	return func_85(iParam0, bParam1);
}

int func_105(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_2421621[iParam0 /*358*/].f_1;
	}
	return 0;
}

int func_106(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404994.f_1815 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404994.f_1815)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404994.f_1816[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404994.f_1816[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_107(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_108(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_108(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_109(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param0.f_0 > Param3.f_0)
	{
		Var3.f_0 = Param0.f_0;
		Var0.f_0 = Param3.f_0;
	}
	else
	{
		Var3.f_0 = Param3.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param3.f_1)
	{
		Var3.f_1 = Param0.f_1;
		Var0.f_1 = Param3.f_1;
	}
	else
	{
		Var3.f_1 = Param3.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param3.f_2)
	{
		Var3.f_2 = Param0.f_2;
		Var0.f_2 = Param3.f_2;
	}
	else
	{
		Var3.f_2 = Param3.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (unk_0x652D2EEEF1D3E62C(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_110(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_111(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404994.f_2044.f_1 == 0 && Global_2404994.f_2044 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x9F963199250B6023(&(Global_2404994.f_2044.f_1)))
			{
				case 0:
					func_176(uParam1, uParam2);
					if (!Global_2404994.f_2044.f_2)
					{
						if (uParam2->f_7 && Global_2404994.f_525.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_10[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
							}
							if (uParam1->f_5 && func_69(Global_2404994.f_476))
							{
								if (!Global_2404994.f_2044.f_5)
								{
									Global_2404994.f_2044.f_5 = 1;
								}
								else
								{
									func_70(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_70(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_176(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xE9B2C327B97A0FE2())
		{
			if (!unk_0x67CEA645920D77B3())
			{
				if (unk_0x7552418F5ADA016B())
				{
					func_176(uParam1, uParam2);
					Global_2404994.f_2044.f_1 = unk_0x90D3312D14B7087F();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xFFDCA3284D1BB27E();
				func_176(uParam1, uParam2);
				if (!Global_2404994.f_2044.f_2)
				{
					Global_2404994.f_2044.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_173(Global_2404994.f_525, &(Global_2404994.f_2044.f_34), &(Global_2404994.f_2044.f_67));
	}
	if (uParam2->f_7 && !Global_2404994.f_2044.f_4)
	{
		Global_2404994.f_2044.f_4 = 1;
		func_119(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2404994.f_2044.f_1 > 0 || Global_2404994.f_2044 > 0)
	{
		if (uParam1->f_5 || unk_0xE9B2C327B97A0FE2())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404994.f_2044.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404994.f_2044.f_3)
					{
						iVar4 = Global_2404994.f_2044.f_3 + 1;
					}
					if (iVar4 > (Global_2404994.f_2044.f_1 - 1))
					{
						iVar4 = (Global_2404994.f_2044.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x5EF985FA07E6F1E5(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x90EED921185F6A10(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x0525FDD030AB268F(iVar4);
					}
					else
					{
						unk_0x8B60801B70487753(iVar4, &iVar5);
					}
					func_119(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404994.f_2044.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2404994.f_2044.f_1;
		}
		if (Global_2404994.f_2044.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2404994.f_2349)
			{
				func_113(&(Global_2404994.f_2044.f_6[0 /*9*/]), &(Global_2404994.f_2044.f_6[1 /*9*/]), &(Global_2404994.f_2044.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_69(Global_2404994.f_476))
			{
				if (Global_2404994.f_2044.f_2)
				{
					func_68(uParam0, &(Global_2404994.f_2044.f_6));
					func_112(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
					func_70(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
					func_112(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404994.f_2044.f_2)
			{
				func_68(uParam0, &(Global_2404994.f_2044.f_6));
				func_112(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x7BC26452241AC7C9(0, Global_2404994.f_2044.f_1);
				unk_0x5EF985FA07E6F1E5(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_74(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_112(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
					func_70(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
					func_112(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
				func_70(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
				func_112(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
		if (uParam1->f_5 && func_69(Global_2404994.f_476))
		{
			if (!Global_2404994.f_2044.f_5)
			{
				Global_2404994.f_2044.f_5 = 1;
			}
			else
			{
				func_70(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_70(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
		func_112(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_112(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404994.f_2155[(3 - iVar0) /*3*/] = { Global_2404994.f_2155[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404994.f_2155[0 /*3*/] = { Param0 };
}

void func_113(var uParam0, var uParam1, var uParam2)
{
	if (func_69(Global_2404994.f_476) && func_118() < 4096)
	{
		func_117(uParam0, 0f);
		func_117(uParam1, uParam0->f_2);
		func_117(uParam2, uParam1->f_2);
	}
	else
	{
		func_116(uParam0);
		func_115(uParam2, uParam0->f_4);
		func_114(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_114(var uParam0, struct<3> Param1, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407344[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407344[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407344[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407344[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_115(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407344[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407344[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407344[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_116(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			if (Global_2407344[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407344[iVar0 /*9*/].f_1;
				Var2 = { Global_2407344[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_117(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			if (Global_2407344[iVar0 /*9*/].f_2 < fVar1 && Global_2407344[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407344[iVar0 /*9*/].f_2;
				Var2 = { Global_2407344[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_118()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407344[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_119(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	bool bVar14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	int iVar23;
	struct<9> Var24;
	bool bVar33;
	bool bVar34;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404994.f_476 == 1)
		{
			if (unk_0xC3D3EC28F0EB3C6D((Global_2404994.f_493.f_2 - Param0.f_2)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam4->f_5)
	{
		if (func_171(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (iParam7 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_170(Param0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam4->f_5)
	{
		if (!unk_0x09B441F779ACD938(unk_0xD5A676B97920D126(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x09B441F779ACD938(unk_0xD5A676B97920D126(), Param0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_169(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	bVar14 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (unk_0x652D2EEEF1D3E62C(uParam5->f_13[iVar10 /*3*/]) > 0f)
		{
			if (!unk_0x2A488C176D52CCA5(Param0, uParam5->f_13[iVar10 /*3*/]) > uParam5->f_20[iVar10])
			{
				bVar14 = false;
			}
		}
		iVar10++;
	}
	if (bVar14)
	{
		iVar7 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_163(Param0, fParam3, uParam4->f_15, func_168(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404994.f_3;
		}
	}
	else if (!func_160(Param0, 25f, unk_0xFB6B3EEFAB2DD12C(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_159(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_159(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404994.f_638)
		{
			Var11 = { Global_2404994.f_493 };
			if (Global_2404994.f_476 == 26)
			{
				Var11 = { Global_2404994.f_525.f_18 };
			}
			if (func_100(Var11))
			{
				if (!func_99(&Param0, 0, 0, 0) && !func_158(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if (!func_158(&Param0, 0) && !func_90(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_157(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_156(unk_0xFB6B3EEFAB2DD12C()) && func_155(unk_0xFB6B3EEFAB2DD12C())))
		{
			if (!func_154(&Param0, &(Global_2404994.f_2044.f_67), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_155(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (!func_153(Param0, &(Global_2404994.f_2044.f_34), &(Global_2404994.f_2044.f_67), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_152(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_69(Global_2404994.f_476))
			{
				if (func_103(Param0, 0.01f))
				{
					iVar7 += 4096;
				}
			}
			else
			{
				iVar7 += 4096;
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_151(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404994.f_43.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404994.f_638)
		{
			if (!func_91(&Param0, 0, 0))
			{
				iVar7 = (iVar7 + 32768);
			}
		}
		else
		{
			iVar7 = (iVar7 + 32768);
		}
	}
	else
	{
		iVar7 = (iVar7 + 32768);
	}
	if (!func_74(&Param0, 0))
	{
		iVar7 = (iVar7 + 65536);
	}
	else
	{
		iVar15 = func_102(Param0, 1008981770);
		if (iVar15 > -1)
		{
			func_150(Param0, &Var16, &Var19, &fVar22);
			if (!func_145(&(Global_2404994.f_43[iVar15 /*12*/]), Var16, Var19, fVar22))
			{
				iVar7 = -1;
			}
		}
		else
		{
			iVar7 = -1;
		}
	}
	if (func_80(Param0, 1056964608))
	{
		iVar7 = -1;
	}
	if (uParam4->f_5)
	{
	}
	else if (func_144(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var24.f_2 = 1176256410;
	bVar33 = false;
	bVar34 = false;
	if (Global_2404994.f_2349 && uParam4->f_5)
	{
		if (iVar7 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_136(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			else
			{
				fVar0 = func_136(Param0, Global_2404994.f_2019, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_69(Global_2404994.f_476) && iVar7 < 4096)
			{
				Var24.f_2 = func_134(Param0);
			}
			Var24.f_4 = { Param0 };
			Var24.f_7 = fParam3;
			Var24.f_0 = iVar7;
			Var24.f_1 = fVar0;
			func_133(Var24);
			Global_2404994.f_2044.f_2 = 1;
		}
	}
	else
	{
		iVar23 = 0;
		while (iVar23 < 3)
		{
			if (iVar7 >= Global_2404994.f_2044.f_6[iVar23 /*9*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar33)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_136(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						else
						{
							fVar0 = func_136(Param0, Global_2404994.f_2019, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar33 = true;
					}
					if ((func_69(Global_2404994.f_476) && iVar7 == Global_2404994.f_2044.f_6[iVar23 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar34)
						{
							fVar2 = func_134(Param0);
							bVar34 = true;
						}
						if (fVar2 < Global_2404994.f_2044.f_6[iVar23 /*9*/].f_2)
						{
							Var24.f_4 = { Param0 };
							Var24.f_7 = fParam3;
							Var24.f_0 = iVar7;
							Var24.f_1 = fVar0;
							Var24.f_2 = fVar2;
							func_132(Var24, iVar23);
							Global_2404994.f_2044.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2404994.f_2044.f_6[iVar23 /*9*/] || (iVar7 == Global_2404994.f_2044.f_6[iVar23 /*9*/] && fVar0 > Global_2404994.f_2044.f_6[iVar23 /*9*/].f_1))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_1 = fVar0;
						func_132(Var24, iVar23);
						Global_2404994.f_2044.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar33)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_131(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_121(Param0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_120(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_120(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar33 = true;
					}
					if (iVar7 > Global_2404994.f_2044.f_6[iVar23 /*9*/] || (iVar7 == Global_2404994.f_2044.f_6[iVar23 /*9*/] && fVar3 > Global_2404994.f_2044.f_6[iVar23 /*9*/].f_3))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_3 = fVar3;
						func_132(Var24, iVar23);
						Global_2404994.f_2044.f_2 = 1;
						return;
					}
				}
			}
			iVar23++;
		}
	}
}

float func_120(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_121(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_6(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0xFB6B3EEFAB2DD12C() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_123(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x2A7336F1C6B39623(iVar11) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
					{
						if (!unk_0x2A7336F1C6B39623(iVar11) == -1 || !func_104(unk_0xFB6B3EEFAB2DD12C(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar11) || !bParam6)
					{
						if (func_122(iVar11))
						{
							Var5 = { func_8(iVar11) };
							if (!iVar11 == unk_0xFB6B3EEFAB2DD12C())
							{
								Var8 = { unk_0x17518BAFABBB281B(unk_0x4572B13EE70C8F52(iVar11)) };
							}
							else
							{
								Var8 = { Var5 };
							}
							if (!bParam6)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var8.f_2 < -100f)
								{
									Var8.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x8E92CDAEB8357ABD(Param0, Var5, 1);
							fVar2 = unk_0x8E92CDAEB8357ABD(Param0, Var8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_122(int iParam0)
{
	if (unk_0x9D404C556EC6ABF6(unk_0x4572B13EE70C8F52(iParam0)) || Global_2421621[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

int func_123(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_129(iParam0))
		{
			if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iParam0))
			{
				if (!unk_0x2A7336F1C6B39623(iParam0) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
				{
					if (func_85(unk_0xFB6B3EEFAB2DD12C(), 1))
					{
						if (!func_128(unk_0x2A7336F1C6B39623(iParam0), unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x2A7336F1C6B39623(iParam0) == -1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
				{
					if (!func_85(unk_0xFB6B3EEFAB2DD12C(), 1))
					{
						if (!func_124(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	if (func_127(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	Global_2482005 = { func_126(iParam0) };
	if (unk_0xBB38DDB2E1AE0498(&Global_2482005))
	{
		return 1;
	}
	if (func_125(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_126(int iParam0)
{
	struct<13> Var0;
	
	unk_0x81C63D2370ED33C5(iParam0, &Var0, 13);
	return Var0;
}

int func_127(int iParam0, int iParam1)
{
	if (unk_0x527DE7DC62A1D335())
	{
		Global_2482005 = { func_126(iParam0) };
		Global_2482018 = { func_126(iParam1) };
		if (unk_0xF42D93ECBADC9AE3(&Global_2482005))
		{
			if (unk_0xF42D93ECBADC9AE3(&Global_2482018))
			{
				unk_0xF6955213DB8BD7D3(&Global_2481935, 35, &Global_2482005);
				unk_0xF6955213DB8BD7D3(&Global_2481970, 35, &Global_2482018);
				if (Global_2481935 == Global_2481970)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_128(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 0);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 1);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 2);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 4);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 5);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 6);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 8);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 9);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 10);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 12);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 13);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 14);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (func_187(iParam0, 0))
	{
		return 1;
	}
	if (func_130())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_130()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

float func_131(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_6(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0x7E3640C27B17457C())
			{
				if (unk_0xBB36CABE30AE5FC4(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_187(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xFB6B3EEFAB2DD12C()))
				{
					if (func_122(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2A7336F1C6B39623(iVar1) != unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))) || unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x2A7336F1C6B39623(iVar1) != iParam7 || unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return unk_0x71D93B57D07F9804(fVar3);
	}
	return -1f;
}

void func_132(struct<9> Param0, int iParam9)
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404994.f_2044.f_6[iParam9 /*9*/] };
	Global_2404994.f_2044.f_6[iParam9 /*9*/] = { Param0 };
	if (iParam9 < 2)
	{
		func_132(Var0, iParam9 + 1);
	}
}

void func_133(struct<9> Param0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	float fVar11;
	int iVar12;
	
	Var1.f_2 = 1176256410;
	iVar10 = func_118();
	if (Param0.f_0 > iVar10)
	{
		iVar10 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] < iVar10)
		{
			Global_2407344[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar10)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] == 0)
		{
			Global_2407344[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			if (Global_2407344[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407344[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407344[iVar12 /*9*/] = { Param0 };
	}
}

float func_134(struct<3> Param0)
{
	var uVar0;
	
	return func_135(Param0, &(Global_2404994.f_43), &uVar0);
}

float func_135(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404994.f_2256) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_136(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(iParam9) / unk_0xBBDA792448DB5A89(8));
	}
	if (bParam6)
	{
		fVar0 = func_120(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_121(Param0, 1, 0, 0, 1);
	fVar0 = func_120(fVar4, 0f, func_143(), func_141(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_139(Param0);
	fVar0 = func_120(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && !func_104(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_138(Param0, unk_0xFB6B3EEFAB2DD12C(), 0);
	fVar0 = func_120(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_137(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_120(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_120(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_120(unk_0x2A488C176D52CCA5(Global_2404994.f_493, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_137(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x41C8568FB0571C52(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xF669A52DFC02740C(uVar3))
	{
		unk_0x2C9EE1500AAEA57C(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0xC3D3EC28F0EB3C6D((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_138(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!iParam3 == iVar2 || iParam4 == 1)
		{
			iVar3 = iVar2;
			if (func_6(iVar3, 0, 1))
			{
				if (unk_0x2A7336F1C6B39623(iVar3) != unk_0x2A7336F1C6B39623(iParam3) || (unk_0x2A7336F1C6B39623(iVar3) == -1 && unk_0x2A7336F1C6B39623(iParam3) == -1))
				{
					if (Global_2415705.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2415705.f_130[iVar2 /*3*/], Param0);
						if (fVar1 < fVar0)
						{
							fVar0 = fVar1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

float func_139(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x2B7034B7B7F5EA19(unk_0xD5A676B97920D126(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x7887B64A08364778(uVar6[iVar2]))
		{
			if (!unk_0xB529B2A4B7C64D6D(uVar6[iVar2], 0))
			{
				if (func_140(uVar6[iVar2]))
				{
					Var3 = { unk_0xC086F8D75730FA3A(uVar6[iVar2], 1) };
					fVar1 = unk_0x8E92CDAEB8357ABD(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_140(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x627440686F6E9BBB(uParam0);
	switch (unk_0x57BF91AE106AF0F8(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x57BF91AE106AF0F8(uVar0, Global_1574648[unk_0xFB6B3EEFAB2DD12C()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 0)
	{
		iVar1 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x57BF91AE106AF0F8(uVar0, Global_1574359[iVar1]))
			{
				case 3:
				case 5:
					return 1;
					break;
				}
			}
	}
	return 0;
}

float func_141()
{
	if (func_142())
	{
		if ((unk_0x825416FB822BF706(Global_2404994.f_43.f_67) || unk_0x4B09D3321F53E524(Global_2404994.f_43.f_67)) || Global_2404994.f_43.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_142()
{
	if (Global_2404994.f_43.f_65 && !Global_2404994.f_43.f_298)
	{
		if (!func_129(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 1;
		}
	}
	return 0;
}

float func_143()
{
	if (func_142())
	{
		if ((unk_0x825416FB822BF706(Global_2404994.f_43.f_67) || unk_0x4B09D3321F53E524(Global_2404994.f_43.f_67)) || Global_2404994.f_43.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_144(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x9B85F36406C920C4(Param0, fParam7)) || (fVar0 > 0f && unk_0x4FC351BF8E970FDA(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x8341BF4B03057509(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x8341BF4B03057509(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_145(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_149(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_148(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_146(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_146(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_147(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x1FA2886237245376(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_147(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	
	if (Param0.f_2 == Param3.f_2)
	{
		Param3.f_2 = (Param3.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param3 };
	Var3 = { func_77(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var3 = { Var3 / FtoV(unk_0x652D2EEEF1D3E62C(Var3)) };
	Var3 = { Var3 * FtoV((fParam6 * 0.5f)) };
	if (Param0.f_2 > Param3.f_2)
	{
		uVar6 = Param3.f_2;
		uVar7 = Param0.f_2;
	}
	else
	{
		uVar6 = Param0.f_2;
		uVar7 = Param3.f_2;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) + Var3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) + Var3 };
}

int func_148(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
{
	struct<3> Var0[8];
	int iVar25;
	
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param3.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param3.f_1, Param3.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param3.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param3.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param3.f_0, Param0.f_1, Param3.f_2 };
	Var0[6 /*3*/] = { Param3.f_0, Param3.f_1, Param3.f_2 };
	Var0[7 /*3*/] = { Param3.f_0, Param3.f_1, Param0.f_2 };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x1FA2886237245376(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_149(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	struct<3> Var0[4];
	int iVar13;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam3, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam3), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam3) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!unk_0x1FA2886237245376(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_150(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_79(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410138[iVar4])
	{
		if (func_78(Var1, &(Global_2409309[iVar4 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409309[iVar4 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410138[8])
	{
		if (func_78(Var1, &(Global_2409309[8 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409309[8 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409309[8 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409309[8 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_151(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404994.f_43.f_55)
	{
		if (unk_0x7B66213B5E371C3F(Global_2404994.f_43.f_56))
		{
			if (!unk_0x2A962D5F6CB393D4(Param0))
			{
				uVar0 = unk_0x21CE631D8E3F8ECA(Param0);
				if (unk_0x7B66213B5E371C3F(uVar0))
				{
					iVar1 = unk_0x1A315FE9AC133A2D(uVar0);
					if (!iVar1 == Global_2404994.f_43.f_57)
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
		}
	}
	return 1;
}

int func_152(struct<3> Param0)
{
	switch (Global_2404994.f_2040)
	{
		case 0:
			return func_190(Param0, Global_2404994.f_2019, Global_2404994.f_2022, 0, 0);
			break;
		
		case 1:
			return func_107(Param0, Global_2404994.f_2033, Global_2404994.f_2036, 0, 0);
			break;
		
		case 2:
			return unk_0x1FA2886237245376(Param0, Global_2404994.f_2033, Global_2404994.f_2036, Global_2404994.f_2039, 0, 1);
			break;
	}
	return 0;
}

int func_153(struct<3> Param0, var uParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (unk_0x2A488C176D52CCA5(*(uParam3[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *(uParam4[iVar1 /*10*/]) };
		Var5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (unk_0x1FA2886237245376(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_154(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (unk_0x2A488C176D52CCA5((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_89(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_155(int iParam0)
{
	switch (Global_1312443)
	{
		case 0:
			if (!func_28(iParam0))
			{
				if (Global_1589933[iParam0 /*601*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_156(int iParam0)
{
	if (func_85(iParam0, 1))
	{
		if (Global_1589933[iParam0 /*601*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_157(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404994.f_2155[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_158(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_92(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0xB5FEA1F26F05B9F5(0.01f, 360f);
			func_89(&Var1, Global_2404994.f_558, Global_2404994.f_561, 1036831949, 0, fVar4);
			if (func_96(Var1, &uVar0) || func_92(Var1))
			{
				Var1 = { *uParam0 };
				func_89(&Var1, Global_2404994.f_558, Global_2404994.f_561, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_159(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_6(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0x7E3640C27B17457C())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8E92CDAEB8357ABD(func_8(unk_0xFB6B3EEFAB2DD12C()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xBB36CABE30AE5FC4(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_187(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xFB6B3EEFAB2DD12C()))
				{
					if ((func_122(iVar1) || !bParam10) && !Global_2421621[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2A7336F1C6B39623(iVar1) != unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))) || unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x8E92CDAEB8357ABD(func_8(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x2A7336F1C6B39623(iVar1) != iParam8 || unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x8E92CDAEB8357ABD(func_8(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_160(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_162(Param0, fParam3, iParam4, iParam5, 0) || func_161(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_161(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2415705.f_556[iVar0] == 0)
			{
				if (func_81(Param0, Global_2415705.f_426[iVar0 /*3*/], Global_2415705.f_523[iVar0], Global_2415705.f_556[iVar0], 1036831949))
				{
					if (func_6(iVar1, 0, 1) && func_6(iParam3, 0, 1))
					{
						return 1;
					}
					else
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_162(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
				{
					if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
				{
					if (Global_2415705.f_260[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2415705.f_130[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2415705.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2415705.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_6(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_163(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404994.f_3 = 0;
	if (!func_160(Param0, 0.5f, unk_0xFB6B3EEFAB2DD12C(), 0, 0))
	{
		Global_2404994.f_3++;
		if (bParam5)
		{
			if (func_211(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
				if (!func_167(Param0, fParam12))
				{
					Global_2404994.f_3++;
					if (!func_80(Param0, 1056964608))
					{
						Global_2404994.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_211(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
				if (!func_167(Param0, fParam12))
				{
					Global_2404994.f_3++;
					if (!func_164(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404994.f_3++;
						if (!func_80(Param0, 1056964608))
						{
							Global_2404994.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
			}
		}
		else if (func_211(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
			if (!func_167(Param0, fParam12))
			{
				Global_2404994.f_3++;
				if (!func_164(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404994.f_3++;
					if (!func_80(Param0, 1056964608))
					{
						Global_2404994.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
		}
	}
	return 0;
}

int func_164(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xFB6B3EEFAB2DD12C() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_122(iVar1)) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (!func_166(unk_0xFB6B3EEFAB2DD12C(), iVar1, -2, 0))
				{
					if (func_165(func_8(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_165(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.f_0 = unk_0x0BADBFA3B172435F(fParam6);
	Var0.f_1 = unk_0xD0FFB162F40A139C(fParam6);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.f_2 = Param3.f_2;
	Var3.f_2 = (Var3.f_2 + fParam9);
	Param3.f_2 = (Param3.f_2 + fParam9);
	return unk_0x1FA2886237245376(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_166(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && unk_0x2A7336F1C6B39623(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == unk_0x2A7336F1C6B39623(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
	}
	return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
}

int func_167(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_122(iVar1)) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
		{
			if ((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && unk_0x2A7336F1C6B39623(iVar1) == -1) && !func_104(unk_0xFB6B3EEFAB2DD12C(), 1))
			{
				return 0;
			}
			else if ((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && !unk_0xFB6B3EEFAB2DD12C() == iVar1) || !func_166(unk_0xFB6B3EEFAB2DD12C(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_8(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_168(int iParam0)
{
	if ((Global_2404994.f_476 == 9 || Global_2404994.f_476 == 9) || (Global_2404994.f_476 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_169(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xFB6B3EEFAB2DD12C() != iVar1) || iParam8 == 0)
		{
			if (func_6(iVar1, bParam4, bParam5))
			{
				if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
				{
					if (!bParam7 || (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar1)) && func_122(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) != unk_0x2A7336F1C6B39623(iVar1))) || unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
						{
							if (((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && iParam9) && bParam6) && func_124(iVar1))
							{
							}
							else if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
							{
								if (unk_0x8E92CDAEB8357ABD(func_8(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_170(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_187(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1)) && iVar1 != unk_0xFB6B3EEFAB2DD12C())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x2A7336F1C6B39623(iVar1) == iVar3)
					{
						if (unk_0x8E92CDAEB8357ABD(func_8(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	if ((func_104(iParam0, 1) || func_172(iParam0)) || func_33(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1618089[iVar0 /*390*/] != -1;
	}
	return 0;
}

void func_173(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var6;
	struct<3> Var16;
	struct<3> Var19;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var6 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!unk_0xF44A5E894FE76438(Global_2359719[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359719[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359719[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359719[iVar1 /*26*/].f_6.f_2;
					func_175(&Var2, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var16 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var19 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (unk_0x652D2EEEF1D3E62C(*(uParam4[iVar0 /*10*/])) == 0f || unk_0x2A488C176D52CCA5(Var16, Param0) < unk_0x2A488C176D52CCA5(Var19, Param0))
			{
				Var6 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var6.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var6.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var6.f_7 = { Global_2359395[iVar1 /*3*/] };
				func_174(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_174(var uParam0, var uParam1, int iParam2)
{
	Global_2411136 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_174(&Global_2411136, uParam1, iParam2 + 1);
	}
}

void func_175(var uParam0, var uParam1, int iParam2)
{
	Global_2411132 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_175(&Global_2411132, uParam1, iParam2 + 1);
	}
}

void func_176(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404994.f_1815 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404994.f_1815)
		{
			if (func_177(Global_2404994.f_1816[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404994.f_1816[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404994.f_1816[iVar0 /*4*/] };
					fVar4 = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
				}
				func_119(Global_2404994.f_1816[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404994.f_2044++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2404994.f_2349)
	{
		func_113(&(Global_2404994.f_2044.f_6[0 /*9*/]), &(Global_2404994.f_2044.f_6[1 /*9*/]), &(Global_2404994.f_2044.f_6[2 /*9*/]));
	}
}

int func_177(struct<3> Param0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_71(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_71(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_178(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_108(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

void func_179()
{
	func_184();
	func_183();
	func_182();
	func_181();
	func_180();
}

void func_180()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407344[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_181()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404994.f_2044.f_67[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_182()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404994.f_2044.f_34[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_183()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 3)
	{
		Global_2404994.f_2044.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_184()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404994.f_2044 = { Var0 };
}

var func_185()
{
	return Global_1310987.f_4;
}

void func_186(var uParam0, var uParam1)
{
	func_212();
	func_210(uParam0, uParam1);
}

bool func_187(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_188(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_188(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_189();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_189()
{
	return Global_1312731;
}

bool func_190(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
}

void func_191(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404994.f_1685 > 0 && func_209(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_192(uParam0, uParam1, uParam2);
	}
}

void func_192(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar28;
	struct<3> Var29;
	float fVar32;
	bool bVar33;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_88(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_208(uParam0, 1))
		{
		}
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2411146.f_162 = 0;
	Global_2411146.f_163 = 0;
	Global_2411146.f_164 = -99;
	Global_2411146.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411146[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411146.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0x41C8568FB0571C52(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xF669A52DFC02740C(iVar8))
		{
			unk_0x2C9EE1500AAEA57C(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411146.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411146.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x22A8AA230C8648B4(iVar8)) || unk_0xDE4C795F44220EAC(iVar8))
			{
				unk_0x1E9574637C99DDAD(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_158(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_207(Var1))
									{
										Var1 = { func_205(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_80(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_204(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_208(&Var1, 0)) || uParam2->f_48 == 0)
															{
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																	}
																}
																if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_199(Var1, fVar4, uParam2->f_34, unk_0xFB6B3EEFAB2DD12C(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_88(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (uParam2->f_3 > 7f)
																					{
																						if (func_211(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					else if (func_211(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_198(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_197(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411146.f_162)
																										{
																											Global_2411146[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2411146.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2411146.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2411146.f_162 == 0)
																									{
																										Global_2411146[0 /*3*/] = { Var1 };
																										Global_2411146.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411146.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411146[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_196(Var1, fVar4, iVar16);
																													iVar16 = Global_2411146.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2411146.f_162++;
																									if (Global_2411146.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411146.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2411146[Global_2411146.f_162 /*3*/] = { Var1 };
																									Global_2411146.f_121[Global_2411146.f_162] = fVar4;
																									Global_2411146.f_162++;
																									if (func_204(Var1, uParam2))
																									{
																										Global_2411146.f_163++;
																									}
																									if (Global_2411146.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411146.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return;
																						}
																					}
																					else
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2411146.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411146[0 /*3*/] };
						*uParam1 = Global_2411146.f_121[0];
						return;
					}
					else
					{
						if (Global_2411146.f_163 > 0 && !Global_2411146.f_163 == Global_2411146.f_162)
						{
							func_194(0, uParam2);
						}
						iVar24 = unk_0x7BC26452241AC7C9(0, Global_2411146.f_162);
						Var25 = { Global_2411146[0 /*3*/] };
						uVar28 = Global_2411146.f_121[0];
						Global_2411146[0 /*3*/] = { Global_2411146[iVar24 /*3*/] };
						Global_2411146.f_121[0] = Global_2411146.f_121[iVar24];
						Global_2411146[iVar24 /*3*/] = { Var25 };
						Global_2411146.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2411146[0 /*3*/] };
						*uParam1 = Global_2411146.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_192(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x7BC26452241AC7C9((1 + iVar15), (40 + iVar15));
						unk_0x7BFF9C1108FDE842(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_205(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						fVar32 = fVar4;
						if (!uParam2->f_50)
						{
							bVar33 = true;
						}
						else
						{
							bVar33 = false;
						}
						if (func_88(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_208(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_192(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								return;
							}
						}
						else
						{
							*uParam0 = { Var29 };
							*uParam1 = fVar32;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_192(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_193(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411146.f_164 = iVar8;
	}
}

void func_193(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_160(*(uParam0[iVar2 /*4*/]), 5f, unk_0xFB6B3EEFAB2DD12C(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_194(int iParam0, var uParam1)
{
	if (!func_204(Global_2411146[iParam0 /*3*/], uParam1))
	{
		Global_2411146.f_162 = (Global_2411146.f_162 - 1);
		func_195(iParam0);
		if (Global_2411146.f_162 > Global_2411146.f_163)
		{
			func_194(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_194(iParam0 + 1, uParam1);
	}
}

void func_195(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411146[iParam0 /*3*/] = { Global_2411146[iParam0 + 1 /*3*/] };
			Global_2411146.f_121[iParam0] = Global_2411146.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_196(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411146[iParam4 /*3*/] };
	uVar3 = Global_2411146.f_121[iParam4];
	Global_2411146[iParam4 /*3*/] = { Param0 };
	Global_2411146.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411146.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_196(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_197(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_123(iVar5))
		{
			Var1 = { func_8(iVar5) };
			fVar7 = unk_0x2A488C176D52CCA5(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_198(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xFB6B3EEFAB2DD12C() != iVar1) || iParam9 == 0)
		{
			if (func_6(iVar1, bParam5, bParam6))
			{
				if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
				{
					if (!bParam8 || (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar1)) && func_122(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) != unk_0x2A7336F1C6B39623(iVar1))) || unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
						{
							if (((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && iParam10) && bParam7) && func_124(iVar1))
							{
							}
							else if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
							{
								if (func_81(func_8(iVar1), Param0, fParam3, iParam4, 1036831949))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_199(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_203(Param0, fParam3, iParam4, iParam5, iParam6) || func_200(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_200(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_202(Param0, iParam4, Global_2415705.f_426[iVar0 /*3*/], Global_2415705.f_556[iVar0]))
			{
				if (func_201(Param0, fParam3, iParam4, Global_2415705.f_426[iVar0 /*3*/], Global_2415705.f_523[iVar0], Global_2415705.f_556[iVar0], 0))
				{
					if (func_6(iVar1, 0, 1) && func_6(iParam5, 0, 1))
					{
						return 1;
					}
					else
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_201(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_81(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_82(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0xC3D3EC28F0EB3C6D((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0xC3D3EC28F0EB3C6D((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0xC3D3EC28F0EB3C6D((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_83(&Var23, 0f, 0f, fParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_83(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * fVar22));
	Var1[1 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * fVar22));
	Var1[2 /*3*/] = { Param0 - Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * fVar22));
	Var1[3 /*3*/] = { Param0 - Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * fVar22));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_81(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_201(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_202(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_84(iParam3, 1008981770);
	fVar1 = func_84(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_203(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam5, 0, 1))
			{
				if (Global_2415705.f_260[iVar0])
				{
					if (func_81(Global_2415705.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_81(func_8(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2415705.f_260[iVar0])
			{
				if (func_81(Global_2415705.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
				{
					if (func_81(func_8(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_204(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_190(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_107(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x1FA2886237245376(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_205(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	float fVar17;
	float fVar20;
	float fVar23;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_206(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x1E9574637C99DDAD(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0xA9F875A86914FAA6(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
		if (iVar11 == iVar12)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar11 + iVar12) != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *bParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar15 = true;
		}
		else
		{
			bVar15 = false;
		}
		bVar16 = false;
		if (bVar15)
		{
			if (iVar11 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar11)
			{
				bVar16 = true;
			}
		}
		else if (iVar12 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar12)
		{
			bVar16 = true;
		}
		if (fVar13 < 0f)
		{
			fVar14 = 0f;
		}
		else
		{
			if (bVar15)
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar11) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar11));
				}
				if (bVar16)
				{
					if (iVar11 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar11 - 2)) * 1f));
					}
				}
				else if (iVar11 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar11 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar12) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar12));
				}
				if (bVar16)
				{
					if (iVar12 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar12 - 2)) * 1f));
					}
				}
				else if (iVar12 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar12 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar14 = (fVar14 + (0.95f * fVar13));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				func_82(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				if (fVar23 > 1.8f)
				{
					fVar14 = (fVar14 + ((fVar23 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_206(Param0, *fParam3, Param6))
		{
			if (bParam5)
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar14 < 0f)
	{
		fVar14 = 0f;
	}
	Var0 = { unk_0x0A0C20E171493CD0(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x0BFEFDC804C62B90(Param0, *fParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_82(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				Var30 = { Var30 * FtoV((fVar23 * 0.5f)) };
				Var27 = { Var27 - Var30 };
				Var24 = { Param0 + Var27 };
			}
			Var30 = { Var0 - Var24 };
			Var0 = { Var24 };
		}
	}
	return Var0;
}

int func_206(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_83(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_76(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_207(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_79(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2410860[iVar1])
	{
		if (func_78(Param0, &(Global_2410157[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410860[8])
	{
		if (func_78(Param0, &(Global_2410157[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_208(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404994.f_26.f_16)
	{
		switch (Global_2404994.f_26.f_15)
		{
			case 0:
				if (func_190(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_107(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x1FA2886237245376(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_11, Global_2404994.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_95(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_11, Global_2404994.f_26.f_14, Global_2404994.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_209(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	struct<3> Var14;
	var uVar17;
	
	if (Global_2404994.f_1685 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_88(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_208(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2411146.f_162 = 0;
		Global_2411146.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2411146[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2411146.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404994.f_1685)
		{
			Var1 = { Global_2404994.f_1686[iVar0 /*4*/] };
			fVar4 = Global_2404994.f_1686[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
				{
					if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
					{
						if ((uParam2->f_12 && !func_199(Var1, fVar4, uParam2->f_34, unk_0xFB6B3EEFAB2DD12C(), 0, uParam2->f_56)) || !uParam2->f_12)
						{
							if (!uParam2->f_15 || !func_88(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
							{
								if (uParam2->f_8)
								{
									iVar6 = uParam2->f_31;
									bVar7 = true;
									iVar8 = 1;
									fVar9 = uParam2->f_49;
									if (!uParam2->f_55)
									{
										iVar6 = 0;
										bVar7 = false;
										iVar8 = 0;
										fVar9 = 1f;
									}
									else if (uParam2->f_17)
									{
										iVar6 = 0;
										bVar7 = false;
										iVar8 = 0;
										if (uParam2->f_33 == 1)
										{
											fVar9 = (fVar9 * 0.375f);
										}
									}
									else
									{
										bVar7 = true;
										iVar8 = 1;
										if (uParam2->f_28)
										{
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
									}
									bVar10 = false;
									if (uParam2->f_3 > 7f)
									{
										if (func_211(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
										{
											bVar10 = true;
										}
									}
									else if (func_211(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_198(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
									{
										bVar10 = true;
									}
									if (bVar10)
									{
										if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
										{
											fVar12 = 0f;
											if (uParam2->f_52)
											{
												iVar11 = func_197(Var1, uParam2->f_54, &fVar12);
											}
											if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
											{
												if (uParam2->f_52)
												{
													if (iVar11 < uParam2->f_53)
													{
														iVar5 = 0;
														while (iVar5 < Global_2411146.f_162)
														{
															Global_2411146[iVar5 /*3*/] = { 0f, 0f, 0f };
															Global_2411146.f_121[iVar5] = 0f;
															iVar5++;
														}
														Global_2411146.f_162 = 0;
														uParam2->f_53 = iVar11;
													}
												}
												if (uParam2->f_30)
												{
													if (Global_2411146.f_162 == 0)
													{
														Global_2411146[0 /*3*/] = { Var1 };
														Global_2411146.f_121[0] = fVar4;
													}
													else
													{
														iVar5 = 0;
														while (iVar5 < Global_2411146.f_162 + 1)
														{
															if (iVar5 < 40)
															{
																if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411146[iVar5 /*3*/], uParam2->f_35))
																{
																	func_196(Var1, fVar4, iVar5);
																	iVar5 = Global_2411146.f_162 + 1;
																}
															}
															iVar5++;
														}
													}
													Global_2411146.f_162++;
													if (Global_2411146.f_162 >= 5)
													{
														if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
														{
															iVar0 = Global_2404994.f_1685;
														}
														else if (Global_2411146.f_162 == 40)
														{
															iVar0 = Global_2404994.f_1685;
														}
													}
												}
												else
												{
													Global_2411146[Global_2411146.f_162 /*3*/] = { Var1 };
													Global_2411146.f_121[Global_2411146.f_162] = fVar4;
													Global_2411146.f_162++;
													if (Global_2411146.f_162 >= 10)
													{
														if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
														{
															iVar0 = Global_2404994.f_1685;
														}
														else if (Global_2411146.f_162 == 40)
														{
															iVar0 = Global_2404994.f_1685;
														}
													}
												}
											}
										}
										else
										{
											*uParam0 = { Var1 };
											*uParam1 = fVar4;
											return 1;
										}
									}
								}
								else
								{
									*uParam0 = { Var1 };
									*uParam1 = fVar4;
									return 1;
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2411146.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411146[0 /*3*/] };
				*uParam1 = Global_2411146.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411146.f_163 > 0 && !Global_2411146.f_163 == Global_2411146.f_162)
				{
					func_194(0, uParam2);
				}
				iVar13 = unk_0x7BC26452241AC7C9(0, Global_2411146.f_162);
				Var14 = { Global_2411146[0 /*3*/] };
				uVar17 = Global_2411146.f_121[0];
				Global_2411146[0 /*3*/] = { Global_2411146[iVar13 /*3*/] };
				Global_2411146.f_121[0] = Global_2411146.f_121[iVar13];
				Global_2411146[iVar13 /*3*/] = { Var14 };
				Global_2411146.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2411146[0 /*3*/] };
				*uParam1 = Global_2411146.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_209(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_192(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_210(var uParam0, var uParam1)
{
	unk_0x972722D5CDECF6C9(uParam0, uParam1, 0.1f);
	Global_2404994.f_2027 = unk_0x3ED6DDB11A7AD67F();
	Global_2404994.f_2025 = 1;
	Global_2404994.f_2028 = unk_0x7414B386C0020BEC();
}

int func_211(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404994.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x9B85F36406C920C4(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x4FC351BF8E970FDA(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x4FC351BF8E970FDA(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x8341BF4B03057509(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x844703FC62D7378B(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (fParam14 > 0f)
	{
		if (func_169(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_159(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404994.f_2++;
	return 1;
}

void func_212()
{
	if (Global_2404994.f_2025)
	{
		if (unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_2027)
		{
			unk_0xF917823066DAF89F();
		}
		else
		{
			unk_0xF917823066DAF89F();
		}
		Global_2404994.f_2025 = 0;
	}
}

int func_213(bool bParam0)
{
	if (unk_0x7E3640C27B17457C())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_214(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x4ACD1E4CBA159ED1(iParam0);
	return unk_0x7AD0E9452821C95D(iParam0);
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_91.f_49;
			break;
	}
	return 0;
}

int func_216()
{
	if (iLocal_312 == 0)
	{
		if (unk_0xF44A5E894FE76438(Local_91.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_217()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!unk_0xF44A5E894FE76438(Local_91.f_2, 0))
	{
		unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 0);
		if (iLocal_312 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_314, 1, 1))
		{
			if (unk_0x45C6A8F0909682A6(false) - unk_0x1F3C33D4875E4B82(0)) >= func_429(iLocal_312)
			{
				if (unk_0x4EA5429144EA2576(func_429(iLocal_312)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = unk_0x4572B13EE70C8F52(iLocal_314);
					iVar3 = unk_0x2B7034B7B7F5EA19(iVar2, &uLocal_497, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_429(iLocal_312))
							{
								if (iVar5 == -1)
								{
									if (((!unk_0xF6A32456BABBBA74(Local_91.f_10[iVar1 /*7*/]) && !unk_0xF44A5E894FE76438(Local_91.f_10[iVar1 /*7*/].f_2, 1)) && !unk_0xF44A5E894FE76438(Local_91.f_10[iVar1 /*7*/].f_2, 6)) && !unk_0xF44A5E894FE76438(Local_91.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (unk_0x7887B64A08364778(uLocal_497[iVar0]))
								{
									if (!unk_0xB529B2A4B7C64D6D(uLocal_497[iVar0], 0))
									{
										if (!unk_0xBEC34BF6B72C417A(uLocal_497[iVar0]))
										{
											if (func_219(unk_0xA0A4DA31DEDFAC4F(uLocal_497[iVar0])))
											{
												if (!unk_0x2A29BF08180E7ADF(uLocal_497[iVar0]))
												{
													if (!unk_0x6A0583ECFCCECC9B(uLocal_497[iVar0], 0))
													{
														if (func_5(unk_0xC086F8D75730FA3A(uLocal_497[iVar0], 1), unk_0xC086F8D75730FA3A(iVar2, 1), 625f))
														{
															unk_0xC53606C390BE2727(uLocal_497[iVar0], 1, 0);
															Local_91.f_10[iVar5 /*7*/].f_6 = iVar0;
															unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iVar5 /*7*/].f_2), 8);
															if (!unk_0xF44A5E894FE76438(Local_91.f_1, 12))
															{
																Local_91.f_8 = uLocal_319;
																unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 12);
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
						iVar0++;
					}
				}
			}
		}
	}
	else if (unk_0xF44A5E894FE76438(Local_91.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_429(iLocal_312))
		{
			if (unk_0xF44A5E894FE76438(Local_91.f_10[iVar6 /*7*/].f_2, 1) || unk_0xF44A5E894FE76438(Local_91.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (unk_0xF44A5E894FE76438(Local_91.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!unk_0xB529B2A4B7C64D6D(uLocal_497[Local_91.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (unk_0x2A29BF08180E7ADF(uLocal_497[Local_91.f_10[iVar6 /*7*/].f_6]))
					{
						if (!unk_0x4A478FA962FF575A(uLocal_497[Local_91.f_10[iVar6 /*7*/].f_6]))
						{
							unk_0xF78A199036560454(uLocal_497[Local_91.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							unk_0xCB55F3193E89BADA(uLocal_497[Local_91.f_10[iVar6 /*7*/].f_6], 1);
							Local_91.f_10[iVar6 /*7*/] = unk_0x3EE3A80A2D8115F8(uLocal_497[Local_91.f_10[iVar6 /*7*/].f_6]);
							unk_0x8D7D9565420EE4B0(Local_91.f_10[iVar6 /*7*/], 1);
							unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iVar6 /*7*/].f_2), 0);
							Local_91.f_10[iVar6 /*7*/].f_1 = iLocal_312;
							Local_91.f_10[iVar6 /*7*/].f_4 = func_64(iLocal_312);
							func_62(iVar6);
							unk_0x4EA098C870B73AB7(&(Local_91.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || unk_0x05E1706E4465DAA5(uLocal_319, Local_91.f_8) > 5000)
		{
			if (iVar7 >= func_429(iLocal_312))
			{
				unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_497[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_429(iLocal_312))
			{
				if (unk_0xF44A5E894FE76438(Local_91.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_218(&(Local_91.f_10[iVar6 /*7*/]));
					unk_0x4EA098C870B73AB7(&(Local_91.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			unk_0x4EA098C870B73AB7(&(Local_91.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_218(var uParam0)
{
	var uVar0;
	
	if (unk_0x1B982A8B37108B3C(*uParam0))
	{
		uVar0 = unk_0x0DE80E23B2BD02BD(*uParam0);
		unk_0x9E5138EA66A3E119(&uVar0);
	}
}

int func_219(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_220()
{
	if (unk_0xF44A5E894FE76438(Local_91.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_312 == 0)
	{
		Local_91.f_49 = func_221(Local_91.f_36, 1);
		unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 6);
		return 1;
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 6);
		return 1;
	}
	return 0;
}

int func_221(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	if (func_222(Param0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_222(Param0, 1100f, -196f, 300f, 350f, 0) || func_222(Param0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_222(Param0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_222(Param0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_222(Param0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_222(Param0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_222(Param0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam3 == 1)
	{
		iVar0 = unk_0x7BC26452241AC7C9(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (Param0.f_1 > 800f)
		{
			iVar0 = unk_0x7BC26452241AC7C9(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_222(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	return unk_0x8E92CDAEB8357ABD(Param0, Param3, iParam7) <= fParam6;
}

void func_223(int iParam0)
{
	if (unk_0x00B5B0B68211D89B(iParam0))
	{
	}
	Local_91.f_36 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	if (func_224(iParam0, 0))
	{
		unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 17);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Local_91.f_1), 17);
	}
}

int func_224(int iParam0, int iParam1)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(iParam0, 0) || iParam1)
		{
			if (unk_0x3ACA21A90E0A949C(iParam0))
			{
				if (unk_0xAB8AFB76D71743FE(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_225()
{
	bool bVar0;
	
	if (unk_0x04DE35D10A718EEF())
	{
		if (unk_0xF44A5E894FE76438(Local_91.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_312)
			{
				case 0:
					if (unk_0xF44A5E894FE76438(Local_91.f_2, 11))
					{
						if (func_6(iLocal_314, 1, 1))
						{
							if (unk_0xB7A628320EFF8E47(func_8(iLocal_314), Local_91.f_39) > 625f)
							{
								unk_0x4EA098C870B73AB7(&(Local_91.f_2), 11);
								unk_0x4EA098C870B73AB7(&iLocal_306, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_314, 1, 1))
						{
							bVar0 = true;
							if (func_228())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_57();
						}
						else
						{
							func_58();
						}
						if (unk_0xF44A5E894FE76438(Local_91.f_1, 5))
						{
							if (func_227())
							{
								func_58();
								unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_314, 1, 1))
					{
						bVar0 = true;
						if (func_226())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_57();
					}
					else
					{
						func_58();
					}
					if (unk_0xF44A5E894FE76438(Local_91.f_1, 5))
					{
						if (unk_0x05E1706E4465DAA5(uLocal_319, Local_91.f_5) > 30000)
						{
							func_58();
							unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_226()
{
	int iVar0;
	
	iVar0 = unk_0x4572B13EE70C8F52(iLocal_314);
	if (((((unk_0x7C4BC3264552091A(iVar0) || unk_0x3ACA21A90E0A949C(iVar0)) || func_29(iLocal_314, 1, 0)) || func_36(iLocal_314, 0)) || func_36(iLocal_314, 7)) || func_28(iLocal_314))
	{
		return 1;
	}
	if (func_104(iLocal_314, 1))
	{
		if (iLocal_314 > -1)
		{
			if (Global_1589933[iLocal_314 /*601*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_227()
{
	if (!unk_0xF44A5E894FE76438(Local_91.f_1, 18))
	{
		if (unk_0x05E1706E4465DAA5(uLocal_319, Local_91.f_5) > 5000)
		{
			unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 18);
			return 1;
		}
	}
	else if (unk_0x05E1706E4465DAA5(uLocal_319, Local_91.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_228()
{
	int iVar0;
	
	iVar0 = unk_0x4572B13EE70C8F52(iLocal_314);
	if (((((((((unk_0x78D3CDB884C74FEB(iVar0) > 10f || unk_0x7C4BC3264552091A(iVar0)) || unk_0x3ACA21A90E0A949C(iVar0)) || func_29(iLocal_314, 1, 0)) || func_56(iLocal_314)) || func_36(iLocal_314, 0)) || func_36(iLocal_314, 7)) || func_28(iLocal_314)) || Global_2421621[iLocal_314 /*358*/].f_241) || func_55(unk_0x4572B13EE70C8F52(iLocal_314), joaat("titan")))
	{
		return 1;
	}
	if (func_104(iLocal_314, 1))
	{
		if (iLocal_314 > -1)
		{
			if (Global_1589933[iLocal_314 /*601*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_314 != -1)
	{
		if (unk_0xF44A5E894FE76438(Local_145[iLocal_314 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_229()
{
	if (!unk_0xF44A5E894FE76438(Local_91.f_1, 14))
	{
		Local_91.f_9 = uLocal_319;
		unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 14);
	}
}

void func_230()
{
	if (Local_91.f_44 != Local_145[iLocal_313 /*5*/].f_4)
	{
		Local_91.f_44 = Local_145[iLocal_313 /*5*/].f_4;
	}
}

void func_231()
{
	if (!unk_0xF44A5E894FE76438(Local_91.f_1, 10))
	{
		Local_91.f_45 = func_429(iLocal_312);
		Local_91.f_46 = 0;
		Local_91.f_47 = 0;
		unk_0xB8A73E7DA87B2968(&(Local_91.f_1), 10);
	}
}

void func_232()
{
	func_233();
	if (!unk_0xF44A5E894FE76438(Local_91.f_1, 8))
	{
		if (unk_0xF44A5E894FE76438(Local_91.f_2, 7))
		{
			if (unk_0x05E1706E4465DAA5(uLocal_319, Local_91.f_7) > 300000)
			{
				unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 8);
			}
		}
	}
}

void func_233()
{
	if (!unk_0xF44A5E894FE76438(Local_91.f_2, 7))
	{
		Local_91.f_7 = uLocal_319;
		unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 7);
	}
}

void func_234()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xB8A73E7DA87B2968(&iLocal_306, 7);
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 1))
	{
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 2))
	{
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 3))
	{
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 9))
	{
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 4))
	{
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 5))
	{
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 11))
	{
		if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
		{
			unk_0x4EA098C870B73AB7(&iLocal_306, 7);
			if (Local_91.f_50)
			{
				unk_0xB8A73E7DA87B2968(&iLocal_306, 7);
			}
			else if (func_331("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_306, 7);
			}
		}
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 6))
	{
		if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
		{
			unk_0x4EA098C870B73AB7(&iLocal_306, 7);
			if (Local_91.f_50)
			{
				unk_0xB8A73E7DA87B2968(&iLocal_306, 7);
			}
			else if (func_331("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_306, 7);
			}
		}
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 7))
	{
		if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
		{
			unk_0x4EA098C870B73AB7(&iLocal_306, 7);
			if (func_304())
			{
				if (!Local_91.f_50)
				{
					iLocal_514 = func_301(12);
					func_299(iLocal_514, 1, 0, 0f);
					func_287(iLocal_514, 4, 1, 1);
					unk_0xB8A73E7DA87B2968(&iLocal_306, 7);
				}
				else
				{
					unk_0xB8A73E7DA87B2968(&iLocal_306, 7);
				}
			}
		}
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 0))
	{
		if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
		{
			if (!unk_0xF44A5E894FE76438(Local_91.f_2, 1))
			{
				unk_0x4EA098C870B73AB7(&iLocal_306, 7);
				if (func_331("MPCT_mugfail", "LAMAR", 19))
				{
					unk_0xB8A73E7DA87B2968(&iLocal_306, 7);
				}
			}
		}
		else if (unk_0xFB6B3EEFAB2DD12C() == iLocal_314)
		{
			if (unk_0xF44A5E894FE76438(Local_91.f_2, 1))
			{
				if (unk_0xF44A5E894FE76438(Local_91.f_2, 12))
				{
					iVar0 = unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_5474) * Global_262145.f_4291));
					func_250(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_236(47, 1);
				}
			}
		}
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 8))
	{
		if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
		{
			unk_0x4EA098C870B73AB7(&iLocal_306, 7);
			if (func_304())
			{
				if (iLocal_312 == 0)
				{
					iLocal_514 = (func_301(2) * func_429(iLocal_312));
					iVar1 = 3;
				}
				else
				{
					iLocal_514 = func_301(12);
					iVar1 = 4;
				}
				if (!Local_91.f_50)
				{
					func_299(iLocal_514, 1, 0, 0f);
					func_287(iLocal_514, iVar1, 1, 0);
					unk_0xB8A73E7DA87B2968(&iLocal_306, 7);
				}
				else
				{
					unk_0xB8A73E7DA87B2968(&iLocal_306, 7);
				}
			}
		}
	}
	if (unk_0xF44A5E894FE76438(Local_91.f_3, 10))
	{
		if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
		{
			unk_0x4EA098C870B73AB7(&iLocal_306, 7);
			if (func_304())
			{
				if (iLocal_312 == 0)
				{
					iLocal_514 = (func_301(2) * func_429(iLocal_312));
					iVar2 = 3;
				}
				else
				{
					iLocal_514 = func_301(12);
					iVar2 = 4;
				}
				if (!Local_91.f_50)
				{
					func_299(iLocal_514, 1, 0, 0f);
					func_287(iLocal_514, iVar2, 1, 0);
					unk_0xB8A73E7DA87B2968(&iLocal_306, 7);
				}
				else
				{
					unk_0xB8A73E7DA87B2968(&iLocal_306, 7);
				}
			}
		}
	}
	if (unk_0xF44A5E894FE76438(iLocal_306, 7))
	{
		func_235();
	}
}

void func_235()
{
	unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xBF9F666ECB14FCC3() /*601*/].f_139), iLocal_312);
	Global_1589933[unk_0xBF9F666ECB14FCC3() /*601*/].f_140 = -1;
	if (iLocal_312 == 1)
	{
		if (unk_0xA5DC27EFFAA64D07(uLocal_496))
		{
			unk_0x0AAA84F6FB8C3704(uLocal_496);
		}
	}
	func_458();
	func_490();
}

int func_236(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_237(iParam0, iParam1);
}

int func_237(int iParam0, int iParam1)
{
	if (func_249(14) && !func_248(iParam0))
	{
		return 0;
	}
	if (unk_0xC588321444C4C223(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25431 != 0 && !Global_69697)
	{
		return 0;
	}
	if (func_247(&Global_2595490))
	{
		if (func_245(&Global_2595490, iParam0))
		{
			return 0;
		}
		if (func_238(&Global_2595490, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x2CA29E16C343CE86(iParam0))
		{
			return 0;
		}
		if (unk_0xC588321444C4C223(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_238(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xC588321444C4C223(iParam1))
	{
		return 0;
	}
	if (func_249(14) && !func_248(iParam1))
	{
		return 0;
	}
	if (func_245(uParam0, iParam1))
	{
		return 0;
	}
	if (func_244(uParam0) < 0f)
	{
		func_243(uParam0, 0);
	}
	func_241(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_239(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_239(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC588321444C4C223(iParam1))
	{
		return 0;
	}
	if (func_249(14) && !func_248(iParam1))
	{
		return 0;
	}
	if (func_245(uParam0, iParam1))
	{
		return 0;
	}
	if (func_244(uParam0) < 0f)
	{
		func_243(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_240(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_240(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_241(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_242(uParam0, iVar0);
		iVar0++;
	}
	func_243(uParam0, (Global_2595489 - 0.5f));
}

void func_242(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_243(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_244(var uParam0)
{
	return uParam0->f_72;
}

bool func_245(var uParam0, int iParam1)
{
	return func_246(uParam0, iParam1) != -1;
}

int func_246(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_247(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_249(int iParam0)
{
	return Global_35777 == iParam0;
}

var func_250(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_251(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_251(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_252(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_252(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_286(unk_0xFB6B3EEFAB2DD12C()) || func_285(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (Global_262145.f_8151 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8151;
		}
	}
	else if (Global_262145.f_5467 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5467;
	}
	if (func_284(uParam2))
	{
	}
	if (func_283())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_281(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_280(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_278(0, &iVar1);
					break;
				
				case 3:
					func_278(1, &iVar1);
					break;
				
				case 1:
					func_276(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_273(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_262((func_272(unk_0xFB6B3EEFAB2DD12C()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x2A478F15F6560673(iVar1, iParam8, iParam9);
				if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_2 != -1)
				{
					func_273(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_257(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_253((func_255(unk_0xFB6B3EEFAB2DD12C()) + iVar1));
			}
			else
			{
				func_253((func_255(unk_0xFB6B3EEFAB2DD12C()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_253(int iParam0)
{
	if (func_283())
	{
		Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_5 = iParam0;
		func_254(joaat("mpply_globalxp"), iParam0);
	}
}

void func_254(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
}

int func_255(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return func_256(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_5;
			}
		}
		else
		{
			return func_256(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_256(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_257(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_126(unk_0xFB6B3EEFAB2DD12C()) };
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(&Var0))
		{
			iVar13 = func_260(func_261(&Var0));
			if (iVar13 == 0)
			{
				func_259(&Global_1362334, iParam0);
				func_258(joaat("mpply_crew_local_xp_0"), Global_1362334);
			}
			else if (iVar13 == 1)
			{
				func_259(&Global_1362335, iParam0);
				func_258(joaat("mpply_crew_local_xp_1"), Global_1362335);
			}
			else if (iVar13 == 2)
			{
				func_259(&Global_1362336, iParam0);
				func_258(joaat("mpply_crew_local_xp_2"), Global_1362336);
			}
			else if (iVar13 == 3)
			{
				func_259(&Global_1362337, iParam0);
				func_258(joaat("mpply_crew_local_xp_3"), Global_1362337);
			}
			else if (iVar13 == 4)
			{
				func_259(&Global_1362338, iParam0);
				func_258(joaat("mpply_crew_local_xp_4"), Global_1362338);
			}
		}
	}
}

void func_258(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1362329 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1362331 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1362331 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1362332 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1362333 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1362334 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1362335 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1362336 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1362337 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1362338 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1362339 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1362340 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1362341 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1362342 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1362343 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1362344 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1362345 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_259(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_260(int iParam0)
{
	if (iParam0 == Global_1362329)
	{
		return 0;
	}
	else if (iParam0 == Global_1362330)
	{
		return 1;
	}
	else if (iParam0 == Global_1362331)
	{
		return 2;
	}
	else if (iParam0 == Global_1362332)
	{
		return 3;
	}
	else if (iParam0 == Global_1362333)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_261(var uParam0)
{
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(uParam0))
		{
			return Global_2452407;
		}
	}
	return Global_2452407;
}

void func_262(int iParam0, int iParam1, int iParam2)
{
	if (func_283())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8121 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362449[func_271(-1)])
				{
					unk_0x2A478F15F6560673(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362449[func_271(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_270(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_1 = iParam0;
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_6 = func_268(iParam0, 1);
		}
		func_267(634, iParam0, -1, 1);
		func_266(635, func_268(iParam0, 1), -1, 1, 0);
		Global_1362449[func_271(-1)] = iParam0;
		func_263(7, 0);
	}
}

void func_263(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_265(iParam0, iParam1))
	{
		iVar0 = func_264();
		Global_2452384[iVar0] = iParam0;
	}
}

int func_264()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2452384[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_265(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_266(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_271(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
}

void func_267(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503773[iParam0 /*3*/][func_271(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1362395[func_271(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1362401[func_271(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1362407[func_271(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1362413[func_271(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1362371[func_271(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1362377[func_271(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1362383[func_271(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1362389[func_271(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362347[func_271(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1362353[func_271(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1362359[func_271(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1362365[func_271(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1362419[func_271(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1362425[func_271(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1362431[func_271(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1362437[func_271(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1362443[func_271(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1362449[func_271(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1362455[func_271(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524224[0 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524224[1 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524224[2 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524224[3 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524295[func_271(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1362461[func_271(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362467[func_271(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362473[func_271(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1362479[func_271(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524258[0 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524258[1 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524258[2 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524258[3 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524258[4 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524298[0 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524298[1 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524298[2 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524298[3 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524298[4 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524314[0 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524314[1 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524314[2 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524314[3 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524314[4 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524258[5 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524224[4 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524330[func_271(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524339[func_271(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524333[func_271(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524342[func_271(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524336[func_271(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524345[func_271(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524348[func_271(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524258[6 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524224[5 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524258[7 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524224[6 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524258[8 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524224[7 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524258[9 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524224[8 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524258[10 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524224[9 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524258[11 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524224[10 /*3*/][func_271(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_268(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_269(iParam0, 0);
}

int func_269(int iParam0, int iParam1)
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
		if (Global_279816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_279816[iVar3] < iParam0)
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

int func_270(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_2433082.f_1, iParam0);
	}
	return 1;
}

int func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_189();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

int func_272(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return Global_1362449[func_271(-1)];
			}
			else if (func_270(iParam0))
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_1;
			}
		}
	}
	else
	{
		return Global_1362449[func_271(-1)];
	}
	return 0;
}

void func_273(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_275(iParam0, func_271(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_274(iParam0))
	{
		func_266(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_267(iParam0, iVar0, iParam2, 1);
	}
}

int func_274(int iParam0)
{
	if (Global_1362328)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
				return 1;
				break;
			}
	}
	return 0;
}

int func_275(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_271(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		iVar4 = unk_0x1C2C3C236D3FE99A(iVar0);
		if (unk_0x28E01BEA13B73DF2(iVar4))
		{
			iVar5 = unk_0x28B48C55342F6368(iVar4);
			if (unk_0x2A7336F1C6B39623(iVar5) != -1)
			{
				if (unk_0x2A7336F1C6B39623(iVar5) == iVar1 || func_128(unk_0x2A7336F1C6B39623(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xFB6B3EEFAB2DD12C())
					{
						if (func_127(unk_0xFB6B3EEFAB2DD12C(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_277(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_277(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_277(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_278(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x11B9E7FF50B2F4CC())
		{
			iVar3 = iVar0;
			if (unk_0x28E01BEA13B73DF2(iVar3))
			{
				iVar4 = unk_0x28B48C55342F6368(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
					{
						iVar1++;
						if (func_127(unk_0xFB6B3EEFAB2DD12C(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
				{
					if (func_279(unk_0xFB6B3EEFAB2DD12C(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_127(unk_0xFB6B3EEFAB2DD12C(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_277(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_277(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_279(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_280(int iParam0)
{
	int iVar0;
	
	if (unk_0xBC409772C72D8108() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_277(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_281(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xC6C425A326326DEF(iParam0) > func_272(unk_0xFB6B3EEFAB2DD12C()))
		{
			iParam0 = -func_272(unk_0xFB6B3EEFAB2DD12C());
		}
	}
	if (func_282(8000, 0, 0) > 0)
	{
		if (func_282(8000, 0, 0) < (iParam0 + func_272(unk_0xFB6B3EEFAB2DD12C())))
		{
			iParam0 = (func_282(8000, 0, 0) - func_272(unk_0xFB6B3EEFAB2DD12C()));
		}
	}
	return iParam0;
}

int func_282(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_279816[iParam0];
}

int func_283()
{
	return 1;
}

int func_284(var uParam0)
{
	if (unk_0x1C079483C9D16F36(uParam0))
	{
		return 1;
	}
	else if (unk_0xCC257DA11A122B5F(uParam0, "") || unk_0xCC257DA11A122B5F(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_285(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

bool func_286(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

void func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	
	StringCopy(&Var0, func_298(iParam1), 16);
	StringCopy(&Var4, func_297(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar8 = 1287308202;
			break;
		
		case 1:
			iVar8 = 691372038;
			break;
		
		case 2:
			iVar8 = 1480707108;
			break;
		
		case 3:
			iVar8 = 1512499951;
			break;
		
		case 4:
			iVar8 = 562283735;
			break;
		
		case 5:
			iVar8 = -154732333;
			break;
		
		case 6:
			iVar8 = -1362660491;
			break;
		
		case 7:
			iVar8 = 645708827;
			break;
		
		case 8:
			iVar8 = 767907967;
			break;
		
		case 9:
			iVar8 = -1970151306;
			break;
		
		case 10:
			iVar8 = 718859568;
			break;
		
		case 11:
			iVar8 = -1955564771;
			break;
		
		case 12:
			iVar8 = 892388724;
			break;
		
		case 13:
			iVar8 = -1426920838;
			break;
	}
	if (func_45())
	{
		func_288(iVar8, iParam0, &iVar9, bParam3, bParam3, 0);
		Global_2590199[iVar9 /*76*/].f_8.f_43 = { Var0 };
		Global_2590199[iVar9 /*76*/].f_8.f_47 = { Var4 };
	}
	else
	{
		unk_0x0D3EB854436C5E3F(iParam0, &Var0, &Var4, bParam3);
	}
}

void func_288(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_45())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
			if (iParam1 > 0)
			{
				func_289(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
			func_289(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_289(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_45())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x92433FA8528BEA6E(func_189()) || unk_0x65C1BCEE262A67BB())
		{
			Global_2590709 = 1;
			return 0;
		}
		if (Global_2453631)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590710 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590199[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0x11B1CD473C92A76D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x12D2D3CC0C448A8D(iVar3))
		{
			*uParam0 = func_296(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2590199[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590699 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590708 = 1;
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_295(1, iParam4);
			Global_2590708 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_290(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_290(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_125.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_291(iParam0);
	}
}

void func_291(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_45())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_294(iParam0))
		{
			if (!bVar0)
			{
				unk_0x0236A1291D69648C();
			}
		}
		else if (!bVar0)
		{
			unk_0xC388F8C52EDE8188(Global_2590199[iParam0 /*76*/]);
		}
		func_292(&(Global_2590199[iParam0 /*76*/]));
	}
}

void func_292(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_293(&(uParam0->f_8.f_3));
	func_293(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_293(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_294(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_295(int iParam0, var uParam1)
{
	Global_2454792 = uParam1;
	Global_2454791 = iParam0;
}

int func_296(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590199[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_45())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590199[iVar0 /*76*/].f_2 = 1;
			Global_2590199[iVar0 /*76*/].f_1 = uParam5;
			Global_2590199[iVar0 /*76*/].f_3 = uParam1;
			Global_2590199[iVar0 /*76*/].f_4 = uParam2;
			Global_2590199[iVar0 /*76*/].f_7 = uParam3;
			Global_2590199[iVar0 /*76*/].f_5 = 0;
			Global_2590199[iVar0 /*76*/] = iParam0;
			Global_2590199[iVar0 /*76*/].f_6 = iParam4;
			Global_2590199[iVar0 /*76*/].f_72 = uParam8;
			Global_2590199[iVar0 /*76*/].f_71 = uParam7;
			Global_2590199[iVar0 /*76*/].f_75 = 0;
			Global_2590699 = 0;
			if (bParam6)
			{
				Global_2590199[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_297(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_298(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		default:
	}
	return "DEFAULT";
}

void func_299(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_4 = iVar1;
	Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_3 = (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_300(iVar1, 0);
	}
}

void func_300(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_301(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_303(iParam0) >= 0)
	{
		iVar0 = func_303(iParam0);
	}
	else
	{
		iVar0 = func_302(iParam0);
	}
	return iVar0;
}

int func_302(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 1)
			{
				return 200;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 2)
			{
				return 400;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 3)
			{
				return 600;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 4)
			{
				return 800;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_5477;
			break;
		
		case 10:
			return Global_262145.f_4115;
			break;
		
		case 11:
			return Global_262145.f_4116;
			break;
		
		case 8:
			return Global_262145.f_4113;
			break;
		
		case 0:
			return Global_262145.f_4099;
			break;
		
		case 9:
			return Global_262145.f_4114;
			break;
		
		case 13:
			return Global_262145.f_4118;
			break;
		
		case 12:
			return Global_262145.f_4117;
			break;
		
		case 2:
			return Global_262145.f_4109;
			break;
		
		case 14:
			return Global_262145.f_4119;
			break;
		
		case 20:
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 1)
			{
				return Global_262145.f_5484;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 2)
			{
				return Global_262145.f_5485;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 3)
			{
				return Global_262145.f_5486;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 4)
			{
				return Global_262145.f_5487;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 5)
			{
				return Global_262145.f_5488;
			}
			break;
		
		case 6:
			return Global_262145.f_4112;
			break;
		
		case 22:
			return Global_262145.f_4125;
			break;
		
		case 23:
			return Global_262145.f_4126;
			break;
		
		case 24:
			return Global_262145.f_4127;
			break;
		
		case 25:
			return Global_262145.f_4128;
			break;
		
		case 26:
			return Global_262145.f_4129;
			break;
		
		case 35:
			return Global_262145.f_6053;
			break;
		
		case 15:
			return Global_262145.f_5478;
			break;
		
		case 17:
			return Global_262145.f_5478;
			break;
		
		case 18:
			return Global_262145.f_5478;
			break;
		
		case 19:
			return Global_262145.f_5478;
			break;
		
		case 21:
			return Global_262145.f_5478;
			break;
		
		case 36:
			return Global_262145.f_6518;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_11371;
			break;
		
		case 41:
			return Global_262145.f_11372;
			break;
		
		case 42:
			return Global_262145.f_11373;
			break;
		
		case 43:
			return Global_262145.f_13428;
			break;
		
		case 44:
			return Global_262145.f_13430;
			break;
	}
	return 0;
}

int func_304()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_91.f_50)
	{
		if (!Local_91.f_51)
		{
			if (!unk_0xF44A5E894FE76438(Local_91.f_3, 7))
			{
				func_305("HS_UNABLE", iLocal_314, 0, 0, 0, 1, 1, 0);
			}
		}
		return 1;
	}
	switch (iLocal_312)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_331(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_305(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x2A7336F1C6B39623(iParam1);
	if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		unk_0x053CD3063CA9436C(sParam0);
		if ((iVar1 != -1 && unk_0x8676DE83D4396C39()) && iVar1 < 4)
		{
			if (Global_1632166.f_82772[iVar1] != -1)
			{
				unk_0xF5640E619D8FCD5B(func_329(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xF5640E619D8FCD5B(func_313(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0xF5640E619D8FCD5B(func_313(iParam1, -2, 1, 0));
		}
		unk_0x4C51E4FBCD1D8830(func_311(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x84EF96E928190AB1(0, 1);
		}
		else
		{
			Global_2482005 = { func_126(iParam1) };
			if (unk_0xF6955213DB8BD7D3(&Global_2481935, 35, &Global_2482005))
			{
				iVar18 = 0;
				if (unk_0xCC257DA11A122B5F(&(Global_2481935.f_22), "Leader") && Global_2481935.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2481935.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_310(&Var2) };
					}
					iVar0 = unk_0x060621EC21C1275F(iVar19, unk_0xB06A4D583331C1FF(&Global_2481935, 35), &(Global_2481935.f_17), Global_2481935.f_30, iVar18, 0, Global_2481935, &Var2, Global_1316386, Global_1316387, Global_1316388);
				}
				else
				{
					iVar0 = unk_0x4CFEC8A87106E3F3(iVar19, unk_0xB06A4D583331C1FF(&Global_2481935, 35), &(Global_2481935.f_17), Global_2481935.f_30, iVar18, 0, Global_2481935, Global_1316386, Global_1316387, Global_1316388);
				}
			}
			else
			{
				iVar0 = unk_0x84EF96E928190AB1(0, 1);
			}
		}
		func_306(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_306(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_309() || !unk_0x8676DE83D4396C39()) || !func_187(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		return;
	}
	iVar0 = func_307(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1755985.f_5[iVar0 /*53*/] = iParam0;
		Global_1755985.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1755985.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1755985.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1755985.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1755985.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1755985.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_307(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1755985 - 1))
	{
		if (iParam0 > Global_1755985.f_5[iVar0 /*53*/].f_1)
		{
			func_308(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1755985++;
	if (Global_1755985 > 5)
	{
		Global_1755985 = 5;
		return Global_1755985;
	}
	return (Global_1755985 - 1);
}

void func_308(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1755985.f_5[iVar0 /*53*/] = { Global_1755985.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_309()
{
	return unk_0xF14C5BAFFF8F4CB7(-1762644250);
}

struct<16> func_310(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_311(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_312(&cVar0);
}

var func_312(char[4] cParam0)
{
	return cParam0;
}

int func_313(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_129(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1632166.f_82772[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_129(unk_0xFB6B3EEFAB2DD12C()) || (func_328() && func_327()))
	{
		uVar1 = func_326();
		if (unk_0x7887B64A08364778(uVar1))
		{
			if (unk_0xBEC34BF6B72C417A(iVar1))
			{
				if (unk_0x61263E0F7C8C9996(iVar1) != -1)
				{
					if (func_6(unk_0x61263E0F7C8C9996(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
						{
							if (Global_1632166.f_82772[iParam1] != -1)
							{
								return func_329(iParam1, iParam0, 0);
							}
							else
							{
								return func_320(iParam0, unk_0x61263E0F7C8C9996(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_320(iParam0, unk_0x61263E0F7C8C9996(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
			{
				if (Global_1632166.f_82772[iParam1] != -1)
				{
					return func_329(iParam1, iParam0, 0);
				}
				else
				{
					return func_314(0, -1, 0);
				}
			}
			else
			{
				return func_314(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
	{
		if (Global_1632166.f_82772[iParam1] != -1)
		{
			return func_329(iParam1, iParam0, 0);
		}
		else
		{
			return func_320(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
		}
	}
	return func_320(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
}

int func_314(bool bParam0, int iParam1, bool bParam2)
{
	return func_315(unk_0xFB6B3EEFAB2DD12C(), bParam0, iParam1, bParam2);
}

int func_315(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x1E0256D6F1052B31(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_128(iVar0, iParam2, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_319(1);
				}
				else
				{
					return func_319(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_4, 20))
			{
				return func_316(iVar0, iParam2, 1);
			}
			else
			{
				return func_316(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_319(1);
	}
	return func_319(0);
}

int func_316(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_318(iParam0, iParam1);
	if (func_317(Global_1632166.f_86360))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_317(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7770[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_318(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_128(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_319(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_320(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589933[iVar2 /*601*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_325())
			{
				iVar3 = func_324(iParam0);
				if (!iVar3 == -1)
				{
					return func_322(iVar3);
				}
			}
			if ((func_166(iParam1, iParam0, iVar0, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)) || ((func_128(unk_0x2A7336F1C6B39623(iParam1), unk_0x2A7336F1C6B39623(iParam0), 0) && unk_0xF44A5E894FE76438(Global_1632166.f_15, 23)) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)))
			{
				return func_319(1);
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 26))
			{
				return func_321(1);
			}
			else
			{
				return func_315(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574255 || Global_1574246) || Global_1589933[iParam0 /*601*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574255 == 1 && Global_1574265 == 0))
			{
				return func_319(1);
			}
			else
			{
				return func_315(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574250 && Global_1573825.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_324(iParam0);
	if (!iVar4 == -1)
	{
		return func_322(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_321(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_322(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_323(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_323(int iParam0)
{
	return Global_2415705.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_324(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_2415705.f_1946.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

bool func_325()
{
	return Global_2443089.f_12;
}

var func_326()
{
	return Global_2359301.f_2;
}

bool func_327()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 4);
}

bool func_328()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

int func_329(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_325())
	{
		iVar1 = func_324(iParam1);
		if (!iVar1 == -1)
		{
			return func_322(iVar1);
		}
	}
	if (Global_1632166.f_82772[iParam0] != -1 && Global_1632166.f_82772[iParam0] <= 4)
	{
		if (Global_1632166.f_82772[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1632166.f_82772[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1632166.f_82772[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1632166.f_82772[iParam0] == 4)
		{
			if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1632166.f_82772[iParam0];
		}
	}
	else
	{
		iVar0 = func_315(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xF44A5E894FE76438(Global_1632166.f_21, 13))
	{
		iVar0 = func_330(iParam0);
	}
	return iVar0;
}

int func_330(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1632166.f_105330;
			break;
		
		case 1:
			iVar0 = Global_1632166.f_105331;
			break;
		
		case 2:
			iVar0 = Global_1632166.f_105332;
			break;
		
		case 3:
			iVar0 = Global_1632166.f_105333;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_331(char* sParam0, char* sParam1, int iParam2)
{
	if (!unk_0xCC257DA11A122B5F(sParam0, "NULL"))
	{
		if (!unk_0xF44A5E894FE76438(iLocal_311, 0))
		{
			func_428(&uLocal_331, 3, 0, sParam1, 0, 1);
			if (func_333(&uLocal_331, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_311, 0);
			}
		}
		else if (!unk_0xF44A5E894FE76438(iLocal_311, 1))
		{
			if (func_332(0))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_311, 1);
			}
		}
		else if (!func_332(0))
		{
			iLocal_311 = 0;
			return 1;
		}
	}
	return 0;
}

int func_332(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_333(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_426())
	{
		return 0;
	}
	if (func_425())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_334(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_334(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC55B9553B3EDADE9(sParam2))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam3))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F());
	iVar1 = func_424(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xC55B9553B3EDADE9(iParam7))
	{
		iVar2 = unk_0x6D9FF4C899CD785F(iParam7);
	}
	if (func_423(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_418(iParam6))
	{
		return 0;
	}
	if (func_415(iVar0, iVar1, iVar2))
	{
		if (func_414())
		{
			return 0;
		}
		func_413();
		return func_341(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_340(iParam4))
	{
		return 0;
	}
	func_335(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_335(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1346465.f_40.f_1 = iParam0;
	Global_1346465.f_40.f_2 = iParam1;
	Global_1346465.f_40.f_3 = iParam2;
	StringCopy(&(Global_1346465.f_40.f_4), sParam3, 16);
	Global_1346465.f_40.f_8 = iParam4;
	Global_1346465.f_40.f_9 = iParam5;
	Global_1346465.f_40.f_14 = iParam6;
	func_336(iParam4);
	func_413();
	Global_1346465.f_40.f_13 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), 7000);
}

void func_336(int iParam0)
{
	if (func_339(iParam0))
	{
		func_338();
		return;
	}
	func_337();
}

void func_337()
{
	Global_1346465.f_40.f_10 = 0;
}

void func_338()
{
	Global_1346465.f_40.f_10 = 1;
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_340(int iParam0)
{
	return iParam0 > Global_1346465.f_40.f_8;
}

int func_341(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_412();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_409(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_406(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_409(uParam0, sParam3, sParam4);
		}
		return func_389(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_388(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_378(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_377(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_342(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_342(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_376();
	bVar0 = true;
	if (func_344(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_343(120000);
		return 1;
	}
	return 0;
}

void func_343(int iParam0)
{
	Global_1346465.f_40.f_11 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), iParam0);
	Global_1346465.f_40.f_12 = 1;
}

int func_344(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x7746E8ACE891BFA4(iVar0);
		iVar1 = func_370(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8D6C526020C84E23(unk_0x7414B386C0020BEC(), Global_1346465.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_369(uParam5, bParam6, &iVar3);
	uVar5 = func_367(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		iVar6++;
		if (!unk_0xC55B9553B3EDADE9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xCC257DA11A122B5F(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xF44A5E894FE76438(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xF44A5E894FE76438(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xC55B9553B3EDADE9(sVar2))
	{
		bVar12 = func_366(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_348(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(iParam4, 0))
	{
		func_347();
	}
	func_376();
	func_346();
	func_345();
	return 1;
}

void func_345()
{
	Global_1346465.f_57 = 0;
	Global_1346465.f_57.f_1 = 0;
}

void func_346()
{
	Global_1346465.f_40 = 3;
}

void func_347()
{
	unk_0xB8A73E7DA87B2968(&Global_2313, 8);
}

int func_348(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_349(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0xB8A73E7DA87B2968(&Global_2595258, 0);
		}
		return 1;
	}
	return 0;
}

int func_349(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCC257DA11A122B5F(sParam14, sParam15))
	{
	}
	func_360();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (unk_0x2C278D8A0121A8DE(unk_0xD5A676B97920D126()))
			{
				return 0;
			}
		}
		if (Global_2595243 == 1)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_359() == 0)
	{
		func_357();
		return 0;
	}
	func_356(Global_2595242);
	StringCopy(&(Global_2593993[Global_2595242 /*104*/]), sParam1, 64);
	Global_2593993[Global_2595242 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2593993[Global_2595242 /*104*/].f_24 = iParam2;
	}
	Global_2593993[Global_2595242 /*104*/].f_25 = iParam7;
	Global_2593993[Global_2595242 /*104*/].f_26 = uParam8;
	Global_2593993[Global_2595242 /*104*/].f_29 = uParam9;
	Global_2593993[Global_2595242 /*104*/].f_30 = uParam12;
	Global_2593993[Global_2595242 /*104*/].f_31 = uParam11;
	Global_2593993[Global_2595242 /*104*/].f_28 = 0;
	Global_2593993[Global_2595242 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_33), sParam4, 64);
	Global_2593993[Global_2595242 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_50), sParam5, 64);
	Global_2593993[Global_2595242 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_83), sParam15, 64);
	func_360();
	switch (iParam16)
	{
		case 3:
			Global_2593993[Global_2595242 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2593993[Global_2595242 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2593993[Global_2595242 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2593993[Global_2595242 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_355(0);
				break;
			
			case 1:
				func_355(1);
				break;
			
			case 2:
				func_355(2);
				break;
			
			case 3:
				func_355(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2595243 = 1;
				break;
			
			case 0:
				Global_2595243 = 1;
				break;
			
			case 2:
				Global_2595243 = 1;
				break;
			
			case 1:
				Global_2595243 = 1;
				break;
			}
	}
	Global_16814[Global_2595242] = 0;
	if (bParam10)
	{
		func_360();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_354())
			{
				unk_0xA93E75A5493862BD(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_353(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_350(1);
			func_353(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_350(int iParam0)
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
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_249(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_352(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar2);
								unk_0xBBAAC5B2437ACF2A();
							}
							if (Global_2452475)
							{
								if (iVar1 == 14)
								{
									func_351(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101652.f_13084[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101652.f_13084[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101652.f_13084[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_351(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69697)
								{
									iVar4 = 0;
									iVar4 = Global_2593992;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2593993[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2593993[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2593993[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_351(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36913;
											break;
										
										case 1:
											iVar6 = Global_36914;
											break;
										
										case 2:
											iVar6 = Global_36915;
											break;
										
										default:
											break;
									}
									func_351(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_351(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_352(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(Global_2319);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_352(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar7);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_352(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar8);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 8)
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_352(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if ((iVar1 == 23 && unk_0xCC257DA11A122B5F(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xF44A5E894FE76438(Global_2314, 6))
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_352(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1616829.f_1;
								func_351(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_351(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_351(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xC55B9553B3EDADE9(sParam7))
	{
		func_352(sParam7);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		func_352(sParam8);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam9))
	{
		func_352(sParam9);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam10))
	{
		func_352(sParam10);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam11))
	{
		func_352(sParam11);
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_352(char* sParam0)
{
	unk_0x0BBDB952BE56A9DF(sParam0);
	unk_0xCB329F559FA7DCD0();
}

void func_353(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBBAAC5B2437ACF2A();
}

bool func_354()
{
	return Global_1315229;
}

void func_355(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101652.f_12994[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_356(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xABA05E2C283C3D5F();
	uVar1 = unk_0xF72CA3D5BA977203();
	uVar2 = unk_0x83D6515EE2CBF18C();
	uVar3 = unk_0x3D13C79BF80EB767();
	uVar4 = unk_0xA93FEF8677A8AF58() + 1;
	uVar5 = unk_0xAC9128C6933DA69B();
	Global_2593993[iParam0 /*104*/].f_18 = uVar0;
	Global_2593993[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2593993[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2593993[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2593993[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2593993[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_357()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2595242 = 11;
	Global_2593993[Global_2595242 /*104*/].f_18 = -1;
	Global_2593993[Global_2595242 /*104*/].f_18.f_1 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_2 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_3 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_358(Global_2593993[iVar2 /*104*/].f_18, Global_2593993[Global_2595242 /*104*/].f_18))
		{
			Global_2595242 = iVar2;
		}
		iVar2++;
	}
	Global_2593993[Global_2595242 /*104*/].f_24 = 1;
}

int func_358(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_359()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2593993[iVar2 /*104*/].f_24 == 0)
		{
			Global_2595242 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2595242 = 11;
	Global_2593993[Global_2595242 /*104*/].f_18 = -1;
	Global_2593993[Global_2595242 /*104*/].f_18.f_1 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_2 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_3 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2593993[iVar2 /*104*/].f_24 == 0 || Global_2593993[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_358(Global_2593993[iVar2 /*104*/].f_18, Global_2593993[Global_2595242 /*104*/].f_18))
			{
				Global_2595242 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2595242 == 11)
	{
		return 0;
	}
	Global_2593993[Global_2595242 /*104*/].f_99[0] = 0;
	Global_2593993[Global_2595242 /*104*/].f_99[1] = 0;
	Global_2593993[Global_2595242 /*104*/].f_99[2] = 0;
	return 1;
}

void func_360()
{
	if (func_249(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		Global_14443 = func_361();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_361()
{
	func_362();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_362()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_365(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_364(unk_0xD5A676B97920D126());
			if (func_363(iVar0) && (!func_249(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_363(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_363(int iParam0)
{
	return iParam0 < 3;
}

int func_364(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_365(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_365(int iParam0)
{
	if (func_363(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_366(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_349(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0xB8A73E7DA87B2968(&Global_2595258, 0);
		}
		return 1;
	}
	return 0;
}

int func_367(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_368(2, iParam1);
	return iParam0;
}

void func_368(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_369(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xC55B9553B3EDADE9(uParam0))
	{
		return sLocal_20;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_368(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xBC2999B1C8F62EDD(sParam0);
}

int func_370(int iParam0)
{
	int iVar0;
	
	iVar0 = func_373(iParam0);
	if (iVar0 == -1)
	{
		func_371(iParam0, 1);
		return 0;
	}
	Global_1363247[iVar0 /*5*/].f_4 = 1;
	return Global_1363247[iVar0 /*5*/].f_2;
}

void func_371(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_373(iParam0) != -1)
	{
		return;
	}
	if (Global_1363410)
	{
		if (iParam0 == Global_1363410.f_1)
		{
			return;
		}
	}
	if (func_372(iParam0))
	{
		return;
	}
	if (Global_1363448 >= 32)
	{
		return;
	}
	Global_1363415[Global_1363448] = iParam0;
	Global_1363448++;
	if (bParam1)
	{
	}
}

int func_372(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363448)
	{
		if (Global_1363415[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_373(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1363408 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363408)
	{
		if (Global_1363247[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x23723A703C39388B(Global_1363247[iVar0 /*5*/].f_2) && unk_0x4636FE7BA67FB26C(Global_1363247[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_374(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_374(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1363408)
	{
		return;
	}
	if (unk_0x23723A703C39388B(Global_1363247[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1363247[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x48C5A96AE7C462A4(Global_1363247[iParam0 /*5*/].f_2), 64);
			unk_0x776A0FA6BC6101E2(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB8129A62F0984659(Global_1363247[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1363408)
	{
		Global_1363247[iVar32 /*5*/] = { Global_1363247[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_375(&(Global_1363247[iVar32 /*5*/]));
	Global_1363408 = (Global_1363408 - 1);
}

void func_375(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1995B52453EF6537())
	{
		uParam0->f_3 = unk_0x7414B386C0020BEC();
	}
}

void func_376()
{
	Global_1346465.f_40.f_9 = 4;
}

int func_377(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_376();
	bVar0 = false;
	return func_344(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_378(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_379(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_379(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x7746E8ACE891BFA4(iVar0);
		iVar1 = func_370(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8D6C526020C84E23(unk_0x7414B386C0020BEC(), Global_1346465.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16806 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_369(uParam5, bParam6, &iVar3);
	uVar5 = func_367(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		iVar6++;
		if (!unk_0xC55B9553B3EDADE9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xCC257DA11A122B5F(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xF44A5E894FE76438(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xF44A5E894FE76438(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xC55B9553B3EDADE9(sVar2))
	{
		bVar12 = func_387(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_381(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(iParam4, 0))
	{
		func_347();
	}
	func_380();
	func_346();
	func_345();
	return 1;
}

void func_380()
{
	Global_1346465.f_40.f_9 = 3;
}

int func_381(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x4EA098C870B73AB7(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_382(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xB8A73E7DA87B2968(&Global_2313, 1);
			unk_0xB8A73E7DA87B2968(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_382(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCC257DA11A122B5F(sParam14, sParam15))
	{
	}
	func_360();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (unk_0x2C278D8A0121A8DE(unk_0xD5A676B97920D126()))
			{
				return 0;
			}
		}
		if (Global_101652.f_12994[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_386() == 0)
	{
		func_384();
		return 0;
	}
	func_383(Global_16812);
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/]), sParam1, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101652.f_13084[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_25 = iParam7;
	Global_101652.f_13084[Global_16812 /*104*/].f_26 = uParam8;
	Global_101652.f_13084[Global_16812 /*104*/].f_29 = uParam9;
	Global_101652.f_13084[Global_16812 /*104*/].f_30 = uParam12;
	Global_101652.f_13084[Global_16812 /*104*/].f_31 = uParam11;
	Global_101652.f_13084[Global_16812 /*104*/].f_28 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0xF44A5E894FE76438(Global_2313, 10))
	{
		Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 1;
		Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 1;
		Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_355(0);
		func_355(2);
		func_355(1);
	}
	else
	{
		func_360();
		switch (iParam16)
		{
			case 3:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_355(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_355(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_355(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_355(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xF44A5E894FE76438(Global_2313, 10))
		{
			Global_101652.f_12994[0 /*20*/].f_17 = 1;
			Global_101652.f_12994[1 /*20*/].f_17 = 1;
			Global_101652.f_12994[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101652.f_12994[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101652.f_12994[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101652.f_12994[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101652.f_12994[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_360();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_354())
			{
				unk_0xA93E75A5493862BD(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_353(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_350(1);
			func_353(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_383(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xABA05E2C283C3D5F();
	uVar1 = unk_0xF72CA3D5BA977203();
	uVar2 = unk_0x83D6515EE2CBF18C();
	uVar3 = unk_0x3D13C79BF80EB767();
	uVar4 = unk_0xA93FEF8677A8AF58() + 1;
	uVar5 = unk_0xAC9128C6933DA69B();
	Global_101652.f_13084[iParam0 /*104*/].f_18 = uVar0;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_384()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101652.f_13084[Global_16812 /*104*/].f_18 = -1;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_385(Global_101652.f_13084[iVar2 /*104*/].f_18, Global_101652.f_13084[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_24 = 1;
}

int func_385(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_386()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101652.f_13084[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101652.f_13084[Global_16812 /*104*/].f_18 = -1;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101652.f_13084[iVar2 /*104*/].f_24 == 0 || Global_101652.f_13084[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_385(Global_101652.f_13084[iVar2 /*104*/].f_18, Global_101652.f_13084[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

int func_387(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x4EA098C870B73AB7(&Global_2313, 10);
	iVar0 = 3;
	if (func_382(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0xB8A73E7DA87B2968(&Global_2313, 1);
			unk_0xB8A73E7DA87B2968(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_388(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
	}
	if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
	{
		return 0;
	}
	func_380();
	bVar0 = true;
	if (func_379(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_343(120000);
		return 1;
	}
	return 0;
}

int func_389(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xF44A5E894FE76438(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xF44A5E894FE76438(iParam4, 4))
	{
		bVar0 = func_405(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_395(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xF44A5E894FE76438(iParam4, 3))
		{
			func_394(1);
		}
		if (unk_0xF44A5E894FE76438(iParam4, 5))
		{
			func_393(1);
		}
		func_392();
		func_346();
		func_391();
		func_390();
		return 1;
	}
	return 0;
}

void func_390()
{
	Global_2501918 = 0;
}

void func_391()
{
	Global_1346465.f_57 = 1;
	Global_1346465.f_57.f_1 = 0;
}

void func_392()
{
	Global_1346465.f_40.f_9 = 1;
}

void func_393(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2315, 0);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2315, 0);
	}
}

void func_394(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 20);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 20);
	}
}

int func_395(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_404(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_396(sParam3, iParam4, bParam7);
}

int func_396(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x73998CD31AEFA620(0);
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
					func_403();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_402(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_401();
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
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_360();
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
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_400())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
				}
			}
			if (func_399())
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_398();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_397();
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
		func_403();
	}
	return 0;
}

void func_397()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_398()
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
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_399()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_400()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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

void func_401()
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

bool func_402(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_403()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_404(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
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

int func_405(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_404(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 1;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_396(sParam3, iParam4, bParam7);
}

int func_406(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
	}
	if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
	{
		return 0;
	}
	if (func_408(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_407();
		func_392();
		func_346();
		func_391();
		func_390();
		return 1;
	}
	return 0;
}

void func_407()
{
	Global_16763 = 0;
}

bool func_408(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_404(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 1;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 1;
	Global_15799 = 0;
	StringCopy(&Global_15893, sParam5, 24);
	Global_2621441 = 0;
	return func_396(sParam3, iParam4, bParam8);
}

int func_409(var uParam0, char* sParam1, char* sParam2)
{
	if (func_411(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_410();
		func_346();
		func_391();
		return 1;
	}
	return 0;
}

void func_410()
{
	Global_1346465.f_40.f_9 = 2;
}

bool func_411(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_404(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_396(sParam2, iParam3, 0);
}

void func_412()
{
	Global_1346465.f_55 = Global_1346465.f_40.f_1;
	Global_1346465.f_55.f_1 = Global_1346465.f_40.f_10;
}

void func_413()
{
	Global_1346465.f_40 = 1;
}

bool func_414()
{
	return Global_1346465.f_40 == 1;
}

int func_415(int iParam0, int iParam1, int iParam2)
{
	if (!func_416(iParam0))
	{
		return 0;
	}
	if (Global_1346465.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1346465.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_416(int iParam0)
{
	if (!func_417())
	{
		return 0;
	}
	if (!Global_1346465.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_417()
{
	if (Global_1346465.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_418(int iParam0)
{
	if (func_422())
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	if (func_332(0))
	{
		return 0;
	}
	if (Global_1312462.f_18 != 0)
	{
		return 0;
	}
	if (Global_1747153 || func_420())
	{
		return 0;
	}
	if (!unk_0xF44A5E894FE76438(iParam0, 6))
	{
		if (func_419())
		{
			return 0;
		}
	}
	return 1;
}

bool func_419()
{
	return unk_0x8D6C526020C84E23(unk_0x7414B386C0020BEC(), Global_1362144);
}

int func_420()
{
	if (Global_2583825.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_421()
{
	return Global_1346465.f_40 == 3;
}

bool func_422()
{
	return func_399();
}

int func_423(int iParam0, int iParam1, int iParam2)
{
	if (!func_421())
	{
		return 0;
	}
	return func_415(iParam0, iParam1, iParam2);
}

int func_424(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x6D9FF4C899CD785F(&cVar0);
}

bool func_425()
{
	return Global_2499487.f_1;
}

int func_426()
{
	if (Global_1346653.f_2)
	{
		return 1;
	}
	return func_427();
}

bool func_427()
{
	return func_422();
}

void func_428(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

int func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_430(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_431(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x04DE35D10A718EEF())
		{
			func_432(uParam0, 0, 0);
		}
	}
}

void func_432(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1995B52453EF6537() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
			}
			else
			{
				*uParam0 = unk_0x8D8F7D01F0EB4218();
			}
		}
		else
		{
			*uParam0 = unk_0x84A97C70FFDEC0C8();
		}
		uParam0->f_1 = 1;
	}
}

void func_433()
{
	if (unk_0x1B982A8B37108B3C(Local_91.f_10[iLocal_322 /*7*/]) && !unk_0xB529B2A4B7C64D6D(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iLocal_322 /*7*/]), 0))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (func_5(unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iLocal_322 /*7*/]), 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 50625f))
			{
				if (!unk_0xF44A5E894FE76438(iLocal_306, 4))
				{
					unk_0xB8A73E7DA87B2968(&iLocal_306, 4);
				}
			}
			else if (!unk_0xF44A5E894FE76438(iLocal_306, 5))
			{
				if (Local_91.f_42 != -1)
				{
					if (iLocal_322 == Local_91.f_42)
					{
						if (!unk_0xF44A5E894FE76438(iLocal_306, 5))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_306, 5);
						}
					}
				}
			}
		}
	}
	func_434(iLocal_322);
	iLocal_322++;
	if (iLocal_322 >= func_429(iLocal_312))
	{
		if ((!unk_0xF44A5E894FE76438(iLocal_306, 4) && unk_0xF44A5E894FE76438(Local_91.f_1, 8)) || unk_0xF44A5E894FE76438(iLocal_306, 5))
		{
			if (!unk_0xF44A5E894FE76438(Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_1, 1))
			{
				unk_0xB8A73E7DA87B2968(&(Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_1), 1);
			}
		}
		else if (unk_0xF44A5E894FE76438(Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_1, 1))
		{
			unk_0x4EA098C870B73AB7(&(Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_1), 1);
		}
		unk_0x4EA098C870B73AB7(&iLocal_306, 4);
		unk_0x4EA098C870B73AB7(&iLocal_306, 5);
		iLocal_322 = 0;
	}
}

void func_434(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar6;
	float fVar7;
	int iVar8;
	var uVar9;
	int iVar10;
	
	iVar2 = 0;
	Var3 = { 0f, 0f, 0f };
	bVar6 = false;
	if (unk_0xF6A32456BABBBA74(Local_91.f_10[iParam0 /*7*/]))
	{
		iVar0 = unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]);
		if (iLocal_312 == 0)
		{
			if (unk_0xFB6B3EEFAB2DD12C() == iLocal_314)
			{
				if (Local_91.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_91.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar6 = true;
					}
				}
			}
		}
		if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
		{
			if (unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!unk_0xF44A5E894FE76438(iLocal_307[iParam0], 0))
				{
					unk_0xB8A73E7DA87B2968(&Global_1573328, 0);
					unk_0xB8A73E7DA87B2968(&(iLocal_307[iParam0]), 0);
				}
				if (!unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!unk_0xF44A5E894FE76438(iLocal_307[iParam0], 1))
					{
						bVar6 = true;
					}
				}
				else if (unk_0xF44A5E894FE76438(iLocal_307[iParam0], 1))
				{
					unk_0x4EA098C870B73AB7(&(iLocal_307[iParam0]), 1);
				}
			}
		}
		if (bVar6)
		{
			if (unk_0xF6A32456BABBBA74(Local_91.f_10[iParam0 /*7*/]))
			{
				if (!unk_0x50CED8EEAE806923(Local_91.f_10[iParam0 /*7*/]))
				{
					unk_0x370543697500755D(Local_91.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (unk_0x50CED8EEAE806923(Local_91.f_10[iParam0 /*7*/]))
		{
			if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
			{
				if (!unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 9) && !unk_0xF44A5E894FE76438(iLocal_307[iParam0], 1))
				{
					if (unk_0xC927D00F655F9C56(iVar0, unk_0xFB6B3EEFAB2DD12C()))
					{
						switch (Local_91.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_457(iVar0, 3);
								break;
						}
						unk_0xB8A73E7DA87B2968(&(iLocal_307[iParam0]), 1);
					}
				}
			}
			if (!unk_0xB529B2A4B7C64D6D(iVar0, 0) && !unk_0x00B5B0B68211D89B(iVar0))
			{
				switch (Local_91.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						unk_0x12A60388636C9B1C(iVar0, 187, 1);
						if (Local_91.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 3))
								{
									unk_0x85BCF4B837BF4F8E(iVar0, 3f);
									unk_0x5457695C257D1470(iVar0, 1);
									unk_0x237B0CFB6EEBD3BA(iVar0, 118, 0);
								}
							}
						}
						if (unk_0xFB6B3EEFAB2DD12C() == iLocal_314 && func_5(unk_0xC086F8D75730FA3A(iVar0, 1), unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iLocal_314), 1), 25f))
						{
							unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4447), 0);
						}
						else
						{
							unk_0x4EA098C870B73AB7(&(Global_2494149.f_4447), 0);
						}
						if (!unk_0xFCDC1684830866E8(iVar0))
						{
							if (!unk_0xC91B31A2E0FAA26B(iVar0, 29))
							{
								if (func_6(iLocal_314, 1, 1))
								{
									if (!unk_0xF44A5E894FE76438(Local_91.f_2, 13))
									{
										if (func_456(iLocal_314) && !unk_0xA077598B268852A5(unk_0x4572B13EE70C8F52(iLocal_314)))
										{
											if (!func_455(iVar0, -1794415470))
											{
												if (func_454(iVar0))
												{
													uVar1 = unk_0x0DBD8FE531FD620D(unk_0x4572B13EE70C8F52(iLocal_314), 0);
													if (unk_0x7887B64A08364778(uVar1))
													{
														if (unk_0xA4DB44DF73EF4FE5(iVar1, 0))
														{
														}
														if (!unk_0x2518095D09270DDA(iVar1, func_453(unk_0x4572B13EE70C8F52(iLocal_314), 0)))
														{
															unk_0x87D70F1F81DB77D3(iVar0, iVar1, -1, func_452(unk_0x4572B13EE70C8F52(iLocal_314), iVar1), func_451(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(unk_0x3DFB3BFF04D48E00(iVar0) && unk_0x18C9C558C3B63E96(iVar0) == unk_0x4572B13EE70C8F52(iLocal_314)) && !unk_0x6A0583ECFCCECC9B(iVar0, 1))
										{
											if (func_455(iVar0, -1794415470))
											{
												unk_0x37338B7B7C4982DC(iVar0);
											}
											if (!func_455(iVar0, 1227113341))
											{
												if (func_454(iVar0))
												{
													unk_0xCB0FCE80F8D19186(iVar0, unk_0x4572B13EE70C8F52(iLocal_314), -1, 0f, func_451(iParam0), 1073741824, 0);
												}
											}
											else
											{
												unk_0x12A60388636C9B1C(iVar0, 151, 1);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xFB6B3EEFAB2DD12C() == iLocal_314 && func_5(unk_0xC086F8D75730FA3A(iVar0, 1), unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iLocal_314), 1), 25f))
						{
							unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4447), 0);
						}
						else
						{
							unk_0x4EA098C870B73AB7(&(Global_2494149.f_4447), 0);
						}
						if (unk_0xFB6B3EEFAB2DD12C() == iLocal_314)
						{
							if (!unk_0xF44A5E894FE76438(Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_1, 0))
							{
								if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
								{
									if ((func_4(unk_0xC086F8D75730FA3A(iVar0, 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1)) && (unk_0x1A77C0702D82B43D(unk_0xD5A676B97920D126()) || unk_0xA077598B268852A5(unk_0xD5A676B97920D126()))) || (unk_0x3DFB3BFF04D48E00(iVar0) && unk_0x18C9C558C3B63E96(iVar0) == unk_0xD5A676B97920D126()))
									{
										iVar2 = func_449(unk_0xFB6B3EEFAB2DD12C());
										fVar7 = (unk_0xBBDA792448DB5A89(Global_262145.f_5482) / 100f);
										iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) * fVar7));
										iVar8 = func_448(unk_0xFB6B3EEFAB2DD12C());
										if (iVar8 > 100)
										{
											iVar8 = 100;
										}
										if (iVar2 > (iVar8 * Global_262145.f_5483))
										{
											iVar2 = (iVar8 * Global_262145.f_5483);
										}
										if (iVar2 > 0)
										{
											unk_0xB8A73E7DA87B2968(&iLocal_306, 16);
										}
										unk_0x43110EF0A4CCD13F(unk_0xD5A676B97920D126(), 5000, 10000, 4);
										if (!(unk_0x3DFB3BFF04D48E00(iVar0) && unk_0x18C9C558C3B63E96(iVar0) == unk_0x4572B13EE70C8F52(iLocal_314)))
										{
											Var3 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) - unk_0xC086F8D75730FA3A(iVar0, 1) };
											Var3 = { func_447(Var3) };
											Var3.f_0 = (Var3.f_0 * 3f);
											Var3.f_1 = (Var3.f_1 * 3f);
											Var3.f_2 = (Var3.f_2 * 3f);
											unk_0x7581D609F8258B0C(unk_0xD5A676B97920D126(), 1, Var3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										unk_0x738326127C161284(iVar0, 512, 0);
										unk_0x77E24C0B92B4FC24(iVar0, 17, 1);
										if (((unk_0x6A0583ECFCCECC9B(iVar0, 1) || unk_0x3DFB3BFF04D48E00(iVar0)) && func_445(iVar0)) && func_453(iVar0, 0) == -1)
										{
											unk_0x738326127C161284(iVar0, 2, 1);
											unk_0x77E24C0B92B4FC24(iVar0, 3, 0);
											unk_0x77E24C0B92B4FC24(iVar0, 6, 1);
										}
										else
										{
											unk_0x37338B7B7C4982DC(iVar0);
											unk_0xBB8F1D58B7578137(iVar0, unk_0xD5A676B97920D126(), 10000f, -1, 1, 0);
										}
										Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_2 = -1;
										}
										unk_0x417BCC1ECC12E9A2(iVar0, Global_1574688);
										unk_0xB8A73E7DA87B2968(&(Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_1), 0);
										unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4447), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x2589E528D582492D(iVar0, 187))
						{
							unk_0x12A60388636C9B1C(iVar0, 187, 0);
						}
						if (Local_91.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 4))
							{
								unk_0x5457695C257D1470(iVar0, 0);
								unk_0x237B0CFB6EEBD3BA(iVar0, 118, 1);
							}
						}
						if (!(unk_0x3DFB3BFF04D48E00(iVar0) && unk_0x18C9C558C3B63E96(iVar0) == unk_0x4572B13EE70C8F52(iLocal_314)))
						{
							if (!unk_0xFCDC1684830866E8(iVar0))
							{
								if (func_454(iVar0))
								{
									if ((unk_0x6A0583ECFCCECC9B(iVar0, 1) || unk_0x3DFB3BFF04D48E00(iVar0)) && !unk_0xF44A5E894FE76438(Local_91.f_2, 10))
									{
										if (!func_455(iVar0, -258271821) && !func_455(iVar0, -1273030092))
										{
											if (unk_0x81C4995860081BC3(iVar0))
											{
												uVar9 = unk_0x0DBD8FE531FD620D(iVar0, 1);
												iVar10 = unk_0xA0A4DA31DEDFAC4F(uVar9);
												if (unk_0xF44A5E894FE76438(Local_91.f_2, 13))
												{
													unk_0x77E24C0B92B4FC24(iVar0, 17, 1);
													unk_0x77E24C0B92B4FC24(iVar0, 6, 0);
													unk_0x77E24C0B92B4FC24(iVar0, 1, 0);
												}
												else if (unk_0x4B09D3321F53E524(iVar10))
												{
													unk_0x03B9FE5FECB7D9B3(iVar0, iVar9, 0, unk_0xD5A676B97920D126(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1082130432, 0);
												}
												else if (unk_0x825416FB822BF706(iVar10))
												{
													unk_0x9380465A430F399B(iVar0, iVar9, 0, unk_0xD5A676B97920D126(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80);
												}
												else if (unk_0xA0A4DA31DEDFAC4F(iVar9) == joaat("taxi"))
												{
													unk_0x738326127C161284(iVar0, 2, 0);
													unk_0x77E24C0B92B4FC24(iVar0, 3, 1);
													unk_0x77E24C0B92B4FC24(iVar0, 6, 0);
													unk_0xBB8F1D58B7578137(iVar0, unk_0x4572B13EE70C8F52(iLocal_314), 10000f, -1, 1, 0);
												}
												else
												{
													unk_0xB192238F4F854097(iVar0, unk_0x0DBD8FE531FD620D(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_455(iVar0, 1805844857))
									{
										if (func_6(iLocal_314, 1, 1))
										{
											unk_0xBB8F1D58B7578137(iVar0, unk_0x4572B13EE70C8F52(iLocal_314), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_443(Local_91.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (unk_0xF44A5E894FE76438(Local_91.f_2, 13))
				{
					unk_0x37338B7B7C4982DC(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]));
					unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 17, 1);
					unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 6, 0);
					unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iParam0 /*7*/]), 1, 0);
				}
				func_435(iVar0);
			}
		}
	}
}

void func_435(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF44A5E894FE76438(iLocal_306, 16))
	{
		iVar0 = Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_3;
		iVar1 = func_436(iVar0);
		if (iVar1 == 1)
		{
			unk_0x4EA098C870B73AB7(&iLocal_306, 15);
			unk_0x4EA098C870B73AB7(&iLocal_306, 16);
			if (!func_45())
			{
				unk_0x5DA9515DF13D2E7F(iVar0, 0, 0);
			}
			if (iVar0 > Global_262145.f_6863)
			{
				iVar0 = Global_262145.f_6863;
			}
			unk_0xA8C0CC1A37E5B35D(iParam0, iVar0);
			unk_0xB8A73E7DA87B2968(&(Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			unk_0x4EA098C870B73AB7(&iLocal_306, 15);
			unk_0x4EA098C870B73AB7(&iLocal_306, 16);
			unk_0xB8A73E7DA87B2968(&(Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_436(int iParam0)
{
	if (func_45())
	{
		if (func_439(uParam0))
		{
			if (func_438(iLocal_515) == 2)
			{
				unk_0x1C58730C5FC29475(func_437(iLocal_515));
				unk_0x5DA9515DF13D2E7F(uParam0, 0, 0);
				func_291(iLocal_515);
				return 1;
			}
			else
			{
				func_291(iLocal_515);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_437(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/];
	}
	return -1;
}

int func_438(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_2;
	}
	return 0;
}

int func_439(var uParam0)
{
	if (!unk_0xF44A5E894FE76438(iLocal_306, 15))
	{
		func_289(&iLocal_515, -1135378931, 537254313, 1474183246, 1839532116, uParam0, 4, 3);
		func_442(&uLocal_516, 0, 0);
		unk_0xB8A73E7DA87B2968(&iLocal_306, 15);
	}
	else if (func_441(iLocal_515) || func_440(&uLocal_516, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_440(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_432(uParam0, bParam2, 0);
	if (unk_0x1995B52453EF6537() && !bParam2)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_441(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_2 != 1;
	}
	return 0;
}

void func_442(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1995B52453EF6537() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7414B386C0020BEC();
		}
		else
		{
			*uParam0 = unk_0x8D8F7D01F0EB4218();
		}
	}
	else
	{
		*uParam0 = unk_0x84A97C70FFDEC0C8();
	}
	uParam0->f_1 = 1;
}

void func_443(var uParam0, bool bParam1)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		if (unk_0x50CED8EEAE806923(uParam0))
		{
			if (!func_444(uParam0))
			{
				if (unk_0xF44A5E894FE76438(Local_91.f_2, 13))
				{
					unk_0x37338B7B7C4982DC(unk_0x9E9133ACB2BCC1D5(uParam0));
					unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(uParam0), 17, 1);
					unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(uParam0), 6, 0);
					unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(uParam0), 1, 0);
				}
				else
				{
					if (bParam1)
					{
						unk_0x37338B7B7C4982DC(unk_0x9E9133ACB2BCC1D5(uParam0));
					}
					unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(uParam0), 6, 1);
					unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(uParam0), 1, 1);
				}
			}
		}
		func_218(&uParam0);
	}
}

int func_444(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		return unk_0x00B5B0B68211D89B(unk_0x9E9133ACB2BCC1D5(uParam0));
	}
	return 1;
}

int func_445(int iParam0)
{
	var uVar0;
	
	if (unk_0x6A0583ECFCCECC9B(iParam0, 1))
	{
		uVar0 = unk_0x0DBD8FE531FD620D(iParam0, 1);
	}
	if (unk_0x3DFB3BFF04D48E00(iParam0))
	{
		uVar0 = unk_0x3349F29CAC088F0B(iParam0);
	}
	if (!unk_0x7887B64A08364778(uVar0))
	{
		if (func_456(iLocal_314))
		{
			iVar0 = unk_0x0DBD8FE531FD620D(unk_0x4572B13EE70C8F52(iLocal_314), 1);
		}
	}
	if (unk_0x7887B64A08364778(iVar0))
	{
		if (func_446(iVar0))
		{
			return 0;
		}
		if (unk_0x666F2AA1973AB0E0(iParam0) || unk_0xDA82A890460AACEE(unk_0xA0A4DA31DEDFAC4F(iVar0)))
		{
			if (!unk_0x3ACA21A90E0A949C(iVar0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_446(int iParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (!unk_0xF60B0BCAFB1D30FF(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_447(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

var func_448(int iParam0)
{
	return Global_1589933[iParam0 /*601*/].f_202.f_6;
}

int func_449(int iParam0)
{
	var uVar0;
	
	uVar0 = func_450(iParam0);
	return uVar0;
}

int func_450(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return unk_0x3D62B5F6C60AB02A(-1);
		}
		else if (func_270(iParam0))
		{
			return Global_1589933[iParam0 /*601*/].f_202.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_451(int iParam0)
{
	if (!unk_0xF44A5E894FE76438(Local_91.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_452(int iParam0, int iParam1)
{
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0) && !unk_0xB529B2A4B7C64D6D(uParam1, 0))
	{
		if (unk_0xE4133A0C3C6C74A7(iParam0, iParam1))
		{
			if (unk_0x98BE504E8B389665(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x98BE504E8B389665(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x98BE504E8B389665(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x98BE504E8B389665(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_453(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		if (unk_0x6A0583ECFCCECC9B(iParam0, iParam1))
		{
			uVar0 = unk_0x0DBD8FE531FD620D(iParam0, iParam1);
			if (unk_0x7887B64A08364778(uVar0))
			{
				if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
				{
					iVar1 = unk_0xB84CC33D90EA2EDD(unk_0xA0A4DA31DEDFAC4F(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x06F2E112EBC0C4FB(iVar0, iVar3, 0))
						{
							if (unk_0x98BE504E8B389665(iVar0, iVar3, 0) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

int func_454(int iParam0)
{
	if ((!unk_0x00B5B0B68211D89B(iParam0) && !unk_0xB993F1320313ED15(iParam0, 0)) && !unk_0x9B0C8A2FC23E64AB(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_455(int iParam0, int iParam1)
{
	if (unk_0x1774A68441553185(iParam0, iParam1) == 1 || unk_0x1774A68441553185(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_456(int iParam0)
{
	if (unk_0x65971A24A9D14F0C(iParam0))
	{
		return 0;
	}
	if (unk_0x81C4995860081BC3(unk_0x4572B13EE70C8F52(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_457(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xA438D75809973A56(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x483BD2141ADAC3CE(iParam0, "AttributeDamage");
	}
	unk_0xB8A73E7DA87B2968(&iVar0, iParam1);
	unk_0x570F410C5E24C75B(iParam0, "AttributeDamage", iVar0);
}

void func_458()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = unk_0xF44A5E894FE76438(Local_91.f_2, 6);
	bVar1 = unk_0xF44A5E894FE76438(Local_91.f_2, 10);
	func_463();
	if (iLocal_312 != 1)
	{
		if (unk_0xF44A5E894FE76438(Local_91.f_3, 12))
		{
			func_460();
		}
	}
	if (unk_0x6901135DDCC4904D(uLocal_323))
	{
		func_459(&uLocal_323);
	}
	iVar3 = 0;
	while (iVar3 < func_429(iLocal_312))
	{
		iLocal_307[iVar3] = 0;
		iVar3++;
	}
	if (unk_0x04DE35D10A718EEF())
	{
		Local_91.f_42 = -1;
		Local_91.f_5 = uLocal_319;
		Local_91.f_6 = uLocal_319;
		Local_91.f_7 = uLocal_319;
		Local_91.f_1 = 0;
		Local_91.f_4 = 0;
		Local_91.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_429(iLocal_312))
		{
			bVar2 = unk_0xF44A5E894FE76438(Local_91.f_10[iVar3 /*7*/].f_2, 6);
			Local_91.f_10[iVar3 /*7*/].f_2 = 0;
			Local_91.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				unk_0xB8A73E7DA87B2968(&(Local_91.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_1 = 0;
	Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_2 = -1;
	iLocal_306 = 0;
	if (bVar0)
	{
		unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 6);
	}
	if (bVar1)
	{
		unk_0xB8A73E7DA87B2968(&(Local_91.f_2), 11);
		unk_0xB8A73E7DA87B2968(&iLocal_306, 8);
	}
	unk_0xB8A73E7DA87B2968(&iLocal_306, 4);
	unk_0xB8A73E7DA87B2968(&iLocal_306, 11);
}

void func_459(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		unk_0x8A3D7569826A325D(uParam0);
		bVar0 = true;
	}
	if (unk_0x6901135DDCC4904D(uParam0->f_1))
	{
		unk_0x8A3D7569826A325D(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x7887B64A08364778(uParam0->f_7))
	{
		if (!unk_0x00B5B0B68211D89B(uParam0->f_7))
		{
			if (unk_0x809387353710848E(uParam0->f_7))
			{
				unk_0x78E064446A641529(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_460()
{
	switch (iLocal_312)
	{
		case 0:
			func_462(&(Global_1574692[3]));
			break;
		
		case 1:
			func_461();
			break;
	}
}

void func_461()
{
	int iVar0;
	
	if (unk_0x1995B52453EF6537())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0x42AFB71D42AF78EA(3, Global_1574648[iVar0], -1467815081);
			unk_0x42AFB71D42AF78EA(3, -1467815081, Global_1574648[iVar0]);
			iVar0++;
		}
	}
}

void func_462(var uParam0)
{
	int iVar0;
	
	if (unk_0x1995B52453EF6537())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0x42AFB71D42AF78EA(3, Global_1574648[iVar0], *uParam0);
			unk_0x42AFB71D42AF78EA(3, *uParam0, Global_1574648[iVar0]);
			iVar0++;
		}
	}
}

void func_463()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_429(iLocal_312))
	{
		bVar1 = false;
		if (iLocal_312 == 0)
		{
			if (!unk_0xF44A5E894FE76438(Local_91.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_443(Local_91.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_464()
{
	func_465();
	if (iLocal_312 != 1)
	{
		func_433();
	}
}

void func_465()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < func_429(iLocal_312))
	{
		if (unk_0xF6A32456BABBBA74(Local_91.f_10[iVar0 /*7*/]))
		{
			if (unk_0x50CED8EEAE806923(Local_91.f_10[iVar0 /*7*/]))
			{
				uVar1 = unk_0x9E9133ACB2BCC1D5(Local_91.f_10[iVar0 /*7*/]);
				if (!unk_0xB529B2A4B7C64D6D(uVar1, 0))
				{
					unk_0x12A60388636C9B1C(iVar1, 151, 1);
				}
			}
		}
		iVar0++;
	}
	if (Global_2494149.f_1611)
	{
	}
	if (iLocal_312 == 1)
	{
		if (unk_0xFB6B3EEFAB2DD12C() == iLocal_314)
		{
			if (unk_0xF44A5E894FE76438(Local_91.f_1, 0))
			{
				if (!unk_0xA5DC27EFFAA64D07(uLocal_496))
				{
					if (func_6(iLocal_314, 1, 1))
					{
						if (Local_91.f_50)
						{
							unk_0x4A81B91A22B1799B(15, unk_0x4572B13EE70C8F52(iLocal_314), 4, 0f, &uLocal_496, -1467815081);
						}
						else
						{
							unk_0x4A81B91A22B1799B(14, unk_0x4572B13EE70C8F52(iLocal_314), 4, 0f, &uLocal_496, 0);
						}
					}
				}
				if (Global_2494149.f_1611)
				{
					if (!unk_0xF44A5E894FE76438(Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_1, 3))
					{
						unk_0xB8A73E7DA87B2968(&(Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_312 == 0)
	{
		if (Local_91.f_42 != -1)
		{
			if (unk_0x1B982A8B37108B3C(Local_91.f_10[Local_91.f_42 /*7*/]))
			{
				if (!unk_0xB529B2A4B7C64D6D(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[Local_91.f_42 /*7*/]), 0) && !func_469(unk_0x9E9133ACB2BCC1D5(Local_91.f_10[Local_91.f_42 /*7*/])))
				{
					if (Local_91.f_10[Local_91.f_42 /*7*/].f_5 == 3)
					{
						func_466(Local_91.f_10[Local_91.f_42 /*7*/], &uLocal_323, -1082130432, 0, 1, 0, 0, -1, -1, 1);
						if (unk_0x6901135DDCC4904D(uLocal_323))
						{
							if (!unk_0xF44A5E894FE76438(iLocal_306, 6))
							{
								unk_0x2EDAF851B28036F0(uLocal_323, "FM_MGR_BLP");
								unk_0xB8A73E7DA87B2968(&iLocal_306, 6);
							}
						}
					}
				}
				else if (unk_0x6901135DDCC4904D(uLocal_323))
				{
					func_459(&uLocal_323);
				}
			}
			if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
			{
				if (!unk_0xF44A5E894FE76438(iLocal_306, 14))
				{
					if (func_331("MPCT_mugsuc", "LAMAR", 19))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_306, 14);
					}
				}
			}
		}
	}
}

void func_466(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		if (func_468())
		{
			Global_2433082 = unk_0xFB6B3EEFAB2DD12C();
		}
		if (bParam3)
		{
			func_467(unk_0x9E9133ACB2BCC1D5(uParam0), uParam1, 1, Global_2433082, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_467(unk_0x9E9133ACB2BCC1D5(uParam0), uParam1, -1, Global_2433082, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x6901135DDCC4904D(*uParam1))
	{
		func_459(uParam1);
	}
}

int func_467(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xF3F8195C98263BF5();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x00B5B0B68211D89B(uParam0))
	{
		if (!unk_0x809387353710848E(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x78E064446A641529(iParam0, 1);
			}
			else
			{
				unk_0xF12F7DD5C806C87C(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x15384506B12EE9D5(iParam0, iParam2);
			unk_0x542A2C3DC0374D53(iParam0, fParam6);
			if (unk_0x6901135DDCC4904D(*uParam1))
			{
				unk_0x0D792BA553E57B27(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x70F2D7B891171E48(iParam0, iParam9);
		}
		unk_0x445B259664586FAE(iParam0, uParam4);
		unk_0x9B38006BF68A10D5(iParam0, uParam5);
		*uParam1 = unk_0x6CABC22169F0A7EF(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x6901135DDCC4904D(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x4F095059F1C175D5(*uParam1, iParam8);
				}
				unk_0xD5CB3DBDC39C94B8("STRING");
				if (bParam10)
				{
					unk_0x4C51E4FBCD1D8830(uParam7);
				}
				else
				{
					unk_0xB1953EBEF4D6BD85(uParam7);
				}
				unk_0x16754E7FB61E7A65(*uParam1);
				unk_0x0D792BA553E57B27(*uParam1, 7);
			}
		}
		if (!unk_0xF44A5E894FE76438(uParam1->f_6, 2))
		{
			if (unk_0x6901135DDCC4904D(*uParam1))
			{
				if (!unk_0xC55B9553B3EDADE9(uParam7))
				{
					unk_0xD5CB3DBDC39C94B8("STRING");
					if (bParam10)
					{
						unk_0x4C51E4FBCD1D8830(sParam7);
					}
					else
					{
						unk_0xB1953EBEF4D6BD85(sParam7);
					}
					unk_0x16754E7FB61E7A65(*uParam1);
				}
				unk_0xB8A73E7DA87B2968(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x6A0583ECFCCECC9B(iParam0, 0))
		{
			uParam1->f_1 = unk_0x826D1C7EA579B9BB(iParam0);
			if (!unk_0xF44A5E894FE76438(uParam1->f_6, 3))
			{
				if (unk_0x6901135DDCC4904D(uParam1->f_1))
				{
					unk_0x0D792BA553E57B27(uParam1->f_1, 7);
					unk_0xB8A73E7DA87B2968(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x6901135DDCC4904D(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x4EA098C870B73AB7(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_468()
{
	return Global_1315206;
}

int func_469(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (unk_0x6A0583ECFCCECC9B(uParam0, 0))
	{
		uVar0 = unk_0x0DBD8FE531FD620D(iParam0, 0);
		if (unk_0xA4DB44DF73EF4FE5(uVar0, 0))
		{
			if (unk_0xFACD5AD331C52454("MPBitset", 3))
			{
				if (unk_0xA438D75809973A56(iVar0, "MPBitset"))
				{
					iVar1 = unk_0x483BD2141ADAC3CE(iVar0, "MPBitset");
				}
				if (unk_0xF44A5E894FE76438(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_470()
{
	return Local_91.f_0;
}

int func_471(int iParam0)
{
	return Local_145[iParam0 /*5*/];
}

void func_472()
{
	if (unk_0xFB6B3EEFAB2DD12C() == iLocal_314)
	{
		if (Global_25335)
		{
			if (!unk_0xF44A5E894FE76438(Local_145[iLocal_321 /*5*/].f_1, 4))
			{
				unk_0xB8A73E7DA87B2968(&(Local_145[iLocal_321 /*5*/].f_1), 4);
			}
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Local_145[iLocal_321 /*5*/].f_1), 4);
		}
	}
}

void func_473()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
	{
		if (unk_0xF44A5E894FE76438(Global_1573328, 0))
		{
			unk_0x4EA098C870B73AB7(&Global_1573328, 0);
			bVar0 = true;
		}
		if (!unk_0xF44A5E894FE76438(Local_145[iLocal_313 /*5*/].f_1, 2))
		{
			if (unk_0xF44A5E894FE76438(Local_91.f_1, 11))
			{
				unk_0xB8A73E7DA87B2968(&(Local_145[iLocal_313 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!unk_0xF44A5E894FE76438(Local_91.f_1, 11))
		{
			unk_0x4EA098C870B73AB7(&(Local_145[iLocal_313 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_4 = func_477();
			func_474(Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_4);
		}
	}
	else if (Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_4 != Local_91.f_44)
	{
		Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_4 = Local_91.f_44;
		func_474(Local_145[unk_0xBF9F666ECB14FCC3() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_474(int iParam0)
{
	switch (iLocal_312)
	{
		case 0:
			func_476(&(Global_1574692[3]), iParam0);
			break;
		
		case 1:
			func_475(iParam0);
			break;
	}
}

void func_475(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xF44A5E894FE76438(iParam0, iVar0))
		{
			unk_0x42AFB71D42AF78EA(1, Global_1574648[iVar0], -1467815081);
			unk_0x42AFB71D42AF78EA(1, -1467815081, Global_1574648[iVar0]);
		}
		else
		{
			unk_0x42AFB71D42AF78EA(3, Global_1574648[iVar0], -1467815081);
			unk_0x42AFB71D42AF78EA(3, -1467815081, Global_1574648[iVar0]);
		}
		iVar0++;
	}
}

void func_476(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xF44A5E894FE76438(iParam1, iVar0))
		{
			unk_0x42AFB71D42AF78EA(1, Global_1574648[iVar0], *uParam0);
			unk_0x42AFB71D42AF78EA(1, *uParam0, Global_1574648[iVar0]);
		}
		else
		{
			unk_0x42AFB71D42AF78EA(3, Global_1574648[iVar0], *uParam0);
			unk_0x42AFB71D42AF78EA(3, *uParam0, Global_1574648[iVar0]);
		}
		iVar0++;
	}
}

int func_477()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iLocal_312 == 1 || iLocal_312 == 0)
		{
			if (iLocal_313 == unk_0x7A4693BB354F3CD3(iVar1))
			{
				unk_0xB8A73E7DA87B2968(&iVar0, iVar1);
			}
		}
		else if (unk_0xFB6B3EEFAB2DD12C() == unk_0x7A4693BB354F3CD3(iVar1))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, iVar1);
		}
		else if (func_6(unk_0x7A4693BB354F3CD3(iVar1), 0, 1))
		{
			if (func_46(unk_0x7A4693BB354F3CD3(iVar1)))
			{
				unk_0xB8A73E7DA87B2968(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_478()
{
	switch (iLocal_312)
	{
		case 0:
			if (!unk_0xF44A5E894FE76438(iLocal_306, 11))
			{
				if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
				{
					if (func_6(iLocal_314, 1, 1))
					{
						func_305("GC_TCK_60", iLocal_314, 0, 0, 0, 1, 1, 0);
						unk_0xB8A73E7DA87B2968(&iLocal_306, 11);
					}
				}
			}
			if (!unk_0xF44A5E894FE76438(iLocal_306, 12))
			{
				if (unk_0xF44A5E894FE76438(Local_91.f_1, 8))
				{
					if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
					{
						if (func_6(iLocal_314, 1, 1))
						{
							func_305("GC_TCK_62", iLocal_314, 0, 0, 0, 1, 1, 0);
							unk_0xB8A73E7DA87B2968(&iLocal_306, 12);
						}
					}
				}
			}
			if (unk_0xF44A5E894FE76438(Local_91.f_2, 10))
			{
				if (!unk_0xF44A5E894FE76438(iLocal_306, 8))
				{
					if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
					{
						if (func_6(iLocal_314, 1, 1))
						{
							func_305("GC_TCK_65", iLocal_314, 0, 0, 0, 1, 1, 0);
							unk_0xB8A73E7DA87B2968(&iLocal_306, 8);
						}
					}
				}
			}
			else if (!unk_0xF44A5E894FE76438(iLocal_306, 13))
			{
				if (!unk_0xF44A5E894FE76438(Local_91.f_2, 11))
				{
					if (unk_0xF44A5E894FE76438(Local_91.f_1, 8))
					{
						if (unk_0xF44A5E894FE76438(Local_91.f_2, 6))
						{
							if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
							{
								if (func_6(iLocal_314, 1, 1))
								{
									func_305("GC_TCK_63", iLocal_314, 0, 0, 0, 1, 1, 0);
									unk_0xB8A73E7DA87B2968(&iLocal_306, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xF44A5E894FE76438(iLocal_306, 11))
			{
				if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
				{
					if (func_6(iLocal_314, 1, 1))
					{
						if (Local_91.f_50)
						{
							func_305("HS_SUCC", iLocal_314, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_305("GC_TCK_70", iLocal_314, 0, 0, 0, 1, 1, 0);
						}
						unk_0xB8A73E7DA87B2968(&iLocal_306, 11);
					}
				}
				else if (unk_0xFB6B3EEFAB2DD12C() == iLocal_314)
				{
					if (func_6(iLocal_313, 1, 1))
					{
						if (Local_91.f_50)
						{
							if (Local_91.f_51)
							{
								func_480("HS_A_SUCC", 1);
							}
							else
							{
								func_305("HS_SENT", iLocal_313, 0, 0, 0, 1, 1, 0);
							}
						}
						else
						{
							func_305("GC_TCK_71", iLocal_313, 0, 0, 0, 1, 1, 0);
						}
						unk_0xB8A73E7DA87B2968(&iLocal_306, 11);
					}
				}
			}
			if (!unk_0xF44A5E894FE76438(iLocal_306, 10))
			{
				if (unk_0xF44A5E894FE76438(Local_91.f_1, 0))
				{
					if (unk_0xF44A5E894FE76438(Local_91.f_3, 6))
					{
						if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
						{
							if (func_6(iLocal_314, 0, 1))
							{
								func_479(-1);
								if (Local_91.f_50)
								{
									if (!Local_91.f_51)
									{
										func_305("HS_KILLED", iLocal_314, 0, 0, 0, 1, 1, 0);
									}
								}
								else
								{
									func_305("GC_TCK_73", iLocal_314, 0, 0, 0, 1, 1, 0);
								}
								unk_0xB8A73E7DA87B2968(&iLocal_306, 10);
							}
						}
					}
				}
			}
			if (!unk_0xF44A5E894FE76438(iLocal_306, 9))
			{
				if (unk_0xF44A5E894FE76438(Local_91.f_1, 0))
				{
					if (unk_0xF44A5E894FE76438(Local_91.f_3, 7))
					{
						if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
						{
							if (func_6(iLocal_314, 0, 1))
							{
								if (Local_91.f_50)
								{
									func_305("HS_ESCAPED", iLocal_314, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_305("GC_TCK_75", iLocal_314, 0, 0, 0, 1, 1, 0);
								}
								unk_0xB8A73E7DA87B2968(&iLocal_306, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_479(int iParam0)
{
	if (Global_1574246)
	{
		if (Global_1574250 && Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] != 148)
		{
			if (Global_1573825.f_14 == unk_0x7A4693BB354F3CD3(iParam0))
			{
				Global_1616539++;
			}
		}
		else
		{
			Global_1616539++;
		}
	}
}

int func_480(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x053CD3063CA9436C(sParam0);
	iVar0 = unk_0x84EF96E928190AB1(0, 1);
	func_306(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_481()
{
	if (unk_0x45C6A8F0909682A6(false) != Local_91.f_45)
	{
		if (func_489(Local_91.f_45, 0, 1))
		{
			if (unk_0x1F3C33D4875E4B82(0) <= Local_91.f_45)
			{
				unk_0xAC4AA684E16779D5(Local_91.f_45);
			}
		}
	}
	if (unk_0xDE6E41B82C16097D(false) != Local_91.f_46)
	{
		if (func_488(Local_91.f_45, 0, 1))
		{
			if (unk_0x7DE9D2F5262709BD(0) <= Local_91.f_46)
			{
				unk_0xF5116E26EBA83CA9(Local_91.f_46);
			}
		}
	}
	if (unk_0x4B95ADFF26B877A7(false) != Local_91.f_47)
	{
		if (func_482(Local_91.f_45, 0, 1))
		{
			if (unk_0x68D6434FA6914C20(0) <= Local_91.f_47)
			{
				unk_0x57BE47356663D94E(Local_91.f_47);
			}
		}
	}
}

bool func_482(int iParam0, bool bParam1, bool bParam2)
{
	return func_483(2, iParam0, 1, bParam1, bParam2);
}

int func_483(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF44A5E894FE76438(Global_1363465, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_487(iParam0) - func_486(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_486(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_487(iParam0) - func_485(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_486(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_487(iParam0) - func_486(iParam0, 1));
		}
		if (!bParam4 && Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] != 3)
		{
			iVar1 = (iVar1 - func_484(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1363465.f_1;
			break;
		
		case 1:
			return Global_1363465.f_2;
			break;
		
		case 2:
			return Global_1363465.f_3;
			break;
	}
	return 0;
}

int func_486(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xFB6B3EEFAB2DD12C();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x5C565D8FF913FF0D())
			{
				return Global_2421621[iVar0 /*358*/].f_212;
			}
			else
			{
				return unk_0x45C6A8F0909682A6(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x5C565D8FF913FF0D())
			{
				return Global_2421621[iVar0 /*358*/].f_213;
			}
			else
			{
				return unk_0xDE6E41B82C16097D(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x5C565D8FF913FF0D())
			{
				return Global_2421621[iVar0 /*358*/].f_214;
			}
			else
			{
				return unk_0x4B95ADFF26B877A7(!bParam1);
			}
			break;
	}
	return 0;
}

int func_487(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1363473;
			break;
		
		case 1:
			return Global_1363474;
			break;
		
		case 2:
			return Global_1363475;
			break;
	}
	return 0;
}

bool func_488(int iParam0, bool bParam1, bool bParam2)
{
	return func_483(1, iParam0, 1, bParam1, bParam2);
}

bool func_489(int iParam0, bool bParam1, bool bParam2)
{
	return func_483(0, iParam0, 1, bParam1, bParam2);
}

void func_490()
{
	if (Local_91.f_50)
	{
		if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
		{
			func_492(9);
		}
		else if (unk_0xFB6B3EEFAB2DD12C() == iLocal_314)
		{
			func_492(13);
		}
	}
	func_491();
}

void func_491()
{
	unk_0x01DFCA3621B68C4A();
}

void func_492(int iParam0)
{
	unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_5), iParam0);
}

int func_493()
{
	bool bVar0;
	var uVar1;
	
	func_500(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_499())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_498())
	{
		return 1;
	}
	if (func_497(157))
	{
		if (!func_496())
		{
			return 1;
		}
	}
	if (func_497(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_494() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_494()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_494()
{
	switch (func_495())
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

int func_495()
{
	return Global_25185;
}

bool func_496()
{
	return Global_2443089.f_577;
}

int func_497(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_498()
{
	return Global_2452479;
}

bool func_499()
{
	return Global_2443089.f_572;
}

void func_500(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_501(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_501(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_6(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(iVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(iVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_502(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_502(int iParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(iParam0))
		{
			if (unk_0x94482DCC4926EF60(iParam0))
			{
				unk_0xC53606C390BE2727(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(iParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_503()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_504(struct<20> Param0)
{
	func_508(32, Param0);
	func_507(0, -1, 0);
	unk_0x1CB2FF4BC0AF8B2C(&Local_91, 54);
	unk_0x47DDB3A546F48091(&Local_145, 161);
	unk_0x7E85CEE862B85A74(0);
	if (!func_506())
	{
		func_235();
	}
	iLocal_312 = Param0.f_16;
	iLocal_313 = unk_0x7A4693BB354F3CD3(Param0.f_17);
	if (unk_0x1E0256D6F1052B31(iLocal_313))
	{
	}
	iLocal_314 = unk_0x7A4693BB354F3CD3(Param0.f_18);
	if (unk_0x1E0256D6F1052B31(iLocal_314))
	{
		iLocal_315 = unk_0x6D9FF4C899CD785F(unk_0x7746E8ACE891BFA4(iLocal_314));
	}
	if (func_505(iLocal_313, 9) && iLocal_312 == 1)
	{
		Local_91.f_50 = 1;
		if (func_505(iLocal_314, 13))
		{
			Local_91.f_51 = 1;
		}
	}
	Local_316 = { Param0.f_10 };
	if (iLocal_312 == 1)
	{
		if (unk_0xFB6B3EEFAB2DD12C() == iLocal_313)
		{
			unk_0xB8A73E7DA87B2968(&Global_1573328, 0);
		}
	}
	Global_1738469 = 0;
	Global_1738470 = 0;
	if (iLocal_312 == 1)
	{
		Global_2494149.f_1611 = 0;
	}
	Local_145[unk_0xBF9F666ECB14FCC3() /*5*/] = 0;
}

bool func_505(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_5, iParam1);
}

int func_506()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1995B52453EF6537())
		{
			return 0;
		}
		if (unk_0x34AA2E80B3872230())
		{
			return 1;
		}
		if (func_499())
		{
			return 0;
		}
		if (func_497(155))
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

int func_507(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_491();
			}
			else
			{
				return 0;
			}
		}
		if (!func_468())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1995B52453EF6537())
				{
					if (!bParam2)
					{
						func_491();
					}
					else
					{
						return 0;
					}
				}
				if (func_499())
				{
					if (!bParam2)
					{
						func_491();
					}
					else
					{
						return 0;
					}
				}
				if (func_497(155))
				{
					if (!bParam2)
					{
						func_491();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92DD6B9655D31C6A())
			{
				if (!bParam2)
				{
					func_491();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x1E6D5854F5CCAE3F();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			if (!bParam2)
			{
				func_491();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92DD6B9655D31C6A())
	{
		if (!bParam2)
		{
			func_491();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_508(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_491();
	}
	unk_0x6AFFC4188D3C82E8(iParam0, 0, Param1.f_16);
}

