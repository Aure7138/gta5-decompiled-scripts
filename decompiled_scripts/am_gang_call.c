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
	struct<53> Local_94 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_147 = 0;
	struct<5> Local_148[32];
	int iLocal_309 = 0;
	int iLocal_310[3] = { 0, 0, 0 };
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	struct<3> Local_319 = { 0, 0, 0 } ;
	var uLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 16;
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
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_93 = ((0.05f + 0.275f) - 0.01f);
	iLocal_315 = -1;
	iLocal_318 = -1;
	if (unk_0x591AF4C50B46E014())
	{
		func_513(ScriptParam_0);
	}
	while (true)
	{
		func_512();
		if (func_502())
		{
			func_499();
		}
		uLocal_322 = unk_0x11ABC381A58DD5AB();
		func_490();
		func_487();
		func_482();
		func_481();
		switch (func_480(unk_0x87B7000A6C80CCEF()))
		{
			case 0:
				if (func_479() == 1)
				{
					Local_148[unk_0x87B7000A6C80CCEF() /*5*/] = 1;
				}
				else if (func_479() == 4)
				{
					Local_148[unk_0x87B7000A6C80CCEF() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_479() == 1)
				{
					func_473();
				}
				else if (func_479() == 0)
				{
					func_467();
					Local_148[unk_0x87B7000A6C80CCEF() /*5*/] = 0;
				}
				else if (func_479() == 4)
				{
					Local_148[unk_0x87B7000A6C80CCEF() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_442();
				func_440(&(Local_94.f_52));
				if (func_439(&(Local_94.f_52)))
				{
					iVar0 = 0;
					while (iVar0 < func_438(iLocal_315))
					{
						func_442();
						iVar0++;
					}
					Local_148[unk_0x87B7000A6C80CCEF() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_148[unk_0x87B7000A6C80CCEF() /*5*/] = 4;
			
			case 4:
				func_241();
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			func_239();
			func_238();
			func_237();
			switch (func_479())
			{
				case 0:
					func_236();
					if (func_232())
					{
						if (!unk_0xA9A04898798AE9E6(unk_0x1E199569E0295838(iLocal_317), 0))
						{
							func_230(unk_0x1E199569E0295838(iLocal_317));
						}
						else
						{
							Local_94.f_36 = { Local_319 };
						}
						unk_0x507FE690B1271947(&(Local_94.f_2), 6);
						Local_94.f_0 = 1;
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
	
	if (func_479() < 4)
	{
		if (func_22())
		{
			iLocal_323 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_438(iLocal_315) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_94.f_0 = 4;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<14> Var1;
	
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_10[iLocal_323 /*7*/].f_2, 1) || unk_0xAA4F14DA15DB0B51(Local_94.f_10[iLocal_323 /*7*/].f_2, 6))
	{
		if (unk_0x3756406E4D76B25E(Local_94.f_10[iLocal_323 /*7*/]))
		{
			if (unk_0x2137828D03306CAF(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iLocal_323 /*7*/])))
			{
				if (unk_0xA9A04898798AE9E6(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iLocal_323 /*7*/]), 0))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iLocal_323 /*7*/].f_2, 6))
					{
						if (iLocal_315 == 0)
						{
							Local_94.f_48++;
							if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 12))
							{
								if (unk_0x24CD0D68E8753A62(Local_94.f_10[iLocal_323 /*7*/], &uVar0) == iLocal_317)
								{
									unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 12);
								}
							}
							if ((Local_94.f_42 == iLocal_323 && !unk_0xAA4F14DA15DB0B51(Local_94.f_2, 5)) || Local_94.f_48 == func_438(iLocal_315))
							{
								Var1.f_2 = 1830864364;
								Var1.f_10 = iLocal_317;
								Var1.f_11 = iLocal_316;
								if (func_438(iLocal_315) > 1)
								{
									Var1.f_12 = unk_0x7C214DA899F05536(1);
								}
								else
								{
									Var1.f_12 = unk_0x7C214DA899F05536(0);
								}
								Var1.f_3 = Local_94.f_43;
								func_20(Var1, func_21(1));
								if (Local_94.f_42 == iLocal_323)
								{
									unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 5);
								}
							}
							else if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 5))
							{
								Var1.f_2 = -1668570084;
								Var1.f_11 = iLocal_316;
								func_20(Var1, func_21(1));
							}
						}
						unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iLocal_323 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iLocal_323 /*7*/].f_2, 5))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_309, 2);
					}
					unk_0xF6082E2ADA1C795B(&iLocal_309, 1);
				}
			}
		}
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&iLocal_309, 1);
		unk_0xF6082E2ADA1C795B(&iLocal_309, 2);
	}
	func_3(iLocal_323);
	iLocal_323++;
	if (iLocal_323 >= func_438(iLocal_315))
	{
		iLocal_323 = 0;
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 0))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 1))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 1))
				{
					unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 1);
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 2))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 9))
				{
					unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 9);
				}
			}
		}
		unk_0x507FE690B1271947(&iLocal_309, 1);
		unk_0x507FE690B1271947(&iLocal_309, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0x62E688B72E3C57B0())
	{
		if (unk_0x3756406E4D76B25E(Local_94.f_10[iParam0 /*7*/]))
		{
			iVar0 = unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]);
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_94.f_10[iParam0 /*7*/].f_1)
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
						unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_94.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_94.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((unk_0x7659D96D129E7B72(iVar0) == 2 || (Global_2422215[iLocal_317 /*387*/].f_245 != -1 && func_18(Global_2422215[iLocal_317 /*387*/].f_245) == 4)) || Global_1592456[iLocal_317 /*635*/].f_541) || func_16(iLocal_317, 0)) || func_9(iLocal_317))
								{
									Local_94.f_10[iParam0 /*7*/].f_3 = uLocal_322;
									unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((unk_0x7659D96D129E7B72(iVar0) != 2 && Global_2422215[iLocal_317 /*387*/].f_245 == -1) && !Global_1592456[iLocal_317 /*635*/].f_541) && !func_16(iLocal_317, 0)) && !func_9(iLocal_317))
							{
								unk_0x507FE690B1271947(&(Local_94.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (unk_0x2AA4F22517A69BB6(uLocal_322, Local_94.f_10[iParam0 /*7*/].f_3) > 10000 || unk_0x7659D96D129E7B72(iVar0) != 2)
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 10))
								{
									unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 10);
									Local_94.f_39 = { func_8(iLocal_317) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_438(iLocal_315))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (unk_0x37922C87883D3C1A(iVar0) == 3f && !unk_0xEFB4328133A837C8(iVar0, 118, 1))
									{
										unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 1))
						{
							unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_317, 1, 1))
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(unk_0xD1EE0E9FCD74A37B(iVar0, 1), unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iLocal_317), 1), 25f) || !func_5(unk_0xD1EE0E9FCD74A37B(iVar0, 1), unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iLocal_317), 1), 625f))
								{
									unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(unk_0xD1EE0E9FCD74A37B(iVar0, 1), unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iLocal_317), 1)) || (unk_0x13F66F794C535493(iVar0) && unk_0x5537BC1B0041F8DF(iVar0) == unk_0x1E199569E0295838(iLocal_317)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 1))
						{
							unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_317, 1, 1))
						{
							if (!func_4(unk_0xD1EE0E9FCD74A37B(iVar0, 1), unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iLocal_317), 1)) && !(unk_0x13F66F794C535493(iVar0) && unk_0x5537BC1B0041F8DF(iVar0) == unk_0x1E199569E0295838(iLocal_317)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_94.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (unk_0xEFB4328133A837C8(iVar0, 118, 1))
								{
									unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iParam0 /*7*/].f_2), 4);
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
	
	if (unk_0x3FEF699D13BCC798((Param3.f_2 - Param0.f_2)) < 2f)
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

void func_7(int iParam0, int iParam1)
{
	Local_94.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x885F483F34E47503(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = unk_0x1E199569E0295838(iParam0);
			iVar1 = func_11(iParam0);
			if (unk_0x2137828D03306CAF(iVar1))
			{
				if (unk_0x7FAC45D56235AB39(iVar1, 0))
				{
					if (unk_0x5B9B499C707C2A95(iVar0, iVar1, 0))
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
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		if (unk_0x4D1A8278BAE26361("MPBitset", 3) && unk_0x30BD96CB13063EC9(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x01307FD0B54F50D3(iParam0, "MPBitset");
			if (unk_0xAA4F14DA15DB0B51(iVar0, 17))
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
		return Global_2497344.f_4828.f_37[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
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
	return Global_1622795[iParam0 /*431*/].f_11 != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_13())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = unk_0x1E199569E0295838(iParam0);
		if (unk_0xC4A39E4229BD3ABE(iVar0, iParam1))
		{
			if (func_17(unk_0x0C20E539D876C5B3(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)
{
	if (Global_69800)
	{
		if (unk_0x2137828D03306CAF(iParam0) && (!bParam1 || unk_0x7FAC45D56235AB39(iParam0, 0)))
		{
			if (unk_0x30BD96CB13063EC9(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
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
		
		case 46:
			return 3;
			break;
	}
	return 6;
}

int func_19(int iParam0, int iParam1)
{
	if (unk_0x4D1A8278BAE26361("AttributeDamage", 3))
	{
		if (unk_0x30BD96CB13063EC9(iParam0, "AttributeDamage"))
		{
			if (unk_0xAA4F14DA15DB0B51(unk_0x01307FD0B54F50D3(iParam0, "AttributeDamage"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1913269625;
	Param0.f_1 = unk_0x0FFED3E94261A832();
	if (!iParam14 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Param0, 14, iParam14);
	}
}

int func_21(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar1)))
		{
			iVar2 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_22()
{
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 0))
	{
		if (iLocal_315 == 1)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 4))
			{
				unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 11);
				return 1;
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 1))
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 0);
			return 1;
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 2))
	{
		unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 1);
		unk_0xF6082E2ADA1C795B(&Global_1752415, iLocal_315);
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 12))
	{
		return 1;
	}
	if (iLocal_315 == 0)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 2))
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 2);
			return 1;
		}
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 8))
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 8);
			return 1;
		}
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 5))
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 3);
			return 1;
		}
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 9))
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 9);
			return 1;
		}
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 15))
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_317, 0, 1))
	{
		if (iLocal_315 != 0 || !unk_0xAA4F14DA15DB0B51(Local_94.f_2, 1))
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_37(iLocal_317, 129))
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 13);
			unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 8);
			return 1;
		}
		if (func_37(iLocal_317, 131) || unk_0xAA4F14DA15DB0B51(Global_1622795[iLocal_317 /*431*/].f_1, 11))
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 13);
			unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 8);
			return 1;
		}
		if (func_37(iLocal_317, 136) || (func_36(unk_0x0FFED3E94261A832(), 24) && func_35(iLocal_317)))
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 8);
			return 1;
		}
		if (func_37(iLocal_317, 146))
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 8);
			return 1;
		}
		if (func_34(unk_0x0FFED3E94261A832()) && ((func_32(unk_0x0FFED3E94261A832()) == 148 || func_32(unk_0x0FFED3E94261A832()) == 142) || func_32(unk_0x0FFED3E94261A832()) == 164))
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 8);
			return 1;
		}
		if (func_32(unk_0x0FFED3E94261A832()) == 153)
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 8);
			return 1;
		}
		if (func_30(unk_0x0FFED3E94261A832()) && func_32(unk_0x0FFED3E94261A832()) == 170)
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 8);
			return 1;
		}
		if (func_32(unk_0x0FFED3E94261A832()) == 167)
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 8);
			return 1;
		}
		if (func_32(unk_0x0FFED3E94261A832()) == 168)
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 8);
			return 1;
		}
		if (unk_0xA9A04898798AE9E6(unk_0x1E199569E0295838(iLocal_317), 0))
		{
			if (iLocal_315 == 1)
			{
				if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 0))
				{
					unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (iLocal_315 == 1)
			{
				if (func_37(iLocal_317, 146))
				{
					unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 7);
					return 1;
				}
				if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 16))
				{
					if (unk_0x2AA4F22517A69BB6(uLocal_322, Local_94.f_9) > 120000)
					{
						unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 7);
					return 1;
				}
				if (func_23(iLocal_317, func_12(iLocal_316), 1))
				{
					unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 7);
					return 1;
				}
			}
			if (iLocal_318 != unk_0xCAEDBF30E3EA14FC(unk_0x4325D353D7D27B34(iLocal_317)))
			{
				unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 5);
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
		if (Global_1622795[iParam0 /*431*/].f_11 != func_13())
		{
			if (iParam1 == Global_1622795[iParam0 /*431*/].f_11)
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
		return Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 != func_13())
			{
				if (Global_1622795[iParam0 /*431*/].f_11 == iParam0)
				{
					if (Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam2)
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
	if (((func_29(iLocal_317, 1, 0) || func_36(iLocal_317, 0)) || func_36(iLocal_317, 7)) || func_28(iLocal_317))
	{
		return 1;
	}
	return 0;
}

bool func_28(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_189 != 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
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
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

int func_32(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_32;
	}
	return -1;
}

int func_33(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1))
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
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 4);
}

bool func_36(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

int func_37(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/] == iParam1)
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
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

void func_39()
{
	func_50();
	if (iLocal_315 != 1)
	{
		func_2();
	}
	func_40();
}

void func_40()
{
	int iVar0;
	
	if (func_6(unk_0x7C214DA899F05536(iLocal_324), 0, 1))
	{
		if (iLocal_315 == 1)
		{
			if (unk_0x7C214DA899F05536(iLocal_324) == iLocal_317)
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 16))
				{
					if (unk_0xAA4F14DA15DB0B51(Local_148[iLocal_324 /*5*/].f_1, 3))
					{
						unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 11))
			{
				if (func_46(unk_0x7C214DA899F05536(iLocal_324)))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_94.f_4, iLocal_324))
					{
						unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 11);
						unk_0xF6082E2ADA1C795B(&(Local_94.f_4), iLocal_324);
					}
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_94.f_4, iLocal_324))
				{
					unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 11);
					unk_0x507FE690B1271947(&(Local_94.f_4), iLocal_324);
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_148[iLocal_324 /*5*/].f_1, 2))
			{
				unk_0x507FE690B1271947(&(Local_94.f_1), 11);
			}
			if (iLocal_315 == 0)
			{
				if (unk_0xAA4F14DA15DB0B51(Local_148[iLocal_324 /*5*/].f_1, 0))
				{
					if (Local_148[iLocal_324 /*5*/].f_2 != -1)
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 1))
						{
							unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 1);
							Local_94.f_42 = Local_148[iLocal_324 /*5*/].f_2;
							Local_94.f_43 = Local_148[iLocal_324 /*5*/].f_3;
							if (!func_45())
							{
								func_44();
							}
						}
					}
					else if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 9))
					{
						if (!func_45())
						{
							func_43();
						}
						iVar0 = 0;
						while (iVar0 < func_438(iLocal_315))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 9);
						unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 1);
					}
				}
				if (func_45())
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 17))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_148[iLocal_324 /*5*/].f_1, 5))
						{
							func_44();
							unk_0xF6082E2ADA1C795B(&iLocal_309, 17);
						}
						else if (unk_0xAA4F14DA15DB0B51(Local_148[iLocal_324 /*5*/].f_1, 6))
						{
							func_43();
							unk_0xF6082E2ADA1C795B(&iLocal_309, 17);
						}
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(Local_148[iLocal_324 /*5*/].f_1, 1))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 3))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_309, 3);
					}
				}
				else if (unk_0x7C214DA899F05536(iLocal_324) == iLocal_317)
				{
					if (iLocal_315 == 0)
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 1))
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 6))
							{
								unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_324++;
	if (iLocal_324 >= 32)
	{
		iLocal_324 = 0;
		if (iLocal_315 == 0)
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 3))
			{
				func_42();
			}
			else
			{
				func_41();
			}
			unk_0x507FE690B1271947(&iLocal_309, 3);
		}
	}
}

void func_41()
{
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 3))
	{
		unk_0x507FE690B1271947(&(Local_94.f_2), 3);
	}
}

void func_42()
{
	if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 3))
	{
		Local_94.f_6 = uLocal_322;
		unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 3);
	}
}

void func_43()
{
	struct<14> Var0;
	
	Var0.f_2 = 2099045702;
	Var0.f_10 = iLocal_317;
	Var0.f_11 = iLocal_316;
	func_20(Var0, func_21(1));
}

void func_44()
{
	struct<14> Var0;
	
	Var0.f_2 = 11813209;
	Var0.f_10 = iLocal_317;
	Var0.f_11 = iLocal_316;
	if (func_438(iLocal_315) > 1)
	{
		Var0.f_12 = unk_0x7C214DA899F05536(1);
	}
	else
	{
		Var0.f_12 = unk_0x7C214DA899F05536(0);
	}
	Var0.f_3 = Local_94.f_43;
	func_20(Var0, func_21(1));
}

int func_45()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

bool func_46(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		return func_49();
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_241.f_136[func_48(10) /*33*/][iParam0], func_47(10));
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
	return Global_1312416;
}

void func_50()
{
	int iVar0;
	
	if (iLocal_315 == 0)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 3))
		{
			if (unk_0x2AA4F22517A69BB6(uLocal_322, Local_94.f_6) > 10000)
			{
				if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 1))
				{
					unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 2);
				}
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 8))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 1))
			{
				if (func_54())
				{
					unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 6);
					func_53();
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 0))
		{
			if (func_6(iLocal_317, 1, 1))
			{
				iVar0 = unk_0x1E199569E0295838(iLocal_317);
				if (func_52(iVar0))
				{
					func_230(iVar0);
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 1))
		{
			if (!func_6(iLocal_317, 1, 1) || func_28(iLocal_317))
			{
				unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 15);
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 0))
	{
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 5))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 4))
			{
				if (unk_0x2AA4F22517A69BB6(uLocal_322, Local_94.f_5) > 600000)
				{
					unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 4);
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_94.f_3, 12))
		{
			if (func_51())
			{
				unk_0xF6082E2ADA1C795B(&(Local_94.f_3), 12);
			}
		}
	}
}

int func_51()
{
	switch (Local_94.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_532 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_532 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_52(int iParam0)
{
	if (unk_0x769F0F6444C1ABE0(iParam0))
	{
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 17))
	{
		if (!unk_0xABCF7EB00A727656(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_94.f_36, unk_0xD1EE0E9FCD74A37B(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_53()
{
	func_467();
	Local_94.f_0 = 0;
}

int func_54()
{
	if ((((((((unk_0xAA4F14DA15DB0B51(Local_94.f_2, 6) || unk_0x859EE44BE17CBC0F(iLocal_317)) || func_29(iLocal_317, 1, 0)) || func_56(iLocal_317)) || func_36(iLocal_317, 0)) || func_36(iLocal_317, 7)) || func_28(iLocal_317)) || Global_2422215[iLocal_317 /*387*/].f_247) || func_55(unk_0x1E199569E0295838(iLocal_317), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_317 != -1)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_148[iLocal_317 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (!unk_0x769F0F6444C1ABE0(iParam0))
		{
			if (unk_0xB1C4356ECEE878FE(iParam0))
			{
				uVar0 = unk_0x0C20E539D876C5B3(iParam0, 0);
				if (unk_0x2137828D03306CAF(uVar0))
				{
					if (unk_0xD3B21CE53AA7BE51(iVar0) == iParam1)
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
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 14))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 11))
	{
		return 1;
	}
	return 0;
}

void func_57()
{
	if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 5))
	{
		Local_94.f_5 = uLocal_322;
		unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 5);
	}
}

void func_58()
{
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 5))
	{
		unk_0x507FE690B1271947(&(Local_94.f_1), 5);
	}
}

int func_59()
{
	bool bVar0;
	
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_232())
		{
			if (iLocal_315 == 1)
			{
				bVar0 = true;
			}
			else if (func_227())
			{
				if (func_224())
				{
					if (func_223())
					{
						bVar0 = true;
					}
					else if (func_221(func_222(iLocal_315)))
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
	if (unk_0x62E688B72E3C57B0())
	{
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_315)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_438(iLocal_315))
					{
						if ((!unk_0x3756406E4D76B25E(Local_94.f_10[iVar0 /*7*/]) && !unk_0xAA4F14DA15DB0B51(Local_94.f_10[iVar0 /*7*/].f_2, 1)) && !unk_0xAA4F14DA15DB0B51(Local_94.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_61(iVar0, func_64(iLocal_315), Local_94.f_32, Local_94.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_315 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_438(iLocal_315))
				{
					if (!unk_0x3756406E4D76B25E(Local_94.f_10[iVar0 /*7*/]))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			unk_0xF6082E2ADA1C795B(&iLocal_309, 1);
			unk_0xF6082E2ADA1C795B(&iLocal_309, 2);
			unk_0xF6082E2ADA1C795B(&iLocal_309, 3);
			unk_0xF6082E2ADA1C795B(&iLocal_309, 4);
			unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 0);
			unk_0xF6082E2ADA1C795B(&Global_1752416, iLocal_315);
			return 1;
		}
	}
	return 0;
}

void func_61(int iParam0, var uParam1, struct<3> Param2, var uParam5)
{
	if (unk_0x62E688B72E3C57B0())
	{
		if (!unk_0x3756406E4D76B25E(Local_94.f_10[iParam0 /*7*/]))
		{
			if (unk_0x1DFA3B8DE71107F9(0) < unk_0xD7381CA7CDE5E23C(false, 0))
			{
				if (unk_0xF157AC7C4936A07C(1))
				{
					if (func_221(func_222(iLocal_315)))
					{
						if (func_63(&(Local_94.f_10[iParam0 /*7*/]), 7, func_222(iLocal_315), Param2, uParam5, 1, 1, 1))
						{
							Local_94.f_10[iParam0 /*7*/].f_1 = iLocal_315;
							Local_94.f_10[iParam0 /*7*/].f_4 = uParam1;
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
	
	if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_94.f_10[iParam0 /*7*/].f_4 == 0)
			{
				unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), Global_1574730);
				unk_0x0B9AE9BB18EAB95A(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 1);
				unk_0xB329B704ED2A49E5(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 0);
			}
			unk_0x9C27A9366AD7DE0B(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
			unk_0xE5989282DAC350E1(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 2);
			unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 13, 1);
			unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 41, 1);
			unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 20, 1);
			unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 132, 1);
			unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 118, 0);
			unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 311, 1);
			unk_0x138711A3094892B4(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 300f, 10);
			unk_0x015B50BC21C88C8C(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 1);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			unk_0x15A19BB3A39023C8(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_94.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 0, 0);
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 2, 0);
					unk_0xB5AEEE6CCF634ECA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 2);
					unk_0xE92D3CD695EE863C(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 0);
					unk_0xE293CCEE24FD3DDA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 0, -1, 0);
					unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 32, 1);
					unk_0xAE833788DEAB23CA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 4, 0);
					unk_0xAE833788DEAB23CA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 1024, 1);
					unk_0xAE833788DEAB23CA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 128, 1);
					unk_0xAE833788DEAB23CA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 32, 0);
					unk_0xAE833788DEAB23CA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 8, 0);
					unk_0xAE833788DEAB23CA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 64, 0);
					unk_0xAE833788DEAB23CA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 256, 1);
					unk_0xAE833788DEAB23CA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 1, 0);
					unk_0xAE833788DEAB23CA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 2, 1);
					unk_0xAE833788DEAB23CA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 16, 1);
					if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 0))
					{
						unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iParam0 /*7*/].f_2), 2);
					}
					unk_0xAE833788DEAB23CA(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 512, 1);
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 17, 0);
					unk_0x0013D519C885E60B(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, 1, 1);
					unk_0x88D9DF53359130B9(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 0);
					unk_0xEDF42871EAD55C9B(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), unk_0x1E199569E0295838(iLocal_317), -1, 0, 2);
					unk_0x532B347165632657(Local_94.f_10[iParam0 /*7*/], 1);
					break;
			}
			unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), unk_0xF2DB717A73826179((Global_262145.f_153 * IntToFloat(unk_0xE86A53C202B21FAB(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]))))));
			if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 8))
			{
				unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 8);
			}
			unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_63(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0xF157AC7C4936A07C(1))
	{
		return 0;
	}
	uVar0 = unk_0xD00B79C0E206E082(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xDF7D91421097E934(uVar0);
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(uVar0, iParam9);
		if (unk_0x84AEB9C70AC446A5(uVar0))
		{
			if (bParam7)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
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
	
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_315)
		{
			case 0:
				if (unk_0x885F483F34E47503(iLocal_317) && func_6(iLocal_317, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_25 = -1082130432;
					Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iLocal_317), 1) };
					Var0.f_5 = 20f;
					if (func_66(Local_94.f_36, 40f, &(Local_94.f_32), &(Local_94.f_35), Var0))
					{
						unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 3);
						return 1;
					}
				}
				else
				{
					unk_0x0D8D84869BCDB788();
					unk_0x9F2805D9F870E084();
					if (Global_2404996.f_2263)
					{
						unk_0xA1A58DB8A7A22164();
						Global_2404996.f_2263 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_66(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	struct<17> Var0;
	struct<18> Var28;
	struct<3> Var55;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var28.f_16 = 1;
	Var28.f_22 = 1;
	Var28.f_23 = 1;
	Var28.f_24 = 1;
	Var28 = { Param0 };
	Var28.f_3 = Param6.f_11;
	Var28.f_4 = fParam3;
	Var28.f_5 = 0;
	Var28.f_6 = 1;
	Var28.f_7 = 0;
	Var28.f_15 = 0;
	Var28.f_16 = 1;
	Var28.f_17 = 0;
	if (func_67(&Var28, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			Var55 = { Param0 - Var0[0 /*3*/] };
			if (Var55.f_2 > Param6.f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = Param6.f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
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
	bool bVar85;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404996.f_2257 == *uParam0 || !Global_2404996.f_2257.f_1 == uParam0->f_1) || !Global_2404996.f_2257.f_2 == uParam0->f_2) || !Global_2404996.f_2260 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404996.f_2271 == uParam0->f_8 || !Global_2404996.f_2271.f_1 == uParam0->f_8.f_1) || !Global_2404996.f_2271.f_2 == uParam0->f_8.f_2) || !Global_2404996.f_2274 == uParam0->f_11) || !Global_2404996.f_2274.f_1 == uParam0->f_11.f_1) || !Global_2404996.f_2274.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404996.f_2271 == uParam0->f_8 || !Global_2404996.f_2271.f_1 == uParam0->f_8.f_1) || !Global_2404996.f_2271.f_2 == uParam0->f_8.f_2) || !Global_2404996.f_2274 == uParam0->f_11) || !Global_2404996.f_2274.f_1 == uParam0->f_11.f_1) || !Global_2404996.f_2274.f_2 == uParam0->f_11.f_2) || !Global_2404996.f_2277 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404996.f_2255 == 1)
		{
			if (unk_0xE00BB08A385D5A25(Global_2404996.f_2264))
			{
				if (Global_2404996.f_2264 == unk_0xFF09208EC90C94CB())
				{
					if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2261) < func_220(0))
					{
						return 0;
					}
				}
				else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2261) < func_220(0))
				{
					return 0;
				}
			}
			unk_0x0D8D84869BCDB788();
			unk_0x9F2805D9F870E084();
			func_219();
		}
		Global_2404996.f_2255 = 0;
	}
	else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2261) > func_220(0))
	{
		Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
		func_213();
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
	unk_0x22B61B02AFE2AF2E(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404996.f_2255)
	{
		unk_0x0D8D84869BCDB788();
		unk_0x9F2805D9F870E084();
		func_219();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_212(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xA4C66BC652DBFE4B())
		{
			Global_2404996.f_2278 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404996.f_2257 = { *uParam0 };
					Global_2404996.f_2260 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404996.f_2271 = { uParam0->f_8 };
					Global_2404996.f_2274 = { uParam0->f_11 };
					Global_2404996.f_2277 = 0f;
					Global_2404996.f_2257 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404996.f_2271 = { uParam0->f_8 };
					Global_2404996.f_2274 = { uParam0->f_11 };
					Global_2404996.f_2277 = uParam0->f_14;
					Global_2404996.f_2257 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_211(Var8.f_0, Var8.f_1);
			}
			Global_2404996.f_2256 = 1;
			Global_2404996.f_2255 = 1;
			Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
			Global_2404996.f_2261 = unk_0x11ABC381A58DD5AB();
			Global_2404996.f_2264 = unk_0xFF09208EC90C94CB();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404996.f_2255)
	{
		if (Global_2404996.f_2256 == 1)
		{
			if (unk_0x6DF473E6458E85B6(fVar4, fVar5, fVar6, fVar7) || unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 5000)
			{
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
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
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					func_190(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_189(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2404996.f_2256 = 9;
				}
				else
				{
					Global_2404996.f_2256 = 2;
				}
			}
		}
		if (Global_2404996.f_2256 == 2)
		{
			if ((unk_0x306044C3800C13FD(Var11, Var14) || unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 15000) || unk_0xFFAE31A7B21E0490(Var11, Var14) == 0)
			{
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				if (uParam0->f_5 && !func_186(unk_0x0FFED3E94261A832(), 0))
				{
					Global_2404996.f_2256 = 3;
				}
				else
				{
					Global_2404996.f_2256 = 4;
				}
			}
			else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2266) > 7000)
			{
				func_185(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404996.f_2256 == 3)
		{
			if (func_184() || unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 10000)
			{
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				Global_2404996.f_2256 = 4;
			}
		}
		if (Global_2404996.f_2256 == 4)
		{
			if (unk_0xA4C66BC652DBFE4B())
			{
				unk_0x0D8D84869BCDB788();
				unk_0x9F2805D9F870E084();
			}
			else
			{
				iVar0 = 0;
				func_213();
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
					if (!unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
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
							if (unk_0x02E7E9BA57B7D8C2(unk_0x0FFED3E94261A832(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
								Global_2404996.f_2256 = 5;
							}
							break;
						
						case 1:
							func_183(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x0E308CB76057368C(unk_0x0FFED3E94261A832(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
								Global_2404996.f_2256 = 5;
							}
							break;
						
						case 2:
							if (unk_0x0E308CB76057368C(unk_0x0FFED3E94261A832(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
								Global_2404996.f_2256 = 5;
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
					Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
					Global_2404996.f_2256 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x8C2EE08261507D14(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_183(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x8EC9B42622922299(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x8EC9B42622922299(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404996.f_2256 == 5)
		{
			if (func_116(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404996.f_2282.f_5)
				{
					Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
					Global_2404996.f_2256 = 6;
				}
				else
				{
					Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x2410C2F4DC01A40D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404996.f_2256 = 9;
				}
			}
			else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 20000)
			{
				unk_0x0D8D84869BCDB788();
				unk_0x9F2805D9F870E084();
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				Global_2404996.f_2256 = 8;
			}
		}
		if (Global_2404996.f_2256 == 6)
		{
			iVar0 = 0;
			Global_2404996.f_2282.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_115(uParam0->f_4))
				{
					if (unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_114(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var8)))
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
			Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
			Global_2404996.f_2256 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x8C2EE08261507D14(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_183(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x8EC9B42622922299(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x8EC9B42622922299(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404996.f_2256 == 7)
		{
			if (func_116(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404996.f_2411[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_189(Global_2404996.f_2411[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404996.f_2411[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_112(Global_2404996.f_2411[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404996.f_2411[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x19007189599EBBF5(Global_2404996.f_2411[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404996.f_2411[iVar17 /*3*/] };
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
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = unk_0x2410C2F4DC01A40D(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404996.f_2256 = 9;
			}
			else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 20000)
			{
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				Global_2404996.f_2256 = 8;
			}
		}
		if (Global_2404996.f_2256 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_69(Global_2404996.f_478))
				{
				}
			}
			else if (Global_2404996.f_2282.f_2)
			{
				func_68(uParam2, &(Global_2404996.f_2282.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404996.f_2257 };
				func_70(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
			Global_2404996.f_2256 = 9;
		}
		if (Global_2404996.f_2256 == 9)
		{
			Global_2404996.f_2255 = 0;
			unk_0x0D8D84869BCDB788();
			unk_0x9F2805D9F870E084();
			func_219();
			return 1;
		}
		Global_2404996.f_2261 = unk_0x11ABC381A58DD5AB();
	}
	return 0;
}

void func_68(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*9*/];
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
	var uVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	struct<3> Var67;
	struct<3> Var70;
	struct<3> Var73;
	float fVar76;
	
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
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var67 = { *uParam5 };
						if (func_115(uParam5->f_4) || !unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_114(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_114(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var67)))
						{
							iVar66 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_72(*uParam0, &Var0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
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
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { uParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_190(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			
			case 1:
				Var70 = { uParam5->f_8 };
				Var73 = { uParam5->f_11 };
				break;
			
			case 2:
				Var70 = { uParam5->f_8 };
				Var73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_71(Var0, uParam5->f_7, Var70, Var73, fVar76))
		{
			if (func_72(*uParam0, &Var0, iVar66, iParam3, 0))
			{
				if (!func_71(Var0, uParam5->f_7, Var70, Var73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var70 + Var73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var70 };
					}
					if (unk_0xE423CA97BB7EA540(Var0, &uVar63, 0))
					{
						Var0.f_2 = uVar63;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var70 + Var73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var70 };
				}
				if (unk_0xE423CA97BB7EA540(Var0, &uVar63, 0))
				{
					Var0.f_2 = uVar63;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404996.f_633 = 1;
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
			return func_112(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x19007189599EBBF5(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_72(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_111(Param0, uParam3))
	{
		if (func_73(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0xDB2C6DD0E49577D6(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_93(Global_2404996.f_499, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
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
	while (iVar0 < Global_2410462[iVar4])
	{
		if (func_78(Var1, &(Global_2409633[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_75(&Var1, Global_2409633[iVar4 /*92*/][iVar0 /*7*/], Global_2409633[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409633[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410462[8])
	{
		if (func_78(Var1, &(Global_2409633[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_75(&Var1, Global_2409633[8 /*92*/][iVar0 /*7*/], Global_2409633[8 /*92*/][iVar0 /*7*/].f_3, Global_2409633[8 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x8A19CC9865A4AAC2(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x8A19CC9865A4AAC2(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
	return unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_79(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410472[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410472[1])
	{
		if (Param0.f_0 < Global_2410476[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410472[2])
	{
		if (Param0.f_0 < Global_2410476[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410476[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410476[3])
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
	
	if (func_90(unk_0x0FFED3E94261A832(), 1))
	{
		if (Global_1638223.f_47358 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1638223.f_47358)
			{
				if (Global_1638223.f_47359[iVar0 /*61*/].f_7 != 0)
				{
					if (func_81(Param0, Global_1638223.f_47359[iVar0 /*61*/], Global_1638223.f_47359[iVar0 /*61*/].f_6, Global_1638223.f_47359[iVar0 /*61*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1638223.f_44971 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1638223.f_44971)
			{
				if (Global_1638223.f_44974[iVar0 /*98*/].f_16 != 0)
				{
					if (func_81(Param0, Global_1638223.f_44974[iVar0 /*98*/], Global_1638223.f_44974[iVar0 /*98*/].f_3, Global_1638223.f_44974[iVar0 /*98*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1638223.f_59830 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1638223.f_59830)
			{
				if (Global_1638223.f_59834[iVar0 /*160*/].f_12 != 0)
				{
					if (func_81(Param0, Global_1638223.f_59834[iVar0 /*160*/], Global_1638223.f_59834[iVar0 /*160*/].f_3, Global_1638223.f_59834[iVar0 /*160*/].f_12, 0.5f))
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
	float fVar6;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_89(iParam7, 1008981770))
	{
		func_82(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0x19007189599EBBF5(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_82(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_88(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	func_83(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x3FEF699D13BCC798((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x3FEF699D13BCC798((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x3FEF699D13BCC798((Var6.f_0 - Var3.f_0));
}

void func_83(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x88516260CF32A1A0(iParam0))
	{
		unk_0xDE3E0D9E2E663E9A(iParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_86(iParam0);
		if (iVar0 != 0)
		{
			func_84(iVar0, fParam1, fParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
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

void func_84(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_85(iParam0, &Global_1315786);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x88516260CF32A1A0(Global_1315786[iVar0]))
		{
			unk_0xDE3E0D9E2E663E9A(Global_1315786[iVar0], &(Global_1315790[iVar0 /*3*/]), &(Global_1315797[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1315790[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1315797[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315790[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315797[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315790[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315797[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315790[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315797[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315804[iVar0] = (Global_1315797[iVar0 /*3*/] - Global_1315790[iVar0 /*3*/]);
		Global_1315807[iVar0] = (Global_1315797[iVar0 /*3*/].f_1 - Global_1315790[iVar0 /*3*/].f_1);
		Global_1315810[iVar0] = (Global_1315797[iVar0 /*3*/].f_2 - Global_1315790[iVar0 /*3*/].f_2);
		if (Global_1315804[iVar0] > Global_1315813)
		{
			Global_1315813 = Global_1315804[iVar0];
		}
		if (Global_1315810[iVar0] > Global_1315814)
		{
			Global_1315814 = Global_1315810[iVar0];
		}
		iVar0++;
	}
	Global_1315815 = (Global_1315813 * -0.5f);
	Global_1315818 = (Global_1315813 * 0.5f);
	Global_1315815.f_1 = ((((0.5f * Global_1315807[0]) + Global_1315807[1]) + Global_1315786.f_3) * -1f);
	Global_1315818.f_1 = (0.5f * Global_1315807[0]);
	Global_1315815.f_2 = (Global_1315810[0] * -0.5f);
	Global_1315818.f_2 = (Global_1315810[0] * 0.5f);
	*uParam1 = { Global_1315815 };
	*uParam2 = { Global_1315818 };
}

void func_85(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
	}
}

int func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (func_87(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_88(var uParam0, struct<3> Param1)
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

float func_89(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_83(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_90(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_91(iParam0))
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

bool func_91(int iParam0)
{
	return func_92(iParam0);
}

bool func_92(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

int func_93(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_105(Param0))
	{
		if (func_104(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_96(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_95(*uParam3, 1056964608))
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
				func_94(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

void func_94(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_88(&Var0, 0f, 0f, unk_0x399F81B56505EE6F(0f, 360f));
		}
		else
		{
			func_88(&Var0, 0f, 0f, fParam7);
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

int func_95(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404996.f_2515[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_96(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_101(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_98(&Var2, &(Global_2404996.f_357[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_101(Var2, &uVar1) || func_97(Var2))
			{
				Var2 = { *uParam0 };
				func_98(&Var2, &(Global_2404996.f_357[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_97(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404996.f_568 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404996.f_565);
		if (fVar0 < Global_2404996.f_568)
		{
			return 1;
		}
	}
	return 0;
}

void func_98(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_100(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404996.f_2513) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_100(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_100(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_94(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404996.f_2513) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_99(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_75(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_99(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

Vector3 func_100(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_94(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_99(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_75(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x6B839244A185DBDF(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_189(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_112(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x19007189599EBBF5(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_101(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_103();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404996.f_357[iVar0 /*12*/].f_9 == 1)
		{
			if (func_102(Param0, &(Global_2404996.f_357[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_102(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_189(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404996.f_2513) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_112(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404996.f_357[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_104(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409496[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409496[iVar0 /*17*/].f_16))
			{
				if (func_102(*uParam0, &(Global_2409496[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409496[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409496[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_98(&Var1, &(Global_2409496[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_104(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_98(&Var1, &(Global_2409496[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_105(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404996.f_502)
	{
		if (!Global_2404996.f_43.f_312)
		{
			if (!func_109(unk_0x0FFED3E94261A832(), 1))
			{
				return 1;
			}
			if (!func_108(Param0, 1008981770))
			{
				if (!func_104(&Param0, 0, 0, 0))
				{
					return 1;
				}
				else if (func_104(&Param0, 0, 1, 0))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_107(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_106(&(Global_2404996.f_43[iVar0 /*12*/])) };
					if (!func_104(&Var1, 0, 0, 0))
					{
						if (!func_104(&Param0, 0, 0, 0))
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

Vector3 func_106(var uParam0)
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

int func_107(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404996.f_43[iVar0 /*12*/].f_9)
		{
			if (func_102(Param0, &(Global_2404996.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_108(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404996.f_43[iVar0 /*12*/].f_9)
		{
			if (func_102(Param0, &(Global_2404996.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_109(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_110(iParam0) != 0;
	}
	return func_90(iParam0, bParam1);
}

int func_110(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_2422215[iParam0 /*387*/].f_1;
	}
	return 0;
}

int func_111(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404996.f_2053 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404996.f_2053)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404996.f_2054[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404996.f_2054[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_112(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_113(&Param3, &Param6);
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

void func_113(var uParam0, var uParam1)
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

int func_114(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_115(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_116(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404996.f_2282.f_1 == 0 && Global_2404996.f_2282 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x051B106169512DAC(&(Global_2404996.f_2282.f_1)))
			{
				case 0:
					func_181(uParam1, uParam2);
					if (!Global_2404996.f_2282.f_2)
					{
						if (uParam2->f_7 && Global_2404996.f_531.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
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
								*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
							}
							if (uParam1->f_5 && func_69(Global_2404996.f_478))
							{
								if (!Global_2404996.f_2282.f_5)
								{
									Global_2404996.f_2282.f_5 = 1;
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
							uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_181(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xA4C66BC652DBFE4B())
		{
			if (!unk_0x66DE426B0AE4B2C3())
			{
				if (unk_0x1DE11E68D5FB249D())
				{
					func_181(uParam1, uParam2);
					Global_2404996.f_2282.f_1 = unk_0x015AAFB0726848F9();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x9F2805D9F870E084();
				func_181(uParam1, uParam2);
				if (!Global_2404996.f_2282.f_2)
				{
					Global_2404996.f_2282.f_5 = 1;
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
		func_178(Global_2404996.f_531, &(Global_2404996.f_2282.f_52), &(Global_2404996.f_2282.f_85));
	}
	if (uParam2->f_7 && !Global_2404996.f_2282.f_4)
	{
		Global_2404996.f_2282.f_4 = 1;
		func_124(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
	if (Global_2404996.f_2282.f_1 > 0 || Global_2404996.f_2282 > 0)
	{
		if (uParam1->f_5 || unk_0xA4C66BC652DBFE4B())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404996.f_2282.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404996.f_2282.f_3)
					{
						iVar4 = Global_2404996.f_2282.f_3 + 1;
					}
					if (iVar4 > (Global_2404996.f_2282.f_1 - 1))
					{
						iVar4 = (Global_2404996.f_2282.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x9824E06B1062EFBA(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x34973F57AA6A72C9(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xDB8F566E828BD5EF(iVar4);
					}
					else
					{
						unk_0xEE759B6ABA0BD5CC(iVar4, &iVar5);
					}
					func_124(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404996.f_2282.f_3 = iVar4;
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
			iVar4 = Global_2404996.f_2282.f_1;
		}
		if (Global_2404996.f_2282.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2404996.f_2666)
			{
				func_118(&(Global_2404996.f_2282.f_6[0 /*9*/]), &(Global_2404996.f_2282.f_6[1 /*9*/]), &(Global_2404996.f_2282.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_69(Global_2404996.f_478))
			{
				if (Global_2404996.f_2282.f_2)
				{
					func_68(uParam0, &(Global_2404996.f_2282.f_6));
					func_117(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
					func_70(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
					func_117(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404996.f_2282.f_2)
			{
				func_68(uParam0, &(Global_2404996.f_2282.f_6));
				func_117(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x895FB9FE885E36ED(0, Global_2404996.f_2282.f_1);
				unk_0x9824E06B1062EFBA(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_74(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_117(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
					func_70(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
					func_117(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
				func_70(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
				func_117(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
		if (uParam1->f_5 && func_69(Global_2404996.f_478))
		{
			if (!Global_2404996.f_2282.f_5)
			{
				Global_2404996.f_2282.f_5 = 1;
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
		uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
		func_117(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_117(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404996.f_2411[(3 - iVar0) /*3*/] = { Global_2404996.f_2411[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404996.f_2411[0 /*3*/] = { Param0 };
}

void func_118(var uParam0, var uParam1, var uParam2)
{
	if (func_69(Global_2404996.f_478) && func_123() < 4096)
	{
		func_122(uParam0, 0f);
		func_122(uParam1, uParam0->f_2);
		func_122(uParam2, uParam1->f_2);
	}
	else
	{
		func_121(uParam0);
		func_120(uParam2, uParam0->f_4);
		func_119(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_119(var uParam0, struct<3> Param1, struct<3> Param4)
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
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407666[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407666[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407666[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407666[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_120(var uParam0, struct<3> Param1)
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
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407666[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407666[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407666[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_121(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			if (Global_2407666[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407666[iVar0 /*9*/].f_1;
				Var2 = { Global_2407666[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_122(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			if (Global_2407666[iVar0 /*9*/].f_2 < fVar1 && Global_2407666[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407666[iVar0 /*9*/].f_2;
				Var2 = { Global_2407666[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_123()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407666[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_124(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
		if (Global_2404996.f_478 == 1)
		{
			if (unk_0x3FEF699D13BCC798((Global_2404996.f_499.f_2 - Param0.f_2)) < 25f)
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
		if (func_176(unk_0x0FFED3E94261A832()))
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
		if (!func_175(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x67A55162BFFEB01D(unk_0x2A5EB8B0FE590B91(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x67A55162BFFEB01D(unk_0x2A5EB8B0FE590B91(), Param0, 20f))
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
		if (!func_174(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (func_168(Param0, fParam3, uParam4->f_15, func_173(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404996.f_3;
		}
	}
	else if (!func_165(Param0, 25f, unk_0x0FFED3E94261A832(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_164(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_164(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404996.f_663)
		{
			Var11 = { Global_2404996.f_499 };
			if (Global_2404996.f_478 == 26)
			{
				Var11 = { Global_2404996.f_531.f_18 };
			}
			if (!func_95(Param0, 0.5f))
			{
				if (func_105(Var11))
				{
					if (!func_104(&Param0, 0, 0, 0) && !func_163(&Param0, 0))
					{
						iVar7 += 512;
					}
				}
				else if (!func_163(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_162(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_161(unk_0x0FFED3E94261A832()) && func_160(unk_0x0FFED3E94261A832())))
		{
			if (!func_159(&Param0, &(Global_2404996.f_2282.f_85), 0, 1065353216))
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
		if (!func_160(unk_0x0FFED3E94261A832()))
		{
			if (!func_158(Param0, &(Global_2404996.f_2282.f_52), &(Global_2404996.f_2282.f_85), 1073741824))
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
	if (func_157(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_69(Global_2404996.f_478))
			{
				if (func_108(Param0, 0.01f))
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
		if (func_156(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404996.f_43.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404996.f_663)
		{
			if (!func_96(&Param0, 0, 0))
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
		iVar15 = func_107(Param0, 1008981770);
		if (iVar15 > -1)
		{
			func_155(Param0, &Var16, &Var19, &fVar22);
			if (!func_150(&(Global_2404996.f_43[iVar15 /*12*/]), Var16, Var19, fVar22))
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
	else if (func_149(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var24.f_2 = 1176256410;
	bVar33 = false;
	bVar34 = false;
	if (Global_2404996.f_2666 && uParam4->f_5)
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
				fVar0 = func_141(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			else
			{
				fVar0 = func_141(Param0, Global_2404996.f_2257, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_69(Global_2404996.f_478) && iVar7 < 4096)
			{
				Var24.f_2 = func_139(Param0);
			}
			Var24.f_4 = { Param0 };
			Var24.f_7 = fParam3;
			Var24.f_0 = iVar7;
			Var24.f_1 = fVar0;
			func_138(Var24);
			Global_2404996.f_2282.f_2 = 1;
		}
	}
	else
	{
		iVar23 = 0;
		while (iVar23 < 5)
		{
			if (iVar7 >= Global_2404996.f_2282.f_6[iVar23 /*9*/])
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
							fVar0 = func_141(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						else
						{
							fVar0 = func_141(Param0, Global_2404996.f_2257, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar33 = true;
					}
					if ((func_69(Global_2404996.f_478) && iVar7 == Global_2404996.f_2282.f_6[iVar23 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar34)
						{
							fVar2 = func_139(Param0);
							bVar34 = true;
						}
						if (fVar2 < Global_2404996.f_2282.f_6[iVar23 /*9*/].f_2)
						{
							Var24.f_4 = { Param0 };
							Var24.f_7 = fParam3;
							Var24.f_0 = iVar7;
							Var24.f_1 = fVar0;
							Var24.f_2 = fVar2;
							func_137(Var24, iVar23);
							Global_2404996.f_2282.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2404996.f_2282.f_6[iVar23 /*9*/] || (iVar7 == Global_2404996.f_2282.f_6[iVar23 /*9*/] && fVar0 > Global_2404996.f_2282.f_6[iVar23 /*9*/].f_1))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_1 = fVar0;
						func_137(Var24, iVar23);
						Global_2404996.f_2282.f_2 = 1;
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
						fVar5 = func_136(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_126(Param0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_125(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_125(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar33 = true;
					}
					if (iVar7 > Global_2404996.f_2282.f_6[iVar23 /*9*/] || (iVar7 == Global_2404996.f_2282.f_6[iVar23 /*9*/] && fVar3 > Global_2404996.f_2282.f_6[iVar23 /*9*/].f_3))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_3 = fVar3;
						func_137(Var24, iVar23);
						Global_2404996.f_2282.f_2 = 1;
						return;
					}
				}
			}
			iVar23++;
		}
	}
}

float func_125(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_126(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
			if (!iVar11 == unk_0x0FFED3E94261A832() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_128(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x220AE8028FACE96A(iVar11) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
					{
						if (!unk_0x220AE8028FACE96A(iVar11) == -1 || !func_109(unk_0x0FFED3E94261A832(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar11) || !bParam6)
					{
						if (func_127(iVar11))
						{
							Var5 = { func_8(iVar11) };
							if (!iVar11 == unk_0x0FFED3E94261A832())
							{
								Var8 = { unk_0x5895D6D5B19334A9(unk_0x1E199569E0295838(iVar11)) };
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
							fVar1 = unk_0x4A2E6F541CD8C36E(Param0, Var5, 1);
							fVar2 = unk_0x4A2E6F541CD8C36E(Param0, Var8, 1);
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

int func_127(int iParam0)
{
	if (unk_0xE64E8162575E0B82(unk_0x1E199569E0295838(iParam0)) || Global_2422215[iParam0 /*387*/].f_254)
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_134(iParam0))
		{
			if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam0))
			{
				if (!unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
				{
					if (func_90(unk_0x0FFED3E94261A832(), 1))
					{
						if (!func_133(unk_0x220AE8028FACE96A(iParam0), unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x220AE8028FACE96A(iParam0) == -1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
				{
					if (!func_90(unk_0x0FFED3E94261A832(), 1))
					{
						if (!func_129(iParam0))
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

int func_129(int iParam0)
{
	if (func_132(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	Global_2484572 = { func_131(iParam0) };
	if (unk_0xC869A9FE1FE47589(&Global_2484572))
	{
		return 1;
	}
	if (func_130(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0, int iParam1)
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

struct<13> func_131(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

int func_132(int iParam0, int iParam1)
{
	if (unk_0x591BB87E287F24DC())
	{
		Global_2484572 = { func_131(iParam0) };
		Global_2484585 = { func_131(iParam1) };
		if (unk_0x3BE1A7ECC62DB032(&Global_2484572))
		{
			if (unk_0x3BE1A7ECC62DB032(&Global_2484585))
			{
				unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572);
				unk_0x78823C36BAC4791B(&Global_2484537, 35, &Global_2484585);
				if (Global_2484502 == Global_2484537)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_133(int iParam0, int iParam1, int iParam2)
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
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 0);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 1);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 2);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 4);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 5);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 6);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 8);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 9);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 10);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 12);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 13);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 14);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_134(int iParam0)
{
	if (func_186(iParam0, 0))
	{
		return 1;
	}
	if (func_135())
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

bool func_135()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

float func_136(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_6(unk_0x0FFED3E94261A832(), 1, 1))
		{
			if (!unk_0xF4EE9D6C8E60AE22())
			{
				if (unk_0x14CEA5D3B9541B99(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0));
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
			if (!func_186(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0FFED3E94261A832()))
				{
					if (func_127(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x220AE8028FACE96A(iVar1) != unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))) || unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x220AE8028FACE96A(iVar1) != iParam7 || unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iVar1), 0));
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

void func_137(struct<9> Param0, int iParam9)
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404996.f_2282.f_6[iParam9 /*9*/] };
	Global_2404996.f_2282.f_6[iParam9 /*9*/] = { Param0 };
	if (iParam9 < 4)
	{
		func_137(Var0, iParam9 + 1);
	}
}

void func_138(struct<9> Param0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	float fVar11;
	int iVar12;
	
	Var1.f_2 = 1176256410;
	iVar10 = func_123();
	if (Param0.f_0 > iVar10)
	{
		iVar10 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] < iVar10)
		{
			Global_2407666[iVar0 /*9*/] = { Var1 };
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
		if (Global_2407666[iVar0 /*9*/] == 0)
		{
			Global_2407666[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			if (Global_2407666[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407666[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407666[iVar12 /*9*/] = { Param0 };
	}
}

float func_139(struct<3> Param0)
{
	var uVar0;
	
	return func_140(Param0, &(Global_2404996.f_43), &uVar0);
}

float func_140(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404996.f_2513) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_141(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
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
		fVar0 = func_125(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_126(Param0, 1, 0, 0, 1);
	fVar0 = func_125(fVar4, 0f, func_148(), func_146(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_144(Param0);
	fVar0 = func_125(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && !func_109(unk_0x0FFED3E94261A832(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_143(Param0, unk_0x0FFED3E94261A832(), 0);
	fVar0 = func_125(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_142(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_125(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_125(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_125(unk_0x2A488C176D52CCA5(Global_2404996.f_499, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_142(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x8CB53B9AB648FF36(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xB22A5C995D319408(uVar3))
	{
		unk_0x637503F5ED6C575B(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x3FEF699D13BCC798((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_143(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_6(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0, 1))
				{
					if (unk_0x220AE8028FACE96A(iVar3) != unk_0x220AE8028FACE96A(iParam3) || (unk_0x220AE8028FACE96A(iVar3) == -1 && unk_0x220AE8028FACE96A(iParam3) == -1))
					{
						if (Global_2416174.f_261[iVar2])
						{
							fVar1 = unk_0x2A488C176D52CCA5(Global_2416174.f_131[iVar2 /*3*/], Param0);
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
	}
	return fVar0;
}

float func_144(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0xC61D5B1728CFF322(unk_0x2A5EB8B0FE590B91(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x2137828D03306CAF(uVar6[iVar2]))
		{
			if (!unk_0xA9A04898798AE9E6(uVar6[iVar2], 0))
			{
				if (func_145(uVar6[iVar2]))
				{
					Var3 = { unk_0xD1EE0E9FCD74A37B(uVar6[iVar2], 1) };
					fVar1 = unk_0x4A2E6F541CD8C36E(Param0, Var3, 1);
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

int func_145(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xF14CC08EB3D9D296(uParam0);
	switch (unk_0xAEF0E480E33587E6(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0xAEF0E480E33587E6(uVar0, Global_1574695[unk_0x0FFED3E94261A832()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 0)
	{
		iVar1 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0xAEF0E480E33587E6(uVar0, Global_1574406[iVar1]))
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

float func_146()
{
	if (func_147())
	{
		if ((unk_0xDA6E804770521A18(Global_2404996.f_43.f_67) || unk_0x0F93427D94EAEAA2(Global_2404996.f_43.f_67)) || Global_2404996.f_43.f_67 == joaat("rhino"))
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

int func_147()
{
	if (Global_2404996.f_43.f_65 && !Global_2404996.f_43.f_299)
	{
		if (!func_134(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
	}
	return 0;
}

float func_148()
{
	if (func_147())
	{
		if ((unk_0xDA6E804770521A18(Global_2404996.f_43.f_67) || unk_0x0F93427D94EAEAA2(Global_2404996.f_43.f_67)) || Global_2404996.f_43.f_67 == joaat("rhino"))
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

int func_149(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0xB6FB1ADA41270763(Param0, fParam7)) || (fVar0 > 0f && unk_0x2F88ECCEDDE3F341(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x1EC399095E4E3649(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x1EC399095E4E3649(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_150(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_154(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_153(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_151(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_151(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_152(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x19007189599EBBF5(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_152(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
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

int func_153(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
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
		if (!unk_0x19007189599EBBF5(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_154(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
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
		if (!unk_0x19007189599EBBF5(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_155(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_79(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410462[iVar4])
	{
		if (func_78(Var1, &(Global_2409633[iVar4 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409633[iVar4 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409633[iVar4 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409633[iVar4 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410462[8])
	{
		if (func_78(Var1, &(Global_2409633[8 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409633[8 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409633[8 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409633[8 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_156(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404996.f_43.f_55)
	{
		if (unk_0xA419466089F321B4(Global_2404996.f_43.f_56))
		{
			if (!unk_0xF079EF2C4FF76DFD(Param0))
			{
				uVar0 = unk_0x65B447E36C1ED4C2(Param0);
				if (unk_0xA419466089F321B4(uVar0))
				{
					iVar1 = unk_0xB010A20402E92ABD(uVar0);
					if (!iVar1 == Global_2404996.f_43.f_57)
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

int func_157(struct<3> Param0)
{
	switch (Global_2404996.f_2278)
	{
		case 0:
			return func_189(Param0, Global_2404996.f_2257, Global_2404996.f_2260, 0, 0);
			break;
		
		case 1:
			return func_112(Param0, Global_2404996.f_2271, Global_2404996.f_2274, 0, 0);
			break;
		
		case 2:
			return unk_0x19007189599EBBF5(Param0, Global_2404996.f_2271, Global_2404996.f_2274, Global_2404996.f_2277, 0, 1);
			break;
	}
	return 0;
}

int func_158(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0x19007189599EBBF5(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_159(var uParam0, var uParam1, bool bParam2, float fParam3)
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
				func_94(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_160(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_28(iParam0))
			{
				if (Global_1592456[iParam0 /*635*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_161(int iParam0)
{
	if (func_90(iParam0, 1))
	{
		if (Global_1592456[iParam0 /*635*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_162(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404996.f_2411[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_163(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_97(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x399F81B56505EE6F(0.01f, 360f);
			func_94(&Var1, Global_2404996.f_565, Global_2404996.f_568, 1036831949, 0, fVar4);
			if (func_101(Var1, &uVar0) || func_97(Var1))
			{
				Var1 = { *uParam0 };
				func_94(&Var1, Global_2404996.f_565, Global_2404996.f_568, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_164(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_6(unk_0x0FFED3E94261A832(), 1, 1))
		{
			if (!unk_0xF4EE9D6C8E60AE22())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4A2E6F541CD8C36E(func_8(unk_0x0FFED3E94261A832()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x14CEA5D3B9541B99(Param0, fParam3))
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
			if (!func_186(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0FFED3E94261A832()))
				{
					if ((func_127(iVar1) || !bParam10) && !Global_2422215[iVar1 /*387*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x220AE8028FACE96A(iVar1) != unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))) || unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x4A2E6F541CD8C36E(func_8(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x220AE8028FACE96A(iVar1) != iParam8 || unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x4A2E6F541CD8C36E(func_8(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
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

int func_165(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_167(Param0, fParam3, iParam4, iParam5, 0) || func_166(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_166(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2416174.f_557[iVar0] == 0)
			{
				if (func_81(Param0, Global_2416174.f_427[iVar0 /*3*/], Global_2416174.f_524[iVar0], Global_2416174.f_557[iVar0], 1036831949))
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

int func_167(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
					if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
				{
					if (Global_2416174.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2416174.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416174.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2416174.f_131[iVar0 /*3*/], Param0) < fParam3)
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

int func_168(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2404996.f_3 = 0;
	if (!func_165(Param0, 0.5f, unk_0x0FFED3E94261A832(), 0, 0))
	{
		Global_2404996.f_3++;
		if (bParam5)
		{
			if (func_212(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
				if (!func_172(Param0, fParam12))
				{
					Global_2404996.f_3++;
					if (!func_80(Param0, 1056964608))
					{
						Global_2404996.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_212(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
				if (!func_172(Param0, fParam12))
				{
					Global_2404996.f_3++;
					if (!func_169(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404996.f_3++;
						if (!func_80(Param0, 1056964608))
						{
							Global_2404996.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
			}
		}
		else if (func_212(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
			if (!func_172(Param0, fParam12))
			{
				Global_2404996.f_3++;
				if (!func_169(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404996.f_3++;
					if (!func_80(Param0, 1056964608))
					{
						Global_2404996.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
		}
	}
	return 0;
}

int func_169(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x0FFED3E94261A832() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_127(iVar1)) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (!func_171(unk_0x0FFED3E94261A832(), iVar1, -2, 0))
				{
					if (func_170(func_8(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_170(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0x19007189599EBBF5(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_171(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && unk_0x220AE8028FACE96A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == iParam2;
	}
	return unk_0x220AE8028FACE96A(iParam0) == iParam2;
}

int func_172(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_127(iVar1)) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
		{
			if ((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && unk_0x220AE8028FACE96A(iVar1) == -1) && !func_109(unk_0x0FFED3E94261A832(), 1))
			{
				return 0;
			}
			else if ((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && !unk_0x0FFED3E94261A832() == iVar1) || !func_171(unk_0x0FFED3E94261A832(), iVar1, -2, 0))
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

int func_173(int iParam0)
{
	if ((Global_2404996.f_478 == 9 || Global_2404996.f_478 == 9) || (Global_2404996.f_478 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_174(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam8 == 0)
		{
			if (func_6(iVar1, bParam4, bParam5))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam7 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_127(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && iParam9) && bParam6) && func_129(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
							{
								if (unk_0x4A2E6F541CD8C36E(func_8(iVar1), Param0, 1) < fParam3)
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

int func_175(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_186(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1)) && iVar1 != unk_0x0FFED3E94261A832())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x220AE8028FACE96A(iVar1) == iVar3)
					{
						if (unk_0x4A2E6F541CD8C36E(func_8(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
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

int func_176(int iParam0)
{
	if ((func_109(iParam0, 1) || func_177(iParam0)) || func_33(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_177(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/] != -1;
	}
	return 0;
}

void func_178(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0xAA4F14DA15DB0B51(Global_2359719[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359719[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359719[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359719[iVar1 /*26*/].f_6.f_2;
					func_180(&Var2, uParam3, iVar0);
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
				func_179(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_179(var uParam0, var uParam1, int iParam2)
{
	Global_2411460 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_179(&Global_2411460, uParam1, iParam2 + 1);
	}
}

void func_180(var uParam0, var uParam1, int iParam2)
{
	Global_2411456 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_180(&Global_2411456, uParam1, iParam2 + 1);
	}
}

void func_181(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404996.f_2053 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404996.f_2053)
		{
			if (func_182(Global_2404996.f_2054[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404996.f_2054[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404996.f_2054[iVar0 /*4*/] };
					fVar4 = unk_0x2410C2F4DC01A40D(Var1.f_0, Var1.f_1);
				}
				func_124(Global_2404996.f_2054[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404996.f_2282++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2404996.f_2666)
	{
		func_118(&(Global_2404996.f_2282.f_6[0 /*9*/]), &(Global_2404996.f_2282.f_6[1 /*9*/]), &(Global_2404996.f_2282.f_6[2 /*9*/]));
	}
}

int func_182(struct<3> Param0, var uParam3)
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

void func_183(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_113(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

var func_184()
{
	return Global_1310987.f_4;
}

void func_185(var uParam0, var uParam1)
{
	func_219();
	func_211(uParam0, uParam1);
}

bool func_186(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_187(-1, 0) == 8;
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

int func_187(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_188();
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

int func_188()
{
	return Global_1312735;
}

bool func_189(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_190(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404996.f_1710 > 0 && func_208(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_191(uParam0, uParam1, uParam2);
	}
}

void func_191(var uParam0, var uParam1, var uParam2)
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
	int iVar18;
	bool bVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	float fVar24;
	int iVar25;
	struct<3> Var26;
	var uVar29;
	struct<3> Var30;
	float fVar33;
	bool bVar34;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_93(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_207(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
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
	Global_2411470.f_162 = 0;
	Global_2411470.f_163 = 0;
	Global_2411470.f_164 = -99;
	Global_2411470.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411470[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411470.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_86(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x8CB53B9AB648FF36(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xB22A5C995D319408(iVar8))
		{
			unk_0x637503F5ED6C575B(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411470.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411470.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xAF3BC0B78BEBFE3C(iVar8)) || unk_0x69BC60DD5A50B10D(iVar8))
			{
				unk_0xAA55F1A37EDDE3B7(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_163(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_206(Var1))
									{
										Var1 = { func_204(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_80(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_203(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_207(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_198(Var1, fVar4, uParam2->f_34, unk_0x0FFED3E94261A832(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_93(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar18 = uParam2->f_31;
																					bVar19 = true;
																					iVar20 = 1;
																					fVar21 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar18 = 0;
																						bVar19 = false;
																						iVar20 = 0;
																						fVar21 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar18 = 0;
																						bVar19 = false;
																						iVar20 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar21 = (fVar21 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar19 = true;
																						iVar20 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar21 = (fVar21 * 0.375f);
																							}
																						}
																					}
																					iVar22 = 0;
																					if (uParam2->f_3 > 7f)
																					{
																						if (func_212(Var1, 6f, 1f, 1f, 5f, iVar18, bVar19, iVar20, fVar21, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																						{
																							iVar22 = 1;
																						}
																					}
																					else if (func_212(Var1, 6f, 1f, 1f, 5f, iVar18, bVar19, iVar20, fVar21, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_197(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																					{
																						iVar22 = 1;
																					}
																					if (iVar22 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar24 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar23 = func_196(Var1, uParam2->f_54, &fVar24);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar23 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar23 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411470.f_162)
																										{
																											Global_2411470[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2411470.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2411470.f_162 = 0;
																										uParam2->f_53 = iVar23;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2411470.f_162 == 0)
																									{
																										Global_2411470[0 /*3*/] = { Var1 };
																										Global_2411470.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411470.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411470[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_195(Var1, fVar4, iVar16);
																													iVar16 = Global_2411470.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2411470.f_162++;
																									if (Global_2411470.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411470.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2411470[Global_2411470.f_162 /*3*/] = { Var1 };
																									Global_2411470.f_121[Global_2411470.f_162] = fVar4;
																									Global_2411470.f_162++;
																									if (func_203(Var1, uParam2))
																									{
																										Global_2411470.f_163++;
																									}
																									if (Global_2411470.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411470.f_162 == 40)
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
				if (Global_2411470.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411470[0 /*3*/] };
						*uParam1 = Global_2411470.f_121[0];
						return;
					}
					else
					{
						if (Global_2411470.f_163 > 0 && !Global_2411470.f_163 == Global_2411470.f_162)
						{
							func_193(0, uParam2);
						}
						iVar25 = unk_0x895FB9FE885E36ED(0, Global_2411470.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar25 = 0;
						}
						Var26 = { Global_2411470[0 /*3*/] };
						uVar29 = Global_2411470.f_121[0];
						Global_2411470[0 /*3*/] = { Global_2411470[iVar25 /*3*/] };
						Global_2411470.f_121[0] = Global_2411470.f_121[iVar25];
						Global_2411470[iVar25 /*3*/] = { Var26 };
						Global_2411470.f_121[iVar25] = uVar29;
						*uParam0 = { Global_2411470[0 /*3*/] };
						*uParam1 = Global_2411470.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_191(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x895FB9FE885E36ED((1 + iVar15), (40 + iVar15));
						unk_0x74AE6A2A7B9031D9(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_204(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var30 = { Var1 };
						fVar33 = fVar4;
						if (!uParam2->f_50)
						{
							bVar34 = true;
						}
						else
						{
							bVar34 = false;
						}
						if (func_93(uParam2->f_35, &Var30, &(uParam2->f_38), &(uParam2->f_45), bVar34, 1) || func_207(&Var30, bVar34))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var30 };
								*uParam1 = fVar33;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_191(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var30 };
								*uParam1 = fVar33;
								return;
							}
						}
						else
						{
							*uParam0 = { Var30 };
							*uParam1 = fVar33;
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
				func_191(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_192(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411470.f_164 = iVar8;
	}
}

void func_192(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_165(*(uParam0[iVar2 /*4*/]), 5f, unk_0x0FFED3E94261A832(), 0, 0))
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

void func_193(int iParam0, var uParam1)
{
	if (!func_203(Global_2411470[iParam0 /*3*/], uParam1))
	{
		Global_2411470.f_162 = (Global_2411470.f_162 - 1);
		func_194(iParam0);
		if (Global_2411470.f_162 > Global_2411470.f_163)
		{
			func_193(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_193(iParam0 + 1, uParam1);
	}
}

void func_194(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411470[iParam0 /*3*/] = { Global_2411470[iParam0 + 1 /*3*/] };
			Global_2411470.f_121[iParam0] = Global_2411470.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_195(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411470[iParam4 /*3*/] };
	uVar3 = Global_2411470.f_121[iParam4];
	Global_2411470[iParam4 /*3*/] = { Param0 };
	Global_2411470.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411470.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_195(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_196(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_128(iVar5))
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

int func_197(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam9 == 0)
		{
			if (func_6(iVar1, bParam5, bParam6))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam8 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_127(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && iParam10) && bParam7) && func_129(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
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

int func_198(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_202(Param0, fParam3, iParam4, iParam5, iParam6) || func_199(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_199(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_201(Param0, iParam4, Global_2416174.f_427[iVar0 /*3*/], Global_2416174.f_557[iVar0]))
			{
				if (func_200(Param0, fParam3, iParam4, Global_2416174.f_427[iVar0 /*3*/], Global_2416174.f_524[iVar0], Global_2416174.f_557[iVar0], 0))
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

int func_200(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_81(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_83(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	Var20 = { 0f, Var17.f_1, 0f };
	func_88(&Var20, 0f, 0f, fParam3);
	Var23 = { 0f, Var14.f_1, 0f };
	func_88(&Var23, 0f, 0f, fParam3);
	Var26 = { (unk_0x3FEF699D13BCC798((Var17.f_0 - Var14.f_0)) * 0.5f), 0f, 0f };
	func_88(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
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
		if (func_200(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_201(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_89(iParam3, 1008981770);
	fVar1 = func_89(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_202(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
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
				if (Global_2416174.f_261[iVar0])
				{
					if (func_81(Global_2416174.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_81(func_8(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416174.f_261[iVar0])
			{
				if (func_81(Global_2416174.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
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

int func_203(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_189(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_112(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x19007189599EBBF5(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_204(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	float fVar17;
	float fVar20;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_205(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xAA55F1A37EDDE3B7(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x1FD487C25EAD970B(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
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
			if ((iVar8 + iVar9) != iParam4)
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
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				func_83(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
				fVar20 = (fVar17 - fVar14);
				if (fVar20 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar20 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_205(Param0, *fParam3, Param6))
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
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { unk_0xEBB6A451E594E1A8(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x2A381E6324A8F56E(Param0, *fParam3, &Var21))
		{
			Var24 = { Var21 - Param0 };
			if (!iParam11 == 0)
			{
				Var27 = { Var24 / FtoV(unk_0x652D2EEEF1D3E62C(Var24)) };
				func_83(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
				fVar20 = (fVar17 - fVar14);
				Var27 = { Var27 * FtoV((fVar20 * 0.5f)) };
				Var24 = { Var24 - Var27 };
				Var21 = { Param0 + Var24 };
			}
			Var27 = { Var0 - Var21 };
			Var0 = { Var21 };
		}
	}
	return Var0;
}

int func_205(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_88(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_76(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_206(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_79(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2411184[iVar1])
	{
		if (func_78(Param0, &(Global_2410481[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411184[8])
	{
		if (func_78(Param0, &(Global_2410481[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_207(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404996.f_26.f_16)
	{
		switch (Global_2404996.f_26.f_15)
		{
			case 0:
				if (func_189(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_112(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x19007189599EBBF5(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_11, Global_2404996.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_100(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_11, Global_2404996.f_26.f_14, Global_2404996.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_208(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2404996.f_1710 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_93(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_207(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2411470.f_162 = 0;
		Global_2411470.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2411470[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2411470.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_209(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2404996.f_1710)
		{
			iVar1 = Global_2404996.f_1984[iVar0];
			if (iVar1 > -1 && iVar1 < 68)
			{
				Var2 = { Global_2404996.f_1711[iVar1 /*4*/] };
				fVar5 = Global_2404996.f_1711[iVar1 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var2) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var2.f_0, Var2.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_198(Var2, fVar5, uParam2->f_34, unk_0x0FFED3E94261A832(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_93(uParam2->f_35, &Var2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0.375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (uParam2->f_3 > 7f)
										{
											if (func_212(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
											{
												bVar11 = true;
											}
										}
										else if (func_212(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_197(Var2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
										{
											bVar11 = true;
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_196(Var2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2411470.f_162)
															{
																Global_2411470[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2411470.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2411470.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2411470.f_162 == 0)
														{
															Global_2411470[0 /*3*/] = { Var2 };
															Global_2411470.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2411470.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var2, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411470[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_195(Var2, fVar5, iVar6);
																		iVar6 = Global_2411470.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2411470.f_162++;
														if (Global_2411470.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2404996.f_1710;
															}
															else if (Global_2411470.f_162 == 40)
															{
																iVar0 = Global_2404996.f_1710;
															}
														}
													}
													else
													{
														Global_2411470[Global_2411470.f_162 /*3*/] = { Var2 };
														Global_2411470.f_121[Global_2411470.f_162] = fVar5;
														Global_2411470.f_162++;
														if (Global_2411470.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2404996.f_1710;
															}
															else if (Global_2411470.f_162 == 40)
															{
																iVar0 = Global_2404996.f_1710;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var2 };
										*uParam1 = fVar5;
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
		if (Global_2411470.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411470[0 /*3*/] };
				*uParam1 = Global_2411470.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411470.f_163 > 0 && !Global_2411470.f_163 == Global_2411470.f_162)
				{
					func_193(0, uParam2);
				}
				iVar14 = unk_0x895FB9FE885E36ED(0, Global_2411470.f_162);
				Var15 = { Global_2411470[0 /*3*/] };
				uVar18 = Global_2411470.f_121[0];
				Global_2411470[0 /*3*/] = { Global_2411470[iVar14 /*3*/] };
				Global_2411470.f_121[0] = Global_2411470.f_121[iVar14];
				Global_2411470[iVar14 /*3*/] = { Var15 };
				Global_2411470.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2411470[0 /*3*/] };
				*uParam1 = Global_2411470.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_208(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_191(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_209(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2404996.f_1710)
	{
		uVar1 = func_210(Param0, fVar0, &fVar0);
		Global_2404996.f_1984[iVar2] = uVar1;
		iVar2++;
	}
}

int func_210(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2404996.f_1710)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2404996.f_1711[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

void func_211(var uParam0, var uParam1)
{
	unk_0x9A7EBCFC53C6E54A(uParam0, uParam1, 0.1f);
	Global_2404996.f_2265 = unk_0xFF09208EC90C94CB();
	Global_2404996.f_2263 = 1;
	Global_2404996.f_2266 = unk_0x11ABC381A58DD5AB();
}

int func_212(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404996.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xB6FB1ADA41270763(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x2F88ECCEDDE3F341(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x2F88ECCEDDE3F341(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x1EC399095E4E3649(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam13)
	{
		if (unk_0x9B4C386906F18D2A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (fParam14 > 0f)
	{
		if (func_174(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_164(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404996.f_2++;
	return 1;
}

void func_213()
{
	func_218();
	func_217();
	func_216();
	func_215();
	func_214();
}

void func_214()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407666[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_215()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404996.f_2282.f_85[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_216()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404996.f_2282.f_52[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_217()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 5)
	{
		Global_2404996.f_2282.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_218()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404996.f_2282 = { Var0 };
}

void func_219()
{
	if (Global_2404996.f_2263)
	{
		if (unk_0xFF09208EC90C94CB() == Global_2404996.f_2265)
		{
			unk_0xA1A58DB8A7A22164();
		}
		else
		{
			unk_0xA1A58DB8A7A22164();
		}
		Global_2404996.f_2263 = 0;
	}
}

int func_220(bool bParam0)
{
	if (unk_0xF4EE9D6C8E60AE22())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_221(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x0F39DF6675B2333E(iParam0);
	return unk_0xA1FC9D7AEA164881(iParam0);
}

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_94.f_49;
			break;
	}
	return 0;
}

int func_223()
{
	if (iLocal_315 == 0)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_224()
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
	
	if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 0))
	{
		unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 0);
		if (iLocal_315 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_317, 1, 1))
		{
			if (unk_0xD7381CA7CDE5E23C(false, 0) - unk_0x1DFA3B8DE71107F9(0)) >= func_438(iLocal_315)
			{
				if (unk_0xF157AC7C4936A07C(func_438(iLocal_315)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = unk_0x1E199569E0295838(iLocal_317);
					iVar3 = unk_0xC61D5B1728CFF322(iVar2, &uLocal_500, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_438(iLocal_315))
							{
								if (iVar5 == -1)
								{
									if (((!unk_0x3756406E4D76B25E(Local_94.f_10[iVar1 /*7*/]) && !unk_0xAA4F14DA15DB0B51(Local_94.f_10[iVar1 /*7*/].f_2, 1)) && !unk_0xAA4F14DA15DB0B51(Local_94.f_10[iVar1 /*7*/].f_2, 6)) && !unk_0xAA4F14DA15DB0B51(Local_94.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (unk_0x2137828D03306CAF(uLocal_500[iVar0]))
								{
									if (!unk_0xA9A04898798AE9E6(uLocal_500[iVar0], 0))
									{
										if (!unk_0xDB61DD81432BD145(uLocal_500[iVar0]))
										{
											if (func_226(unk_0xD3B21CE53AA7BE51(uLocal_500[iVar0])))
											{
												if (!unk_0x03322C3918511AA0(uLocal_500[iVar0]))
												{
													if (!unk_0xC4A39E4229BD3ABE(uLocal_500[iVar0], 0))
													{
														if (func_5(unk_0xD1EE0E9FCD74A37B(uLocal_500[iVar0], 1), unk_0xD1EE0E9FCD74A37B(iVar2, 1), 625f))
														{
															unk_0x216B434C1A609F5B(uLocal_500[iVar0], 1, 0);
															Local_94.f_10[iVar5 /*7*/].f_6 = iVar0;
															unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iVar5 /*7*/].f_2), 8);
															if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 12))
															{
																Local_94.f_8 = uLocal_322;
																unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 12);
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
	else if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_438(iLocal_315))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_94.f_10[iVar6 /*7*/].f_2, 1) || unk_0xAA4F14DA15DB0B51(Local_94.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_94.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!unk_0xA9A04898798AE9E6(uLocal_500[Local_94.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (unk_0x03322C3918511AA0(uLocal_500[Local_94.f_10[iVar6 /*7*/].f_6]))
					{
						if (!unk_0x1979A7D1D0538188(uLocal_500[Local_94.f_10[iVar6 /*7*/].f_6]))
						{
							unk_0xC620100105DBAFCF(uLocal_500[Local_94.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							unk_0x88146CB95BA975DD(uLocal_500[Local_94.f_10[iVar6 /*7*/].f_6], 1);
							Local_94.f_10[iVar6 /*7*/] = unk_0xDF7D91421097E934(uLocal_500[Local_94.f_10[iVar6 /*7*/].f_6]);
							unk_0x9C9DFC1EC7F62115(Local_94.f_10[iVar6 /*7*/], 1);
							unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iVar6 /*7*/].f_2), 0);
							Local_94.f_10[iVar6 /*7*/].f_1 = iLocal_315;
							Local_94.f_10[iVar6 /*7*/].f_4 = func_64(iLocal_315);
							func_62(iVar6);
							unk_0x507FE690B1271947(&(Local_94.f_10[iVar6 /*7*/].f_2), 8);
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
		if (!bVar8 || unk_0x2AA4F22517A69BB6(uLocal_322, Local_94.f_8) > 5000)
		{
			if (iVar7 >= func_438(iLocal_315))
			{
				unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_500[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_438(iLocal_315))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_94.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_225(&(Local_94.f_10[iVar6 /*7*/]));
					unk_0x507FE690B1271947(&(Local_94.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			unk_0x507FE690B1271947(&(Local_94.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_225(var uParam0)
{
	var uVar0;
	
	if (unk_0xD0BCF9877CD72A3F(*uParam0))
	{
		uVar0 = unk_0x7BAE3A9057619E1F(*uParam0);
		unk_0xC76AD47E2B4CE25C(&uVar0);
	}
}

int func_226(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_227()
{
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_315 == 0)
	{
		Local_94.f_49 = func_228(Local_94.f_36, 1);
		unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 6);
		return 1;
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 6);
		return 1;
	}
	return 0;
}

int func_228(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	if (func_229(Param0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_229(Param0, 1100f, -196f, 300f, 350f, 0) || func_229(Param0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_229(Param0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_229(Param0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_229(Param0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_229(Param0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_229(Param0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam3 == 1)
	{
		iVar0 = unk_0x895FB9FE885E36ED(0, 100);
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
			iVar0 = unk_0x895FB9FE885E36ED(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_229(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	return unk_0x4A2E6F541CD8C36E(Param0, Param3, iParam7) <= fParam6;
}

void func_230(int iParam0)
{
	if (unk_0x769F0F6444C1ABE0(iParam0))
	{
	}
	Local_94.f_36 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	if (func_231(iParam0, 0))
	{
		unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 17);
	}
	else
	{
		unk_0x507FE690B1271947(&(Local_94.f_1), 17);
	}
}

int func_231(int iParam0, int iParam1)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (!unk_0xA9A04898798AE9E6(iParam0, 0) || iParam1)
		{
			if (unk_0xABCF7EB00A727656(iParam0))
			{
				if (unk_0x6827BD0B033EC308(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_232()
{
	bool bVar0;
	
	if (unk_0x62E688B72E3C57B0())
	{
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_315)
			{
				case 0:
					if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 11))
					{
						if (func_6(iLocal_317, 1, 1))
						{
							if (unk_0xB7A628320EFF8E47(func_8(iLocal_317), Local_94.f_39) > 625f)
							{
								unk_0x507FE690B1271947(&(Local_94.f_2), 11);
								unk_0x507FE690B1271947(&iLocal_309, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_317, 1, 1))
						{
							bVar0 = true;
							if (func_235())
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
						if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 5))
						{
							if (func_234())
							{
								func_58();
								unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_317, 1, 1))
					{
						bVar0 = true;
						if (func_233())
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
					if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 5))
					{
						if (unk_0x2AA4F22517A69BB6(uLocal_322, Local_94.f_5) > 30000)
						{
							func_58();
							unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_233()
{
	int iVar0;
	
	iVar0 = unk_0x1E199569E0295838(iLocal_317);
	if (((((unk_0xB54451B05F280358(iVar0) || unk_0xABCF7EB00A727656(iVar0)) || func_29(iLocal_317, 1, 0)) || func_36(iLocal_317, 0)) || func_36(iLocal_317, 7)) || func_28(iLocal_317))
	{
		return 1;
	}
	if (func_109(iLocal_317, 1))
	{
		if (iLocal_317 > -1)
		{
			if (Global_1592456[iLocal_317 /*635*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_234()
{
	if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 18))
	{
		if (unk_0x2AA4F22517A69BB6(uLocal_322, Local_94.f_5) > 5000)
		{
			unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 18);
			return 1;
		}
	}
	else if (unk_0x2AA4F22517A69BB6(uLocal_322, Local_94.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_235()
{
	int iVar0;
	
	iVar0 = unk_0x1E199569E0295838(iLocal_317);
	if (((((((((unk_0xD2660BAC03EB7433(iVar0) > 10f || unk_0xB54451B05F280358(iVar0)) || unk_0xABCF7EB00A727656(iVar0)) || func_29(iLocal_317, 1, 0)) || func_56(iLocal_317)) || func_36(iLocal_317, 0)) || func_36(iLocal_317, 7)) || func_28(iLocal_317)) || Global_2422215[iLocal_317 /*387*/].f_247) || func_55(unk_0x1E199569E0295838(iLocal_317), joaat("titan")))
	{
		return 1;
	}
	if (func_109(iLocal_317, 1))
	{
		if (iLocal_317 > -1)
		{
			if (Global_1592456[iLocal_317 /*635*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_317 != -1)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_148[iLocal_317 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_236()
{
	if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 14))
	{
		Local_94.f_9 = uLocal_322;
		unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 14);
	}
}

void func_237()
{
	if (Local_94.f_44 != Local_148[iLocal_316 /*5*/].f_4)
	{
		Local_94.f_44 = Local_148[iLocal_316 /*5*/].f_4;
	}
}

void func_238()
{
	if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 10))
	{
		Local_94.f_45 = func_438(iLocal_315);
		Local_94.f_46 = 0;
		Local_94.f_47 = 0;
		unk_0xF6082E2ADA1C795B(&(Local_94.f_1), 10);
	}
}

void func_239()
{
	func_240();
	if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 8))
	{
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 7))
		{
			if (unk_0x2AA4F22517A69BB6(uLocal_322, Local_94.f_7) > 300000)
			{
				unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 8);
			}
		}
	}
}

void func_240()
{
	if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 7))
	{
		Local_94.f_7 = uLocal_322;
		unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 7);
	}
}

void func_241()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xF6082E2ADA1C795B(&iLocal_309, 7);
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 1))
	{
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 2))
	{
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 3))
	{
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 9))
	{
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 4))
	{
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 5))
	{
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 11))
	{
		if (unk_0x0FFED3E94261A832() == iLocal_316)
		{
			unk_0x507FE690B1271947(&iLocal_309, 7);
			if (Local_94.f_50)
			{
				unk_0xF6082E2ADA1C795B(&iLocal_309, 7);
			}
			else if (func_340("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_309, 7);
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 6))
	{
		if (unk_0x0FFED3E94261A832() == iLocal_316)
		{
			unk_0x507FE690B1271947(&iLocal_309, 7);
			if (Local_94.f_50)
			{
				unk_0xF6082E2ADA1C795B(&iLocal_309, 7);
			}
			else if (func_340("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_309, 7);
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 7))
	{
		if (unk_0x0FFED3E94261A832() == iLocal_316)
		{
			unk_0x507FE690B1271947(&iLocal_309, 7);
			if (func_311())
			{
				if (!Local_94.f_50)
				{
					iLocal_517 = func_308(12);
					func_306(iLocal_517, 1, 0, 0f);
					func_294(iLocal_517, 4, 1, 1);
					unk_0xF6082E2ADA1C795B(&iLocal_309, 7);
				}
				else
				{
					unk_0xF6082E2ADA1C795B(&iLocal_309, 7);
				}
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 0))
	{
		if (unk_0x0FFED3E94261A832() == iLocal_316)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 1))
			{
				unk_0x507FE690B1271947(&iLocal_309, 7);
				if (func_340("MPCT_mugfail", "LAMAR", 19))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_309, 7);
				}
			}
		}
		else if (unk_0x0FFED3E94261A832() == iLocal_317)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 1))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 12))
				{
					iVar0 = unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_5558) * Global_262145.f_4293));
					func_257(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_243(47, 1);
				}
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 8))
	{
		if (unk_0x0FFED3E94261A832() == iLocal_316)
		{
			unk_0x507FE690B1271947(&iLocal_309, 7);
			if (func_311())
			{
				if (iLocal_315 == 0)
				{
					iLocal_517 = (func_308(2) * func_438(iLocal_315));
					iVar1 = 3;
				}
				else
				{
					iLocal_517 = func_308(12);
					iVar1 = 4;
				}
				if (!Local_94.f_50)
				{
					func_306(iLocal_517, 1, 0, 0f);
					func_294(iLocal_517, iVar1, 1, 0);
					unk_0xF6082E2ADA1C795B(&iLocal_309, 7);
				}
				else
				{
					unk_0xF6082E2ADA1C795B(&iLocal_309, 7);
				}
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 10))
	{
		if (unk_0x0FFED3E94261A832() == iLocal_316)
		{
			unk_0x507FE690B1271947(&iLocal_309, 7);
			if (func_311())
			{
				if (iLocal_315 == 0)
				{
					iLocal_517 = (func_308(2) * func_438(iLocal_315));
					iVar2 = 3;
				}
				else
				{
					iLocal_517 = func_308(12);
					iVar2 = 4;
				}
				if (!Local_94.f_50)
				{
					func_306(iLocal_517, 1, 0, 0f);
					func_294(iLocal_517, iVar2, 1, 0);
					unk_0xF6082E2ADA1C795B(&iLocal_309, 7);
				}
				else
				{
					unk_0xF6082E2ADA1C795B(&iLocal_309, 7);
				}
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_309, 7))
	{
		func_242();
	}
}

void func_242()
{
	unk_0x507FE690B1271947(&(Global_1592456[unk_0x87B7000A6C80CCEF() /*635*/].f_141), iLocal_315);
	Global_1592456[unk_0x87B7000A6C80CCEF() /*635*/].f_142 = -1;
	if (iLocal_315 == 1)
	{
		if (unk_0x6365DBD30B96E789(uLocal_499))
		{
			unk_0xCCCDFAAE6D2C2A90(uLocal_499);
		}
	}
	func_467();
	func_499();
}

int func_243(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_244(iParam0, iParam1);
}

int func_244(int iParam0, int iParam1)
{
	if (func_256(14) && !func_255(iParam0))
	{
		return 0;
	}
	if (unk_0xB735FB6B965DBBD2(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25468 != 0 && !Global_69800)
	{
		return 0;
	}
	if (func_254(&Global_2600921))
	{
		if (func_252(&Global_2600921, iParam0))
		{
			return 0;
		}
		if (func_245(&Global_2600921, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xC5AA25967DC5CBF2(iParam0))
		{
			return 0;
		}
		if (unk_0xB735FB6B965DBBD2(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_245(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xB735FB6B965DBBD2(iParam1))
	{
		return 0;
	}
	if (func_256(14) && !func_255(iParam1))
	{
		return 0;
	}
	if (func_252(uParam0, iParam1))
	{
		return 0;
	}
	if (func_251(uParam0) < 0f)
	{
		func_250(uParam0, 0);
	}
	func_248(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_246(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_246(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xB735FB6B965DBBD2(iParam1))
	{
		return 0;
	}
	if (func_256(14) && !func_255(iParam1))
	{
		return 0;
	}
	if (func_252(uParam0, iParam1))
	{
		return 0;
	}
	if (func_251(uParam0) < 0f)
	{
		func_250(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_247(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_247(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_248(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_249(uParam0, iVar0);
		iVar0++;
	}
	func_250(uParam0, (Global_2600920 - 0.5f));
}

void func_249(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_250(var uParam0, float fParam1)
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

float func_251(var uParam0)
{
	return uParam0->f_72;
}

bool func_252(var uParam0, int iParam1)
{
	return func_253(uParam0, iParam1) != -1;
}

int func_253(var uParam0, int iParam1)
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

bool func_254(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_255(int iParam0)
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

bool func_256(int iParam0)
{
	return Global_35813 == iParam0;
}

var func_257(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_258(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_258(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_259(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_259(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_293(unk_0x0FFED3E94261A832()) || func_292(unk_0x0FFED3E94261A832()))
	{
		if (Global_262145.f_8301 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8301;
		}
	}
	else if (Global_262145.f_5551 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_5551;
	}
	if (func_291(uParam2))
	{
	}
	if (func_290())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_288(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_287(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_285(0, &iVar1);
					break;
				
				case 3:
					func_285(1, &iVar1);
					break;
				
				case 1:
					func_283(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1779834)
		{
			return 0;
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
			func_280(1160, iVar1, -1);
			if (iParam1 == 0)
			{
				func_269((func_279(unk_0x0FFED3E94261A832()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5742D3A1BB73A77E(iVar1, iParam8, iParam9);
				if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_2 != -1)
				{
					func_280(1161, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_264(iVar1);
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
				func_260((func_262(unk_0x0FFED3E94261A832()) + iVar1));
			}
			else
			{
				func_260((func_262(unk_0x0FFED3E94261A832()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_260(int iParam0)
{
	if (func_290())
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_5 = iParam0;
		func_261(joaat("mpply_globalxp"), iParam0);
	}
}

void func_261(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
}

int func_262(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return func_263(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_5;
			}
		}
		else
		{
			return func_263(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_263(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_264(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_131(unk_0x0FFED3E94261A832()) };
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(&Var0))
		{
			iVar13 = func_267(func_268(&Var0));
			if (iVar13 == 0)
			{
				func_266(&Global_1361887, iParam0);
				func_265(joaat("mpply_crew_local_xp_0"), Global_1361887);
			}
			else if (iVar13 == 1)
			{
				func_266(&Global_1361888, iParam0);
				func_265(joaat("mpply_crew_local_xp_1"), Global_1361888);
			}
			else if (iVar13 == 2)
			{
				func_266(&Global_1361889, iParam0);
				func_265(joaat("mpply_crew_local_xp_2"), Global_1361889);
			}
			else if (iVar13 == 3)
			{
				func_266(&Global_1361890, iParam0);
				func_265(joaat("mpply_crew_local_xp_3"), Global_1361890);
			}
			else if (iVar13 == 4)
			{
				func_266(&Global_1361891, iParam0);
				func_265(joaat("mpply_crew_local_xp_4"), Global_1361891);
			}
		}
	}
}

void func_265(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1361882 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1361884 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1361884 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1361885 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1361886 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1361887 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1361888 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1361889 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1361890 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1361891 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1361892 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1361893 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1361894 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1361895 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1361896 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1361897 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1361898 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_266(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_267(int iParam0)
{
	if (iParam0 == Global_1361882)
	{
		return 0;
	}
	else if (iParam0 == Global_1361883)
	{
		return 1;
	}
	else if (iParam0 == Global_1361884)
	{
		return 2;
	}
	else if (iParam0 == Global_1361885)
	{
		return 3;
	}
	else if (iParam0 == Global_1361886)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_268(var uParam0)
{
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return Global_2454636;
		}
	}
	return Global_2454636;
}

void func_269(int iParam0, int iParam1, int iParam2)
{
	if (func_290())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8271 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362002[func_278(-1)])
				{
					unk_0x5742D3A1BB73A77E(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362002[func_278(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_277(unk_0x0FFED3E94261A832()))
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_1 = iParam0;
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_6 = func_275(iParam0, 1);
		}
		func_274(635, iParam0, -1, 1);
		func_273(636, func_275(iParam0, 1), -1, 1, 0);
		Global_1362002[func_278(-1)] = iParam0;
		func_270(7, 0);
	}
}

void func_270(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_272(iParam0, iParam1))
	{
		iVar0 = func_271();
		Global_2454613[iVar0] = iParam0;
	}
}

int func_271()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2454613[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_272(int iParam0, var uParam1)
{
	if (Global_1312840)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312852) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_273(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_278(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

void func_274(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_278(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_278(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_278(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_278(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_278(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_278(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_278(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_278(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_278(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_278(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_278(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_278(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_278(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_278(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_278(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_278(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_278(iParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_278(iParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_278(iParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_278(iParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_278(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_278(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_278(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_278(iParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_278(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_278(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_278(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_278(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_278(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_278(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_278(iParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_278(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_278(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_275(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_276(iParam0, 0);
}

int func_276(int iParam0, int iParam1)
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

int func_277(int iParam0)
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

int func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_188();
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

int func_279(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_278(-1)];
			}
			else if (func_277(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_278(-1)];
	}
	return 0;
}

void func_280(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_282(iParam0, func_278(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_281(iParam0))
	{
		func_273(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_274(iParam0, iVar0, iParam2, 1);
	}
}

int func_281(int iParam0)
{
	if (Global_1361881)
	{
		switch (iParam0)
		{
			case 783:
			case 784:
			case 785:
			case 786:
			case 773:
			case 774:
			case 775:
			case 776:
			case 763:
			case 764:
			case 765:
			case 766:
			case 753:
			case 754:
			case 755:
			case 756:
			case 1299:
			case 635:
			case 1274:
			case 760:
			case 761:
			case 762:
			case 1232:
			case 1871:
			case 2262:
			case 2914:
			case 3043:
			case 6173:
			case 3038:
			case 3039:
			case 3040:
			case 3041:
			case 3042:
			case 3217:
			case 3219:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3212:
			case 3206:
			case 3648:
			case 3649:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3674:
			case 3215:
			case 3214:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
			case 4004:
			case 4003:
				return 1;
				break;
			}
	}
	return 0;
}

int func_282(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_278(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_283(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		iVar4 = unk_0xBA948A9E34D09E6E(iVar0);
		if (unk_0x9E8AB4FC19962A90(iVar4))
		{
			iVar5 = unk_0x2AFA21CE4322B48D(iVar4);
			if (unk_0x220AE8028FACE96A(iVar5) != -1)
			{
				if (unk_0x220AE8028FACE96A(iVar5) == iVar1 || func_133(unk_0x220AE8028FACE96A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0FFED3E94261A832())
					{
						if (func_132(unk_0x0FFED3E94261A832(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_284(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_284(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_284(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_285(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x244673FE98A43CA3())
		{
			iVar3 = iVar0;
			if (unk_0x9E8AB4FC19962A90(iVar3))
			{
				iVar4 = unk_0x2AFA21CE4322B48D(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0FFED3E94261A832())
					{
						iVar1++;
						if (func_132(unk_0x0FFED3E94261A832(), iVar4))
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
				if (iVar4 != unk_0x0FFED3E94261A832())
				{
					if (func_286(unk_0x0FFED3E94261A832(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_132(unk_0x0FFED3E94261A832(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_284(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_284(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_286(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_287(int iParam0)
{
	int iVar0;
	
	if (unk_0x3D5BFF1808E7849A() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_284(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_288(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEF76CA199A0C9035(iParam0) > func_279(unk_0x0FFED3E94261A832()))
		{
			iParam0 = -func_279(unk_0x0FFED3E94261A832());
		}
	}
	if (func_289(8000, 0, 0) > 0)
	{
		if (func_289(8000, 0, 0) < (iParam0 + func_279(unk_0x0FFED3E94261A832())))
		{
			iParam0 = (func_289(8000, 0, 0) - func_279(unk_0x0FFED3E94261A832()));
		}
	}
	return iParam0;
}

int func_289(int iParam0, bool bParam1, int iParam2)
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
	return Global_282038[iParam0];
}

int func_290()
{
	return 1;
}

int func_291(var uParam0)
{
	if (unk_0x47988E04F8E2F0AD(uParam0))
	{
		return 1;
	}
	else if (unk_0x35302CD5A5D37EED(uParam0, "") || unk_0x35302CD5A5D37EED(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_292(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_293(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

void func_294(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	
	StringCopy(&Var0, func_305(iParam1), 16);
	StringCopy(&Var4, func_304(iParam2), 16);
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
		func_295(iVar8, iParam0, &iVar9, bParam3, bParam3, 0);
		Global_2595364[iVar9 /*76*/].f_8.f_43 = { Var0 };
		Global_2595364[iVar9 /*76*/].f_8.f_47 = { Var4 };
	}
	else
	{
		unk_0x584B0092D73C4818(iParam0, &Var0, &Var4, bParam3);
	}
}

void func_295(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
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
		case -135813048:
			if (iParam1 > 0)
			{
				func_296(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_296(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_296(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
		if (!unk_0x34C4AEAA38B25021(func_188()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0xA4924D1E6921DA1D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar3))
		{
			*uParam0 = func_303(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2595364[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2595864 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2595873 = 1;
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_302(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_297(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_297(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_298(iParam0);
	}
}

void func_298(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_45())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_301(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9C51DBB1481E20AE();
			}
		}
		else if (!bVar0)
		{
			unk_0x2605CD7011F296C8(Global_2595364[iParam0 /*76*/]);
		}
		func_299(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_299(var uParam0)
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
	func_300(&(uParam0->f_8.f_3));
	func_300(&(uParam0->f_8.f_16));
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

void func_300(var uParam0)
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

int func_301(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_302(int iParam0, var uParam1)
{
	Global_2457026 = uParam1;
	Global_2457025 = iParam0;
}

int func_303(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_45())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2595364[iVar0 /*76*/].f_2 = 1;
			Global_2595364[iVar0 /*76*/].f_1 = uParam5;
			Global_2595364[iVar0 /*76*/].f_3 = uParam1;
			Global_2595364[iVar0 /*76*/].f_4 = uParam2;
			Global_2595364[iVar0 /*76*/].f_7 = uParam3;
			Global_2595364[iVar0 /*76*/].f_5 = 0;
			Global_2595364[iVar0 /*76*/] = iParam0;
			Global_2595364[iVar0 /*76*/].f_6 = iParam4;
			Global_2595364[iVar0 /*76*/].f_72 = uParam8;
			Global_2595364[iVar0 /*76*/].f_71 = uParam7;
			Global_2595364[iVar0 /*76*/].f_75 = 0;
			Global_2595864 = 0;
			if (bParam6)
			{
				Global_2595364[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_304(int iParam0)
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

char* func_305(int iParam0)
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

void func_306(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_4 = iVar1;
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_3 = (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_307(iVar1, 0);
	}
}

void func_307(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_308(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_310(iParam0) >= 0)
	{
		iVar0 = func_310(iParam0);
	}
	else
	{
		iVar0 = func_309(iParam0);
	}
	return iVar0;
}

int func_309(int iParam0)
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
			if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 1)
			{
				return 200;
			}
			else if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 2)
			{
				return 400;
			}
			else if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 3)
			{
				return 600;
			}
			else if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 4)
			{
				return 800;
			}
			else if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 5)
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

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_5561;
			break;
		
		case 10:
			return Global_262145.f_4117;
			break;
		
		case 11:
			return Global_262145.f_4118;
			break;
		
		case 8:
			return Global_262145.f_4115;
			break;
		
		case 0:
			return Global_262145.f_4101;
			break;
		
		case 9:
			return Global_262145.f_4116;
			break;
		
		case 13:
			return Global_262145.f_4120;
			break;
		
		case 12:
			return Global_262145.f_4119;
			break;
		
		case 2:
			return Global_262145.f_4111;
			break;
		
		case 14:
			return Global_262145.f_4121;
			break;
		
		case 20:
			if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 1)
			{
				return Global_262145.f_5568;
			}
			else if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 2)
			{
				return Global_262145.f_5569;
			}
			else if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 3)
			{
				return Global_262145.f_5570;
			}
			else if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 4)
			{
				return Global_262145.f_5571;
			}
			else if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 5)
			{
				return Global_262145.f_5572;
			}
			break;
		
		case 6:
			return Global_262145.f_4114;
			break;
		
		case 22:
			return Global_262145.f_4127;
			break;
		
		case 23:
			return Global_262145.f_4128;
			break;
		
		case 24:
			return Global_262145.f_4129;
			break;
		
		case 25:
			return Global_262145.f_4130;
			break;
		
		case 26:
			return Global_262145.f_4131;
			break;
		
		case 35:
			return Global_262145.f_6137;
			break;
		
		case 15:
			return Global_262145.f_5562;
			break;
		
		case 17:
			return Global_262145.f_5562;
			break;
		
		case 18:
			return Global_262145.f_5562;
			break;
		
		case 19:
			return Global_262145.f_5562;
			break;
		
		case 21:
			return Global_262145.f_5562;
			break;
		
		case 36:
			return Global_262145.f_6602;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_11524;
			break;
		
		case 41:
			return Global_262145.f_11525;
			break;
		
		case 42:
			return Global_262145.f_11526;
			break;
		
		case 43:
			return Global_262145.f_13981;
			break;
		
		case 44:
			return Global_262145.f_13983;
			break;
	}
	return 0;
}

int func_311()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_94.f_50)
	{
		if (!Local_94.f_51)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_94.f_3, 7))
			{
				func_312("HS_UNABLE", iLocal_317, 0, 0, 0, 1, 1, 0);
			}
		}
		return 1;
	}
	switch (iLocal_315)
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
	if (func_340(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_312(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x220AE8028FACE96A(iParam1);
	if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		if (unk_0x58478145CAF8429C(&Var2))
		{
		}
		unk_0xD05F099FEF4ED10A(sParam0);
		if ((iVar1 != -1 && unk_0x1B154DE2D4606530()) && iVar1 < 4)
		{
			if (Global_1638223.f_89044[iVar1] != -1)
			{
				unk_0x95CE6D748899618C(func_338(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x95CE6D748899618C(func_320(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x95CE6D748899618C(func_320(iParam1, -2, 1, 0));
		}
		unk_0xCF6846167A5EFE98(func_318(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
		else
		{
			Global_2484572 = { func_131(iParam1) };
			if (unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572))
			{
				iVar18 = 0;
				if (unk_0x35302CD5A5D37EED(&(Global_2484502.f_22), "Leader") && Global_2484502.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2484502.f_21 > 0)
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
						Var2 = { func_317(&Var2) };
					}
					iVar0 = unk_0xCFCC273DCA662841(iVar19, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar18, 0, Global_2484502, &Var2, Global_1314009, Global_1314010, Global_1314011);
				}
				else
				{
					iVar0 = unk_0xA390BEE87F567563(iVar19, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar18, 0, Global_2484502, Global_1314009, Global_1314010, Global_1314011);
				}
			}
			else
			{
				iVar0 = unk_0xEF731ED745A201C5(0, 1);
			}
		}
		func_313(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_313(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_316() || !unk_0x1B154DE2D4606530()) || !func_186(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = func_314(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1769933.f_5[iVar0 /*53*/] = iParam0;
		Global_1769933.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1769933.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1769933.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1769933.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1769933.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1769933.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_314(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1769933 - 1))
	{
		if (iParam0 > Global_1769933.f_5[iVar0 /*53*/].f_1)
		{
			func_315(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1769933++;
	if (Global_1769933 > 5)
	{
		Global_1769933 = 5;
		return Global_1769933;
	}
	return (Global_1769933 - 1);
}

void func_315(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1769933.f_5[iVar0 /*53*/] = { Global_1769933.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_316()
{
	return unk_0xA438D14FADC1185B(-1762644250);
}

struct<16> func_317(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_318(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_319(&cVar0);
}

var func_319(char[4] cParam0)
{
	return cParam0;
}

int func_320(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_134(iParam0))
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
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1638223.f_89044[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_134(unk_0x0FFED3E94261A832()) || (func_337() && func_336())) && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 31))
	{
		uVar1 = func_335();
		if (unk_0x2137828D03306CAF(uVar1))
		{
			if (unk_0xDB61DD81432BD145(iVar1))
			{
				if (unk_0xB0BB7458627D389F(iVar1) != -1)
				{
					if (func_6(unk_0xB0BB7458627D389F(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
						{
							if (Global_1638223.f_89044[iParam1] != -1)
							{
								return func_338(iParam1, iParam0, 0);
							}
							else
							{
								return func_327(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_327(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
			{
				if (Global_1638223.f_89044[iParam1] != -1)
				{
					return func_338(iParam1, iParam0, 0);
				}
				else
				{
					return func_321(0, -1, 0);
				}
			}
			else
			{
				return func_321(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
	{
		if (Global_1638223.f_89044[iParam1] != -1)
		{
			return func_338(iParam1, iParam0, 0);
		}
		else
		{
			return func_327(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
		}
	}
	return func_327(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
}

int func_321(bool bParam0, int iParam1, bool bParam2)
{
	return func_322(unk_0x0FFED3E94261A832(), bParam0, iParam1, bParam2);
}

int func_322(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x885F483F34E47503(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x220AE8028FACE96A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_133(iVar0, iParam2, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_326(1);
				}
				else
				{
					return func_326(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 20))
			{
				return func_323(iVar0, iParam2, 1);
			}
			else
			{
				return func_323(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_326(1);
	}
	return func_326(0);
}

int func_323(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_325(iParam0, iParam1);
	if (func_324(Global_1638223.f_93532))
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

int func_324(int iParam0)
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

int func_325(int iParam0, int iParam1)
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
			if (!func_133(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_326(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_327(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1592456[iVar2 /*635*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_332())
			{
				iVar3 = func_331(iParam0);
				if (!iVar3 == -1)
				{
					return func_329(iVar3);
				}
			}
			if ((func_171(iParam1, iParam0, iVar0, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)) || ((func_133(unk_0x220AE8028FACE96A(iParam1), unk_0x220AE8028FACE96A(iParam0), 0) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 23)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)))
			{
				return func_326(1);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 26))
			{
				return func_328(1);
			}
			else
			{
				return func_322(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574295 || Global_1574286) || Global_1592456[iParam0 /*635*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574295 == 1 && Global_1574305 == 0))
			{
				return func_326(1);
			}
			else
			{
				return func_322(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574290 && Global_1573830.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_331(iParam0);
	if (!iVar4 == -1)
	{
		return func_329(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_328(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_329(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_330(iParam0);
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

var func_330(int iParam0)
{
	return Global_2416174.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_331(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_2416174.f_1947.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_332()
{
	if (func_334() || func_333())
	{
		return 1;
	}
	return 0;
}

var func_333()
{
	return Global_2445217.f_13;
}

var func_334()
{
	return Global_2445217.f_12;
}

var func_335()
{
	return Global_2359301.f_2;
}

bool func_336()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 4);
}

bool func_337()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

int func_338(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_332())
	{
		iVar1 = func_331(iParam1);
		if (!iVar1 == -1)
		{
			return func_329(iVar1);
		}
	}
	if (Global_1638223.f_89044[iParam0] != -1 && Global_1638223.f_89044[iParam0] <= 4)
	{
		if (Global_1638223.f_89044[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1638223.f_89044[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1638223.f_89044[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1638223.f_89044[iParam0] == 4)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 29))
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
			iVar0 = Global_1638223.f_89044[iParam0];
		}
	}
	else
	{
		iVar0 = func_322(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_21, 13))
	{
		iVar0 = func_339(iParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_339(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1638223.f_112841;
			break;
		
		case 1:
			iVar0 = Global_1638223.f_112842;
			break;
		
		case 2:
			iVar0 = Global_1638223.f_112843;
			break;
		
		case 3:
			iVar0 = Global_1638223.f_112844;
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

int func_340(char* sParam0, char* sParam1, int iParam2)
{
	if (!unk_0x35302CD5A5D37EED(sParam0, "NULL"))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_314, 0))
		{
			func_437(&uLocal_334, 3, 0, sParam1, 0, 1);
			if (func_342(&uLocal_334, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_314, 0);
			}
		}
		else if (!unk_0xAA4F14DA15DB0B51(iLocal_314, 1))
		{
			if (func_341(0))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_314, 1);
			}
		}
		else if (!func_341(0))
		{
			iLocal_314 = 0;
			return 1;
		}
	}
	return 0;
}

int func_341(int iParam0)
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

int func_342(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_435())
	{
		return 0;
	}
	if (func_434())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_343(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_343(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x58478145CAF8429C(sParam2))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam3))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC());
	iVar1 = func_433(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x58478145CAF8429C(iParam7))
	{
		iVar2 = unk_0xCAEDBF30E3EA14FC(iParam7);
	}
	if (func_432(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_427(iParam6))
	{
		return 0;
	}
	if (func_424(iVar0, iVar1, iVar2))
	{
		if (func_423())
		{
			return 0;
		}
		func_422();
		return func_350(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_349(iParam4))
	{
		return 0;
	}
	func_344(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_344(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1345111.f_40.f_1 = iParam0;
	Global_1345111.f_40.f_2 = iParam1;
	Global_1345111.f_40.f_3 = iParam2;
	StringCopy(&(Global_1345111.f_40.f_4), sParam3, 16);
	Global_1345111.f_40.f_8 = iParam4;
	Global_1345111.f_40.f_9 = iParam5;
	Global_1345111.f_40.f_14 = iParam6;
	func_345(iParam4);
	func_422();
	Global_1345111.f_40.f_13 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 7000);
}

void func_345(int iParam0)
{
	if (func_348(iParam0))
	{
		func_347();
		return;
	}
	func_346();
}

void func_346()
{
	Global_1345111.f_40.f_10 = 0;
}

void func_347()
{
	Global_1345111.f_40.f_10 = 1;
}

int func_348(int iParam0)
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

bool func_349(int iParam0)
{
	return iParam0 > Global_1345111.f_40.f_8;
}

int func_350(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_421();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_418(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_415(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_418(uParam0, sParam3, sParam4);
		}
		return func_398(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_397(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_387(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_386(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_351(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_351(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_385();
	bVar0 = true;
	if (func_353(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_352(120000);
		return 1;
	}
	return 0;
}

void func_352(int iParam0)
{
	Global_1345111.f_40.f_11 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam0);
	Global_1345111.f_40.f_12 = 1;
}

int func_353(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0x4325D353D7D27B34(iVar0);
		iVar1 = func_379(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x64168D046C8CFB0F(unk_0x11ABC381A58DD5AB(), Global_1345111.f_40.f_13))
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
	sVar4 = func_378(uParam5, bParam6, &iVar3);
	uVar5 = func_376(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		iVar6++;
		if (!unk_0x58478145CAF8429C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x35302CD5A5D37EED(sVar4, " "))
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
		if (unk_0xAA4F14DA15DB0B51(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x58478145CAF8429C(sVar2))
	{
		bVar12 = func_375(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_357(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 0))
	{
		func_356();
	}
	func_385();
	func_355();
	func_354();
	return 1;
}

void func_354()
{
	Global_1345111.f_57 = 0;
	Global_1345111.f_57.f_1 = 0;
}

void func_355()
{
	Global_1345111.f_40 = 3;
}

void func_356()
{
	unk_0xF6082E2ADA1C795B(&Global_2313, 8);
}

int func_357(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_358(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0xF6082E2ADA1C795B(&Global_2600685, 0);
		}
		return 1;
	}
	return 0;
}

int func_358(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x35302CD5A5D37EED(sParam14, sParam15))
	{
	}
	func_369();
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xFBCC401A3A7C9E1C(unk_0x2A5EB8B0FE590B91()))
			{
				return 0;
			}
		}
		if (Global_2600670 == 1)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_368() == 0)
	{
		func_366();
		return 0;
	}
	func_365(Global_2600669);
	StringCopy(&(Global_2599420[Global_2600669 /*104*/]), sParam1, 64);
	Global_2599420[Global_2600669 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2599420[Global_2600669 /*104*/].f_24 = iParam2;
	}
	Global_2599420[Global_2600669 /*104*/].f_25 = iParam7;
	Global_2599420[Global_2600669 /*104*/].f_26 = uParam8;
	Global_2599420[Global_2600669 /*104*/].f_29 = uParam9;
	Global_2599420[Global_2600669 /*104*/].f_30 = uParam12;
	Global_2599420[Global_2600669 /*104*/].f_31 = uParam11;
	Global_2599420[Global_2600669 /*104*/].f_28 = 0;
	Global_2599420[Global_2600669 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_33), sParam4, 64);
	Global_2599420[Global_2600669 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_50), sParam5, 64);
	Global_2599420[Global_2600669 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_83), sParam15, 64);
	func_369();
	switch (iParam16)
	{
		case 3:
			Global_2599420[Global_2600669 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2599420[Global_2600669 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2599420[Global_2600669 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2599420[Global_2600669 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_364(0);
				break;
			
			case 1:
				func_364(1);
				break;
			
			case 2:
				func_364(2);
				break;
			
			case 3:
				func_364(3);
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
				Global_2600670 = 1;
				break;
			
			case 0:
				Global_2600670 = 1;
				break;
			
			case 2:
				Global_2600670 = 1;
				break;
			
			case 1:
				Global_2600670 = 1;
				break;
			}
	}
	Global_16814[Global_2600669] = 0;
	if (bParam10)
	{
		func_369();
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
			if (!func_363())
			{
				unk_0x08BE237DBCD9CBD9(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_362(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_359(1);
			func_362(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_359(int iParam0)
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
		if (func_256(14))
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
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_361(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar2);
								unk_0x8123397DC676E794();
							}
							if (Global_2454704)
							{
								if (iVar1 == 14)
								{
									func_360(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_103236.f_13922[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_103236.f_13922[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_103236.f_13922[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_360(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69800)
								{
									iVar4 = 0;
									iVar4 = Global_2599419;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2599420[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2599420[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2599420[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_360(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36949;
											break;
										
										case 1:
											iVar6 = Global_36950;
											break;
										
										case 2:
											iVar6 = Global_36951;
											break;
										
										default:
											break;
									}
									func_360(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_360(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_361(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(Global_2319);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_361(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar7);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_361(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar8);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 8)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_361(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if ((iVar1 == 23 && unk_0x35302CD5A5D37EED(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xAA4F14DA15DB0B51(Global_2314, 6))
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_361(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1621535.f_1;
								func_360(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_360(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_360(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x58478145CAF8429C(sParam7))
	{
		func_361(sParam7);
	}
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		func_361(sParam8);
	}
	if (!unk_0x58478145CAF8429C(sParam9))
	{
		func_361(sParam9);
	}
	if (!unk_0x58478145CAF8429C(sParam10))
	{
		func_361(sParam10);
	}
	if (!unk_0x58478145CAF8429C(sParam11))
	{
		func_361(sParam11);
	}
	unk_0x8123397DC676E794();
}

void func_361(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

void func_362(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x8123397DC676E794();
}

bool func_363()
{
	return Global_1312852;
}

void func_364(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_103236.f_13832[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_365(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD887411BD4A4A92D();
	uVar1 = unk_0xA4EAAF8247A3A69E();
	uVar2 = unk_0xDA870B7547A455EA();
	uVar3 = unk_0x56E76B9CA4BBAA18();
	uVar4 = unk_0x0FD588FC21950895() + 1;
	uVar5 = unk_0x15C180E135C728D1();
	Global_2599420[iParam0 /*104*/].f_18 = uVar0;
	Global_2599420[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2599420[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2599420[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2599420[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2599420[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_366()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2600669 = 11;
	Global_2599420[Global_2600669 /*104*/].f_18 = -1;
	Global_2599420[Global_2600669 /*104*/].f_18.f_1 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_2 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_3 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_367(Global_2599420[iVar2 /*104*/].f_18, Global_2599420[Global_2600669 /*104*/].f_18))
		{
			Global_2600669 = iVar2;
		}
		iVar2++;
	}
	Global_2599420[Global_2600669 /*104*/].f_24 = 1;
}

int func_367(struct<6> Param0, struct<6> Param6)
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

int func_368()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2599420[iVar2 /*104*/].f_24 == 0)
		{
			Global_2600669 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2600669 = 11;
	Global_2599420[Global_2600669 /*104*/].f_18 = -1;
	Global_2599420[Global_2600669 /*104*/].f_18.f_1 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_2 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_3 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2599420[iVar2 /*104*/].f_24 == 0 || Global_2599420[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_367(Global_2599420[iVar2 /*104*/].f_18, Global_2599420[Global_2600669 /*104*/].f_18))
			{
				Global_2600669 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2600669 == 11)
	{
		return 0;
	}
	Global_2599420[Global_2600669 /*104*/].f_99[0] = 0;
	Global_2599420[Global_2600669 /*104*/].f_99[1] = 0;
	Global_2599420[Global_2600669 /*104*/].f_99[2] = 0;
	return 1;
}

void func_369()
{
	if (func_256(14))
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
		Global_14443 = func_370();
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

var func_370()
{
	func_371();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_371()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_374(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_373(unk_0x2A5EB8B0FE590B91());
			if (func_372(iVar0) && (!func_256(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_372(Global_103236.f_2164.f_539.f_4301))
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

bool func_372(int iParam0)
{
	return iParam0 < 3;
}

int func_373(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_374(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_374(int iParam0)
{
	if (func_372(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_375(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_358(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0xF6082E2ADA1C795B(&Global_2600685, 0);
		}
		return 1;
	}
	return 0;
}

int func_376(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_377(2, iParam1);
	return iParam0;
}

void func_377(int iParam0, var uParam1)
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

var func_378(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return sLocal_20;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_377(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x91D2F083AE17E209(sParam0);
}

int func_379(int iParam0)
{
	int iVar0;
	
	iVar0 = func_382(iParam0);
	if (iVar0 == -1)
	{
		func_380(iParam0, 1);
		return 0;
	}
	Global_1362801[iVar0 /*5*/].f_4 = 1;
	return Global_1362801[iVar0 /*5*/].f_2;
}

void func_380(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_382(iParam0) != -1)
	{
		return;
	}
	if (Global_1362964)
	{
		if (iParam0 == Global_1362964.f_1)
		{
			return;
		}
	}
	if (func_381(iParam0))
	{
		return;
	}
	if (Global_1363002 >= 32)
	{
		return;
	}
	Global_1362969[Global_1363002] = iParam0;
	Global_1363002++;
	if (bParam1)
	{
	}
}

int func_381(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363002)
	{
		if (Global_1362969[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_382(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1362962 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1362962)
	{
		if (Global_1362801[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA630F1AB10AC8C10(Global_1362801[iVar0 /*5*/].f_2) && unk_0x32291EA29B6FC538(Global_1362801[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_383(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_383(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1362962)
	{
		return;
	}
	if (unk_0xA630F1AB10AC8C10(Global_1362801[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1362801[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xCF8EC788EB8AB4DB(Global_1362801[iParam0 /*5*/].f_2), 64);
			unk_0xE6AF47B902DCABC1(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x1156FB73B5FB1CC5(Global_1362801[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1362962)
	{
		Global_1362801[iVar32 /*5*/] = { Global_1362801[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_384(&(Global_1362801[iVar32 /*5*/]));
	Global_1362962 = (Global_1362962 - 1);
}

void func_384(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x591AF4C50B46E014())
	{
		uParam0->f_3 = unk_0x11ABC381A58DD5AB();
	}
}

void func_385()
{
	Global_1345111.f_40.f_9 = 4;
}

int func_386(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_385();
	bVar0 = false;
	return func_353(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_387(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_388(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_388(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0x4325D353D7D27B34(iVar0);
		iVar1 = func_379(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x64168D046C8CFB0F(unk_0x11ABC381A58DD5AB(), Global_1345111.f_40.f_13))
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
	sVar4 = func_378(uParam5, bParam6, &iVar3);
	uVar5 = func_376(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		iVar6++;
		if (!unk_0x58478145CAF8429C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x35302CD5A5D37EED(sVar4, " "))
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
		if (unk_0xAA4F14DA15DB0B51(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x58478145CAF8429C(sVar2))
	{
		bVar12 = func_396(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_390(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 0))
	{
		func_356();
	}
	func_389();
	func_355();
	func_354();
	return 1;
}

void func_389()
{
	Global_1345111.f_40.f_9 = 3;
}

int func_390(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x507FE690B1271947(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_391(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xF6082E2ADA1C795B(&Global_2313, 1);
			unk_0xF6082E2ADA1C795B(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_391(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x35302CD5A5D37EED(sParam14, sParam15))
	{
	}
	func_369();
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xFBCC401A3A7C9E1C(unk_0x2A5EB8B0FE590B91()))
			{
				return 0;
			}
		}
		if (Global_103236.f_13832[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_395() == 0)
	{
		func_393();
		return 0;
	}
	func_392(Global_16812);
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/]), sParam1, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_103236.f_13922[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_25 = iParam7;
	Global_103236.f_13922[Global_16812 /*104*/].f_26 = uParam8;
	Global_103236.f_13922[Global_16812 /*104*/].f_29 = uParam9;
	Global_103236.f_13922[Global_16812 /*104*/].f_30 = uParam12;
	Global_103236.f_13922[Global_16812 /*104*/].f_31 = uParam11;
	Global_103236.f_13922[Global_16812 /*104*/].f_28 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0xAA4F14DA15DB0B51(Global_2313, 10))
	{
		Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 1;
		Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 1;
		Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_364(0);
		func_364(2);
		func_364(1);
	}
	else
	{
		func_369();
		switch (iParam16)
		{
			case 3:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_364(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_364(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_364(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_364(3);
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
		if (unk_0xAA4F14DA15DB0B51(Global_2313, 10))
		{
			Global_103236.f_13832[0 /*20*/].f_17 = 1;
			Global_103236.f_13832[1 /*20*/].f_17 = 1;
			Global_103236.f_13832[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_103236.f_13832[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_103236.f_13832[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_103236.f_13832[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_103236.f_13832[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_369();
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
			if (!func_363())
			{
				unk_0x08BE237DBCD9CBD9(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_362(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_359(1);
			func_362(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_392(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD887411BD4A4A92D();
	uVar1 = unk_0xA4EAAF8247A3A69E();
	uVar2 = unk_0xDA870B7547A455EA();
	uVar3 = unk_0x56E76B9CA4BBAA18();
	uVar4 = unk_0x0FD588FC21950895() + 1;
	uVar5 = unk_0x15C180E135C728D1();
	Global_103236.f_13922[iParam0 /*104*/].f_18 = uVar0;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_393()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
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
	Global_103236.f_13922[Global_16812 /*104*/].f_18 = -1;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_394(Global_103236.f_13922[iVar2 /*104*/].f_18, Global_103236.f_13922[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_24 = 1;
}

int func_394(struct<6> Param0, struct<6> Param6)
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

int func_395()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
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
		if (Global_103236.f_13922[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_103236.f_13922[Global_16812 /*104*/].f_18 = -1;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_103236.f_13922[iVar2 /*104*/].f_24 == 0 || Global_103236.f_13922[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_394(Global_103236.f_13922[iVar2 /*104*/].f_18, Global_103236.f_13922[Global_16812 /*104*/].f_18))
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
	Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

int func_396(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x507FE690B1271947(&Global_2313, 10);
	iVar0 = 3;
	if (func_391(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0xF6082E2ADA1C795B(&Global_2313, 1);
			unk_0xF6082E2ADA1C795B(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_397(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
	}
	if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	func_389();
	bVar0 = true;
	if (func_388(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_352(120000);
		return 1;
	}
	return 0;
}

int func_398(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xAA4F14DA15DB0B51(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 4))
	{
		bVar0 = func_414(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_404(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xAA4F14DA15DB0B51(iParam4, 3))
		{
			func_403(1);
		}
		if (unk_0xAA4F14DA15DB0B51(iParam4, 5))
		{
			func_402(1);
		}
		func_401();
		func_355();
		func_400();
		func_399();
		return 1;
	}
	return 0;
}

void func_399()
{
	Global_2505523 = 0;
}

void func_400()
{
	Global_1345111.f_57 = 1;
	Global_1345111.f_57.f_1 = 0;
}

void func_401()
{
	Global_1345111.f_40.f_9 = 1;
}

void func_402(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2315, 0);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2315, 0);
	}
}

void func_403(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 20);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 20);
	}
}

int func_404(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_413(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_405(sParam3, iParam4, bParam7);
}

int func_405(char* sParam0, int iParam1, bool bParam2)
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
					func_412();
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
		if (func_411(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_410();
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
				func_369();
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
				if (func_409())
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
			if (func_408())
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
			func_407();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_406();
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
		func_412();
	}
	return 0;
}

void func_406()
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

void func_407()
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

int func_408()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_409()
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

void func_410()
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

bool func_411(int iParam0, int iParam1)
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

void func_412()
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

void func_413(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_414(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_413(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_405(sParam3, iParam4, bParam7);
}

int func_415(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
	}
	if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (func_417(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_416();
		func_401();
		func_355();
		func_400();
		func_399();
		return 1;
	}
	return 0;
}

void func_416()
{
	Global_16763 = 0;
}

bool func_417(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_413(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_405(sParam3, iParam4, bParam8);
}

int func_418(var uParam0, char* sParam1, char* sParam2)
{
	if (func_420(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_419();
		func_355();
		func_400();
		return 1;
	}
	return 0;
}

void func_419()
{
	Global_1345111.f_40.f_9 = 2;
}

bool func_420(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_413(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_405(sParam2, iParam3, 0);
}

void func_421()
{
	Global_1345111.f_55 = Global_1345111.f_40.f_1;
	Global_1345111.f_55.f_1 = Global_1345111.f_40.f_10;
}

void func_422()
{
	Global_1345111.f_40 = 1;
}

bool func_423()
{
	return Global_1345111.f_40 == 1;
}

int func_424(int iParam0, int iParam1, int iParam2)
{
	if (!func_425(iParam0))
	{
		return 0;
	}
	if (Global_1345111.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1345111.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_425(int iParam0)
{
	if (!func_426())
	{
		return 0;
	}
	if (!Global_1345111.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_426()
{
	if (Global_1345111.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_427(int iParam0)
{
	if (func_431())
	{
		return 0;
	}
	if (func_430())
	{
		return 0;
	}
	if (func_341(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1761100 || func_429())
	{
		return 0;
	}
	if (!unk_0xAA4F14DA15DB0B51(iParam0, 6))
	{
		if (func_428())
		{
			return 0;
		}
	}
	return 1;
}

bool func_428()
{
	return unk_0x64168D046C8CFB0F(unk_0x11ABC381A58DD5AB(), Global_1361697);
}

int func_429()
{
	if (Global_2588311.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_430()
{
	return Global_1345111.f_40 == 3;
}

bool func_431()
{
	return func_408();
}

int func_432(int iParam0, int iParam1, int iParam2)
{
	if (!func_430())
	{
		return 0;
	}
	return func_424(iParam0, iParam1, iParam2);
}

int func_433(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

bool func_434()
{
	return Global_2503090.f_1;
}

int func_435()
{
	if (Global_1345299.f_2)
	{
		return 1;
	}
	return func_436();
}

bool func_436()
{
	return func_431();
}

void func_437(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_439(var uParam0)
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

void func_440(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x62E688B72E3C57B0())
		{
			func_441(uParam0, 0, 0);
		}
	}
}

void func_441(var uParam0, bool bParam1, bool bParam2)
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

void func_442()
{
	if (unk_0xD0BCF9877CD72A3F(Local_94.f_10[iLocal_325 /*7*/]) && !unk_0xA9A04898798AE9E6(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iLocal_325 /*7*/]), 0))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (func_5(unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iLocal_325 /*7*/]), 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 50625f))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 4))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_309, 4);
				}
			}
			else if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 5))
			{
				if (Local_94.f_42 != -1)
				{
					if (iLocal_325 == Local_94.f_42)
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 5))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_309, 5);
						}
					}
				}
			}
		}
	}
	func_443(iLocal_325);
	iLocal_325++;
	if (iLocal_325 >= func_438(iLocal_315))
	{
		if ((!unk_0xAA4F14DA15DB0B51(iLocal_309, 4) && unk_0xAA4F14DA15DB0B51(Local_94.f_1, 8)) || unk_0xAA4F14DA15DB0B51(iLocal_309, 5))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_1, 1))
			{
				unk_0xF6082E2ADA1C795B(&(Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_1), 1);
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_1, 1))
		{
			unk_0x507FE690B1271947(&(Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_1), 1);
		}
		unk_0x507FE690B1271947(&iLocal_309, 4);
		unk_0x507FE690B1271947(&iLocal_309, 5);
		iLocal_325 = 0;
	}
}

void func_443(int iParam0)
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
	if (unk_0x3756406E4D76B25E(Local_94.f_10[iParam0 /*7*/]))
	{
		iVar0 = unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]);
		if (iLocal_315 == 0)
		{
			if (unk_0x0FFED3E94261A832() == iLocal_317)
			{
				if (Local_94.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_94.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar6 = true;
					}
				}
			}
		}
		if (unk_0x0FFED3E94261A832() == iLocal_316)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_310[iParam0], 0))
				{
					unk_0xF6082E2ADA1C795B(&Global_1573330, 0);
					unk_0xF6082E2ADA1C795B(&(iLocal_310[iParam0]), 0);
				}
				if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_310[iParam0], 1))
					{
						bVar6 = true;
					}
				}
				else if (unk_0xAA4F14DA15DB0B51(iLocal_310[iParam0], 1))
				{
					unk_0x507FE690B1271947(&(iLocal_310[iParam0]), 1);
				}
			}
		}
		if (bVar6)
		{
			if (unk_0x3756406E4D76B25E(Local_94.f_10[iParam0 /*7*/]))
			{
				if (!unk_0x434105A1C45F1BED(Local_94.f_10[iParam0 /*7*/]))
				{
					unk_0x47ABF422A76CAA6A(Local_94.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (unk_0x434105A1C45F1BED(Local_94.f_10[iParam0 /*7*/]))
		{
			if (unk_0x0FFED3E94261A832() == iLocal_316)
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 9) && !unk_0xAA4F14DA15DB0B51(iLocal_310[iParam0], 1))
				{
					if (unk_0xCB5F06CE475B6C53(iVar0, unk_0x0FFED3E94261A832()))
					{
						switch (Local_94.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_466(iVar0, 3);
								break;
						}
						unk_0xF6082E2ADA1C795B(&(iLocal_310[iParam0]), 1);
					}
				}
			}
			if (!unk_0xA9A04898798AE9E6(iVar0, 0) && !unk_0x769F0F6444C1ABE0(iVar0))
			{
				switch (Local_94.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						unk_0x3EFE40733EFB6649(iVar0, 187, 1);
						if (Local_94.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 3))
								{
									unk_0x88D0B39E955E094B(iVar0, 3f);
									unk_0x4C47904AE69D7393(iVar0, 1);
									unk_0x31AC59B7C21A2047(iVar0, 118, 0);
								}
							}
						}
						if (unk_0x0FFED3E94261A832() == iLocal_317 && func_5(unk_0xD1EE0E9FCD74A37B(iVar0, 1), unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iLocal_317), 1), 25f))
						{
							unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4505), 0);
						}
						else
						{
							unk_0x507FE690B1271947(&(Global_2497344.f_4505), 0);
						}
						if (!unk_0xE4B596B1029F4F6A(iVar0))
						{
							if (!unk_0xAED4698BE7792351(iVar0, 29))
							{
								if (func_6(iLocal_317, 1, 1))
								{
									if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 13))
									{
										if (func_465(iLocal_317) && !unk_0xABE7CC39119C8E2B(unk_0x1E199569E0295838(iLocal_317)))
										{
											if (!func_464(iVar0, -1794415470))
											{
												if (func_463(iVar0))
												{
													uVar1 = unk_0x0C20E539D876C5B3(unk_0x1E199569E0295838(iLocal_317), 0);
													if (unk_0x2137828D03306CAF(uVar1))
													{
														if (unk_0x7FAC45D56235AB39(iVar1, 0))
														{
														}
														if (!unk_0xB98B8EFF8C77CE6F(iVar1, func_462(unk_0x1E199569E0295838(iLocal_317), 0)))
														{
															unk_0xA6AC097BEBB7B1F0(iVar0, iVar1, -1, func_461(unk_0x1E199569E0295838(iLocal_317), iVar1), func_460(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(unk_0x13F66F794C535493(iVar0) && unk_0x5537BC1B0041F8DF(iVar0) == unk_0x1E199569E0295838(iLocal_317)) && !unk_0xC4A39E4229BD3ABE(iVar0, 1))
										{
											if (func_464(iVar0, -1794415470))
											{
												unk_0x654FFF4D16298AC5(iVar0);
											}
											if (!func_464(iVar0, 1227113341))
											{
												if (func_463(iVar0))
												{
													unk_0x17DD40170243F0AB(iVar0, unk_0x1E199569E0295838(iLocal_317), -1, 0f, func_460(iParam0), 1073741824, 0);
												}
											}
											else
											{
												unk_0x3EFE40733EFB6649(iVar0, 151, 1);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x0FFED3E94261A832() == iLocal_317 && func_5(unk_0xD1EE0E9FCD74A37B(iVar0, 1), unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iLocal_317), 1), 25f))
						{
							unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4505), 0);
						}
						else
						{
							unk_0x507FE690B1271947(&(Global_2497344.f_4505), 0);
						}
						if (unk_0x0FFED3E94261A832() == iLocal_317)
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_1, 0))
							{
								if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
								{
									if ((func_4(unk_0xD1EE0E9FCD74A37B(iVar0, 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) && (unk_0xC212BF73836863E3(unk_0x2A5EB8B0FE590B91()) || unk_0xABE7CC39119C8E2B(unk_0x2A5EB8B0FE590B91()))) || (unk_0x13F66F794C535493(iVar0) && unk_0x5537BC1B0041F8DF(iVar0) == unk_0x2A5EB8B0FE590B91()))
									{
										iVar2 = func_458(unk_0x0FFED3E94261A832());
										fVar7 = (unk_0xBBDA792448DB5A89(Global_262145.f_5566) / 100f);
										iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) * fVar7));
										iVar8 = func_457(unk_0x0FFED3E94261A832());
										if (iVar8 > 100)
										{
											iVar8 = 100;
										}
										if (iVar2 > (iVar8 * Global_262145.f_5567))
										{
											iVar2 = (iVar8 * Global_262145.f_5567);
										}
										if (iVar2 > 0)
										{
											unk_0xF6082E2ADA1C795B(&iLocal_309, 16);
										}
										unk_0x86DA6E280ACEB67A(unk_0x2A5EB8B0FE590B91(), 5000, 10000, 4);
										if (!(unk_0x13F66F794C535493(iVar0) && unk_0x5537BC1B0041F8DF(iVar0) == unk_0x1E199569E0295838(iLocal_317)))
										{
											Var3 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) - unk_0xD1EE0E9FCD74A37B(iVar0, 1) };
											Var3 = { func_456(Var3) };
											Var3.f_0 = (Var3.f_0 * 3f);
											Var3.f_1 = (Var3.f_1 * 3f);
											Var3.f_2 = (Var3.f_2 * 3f);
											unk_0x748D711A16EB2994(unk_0x2A5EB8B0FE590B91(), 1, Var3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										unk_0xAE833788DEAB23CA(iVar0, 512, 0);
										unk_0x89AEA58335779997(iVar0, 17, 1);
										if (((unk_0xC4A39E4229BD3ABE(iVar0, 1) || unk_0x13F66F794C535493(iVar0)) && func_454(iVar0)) && func_462(iVar0, 0) == -1)
										{
											unk_0xAE833788DEAB23CA(iVar0, 2, 1);
											unk_0x89AEA58335779997(iVar0, 3, 0);
											unk_0x89AEA58335779997(iVar0, 6, 1);
										}
										else
										{
											unk_0x654FFF4D16298AC5(iVar0);
											unk_0xCD6FB688ED8B6284(iVar0, unk_0x2A5EB8B0FE590B91(), 10000f, -1, 1, 0);
										}
										Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_2 = -1;
										}
										unk_0x3C030E241A3543D2(iVar0, Global_1574735);
										unk_0xF6082E2ADA1C795B(&(Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_1), 0);
										unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4505), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0xDFB0689E65E50D74(iVar0, 187))
						{
							unk_0x3EFE40733EFB6649(iVar0, 187, 0);
						}
						if (Local_94.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 4))
							{
								unk_0x4C47904AE69D7393(iVar0, 0);
								unk_0x31AC59B7C21A2047(iVar0, 118, 1);
							}
						}
						if (!(unk_0x13F66F794C535493(iVar0) && unk_0x5537BC1B0041F8DF(iVar0) == unk_0x1E199569E0295838(iLocal_317)))
						{
							if (!unk_0xE4B596B1029F4F6A(iVar0))
							{
								if (func_463(iVar0))
								{
									if ((unk_0xC4A39E4229BD3ABE(iVar0, 1) || unk_0x13F66F794C535493(iVar0)) && !unk_0xAA4F14DA15DB0B51(Local_94.f_2, 10))
									{
										if (!func_464(iVar0, -258271821) && !func_464(iVar0, -1273030092))
										{
											if (unk_0xB1C4356ECEE878FE(iVar0))
											{
												uVar9 = unk_0x0C20E539D876C5B3(iVar0, 1);
												iVar10 = unk_0xD3B21CE53AA7BE51(uVar9);
												if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 13))
												{
													unk_0x89AEA58335779997(iVar0, 17, 1);
													unk_0x89AEA58335779997(iVar0, 6, 0);
													unk_0x89AEA58335779997(iVar0, 1, 0);
												}
												else if (unk_0x0F93427D94EAEAA2(iVar10))
												{
													unk_0x9CD13E23F5D54507(iVar0, iVar9, 0, unk_0x2A5EB8B0FE590B91(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1082130432, 0);
												}
												else if (unk_0xDA6E804770521A18(iVar10))
												{
													unk_0x3D82DADEB1753CD5(iVar0, iVar9, 0, unk_0x2A5EB8B0FE590B91(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80);
												}
												else if (unk_0xD3B21CE53AA7BE51(iVar9) == joaat("taxi"))
												{
													unk_0xAE833788DEAB23CA(iVar0, 2, 0);
													unk_0x89AEA58335779997(iVar0, 3, 1);
													unk_0x89AEA58335779997(iVar0, 6, 0);
													unk_0xCD6FB688ED8B6284(iVar0, unk_0x1E199569E0295838(iLocal_317), 10000f, -1, 1, 0);
												}
												else
												{
													unk_0x37959C6A7F431781(iVar0, unk_0x0C20E539D876C5B3(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_464(iVar0, 1805844857))
									{
										if (func_6(iLocal_317, 1, 1))
										{
											unk_0xCD6FB688ED8B6284(iVar0, unk_0x1E199569E0295838(iLocal_317), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_452(Local_94.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 13))
				{
					unk_0x654FFF4D16298AC5(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]));
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 17, 1);
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 6, 0);
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_94.f_10[iParam0 /*7*/]), 1, 0);
				}
				func_444(iVar0);
			}
		}
	}
}

void func_444(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAA4F14DA15DB0B51(iLocal_309, 16))
	{
		iVar0 = Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_3;
		iVar1 = func_445(iVar0);
		if (iVar1 == 1)
		{
			unk_0x507FE690B1271947(&iLocal_309, 15);
			unk_0x507FE690B1271947(&iLocal_309, 16);
			if (!func_45())
			{
				unk_0x0C7B745A14FF18CA(iVar0, 0, 0);
			}
			if (iVar0 > Global_262145.f_6947)
			{
				iVar0 = Global_262145.f_6947;
			}
			unk_0x88D9DF53359130B9(iParam0, iVar0);
			unk_0xF6082E2ADA1C795B(&(Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			unk_0x507FE690B1271947(&iLocal_309, 15);
			unk_0x507FE690B1271947(&iLocal_309, 16);
			unk_0xF6082E2ADA1C795B(&(Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_445(int iParam0)
{
	if (func_45())
	{
		if (func_448(uParam0))
		{
			if (func_447(iLocal_518) == 2)
			{
				unk_0x431B485108F2F5CB(func_446(iLocal_518));
				unk_0x0C7B745A14FF18CA(uParam0, 0, 0);
				func_298(iLocal_518);
				return 1;
			}
			else
			{
				func_298(iLocal_518);
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

int func_446(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/];
	}
	return -1;
}

int func_447(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_2;
	}
	return 0;
}

int func_448(var uParam0)
{
	if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 15))
	{
		func_296(&iLocal_518, -1135378931, 537254313, 1474183246, 1839532116, uParam0, 4, 3);
		func_451(&uLocal_519, 0, 0);
		unk_0xF6082E2ADA1C795B(&iLocal_309, 15);
	}
	else if (func_450(iLocal_518) || func_449(&uLocal_519, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_449(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_441(uParam0, bParam2, 0);
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

int func_450(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_2 != 1;
	}
	return 0;
}

void func_451(var uParam0, bool bParam1, bool bParam2)
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

void func_452(var uParam0, bool bParam1)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		if (unk_0x434105A1C45F1BED(uParam0))
		{
			if (!func_453(uParam0))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 13))
				{
					unk_0x654FFF4D16298AC5(unk_0xC09E9E2B61AD04E7(uParam0));
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(uParam0), 17, 1);
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(uParam0), 6, 0);
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(uParam0), 1, 0);
				}
				else
				{
					if (bParam1)
					{
						unk_0x654FFF4D16298AC5(unk_0xC09E9E2B61AD04E7(uParam0));
					}
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(uParam0), 6, 1);
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(uParam0), 1, 1);
				}
			}
		}
		func_225(&uParam0);
	}
}

int func_453(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return unk_0x769F0F6444C1ABE0(unk_0xC09E9E2B61AD04E7(uParam0));
	}
	return 1;
}

int func_454(int iParam0)
{
	var uVar0;
	
	if (unk_0xC4A39E4229BD3ABE(iParam0, 1))
	{
		uVar0 = unk_0x0C20E539D876C5B3(iParam0, 1);
	}
	if (unk_0x13F66F794C535493(iParam0))
	{
		uVar0 = unk_0x73E10648CA4D8C19(iParam0);
	}
	if (!unk_0x2137828D03306CAF(uVar0))
	{
		if (func_465(iLocal_317))
		{
			iVar0 = unk_0x0C20E539D876C5B3(unk_0x1E199569E0295838(iLocal_317), 1);
		}
	}
	if (unk_0x2137828D03306CAF(iVar0))
	{
		if (func_455(iVar0))
		{
			return 0;
		}
		if (unk_0x67F6B31C1A3F63CC(iParam0) || unk_0xC6B6C45D0DE76B0B(unk_0xD3B21CE53AA7BE51(iVar0)))
		{
			if (!unk_0xABCF7EB00A727656(iVar0))
			{
				return 0;
			}
		}
		if (unk_0xD3B21CE53AA7BE51(iVar0) == joaat("trailersmall2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_455(int iParam0)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x7FAC45D56235AB39(iParam0, 0))
		{
			if (!unk_0xFB4BF464D20ED824(iParam0))
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

Vector3 func_456(struct<3> Param0)
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

var func_457(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_204.f_6;
}

int func_458(int iParam0)
{
	var uVar0;
	
	uVar0 = func_459(iParam0);
	return uVar0;
}

int func_459(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return unk_0x0A157779750902D2(-1);
		}
		else if (func_277(iParam0))
		{
			return Global_1592456[iParam0 /*635*/].f_204.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_460(int iParam0)
{
	if (!unk_0xAA4F14DA15DB0B51(Local_94.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_461(int iParam0, int iParam1)
{
	if (!unk_0xA9A04898798AE9E6(iParam0, 0) && !unk_0xA9A04898798AE9E6(uParam1, 0))
	{
		if (unk_0xF8ED2D0629FE764D(iParam0, iParam1))
		{
			if (unk_0x8F8E5C33266ED978(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x8F8E5C33266ED978(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x8F8E5C33266ED978(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x8F8E5C33266ED978(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_462(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0xC4A39E4229BD3ABE(iParam0, iParam1))
		{
			uVar0 = unk_0x0C20E539D876C5B3(iParam0, iParam1);
			if (unk_0x2137828D03306CAF(uVar0))
			{
				if (!unk_0xA9A04898798AE9E6(iVar0, 0))
				{
					iVar1 = unk_0xF0178FC88859A30C(unk_0xD3B21CE53AA7BE51(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x457D9E478E06E354(iVar0, iVar3, 0))
						{
							if (unk_0x8F8E5C33266ED978(iVar0, iVar3, 0) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
					if (iVar1 == 1 && unk_0xD3B21CE53AA7BE51(iVar0) == joaat("trailersmall2"))
					{
						iVar3 = -1;
						return iVar3;
					}
				}
			}
		}
	}
	return iVar3;
}

int func_463(int iParam0)
{
	if ((!unk_0x769F0F6444C1ABE0(iParam0) && !unk_0xF47F511EA9EDCFF5(iParam0, 0)) && !unk_0x62F5757271CA0B05(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_464(int iParam0, int iParam1)
{
	if (unk_0xE897E371352225D5(iParam0, iParam1) == 1 || unk_0xE897E371352225D5(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_465(int iParam0)
{
	if (unk_0xBA7870574B6B56F9(iParam0))
	{
		return 0;
	}
	if (unk_0xB1C4356ECEE878FE(unk_0x1E199569E0295838(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_466(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x30BD96CB13063EC9(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x01307FD0B54F50D3(iParam0, "AttributeDamage");
	}
	unk_0xF6082E2ADA1C795B(&iVar0, iParam1);
	unk_0xE7B1DEED5908F19B(iParam0, "AttributeDamage", iVar0);
}

void func_467()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = unk_0xAA4F14DA15DB0B51(Local_94.f_2, 6);
	bVar1 = unk_0xAA4F14DA15DB0B51(Local_94.f_2, 10);
	func_472();
	if (iLocal_315 != 1)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 12))
		{
			func_469();
		}
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_326))
	{
		func_468(&uLocal_326);
	}
	iVar3 = 0;
	while (iVar3 < func_438(iLocal_315))
	{
		iLocal_310[iVar3] = 0;
		iVar3++;
	}
	if (unk_0x62E688B72E3C57B0())
	{
		Local_94.f_42 = -1;
		Local_94.f_5 = uLocal_322;
		Local_94.f_6 = uLocal_322;
		Local_94.f_7 = uLocal_322;
		Local_94.f_1 = 0;
		Local_94.f_4 = 0;
		Local_94.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_438(iLocal_315))
		{
			bVar2 = unk_0xAA4F14DA15DB0B51(Local_94.f_10[iVar3 /*7*/].f_2, 6);
			Local_94.f_10[iVar3 /*7*/].f_2 = 0;
			Local_94.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				unk_0xF6082E2ADA1C795B(&(Local_94.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_1 = 0;
	Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_2 = -1;
	iLocal_309 = 0;
	if (bVar0)
	{
		unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 6);
	}
	if (bVar1)
	{
		unk_0xF6082E2ADA1C795B(&(Local_94.f_2), 11);
		unk_0xF6082E2ADA1C795B(&iLocal_309, 8);
	}
	unk_0xF6082E2ADA1C795B(&iLocal_309, 4);
	unk_0xF6082E2ADA1C795B(&iLocal_309, 11);
}

void func_468(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		unk_0x789C84F1B8496AD0(uParam0);
		bVar0 = true;
	}
	if (unk_0xBDD3EABACAB97D09(uParam0->f_1))
	{
		unk_0x789C84F1B8496AD0(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x2137828D03306CAF(uParam0->f_7))
	{
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_7))
		{
			if (unk_0x4C2C9007DF4A7DB6(uParam0->f_7))
			{
				unk_0x740D0745C06D2DDC(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_469()
{
	switch (iLocal_315)
	{
		case 0:
			func_471(&(Global_1574739[3]));
			break;
		
		case 1:
			func_470();
			break;
	}
}

void func_470()
{
	int iVar0;
	
	if (unk_0x591AF4C50B46E014())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0x3A8EFBE4AB457FE2(3, Global_1574695[iVar0], -1467815081);
			unk_0x3A8EFBE4AB457FE2(3, -1467815081, Global_1574695[iVar0]);
			iVar0++;
		}
	}
}

void func_471(var uParam0)
{
	int iVar0;
	
	if (unk_0x591AF4C50B46E014())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0x3A8EFBE4AB457FE2(3, Global_1574695[iVar0], *uParam0);
			unk_0x3A8EFBE4AB457FE2(3, *uParam0, Global_1574695[iVar0]);
			iVar0++;
		}
	}
}

void func_472()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_438(iLocal_315))
	{
		bVar1 = false;
		if (iLocal_315 == 0)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_452(Local_94.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_473()
{
	func_474();
	if (iLocal_315 != 1)
	{
		func_442();
	}
}

void func_474()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < func_438(iLocal_315))
	{
		if (unk_0x3756406E4D76B25E(Local_94.f_10[iVar0 /*7*/]))
		{
			if (unk_0x434105A1C45F1BED(Local_94.f_10[iVar0 /*7*/]))
			{
				uVar1 = unk_0xC09E9E2B61AD04E7(Local_94.f_10[iVar0 /*7*/]);
				if (!unk_0xA9A04898798AE9E6(uVar1, 0))
				{
					unk_0x3EFE40733EFB6649(iVar1, 151, 1);
				}
			}
		}
		iVar0++;
	}
	if (Global_2497344.f_1666)
	{
	}
	if (iLocal_315 == 1)
	{
		if (unk_0x0FFED3E94261A832() == iLocal_317)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 0))
			{
				if (!unk_0x6365DBD30B96E789(uLocal_499))
				{
					if (func_6(iLocal_317, 1, 1))
					{
						if (Local_94.f_50)
						{
							unk_0x87279E8EBAF5ABE6(15, unk_0x1E199569E0295838(iLocal_317), 4, 0f, &uLocal_499, -1467815081);
						}
						else
						{
							unk_0x87279E8EBAF5ABE6(14, unk_0x1E199569E0295838(iLocal_317), 4, 0f, &uLocal_499, 0);
						}
					}
				}
				if (Global_2497344.f_1666)
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_1, 3))
					{
						unk_0xF6082E2ADA1C795B(&(Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_315 == 0)
	{
		if (Local_94.f_42 != -1)
		{
			if (unk_0xD0BCF9877CD72A3F(Local_94.f_10[Local_94.f_42 /*7*/]))
			{
				if (!unk_0xA9A04898798AE9E6(unk_0xC09E9E2B61AD04E7(Local_94.f_10[Local_94.f_42 /*7*/]), 0) && !func_478(unk_0xC09E9E2B61AD04E7(Local_94.f_10[Local_94.f_42 /*7*/])))
				{
					if (Local_94.f_10[Local_94.f_42 /*7*/].f_5 == 3)
					{
						func_475(Local_94.f_10[Local_94.f_42 /*7*/], &uLocal_326, -1082130432, 0, 1, 0, 0, -1, -1, 1);
						if (unk_0xBDD3EABACAB97D09(uLocal_326))
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 6))
							{
								unk_0xA6B842B66643C116(uLocal_326, "FM_MGR_BLP");
								unk_0xF6082E2ADA1C795B(&iLocal_309, 6);
							}
						}
					}
				}
				else if (unk_0xBDD3EABACAB97D09(uLocal_326))
				{
					func_468(&uLocal_326);
				}
			}
			if (unk_0x0FFED3E94261A832() == iLocal_316)
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 14))
				{
					if (func_340("MPCT_mugsuc", "LAMAR", 19))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_309, 14);
					}
				}
			}
		}
	}
}

void func_475(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		if (func_477())
		{
			Global_2434604 = unk_0x0FFED3E94261A832();
		}
		if (bParam3)
		{
			func_476(unk_0xC09E9E2B61AD04E7(uParam0), uParam1, 1, Global_2434604, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_476(unk_0xC09E9E2B61AD04E7(uParam0), uParam1, -1, Global_2434604, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xBDD3EABACAB97D09(*uParam1))
	{
		func_468(uParam1);
	}
}

int func_476(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x8A41C463063AFC8E();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x769F0F6444C1ABE0(uParam0))
	{
		if (!unk_0x4C2C9007DF4A7DB6(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x740D0745C06D2DDC(iParam0, 1);
			}
			else
			{
				unk_0xEC788EF0F7E0437A(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x958B0F67184F0A15(iParam0, iParam2);
			unk_0xE27A966E15A7110C(iParam0, fParam6);
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				unk_0x697F84823ACFF84C(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xA4130A6FADB516EE(iParam0, iParam9);
		}
		unk_0xEEFEA3C5BD4B4CEC(iParam0, uParam4);
		unk_0xFA67C6B6608350D2(iParam0, uParam5);
		*uParam1 = unk_0x964C09CA77A5150B(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xEB5D36079067EBA5(*uParam1, iParam8);
				}
				unk_0xCE515166115E0087("STRING");
				if (bParam10)
				{
					unk_0xCF6846167A5EFE98(uParam7);
				}
				else
				{
					unk_0xD5DA3EC5EEC78358(uParam7);
				}
				unk_0xC3EC4F430EC11854(*uParam1);
				unk_0x697F84823ACFF84C(*uParam1, 7);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(uParam1->f_6, 2))
		{
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				if (!unk_0x58478145CAF8429C(uParam7))
				{
					unk_0xCE515166115E0087("STRING");
					if (bParam10)
					{
						unk_0xCF6846167A5EFE98(sParam7);
					}
					else
					{
						unk_0xD5DA3EC5EEC78358(sParam7);
					}
					unk_0xC3EC4F430EC11854(*uParam1);
				}
				unk_0xF6082E2ADA1C795B(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xC4A39E4229BD3ABE(iParam0, 0))
		{
			uParam1->f_1 = unk_0x05DF223770EFF48B(iParam0);
			if (!unk_0xAA4F14DA15DB0B51(uParam1->f_6, 3))
			{
				if (unk_0xBDD3EABACAB97D09(uParam1->f_1))
				{
					unk_0x697F84823ACFF84C(uParam1->f_1, 7);
					unk_0xF6082E2ADA1C795B(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xBDD3EABACAB97D09(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x507FE690B1271947(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_477()
{
	return Global_1312829;
}

int func_478(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (unk_0xC4A39E4229BD3ABE(uParam0, 0))
	{
		uVar0 = unk_0x0C20E539D876C5B3(iParam0, 0);
		if (unk_0x7FAC45D56235AB39(uVar0, 0))
		{
			if (unk_0x4D1A8278BAE26361("MPBitset", 3))
			{
				if (unk_0x30BD96CB13063EC9(iVar0, "MPBitset"))
				{
					iVar1 = unk_0x01307FD0B54F50D3(iVar0, "MPBitset");
				}
				if (unk_0xAA4F14DA15DB0B51(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_479()
{
	return Local_94.f_0;
}

int func_480(int iParam0)
{
	return Local_148[iParam0 /*5*/];
}

void func_481()
{
	if (unk_0x0FFED3E94261A832() == iLocal_317)
	{
		if (Global_25372)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_148[iLocal_324 /*5*/].f_1, 4))
			{
				unk_0xF6082E2ADA1C795B(&(Local_148[iLocal_324 /*5*/].f_1), 4);
			}
		}
		else
		{
			unk_0x507FE690B1271947(&(Local_148[iLocal_324 /*5*/].f_1), 4);
		}
	}
}

void func_482()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x0FFED3E94261A832() == iLocal_316)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1573330, 0))
		{
			unk_0x507FE690B1271947(&Global_1573330, 0);
			bVar0 = true;
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_148[iLocal_316 /*5*/].f_1, 2))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 11))
			{
				unk_0xF6082E2ADA1C795B(&(Local_148[iLocal_316 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!unk_0xAA4F14DA15DB0B51(Local_94.f_1, 11))
		{
			unk_0x507FE690B1271947(&(Local_148[iLocal_316 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_4 = func_486();
			func_483(Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_4);
		}
	}
	else if (Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_4 != Local_94.f_44)
	{
		Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_4 = Local_94.f_44;
		func_483(Local_148[unk_0x87B7000A6C80CCEF() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_483(int iParam0)
{
	switch (iLocal_315)
	{
		case 0:
			func_485(&(Global_1574739[3]), iParam0);
			break;
		
		case 1:
			func_484(iParam0);
			break;
	}
}

void func_484(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xAA4F14DA15DB0B51(iParam0, iVar0))
		{
			unk_0x3A8EFBE4AB457FE2(1, Global_1574695[iVar0], -1467815081);
			unk_0x3A8EFBE4AB457FE2(1, -1467815081, Global_1574695[iVar0]);
		}
		else
		{
			unk_0x3A8EFBE4AB457FE2(3, Global_1574695[iVar0], -1467815081);
			unk_0x3A8EFBE4AB457FE2(3, -1467815081, Global_1574695[iVar0]);
		}
		iVar0++;
	}
}

void func_485(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xAA4F14DA15DB0B51(iParam1, iVar0))
		{
			unk_0x3A8EFBE4AB457FE2(1, Global_1574695[iVar0], *uParam0);
			unk_0x3A8EFBE4AB457FE2(1, *uParam0, Global_1574695[iVar0]);
		}
		else
		{
			unk_0x3A8EFBE4AB457FE2(3, Global_1574695[iVar0], *uParam0);
			unk_0x3A8EFBE4AB457FE2(3, *uParam0, Global_1574695[iVar0]);
		}
		iVar0++;
	}
}

int func_486()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iLocal_315 == 1 || iLocal_315 == 0)
		{
			if (iLocal_316 == unk_0x7C214DA899F05536(iVar1))
			{
				unk_0xF6082E2ADA1C795B(&iVar0, iVar1);
			}
		}
		else if (unk_0x0FFED3E94261A832() == unk_0x7C214DA899F05536(iVar1))
		{
			unk_0xF6082E2ADA1C795B(&iVar0, iVar1);
		}
		else if (func_6(unk_0x7C214DA899F05536(iVar1), 0, 1))
		{
			if (func_46(unk_0x7C214DA899F05536(iVar1)))
			{
				unk_0xF6082E2ADA1C795B(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_487()
{
	switch (iLocal_315)
	{
		case 0:
			if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 11))
			{
				if (unk_0x0FFED3E94261A832() == iLocal_316)
				{
					if (func_6(iLocal_317, 1, 1))
					{
						func_312("GC_TCK_60", iLocal_317, 0, 0, 0, 1, 1, 0);
						unk_0xF6082E2ADA1C795B(&iLocal_309, 11);
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 12))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 8))
				{
					if (unk_0x0FFED3E94261A832() == iLocal_316)
					{
						if (func_6(iLocal_317, 1, 1))
						{
							func_312("GC_TCK_62", iLocal_317, 0, 0, 0, 1, 1, 0);
							unk_0xF6082E2ADA1C795B(&iLocal_309, 12);
						}
					}
				}
			}
			if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 10))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 8))
				{
					if (unk_0x0FFED3E94261A832() == iLocal_316)
					{
						if (func_6(iLocal_317, 1, 1))
						{
							func_312("GC_TCK_65", iLocal_317, 0, 0, 0, 1, 1, 0);
							unk_0xF6082E2ADA1C795B(&iLocal_309, 8);
						}
					}
				}
			}
			else if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 13))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_94.f_2, 11))
				{
					if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 8))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_94.f_2, 6))
						{
							if (unk_0x0FFED3E94261A832() == iLocal_316)
							{
								if (func_6(iLocal_317, 1, 1))
								{
									func_312("GC_TCK_63", iLocal_317, 0, 0, 0, 1, 1, 0);
									unk_0xF6082E2ADA1C795B(&iLocal_309, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 11))
			{
				if (unk_0x0FFED3E94261A832() == iLocal_316)
				{
					if (func_6(iLocal_317, 1, 1))
					{
						if (Local_94.f_50)
						{
							func_312("HS_SUCC", iLocal_317, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_312("GC_TCK_70", iLocal_317, 0, 0, 0, 1, 1, 0);
						}
						unk_0xF6082E2ADA1C795B(&iLocal_309, 11);
					}
				}
				else if (unk_0x0FFED3E94261A832() == iLocal_317)
				{
					if (func_6(iLocal_316, 1, 1))
					{
						if (Local_94.f_50)
						{
							if (Local_94.f_51)
							{
								func_489("HS_A_SUCC", 1);
							}
							else
							{
								func_312("HS_SENT", iLocal_316, 0, 0, 0, 1, 1, 0);
							}
						}
						else
						{
							func_312("GC_TCK_71", iLocal_316, 0, 0, 0, 1, 1, 0);
						}
						unk_0xF6082E2ADA1C795B(&iLocal_309, 11);
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 10))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 0))
				{
					if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 6))
					{
						if (unk_0x0FFED3E94261A832() == iLocal_316)
						{
							if (func_6(iLocal_317, 0, 1))
							{
								func_488(-1);
								if (Local_94.f_50)
								{
									if (!Local_94.f_51)
									{
										func_312("HS_KILLED", iLocal_317, 0, 0, 0, 1, 1, 0);
									}
								}
								else
								{
									func_312("GC_TCK_73", iLocal_317, 0, 0, 0, 1, 1, 0);
								}
								unk_0xF6082E2ADA1C795B(&iLocal_309, 10);
							}
						}
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_309, 9))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_94.f_1, 0))
				{
					if (unk_0xAA4F14DA15DB0B51(Local_94.f_3, 7))
					{
						if (unk_0x0FFED3E94261A832() == iLocal_316)
						{
							if (func_6(iLocal_317, 0, 1))
							{
								if (Local_94.f_50)
								{
									func_312("HS_ESCAPED", iLocal_317, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_312("GC_TCK_75", iLocal_317, 0, 0, 0, 1, 1, 0);
								}
								unk_0xF6082E2ADA1C795B(&iLocal_309, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_488(int iParam0)
{
	if (Global_1574286)
	{
		if (Global_1574290 && Global_1592456[unk_0x0FFED3E94261A832() /*635*/] != 148)
		{
			if (Global_1573830.f_14 == unk_0x7C214DA899F05536(iParam0))
			{
				Global_1621245++;
			}
		}
		else
		{
			Global_1621245++;
		}
	}
}

int func_489(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_313(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_490()
{
	if (unk_0xD7381CA7CDE5E23C(false, 0) != Local_94.f_45)
	{
		if (func_498(Local_94.f_45, 0, 1))
		{
			if (unk_0x1DFA3B8DE71107F9(0) <= Local_94.f_45)
			{
				unk_0x20DC9856B13C398C(Local_94.f_45);
			}
		}
	}
	if (unk_0xA2590AFE7521A892(false, 0) != Local_94.f_46)
	{
		if (func_497(Local_94.f_45, 0, 1))
		{
			if (unk_0xEFE4872D48AC5A4D(0) <= Local_94.f_46)
			{
				unk_0x7E04478E16257BA0(Local_94.f_46);
			}
		}
	}
	if (unk_0xB4BBAC4F16F9AEA1(false, 0) != Local_94.f_47)
	{
		if (func_491(Local_94.f_45, 0, 1))
		{
			if (unk_0x4893DFF5DBCA4B58(0) <= Local_94.f_47)
			{
				unk_0xE73D26CD3CB3B618(Local_94.f_47);
			}
		}
	}
}

bool func_491(int iParam0, bool bParam1, bool bParam2)
{
	return func_492(2, iParam0, 1, bParam1, bParam2);
}

int func_492(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAA4F14DA15DB0B51(Global_1363019, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_496(iParam0) - func_495(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_495(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_496(iParam0) - func_494(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_495(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_496(iParam0) - func_495(iParam0, 1));
		}
		if (!bParam4 && Global_1592456[unk_0x0FFED3E94261A832() /*635*/] != 3)
		{
			iVar1 = (iVar1 - func_493(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_493(int iParam0)
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

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1363019.f_1;
			break;
		
		case 1:
			return Global_1363019.f_2;
			break;
		
		case 2:
			return Global_1363019.f_3;
			break;
	}
	return 0;
}

int func_495(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xBCE21F0E265FBBAE())
			{
				return Global_2422215[iVar0 /*387*/].f_218;
			}
			else
			{
				return unk_0xD7381CA7CDE5E23C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xBCE21F0E265FBBAE())
			{
				return Global_2422215[iVar0 /*387*/].f_219;
			}
			else
			{
				return unk_0xA2590AFE7521A892(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xBCE21F0E265FBBAE())
			{
				return Global_2422215[iVar0 /*387*/].f_220;
			}
			else
			{
				return unk_0xB4BBAC4F16F9AEA1(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_496(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1363027;
			break;
		
		case 1:
			return Global_1363028;
			break;
		
		case 2:
			return Global_1363029;
			break;
	}
	return 0;
}

bool func_497(int iParam0, bool bParam1, bool bParam2)
{
	return func_492(1, iParam0, 1, bParam1, bParam2);
}

bool func_498(int iParam0, bool bParam1, bool bParam2)
{
	return func_492(0, iParam0, 1, bParam1, bParam2);
}

void func_499()
{
	if (Local_94.f_50)
	{
		if (unk_0x0FFED3E94261A832() == iLocal_316)
		{
			func_501(9);
		}
		else if (unk_0x0FFED3E94261A832() == iLocal_317)
		{
			func_501(13);
		}
	}
	func_500();
}

void func_500()
{
	unk_0xA232817B0B36F2E5();
}

void func_501(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

int func_502()
{
	var uVar0;
	
	func_509(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_508())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_507())
	{
		return 1;
	}
	if (func_506(157))
	{
		if (!func_505())
		{
			return 1;
		}
	}
	if (func_506(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_503() != 0)
	{
		if (unk_0x09952BA662A7629B(func_503()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_503()
{
	switch (func_504())
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

int func_504()
{
	return Global_25222;
}

bool func_505()
{
	return Global_2445217.f_578;
}

int func_506(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_507()
{
	return Global_2454709;
}

bool func_508()
{
	return Global_2445217.f_573;
}

void func_509(var uParam0)
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
					func_510(iVar0);
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

void func_510(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_6(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(iVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(iVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_511(uVar4, &bVar5))
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

int func_511(int iParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(iParam0))
		{
			if (unk_0x3321AFCAE6E141D4(iParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(iParam0)))
				{
					unk_0x216B434C1A609F5B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(iParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_512()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_513(struct<21> Param0)
{
	func_517(32, Param0);
	func_516(0, -1, 0);
	unk_0x2D179B3FFCF1AADA(&Local_94, 54);
	unk_0xA5929B03CD847BE8(&Local_148, 161);
	unk_0xAC09235E2065C253(0);
	if (!func_515())
	{
		func_242();
	}
	iLocal_315 = Param0.f_16;
	iLocal_316 = unk_0x7C214DA899F05536(Param0.f_17);
	if (unk_0x885F483F34E47503(iLocal_316))
	{
	}
	iLocal_317 = unk_0x7C214DA899F05536(Param0.f_18);
	if (unk_0x885F483F34E47503(iLocal_317))
	{
		iLocal_318 = unk_0xCAEDBF30E3EA14FC(unk_0x4325D353D7D27B34(iLocal_317));
	}
	if (func_514(iLocal_316, 9) && iLocal_315 == 1)
	{
		Local_94.f_50 = 1;
		if (func_514(iLocal_317, 13))
		{
			Local_94.f_51 = 1;
		}
	}
	Local_319 = { Param0.f_10 };
	if (iLocal_315 == 1)
	{
		if (unk_0x0FFED3E94261A832() == iLocal_316)
		{
			unk_0xF6082E2ADA1C795B(&Global_1573330, 0);
		}
	}
	Global_1752415 = 0;
	Global_1752416 = 0;
	if (iLocal_315 == 1)
	{
		Global_2497344.f_1666 = 0;
	}
	Local_148[unk_0x87B7000A6C80CCEF() /*5*/] = 0;
}

bool func_514(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_5, iParam1);
}

int func_515()
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
		if (func_508())
		{
			return 0;
		}
		if (func_506(155))
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

int func_516(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_500();
			}
			else
			{
				return 0;
			}
		}
		if (!func_477())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_500();
					}
					else
					{
						return 0;
					}
				}
				if (func_508())
				{
					if (!bParam2)
					{
						func_500();
					}
					else
					{
						return 0;
					}
				}
				if (func_506(155))
				{
					if (!bParam2)
					{
						func_500();
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
					func_500();
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
				func_500();
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
			func_500();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_517(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_500();
	}
	unk_0x7784BB6DC48D0B18(iParam0, 0, Param1.f_16);
}

