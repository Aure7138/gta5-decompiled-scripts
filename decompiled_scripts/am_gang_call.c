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
	if (unk_0xA86CA03D9749EEB3())
	{
		func_496(ScriptParam_0);
	}
	while (true)
	{
		func_495();
		if (func_485())
		{
			func_482();
		}
		uLocal_319 = unk_0x4B50AAB32FBE0483();
		func_473();
		func_470();
		func_465();
		func_464();
		switch (func_463(unk_0x1A9CF4D5D4E2F266()))
		{
			case 0:
				if (func_462() == 1)
				{
					Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/] = 1;
				}
				else if (func_462() == 4)
				{
					Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_462() == 1)
				{
					func_456();
				}
				else if (func_462() == 0)
				{
					func_450();
					Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/] = 0;
				}
				else if (func_462() == 4)
				{
					Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_425();
				func_423(&(Local_91.f_52));
				if (func_422(&(Local_91.f_52)))
				{
					iVar0 = 0;
					while (iVar0 < func_421(iLocal_312))
					{
						func_425();
						iVar0++;
					}
					Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/] = 4;
			
			case 4:
				func_228();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			func_226();
			func_225();
			func_224();
			switch (func_462())
			{
				case 0:
					func_223();
					if (func_219())
					{
						if (!unk_0x912AD5A10E7633F0(unk_0x21F191D9AFF98B5E(iLocal_314), 0))
						{
							func_217(unk_0x21F191D9AFF98B5E(iLocal_314));
						}
						else
						{
							Local_91.f_36 = { Local_316 };
						}
						unk_0x09C86C0C5CA26B1E(&(Local_91.f_2), 6);
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
	
	if (func_462() < 4)
	{
		if (func_22())
		{
			iLocal_320 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_421(iLocal_312) - 1))
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
	
	if (unk_0x08BA6DD398CA197C(Local_91.f_10[iLocal_320 /*7*/].f_2, 1) || unk_0x08BA6DD398CA197C(Local_91.f_10[iLocal_320 /*7*/].f_2, 6))
	{
		if (unk_0x0E091C9F3918F674(Local_91.f_10[iLocal_320 /*7*/]))
		{
			if (unk_0xD3FACCDA4D66AEAD(unk_0x564EAE6038A81C07(Local_91.f_10[iLocal_320 /*7*/])))
			{
				if (unk_0x912AD5A10E7633F0(unk_0x564EAE6038A81C07(Local_91.f_10[iLocal_320 /*7*/]), 0))
				{
					if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iLocal_320 /*7*/].f_2, 6))
					{
						if (iLocal_312 == 0)
						{
							Local_91.f_48++;
							if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 12))
							{
								if (unk_0x1F86C8C27A772A49(Local_91.f_10[iLocal_320 /*7*/], &uVar0) == iLocal_314)
								{
									unk_0x88B0F0DC270164B7(&(Local_91.f_2), 12);
								}
							}
							if ((Local_91.f_42 == iLocal_320 && !unk_0x08BA6DD398CA197C(Local_91.f_2, 5)) || Local_91.f_48 == func_421(iLocal_312))
							{
								Var1.f_2 = 155;
								Var1.f_10 = iLocal_314;
								Var1.f_11 = iLocal_313;
								if (func_421(iLocal_312) > 1)
								{
									Var1.f_12 = unk_0x81C85E54237F8A2E(1);
								}
								else
								{
									Var1.f_12 = unk_0x81C85E54237F8A2E(0);
								}
								Var1.f_3 = Local_91.f_43;
								func_20(Var1, func_21(1));
								if (Local_91.f_42 == iLocal_320)
								{
									unk_0x88B0F0DC270164B7(&(Local_91.f_2), 5);
								}
							}
							else if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 5))
							{
								Var1.f_2 = 154;
								Var1.f_11 = iLocal_313;
								func_20(Var1, func_21(1));
							}
						}
						unk_0x88B0F0DC270164B7(&(Local_91.f_10[iLocal_320 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iLocal_320 /*7*/].f_2, 5))
					{
						unk_0x88B0F0DC270164B7(&iLocal_306, 2);
					}
					unk_0x88B0F0DC270164B7(&iLocal_306, 1);
				}
			}
		}
	}
	else
	{
		unk_0x88B0F0DC270164B7(&iLocal_306, 1);
		unk_0x88B0F0DC270164B7(&iLocal_306, 2);
	}
	func_3(iLocal_320);
	iLocal_320++;
	if (iLocal_320 >= func_421(iLocal_312))
	{
		iLocal_320 = 0;
		if (unk_0x08BA6DD398CA197C(Local_91.f_1, 0))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_306, 1))
			{
				if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 1))
				{
					unk_0x88B0F0DC270164B7(&(Local_91.f_1), 1);
				}
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_306, 2))
			{
				if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 9))
				{
					unk_0x88B0F0DC270164B7(&(Local_91.f_1), 9);
				}
			}
		}
		unk_0x09C86C0C5CA26B1E(&iLocal_306, 1);
		unk_0x09C86C0C5CA26B1E(&iLocal_306, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0xD9E8CA806A80203D())
	{
		if (unk_0x0E091C9F3918F674(Local_91.f_10[iParam0 /*7*/]))
		{
			iVar0 = unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]);
			if (!unk_0x912AD5A10E7633F0(iVar0, 0))
			{
				if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 9))
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
						unk_0x88B0F0DC270164B7(&(Local_91.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_91.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_91.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((unk_0x522651587BA63DA6(iVar0) == 2 || (Global_2421327[iLocal_314 /*353*/].f_235 != -1 && func_18(Global_2421327[iLocal_314 /*353*/].f_235) == 4)) || Global_1588660[iLocal_314 /*532*/].f_441) || func_16(iLocal_314, 0)) || func_9(iLocal_314))
								{
									Local_91.f_10[iParam0 /*7*/].f_3 = uLocal_319;
									unk_0x88B0F0DC270164B7(&(Local_91.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((unk_0x522651587BA63DA6(iVar0) != 2 && Global_2421327[iLocal_314 /*353*/].f_235 == -1) && !Global_1588660[iLocal_314 /*532*/].f_441) && !func_16(iLocal_314, 0)) && !func_9(iLocal_314))
							{
								unk_0x09C86C0C5CA26B1E(&(Local_91.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (unk_0xDDEA1623E4BFD71B(uLocal_319, Local_91.f_10[iParam0 /*7*/].f_3) > 10000 || unk_0x522651587BA63DA6(iVar0) != 2)
							{
								if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 10))
								{
									unk_0x88B0F0DC270164B7(&(Local_91.f_2), 10);
									Local_91.f_39 = { func_8(iLocal_314) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_421(iLocal_312))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (unk_0x4B1467B1A6A35A02(iVar0) == 3f && !unk_0x8B99D63EA8B2E230(iVar0, 118, 1))
									{
										unk_0x88B0F0DC270164B7(&(Local_91.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (unk_0x08BA6DD398CA197C(Local_91.f_2, 1))
						{
							unk_0x88B0F0DC270164B7(&(Local_91.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_314, 1, 1))
						{
							if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(unk_0xC59DF10B4FC39DF8(iVar0, 1), unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iLocal_314), 1), 25f) || !func_5(unk_0xC59DF10B4FC39DF8(iVar0, 1), unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iLocal_314), 1), 625f))
								{
									unk_0x88B0F0DC270164B7(&(Local_91.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(unk_0xC59DF10B4FC39DF8(iVar0, 1), unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iLocal_314), 1)) || (unk_0xE44CFAD9FA539E8A(iVar0) && unk_0xC9E2B89AB7A49836(iVar0) == unk_0x21F191D9AFF98B5E(iLocal_314)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (unk_0x08BA6DD398CA197C(Local_91.f_2, 1))
						{
							unk_0x88B0F0DC270164B7(&(Local_91.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_314, 1, 1))
						{
							if (!func_4(unk_0xC59DF10B4FC39DF8(iVar0, 1), unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iLocal_314), 1)) && !(unk_0xE44CFAD9FA539E8A(iVar0) && unk_0xC9E2B89AB7A49836(iVar0) == unk_0x21F191D9AFF98B5E(iLocal_314)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_91.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (unk_0x8B99D63EA8B2E230(iVar0, 118, 1))
								{
									unk_0x88B0F0DC270164B7(&(Local_91.f_10[iParam0 /*7*/].f_2), 4);
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
	
	if (unk_0x7466327978A6A24C((Param3.f_2 - Param0.f_2)) < 2f)
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
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
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
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCB129F9A01D14082(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = unk_0x21F191D9AFF98B5E(iParam0);
			iVar1 = func_11(iParam0);
			if (unk_0xD3FACCDA4D66AEAD(iVar1))
			{
				if (unk_0x1F1B2B6E500380C5(iVar1, 0))
				{
					if (unk_0x1FD87E888EB4FC00(iVar0, iVar1, 0))
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
	
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		if (unk_0x71F81D3603710A43("MPBitset", 3) && unk_0x4184E6D274FCBFF1(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x96FB4818617F93B9(iParam0, "MPBitset");
			if (unk_0x08BA6DD398CA197C(iVar0, 17))
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
		return Global_2482149.f_4698.f_32[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1614576[iParam0 /*324*/].f_10;
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
	return Global_1614576[iParam0 /*324*/].f_10 != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_13())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = unk_0x21F191D9AFF98B5E(iParam0);
		if (unk_0x39FEE545B315414E(iVar0, iParam1))
		{
			if (func_17(unk_0xF8DB47D339B8B953(iVar0, iParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0)
{
	if (Global_69617)
	{
		if (unk_0x4184E6D274FCBFF1(uParam0, "Player_Vehicle"))
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
	if (unk_0x71F81D3603710A43("AttributeDamage", 3))
	{
		if (unk_0x4184E6D274FCBFF1(iParam0, "AttributeDamage"))
		{
			if (unk_0x08BA6DD398CA197C(unk_0x96FB4818617F93B9(iParam0, "AttributeDamage"), iParam1))
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
	Param0.f_1 = unk_0x0C1D3C552325765B();
	if (!iParam14 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Param0, 14, iParam14);
	}
}

int func_21(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
		{
			iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_22()
{
	if (unk_0x08BA6DD398CA197C(Local_91.f_1, 0))
	{
		if (iLocal_312 == 1)
		{
			if (unk_0x08BA6DD398CA197C(Local_91.f_1, 4))
			{
				unk_0x88B0F0DC270164B7(&(Local_91.f_3), 11);
				return 1;
			}
		}
		else if (unk_0x08BA6DD398CA197C(Local_91.f_1, 1))
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_3), 0);
			return 1;
		}
	}
	else if (unk_0x08BA6DD398CA197C(Local_91.f_1, 2))
	{
		unk_0x88B0F0DC270164B7(&(Local_91.f_3), 1);
		unk_0x88B0F0DC270164B7(&Global_1729860, iLocal_312);
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 12))
	{
		return 1;
	}
	if (iLocal_312 == 0)
	{
		if (unk_0x08BA6DD398CA197C(Local_91.f_2, 2))
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_3), 2);
			return 1;
		}
		if (unk_0x08BA6DD398CA197C(Local_91.f_2, 8))
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_3), 8);
			return 1;
		}
		if (unk_0x08BA6DD398CA197C(Local_91.f_2, 5))
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_3), 3);
			return 1;
		}
		if (unk_0x08BA6DD398CA197C(Local_91.f_2, 9))
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_3), 9);
			return 1;
		}
		if (unk_0x08BA6DD398CA197C(Local_91.f_1, 15))
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_314, 0, 1))
	{
		if (iLocal_312 != 0 || !unk_0x08BA6DD398CA197C(Local_91.f_2, 1))
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_37(iLocal_314, 129))
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_2), 13);
			unk_0x88B0F0DC270164B7(&(Local_91.f_3), 8);
			return 1;
		}
		if (func_37(iLocal_314, 131) || unk_0x08BA6DD398CA197C(Global_1614576[iLocal_314 /*324*/].f_1, 11))
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_2), 13);
			unk_0x88B0F0DC270164B7(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_37(iLocal_314, 136) || (func_36(unk_0x0C1D3C552325765B(), 24) && func_35(iLocal_314)))
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_37(iLocal_314, 146))
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_34(unk_0x0C1D3C552325765B()) && ((func_32(unk_0x0C1D3C552325765B()) == 148 || func_32(unk_0x0C1D3C552325765B()) == 142) || func_32(unk_0x0C1D3C552325765B()) == 164))
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_32(unk_0x0C1D3C552325765B()) == 153)
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_30(unk_0x0C1D3C552325765B()) && func_32(unk_0x0C1D3C552325765B()) == 170)
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_32(unk_0x0C1D3C552325765B()) == 167)
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_2), 8);
			return 1;
		}
		if (func_32(unk_0x0C1D3C552325765B()) == 168)
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_2), 8);
			return 1;
		}
		if (unk_0x912AD5A10E7633F0(unk_0x21F191D9AFF98B5E(iLocal_314), 0))
		{
			if (iLocal_312 == 1)
			{
				if (unk_0x08BA6DD398CA197C(Local_91.f_1, 0))
				{
					unk_0x88B0F0DC270164B7(&(Local_91.f_3), 6);
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
					unk_0x88B0F0DC270164B7(&(Local_91.f_3), 7);
					return 1;
				}
				if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 16))
				{
					if (unk_0xDDEA1623E4BFD71B(uLocal_319, Local_91.f_9) > 120000)
					{
						unk_0x88B0F0DC270164B7(&(Local_91.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					unk_0x88B0F0DC270164B7(&(Local_91.f_3), 7);
					return 1;
				}
				if (func_23(iLocal_314, func_12(iLocal_313), 1))
				{
					unk_0x88B0F0DC270164B7(&(Local_91.f_3), 7);
					return 1;
				}
			}
			if (iLocal_315 != unk_0x3BB8D1C5FAAB25B3(unk_0xCF66111B26743875(iLocal_314)))
			{
				unk_0x88B0F0DC270164B7(&(Local_91.f_3), 5);
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
		if (Global_1614576[iParam0 /*324*/].f_10 != func_13())
		{
			if (iParam1 == Global_1614576[iParam0 /*324*/].f_10)
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
		return Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 != func_13())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
				{
					if (Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam2)
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
	return Global_1588660[iParam0 /*532*/].f_186 != 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
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
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
}

int func_32(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

int func_33(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
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
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 4);
}

bool func_36(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

int func_37(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/] == iParam1)
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
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
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
	
	if (func_6(unk_0x81C85E54237F8A2E(iLocal_321), 0, 1))
	{
		if (iLocal_312 == 1)
		{
			if (unk_0x81C85E54237F8A2E(iLocal_321) == iLocal_314)
			{
				if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 16))
				{
					if (unk_0x08BA6DD398CA197C(Local_145[iLocal_321 /*5*/].f_1, 3))
					{
						unk_0x88B0F0DC270164B7(&(Local_91.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 11))
			{
				if (func_46(unk_0x81C85E54237F8A2E(iLocal_321)))
				{
					if (!unk_0x08BA6DD398CA197C(Local_91.f_4, iLocal_321))
					{
						unk_0x88B0F0DC270164B7(&(Local_91.f_1), 11);
						unk_0x88B0F0DC270164B7(&(Local_91.f_4), iLocal_321);
					}
				}
				else if (unk_0x08BA6DD398CA197C(Local_91.f_4, iLocal_321))
				{
					unk_0x88B0F0DC270164B7(&(Local_91.f_1), 11);
					unk_0x09C86C0C5CA26B1E(&(Local_91.f_4), iLocal_321);
				}
			}
			else if (unk_0x08BA6DD398CA197C(Local_145[iLocal_321 /*5*/].f_1, 2))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_91.f_1), 11);
			}
			if (iLocal_312 == 0)
			{
				if (unk_0x08BA6DD398CA197C(Local_145[iLocal_321 /*5*/].f_1, 0))
				{
					if (Local_145[iLocal_321 /*5*/].f_2 != -1)
					{
						if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 1))
						{
							unk_0x88B0F0DC270164B7(&(Local_91.f_2), 1);
							Local_91.f_42 = Local_145[iLocal_321 /*5*/].f_2;
							Local_91.f_43 = Local_145[iLocal_321 /*5*/].f_3;
							if (!func_45())
							{
								func_44();
							}
						}
					}
					else if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 9))
					{
						if (!func_45())
						{
							func_43();
						}
						iVar0 = 0;
						while (iVar0 < func_421(iLocal_312))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						unk_0x88B0F0DC270164B7(&(Local_91.f_2), 9);
						unk_0x88B0F0DC270164B7(&(Local_91.f_2), 1);
					}
				}
				if (func_45())
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_306, 17))
					{
						if (unk_0x08BA6DD398CA197C(Local_145[iLocal_321 /*5*/].f_1, 5))
						{
							func_44();
							unk_0x88B0F0DC270164B7(&iLocal_306, 17);
						}
						else if (unk_0x08BA6DD398CA197C(Local_145[iLocal_321 /*5*/].f_1, 6))
						{
							func_43();
							unk_0x88B0F0DC270164B7(&iLocal_306, 17);
						}
					}
				}
				if (!unk_0x08BA6DD398CA197C(Local_145[iLocal_321 /*5*/].f_1, 1))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_306, 3))
					{
						unk_0x88B0F0DC270164B7(&iLocal_306, 3);
					}
				}
				else if (unk_0x81C85E54237F8A2E(iLocal_321) == iLocal_314)
				{
					if (iLocal_312 == 0)
					{
						if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 1))
						{
							if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 6))
							{
								unk_0x88B0F0DC270164B7(&(Local_91.f_2), 6);
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
			if (!unk_0x08BA6DD398CA197C(iLocal_306, 3))
			{
				func_42();
			}
			else
			{
				func_41();
			}
			unk_0x09C86C0C5CA26B1E(&iLocal_306, 3);
		}
	}
}

void func_41()
{
	if (unk_0x08BA6DD398CA197C(Local_91.f_2, 3))
	{
		unk_0x09C86C0C5CA26B1E(&(Local_91.f_2), 3);
	}
}

void func_42()
{
	if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 3))
	{
		Local_91.f_6 = uLocal_319;
		unk_0x88B0F0DC270164B7(&(Local_91.f_2), 3);
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
	if (func_421(iLocal_312) > 1)
	{
		Var0.f_12 = unk_0x81C85E54237F8A2E(1);
	}
	else
	{
		Var0.f_12 = unk_0x81C85E54237F8A2E(0);
	}
	Var0.f_3 = Local_91.f_43;
	func_20(Var0, func_21(1));
}

int func_45()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

bool func_46(int iParam0)
{
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		return func_49();
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_241.f_136[func_48(10) /*33*/][iParam0], func_47(10));
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
		if (unk_0x08BA6DD398CA197C(Local_91.f_2, 3))
		{
			if (unk_0xDDEA1623E4BFD71B(uLocal_319, Local_91.f_6) > 10000)
			{
				if (unk_0x08BA6DD398CA197C(Local_91.f_2, 1))
				{
					unk_0x88B0F0DC270164B7(&(Local_91.f_2), 2);
				}
			}
		}
		if (unk_0x08BA6DD398CA197C(Local_91.f_1, 8))
		{
			if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 1))
			{
				if (func_54())
				{
					unk_0x88B0F0DC270164B7(&(Local_91.f_2), 6);
					func_53();
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 0))
		{
			if (func_6(iLocal_314, 1, 1))
			{
				iVar0 = unk_0x21F191D9AFF98B5E(iLocal_314);
				if (func_52(iVar0))
				{
					func_217(iVar0);
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 1))
		{
			if (!func_6(iLocal_314, 1, 1) || func_28(iLocal_314))
			{
				unk_0x88B0F0DC270164B7(&(Local_91.f_1), 15);
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_1, 0))
	{
		if (unk_0x08BA6DD398CA197C(Local_91.f_1, 5))
		{
			if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 4))
			{
				if (unk_0xDDEA1623E4BFD71B(uLocal_319, Local_91.f_5) > 600000)
				{
					unk_0x88B0F0DC270164B7(&(Local_91.f_1), 4);
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_91.f_3, 12))
		{
			if (func_51())
			{
				unk_0x88B0F0DC270164B7(&(Local_91.f_3), 12);
			}
		}
	}
}

int func_51()
{
	switch (Local_91.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_432 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_432 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_52(int iParam0)
{
	if (unk_0xEB361B4BD195A4D3(iParam0))
	{
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_1, 17))
	{
		if (!unk_0xB46E03E529421E99(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_91.f_36, unk_0xC59DF10B4FC39DF8(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_53()
{
	func_450();
	Local_91.f_0 = 0;
}

int func_54()
{
	if ((((((((unk_0x08BA6DD398CA197C(Local_91.f_2, 6) || unk_0xB9F40AFFEEE41647(iLocal_314)) || func_29(iLocal_314, 1, 0)) || func_56(iLocal_314)) || func_36(iLocal_314, 0)) || func_36(iLocal_314, 7)) || func_28(iLocal_314)) || Global_2421327[iLocal_314 /*353*/].f_237) || func_55(unk_0x21F191D9AFF98B5E(iLocal_314), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_314 != -1)
	{
		if (unk_0x08BA6DD398CA197C(Local_145[iLocal_314 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (!unk_0xEB361B4BD195A4D3(iParam0))
		{
			if (unk_0x4745637EEB85132D(iParam0))
			{
				iVar0 = unk_0xF8DB47D339B8B953(iParam0, 0);
				if (unk_0xD3FACCDA4D66AEAD(iVar0))
				{
					if (unk_0x705BC1BB91F530B5(iVar0) == iParam1)
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
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 14))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 11))
	{
		return 1;
	}
	return 0;
}

void func_57()
{
	if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 5))
	{
		Local_91.f_5 = uLocal_319;
		unk_0x88B0F0DC270164B7(&(Local_91.f_1), 5);
	}
}

void func_58()
{
	if (unk_0x08BA6DD398CA197C(Local_91.f_1, 5))
	{
		unk_0x09C86C0C5CA26B1E(&(Local_91.f_1), 5);
	}
}

int func_59()
{
	bool bVar0;
	
	if (unk_0x08BA6DD398CA197C(Local_91.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_219())
		{
			if (iLocal_312 == 1)
			{
				bVar0 = true;
			}
			else if (func_214())
			{
				if (func_211())
				{
					if (func_210())
					{
						bVar0 = true;
					}
					else if (func_208(func_209(iLocal_312)))
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
	if (unk_0xD9E8CA806A80203D())
	{
		if (unk_0x08BA6DD398CA197C(Local_91.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_312)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_421(iLocal_312))
					{
						if ((!unk_0x0E091C9F3918F674(Local_91.f_10[iVar0 /*7*/]) && !unk_0x08BA6DD398CA197C(Local_91.f_10[iVar0 /*7*/].f_2, 1)) && !unk_0x08BA6DD398CA197C(Local_91.f_10[iVar0 /*7*/].f_2, 6))
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
				while (iVar0 < func_421(iLocal_312))
				{
					if (!unk_0x0E091C9F3918F674(Local_91.f_10[iVar0 /*7*/]))
					{
						if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			unk_0x88B0F0DC270164B7(&iLocal_306, 1);
			unk_0x88B0F0DC270164B7(&iLocal_306, 2);
			unk_0x88B0F0DC270164B7(&iLocal_306, 3);
			unk_0x88B0F0DC270164B7(&iLocal_306, 4);
			unk_0x88B0F0DC270164B7(&(Local_91.f_1), 0);
			unk_0x88B0F0DC270164B7(&Global_1729861, iLocal_312);
			return 1;
		}
	}
	return 0;
}

void func_61(int iParam0, var uParam1, struct<3> Param2, var uParam5)
{
	if (unk_0xD9E8CA806A80203D())
	{
		if (!unk_0x0E091C9F3918F674(Local_91.f_10[iParam0 /*7*/]))
		{
			if (unk_0x6A8543D72105975A(0) < unk_0x12FCC59A8F519B65(false))
			{
				if (unk_0x0C863D3ED919983C(1))
				{
					if (func_208(func_209(iLocal_312)))
					{
						if (func_63(&(Local_91.f_10[iParam0 /*7*/]), 7, func_209(iLocal_312), Param2, uParam5, 1, 1, 1))
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
	
	if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_91.f_10[iParam0 /*7*/].f_4 == 0)
			{
				unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), Global_1574275);
				unk_0x0D389A7F5055C004(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 1);
				unk_0xDFF0CA281C8C98A9(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 0);
			}
			unk_0xC2407AC016215F2D(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
			unk_0x54753279989302A7(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 2);
			unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 13, 1);
			unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 41, 1);
			unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 20, 1);
			unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 132, 1);
			unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 118, 0);
			unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 311, 1);
			unk_0xE00ECCA633196276(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 300f, 10);
			unk_0x77637031DE326F70(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 1);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			unk_0xDB721F9F36A8FE26(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_91.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 0, 0);
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 2, 0);
					unk_0xECD905C06E682B6D(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 2);
					unk_0x71D369F947D2E619(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 0);
					unk_0x6C77F5322B94AC81(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 0, -1, 0);
					unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 32, 1);
					unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 4, 0);
					unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 1024, 1);
					unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 128, 1);
					unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 32, 0);
					unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 8, 0);
					unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 64, 0);
					unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 256, 1);
					unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 1, 0);
					unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 2, 1);
					unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 16, 1);
					if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 0))
					{
						unk_0x88B0F0DC270164B7(&(Local_91.f_10[iParam0 /*7*/].f_2), 2);
					}
					unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 512, 1);
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 17, 0);
					unk_0x8942ADC0DB9F81E4(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, 1, 1);
					unk_0xFB4B028F94A31239(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 0);
					unk_0xD5DC2873808A9CB5(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), unk_0x21F191D9AFF98B5E(iLocal_314), -1, 0, 2);
					unk_0x4A80B46F64C971CD(Local_91.f_10[iParam0 /*7*/], 1);
					break;
			}
			unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), unk_0xF2DB717A73826179((Global_262145.f_151 * IntToFloat(unk_0xC6FE0F623405BFA8(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]))))));
			if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 8))
			{
				unk_0x88B0F0DC270164B7(&(Local_91.f_1), 8);
			}
			unk_0x88B0F0DC270164B7(&(Local_91.f_10[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_63(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x0C863D3ED919983C(1))
	{
		return 0;
	}
	uVar0 = unk_0xF8418B3B87CFCCBF(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x9ED2AEF3CEBC2436(uVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(uVar0, iParam9);
		if (unk_0x6B8DF4084A1CD2DC(uVar0))
		{
			if (bParam7)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
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
	
	if (unk_0x08BA6DD398CA197C(Local_91.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_312)
		{
			case 0:
				if (unk_0xCB129F9A01D14082(iLocal_314) && func_6(iLocal_314, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_25 = -1082130432;
					Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iLocal_314), 1) };
					Var0.f_5 = 20f;
					if (func_66(Local_91.f_36, 40f, &(Local_91.f_32), &(Local_91.f_35), Var0))
					{
						unk_0x88B0F0DC270164B7(&(Local_91.f_1), 3);
						return 1;
					}
				}
				else
				{
					unk_0x58F8817BD61C43C0();
					unk_0xB0C9486E4E778206();
					if (Global_2404993.f_2023)
					{
						unk_0xEB410F2073890250();
						Global_2404993.f_2023 = 0;
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
	bool bVar83;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404993.f_2017 == *uParam0 || !Global_2404993.f_2017.f_1 == uParam0->f_1) || !Global_2404993.f_2017.f_2 == uParam0->f_2) || !Global_2404993.f_2020 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404993.f_2031 == uParam0->f_8 || !Global_2404993.f_2031.f_1 == uParam0->f_8.f_1) || !Global_2404993.f_2031.f_2 == uParam0->f_8.f_2) || !Global_2404993.f_2034 == uParam0->f_11) || !Global_2404993.f_2034.f_1 == uParam0->f_11.f_1) || !Global_2404993.f_2034.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404993.f_2031 == uParam0->f_8 || !Global_2404993.f_2031.f_1 == uParam0->f_8.f_1) || !Global_2404993.f_2031.f_2 == uParam0->f_8.f_2) || !Global_2404993.f_2034 == uParam0->f_11) || !Global_2404993.f_2034.f_1 == uParam0->f_11.f_1) || !Global_2404993.f_2034.f_2 == uParam0->f_11.f_2) || !Global_2404993.f_2037 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404993.f_2015 == 1)
		{
			if (unk_0x96549B1C2E196049(Global_2404993.f_2024))
			{
				if (Global_2404993.f_2024 == unk_0xEAE20F1125B83888())
				{
					if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2021) < func_207(0))
					{
						return 0;
					}
				}
				else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2021) < func_207(0))
				{
					return 0;
				}
			}
			unk_0x58F8817BD61C43C0();
			unk_0xB0C9486E4E778206();
			func_206();
		}
		Global_2404993.f_2015 = 0;
	}
	else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2021) > func_207(0))
	{
		Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
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
	unk_0x33E1C85069157293(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404993.f_2015)
	{
		unk_0x58F8817BD61C43C0();
		unk_0xB0C9486E4E778206();
		func_206();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_205(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xDBD26B3B95431588())
		{
			Global_2404993.f_2038 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404993.f_2017 = { *uParam0 };
					Global_2404993.f_2020 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404993.f_2031 = { uParam0->f_8 };
					Global_2404993.f_2034 = { uParam0->f_11 };
					Global_2404993.f_2037 = 0f;
					Global_2404993.f_2017 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404993.f_2031 = { uParam0->f_8 };
					Global_2404993.f_2034 = { uParam0->f_11 };
					Global_2404993.f_2037 = uParam0->f_14;
					Global_2404993.f_2017 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_204(Var8.f_0, Var8.f_1);
			}
			Global_2404993.f_2016 = 1;
			Global_2404993.f_2015 = 1;
			Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
			Global_2404993.f_2021 = unk_0x4B50AAB32FBE0483();
			Global_2404993.f_2024 = unk_0xEAE20F1125B83888();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404993.f_2015)
	{
		if (Global_2404993.f_2016 == 1)
		{
			if (unk_0x34302C240EA1F13B(fVar4, fVar5, fVar6, fVar7) || unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 5000)
			{
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
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
					func_185(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_184(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404993.f_2016 = 9;
				}
				else
				{
					Global_2404993.f_2016 = 2;
				}
			}
		}
		if (Global_2404993.f_2016 == 2)
		{
			if ((unk_0x6C8BF826062EB578(Var11, Var14) || unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 15000) || unk_0x53F8FDAE3EB94B2D(Var11, Var14) == 0)
			{
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				if (uParam0->f_5 && !func_181(unk_0x0C1D3C552325765B(), 0))
				{
					Global_2404993.f_2016 = 3;
				}
				else
				{
					Global_2404993.f_2016 = 4;
				}
			}
			else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2026) > 7000)
			{
				func_180(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404993.f_2016 == 3)
		{
			if (func_179() || unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 10000)
			{
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				Global_2404993.f_2016 = 4;
			}
		}
		if (Global_2404993.f_2016 == 4)
		{
			if (unk_0xDBD26B3B95431588())
			{
				unk_0x58F8817BD61C43C0();
				unk_0xB0C9486E4E778206();
			}
			else
			{
				iVar0 = 0;
				func_173();
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
					if (!unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
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
							if (unk_0x0DE79F7115B066B5(unk_0x0C1D3C552325765B(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
								Global_2404993.f_2016 = 5;
							}
							break;
						
						case 1:
							func_172(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0xFA59F0132C359136(unk_0x0C1D3C552325765B(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
								Global_2404993.f_2016 = 5;
							}
							break;
						
						case 2:
							if (unk_0xFA59F0132C359136(unk_0x0C1D3C552325765B(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
								Global_2404993.f_2016 = 5;
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
					Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
					Global_2404993.f_2016 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xA81B36E128305692(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_172(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x20C8B26DF4377161(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x20C8B26DF4377161(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404993.f_2016 == 5)
		{
			if (func_111(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404993.f_2042.f_5)
				{
					Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
					Global_2404993.f_2016 = 6;
				}
				else
				{
					Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0xE92969F4247292EB(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404993.f_2016 = 9;
				}
			}
			else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 20000)
			{
				unk_0x58F8817BD61C43C0();
				unk_0xB0C9486E4E778206();
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				Global_2404993.f_2016 = 8;
			}
		}
		if (Global_2404993.f_2016 == 6)
		{
			iVar0 = 0;
			Global_2404993.f_2042.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_110(uParam0->f_4))
				{
					if (unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_109(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var8)))
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
			Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
			Global_2404993.f_2016 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xA81B36E128305692(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_172(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x20C8B26DF4377161(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x20C8B26DF4377161(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404993.f_2016 == 7)
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
							if (!unk_0x652D2EEEF1D3E62C(Global_2404993.f_2153[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_184(Global_2404993.f_2153[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_2153[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_107(Global_2404993.f_2153[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_2153[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0xDFC5B758BDC9546F(Global_2404993.f_2153[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_2153[iVar17 /*3*/] };
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
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0xE92969F4247292EB(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404993.f_2016 = 9;
			}
			else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 20000)
			{
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				Global_2404993.f_2016 = 8;
			}
		}
		if (Global_2404993.f_2016 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_69(Global_2404993.f_474))
				{
				}
			}
			else if (Global_2404993.f_2042.f_2)
			{
				func_68(uParam2, &(Global_2404993.f_2042.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar83 = false;
				}
				else
				{
					bVar83 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404993.f_2017 };
				func_70(uParam2[0 /*3*/], 0, bVar83, 0, 0, uParam0, uParam1);
			}
			Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
			Global_2404993.f_2016 = 9;
		}
		if (Global_2404993.f_2016 == 9)
		{
			Global_2404993.f_2015 = 0;
			unk_0x58F8817BD61C43C0();
			unk_0xB0C9486E4E778206();
			func_206();
			return 1;
		}
		Global_2404993.f_2021 = unk_0x4B50AAB32FBE0483();
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
	var uVar61;
	int iVar62;
	bool bVar63;
	int iVar64;
	struct<3> Var65;
	struct<3> Var68;
	struct<3> Var71;
	float fVar74;
	
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
	if (bParam1)
	{
		iVar64 = 0;
	}
	else
	{
		iVar64 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar64 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var65 = { *uParam5 };
						if (func_110(uParam5->f_4) || !unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 1:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_109(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 2:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_109(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var65)))
						{
							iVar64 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar64 += 4;
		}
	}
	if (func_72(*uParam0, &Var0, iVar64, iParam3, 1))
	{
	}
	else
	{
		bVar63 = true;
	}
	if (bVar63)
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
		iVar62 = 0;
		while (iVar62 < 2)
		{
			Var4.f_38[iVar62 /*3*/] = { uParam6->f_13[iVar62 /*3*/] };
			Var4.f_45[iVar62] = uParam6->f_20[iVar62];
			iVar62++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_185(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var68 = { *uParam5 };
				fVar74 = uParam5->f_4;
				break;
			
			case 1:
				Var68 = { uParam5->f_8 };
				Var71 = { uParam5->f_11 };
				break;
			
			case 2:
				Var68 = { uParam5->f_8 };
				Var71 = { uParam5->f_11 };
				fVar74 = uParam5->f_14;
				break;
		}
		if (!func_71(Var0, uParam5->f_7, Var68, Var71, fVar74))
		{
			if (func_72(*uParam0, &Var0, iVar64, iParam3, 0))
			{
				if (!func_71(Var0, uParam5->f_7, Var68, Var71, fVar74))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var68 + Var71 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var68 };
					}
					if (unk_0x776447CD667051CD(Var0, &uVar61, 0))
					{
						Var0.f_2 = uVar61;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var68 + Var71 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var68 };
				}
				if (unk_0x776447CD667051CD(Var0, &uVar61, 0))
				{
					Var0.f_2 = uVar61;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404993.f_614 = 1;
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
			return unk_0xDFC5B758BDC9546F(Param0, Param4, Param7, fParam10, 0, 1);
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
	if (unk_0x1F69106BA5C5442C(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_88(Global_2404993.f_491, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
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
	while (iVar0 < Global_2410131[iVar4])
	{
		if (func_78(Var1, &(Global_2409302[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_75(&Var1, Global_2409302[iVar4 /*92*/][iVar0 /*7*/], Global_2409302[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409302[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410131[8])
	{
		if (func_78(Var1, &(Global_2409302[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_75(&Var1, Global_2409302[iVar4 /*92*/][iVar0 /*7*/], Global_2409302[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409302[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x6985B73FFE117B5D(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x6985B73FFE117B5D(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
	return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_79(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410141[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410141[1])
	{
		if (Param0.f_0 < Global_2410145[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410141[2])
	{
		if (Param0.f_0 < Global_2410145[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410145[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410145[3])
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
	
	if (func_85(unk_0x0C1D3C552325765B(), 1))
	{
		if (Global_1626500.f_41581 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_41581)
			{
				if (Global_1626500.f_41582[iVar0 /*59*/].f_7 != 0)
				{
					if (func_81(Param0, Global_1626500.f_41582[iVar0 /*59*/], Global_1626500.f_41582[iVar0 /*59*/].f_6, Global_1626500.f_41582[iVar0 /*59*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1626500.f_39362 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_39362)
			{
				if (Global_1626500.f_39365[iVar0 /*90*/].f_16 != 0)
				{
					if (func_81(Param0, Global_1626500.f_39365[iVar0 /*90*/], Global_1626500.f_39365[iVar0 /*90*/].f_3, Global_1626500.f_39365[iVar0 /*90*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1626500.f_53608 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_53608)
			{
				if (Global_1626500.f_53612[iVar0 /*128*/].f_12 != 0)
				{
					if (func_81(Param0, Global_1626500.f_53612[iVar0 /*128*/], Global_1626500.f_53612[iVar0 /*128*/].f_3, Global_1626500.f_53612[iVar0 /*128*/].f_12, 0.5f))
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
		fVar9 = unk_0x7466327978A6A24C((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0x7466327978A6A24C((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x7466327978A6A24C((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xDFC5B758BDC9546F(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_82(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x81972CB541487AFD(iParam0))
	{
		unk_0xA27A0E75635DD922(iParam0, fParam1, fParam2);
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
	if (Global_1588660[iParam0 /*532*/] == -1)
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
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
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
			func_83(&Var0, 0f, 0f, unk_0xF25F352E34274C58(0f, 360f));
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
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_2255[iVar0 /*3*/]) < fParam3)
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
			func_93(&Var2, &(Global_2404993.f_353[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_96(Var2, &uVar1) || func_92(Var2))
			{
				Var2 = { *uParam0 };
				func_93(&Var2, &(Global_2404993.f_353[iVar0 /*12*/]), 1036831949, 1, bParam2);
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
	
	if (Global_2404993.f_559 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_556);
		if (fVar0 < Global_2404993.f_559)
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
				*uParam0 = { func_95(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404993.f_2253) * uParam1->f_8)), 0, fParam2, bParam3) };
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
				func_89(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404993.f_2253) * uParam1->f_8)), fParam2, bParam3, 0);
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
		unk_0x3E1E1E768BE3A2F4(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_184(Var1, Param3, fParam9, 0, 0))
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
				if (!unk_0xDFC5B758BDC9546F(Var1, Param3, Param6, fParam9, 0, 1))
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
		if (Global_2404993.f_353[iVar0 /*12*/].f_9 == 1)
		{
			if (func_97(Param0, &(Global_2404993.f_353[iVar0 /*12*/]), 1008981770, 0, 0))
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
			return func_184(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404993.f_2253) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_107(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
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
		if (Global_2404993.f_353[iVar0 /*12*/].f_9)
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
		if (Global_2409165[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409165[iVar0 /*17*/].f_16))
			{
				if (func_97(*uParam0, &(Global_2409165[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409165[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409165[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_93(&Var1, &(Global_2409165[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_99(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_93(&Var1, &(Global_2409165[iVar0 /*17*/]), 1036831949, 1, 0);
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
	
	if (!Global_2404993.f_494)
	{
		if (!Global_2404993.f_43.f_309)
		{
			if (!func_104(unk_0x0C1D3C552325765B(), 1))
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
					Var1 = { func_101(&(Global_2404993.f_43[iVar0 /*12*/])) };
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
		if (Global_2404993.f_43[iVar0 /*12*/].f_9)
		{
			if (func_97(Param0, &(Global_2404993.f_43[iVar0 /*12*/]), fParam3, 0, 0))
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
		if (Global_2404993.f_43[iVar0 /*12*/].f_9)
		{
			if (func_97(Param0, &(Global_2404993.f_43[iVar0 /*12*/]), fParam3, 0, 0))
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
		return Global_2421327[iParam0 /*353*/].f_1;
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
	if (Global_2404993.f_1813 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1813)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404993.f_1814[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404993.f_1814[iVar1 /*4*/] };
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
	
	if (Global_2404993.f_2042.f_1 == 0 && Global_2404993.f_2042 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x0F504DBF486342DE(&(Global_2404993.f_2042.f_1)))
			{
				case 0:
					func_170(uParam1, uParam2);
					if (!Global_2404993.f_2042.f_2)
					{
						if (uParam2->f_7 && Global_2404993.f_523.f_7 == 0)
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
								*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
							}
							if (uParam1->f_5 && func_69(Global_2404993.f_474))
							{
								if (!Global_2404993.f_2042.f_5)
								{
									Global_2404993.f_2042.f_5 = 1;
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
							uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_170(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xDBD26B3B95431588())
		{
			if (!unk_0x6538AB9B28AE0946())
			{
				if (unk_0x7C086C5B65728A7E())
				{
					func_170(uParam1, uParam2);
					Global_2404993.f_2042.f_1 = unk_0xBF656D9895240AF1();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xB0C9486E4E778206();
				func_170(uParam1, uParam2);
				if (!Global_2404993.f_2042.f_2)
				{
					Global_2404993.f_2042.f_5 = 1;
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
		func_167(Global_2404993.f_523, &(Global_2404993.f_2042.f_34), &(Global_2404993.f_2042.f_67));
	}
	if (uParam2->f_7 && !Global_2404993.f_2042.f_4)
	{
		Global_2404993.f_2042.f_4 = 1;
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
	if (Global_2404993.f_2042.f_1 > 0 || Global_2404993.f_2042 > 0)
	{
		if (uParam1->f_5 || unk_0xDBD26B3B95431588())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404993.f_2042.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404993.f_2042.f_3)
					{
						iVar4 = Global_2404993.f_2042.f_3 + 1;
					}
					if (iVar4 > (Global_2404993.f_2042.f_1 - 1))
					{
						iVar4 = (Global_2404993.f_2042.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x6978871734C62314(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x91E05C60C6CEAD98(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xDE715EE1001849E6(iVar4);
					}
					else
					{
						unk_0xCACFF8D05D40E632(iVar4, &iVar5);
					}
					func_119(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404993.f_2042.f_3 = iVar4;
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
			iVar4 = Global_2404993.f_2042.f_1;
		}
		if (Global_2404993.f_2042.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2404993.f_2345)
			{
				func_113(&(Global_2404993.f_2042.f_6[0 /*9*/]), &(Global_2404993.f_2042.f_6[1 /*9*/]), &(Global_2404993.f_2042.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_69(Global_2404993.f_474))
			{
				if (Global_2404993.f_2042.f_2)
				{
					func_68(uParam0, &(Global_2404993.f_2042.f_6));
					func_112(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
					func_70(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
					func_112(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404993.f_2042.f_2)
			{
				func_68(uParam0, &(Global_2404993.f_2042.f_6));
				func_112(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0xB5BF1B58C833F7A9(0, Global_2404993.f_2042.f_1);
				unk_0x6978871734C62314(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_74(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_112(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
					func_70(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
					func_112(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
				func_70(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
				func_112(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
		if (uParam1->f_5 && func_69(Global_2404993.f_474))
		{
			if (!Global_2404993.f_2042.f_5)
			{
				Global_2404993.f_2042.f_5 = 1;
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
		uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
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
			Global_2404993.f_2153[(3 - iVar0) /*3*/] = { Global_2404993.f_2153[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404993.f_2153[0 /*3*/] = { Param0 };
}

void func_113(var uParam0, var uParam1, var uParam2)
{
	if (func_69(Global_2404993.f_474) && func_118() < 4096)
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
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407339[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407339[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407339[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407339[iVar0 /*9*/] };
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
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407339[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407339[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407339[iVar0 /*9*/] };
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
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			if (Global_2407339[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407339[iVar0 /*9*/].f_1;
				Var2 = { Global_2407339[iVar0 /*9*/] };
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
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			if (Global_2407339[iVar0 /*9*/].f_2 < fVar1 && Global_2407339[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407339[iVar0 /*9*/].f_2;
				Var2 = { Global_2407339[iVar0 /*9*/] };
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
		if (Global_2407339[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407339[iVar0 /*9*/];
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
	struct<9> Var16;
	bool bVar25;
	bool bVar26;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404993.f_474 == 1)
		{
			if (unk_0x7466327978A6A24C((Global_2404993.f_491.f_2 - Param0.f_2)) < 25f)
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
		if (func_165(unk_0x0C1D3C552325765B()))
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
		if (!func_164(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x25A95C36B95B3351(unk_0xA0081090911D13E5(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x25A95C36B95B3351(unk_0xA0081090911D13E5(), Param0, 20f))
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
		if (!func_163(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (func_157(Param0, fParam3, uParam4->f_15, func_162(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404993.f_3;
		}
	}
	else if (!func_154(Param0, 25f, unk_0x0C1D3C552325765B(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_153(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_153(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404993.f_636)
		{
			Var11 = { Global_2404993.f_491 };
			if (Global_2404993.f_474 == 26)
			{
				Var11 = { Global_2404993.f_523.f_18 };
			}
			if (func_100(Var11))
			{
				if (!func_99(&Param0, 0, 0, 0) && !func_152(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if (!func_152(&Param0, 0) && !func_90(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_151(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_150(unk_0x0C1D3C552325765B()) && func_149(unk_0x0C1D3C552325765B())))
		{
			if (!func_148(&Param0, &(Global_2404993.f_2042.f_67), 0, 1065353216))
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
		if (!func_149(unk_0x0C1D3C552325765B()))
		{
			if (!func_147(Param0, &(Global_2404993.f_2042.f_34), &(Global_2404993.f_2042.f_67), 1073741824))
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
	if (func_146(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_146(Param0))
			{
				if (func_69(Global_2404993.f_474))
				{
					if (func_103(Param0, 1f))
					{
						iVar7 += 4096;
					}
				}
				else
				{
					iVar7 += 4096;
				}
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_145(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404993.f_43.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404993.f_636)
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
		iVar7 = -1;
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
	Var16.f_2 = 1176256410;
	bVar25 = false;
	bVar26 = false;
	if (Global_2404993.f_2345 && uParam4->f_5)
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
				fVar0 = func_136(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var16.f_8));
			}
			else
			{
				fVar0 = func_136(Param0, Global_2404993.f_2017, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var16.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_69(Global_2404993.f_474) && iVar7 < 4096)
			{
				Var16.f_2 = func_134(Param0);
			}
			Var16.f_4 = { Param0 };
			Var16.f_7 = fParam3;
			Var16.f_0 = iVar7;
			Var16.f_1 = fVar0;
			func_133(Var16);
			Global_2404993.f_2042.f_2 = 1;
		}
	}
	else
	{
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (iVar7 >= Global_2404993.f_2042.f_6[iVar15 /*9*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar25)
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
							fVar0 = func_136(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var16.f_8));
						}
						else
						{
							fVar0 = func_136(Param0, Global_2404993.f_2017, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var16.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar25 = true;
					}
					if ((func_69(Global_2404993.f_474) && iVar7 == Global_2404993.f_2042.f_6[iVar15 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar26)
						{
							fVar2 = func_134(Param0);
							bVar26 = true;
						}
						if (fVar2 < Global_2404993.f_2042.f_6[iVar15 /*9*/].f_2)
						{
							Var16.f_4 = { Param0 };
							Var16.f_7 = fParam3;
							Var16.f_0 = iVar7;
							Var16.f_1 = fVar0;
							Var16.f_2 = fVar2;
							func_132(Var16, iVar15);
							Global_2404993.f_2042.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2404993.f_2042.f_6[iVar15 /*9*/] || (iVar7 == Global_2404993.f_2042.f_6[iVar15 /*9*/] && fVar0 > Global_2404993.f_2042.f_6[iVar15 /*9*/].f_1))
					{
						Var16.f_4 = { Param0 };
						Var16.f_7 = fParam3;
						Var16.f_0 = iVar7;
						Var16.f_1 = fVar0;
						func_132(Var16, iVar15);
						Global_2404993.f_2042.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar25)
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
						bVar25 = true;
					}
					if (iVar7 > Global_2404993.f_2042.f_6[iVar15 /*9*/] || (iVar7 == Global_2404993.f_2042.f_6[iVar15 /*9*/] && fVar3 > Global_2404993.f_2042.f_6[iVar15 /*9*/].f_3))
					{
						Var16.f_4 = { Param0 };
						Var16.f_7 = fParam3;
						Var16.f_0 = iVar7;
						Var16.f_3 = fVar3;
						func_132(Var16, iVar15);
						Global_2404993.f_2042.f_2 = 1;
						return;
					}
				}
			}
			iVar15++;
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
			if (!iVar11 == unk_0x0C1D3C552325765B() || iParam5 == 1)
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
					if (unk_0x10B1B072E9514664(iVar11) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
					{
						if (!unk_0x10B1B072E9514664(iVar11) == -1 || !func_104(unk_0x0C1D3C552325765B(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar11) || !bParam6)
					{
						if (func_122(iVar11))
						{
							Var5 = { func_8(iVar11) };
							if (!iVar11 == unk_0x0C1D3C552325765B())
							{
								Var8 = { unk_0x052337DF45FC6411(unk_0x21F191D9AFF98B5E(iVar11)) };
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
							fVar1 = unk_0x999A157665D69393(Param0, Var5, 1);
							fVar2 = unk_0x999A157665D69393(Param0, Var8, 1);
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
	if (unk_0x9125ADC25E13C689(unk_0x21F191D9AFF98B5E(iParam0)) || Global_2421327[iParam0 /*353*/].f_244)
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
			if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam0))
			{
				if (!unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
				{
					if (func_85(unk_0x0C1D3C552325765B(), 1))
					{
						if (!func_128(unk_0x10B1B072E9514664(iParam0), unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
				{
					if (!func_85(unk_0x0C1D3C552325765B(), 1))
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
	if (func_127(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	Global_2471194 = { func_126(iParam0) };
	if (unk_0x74A87F4BE7FE0199(&Global_2471194))
	{
		return 1;
	}
	if (func_125(unk_0x0C1D3C552325765B(), iParam0))
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
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

int func_127(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_126(iParam0) };
		Global_2471207 = { func_126(iParam1) };
		if (unk_0xC1B41A655437AD93(&Global_2471194))
		{
			if (unk_0xC1B41A655437AD93(&Global_2471207))
			{
				unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194);
				unk_0x0ADE2D0C6811DC70(&Global_2471159, 35, &Global_2471207);
				if (Global_2471124 == Global_2471159)
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
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 0);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 1);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 2);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 4);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 5);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 6);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 8);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 9);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 10);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 12);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 13);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 14);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (func_181(iParam0, 0))
	{
		return 1;
	}
	if (func_130())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_130()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
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
		if (func_6(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				if (unk_0xE514F14357BDEECF(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0));
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
			if (!func_181(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if (func_122(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x10B1B072E9514664(iVar1) != unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))) || unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x10B1B072E9514664(iVar1) != iParam7 || unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iVar1), 0));
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
	Var0 = { Global_2404993.f_2042.f_6[iParam9 /*9*/] };
	Global_2404993.f_2042.f_6[iParam9 /*9*/] = { Param0 };
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
		if (Global_2407339[iVar0 /*9*/] < iVar10)
		{
			Global_2407339[iVar0 /*9*/] = { Var1 };
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
		if (Global_2407339[iVar0 /*9*/] == 0)
		{
			Global_2407339[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			if (Global_2407339[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407339[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407339[iVar12 /*9*/] = { Param0 };
	}
}

float func_134(struct<3> Param0)
{
	var uVar0;
	
	return func_135(Param0, &(Global_2404993.f_43), &uVar0);
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404993.f_2253) * (uParam3[iVar0 /*12*/])->f_8)));
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
	if (unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && !func_104(unk_0x0C1D3C552325765B(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_138(Param0, unk_0x0C1D3C552325765B(), 0);
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
		fVar0 = func_120(unk_0x2A488C176D52CCA5(Global_2404993.f_491, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
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
	
	uVar3 = unk_0xD2275328A6FD3845(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xE25FC54E624B820E(uVar3))
	{
		unk_0x5D5210831D45D0A6(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x7466327978A6A24C((Param0.f_2 - Var0.f_2));
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
				if (unk_0x10B1B072E9514664(iVar3) != unk_0x10B1B072E9514664(iParam3) || (unk_0x10B1B072E9514664(iVar3) == -1 && unk_0x10B1B072E9514664(iParam3) == -1))
				{
					if (Global_2415586.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar2 /*3*/], Param0);
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
	
	iVar39 = unk_0xC204507743BB34BC(unk_0xA0081090911D13E5(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xD3FACCDA4D66AEAD(uVar6[iVar2]))
		{
			if (!unk_0x912AD5A10E7633F0(uVar6[iVar2], 0))
			{
				if (func_140(uVar6[iVar2]))
				{
					Var3 = { unk_0xC59DF10B4FC39DF8(uVar6[iVar2], 1) };
					fVar1 = unk_0x999A157665D69393(Param0, Var3, 1);
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
	
	uVar0 = unk_0x0EAE41B4E693BA70(uParam0);
	switch (unk_0xD28ED8D0CD006D1E(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0xD28ED8D0CD006D1E(uVar0, Global_1574240[unk_0x0C1D3C552325765B()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 0)
	{
		iVar1 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0xD28ED8D0CD006D1E(uVar0, Global_1573951[iVar1]))
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
		if ((unk_0x1E3C80E7C4B8041B(Global_2404993.f_43.f_67) || unk_0xFC4346F9DE2AB4AE(Global_2404993.f_43.f_67)) || Global_2404993.f_43.f_67 == joaat("rhino"))
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
	if (Global_2404993.f_43.f_65 && !Global_2404993.f_43.f_296)
	{
		if (!func_129(unk_0x0C1D3C552325765B()))
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
		if ((unk_0x1E3C80E7C4B8041B(Global_2404993.f_43.f_67) || unk_0xFC4346F9DE2AB4AE(Global_2404993.f_43.f_67)) || Global_2404993.f_43.f_67 == joaat("rhino"))
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
	if ((((fParam7 > 0f && unk_0x916C9DBA707424D8(Param0, fParam7)) || (fVar0 > 0f && unk_0xD5723D169730DAAD(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x82C3AA7E0F0CF1A1(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x82C3AA7E0F0CF1A1(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_145(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404993.f_43.f_55)
	{
		if (unk_0x72C176FA688CE74D(Global_2404993.f_43.f_56))
		{
			if (!unk_0x9EAA10271825C2DB(Param0))
			{
				uVar0 = unk_0xDACF94AE8FA53F42(Param0);
				if (unk_0x72C176FA688CE74D(uVar0))
				{
					iVar1 = unk_0x7933C96E6F1F08FD(uVar0);
					if (!iVar1 == Global_2404993.f_43.f_57)
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

int func_146(struct<3> Param0)
{
	switch (Global_2404993.f_2038)
	{
		case 0:
			return func_184(Param0, Global_2404993.f_2017, Global_2404993.f_2020, 0, 0);
			break;
		
		case 1:
			return func_107(Param0, Global_2404993.f_2031, Global_2404993.f_2034, 0, 0);
			break;
		
		case 2:
			return unk_0xDFC5B758BDC9546F(Param0, Global_2404993.f_2031, Global_2404993.f_2034, Global_2404993.f_2037, 0, 1);
			break;
	}
	return 0;
}

int func_147(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0xDFC5B758BDC9546F(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_148(var uParam0, var uParam1, bool bParam2, float fParam3)
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

int func_149(int iParam0)
{
	switch (Global_1312443)
	{
		case 0:
			if (!func_28(iParam0))
			{
				if (Global_1588660[iParam0 /*532*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_150(int iParam0)
{
	if (func_85(iParam0, 1))
	{
		if (Global_1588660[iParam0 /*532*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_151(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404993.f_2153[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_152(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_92(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0xF25F352E34274C58(0.01f, 360f);
			func_89(&Var1, Global_2404993.f_556, Global_2404993.f_559, 1036831949, 0, fVar4);
			if (func_96(Var1, &uVar0) || func_92(Var1))
			{
				Var1 = { *uParam0 };
				func_89(&Var1, Global_2404993.f_556, Global_2404993.f_559, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_153(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_6(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x999A157665D69393(func_8(unk_0x0C1D3C552325765B()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE514F14357BDEECF(Param0, fParam3))
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
			if (!func_181(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if ((func_122(iVar1) || !bParam10) && !Global_2421327[iVar1 /*353*/].f_258)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x10B1B072E9514664(iVar1) != unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))) || unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x999A157665D69393(func_8(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x10B1B072E9514664(iVar1) != iParam8 || unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x999A157665D69393(func_8(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
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

int func_154(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_156(Param0, fParam3, iParam4, iParam5, 0) || func_155(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_155(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2415586.f_556[iVar0] == 0)
			{
				if (func_81(Param0, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_523[iVar0], Global_2415586.f_556[iVar0], 1036831949))
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

int func_156(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
					if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
				{
					if (Global_2415586.f_260[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2415586.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar0 /*3*/], Param0) < fParam3)
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

int func_157(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404993.f_3 = 0;
	if (!func_154(Param0, 0.5f, unk_0x0C1D3C552325765B(), 0, 0))
	{
		Global_2404993.f_3++;
		if (bParam5)
		{
			if (func_205(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
				if (!func_161(Param0, fParam12))
				{
					Global_2404993.f_3++;
					if (!func_80(Param0, 1056964608))
					{
						Global_2404993.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_205(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
				if (!func_161(Param0, fParam12))
				{
					Global_2404993.f_3++;
					if (!func_158(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404993.f_3++;
						if (!func_80(Param0, 1056964608))
						{
							Global_2404993.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
			}
		}
		else if (func_205(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
			if (!func_161(Param0, fParam12))
			{
				Global_2404993.f_3++;
				if (!func_158(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404993.f_3++;
					if (!func_80(Param0, 1056964608))
					{
						Global_2404993.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
		}
	}
	return 0;
}

int func_158(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x0C1D3C552325765B() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_122(iVar1)) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (!func_160(unk_0x0C1D3C552325765B(), iVar1, -2, 0))
				{
					if (func_159(func_8(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_159(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0xDFC5B758BDC9546F(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_160(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == iParam2;
	}
	return unk_0x10B1B072E9514664(iParam0) == iParam2;
}

int func_161(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_122(iVar1)) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
		{
			if ((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && unk_0x10B1B072E9514664(iVar1) == -1) && !func_104(unk_0x0C1D3C552325765B(), 1))
			{
				return 0;
			}
			else if ((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && !unk_0x0C1D3C552325765B() == iVar1) || !func_160(unk_0x0C1D3C552325765B(), iVar1, -2, 0))
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

int func_162(int iParam0)
{
	if ((Global_2404993.f_474 == 9 || Global_2404993.f_474 == 9) || (Global_2404993.f_474 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_163(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam8 == 0)
		{
			if (func_6(iVar1, bParam4, bParam5))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_122(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && iParam9) && bParam6) && func_124(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (unk_0x999A157665D69393(func_8(iVar1), Param0, 1) < fParam3)
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

int func_164(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_181(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1)) && iVar1 != unk_0x0C1D3C552325765B())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x10B1B072E9514664(iVar1) == iVar3)
					{
						if (unk_0x999A157665D69393(func_8(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
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

int func_165(int iParam0)
{
	if ((func_104(iParam0, 1) || func_166(iParam0)) || func_33(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/] != -1;
	}
	return 0;
}

void func_167(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0x08BA6DD398CA197C(Global_2359719[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359719[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359719[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359719[iVar1 /*26*/].f_6.f_2;
					func_169(&Var2, uParam3, iVar0);
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
				func_168(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_168(var uParam0, var uParam1, int iParam2)
{
	Global_2411129 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_168(&Global_2411129, uParam1, iParam2 + 1);
	}
}

void func_169(var uParam0, var uParam1, int iParam2)
{
	Global_2411125 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_169(&Global_2411125, uParam1, iParam2 + 1);
	}
}

void func_170(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404993.f_1813 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1813)
		{
			if (func_171(Global_2404993.f_1814[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404993.f_1814[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404993.f_1814[iVar0 /*4*/] };
					fVar4 = unk_0xE92969F4247292EB(Var1.f_0, Var1.f_1);
				}
				func_119(Global_2404993.f_1814[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404993.f_2042++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2404993.f_2345)
	{
		func_113(&(Global_2404993.f_2042.f_6[0 /*9*/]), &(Global_2404993.f_2042.f_6[1 /*9*/]), &(Global_2404993.f_2042.f_6[2 /*9*/]));
	}
}

int func_171(struct<3> Param0, var uParam3)
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

void func_172(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
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

void func_173()
{
	func_178();
	func_177();
	func_176();
	func_175();
	func_174();
}

void func_174()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407339[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_175()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404993.f_2042.f_67[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_176()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404993.f_2042.f_34[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_177()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 3)
	{
		Global_2404993.f_2042.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_178()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404993.f_2042 = { Var0 };
}

var func_179()
{
	return Global_1310987.f_4;
}

void func_180(var uParam0, var uParam1)
{
	func_206();
	func_204(uParam0, uParam1);
}

bool func_181(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_182(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_182(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_183();
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

int func_183()
{
	return Global_1312731;
}

bool func_184(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_185(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404993.f_1683 > 0 && func_203(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_186(uParam0, uParam1, uParam2);
	}
}

void func_186(var uParam0, var uParam1, var uParam2)
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
		if (func_202(uParam0, 1))
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
	Global_2411139.f_162 = 0;
	Global_2411139.f_163 = 0;
	Global_2411139.f_164 = -99;
	Global_2411139.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411139[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411139.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xD2275328A6FD3845(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xE25FC54E624B820E(iVar8))
		{
			unk_0x5D5210831D45D0A6(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411139.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411139.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x722521C5827377D3(iVar8)) || unk_0xABEAA77F123D36FA(iVar8))
			{
				unk_0xC54D87D649D77D84(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_152(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_201(Var1))
									{
										Var1 = { func_199(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (!func_80(Var1, 5f))
										{
											if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
											{
												if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
												{
													if (func_198(Var1, uParam2))
													{
														if ((uParam2->f_48 && !func_202(&Var1, 0)) || uParam2->f_48 == 0)
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
																	if ((uParam2->f_12 && !func_193(Var1, fVar4, uParam2->f_34, unk_0x0C1D3C552325765B(), 0, uParam2->f_56)) || !uParam2->f_12)
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
																					if (func_205(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_205(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_192(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																							iVar22 = func_191(Var1, uParam2->f_54, &fVar23);
																						}
																						if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																						{
																							if (uParam2->f_52)
																							{
																								if (iVar22 < uParam2->f_53)
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2411139.f_162)
																									{
																										Global_2411139[iVar16 /*3*/] = { 0f, 0f, 0f };
																										Global_2411139.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2411139.f_162 = 0;
																									uParam2->f_53 = iVar22;
																								}
																							}
																							if (uParam2->f_30)
																							{
																								if (Global_2411139.f_162 == 0)
																								{
																									Global_2411139[0 /*3*/] = { Var1 };
																									Global_2411139.f_121[0] = fVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2411139.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411139[iVar16 /*3*/], uParam2->f_35))
																											{
																												func_190(Var1, fVar4, iVar16);
																												iVar16 = Global_2411139.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2411139.f_162++;
																								if (Global_2411139.f_162 >= 5)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2411139.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2411139[Global_2411139.f_162 /*3*/] = { Var1 };
																								Global_2411139.f_121[Global_2411139.f_162] = fVar4;
																								Global_2411139.f_162++;
																								if (func_198(Var1, uParam2))
																								{
																									Global_2411139.f_163++;
																								}
																								if (Global_2411139.f_162 >= 10)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2411139.f_162 == 40)
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
				if (Global_2411139.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411139[0 /*3*/] };
						*uParam1 = Global_2411139.f_121[0];
						return;
					}
					else
					{
						if (Global_2411139.f_163 > 0 && !Global_2411139.f_163 == Global_2411139.f_162)
						{
							func_188(0, uParam2);
						}
						iVar24 = unk_0xB5BF1B58C833F7A9(0, Global_2411139.f_162);
						Var25 = { Global_2411139[0 /*3*/] };
						uVar28 = Global_2411139.f_121[0];
						Global_2411139[0 /*3*/] = { Global_2411139[iVar24 /*3*/] };
						Global_2411139.f_121[0] = Global_2411139.f_121[iVar24];
						Global_2411139[iVar24 /*3*/] = { Var25 };
						Global_2411139.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2411139[0 /*3*/] };
						*uParam1 = Global_2411139.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_186(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0xB5BF1B58C833F7A9((1 + iVar15), (40 + iVar15));
						unk_0xBE5432549D1D244B(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_199(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
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
						if (func_88(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_202(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_186(uParam0, uParam1, uParam2);
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
				func_186(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_187(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411139.f_164 = iVar8;
	}
}

void func_187(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_154(*(uParam0[iVar2 /*4*/]), 5f, unk_0x0C1D3C552325765B(), 0, 0))
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

void func_188(int iParam0, var uParam1)
{
	if (!func_198(Global_2411139[iParam0 /*3*/], uParam1))
	{
		Global_2411139.f_162 = (Global_2411139.f_162 - 1);
		func_189(iParam0);
		if (Global_2411139.f_162 > Global_2411139.f_163)
		{
			func_188(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_188(iParam0 + 1, uParam1);
	}
}

void func_189(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411139[iParam0 /*3*/] = { Global_2411139[iParam0 + 1 /*3*/] };
			Global_2411139.f_121[iParam0] = Global_2411139.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_190(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411139[iParam4 /*3*/] };
	uVar3 = Global_2411139.f_121[iParam4];
	Global_2411139[iParam4 /*3*/] = { Param0 };
	Global_2411139.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411139.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_190(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_191(struct<3> Param0, float fParam3, float fParam4)
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

int func_192(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam9 == 0)
		{
			if (func_6(iVar1, bParam5, bParam6))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam8 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_122(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && iParam10) && bParam7) && func_124(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
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

int func_193(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_197(Param0, fParam3, iParam4, iParam5, iParam6) || func_194(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_194(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_196(Param0, iParam4, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_556[iVar0]))
			{
				if (func_195(Param0, fParam3, iParam4, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_523[iVar0], Global_2415586.f_556[iVar0], 0))
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

int func_195(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
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
	fVar20 = unk_0x7466327978A6A24C((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0x7466327978A6A24C((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0x7466327978A6A24C((Var17.f_2 - Var14.f_2));
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
		if (func_195(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_196(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
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

int func_197(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
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
				if (Global_2415586.f_260[iVar0])
				{
					if (func_81(Global_2415586.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_81(func_8(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2415586.f_260[iVar0])
			{
				if (func_81(Global_2415586.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
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

int func_198(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_184(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
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
				if (unk_0xDFC5B758BDC9546F(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_199(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_200(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xC54D87D649D77D84(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x6FCAA52DD2D987DE(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
		if (!func_200(Param0, *fParam3, Param6))
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
	Var0 = { unk_0x8461D93FE2207D3A(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xA19BA829D77A105A(Param0, *fParam3, &Var24))
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

int func_200(struct<3> Param0, float fParam3, struct<3> Param4)
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

int func_201(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_79(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2410853[iVar1])
	{
		if (func_78(Param0, &(Global_2410150[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410853[8])
	{
		if (func_78(Param0, &(Global_2410150[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_202(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404993.f_26.f_16)
	{
		switch (Global_2404993.f_26.f_15)
		{
			case 0:
				if (func_184(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_107(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xDFC5B758BDC9546F(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, Global_2404993.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_95(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, Global_2404993.f_26.f_14, Global_2404993.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_203(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2404993.f_1683 > 0)
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
			if (func_202(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2411139.f_162 = 0;
		Global_2411139.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2411139[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2411139.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1683)
		{
			Var1 = { Global_2404993.f_1684[iVar0 /*4*/] };
			fVar4 = Global_2404993.f_1684[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_193(Var1, fVar4, uParam2->f_34, unk_0x0C1D3C552325765B(), 0, uParam2->f_56)) || !uParam2->f_12)
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
									if (func_205(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_205(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_192(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
											iVar11 = func_191(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2411139.f_162)
													{
														Global_2411139[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2411139.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2411139.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2411139.f_162 == 0)
												{
													Global_2411139[0 /*3*/] = { Var1 };
													Global_2411139.f_121[0] = fVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2411139.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411139[iVar5 /*3*/], uParam2->f_35))
															{
																func_190(Var1, fVar4, iVar5);
																iVar5 = Global_2411139.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2411139.f_162++;
												if (Global_2411139.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1683;
													}
													else if (Global_2411139.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1683;
													}
												}
											}
											else
											{
												Global_2411139[Global_2411139.f_162 /*3*/] = { Var1 };
												Global_2411139.f_121[Global_2411139.f_162] = fVar4;
												Global_2411139.f_162++;
												if (Global_2411139.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1683;
													}
													else if (Global_2411139.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1683;
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
			iVar0++;
		}
		if (Global_2411139.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411139[0 /*3*/] };
				*uParam1 = Global_2411139.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411139.f_163 > 0 && !Global_2411139.f_163 == Global_2411139.f_162)
				{
					func_188(0, uParam2);
				}
				iVar13 = unk_0xB5BF1B58C833F7A9(0, Global_2411139.f_162);
				Var14 = { Global_2411139[0 /*3*/] };
				uVar17 = Global_2411139.f_121[0];
				Global_2411139[0 /*3*/] = { Global_2411139[iVar13 /*3*/] };
				Global_2411139.f_121[0] = Global_2411139.f_121[iVar13];
				Global_2411139[iVar13 /*3*/] = { Var14 };
				Global_2411139.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2411139[0 /*3*/] };
				*uParam1 = Global_2411139.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_203(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_186(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_204(var uParam0, var uParam1)
{
	unk_0x16F6A7785C574F64(uParam0, uParam1, 0.1f);
	Global_2404993.f_2025 = unk_0xEAE20F1125B83888();
	Global_2404993.f_2023 = 1;
	Global_2404993.f_2026 = unk_0x4B50AAB32FBE0483();
}

int func_205(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x916C9DBA707424D8(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xD5723D169730DAAD(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xD5723D169730DAAD(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x82C3AA7E0F0CF1A1(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam13)
	{
		if (unk_0xB4FB8C52530E7D65(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (fParam14 > 0f)
	{
		if (func_163(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_153(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404993.f_2++;
	return 1;
}

void func_206()
{
	if (Global_2404993.f_2023)
	{
		if (unk_0xEAE20F1125B83888() == Global_2404993.f_2025)
		{
			unk_0xEB410F2073890250();
		}
		else
		{
			unk_0xEB410F2073890250();
		}
		Global_2404993.f_2023 = 0;
	}
}

int func_207(bool bParam0)
{
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_208(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_91.f_49;
			break;
	}
	return 0;
}

int func_210()
{
	if (iLocal_312 == 0)
	{
		if (unk_0x08BA6DD398CA197C(Local_91.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_211()
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
	
	if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 0))
	{
		unk_0x88B0F0DC270164B7(&(Local_91.f_2), 0);
		if (iLocal_312 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_314, 1, 1))
		{
			if (unk_0x12FCC59A8F519B65(false) - unk_0x6A8543D72105975A(0)) >= func_421(iLocal_312)
			{
				if (unk_0x0C863D3ED919983C(func_421(iLocal_312)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = unk_0x21F191D9AFF98B5E(iLocal_314);
					iVar3 = unk_0xC204507743BB34BC(iVar2, &uLocal_497, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_421(iLocal_312))
							{
								if (iVar5 == -1)
								{
									if (((!unk_0x0E091C9F3918F674(Local_91.f_10[iVar1 /*7*/]) && !unk_0x08BA6DD398CA197C(Local_91.f_10[iVar1 /*7*/].f_2, 1)) && !unk_0x08BA6DD398CA197C(Local_91.f_10[iVar1 /*7*/].f_2, 6)) && !unk_0x08BA6DD398CA197C(Local_91.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (unk_0xD3FACCDA4D66AEAD(uLocal_497[iVar0]))
								{
									if (!unk_0x912AD5A10E7633F0(uLocal_497[iVar0], 0))
									{
										if (!unk_0x54F0AEFB11EA090A(uLocal_497[iVar0]))
										{
											if (func_213(unk_0x705BC1BB91F530B5(uLocal_497[iVar0])))
											{
												if (!unk_0x18C670321BC98FDA(uLocal_497[iVar0]))
												{
													if (!unk_0x39FEE545B315414E(uLocal_497[iVar0], 0))
													{
														if (func_5(unk_0xC59DF10B4FC39DF8(uLocal_497[iVar0], 1), unk_0xC59DF10B4FC39DF8(iVar2, 1), 625f))
														{
															unk_0x7B17650F15A8876D(uLocal_497[iVar0], 1, 0);
															Local_91.f_10[iVar5 /*7*/].f_6 = iVar0;
															unk_0x88B0F0DC270164B7(&(Local_91.f_10[iVar5 /*7*/].f_2), 8);
															if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 12))
															{
																Local_91.f_8 = uLocal_319;
																unk_0x88B0F0DC270164B7(&(Local_91.f_1), 12);
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
	else if (unk_0x08BA6DD398CA197C(Local_91.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_421(iLocal_312))
		{
			if (unk_0x08BA6DD398CA197C(Local_91.f_10[iVar6 /*7*/].f_2, 1) || unk_0x08BA6DD398CA197C(Local_91.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (unk_0x08BA6DD398CA197C(Local_91.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!unk_0x912AD5A10E7633F0(uLocal_497[Local_91.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (unk_0x18C670321BC98FDA(uLocal_497[Local_91.f_10[iVar6 /*7*/].f_6]))
					{
						if (!unk_0x775F8FFC8E29F525(uLocal_497[Local_91.f_10[iVar6 /*7*/].f_6]))
						{
							unk_0x33E20212DBE504C2(uLocal_497[Local_91.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							unk_0xF2B8D227BF166CF8(uLocal_497[Local_91.f_10[iVar6 /*7*/].f_6], 1);
							Local_91.f_10[iVar6 /*7*/] = unk_0x9ED2AEF3CEBC2436(uLocal_497[Local_91.f_10[iVar6 /*7*/].f_6]);
							unk_0x748B0DC6DACDF341(Local_91.f_10[iVar6 /*7*/], 1);
							unk_0x88B0F0DC270164B7(&(Local_91.f_10[iVar6 /*7*/].f_2), 0);
							Local_91.f_10[iVar6 /*7*/].f_1 = iLocal_312;
							Local_91.f_10[iVar6 /*7*/].f_4 = func_64(iLocal_312);
							func_62(iVar6);
							unk_0x09C86C0C5CA26B1E(&(Local_91.f_10[iVar6 /*7*/].f_2), 8);
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
		if (!bVar8 || unk_0xDDEA1623E4BFD71B(uLocal_319, Local_91.f_8) > 5000)
		{
			if (iVar7 >= func_421(iLocal_312))
			{
				unk_0x88B0F0DC270164B7(&(Local_91.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_497[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_421(iLocal_312))
			{
				if (unk_0x08BA6DD398CA197C(Local_91.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_212(&(Local_91.f_10[iVar6 /*7*/]));
					unk_0x09C86C0C5CA26B1E(&(Local_91.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			unk_0x09C86C0C5CA26B1E(&(Local_91.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_212(var uParam0)
{
	var uVar0;
	
	if (unk_0x3CF373660FCFAFCE(*uParam0))
	{
		uVar0 = unk_0x63CE7A3848B84093(*uParam0);
		unk_0x811BE251B0B13760(&uVar0);
	}
}

int func_213(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_214()
{
	if (unk_0x08BA6DD398CA197C(Local_91.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_312 == 0)
	{
		Local_91.f_49 = func_215(Local_91.f_36, 1);
		unk_0x88B0F0DC270164B7(&(Local_91.f_1), 6);
		return 1;
	}
	else
	{
		unk_0x88B0F0DC270164B7(&(Local_91.f_1), 6);
		return 1;
	}
	return 0;
}

int func_215(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	if (func_216(Param0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_216(Param0, 1100f, -196f, 300f, 350f, 0) || func_216(Param0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_216(Param0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_216(Param0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_216(Param0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_216(Param0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_216(Param0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam3 == 1)
	{
		iVar0 = unk_0xB5BF1B58C833F7A9(0, 100);
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
			iVar0 = unk_0xB5BF1B58C833F7A9(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_216(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	return unk_0x999A157665D69393(Param0, Param3, iParam7) <= fParam6;
}

void func_217(int iParam0)
{
	if (unk_0xEB361B4BD195A4D3(iParam0))
	{
	}
	Local_91.f_36 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	if (func_218(iParam0, 0))
	{
		unk_0x88B0F0DC270164B7(&(Local_91.f_1), 17);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Local_91.f_1), 17);
	}
}

int func_218(int iParam0, int iParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (!unk_0x912AD5A10E7633F0(iParam0, 0) || iParam1)
		{
			if (unk_0xB46E03E529421E99(iParam0))
			{
				if (unk_0x2C40672AED29B6F4(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_219()
{
	bool bVar0;
	
	if (unk_0xD9E8CA806A80203D())
	{
		if (unk_0x08BA6DD398CA197C(Local_91.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_312)
			{
				case 0:
					if (unk_0x08BA6DD398CA197C(Local_91.f_2, 11))
					{
						if (func_6(iLocal_314, 1, 1))
						{
							if (unk_0xB7A628320EFF8E47(func_8(iLocal_314), Local_91.f_39) > 625f)
							{
								unk_0x09C86C0C5CA26B1E(&(Local_91.f_2), 11);
								unk_0x09C86C0C5CA26B1E(&iLocal_306, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_314, 1, 1))
						{
							bVar0 = true;
							if (func_222())
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
						if (unk_0x08BA6DD398CA197C(Local_91.f_1, 5))
						{
							if (func_221())
							{
								func_58();
								unk_0x88B0F0DC270164B7(&(Local_91.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_314, 1, 1))
					{
						bVar0 = true;
						if (func_220())
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
					if (unk_0x08BA6DD398CA197C(Local_91.f_1, 5))
					{
						if (unk_0xDDEA1623E4BFD71B(uLocal_319, Local_91.f_5) > 30000)
						{
							func_58();
							unk_0x88B0F0DC270164B7(&(Local_91.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_220()
{
	int iVar0;
	
	iVar0 = unk_0x21F191D9AFF98B5E(iLocal_314);
	if (((((unk_0x630BD2AFB0686BBA(iVar0) || unk_0xB46E03E529421E99(iVar0)) || func_29(iLocal_314, 1, 0)) || func_36(iLocal_314, 0)) || func_36(iLocal_314, 7)) || func_28(iLocal_314))
	{
		return 1;
	}
	if (func_104(iLocal_314, 1))
	{
		if (iLocal_314 > -1)
		{
			if (Global_1588660[iLocal_314 /*532*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_221()
{
	if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 18))
	{
		if (unk_0xDDEA1623E4BFD71B(uLocal_319, Local_91.f_5) > 5000)
		{
			unk_0x88B0F0DC270164B7(&(Local_91.f_1), 18);
			return 1;
		}
	}
	else if (unk_0xDDEA1623E4BFD71B(uLocal_319, Local_91.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_222()
{
	int iVar0;
	
	iVar0 = unk_0x21F191D9AFF98B5E(iLocal_314);
	if (((((((((unk_0x39053CCA2C4B5DA1(iVar0) > 10f || unk_0x630BD2AFB0686BBA(iVar0)) || unk_0xB46E03E529421E99(iVar0)) || func_29(iLocal_314, 1, 0)) || func_56(iLocal_314)) || func_36(iLocal_314, 0)) || func_36(iLocal_314, 7)) || func_28(iLocal_314)) || Global_2421327[iLocal_314 /*353*/].f_237) || func_55(unk_0x21F191D9AFF98B5E(iLocal_314), joaat("titan")))
	{
		return 1;
	}
	if (func_104(iLocal_314, 1))
	{
		if (iLocal_314 > -1)
		{
			if (Global_1588660[iLocal_314 /*532*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_314 != -1)
	{
		if (unk_0x08BA6DD398CA197C(Local_145[iLocal_314 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_223()
{
	if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 14))
	{
		Local_91.f_9 = uLocal_319;
		unk_0x88B0F0DC270164B7(&(Local_91.f_1), 14);
	}
}

void func_224()
{
	if (Local_91.f_44 != Local_145[iLocal_313 /*5*/].f_4)
	{
		Local_91.f_44 = Local_145[iLocal_313 /*5*/].f_4;
	}
}

void func_225()
{
	if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 10))
	{
		Local_91.f_45 = func_421(iLocal_312);
		Local_91.f_46 = 0;
		Local_91.f_47 = 0;
		unk_0x88B0F0DC270164B7(&(Local_91.f_1), 10);
	}
}

void func_226()
{
	func_227();
	if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 8))
	{
		if (unk_0x08BA6DD398CA197C(Local_91.f_2, 7))
		{
			if (unk_0xDDEA1623E4BFD71B(uLocal_319, Local_91.f_7) > 300000)
			{
				unk_0x88B0F0DC270164B7(&(Local_91.f_2), 8);
			}
		}
	}
}

void func_227()
{
	if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 7))
	{
		Local_91.f_7 = uLocal_319;
		unk_0x88B0F0DC270164B7(&(Local_91.f_2), 7);
	}
}

void func_228()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x88B0F0DC270164B7(&iLocal_306, 7);
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 1))
	{
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 2))
	{
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 3))
	{
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 9))
	{
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 4))
	{
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 5))
	{
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 11))
	{
		if (unk_0x0C1D3C552325765B() == iLocal_313)
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_306, 7);
			if (Local_91.f_50)
			{
				unk_0x88B0F0DC270164B7(&iLocal_306, 7);
			}
			else if (func_323("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				unk_0x88B0F0DC270164B7(&iLocal_306, 7);
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 6))
	{
		if (unk_0x0C1D3C552325765B() == iLocal_313)
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_306, 7);
			if (Local_91.f_50)
			{
				unk_0x88B0F0DC270164B7(&iLocal_306, 7);
			}
			else if (func_323("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				unk_0x88B0F0DC270164B7(&iLocal_306, 7);
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 7))
	{
		if (unk_0x0C1D3C552325765B() == iLocal_313)
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_306, 7);
			if (func_298())
			{
				if (!Local_91.f_50)
				{
					iLocal_514 = func_295(12);
					func_293(iLocal_514, 1, 0, 0f);
					func_281(iLocal_514, 4, 1, 1);
					unk_0x88B0F0DC270164B7(&iLocal_306, 7);
				}
				else
				{
					unk_0x88B0F0DC270164B7(&iLocal_306, 7);
				}
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 0))
	{
		if (unk_0x0C1D3C552325765B() == iLocal_313)
		{
			if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 1))
			{
				unk_0x09C86C0C5CA26B1E(&iLocal_306, 7);
				if (func_323("MPCT_mugfail", "LAMAR", 19))
				{
					unk_0x88B0F0DC270164B7(&iLocal_306, 7);
				}
			}
		}
		else if (unk_0x0C1D3C552325765B() == iLocal_314)
		{
			if (unk_0x08BA6DD398CA197C(Local_91.f_2, 1))
			{
				if (unk_0x08BA6DD398CA197C(Local_91.f_2, 12))
				{
					iVar0 = unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_5458) * Global_262145.f_4291));
					func_244(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_230(47, 1);
				}
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 8))
	{
		if (unk_0x0C1D3C552325765B() == iLocal_313)
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_306, 7);
			if (func_298())
			{
				if (iLocal_312 == 0)
				{
					iLocal_514 = (func_295(2) * func_421(iLocal_312));
					iVar1 = 3;
				}
				else
				{
					iLocal_514 = func_295(12);
					iVar1 = 4;
				}
				if (!Local_91.f_50)
				{
					func_293(iLocal_514, 1, 0, 0f);
					func_281(iLocal_514, iVar1, 1, 0);
					unk_0x88B0F0DC270164B7(&iLocal_306, 7);
				}
				else
				{
					unk_0x88B0F0DC270164B7(&iLocal_306, 7);
				}
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_91.f_3, 10))
	{
		if (unk_0x0C1D3C552325765B() == iLocal_313)
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_306, 7);
			if (func_298())
			{
				if (iLocal_312 == 0)
				{
					iLocal_514 = (func_295(2) * func_421(iLocal_312));
					iVar2 = 3;
				}
				else
				{
					iLocal_514 = func_295(12);
					iVar2 = 4;
				}
				if (!Local_91.f_50)
				{
					func_293(iLocal_514, 1, 0, 0f);
					func_281(iLocal_514, iVar2, 1, 0);
					unk_0x88B0F0DC270164B7(&iLocal_306, 7);
				}
				else
				{
					unk_0x88B0F0DC270164B7(&iLocal_306, 7);
				}
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(iLocal_306, 7))
	{
		func_229();
	}
}

void func_229()
{
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x1A9CF4D5D4E2F266() /*532*/].f_138), iLocal_312);
	Global_1588660[unk_0x1A9CF4D5D4E2F266() /*532*/].f_139 = -1;
	if (iLocal_312 == 1)
	{
		if (unk_0xC2328E478826F8DD(uLocal_496))
		{
			unk_0xEDE3BC5A74AB2C55(uLocal_496);
		}
	}
	func_450();
	func_482();
}

int func_230(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_231(iParam0, iParam1);
}

int func_231(int iParam0, int iParam1)
{
	if (func_243(14) && !func_242(iParam0))
	{
		return 0;
	}
	if (unk_0x3C91BC99A9AE5C7D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25431 != 0 && !Global_69617)
	{
		return 0;
	}
	if (func_241(&Global_2578151))
	{
		if (func_239(&Global_2578151, iParam0))
		{
			return 0;
		}
		if (func_232(&Global_2578151, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x2CCFD9D11EFFE8B6(iParam0))
		{
			return 0;
		}
		if (unk_0x3C91BC99A9AE5C7D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_232(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x3C91BC99A9AE5C7D(iParam1))
	{
		return 0;
	}
	if (func_243(14) && !func_242(iParam1))
	{
		return 0;
	}
	if (func_239(uParam0, iParam1))
	{
		return 0;
	}
	if (func_238(uParam0) < 0f)
	{
		func_237(uParam0, 0);
	}
	func_235(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_233(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_233(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x3C91BC99A9AE5C7D(iParam1))
	{
		return 0;
	}
	if (func_243(14) && !func_242(iParam1))
	{
		return 0;
	}
	if (func_239(uParam0, iParam1))
	{
		return 0;
	}
	if (func_238(uParam0) < 0f)
	{
		func_237(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_234(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_234(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_235(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_236(uParam0, iVar0);
		iVar0++;
	}
	func_237(uParam0, (Global_2578150 - 0.5f));
}

void func_236(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_237(var uParam0, float fParam1)
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

float func_238(var uParam0)
{
	return uParam0->f_72;
}

bool func_239(var uParam0, int iParam1)
{
	return func_240(uParam0, iParam1) != -1;
}

int func_240(var uParam0, int iParam1)
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

bool func_241(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_242(int iParam0)
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

bool func_243(int iParam0)
{
	return Global_35775 == iParam0;
}

var func_244(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_245(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_245(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_246(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_246(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_280(unk_0x0C1D3C552325765B()) || func_279(unk_0x0C1D3C552325765B()))
	{
		if (Global_262145.f_8088 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8088;
		}
	}
	else if (Global_262145.f_5451 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5451;
	}
	if (func_278(uParam2))
	{
	}
	if (func_277())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_275(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_274(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_272(0, &iVar1);
					break;
				
				case 3:
					func_272(1, &iVar1);
					break;
				
				case 1:
					func_270(&iVar1);
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
			func_267(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_256((func_266(unk_0x0C1D3C552325765B()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x726276BAB6518437(iVar1, iParam8, iParam9);
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_2 != -1)
				{
					func_267(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_251(iVar1);
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
				func_247((func_249(unk_0x0C1D3C552325765B()) + iVar1));
			}
			else
			{
				func_247((func_249(unk_0x0C1D3C552325765B()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_247(int iParam0)
{
	if (func_277())
	{
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_5 = iParam0;
		func_248(joaat("mpply_globalxp"), iParam0);
	}
}

void func_248(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
}

int func_249(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return func_250(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_5;
			}
		}
		else
		{
			return func_250(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_250(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_251(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_126(unk_0x0C1D3C552325765B()) };
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(&Var0))
		{
			iVar13 = func_254(func_255(&Var0));
			if (iVar13 == 0)
			{
				func_253(&Global_1352222, iParam0);
				func_252(joaat("mpply_crew_local_xp_0"), Global_1352222);
			}
			else if (iVar13 == 1)
			{
				func_253(&Global_1352223, iParam0);
				func_252(joaat("mpply_crew_local_xp_1"), Global_1352223);
			}
			else if (iVar13 == 2)
			{
				func_253(&Global_1352224, iParam0);
				func_252(joaat("mpply_crew_local_xp_2"), Global_1352224);
			}
			else if (iVar13 == 3)
			{
				func_253(&Global_1352225, iParam0);
				func_252(joaat("mpply_crew_local_xp_3"), Global_1352225);
			}
			else if (iVar13 == 4)
			{
				func_253(&Global_1352226, iParam0);
				func_252(joaat("mpply_crew_local_xp_4"), Global_1352226);
			}
		}
	}
}

void func_252(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1352217 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1352219 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1352219 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1352220 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1352221 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1352222 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1352223 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1352224 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1352225 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1352226 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1352227 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1352228 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1352229 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1352230 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1352231 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1352232 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1352233 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_253(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_254(int iParam0)
{
	if (iParam0 == Global_1352217)
	{
		return 0;
	}
	else if (iParam0 == Global_1352218)
	{
		return 1;
	}
	else if (iParam0 == Global_1352219)
	{
		return 2;
	}
	else if (iParam0 == Global_1352220)
	{
		return 3;
	}
	else if (iParam0 == Global_1352221)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_255(var uParam0)
{
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(uParam0))
		{
			return Global_2451705;
		}
	}
	return Global_2451705;
}

void func_256(int iParam0, int iParam1, int iParam2)
{
	if (func_277())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8058 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1352337[func_265(-1)])
				{
					unk_0x726276BAB6518437(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1352337[func_265(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x726276BAB6518437(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x726276BAB6518437(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_264(unk_0x0C1D3C552325765B()))
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_1 = iParam0;
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_6 = func_262(iParam0, 1);
		}
		func_261(632, iParam0, -1, 1);
		func_260(633, func_262(iParam0, 1), -1, 1, 0);
		Global_1352337[func_265(-1)] = iParam0;
		func_257(7, 0);
	}
}

void func_257(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_259(iParam0, iParam1))
	{
		iVar0 = func_258();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_258()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2451682[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_259(int iParam0, var uParam1)
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

void func_260(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_265(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

void func_261(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_265(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_265(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_265(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_265(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_265(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_265(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_265(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_265(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_265(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_265(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_265(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_265(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_265(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_265(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_265(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_265(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_265(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_265(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_265(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_265(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_265(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_265(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_265(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_265(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_265(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_265(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_265(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_265(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_265(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_265(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_265(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_265(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_265(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_262(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_263(iParam0, 0);
}

int func_263(int iParam0, int iParam1)
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
		if (Global_278713[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_278713[iVar3] < iParam0)
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

int func_264(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
	}
	return 1;
}

int func_265(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_183();
		if (iVar1 > -1)
		{
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

int func_266(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_265(-1)];
			}
			else if (func_264(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_265(-1)];
	}
	return 0;
}

void func_267(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_269(iParam0, func_265(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_268(iParam0))
	{
		func_260(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_261(iParam0, iVar0, iParam2, 1);
	}
}

int func_268(int iParam0)
{
	if (Global_1352216)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
				return 1;
				break;
			}
	}
	return 0;
}

int func_269(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_265(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_270(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		iVar4 = unk_0x81C7A2950EF11C8A(iVar0);
		if (unk_0x1489FFC2CBA39486(iVar4))
		{
			iVar5 = unk_0xF3B8A064D228878B(iVar4);
			if (unk_0x10B1B072E9514664(iVar5) != -1)
			{
				if (unk_0x10B1B072E9514664(iVar5) == iVar1 || func_128(unk_0x10B1B072E9514664(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0C1D3C552325765B())
					{
						if (func_127(unk_0x0C1D3C552325765B(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_271(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_271(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_271(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_272(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xE5697AB254094B0D())
		{
			iVar3 = iVar0;
			if (unk_0x1489FFC2CBA39486(iVar3))
			{
				iVar4 = unk_0xF3B8A064D228878B(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0C1D3C552325765B())
					{
						iVar1++;
						if (func_127(unk_0x0C1D3C552325765B(), iVar4))
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
				if (iVar4 != unk_0x0C1D3C552325765B())
				{
					if (func_273(unk_0x0C1D3C552325765B(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_127(unk_0x0C1D3C552325765B(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_271(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_271(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_273(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_274(int iParam0)
{
	int iVar0;
	
	if (unk_0x666918BF44D91346() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_271(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_275(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x9ABCEFB6E400C9FB(iParam0) > func_266(unk_0x0C1D3C552325765B()))
		{
			iParam0 = -func_266(unk_0x0C1D3C552325765B());
		}
	}
	if (func_276(8000, 0, 0) > 0)
	{
		if (func_276(8000, 0, 0) < (iParam0 + func_266(unk_0x0C1D3C552325765B())))
		{
			iParam0 = (func_276(8000, 0, 0) - func_266(unk_0x0C1D3C552325765B()));
		}
	}
	return iParam0;
}

int func_276(int iParam0, bool bParam1, int iParam2)
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
	return Global_278713[iParam0];
}

int func_277()
{
	return 1;
}

int func_278(var uParam0)
{
	if (unk_0xD28EDDD3F7264249(uParam0))
	{
		return 1;
	}
	else if (unk_0x28C1B9853548BD8E(uParam0, "") || unk_0x28C1B9853548BD8E(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_279(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_280(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

void func_281(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	
	StringCopy(&Var0, func_292(iParam1), 16);
	StringCopy(&Var4, func_291(iParam2), 16);
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
	}
	if (func_45())
	{
		func_282(iVar8, iParam0, &iVar9, bParam3, bParam3, 0);
		Global_2572880[iVar9 /*73*/].f_8.f_43 = { Var0 };
		Global_2572880[iVar9 /*73*/].f_8.f_47 = { Var4 };
	}
	else
	{
		unk_0x258D6E1C5F0486E3(iParam0, &Var0, &Var4, bParam3);
	}
}

void func_282(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
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
			if (iParam1 > 0)
			{
				func_283(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_283(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_283(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
		if (!unk_0xFCE85827D6C3F47A(func_183()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_290(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_289(1, iParam4);
			Global_2573371 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_284(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_284(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_285(iParam0);
	}
}

void func_285(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_45())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_288(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_286(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_286(var uParam0)
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
	func_287(&(uParam0->f_8.f_3));
	func_287(&(uParam0->f_8.f_16));
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
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
}

void func_287(var uParam0)
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

int func_288(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_289(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_290(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_45())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = uParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = uParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_291(int iParam0)
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

char* func_292(int iParam0)
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
		
		default:
	}
	return "DEFAULT";
}

void func_293(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_4 = iVar1;
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_3 = (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_294(iVar1, 0);
	}
}

void func_294(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_295(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_297(iParam0) >= 0)
	{
		iVar0 = func_297(iParam0);
	}
	else
	{
		iVar0 = func_296(iParam0);
	}
	return iVar0;
}

int func_296(int iParam0)
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
			if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 1)
			{
				return 200;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 2)
			{
				return 400;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 3)
			{
				return 600;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 4)
			{
				return 800;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 5)
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

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_5461;
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
			if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 1)
			{
				return Global_262145.f_5468;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 2)
			{
				return Global_262145.f_5469;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 3)
			{
				return Global_262145.f_5470;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 4)
			{
				return Global_262145.f_5471;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 5)
			{
				return Global_262145.f_5472;
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
			return Global_262145.f_6037;
			break;
		
		case 15:
			return Global_262145.f_5462;
			break;
		
		case 17:
			return Global_262145.f_5462;
			break;
		
		case 18:
			return Global_262145.f_5462;
			break;
		
		case 19:
			return Global_262145.f_5462;
			break;
		
		case 21:
			return Global_262145.f_5462;
			break;
		
		case 36:
			return Global_262145.f_6502;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_11304;
			break;
		
		case 41:
			return Global_262145.f_11305;
			break;
		
		case 42:
			return Global_262145.f_11306;
			break;
		
		case 43:
			return Global_262145.f_13311;
			break;
		
		case 44:
			return Global_262145.f_13313;
			break;
	}
	return 0;
}

int func_298()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_91.f_50)
	{
		if (!Local_91.f_51)
		{
			if (!unk_0x08BA6DD398CA197C(Local_91.f_3, 7))
			{
				func_299("HS_UNABLE", iLocal_314, 0, 0, 0, 1, 1, 0);
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
	if (func_323(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_299(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x10B1B072E9514664(iParam1);
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		if ((iVar1 != -1 && unk_0x1504F110F2576375()) && iVar1 < 4)
		{
			if (Global_1626500.f_80279[iVar1] != -1)
			{
				unk_0x212C24688D441F9E(func_322(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x212C24688D441F9E(func_307(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x212C24688D441F9E(func_307(iParam1, -2, 1, 0));
		}
		unk_0xDA35BDB37E728640(func_305(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xBCD67D962E393B66(0, 1);
		}
		else
		{
			Global_2471194 = { func_126(iParam1) };
			if (unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194))
			{
				iVar18 = 0;
				if (unk_0x28C1B9853548BD8E(&(Global_2471124.f_22), "Leader") && Global_2471124.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2471124.f_21 > 0)
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
						Var2 = { func_304(&Var2) };
					}
					iVar0 = unk_0xF02E9753777E6C9C(iVar19, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar18, 0, Global_2471124, &Var2, Global_1316386, Global_1316387, Global_1316388);
				}
				else
				{
					iVar0 = unk_0x44B40096A9C3C3F9(iVar19, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar18, 0, Global_2471124, Global_1316386, Global_1316387, Global_1316388);
				}
			}
			else
			{
				iVar0 = unk_0xBCD67D962E393B66(0, 1);
			}
		}
		func_300(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_300(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_303() || !unk_0x1504F110F2576375()) || !func_181(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_301(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1747376.f_5[iVar0 /*53*/] = iParam0;
		Global_1747376.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1747376.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1747376.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1747376.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1747376.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1747376.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_301(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_302(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1747376++;
	if (Global_1747376 > 5)
	{
		Global_1747376 = 5;
		return Global_1747376;
	}
	return (Global_1747376 - 1);
}

void func_302(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_303()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
}

struct<16> func_304(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_305(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_306(&cVar0);
}

var func_306(char[4] cParam0)
{
	return cParam0;
}

int func_307(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
		iVar0 = unk_0x10B1B072E9514664(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1626500.f_80279[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_129(unk_0x0C1D3C552325765B()) || (func_321() && func_320()))
	{
		uVar1 = func_319();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(iVar1))
			{
				if (unk_0xA43666ACD375E339(iVar1) != -1)
				{
					if (func_6(unk_0xA43666ACD375E339(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_322(iParam1, iParam0, 0);
							}
							else
							{
								return func_314(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_314(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_322(iParam1, iParam0, 0);
				}
				else
				{
					return func_308(0, -1, 0);
				}
			}
			else
			{
				return func_308(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_322(iParam1, iParam0, 0);
		}
		else
		{
			return func_314(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_314(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_308(bool bParam0, int iParam1, bool bParam2)
{
	return func_309(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_309(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_128(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_313(1);
				}
				else
				{
					return func_313(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
			{
				return func_310(iVar0, iParam2, 1);
			}
			else
			{
				return func_310(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_313(1);
	}
	return func_313(0);
}

int func_310(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_312(iParam0, iParam1);
	if (func_311(Global_1626500.f_83867))
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

int func_311(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7751[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_312(int iParam0, int iParam1)
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

int func_313(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_314(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1588660[iVar2 /*532*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_160(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_128(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_313(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_318(1);
			}
			else
			{
				return func_309(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_313(1);
			}
			else
			{
				return func_309(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_317(iParam0);
	if (!iVar3 == -1)
	{
		return func_315(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_315(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_316(iParam0);
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

var func_316(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_317(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_318(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

var func_319()
{
	return Global_2359301.f_2;
}

bool func_320()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_321()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

int func_322(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1626500.f_80279[iParam0] != -1 && Global_1626500.f_80279[iParam0] <= 4)
	{
		if (Global_1626500.f_80279[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1626500.f_80279[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1626500.f_80279[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1626500.f_80279[iParam0] == 4)
		{
			if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 29))
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
			iVar0 = Global_1626500.f_80279[iParam0];
		}
	}
	else
	{
		iVar0 = func_309(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

int func_323(char* sParam0, char* sParam1, int iParam2)
{
	if (!unk_0x28C1B9853548BD8E(sParam0, "NULL"))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_311, 0))
		{
			func_420(&uLocal_331, 3, 0, sParam1, 0, 1);
			if (func_325(&uLocal_331, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				unk_0x88B0F0DC270164B7(&iLocal_311, 0);
			}
		}
		else if (!unk_0x08BA6DD398CA197C(iLocal_311, 1))
		{
			if (func_324(0))
			{
				unk_0x88B0F0DC270164B7(&iLocal_311, 1);
			}
		}
		else if (!func_324(0))
		{
			iLocal_311 = 0;
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_325(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_418())
	{
		return 0;
	}
	if (func_417())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_326(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_326(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x509383441597090D(sParam2))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam3))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69());
	iVar1 = func_416(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x509383441597090D(iParam7))
	{
		iVar2 = unk_0x3BB8D1C5FAAB25B3(iParam7);
	}
	if (func_415(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_410(iParam6))
	{
		return 0;
	}
	if (func_407(iVar0, iVar1, iVar2))
	{
		if (func_406())
		{
			return 0;
		}
		func_405();
		return func_333(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_332(iParam4))
	{
		return 0;
	}
	func_327(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_327(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1336446.f_40.f_1 = iParam0;
	Global_1336446.f_40.f_2 = iParam1;
	Global_1336446.f_40.f_3 = iParam2;
	StringCopy(&(Global_1336446.f_40.f_4), sParam3, 16);
	Global_1336446.f_40.f_8 = iParam4;
	Global_1336446.f_40.f_9 = iParam5;
	Global_1336446.f_40.f_14 = iParam6;
	func_328(iParam4);
	func_405();
	Global_1336446.f_40.f_13 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 7000);
}

void func_328(int iParam0)
{
	if (func_331(iParam0))
	{
		func_330();
		return;
	}
	func_329();
}

void func_329()
{
	Global_1336446.f_40.f_10 = 0;
}

void func_330()
{
	Global_1336446.f_40.f_10 = 1;
}

int func_331(int iParam0)
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

bool func_332(int iParam0)
{
	return iParam0 > Global_1336446.f_40.f_8;
}

int func_333(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_404();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_401(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_398(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_401(uParam0, sParam3, sParam4);
		}
		return func_381(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_380(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_370(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_369(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_334(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_334(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_368();
	bVar0 = true;
	if (func_336(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_335(120000);
		return 1;
	}
	return 0;
}

void func_335(int iParam0)
{
	Global_1336446.f_40.f_11 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam0);
	Global_1336446.f_40.f_12 = 1;
}

int func_336(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_362(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
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
	sVar4 = func_361(uParam5, bParam6, &iVar3);
	uVar5 = func_359(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
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
		if (unk_0x08BA6DD398CA197C(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
	{
		bVar12 = func_358(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_340(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 0))
	{
		func_339();
	}
	func_368();
	func_338();
	func_337();
	return 1;
}

void func_337()
{
	Global_1336446.f_57 = 0;
	Global_1336446.f_57.f_1 = 0;
}

void func_338()
{
	Global_1336446.f_40 = 3;
}

void func_339()
{
	unk_0x88B0F0DC270164B7(&Global_2313, 8);
}

int func_340(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_341(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
		}
		return 1;
	}
	return 0;
}

int func_341(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_352();
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
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_2577906 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_351() == 0)
	{
		func_349();
		return 0;
	}
	func_348(Global_2577905);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/]), sParam1, 64);
	Global_2576656[Global_2577905 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2576656[Global_2577905 /*104*/].f_24 = iParam2;
	}
	Global_2576656[Global_2577905 /*104*/].f_25 = iParam7;
	Global_2576656[Global_2577905 /*104*/].f_26 = uParam8;
	Global_2576656[Global_2577905 /*104*/].f_29 = uParam9;
	Global_2576656[Global_2577905 /*104*/].f_30 = uParam12;
	Global_2576656[Global_2577905 /*104*/].f_31 = uParam11;
	Global_2576656[Global_2577905 /*104*/].f_28 = 0;
	Global_2576656[Global_2577905 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_33), sParam4, 64);
	Global_2576656[Global_2577905 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_50), sParam5, 64);
	Global_2576656[Global_2577905 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_83), sParam15, 64);
	func_352();
	switch (iParam16)
	{
		case 3:
			Global_2576656[Global_2577905 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2576656[Global_2577905 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2576656[Global_2577905 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2576656[Global_2577905 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_347(0);
				break;
			
			case 1:
				func_347(1);
				break;
			
			case 2:
				func_347(2);
				break;
			
			case 3:
				func_347(3);
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
				Global_2577906 = 1;
				break;
			
			case 0:
				Global_2577906 = 1;
				break;
			
			case 2:
				Global_2577906 = 1;
				break;
			
			case 1:
				Global_2577906 = 1;
				break;
			}
	}
	Global_16814[Global_2577905] = 0;
	if (bParam10)
	{
		func_352();
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
			if (!func_346())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_345(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_342(1);
			func_345(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_342(int iParam0)
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
		if (func_243(14))
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
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_344(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
							{
								if (iVar1 == 14)
								{
									func_343(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_343(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_343(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
											break;
										
										default:
											break;
									}
									func_343(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_343(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_344(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_344(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_344(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_344(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_344(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
								func_343(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_343(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_343(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(sParam7))
	{
		func_344(sParam7);
	}
	if (!unk_0x509383441597090D(sParam8))
	{
		func_344(sParam8);
	}
	if (!unk_0x509383441597090D(sParam9))
	{
		func_344(sParam9);
	}
	if (!unk_0x509383441597090D(sParam10))
	{
		func_344(sParam10);
	}
	if (!unk_0x509383441597090D(sParam11))
	{
		func_344(sParam11);
	}
	unk_0xE73340DA551C95E1();
}

void func_344(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

void func_345(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

bool func_346()
{
	return Global_1315229;
}

void func_347(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101553.f_12906[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_348(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_2576656[iParam0 /*104*/].f_18 = uVar0;
	Global_2576656[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2576656[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2576656[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2576656[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2576656[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_349()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_350(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
		{
			Global_2577905 = iVar2;
		}
		iVar2++;
	}
	Global_2576656[Global_2577905 /*104*/].f_24 = 1;
}

int func_350(struct<6> Param0, struct<6> Param6)
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

int func_351()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2576656[iVar2 /*104*/].f_24 == 0)
		{
			Global_2577905 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2576656[iVar2 /*104*/].f_24 == 0 || Global_2576656[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_350(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
			{
				Global_2577905 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2577905 == 11)
	{
		return 0;
	}
	Global_2576656[Global_2577905 /*104*/].f_99[0] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[1] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[2] = 0;
	return 1;
}

void func_352()
{
	if (func_243(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		Global_14443 = func_353();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69617)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_353()
{
	func_354();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_354()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_357(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_356(unk_0xA0081090911D13E5());
			if (func_355(iVar0) && (!func_243(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_355(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_355(int iParam0)
{
	return iParam0 < 3;
}

int func_356(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_357(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_357(int iParam0)
{
	if (func_355(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_358(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_341(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
		}
		return 1;
	}
	return 0;
}

int func_359(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_360(2, iParam1);
	return iParam0;
}

void func_360(int iParam0, var uParam1)
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

var func_361(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x509383441597090D(uParam0))
	{
		return sLocal_20;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_360(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFFC9DE7E93AEAE21(sParam0);
}

int func_362(int iParam0)
{
	int iVar0;
	
	iVar0 = func_365(iParam0);
	if (iVar0 == -1)
	{
		func_363(iParam0, 1);
		return 0;
	}
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
}

void func_363(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_365(iParam0) != -1)
	{
		return;
	}
	if (Global_1353298)
	{
		if (iParam0 == Global_1353298.f_1)
		{
			return;
		}
	}
	if (func_364(iParam0))
	{
		return;
	}
	if (Global_1353336 >= 32)
	{
		return;
	}
	Global_1353303[Global_1353336] = iParam0;
	Global_1353336++;
	if (bParam1)
	{
	}
}

int func_364(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353336)
	{
		if (Global_1353303[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_365(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1353296 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353296)
	{
		if (Global_1353135[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x8AFD1D34F9842BB9(Global_1353135[iVar0 /*5*/].f_2) && unk_0x70FC8DD858474636(Global_1353135[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_366(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_366(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1353296)
	{
		return;
	}
	if (unk_0x8AFD1D34F9842BB9(Global_1353135[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1353135[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x17F6632C0BD7F15A(Global_1353135[iParam0 /*5*/].f_2), 64);
			unk_0xCF5D3892606E7989(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB360DA2AE12FCC02(Global_1353135[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1353296)
	{
		Global_1353135[iVar32 /*5*/] = { Global_1353135[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_367(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_367(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

void func_368()
{
	Global_1336446.f_40.f_9 = 4;
}

int func_369(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_368();
	bVar0 = false;
	return func_336(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_370(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_371(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_371(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_362(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
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
	sVar4 = func_361(uParam5, bParam6, &iVar3);
	uVar5 = func_359(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
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
		if (unk_0x08BA6DD398CA197C(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
	{
		bVar12 = func_379(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_373(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 0))
	{
		func_339();
	}
	func_372();
	func_338();
	func_337();
	return 1;
}

void func_372()
{
	Global_1336446.f_40.f_9 = 3;
}

int func_373(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_374(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_374(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_352();
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
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_378() == 0)
	{
		func_376();
		return 0;
	}
	func_375(Global_16812);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/]), sParam1, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_25 = iParam7;
	Global_101553.f_12996[Global_16812 /*104*/].f_26 = uParam8;
	Global_101553.f_12996[Global_16812 /*104*/].f_29 = uParam9;
	Global_101553.f_12996[Global_16812 /*104*/].f_30 = uParam12;
	Global_101553.f_12996[Global_16812 /*104*/].f_31 = uParam11;
	Global_101553.f_12996[Global_16812 /*104*/].f_28 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x08BA6DD398CA197C(Global_2313, 10))
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_347(0);
		func_347(2);
		func_347(1);
	}
	else
	{
		func_352();
		switch (iParam16)
		{
			case 3:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_347(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_347(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_347(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_347(3);
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
		if (unk_0x08BA6DD398CA197C(Global_2313, 10))
		{
			Global_101553.f_12906[0 /*20*/].f_17 = 1;
			Global_101553.f_12906[1 /*20*/].f_17 = 1;
			Global_101553.f_12906[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101553.f_12906[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101553.f_12906[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101553.f_12906[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101553.f_12906[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_352();
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
			if (!func_346())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_345(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_342(1);
			func_345(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_375(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_101553.f_12996[iParam0 /*104*/].f_18 = uVar0;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_376()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
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
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_377(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_24 = 1;
}

int func_377(struct<6> Param0, struct<6> Param6)
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

int func_378()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
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
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0 || Global_101553.f_12996[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_377(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
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
	Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

int func_379(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 3;
	if (func_374(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_380(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	func_372();
	bVar0 = true;
	if (func_371(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_335(120000);
		return 1;
	}
	return 0;
}

int func_381(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x08BA6DD398CA197C(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 4))
	{
		bVar0 = func_397(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_387(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x08BA6DD398CA197C(iParam4, 3))
		{
			func_386(1);
		}
		if (unk_0x08BA6DD398CA197C(iParam4, 5))
		{
			func_385(1);
		}
		func_384();
		func_338();
		func_383();
		func_382();
		return 1;
	}
	return 0;
}

void func_382()
{
	Global_2489614 = 0;
}

void func_383()
{
	Global_1336446.f_57 = 1;
	Global_1336446.f_57.f_1 = 0;
}

void func_384()
{
	Global_1336446.f_40.f_9 = 1;
}

void func_385(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2315, 0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
	}
}

void func_386(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 20);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
	}
}

int func_387(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_396(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_388(sParam3, iParam4, bParam7);
}

int func_388(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x588D9B1F6CF36C3C(0);
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
					func_395();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE80581DE0ACF1F8A())
		{
			return 0;
		}
		if (func_394(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_393();
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
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
			if (bParam2)
			{
				func_352();
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
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_392())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
				}
			}
			if (func_391())
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
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
				{
					return 0;
				}
			}
			func_390();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_389();
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
		func_395();
	}
	return 0;
}

void func_389()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x588D9B1F6CF36C3C(0);
	Global_15745 = 1;
}

void func_390()
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
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
}

int func_391()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_392()
{
	int iVar0;
	int iVar1;
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
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

void func_393()
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

bool func_394(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

void func_395()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
		Global_15745 = 6;
		return;
	}
}

void func_396(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_397(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_396(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_388(sParam3, iParam4, bParam7);
}

int func_398(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (func_400(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_399();
		func_384();
		func_338();
		func_383();
		func_382();
		return 1;
	}
	return 0;
}

void func_399()
{
	Global_16763 = 0;
}

bool func_400(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_396(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_388(sParam3, iParam4, bParam8);
}

int func_401(var uParam0, char* sParam1, char* sParam2)
{
	if (func_403(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_402();
		func_338();
		func_383();
		return 1;
	}
	return 0;
}

void func_402()
{
	Global_1336446.f_40.f_9 = 2;
}

bool func_403(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_396(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_388(sParam2, iParam3, 0);
}

void func_404()
{
	Global_1336446.f_55 = Global_1336446.f_40.f_1;
	Global_1336446.f_55.f_1 = Global_1336446.f_40.f_10;
}

void func_405()
{
	Global_1336446.f_40 = 1;
}

bool func_406()
{
	return Global_1336446.f_40 == 1;
}

int func_407(int iParam0, int iParam1, int iParam2)
{
	if (!func_408(iParam0))
	{
		return 0;
	}
	if (Global_1336446.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1336446.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_408(int iParam0)
{
	if (!func_409())
	{
		return 0;
	}
	if (!Global_1336446.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_409()
{
	if (Global_1336446.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_410(int iParam0)
{
	if (func_414())
	{
		return 0;
	}
	if (func_413())
	{
		return 0;
	}
	if (func_324(0))
	{
		return 0;
	}
	if (Global_1312462.f_18 != 0)
	{
		return 0;
	}
	if (Global_1738544 || func_412())
	{
		return 0;
	}
	if (!unk_0x08BA6DD398CA197C(iParam0, 6))
	{
		if (func_411())
		{
			return 0;
		}
	}
	return 1;
}

bool func_411()
{
	return unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1352032);
}

int func_412()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_413()
{
	return Global_1336446.f_40 == 3;
}

bool func_414()
{
	return func_391();
}

int func_415(int iParam0, int iParam1, int iParam2)
{
	if (!func_413())
	{
		return 0;
	}
	return func_407(iParam0, iParam1, iParam2);
}

int func_416(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x3BB8D1C5FAAB25B3(&cVar0);
}

bool func_417()
{
	return Global_2487434.f_1;
}

int func_418()
{
	if (Global_1336634.f_2)
	{
		return 1;
	}
	return func_419();
}

bool func_419()
{
	return func_414();
}

void func_420(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
			}
		}
	}
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_422(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_423(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xD9E8CA806A80203D())
		{
			func_424(uParam0, 0, 0);
		}
	}
}

void func_424(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
		}
		uParam0->f_1 = 1;
	}
}

void func_425()
{
	if (unk_0x3CF373660FCFAFCE(Local_91.f_10[iLocal_322 /*7*/]) && !unk_0x912AD5A10E7633F0(unk_0x564EAE6038A81C07(Local_91.f_10[iLocal_322 /*7*/]), 0))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (func_5(unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_91.f_10[iLocal_322 /*7*/]), 1), unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 50625f))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_306, 4))
				{
					unk_0x88B0F0DC270164B7(&iLocal_306, 4);
				}
			}
			else if (!unk_0x08BA6DD398CA197C(iLocal_306, 5))
			{
				if (Local_91.f_42 != -1)
				{
					if (iLocal_322 == Local_91.f_42)
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_306, 5))
						{
							unk_0x88B0F0DC270164B7(&iLocal_306, 5);
						}
					}
				}
			}
		}
	}
	func_426(iLocal_322);
	iLocal_322++;
	if (iLocal_322 >= func_421(iLocal_312))
	{
		if ((!unk_0x08BA6DD398CA197C(iLocal_306, 4) && unk_0x08BA6DD398CA197C(Local_91.f_1, 8)) || unk_0x08BA6DD398CA197C(iLocal_306, 5))
		{
			if (!unk_0x08BA6DD398CA197C(Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_1, 1))
			{
				unk_0x88B0F0DC270164B7(&(Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_1), 1);
			}
		}
		else if (unk_0x08BA6DD398CA197C(Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_1, 1))
		{
			unk_0x09C86C0C5CA26B1E(&(Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_1), 1);
		}
		unk_0x09C86C0C5CA26B1E(&iLocal_306, 4);
		unk_0x09C86C0C5CA26B1E(&iLocal_306, 5);
		iLocal_322 = 0;
	}
}

void func_426(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar2 = 0;
	Var3 = { 0f, 0f, 0f };
	bVar6 = false;
	if (unk_0x0E091C9F3918F674(Local_91.f_10[iParam0 /*7*/]))
	{
		iVar0 = unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]);
		if (iLocal_312 == 0)
		{
			if (unk_0x0C1D3C552325765B() == iLocal_314)
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
		if (unk_0x0C1D3C552325765B() == iLocal_313)
		{
			if (unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_307[iParam0], 0))
				{
					unk_0x88B0F0DC270164B7(&Global_1572922, 0);
					unk_0x88B0F0DC270164B7(&(iLocal_307[iParam0]), 0);
				}
				if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_307[iParam0], 1))
					{
						bVar6 = true;
					}
				}
				else if (unk_0x08BA6DD398CA197C(iLocal_307[iParam0], 1))
				{
					unk_0x09C86C0C5CA26B1E(&(iLocal_307[iParam0]), 1);
				}
			}
		}
		if (bVar6)
		{
			if (unk_0x0E091C9F3918F674(Local_91.f_10[iParam0 /*7*/]))
			{
				if (!unk_0xB480350E4250D92A(Local_91.f_10[iParam0 /*7*/]))
				{
					unk_0xDC64FA270C733B30(Local_91.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (unk_0xB480350E4250D92A(Local_91.f_10[iParam0 /*7*/]))
		{
			if (unk_0x0C1D3C552325765B() == iLocal_313)
			{
				if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 9) && !unk_0x08BA6DD398CA197C(iLocal_307[iParam0], 1))
				{
					if (unk_0x0E187494DAEAA6BC(iVar0, unk_0x0C1D3C552325765B()))
					{
						switch (Local_91.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_449(iVar0, 3);
								break;
						}
						unk_0x88B0F0DC270164B7(&(iLocal_307[iParam0]), 1);
					}
				}
			}
			if (!unk_0x912AD5A10E7633F0(iVar0, 0) && !unk_0xEB361B4BD195A4D3(iVar0))
			{
				switch (Local_91.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						unk_0xF674E664795C8CB3(iVar0, 187, 1);
						if (Local_91.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 3))
								{
									unk_0x8F5F40EEF9C6592E(iVar0, 3f);
									unk_0xFF5CE2ECB4FBD4A8(iVar0, 1);
									unk_0x705E4255B39314A7(iVar0, 118, 0);
								}
							}
						}
						if (unk_0x0C1D3C552325765B() == iLocal_314 && func_5(unk_0xC59DF10B4FC39DF8(iVar0, 1), unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iLocal_314), 1), 25f))
						{
							unk_0x88B0F0DC270164B7(&(Global_2482149.f_4440), 0);
						}
						else
						{
							unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4440), 0);
						}
						if (!unk_0x9337892D1C5EA0F0(iVar0))
						{
							if (!unk_0xF39C1D85FD64BBCA(iVar0, 29))
							{
								if (func_6(iLocal_314, 1, 1))
								{
									if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 13))
									{
										if (func_448(iLocal_314) && !unk_0xBA27A740ED6E91CC(unk_0x21F191D9AFF98B5E(iLocal_314)))
										{
											if (!func_447(iVar0, -1794415470))
											{
												if (func_446(iVar0))
												{
													iVar1 = unk_0xF8DB47D339B8B953(unk_0x21F191D9AFF98B5E(iLocal_314), 0);
													if (unk_0xD3FACCDA4D66AEAD(iVar1))
													{
														if (unk_0x1F1B2B6E500380C5(iVar1, 0))
														{
														}
														if (!unk_0x4E78173E80C9C0FF(iVar1, func_445(unk_0x21F191D9AFF98B5E(iLocal_314), 0)))
														{
															unk_0xA4FE049E1F729261(iVar0, iVar1, -1, func_444(unk_0x21F191D9AFF98B5E(iLocal_314), iVar1), func_443(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(unk_0xE44CFAD9FA539E8A(iVar0) && unk_0xC9E2B89AB7A49836(iVar0) == unk_0x21F191D9AFF98B5E(iLocal_314)) && !unk_0x39FEE545B315414E(iVar0, 1))
										{
											if (func_447(iVar0, -1794415470))
											{
												unk_0xD3032BAC1ECE011F(iVar0);
											}
											if (!func_447(iVar0, 1227113341))
											{
												if (func_446(iVar0))
												{
													unk_0x48FD097BDAEE42DD(iVar0, unk_0x21F191D9AFF98B5E(iLocal_314), -1, 0f, func_443(iParam0), 1073741824, 0);
												}
											}
											else
											{
												unk_0xF674E664795C8CB3(iVar0, 151, 1);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x0C1D3C552325765B() == iLocal_314 && func_5(unk_0xC59DF10B4FC39DF8(iVar0, 1), unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iLocal_314), 1), 25f))
						{
							unk_0x88B0F0DC270164B7(&(Global_2482149.f_4440), 0);
						}
						else
						{
							unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4440), 0);
						}
						if (unk_0x0C1D3C552325765B() == iLocal_314)
						{
							if (!unk_0x08BA6DD398CA197C(Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_1, 0))
							{
								if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
								{
									if ((func_4(unk_0xC59DF10B4FC39DF8(iVar0, 1), unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1)) && (unk_0xB6024B1E922B8E1A(unk_0xA0081090911D13E5()) || unk_0xBA27A740ED6E91CC(unk_0xA0081090911D13E5()))) || (unk_0xE44CFAD9FA539E8A(iVar0) && unk_0xC9E2B89AB7A49836(iVar0) == unk_0xA0081090911D13E5()))
									{
										iVar2 = func_441(unk_0x0C1D3C552325765B());
										fVar7 = (unk_0xBBDA792448DB5A89(Global_262145.f_5466) / 100f);
										iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) * fVar7));
										iVar8 = func_440(unk_0x0C1D3C552325765B());
										if (iVar8 > 100)
										{
											iVar8 = 100;
										}
										if (iVar2 > (iVar8 * Global_262145.f_5467))
										{
											iVar2 = (iVar8 * Global_262145.f_5467);
										}
										if (iVar2 > 0)
										{
											unk_0x88B0F0DC270164B7(&iLocal_306, 16);
										}
										unk_0x28DE1AC2DE058263(unk_0xA0081090911D13E5(), 5000, 10000, 4);
										if (!(unk_0xE44CFAD9FA539E8A(iVar0) && unk_0xC9E2B89AB7A49836(iVar0) == unk_0x21F191D9AFF98B5E(iLocal_314)))
										{
											Var3 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) - unk_0xC59DF10B4FC39DF8(iVar0, 1) };
											Var3 = { func_439(Var3) };
											Var3.f_0 = (Var3.f_0 * 3f);
											Var3.f_1 = (Var3.f_1 * 3f);
											Var3.f_2 = (Var3.f_2 * 3f);
											unk_0xCEDEF78614936959(unk_0xA0081090911D13E5(), 1, Var3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										unk_0x797AA7825A5A2D95(iVar0, 512, 0);
										unk_0x87BBAE0EE5DD7680(iVar0, 17, 1);
										if (((unk_0x39FEE545B315414E(iVar0, 1) || unk_0xE44CFAD9FA539E8A(iVar0)) && func_437(iVar0)) && func_445(iVar0, 0) == -1)
										{
											unk_0x797AA7825A5A2D95(iVar0, 2, 1);
											unk_0x87BBAE0EE5DD7680(iVar0, 3, 0);
											unk_0x87BBAE0EE5DD7680(iVar0, 6, 1);
										}
										else
										{
											unk_0xD3032BAC1ECE011F(iVar0);
											unk_0x69E46DC398F0B2BD(iVar0, unk_0xA0081090911D13E5(), 10000f, -1, 1, 0);
										}
										Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_2 = -1;
										}
										unk_0x65889F26F311FC55(iVar0, Global_1574280);
										unk_0x88B0F0DC270164B7(&(Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_1), 0);
										unk_0x88B0F0DC270164B7(&(Global_2482149.f_4440), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x0566060B874845C0(iVar0, 187))
						{
							unk_0xF674E664795C8CB3(iVar0, 187, 0);
						}
						if (Local_91.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 4))
							{
								unk_0xFF5CE2ECB4FBD4A8(iVar0, 0);
								unk_0x705E4255B39314A7(iVar0, 118, 1);
							}
						}
						if (!(unk_0xE44CFAD9FA539E8A(iVar0) && unk_0xC9E2B89AB7A49836(iVar0) == unk_0x21F191D9AFF98B5E(iLocal_314)))
						{
							if (!unk_0x9337892D1C5EA0F0(iVar0))
							{
								if (func_446(iVar0))
								{
									if ((unk_0x39FEE545B315414E(iVar0, 1) || unk_0xE44CFAD9FA539E8A(iVar0)) && !unk_0x08BA6DD398CA197C(Local_91.f_2, 10))
									{
										if (!func_447(iVar0, -258271821) && !func_447(iVar0, -1273030092))
										{
											if (unk_0x4745637EEB85132D(iVar0))
											{
												iVar9 = unk_0xF8DB47D339B8B953(iVar0, 1);
												iVar10 = unk_0x705BC1BB91F530B5(iVar9);
												if (unk_0x08BA6DD398CA197C(Local_91.f_2, 13))
												{
													unk_0x87BBAE0EE5DD7680(iVar0, 17, 1);
													unk_0x87BBAE0EE5DD7680(iVar0, 6, 0);
													unk_0x87BBAE0EE5DD7680(iVar0, 1, 0);
												}
												else if (unk_0xFC4346F9DE2AB4AE(iVar10))
												{
													unk_0xDEB658873B50218A(iVar0, iVar9, 0, unk_0xA0081090911D13E5(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1082130432, 0);
												}
												else if (unk_0x1E3C80E7C4B8041B(iVar10))
												{
													unk_0x228DA122420DEAF4(iVar0, iVar9, 0, unk_0xA0081090911D13E5(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80);
												}
												else if (unk_0x705BC1BB91F530B5(iVar9) == joaat("taxi"))
												{
													unk_0x797AA7825A5A2D95(iVar0, 2, 0);
													unk_0x87BBAE0EE5DD7680(iVar0, 3, 1);
													unk_0x87BBAE0EE5DD7680(iVar0, 6, 0);
													unk_0x69E46DC398F0B2BD(iVar0, unk_0x21F191D9AFF98B5E(iLocal_314), 10000f, -1, 1, 0);
												}
												else
												{
													unk_0x1F1428EF73399830(iVar0, unk_0xF8DB47D339B8B953(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_447(iVar0, 1805844857))
									{
										if (func_6(iLocal_314, 1, 1))
										{
											unk_0x69E46DC398F0B2BD(iVar0, unk_0x21F191D9AFF98B5E(iLocal_314), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_435(Local_91.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (unk_0x08BA6DD398CA197C(Local_91.f_2, 13))
				{
					unk_0xD3032BAC1ECE011F(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]));
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 17, 1);
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 6, 0);
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_91.f_10[iParam0 /*7*/]), 1, 0);
				}
				func_427(iVar0);
			}
		}
	}
}

void func_427(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x08BA6DD398CA197C(iLocal_306, 16))
	{
		iVar0 = Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_3;
		iVar1 = func_428(iVar0);
		if (iVar1 == 1)
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_306, 15);
			unk_0x09C86C0C5CA26B1E(&iLocal_306, 16);
			if (!func_45())
			{
				unk_0x00018AD55E6EBEE5(iVar0, 0, 0);
			}
			if (iVar0 > Global_262145.f_6847)
			{
				iVar0 = Global_262145.f_6847;
			}
			unk_0xFB4B028F94A31239(iParam0, iVar0);
			unk_0x88B0F0DC270164B7(&(Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_306, 15);
			unk_0x09C86C0C5CA26B1E(&iLocal_306, 16);
			unk_0x88B0F0DC270164B7(&(Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_428(int iParam0)
{
	if (func_45())
	{
		if (func_431(uParam0))
		{
			if (func_430(iLocal_515) == 2)
			{
				unk_0x5A74C1B5FA8AC1BF(func_429(iLocal_515));
				unk_0x00018AD55E6EBEE5(uParam0, 0, 0);
				func_285(iLocal_515);
				return 1;
			}
			else
			{
				func_285(iLocal_515);
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

int func_429(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/];
	}
	return -1;
}

int func_430(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_2;
	}
	return 0;
}

int func_431(var uParam0)
{
	if (!unk_0x08BA6DD398CA197C(iLocal_306, 15))
	{
		func_283(&iLocal_515, -1135378931, 537254313, 1474183246, 1839532116, uParam0, 4, 3);
		func_434(&uLocal_516, 0, 0);
		unk_0x88B0F0DC270164B7(&iLocal_306, 15);
	}
	else if (func_433(iLocal_515) || func_432(&uLocal_516, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_432(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_424(uParam0, bParam2, 0);
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_433(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_2 != 1;
	}
	return 0;
}

void func_434(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x4B50AAB32FBE0483();
		}
		else
		{
			*uParam0 = unk_0xB3FCCA0C64473451();
		}
	}
	else
	{
		*uParam0 = unk_0xDF658EB6CA91DFBC();
	}
	uParam0->f_1 = 1;
}

void func_435(var uParam0, bool bParam1)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		if (unk_0xB480350E4250D92A(uParam0))
		{
			if (!func_436(uParam0))
			{
				if (unk_0x08BA6DD398CA197C(Local_91.f_2, 13))
				{
					unk_0xD3032BAC1ECE011F(unk_0x564EAE6038A81C07(uParam0));
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(uParam0), 17, 1);
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(uParam0), 6, 0);
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(uParam0), 1, 0);
				}
				else
				{
					if (bParam1)
					{
						unk_0xD3032BAC1ECE011F(unk_0x564EAE6038A81C07(uParam0));
					}
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(uParam0), 6, 1);
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(uParam0), 1, 1);
				}
			}
		}
		func_212(&uParam0);
	}
}

int func_436(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return unk_0xEB361B4BD195A4D3(unk_0x564EAE6038A81C07(uParam0));
	}
	return 1;
}

int func_437(int iParam0)
{
	int iVar0;
	
	if (unk_0x39FEE545B315414E(iParam0, 1))
	{
		iVar0 = unk_0xF8DB47D339B8B953(iParam0, 1);
	}
	if (unk_0xE44CFAD9FA539E8A(iParam0))
	{
		iVar0 = unk_0x3F561A9EB662F6AE(iParam0);
	}
	if (!unk_0xD3FACCDA4D66AEAD(iVar0))
	{
		if (func_448(iLocal_314))
		{
			iVar0 = unk_0xF8DB47D339B8B953(unk_0x21F191D9AFF98B5E(iLocal_314), 1);
		}
	}
	if (unk_0xD3FACCDA4D66AEAD(iVar0))
	{
		if (func_438(iVar0))
		{
			return 0;
		}
		if (unk_0x0C4D70322C5AB4B5(iParam0) || unk_0xE3C6E31B7236489F(unk_0x705BC1BB91F530B5(iVar0)))
		{
			if (!unk_0xB46E03E529421E99(iVar0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_438(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1F1B2B6E500380C5(iParam0, 0))
		{
			if (!unk_0x601CCD1205C6523F(iParam0))
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

Vector3 func_439(struct<3> Param0)
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

var func_440(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_201.f_6;
}

int func_441(int iParam0)
{
	var uVar0;
	
	uVar0 = func_442(iParam0);
	return uVar0;
}

int func_442(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return unk_0x6F46EEAF5BB462EA(-1);
		}
		else if (func_264(iParam0))
		{
			return Global_1588660[iParam0 /*532*/].f_201.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_443(int iParam0)
{
	if (!unk_0x08BA6DD398CA197C(Local_91.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_444(int iParam0, int iParam1)
{
	if (!unk_0x912AD5A10E7633F0(iParam0, 0) && !unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		if (unk_0x72550A6F2BC0E12B(iParam0, iParam1))
		{
			if (unk_0x8FD32443A080784B(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x8FD32443A080784B(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x8FD32443A080784B(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x8FD32443A080784B(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_445(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (unk_0x39FEE545B315414E(iParam0, iParam1))
		{
			iVar0 = unk_0xF8DB47D339B8B953(iParam0, iParam1);
			if (unk_0xD3FACCDA4D66AEAD(iVar0))
			{
				if (!unk_0x912AD5A10E7633F0(iVar0, 0))
				{
					iVar1 = unk_0xAF3D6F27CC1E594E(unk_0x705BC1BB91F530B5(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x6315EBE95A97CADF(iVar0, iVar3, 0))
						{
							if (unk_0x8FD32443A080784B(iVar0, iVar3, 0) == iParam0)
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

int func_446(int iParam0)
{
	if ((!unk_0xEB361B4BD195A4D3(iParam0) && !unk_0xA206EFFF59CEDCA5(iParam0, 0)) && !unk_0xFFE4F37124DBE6D9(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_447(int iParam0, int iParam1)
{
	if (unk_0x21178DF77817BF39(iParam0, iParam1) == 1 || unk_0x21178DF77817BF39(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_448(int iParam0)
{
	if (unk_0xE844676B910CF1C8(iParam0))
	{
		return 0;
	}
	if (unk_0x4745637EEB85132D(unk_0x21F191D9AFF98B5E(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_449(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x4184E6D274FCBFF1(iParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x96FB4818617F93B9(iParam0, "AttributeDamage");
	}
	unk_0x88B0F0DC270164B7(&iVar0, iParam1);
	unk_0xB6E7BA5C3025C547(iParam0, "AttributeDamage", iVar0);
}

void func_450()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = unk_0x08BA6DD398CA197C(Local_91.f_2, 6);
	bVar1 = unk_0x08BA6DD398CA197C(Local_91.f_2, 10);
	func_455();
	if (iLocal_312 != 1)
	{
		if (unk_0x08BA6DD398CA197C(Local_91.f_3, 12))
		{
			func_452();
		}
	}
	if (unk_0x16833EFAA58E63DB(uLocal_323))
	{
		func_451(&uLocal_323);
	}
	iVar3 = 0;
	while (iVar3 < func_421(iLocal_312))
	{
		iLocal_307[iVar3] = 0;
		iVar3++;
	}
	if (unk_0xD9E8CA806A80203D())
	{
		Local_91.f_42 = -1;
		Local_91.f_5 = uLocal_319;
		Local_91.f_6 = uLocal_319;
		Local_91.f_7 = uLocal_319;
		Local_91.f_1 = 0;
		Local_91.f_4 = 0;
		Local_91.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_421(iLocal_312))
		{
			bVar2 = unk_0x08BA6DD398CA197C(Local_91.f_10[iVar3 /*7*/].f_2, 6);
			Local_91.f_10[iVar3 /*7*/].f_2 = 0;
			Local_91.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				unk_0x88B0F0DC270164B7(&(Local_91.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_1 = 0;
	Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_2 = -1;
	iLocal_306 = 0;
	if (bVar0)
	{
		unk_0x88B0F0DC270164B7(&(Local_91.f_2), 6);
	}
	if (bVar1)
	{
		unk_0x88B0F0DC270164B7(&(Local_91.f_2), 11);
		unk_0x88B0F0DC270164B7(&iLocal_306, 8);
	}
	unk_0x88B0F0DC270164B7(&iLocal_306, 4);
	unk_0x88B0F0DC270164B7(&iLocal_306, 11);
}

void func_451(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		unk_0x0B57C567D698C373(uParam0);
		bVar0 = true;
	}
	if (unk_0x16833EFAA58E63DB(uParam0->f_1))
	{
		unk_0x0B57C567D698C373(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_7))
	{
		if (!unk_0xEB361B4BD195A4D3(uParam0->f_7))
		{
			if (unk_0x86998240179B9048(uParam0->f_7))
			{
				unk_0x2E0880CA20A96DBE(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_452()
{
	switch (iLocal_312)
	{
		case 0:
			func_454(&(Global_1574284[3]));
			break;
		
		case 1:
			func_453();
			break;
	}
}

void func_453()
{
	int iVar0;
	
	if (unk_0xA86CA03D9749EEB3())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0xFDDE2C1A05E64390(3, Global_1574240[iVar0], -1467815081);
			unk_0xFDDE2C1A05E64390(3, -1467815081, Global_1574240[iVar0]);
			iVar0++;
		}
	}
}

void func_454(var uParam0)
{
	int iVar0;
	
	if (unk_0xA86CA03D9749EEB3())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0xFDDE2C1A05E64390(3, Global_1574240[iVar0], *uParam0);
			unk_0xFDDE2C1A05E64390(3, *uParam0, Global_1574240[iVar0]);
			iVar0++;
		}
	}
}

void func_455()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_421(iLocal_312))
	{
		bVar1 = false;
		if (iLocal_312 == 0)
		{
			if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_435(Local_91.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_456()
{
	func_457();
	if (iLocal_312 != 1)
	{
		func_425();
	}
}

void func_457()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < func_421(iLocal_312))
	{
		if (unk_0x0E091C9F3918F674(Local_91.f_10[iVar0 /*7*/]))
		{
			if (unk_0xB480350E4250D92A(Local_91.f_10[iVar0 /*7*/]))
			{
				uVar1 = unk_0x564EAE6038A81C07(Local_91.f_10[iVar0 /*7*/]);
				if (!unk_0x912AD5A10E7633F0(uVar1, 0))
				{
					unk_0xF674E664795C8CB3(iVar1, 151, 1);
				}
			}
		}
		iVar0++;
	}
	if (Global_2482149.f_1610)
	{
	}
	if (iLocal_312 == 1)
	{
		if (unk_0x0C1D3C552325765B() == iLocal_314)
		{
			if (unk_0x08BA6DD398CA197C(Local_91.f_1, 0))
			{
				if (!unk_0xC2328E478826F8DD(uLocal_496))
				{
					if (func_6(iLocal_314, 1, 1))
					{
						if (Local_91.f_50)
						{
							unk_0x1DD12BA3781E71F9(15, unk_0x21F191D9AFF98B5E(iLocal_314), 4, 0f, &uLocal_496, -1467815081);
						}
						else
						{
							unk_0x1DD12BA3781E71F9(14, unk_0x21F191D9AFF98B5E(iLocal_314), 4, 0f, &uLocal_496, 0);
						}
					}
				}
				if (Global_2482149.f_1610)
				{
					if (!unk_0x08BA6DD398CA197C(Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_1, 3))
					{
						unk_0x88B0F0DC270164B7(&(Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_312 == 0)
	{
		if (Local_91.f_42 != -1)
		{
			if (unk_0x3CF373660FCFAFCE(Local_91.f_10[Local_91.f_42 /*7*/]))
			{
				if (!unk_0x912AD5A10E7633F0(unk_0x564EAE6038A81C07(Local_91.f_10[Local_91.f_42 /*7*/]), 0) && !func_461(unk_0x564EAE6038A81C07(Local_91.f_10[Local_91.f_42 /*7*/])))
				{
					if (Local_91.f_10[Local_91.f_42 /*7*/].f_5 == 3)
					{
						func_458(Local_91.f_10[Local_91.f_42 /*7*/], &uLocal_323, -1082130432, 0, 1, 0, 0, -1, -1, 1);
						if (unk_0x16833EFAA58E63DB(uLocal_323))
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_306, 6))
							{
								unk_0x6F18BFEFE84565FF(uLocal_323, "FM_MGR_BLP");
								unk_0x88B0F0DC270164B7(&iLocal_306, 6);
							}
						}
					}
				}
				else if (unk_0x16833EFAA58E63DB(uLocal_323))
				{
					func_451(&uLocal_323);
				}
			}
			if (unk_0x0C1D3C552325765B() == iLocal_313)
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_306, 14))
				{
					if (func_323("MPCT_mugsuc", "LAMAR", 19))
					{
						unk_0x88B0F0DC270164B7(&iLocal_306, 14);
					}
				}
			}
		}
	}
}

void func_458(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		if (func_460())
		{
			Global_2432628 = unk_0x0C1D3C552325765B();
		}
		if (bParam3)
		{
			func_459(unk_0x564EAE6038A81C07(uParam0), uParam1, 1, Global_2432628, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_459(unk_0x564EAE6038A81C07(uParam0), uParam1, -1, Global_2432628, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x16833EFAA58E63DB(*uParam1))
	{
		func_451(uParam1);
	}
}

int func_459(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x4A0FB18E33FE5805();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (!unk_0x86998240179B9048(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x2E0880CA20A96DBE(iParam0, 1);
			}
			else
			{
				unk_0x57C2F08BE587ABD2(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xE632D58AA6B26F2D(iParam0, iParam2);
			unk_0xB1EB57004481ED5D(iParam0, fParam6);
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				unk_0x420759DE4A6A9555(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		unk_0xC6458FBC206C61F2(iParam0, uParam4);
		unk_0x71CB3379ED1310DF(iParam0, uParam5);
		*uParam1 = unk_0x968B07E3B24F8761(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x77804F3DCBA01DB5(*uParam1, iParam8);
				}
				unk_0x940E74834C801A79("STRING");
				if (bParam10)
				{
					unk_0xDA35BDB37E728640(uParam7);
				}
				else
				{
					unk_0xBDE6EEC5F6BDC060(uParam7);
				}
				unk_0x61C3F79E9ECF289E(*uParam1);
				unk_0x420759DE4A6A9555(*uParam1, 7);
			}
		}
		if (!unk_0x08BA6DD398CA197C(uParam1->f_6, 2))
		{
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				if (!unk_0x509383441597090D(uParam7))
				{
					unk_0x940E74834C801A79("STRING");
					if (bParam10)
					{
						unk_0xDA35BDB37E728640(sParam7);
					}
					else
					{
						unk_0xBDE6EEC5F6BDC060(sParam7);
					}
					unk_0x61C3F79E9ECF289E(*uParam1);
				}
				unk_0x88B0F0DC270164B7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x39FEE545B315414E(iParam0, 0))
		{
			uParam1->f_1 = unk_0x165B5F1F7F703B2D(iParam0);
			if (!unk_0x08BA6DD398CA197C(uParam1->f_6, 3))
			{
				if (unk_0x16833EFAA58E63DB(uParam1->f_1))
				{
					unk_0x420759DE4A6A9555(uParam1->f_1, 7);
					unk_0x88B0F0DC270164B7(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x16833EFAA58E63DB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_460()
{
	return Global_1315206;
}

int func_461(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (unk_0x39FEE545B315414E(uParam0, 0))
	{
		uVar0 = unk_0xF8DB47D339B8B953(iParam0, 0);
		if (unk_0x1F1B2B6E500380C5(uVar0, 0))
		{
			if (unk_0x71F81D3603710A43("MPBitset", 3))
			{
				if (unk_0x4184E6D274FCBFF1(iVar0, "MPBitset"))
				{
					iVar1 = unk_0x96FB4818617F93B9(iVar0, "MPBitset");
				}
				if (unk_0x08BA6DD398CA197C(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_462()
{
	return Local_91.f_0;
}

int func_463(int iParam0)
{
	return Local_145[iParam0 /*5*/];
}

void func_464()
{
	if (unk_0x0C1D3C552325765B() == iLocal_314)
	{
		if (Global_25335)
		{
			if (!unk_0x08BA6DD398CA197C(Local_145[iLocal_321 /*5*/].f_1, 4))
			{
				unk_0x88B0F0DC270164B7(&(Local_145[iLocal_321 /*5*/].f_1), 4);
			}
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Local_145[iLocal_321 /*5*/].f_1), 4);
		}
	}
}

void func_465()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x0C1D3C552325765B() == iLocal_313)
	{
		if (unk_0x08BA6DD398CA197C(Global_1572922, 0))
		{
			unk_0x09C86C0C5CA26B1E(&Global_1572922, 0);
			bVar0 = true;
		}
		if (!unk_0x08BA6DD398CA197C(Local_145[iLocal_313 /*5*/].f_1, 2))
		{
			if (unk_0x08BA6DD398CA197C(Local_91.f_1, 11))
			{
				unk_0x88B0F0DC270164B7(&(Local_145[iLocal_313 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!unk_0x08BA6DD398CA197C(Local_91.f_1, 11))
		{
			unk_0x09C86C0C5CA26B1E(&(Local_145[iLocal_313 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_4 = func_469();
			func_466(Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_4);
		}
	}
	else if (Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_4 != Local_91.f_44)
	{
		Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_4 = Local_91.f_44;
		func_466(Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_466(int iParam0)
{
	switch (iLocal_312)
	{
		case 0:
			func_468(&(Global_1574284[3]), iParam0);
			break;
		
		case 1:
			func_467(iParam0);
			break;
	}
}

void func_467(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x08BA6DD398CA197C(iParam0, iVar0))
		{
			unk_0xFDDE2C1A05E64390(1, Global_1574240[iVar0], -1467815081);
			unk_0xFDDE2C1A05E64390(1, -1467815081, Global_1574240[iVar0]);
		}
		else
		{
			unk_0xFDDE2C1A05E64390(3, Global_1574240[iVar0], -1467815081);
			unk_0xFDDE2C1A05E64390(3, -1467815081, Global_1574240[iVar0]);
		}
		iVar0++;
	}
}

void func_468(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x08BA6DD398CA197C(iParam1, iVar0))
		{
			unk_0xFDDE2C1A05E64390(1, Global_1574240[iVar0], *uParam0);
			unk_0xFDDE2C1A05E64390(1, *uParam0, Global_1574240[iVar0]);
		}
		else
		{
			unk_0xFDDE2C1A05E64390(3, Global_1574240[iVar0], *uParam0);
			unk_0xFDDE2C1A05E64390(3, *uParam0, Global_1574240[iVar0]);
		}
		iVar0++;
	}
}

int func_469()
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
			if (iLocal_313 == unk_0x81C85E54237F8A2E(iVar1))
			{
				unk_0x88B0F0DC270164B7(&iVar0, iVar1);
			}
		}
		else if (unk_0x0C1D3C552325765B() == unk_0x81C85E54237F8A2E(iVar1))
		{
			unk_0x88B0F0DC270164B7(&iVar0, iVar1);
		}
		else if (func_6(unk_0x81C85E54237F8A2E(iVar1), 0, 1))
		{
			if (func_46(unk_0x81C85E54237F8A2E(iVar1)))
			{
				unk_0x88B0F0DC270164B7(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_470()
{
	switch (iLocal_312)
	{
		case 0:
			if (!unk_0x08BA6DD398CA197C(iLocal_306, 11))
			{
				if (unk_0x0C1D3C552325765B() == iLocal_313)
				{
					if (func_6(iLocal_314, 1, 1))
					{
						func_299("GC_TCK_60", iLocal_314, 0, 0, 0, 1, 1, 0);
						unk_0x88B0F0DC270164B7(&iLocal_306, 11);
					}
				}
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_306, 12))
			{
				if (unk_0x08BA6DD398CA197C(Local_91.f_1, 8))
				{
					if (unk_0x0C1D3C552325765B() == iLocal_313)
					{
						if (func_6(iLocal_314, 1, 1))
						{
							func_299("GC_TCK_62", iLocal_314, 0, 0, 0, 1, 1, 0);
							unk_0x88B0F0DC270164B7(&iLocal_306, 12);
						}
					}
				}
			}
			if (unk_0x08BA6DD398CA197C(Local_91.f_2, 10))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_306, 8))
				{
					if (unk_0x0C1D3C552325765B() == iLocal_313)
					{
						if (func_6(iLocal_314, 1, 1))
						{
							func_299("GC_TCK_65", iLocal_314, 0, 0, 0, 1, 1, 0);
							unk_0x88B0F0DC270164B7(&iLocal_306, 8);
						}
					}
				}
			}
			else if (!unk_0x08BA6DD398CA197C(iLocal_306, 13))
			{
				if (!unk_0x08BA6DD398CA197C(Local_91.f_2, 11))
				{
					if (unk_0x08BA6DD398CA197C(Local_91.f_1, 8))
					{
						if (unk_0x08BA6DD398CA197C(Local_91.f_2, 6))
						{
							if (unk_0x0C1D3C552325765B() == iLocal_313)
							{
								if (func_6(iLocal_314, 1, 1))
								{
									func_299("GC_TCK_63", iLocal_314, 0, 0, 0, 1, 1, 0);
									unk_0x88B0F0DC270164B7(&iLocal_306, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x08BA6DD398CA197C(iLocal_306, 11))
			{
				if (unk_0x0C1D3C552325765B() == iLocal_313)
				{
					if (func_6(iLocal_314, 1, 1))
					{
						if (Local_91.f_50)
						{
							func_299("HS_SUCC", iLocal_314, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_299("GC_TCK_70", iLocal_314, 0, 0, 0, 1, 1, 0);
						}
						unk_0x88B0F0DC270164B7(&iLocal_306, 11);
					}
				}
				else if (unk_0x0C1D3C552325765B() == iLocal_314)
				{
					if (func_6(iLocal_313, 1, 1))
					{
						if (Local_91.f_50)
						{
							if (Local_91.f_51)
							{
								func_472("HS_A_SUCC", 1);
							}
							else
							{
								func_299("HS_SENT", iLocal_313, 0, 0, 0, 1, 1, 0);
							}
						}
						else
						{
							func_299("GC_TCK_71", iLocal_313, 0, 0, 0, 1, 1, 0);
						}
						unk_0x88B0F0DC270164B7(&iLocal_306, 11);
					}
				}
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_306, 10))
			{
				if (unk_0x08BA6DD398CA197C(Local_91.f_1, 0))
				{
					if (unk_0x08BA6DD398CA197C(Local_91.f_3, 6))
					{
						if (unk_0x0C1D3C552325765B() == iLocal_313)
						{
							if (func_6(iLocal_314, 0, 1))
							{
								func_471(-1);
								if (Local_91.f_50)
								{
									if (!Local_91.f_51)
									{
										func_299("HS_KILLED", iLocal_314, 0, 0, 0, 1, 1, 0);
									}
								}
								else
								{
									func_299("GC_TCK_73", iLocal_314, 0, 0, 0, 1, 1, 0);
								}
								unk_0x88B0F0DC270164B7(&iLocal_306, 10);
							}
						}
					}
				}
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_306, 9))
			{
				if (unk_0x08BA6DD398CA197C(Local_91.f_1, 0))
				{
					if (unk_0x08BA6DD398CA197C(Local_91.f_3, 7))
					{
						if (unk_0x0C1D3C552325765B() == iLocal_313)
						{
							if (func_6(iLocal_314, 0, 1))
							{
								if (Local_91.f_50)
								{
									func_299("HS_ESCAPED", iLocal_314, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_299("GC_TCK_75", iLocal_314, 0, 0, 0, 1, 1, 0);
								}
								unk_0x88B0F0DC270164B7(&iLocal_306, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_471(int iParam0)
{
	if (Global_1573839)
	{
		if (Global_1573843 && Global_1588660[unk_0x0C1D3C552325765B() /*532*/] != 148)
		{
			if (Global_1573418.f_14 == unk_0x81C85E54237F8A2E(iParam0))
			{
				Global_1613026++;
			}
		}
		else
		{
			Global_1613026++;
		}
	}
}

int func_472(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x754E61FE98961B39(sParam0);
	iVar0 = unk_0xBCD67D962E393B66(0, 1);
	func_300(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_473()
{
	if (unk_0x12FCC59A8F519B65(false) != Local_91.f_45)
	{
		if (func_481(Local_91.f_45, 0, 1))
		{
			if (unk_0x6A8543D72105975A(0) <= Local_91.f_45)
			{
				unk_0xF2797029E839595C(Local_91.f_45);
			}
		}
	}
	if (unk_0x6A3DEBF89FDFEB17(false) != Local_91.f_46)
	{
		if (func_480(Local_91.f_45, 0, 1))
		{
			if (unk_0xF9B4BEDB78277D56(0) <= Local_91.f_46)
			{
				unk_0x23DFD22869618226(Local_91.f_46);
			}
		}
	}
	if (unk_0xD647AEF519458F05(false) != Local_91.f_47)
	{
		if (func_474(Local_91.f_45, 0, 1))
		{
			if (unk_0x2386AB69D23DE0C4(0) <= Local_91.f_47)
			{
				unk_0x861EA6260F5D252A(Local_91.f_47);
			}
		}
	}
}

bool func_474(int iParam0, bool bParam1, bool bParam2)
{
	return func_475(2, iParam0, 1, bParam1, bParam2);
}

int func_475(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x08BA6DD398CA197C(Global_1353353, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_479(iParam0) - func_478(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_478(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_479(iParam0) - func_477(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_478(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_479(iParam0) - func_478(iParam0, 1));
		}
		if (!bParam4 && Global_1588660[unk_0x0C1D3C552325765B() /*532*/] != 3)
		{
			iVar1 = (iVar1 - func_476(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_476(int iParam0)
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

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1353353.f_1;
			break;
		
		case 1:
			return Global_1353353.f_2;
			break;
		
		case 2:
			return Global_1353353.f_3;
			break;
	}
	return 0;
}

int func_478(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x391BEA92ECF1B445())
			{
				return Global_2421327[iVar0 /*353*/].f_209;
			}
			else
			{
				return unk_0x12FCC59A8F519B65(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x391BEA92ECF1B445())
			{
				return Global_2421327[iVar0 /*353*/].f_210;
			}
			else
			{
				return unk_0x6A3DEBF89FDFEB17(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x391BEA92ECF1B445())
			{
				return Global_2421327[iVar0 /*353*/].f_211;
			}
			else
			{
				return unk_0xD647AEF519458F05(!bParam1);
			}
			break;
	}
	return 0;
}

int func_479(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1353361;
			break;
		
		case 1:
			return Global_1353362;
			break;
		
		case 2:
			return Global_1353363;
			break;
	}
	return 0;
}

bool func_480(int iParam0, bool bParam1, bool bParam2)
{
	return func_475(1, iParam0, 1, bParam1, bParam2);
}

bool func_481(int iParam0, bool bParam1, bool bParam2)
{
	return func_475(0, iParam0, 1, bParam1, bParam2);
}

void func_482()
{
	if (Local_91.f_50)
	{
		if (unk_0x0C1D3C552325765B() == iLocal_313)
		{
			func_484(5);
		}
		else if (unk_0x0C1D3C552325765B() == iLocal_314)
		{
			func_484(9);
		}
	}
	func_483();
}

void func_483()
{
	unk_0x78C587487CD40B92();
}

void func_484(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

int func_485()
{
	bool bVar0;
	var uVar1;
	
	func_492(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_491())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_490())
	{
		return 1;
	}
	if (func_489(157))
	{
		if (!func_488())
		{
			return 1;
		}
	}
	if (func_489(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_486() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_486()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_486()
{
	switch (func_487())
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

int func_487()
{
	return Global_25185;
}

bool func_488()
{
	return Global_2442442.f_576;
}

int func_489(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_490()
{
	return Global_2451777;
}

bool func_491()
{
	return Global_2442442.f_571;
}

void func_492(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_493(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
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

void func_493(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_6(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_494(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_494(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_495()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_496(struct<20> Param0)
{
	func_500(32, Param0);
	func_499(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_91, 54);
	unk_0xCCA45C9E00D2BC01(&Local_145, 161);
	unk_0x401559486BCA4D9B(0);
	if (!func_498())
	{
		func_229();
	}
	iLocal_312 = Param0.f_16;
	iLocal_313 = unk_0x81C85E54237F8A2E(Param0.f_17);
	if (unk_0xCB129F9A01D14082(iLocal_313))
	{
	}
	iLocal_314 = unk_0x81C85E54237F8A2E(Param0.f_18);
	if (unk_0xCB129F9A01D14082(iLocal_314))
	{
		iLocal_315 = unk_0x3BB8D1C5FAAB25B3(unk_0xCF66111B26743875(iLocal_314));
	}
	if (func_497(iLocal_313, 5) && iLocal_312 == 1)
	{
		Local_91.f_50 = 1;
		if (func_497(iLocal_314, 9))
		{
			Local_91.f_51 = 1;
		}
	}
	Local_316 = { Param0.f_10 };
	if (iLocal_312 == 1)
	{
		if (unk_0x0C1D3C552325765B() == iLocal_313)
		{
			unk_0x88B0F0DC270164B7(&Global_1572922, 0);
		}
	}
	Global_1729860 = 0;
	Global_1729861 = 0;
	if (iLocal_312 == 1)
	{
		Global_2482149.f_1610 = 0;
	}
	Local_145[unk_0x1A9CF4D5D4E2F266() /*5*/] = 0;
}

bool func_497(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_5, iParam1);
}

int func_498()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 0;
		}
		if (unk_0x7DEEE0ED76EAAD72())
		{
			return 1;
		}
		if (func_491())
		{
			return 0;
		}
		if (func_489(155))
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

int func_499(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_483();
			}
			else
			{
				return 0;
			}
		}
		if (!func_460())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_483();
					}
					else
					{
						return 0;
					}
				}
				if (func_491())
				{
					if (!bParam2)
					{
						func_483();
					}
					else
					{
						return 0;
					}
				}
				if (func_489(155))
				{
					if (!bParam2)
					{
						func_483();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_483();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_483();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_483();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_500(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_483();
	}
	unk_0x786FDD765D4157F4(iParam0, 0, Param1.f_16);
}

