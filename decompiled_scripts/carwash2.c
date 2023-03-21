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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	float fLocal_42 = 0f;
	struct<3> Local_43 = { 0, 0, 0 } ;
	bool bLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_65 = 0f;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	struct<345> Local_76 = { 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1075838976, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 1065353216, 2, 0, 0, 2, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 0, 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 1050253722, 2, 0, 0, 2, 0, 0, 7, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 0, 1069547520, 0, 1061997773, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 1;
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
	var uLocal_439 = 16;
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
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	float fLocal_557 = 0f;
	bool bLocal_558 = 0;
	int iLocal_559 = 0;
	bool bLocal_560 = 0;
	int iLocal_561 = 0;
	struct<24> Local_562[2];
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = -1;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	int iLocal_628 = 0;
	float fLocal_629 = 0f;
	struct<3> Local_630 = { 0, 0, 0 } ;
	float fLocal_633 = 0f;
	float fLocal_634 = 0f;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_40 = 125;
	iLocal_41 = 128;
	fLocal_42 = 0.625f;
	Local_43 = { 0f, 0f, (0.55f * 1.1f) };
	Local_47 = { 0f, 0f, -1.125f };
	Local_50 = { 0f, 0f, 0f };
	Local_53 = { 0f, 90f, 0f };
	Local_56 = { 90f, 90f, 0f };
	Local_59 = { 0f, 0f, 0f };
	Local_62 = { 0f, 0.1f, -0.76f };
	fLocal_65 = 1f;
	iLocal_71 = -1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	fLocal_74 = 1f;
	fLocal_75 = 3f;
	iLocal_628 = -1;
	fLocal_629 = 0.75f;
	Local_630 = { 0.1f, 0f, -1f };
	fLocal_633 = 2.1f;
	fLocal_634 = 3f;
	if (unk_0x8B1574454E8C2421(joaat("carwash2")) > 1)
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		unk_0x5341E3E598550C46();
		unk_0x2F3193E06C2EFF44(0);
	}
	else if (unk_0x5EBD03AF78E7B4DB(67))
	{
		func_390(0);
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		func_332();
	}
	else
	{
		func_1();
	}
}

void func_1()
{
	int iVar0;
	
	func_331(unk_0xA19140A5C42D8715());
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	iLocal_628 = -1;
	if (!func_325())
	{
		func_390(0);
	}
	unk_0xD07EE91CE9B6D4CF(1);
	func_207(0f, 0f, 0f, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1);
	unk_0x341AA026B031328A(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 60f);
	func_175();
	unk_0x135C61E339DABBAC(1);
	iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	Local_76.f_336 = 1.75f;
	func_169(iVar0, &Local_76, 0);
	fLocal_557 = unk_0x0ADBC1ED02016D2A(iVar0);
	bLocal_560 = unk_0x0F3E411830C671BC(iVar0);
	while (true)
	{
		if ((!func_331(iVar0) || !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0)) || !unk_0x1095F403F52B42E1(iVar0, 0))
		{
			func_168(iVar0);
			func_113(2);
			func_390(0);
		}
		func_110();
		func_87(&Local_76);
		func_84(&Local_76, iVar0, fLocal_557);
		if (func_16(&Local_76, iVar0))
		{
			func_3(1, 1, 1, 1);
			func_168(iVar0);
			if (unk_0x71364F510A1CB69F())
			{
				func_390(1);
			}
			else
			{
				func_113(2);
				func_390(0);
			}
		}
		if (Local_76.f_344 == 0)
		{
			if (unk_0xD73B1037F6BD4B90(2, 18))
			{
				func_2(500, 0);
				Local_76.f_344 = 1;
				func_168(iVar0);
			}
		}
		else if (unk_0x71364F510A1CB69F())
		{
			func_390(1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_2(int iParam0, bool bParam1)
{
	if (unk_0x3A83743561B4F70C())
	{
		if (!unk_0x607776744A243309())
		{
			unk_0x9662BE461F9FDF9E(iParam0);
			if (bParam1)
			{
				while (!unk_0x71364F510A1CB69F())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
}

void func_3(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA6580F898F4E801C();
	unk_0x271AF1531073FE9B(uVar0, 0);
	unk_0x962CF6A9EA6FDCAC(iVar0, iParam3, 0);
	func_6(0, 1, 0, 0, 0);
	if (iParam2 == 1)
	{
		unk_0xDC374DA4DC566237(1);
		unk_0x85685830EFB9A55E(1);
	}
	unk_0x135C61E339DABBAC(1);
	if (iParam0 == 1)
	{
		unk_0x20732990927F4964(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_39 != 0 && iLocal_39 != joaat("object")) && iLocal_39 != joaat("gadget_parachute"))
		{
			if (func_5(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), iLocal_39, 0))
				{
					unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), iLocal_39, 0);
				}
			}
		}
	}
	if (func_4(unk_0xA19140A5C42D8715()))
	{
		unk_0x1BE107CEA70974D0(unk_0xA19140A5C42D8715(), 0, 0);
	}
}

int func_4(var uParam0)
{
	if (func_5(uParam0))
	{
		if (!unk_0x4915F4759304D5CF(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_15(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(0);
			}
			if (!func_14())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_13(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_15(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_13(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_11(unk_0xD4E735F4B6A956AC())) && !func_8(unk_0xD4E735F4B6A956AC(), 0)) && !func_7()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_11(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
		}
		Global_71203 = 0;
	}
}

bool func_7()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_9(-1, 0) == 8;
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

int func_9(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_10();
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

int func_10()
{
	return Global_1312736;
}

int func_11(int iParam0)
{
	if (func_8(iParam0, 0))
	{
		return 1;
	}
	if (func_12())
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

bool func_12()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_13(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_14()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_15(int iParam0)
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

int func_16(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar1 = func_83(uParam0, iParam1);
	iVar2 = 0;
	iVar3 = 0;
	if (!func_331(iParam1))
	{
		func_70(uParam0, iParam1);
		return 1;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0xBE079F709C76E132())
		{
			func_69(uParam0);
		}
	}
	if (unk_0xD1ABB20CFF127CCC())
	{
		func_69(uParam0);
	}
	iVar0 = unk_0xB0D49A1F9F054602(iParam1, -1, 0);
	if (func_68(iVar0))
	{
		iLocal_69 = (unk_0xF9D4EF1338E38AFB(iVar0, 242628503) == 1 || unk_0xF9D4EF1338E38AFB(iVar0, 242628503) == 0);
		if (iLocal_69)
		{
			iLocal_71 = unk_0x5100CFEF9EA1B0E5(iVar0);
			iLocal_70 = (unk_0xF9D4EF1338E38AFB(iVar0, 242628503) == 7 && iLocal_71 == (uParam0->f_350 - 1));
		}
		if (iLocal_67)
		{
			if (unk_0x5D7DFE2058701942(iVar0, 0))
			{
				unk_0xCB482EF95FAE4D73(iVar0, 0, 0);
			}
			iLocal_67 = 0;
		}
		if (iLocal_68)
		{
			func_67(iParam1, uParam0);
			iLocal_68 = 0;
		}
	}
	if (Global_71205)
	{
		if (func_66(unk_0xD4E735F4B6A956AC(), 21))
		{
			iVar2 = 1;
		}
		if (!func_68(iVar0))
		{
			iVar2 = 1;
		}
		if (unk_0xE0FD180CD24C0B67(iVar0, iParam1, 0))
		{
			if (!unk_0xB10F7FE89663CB5B(iVar0, iParam1))
			{
				iVar2 = 1;
			}
		}
		if (!func_64(unk_0xA19140A5C42D8715()))
		{
			iVar2 = 1;
		}
		if (func_62(iParam1, 3))
		{
			iVar2 = 1;
		}
		if (!func_61())
		{
			iVar2 = 1;
		}
		if (unk_0x97B2B0016AD3C7C6(iVar0))
		{
			iVar2 = 1;
		}
		if (func_60(iParam1))
		{
			iVar2 = 1;
		}
		if (func_57(uParam0))
		{
			func_70(uParam0, iParam1);
			return 1;
		}
		if (iVar2 == 1)
		{
			func_70(uParam0, iParam1);
			return 1;
		}
		if (!unk_0xB540EEBB14C48518(iParam1))
		{
			unk_0x96E5B7F9BABD610F(iParam1);
		}
	}
	else if (func_57(uParam0) && uParam0->f_344 == 0)
	{
		func_2(500, 1);
		func_56(iParam1, 100f, 0f);
		uParam0->f_344 = 1;
		return 1;
	}
	if (iVar0 == unk_0xA19140A5C42D8715())
	{
		if (!iLocal_69 && (iLocal_71 > -1 && iLocal_71 < uParam0->f_350))
		{
			func_67(iParam1, uParam0);
		}
		if (iLocal_70)
		{
		}
	}
	if (func_51(uParam0, iParam1))
	{
		func_70(uParam0, iParam1);
		return 1;
	}
	if (uParam0->f_339 != 99)
	{
		func_46(0);
		unk_0x271AF1531073FE9B(unk_0xD4E735F4B6A956AC(), 1);
		if (uParam0->f_339 > 0)
		{
			unk_0x74BF5F6EEF62D5A9();
			if (func_45(uParam0->f_334) != 1)
			{
				func_38(uParam0->f_334, 1, 0, 1, 0);
			}
		}
	}
	switch (uParam0->f_339)
	{
		case 0:
			func_36(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_71205);
			unk_0x2E989BFBA0D3CC0E(uParam0->f_352, uParam0->f_355, 0, 0);
			if (func_45(uParam0->f_334) != 1)
			{
				func_38(uParam0->f_334, 1, 0, 1, 0);
			}
			func_34(&(uParam0->f_172[0 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 19, 19);
			func_69(uParam0);
			if (!Global_71205)
			{
				unk_0x3521B10FB737CE36(func_33(unk_0xA6580F898F4E801C()), 50f, 0);
			}
			uParam0->f_339++;
			if (!unk_0x2F8EAF18929E1E59("CAR_WASH_SCENE"))
			{
				unk_0x8969D02DEDC106D2("CAR_WASH_SCENE");
			}
			if (!Global_71205)
			{
				unk_0x4299736016AECE26(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), uParam0->f_21, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), uParam0->f_24);
				if (unk_0xEF6267624B1C9336(iParam1, 1))
				{
					unk_0x1F47C2C85A56E64C(iParam1, 1);
				}
				func_32(iParam1, 2);
			}
			else if (unk_0xB540EEBB14C48518(iParam1))
			{
				func_32(iParam1, 10);
				if (unk_0xEF6267624B1C9336(iParam1, 1))
				{
					unk_0x1F47C2C85A56E64C(iParam1, 0);
				}
			}
			break;
		
		case 1:
			if (func_31(&(uParam0->f_172[0 /*23*/]), fVar1))
			{
				func_36(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_71205);
				func_34(&(uParam0->f_172[1 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
				func_30(iParam1);
				func_69(uParam0);
				uParam0->f_339++;
			}
			break;
		
		case 2:
			if (func_31(&(uParam0->f_172[1 /*23*/]), fVar1))
			{
				func_36(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_71205);
				if (uParam0->f_172[2 /*23*/])
				{
					func_34(&(uParam0->f_172[2 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					uParam0->f_339++;
				}
				else
				{
					func_34(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					func_56(iParam1, 50f, 0f);
					uParam0->f_339 = 98;
				}
				func_30(iParam1);
				func_69(uParam0);
			}
			break;
		
		case 3:
			if (func_31(&(uParam0->f_172[2 /*23*/]), fVar1))
			{
				func_36(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_71205);
				if (uParam0->f_172[3 /*23*/])
				{
					func_34(&(uParam0->f_172[3 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					uParam0->f_339++;
				}
				else
				{
					func_34(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					func_56(iParam1, 50f, 0f);
					uParam0->f_339 = 98;
				}
				func_30(iParam1);
				func_69(uParam0);
			}
			break;
		
		case 4:
			if (func_31(&(uParam0->f_172[3 /*23*/]), fVar1))
			{
				func_36(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_71205);
				if (uParam0->f_172[4 /*23*/])
				{
					func_34(&(uParam0->f_172[4 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					uParam0->f_339++;
				}
				else
				{
					func_34(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					func_56(iParam1, 50f, 0f);
					uParam0->f_339 = 98;
				}
				func_30(iParam1);
				func_69(uParam0);
			}
			break;
		
		case 5:
			if (func_31(&(uParam0->f_172[4 /*23*/]), fVar1))
			{
				func_36(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_71205);
				if (uParam0->f_172[5 /*23*/])
				{
					func_34(&(uParam0->f_172[5 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					uParam0->f_339++;
				}
				else
				{
					func_34(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					func_56(iParam1, 50f, 0f);
					uParam0->f_339 = 98;
				}
				func_30(iParam1);
				func_69(uParam0);
			}
			break;
		
		case 6:
			if (func_31(&(uParam0->f_172[5 /*23*/]), fVar1) && fVar1 >= uParam0->f_338)
			{
				func_36(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_71205);
				if (!unk_0xD3DCB71AF4A2BE13(uParam0->f_172[6 /*23*/].f_1[0 /*3*/], 2f, 0, 1, 0, 0, 0, iParam1, 0))
				{
					func_34(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 3, 1);
				}
				func_56(iParam1, 100f, 0f);
				if (!Global_71205)
				{
				}
				uParam0->f_339 = 98;
				func_30(iParam1);
				func_69(uParam0);
			}
			break;
		
		case 98:
			if (unk_0xD3DCB71AF4A2BE13(uParam0->f_172[6 /*23*/].f_1[0 /*3*/], 2f, 0, 1, 0, 0, 0, iParam1, 0))
			{
				iVar3 = 1;
			}
			if (func_31(&(uParam0->f_172[6 /*23*/]), fVar1) || iVar3)
			{
				func_36(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_71205);
				func_26(uParam0->f_340, 0);
				if (unk_0x2F8EAF18929E1E59("CAR_WASH_SCENE"))
				{
					unk_0x5AD7D03C214BDA88("CAR_WASH_SCENE");
				}
				if (func_64(unk_0xA19140A5C42D8715()))
				{
					unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
				}
				func_24(unk_0xA19140A5C42D8715());
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
				uParam0->f_339 = 99;
				uParam0->f_348 = 0;
				uParam0->f_349 = 0;
				iLocal_70 = 0;
				iLocal_69 = 0;
				iLocal_71 = -1;
				unk_0x271AF1531073FE9B(unk_0xD4E735F4B6A956AC(), 0);
				func_56(iParam1, 100f, 0f);
				func_168(iParam1);
				if (!Global_71205)
				{
				}
				func_32(iParam1, 1);
				unk_0x8C15CE28B371C038(uParam0->f_352, uParam0->f_355, 0);
				func_17(302, 0, 0);
				return 1;
			}
			else
			{
				unk_0x74BF5F6EEF62D5A9();
			}
			break;
		
		case 99:
			if (unk_0x2F8EAF18929E1E59("CAR_WASH_SCENE"))
			{
				unk_0x5AD7D03C214BDA88("CAR_WASH_SCENE");
			}
			func_26(uParam0->f_340, 0);
			uParam0->f_348 = 0;
			uParam0->f_349 = 0;
			uParam0->f_341 = 0;
			iLocal_70 = 0;
			iLocal_69 = 0;
			iLocal_71 = -1;
			break;
	}
	return 0;
}

void func_17(int iParam0, int iParam1, int iParam2)
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
		func_23((891 + iParam0), 1, -1, 1);
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
		Global_106070.f_10166[iParam0 /*12*/].f_10 = iParam1;
		Global_106070.f_10166[iParam0 /*12*/].f_11 = iParam2;
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
		func_18();
	}
}

void func_18()
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
		func_22(13, unk_0xF34EE736CF047844(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_21() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_19();
				}
			}
		}
	}
}

int func_19()
{
	if (func_20(0))
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

bool func_20(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

int func_21()
{
	return Global_25459;
}

int func_22(int iParam0, int iParam1)
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

int func_23(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_10();
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

void func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x77065AD41B64E946(iParam0);
	if (iVar0 == func_25())
	{
		return;
	}
	Global_2423801[iVar0 /*413*/].f_234 = 0;
}

int func_25()
{
	return -1;
}

void func_26(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x37B568B777BC65F9(uParam0))
	{
		func_29(&uParam0, 0);
		func_28(bParam1);
		unk_0x271AF1531073FE9B(unk_0xD4E735F4B6A956AC(), 0);
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (func_331(iVar0))
			{
				if (!func_27(iVar0, 1))
				{
					if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) == unk_0xA19140A5C42D8715())
					{
						func_32(iVar0, 1);
					}
				}
			}
		}
	}
}

int func_27(int iParam0, bool bParam1)
{
	if (Global_71205)
	{
		if (unk_0xDC5D81351D6A4DDB(iParam0) && (!bParam1 || unk_0x1095F403F52B42E1(iParam0, 0)))
		{
			if (unk_0xAEAF59799C2F26E4(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_28(bool bParam0)
{
	if (bParam0)
	{
	}
}

void func_29(var uParam0, int iParam1)
{
	if (unk_0x37B568B777BC65F9(*uParam0))
	{
		unk_0x8E88E73F74A9FF79(0, iParam1, 3000, 1, 0, 0);
		unk_0x930701157A4B9374(*uParam0, 0);
		unk_0x77F0486CE0E598D5(*uParam0, 0);
		*uParam0 = 0;
	}
}

void func_30(int iParam0)
{
	if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0xB540EEBB14C48518(iParam0))
		{
			unk_0xC53974682AC939A9(iParam0, 1);
		}
		return;
	}
	unk_0xC53974682AC939A9(iParam0, 1);
}

int func_31(var uParam0, float fParam1)
{
	bool bVar0;
	
	bVar0 = (fParam1 != -99f && uParam0->f_22 != -99f);
	if (!*uParam0 == 1)
	{
		return 0;
	}
	if (bVar0 && fParam1 >= uParam0->f_22)
	{
		return 1;
	}
	if (unk_0xFD34717937104F1C() > (uParam0->f_19 + uParam0->f_20))
	{
		return fParam1 >= uParam0->f_22;
	}
	return 0;
}

void func_32(int iParam0, int iParam1)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		unk_0x14293208022014FA(iParam0, iParam1);
		return;
	}
	if (!func_27(iParam0, 1))
	{
		unk_0x14293208022014FA(iParam0, iParam1);
	}
}

Vector3 func_33(var uParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(uParam0), 0);
}

void func_34(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	float fVar3;
	
	fVar3 = uParam0->f_15[1];
	if (*uParam0 == 0)
	{
		return;
	}
	func_29(uParam1, 0);
	Var0 = { uParam0->f_1[0 /*3*/] };
	if (bParam2)
	{
		Var0.f_2 = (Var0.f_2 + uParam0->f_18);
	}
	*uParam1 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", Var0, uParam0->f_8[0 /*3*/], uParam0->f_15[0], 1, 2);
	if (!unk_0x37B568B777BC65F9(*uParam1))
	{
		return;
	}
	uParam0->f_19 = unk_0xFD34717937104F1C();
	unk_0x930701157A4B9374(*uParam1, 1);
	unk_0x8E88E73F74A9FF79(1, 0, 3000, 1, 0, 0);
	if ((!bParam3 && uParam0->f_20 > 0) && !func_35(uParam0->f_1[1 /*3*/]))
	{
		Var0 = { uParam0->f_1[1 /*3*/] };
		if (bParam2)
		{
			Var0.f_2 = (Var0.f_2 + uParam0->f_18);
		}
		if (fVar3 == 0f)
		{
			fVar3 = uParam0->f_15[0];
		}
		unk_0x1D7183E3760DB4E5(*uParam1, Var0, uParam0->f_8[1 /*3*/], fVar3, uParam0->f_20, iParam4, iParam5, 2);
	}
	else if (func_331(uParam0->f_21))
	{
		unk_0xA62406CE1190BF91(*uParam1, uParam0->f_21, 0f, 0f, 0f, 1);
	}
}

int func_35(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_36(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	fVar0 = unk_0x499324B3EF19C288(Param0, Param3, 1);
	Var1 = { Param0 };
	Var4 = { func_37(Param3 - Param0) };
	while (fVar7 < fVar0)
	{
		unk_0x341AA026B031328A(Var1, fParam6);
		if (bParam7)
		{
			unk_0x9827D9AC8985F888(Var1, fParam6, 0);
		}
		Var1 = { Var1 + Var4 * FtoV((fParam6 / 2f)) };
		fVar7 = (fVar7 + (fParam6 / 2f));
	}
}

Vector3 func_37(struct<3> Param0)
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

void func_38(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_71205)
		{
			Global_2437022.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_106070.f_7233.f_227[iParam0] = iParam1;
		}
		Global_33084[iParam0] = iParam2;
		Global_33283[iParam0] = 1;
		func_41(iParam0, bParam3, iParam4, 0);
		func_39(iParam0, iParam1);
	}
}

void func_39(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0x7B68A43B688620B5("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0x7B68A43B688620B5("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x0F93570322F6A341("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x0F93570322F6A341("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_40(0, 0);
			}
			else
			{
				func_40(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0x7B68A43B688620B5("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0x7B68A43B688620B5("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xD9B9ACB0291AA577("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x665C47CF8EF3A8D1("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x665C47CF8EF3A8D1("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x665C47CF8EF3A8D1("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x665C47CF8EF3A8D1("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&Global_104708, iParam0);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_104708, iParam0);
	}
	Global_104707 = 1;
}

bool func_41(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;
	
	Global_1645162 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_44(&Var3, iParam0);
	if (func_42())
	{
		iVar1 = Global_106070.f_7233.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2437022.f_75.f_227[iParam0];
	}
	iVar2 = Global_33482[iParam0];
	if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !bParam3)
	{
		Global_1645162 = 1;
	}
	else
	{
		bVar99 = true;
		if (unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) != unk_0xFEB6EEC0545AF7AA("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_33084[iParam0] && unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
					Global_1645162 = 1;
				}
				if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || unk_0x16F3A5056959BF3A(unk_0xA19140A5C42D8715()))
				{
					if (!unk_0x71364F510A1CB69F())
					{
						bVar99 = false;
						Global_1645162 = 1;
					}
				}
			}
		}
		if (unk_0xE6F861B0A4D50CE0() && (!unk_0x47C3DC461C758C29() || unk_0x84C1DECF60EFBBD7() != 5))
		{
			bVar99 = false;
			Global_1645162 = 1;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x8FAC08959C2D32F8(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x5F041E7AE5419FEC(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34678[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[1 /*8*/]));
								Global_1645162 = 1;
							}
						}
						if ((unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES")) && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[2 /*8*/]));
								Global_1645162 = 1;
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (!unk_0x471855870C045BD0(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x1639295C71657BCF(&(Var3.f_8[0 /*8*/]));
								Global_1645162 = 1;
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_34)) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (!unk_0x471855870C045BD0(&(Var3.f_34)))
							{
								unk_0x1639295C71657BCF(&(Var3.f_34));
								Global_1645162 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_34)) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_34)))
							{
								unk_0x981516504EAE59E2(&(Var3.f_34));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES")) && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (!unk_0x471855870C045BD0(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x1639295C71657BCF(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_34)) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_34)))
							{
								unk_0x981516504EAE59E2(&(Var3.f_34));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES"))
						{
							if (!unk_0x471855870C045BD0(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x1639295C71657BCF(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34479[iParam0] = 1;
					Global_34678[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = unk_0xB68EB57358F46F86(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_50)) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (unk_0xE0A4C16EE6C60363(iVar100, &(Var3.f_50)))
							{
								unk_0xCD2417B9AC84180C(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (unk_0xE0A4C16EE6C60363(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES")) && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xE0A4C16EE6C60363(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (!unk_0xE0A4C16EE6C60363(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x6679FC2A24AEDF2D(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (unk_0xE0A4C16EE6C60363(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES")) && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xE0A4C16EE6C60363(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (!unk_0xE0A4C16EE6C60363(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x6679FC2A24AEDF2D(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (unk_0xE0A4C16EE6C60363(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (unk_0xE0A4C16EE6C60363(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES"))
							{
								if (!unk_0xE0A4C16EE6C60363(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x6679FC2A24AEDF2D(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xEF6CE4AF8D633F85(iVar100);
						}
					}
					Global_34678[iParam0] = 1;
					Global_34479[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x499324B3EF19C288(Var3, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 1) < 250f)
					{
						uVar98 = unk_0x389F96269D4F1FD8(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0xCD7C9B7A8F43BA15(uVar98))
						{
							if (iVar1 == 0)
							{
								unk_0x317CA41ED2351630(uVar98, 3);
								Global_34678[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xA3DC7C2803970902(uVar98) != 6 && unk_0xA3DC7C2803970902(uVar98) != 7) && unk_0xA3DC7C2803970902(uVar98) != 8)
								{
									unk_0x317CA41ED2351630(uVar98, 10);
									Global_34678[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0xA23198D7F155C365(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0xFA57C719261AA55D(&(Global_32830[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x191C6AFA8C538AD7(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x2BCFB39E86340DAA(&(Global_32830[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_33283[iParam0] = 0;
				Global_33482[iParam0] = iVar1;
				if (!func_42())
				{
					if (!Global_34079[iParam0])
					{
						Global_34079[iParam0] = 1;
						Global_34278++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_42()
{
	if ((func_21() == -1 || func_21() == 999) && !func_43() == 0)
	{
		return 1;
	}
	return 0;
}

int func_43()
{
	return Global_25460;
}

int func_44(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

int func_45(int iParam0)
{
	if (iParam0 != 198)
	{
		if (Global_71205)
		{
			return Global_2437022.f_75.f_227[iParam0];
		}
		else
		{
			return Global_106070.f_7233.f_227[iParam0];
		}
	}
	return 0;
}

void func_46(int iParam0)
{
	if (func_50())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_49(0))
		{
			func_47(iParam0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
	}
}

void func_47(int iParam0)
{
	if (func_50())
	{
		return;
	}
	if (Global_14681)
	{
		func_48(0, 0);
	}
	if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 16);
	}
	if (unk_0xB39808C1DCE0DCFA())
	{
		unk_0xA8B97F91CBDE376C(0);
	}
	Global_15822 = 5;
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 30);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 30);
	}
	if (!func_14())
	{
		Global_14513.f_1 = 3;
	}
}

void func_48(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_49(0))
		{
			Global_14681 = 1;
			if (bParam1)
			{
				unk_0x75B4B390EE495A3B(&Global_14450);
			}
			Global_14441 = { Global_14459[Global_14458 /*3*/] };
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
	else if (Global_14681 == 1)
	{
		Global_14681 = 0;
		Global_14441 = { Global_14466[Global_14458 /*3*/] };
		if (bParam1)
		{
			unk_0xB8927E9A664047D4(Global_14450);
		}
		else
		{
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
}

int func_49(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
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
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_50()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

int func_51(var uParam0, int iParam1)
{
	var uVar0;
	struct<3> Var1;
	struct<2> Var4;
	struct<2> Var7;
	var uVar10;
	var uVar13;
	int iVar16;
	var uVar17;
	
	if (unk_0xFD34717937104F1C() < uParam0->f_346)
	{
		return 0;
	}
	if (uParam0->f_348 == 0)
	{
		unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iParam1), &Var4, &Var7);
		if (uParam0->f_359 == 0)
		{
			Var1 = { unk_0x3201284584C7CD83(iParam1, 0f, (Var7.f_1 + 0.325f), 0f) };
		}
		else
		{
			Var1 = { unk_0x3201284584C7CD83(iParam1, 0f, (Var4.f_1 - 0.325f), 0f) };
		}
		if (Global_71205)
		{
			uParam0->f_348 = unk_0x2655F64CD0F70A6B(Var1 - Vector(0.1f, 0f, 0f), Var1 + Vector(0.1f, 0f, 0f), 0.75f, 18, iParam1, 4);
		}
		else
		{
			uParam0->f_348 = unk_0x2655F64CD0F70A6B(Var1 - Vector(0.1f, 0f, 0f), Var1 + Vector(0.1f, 0f, 0f), 0.75f, 2, iParam1, 4);
		}
		return 0;
	}
	else
	{
		iVar16 = unk_0x7C00B4755E048785(uParam0->f_348, &uVar0, &uVar10, &uVar13, &uVar17);
		if (iVar16 == 2)
		{
			if (unk_0xDC5D81351D6A4DDB(uVar17))
			{
				if (func_52(iVar17))
				{
					uParam0->f_349++;
					return 1;
				}
				else
				{
					uParam0->f_349 = 0;
				}
			}
		}
		uParam0->f_346 = unk_0xFD34717937104F1C() + 500;
		uParam0->f_348 = 0;
	}
	return 0;
}

int func_52(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0))
	{
		if (unk_0xFAC06EE780B57279(iParam0))
		{
			return 1;
		}
		if (unk_0x281590680327CDEA(iParam0))
		{
			return 0;
		}
		if (func_55(iParam0))
		{
			return 0;
		}
		if (func_54(iParam0))
		{
			return 1;
		}
		if (func_53(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_53(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(uParam0), &Var0, &Var3);
	Var6.f_0 = unk_0x69C0BB7D03EE045D((Var3.f_0 - Var0.f_0));
	Var6.f_1 = unk_0x69C0BB7D03EE045D((Var3.f_1 - Var0.f_1));
	Var6.f_2 = unk_0x69C0BB7D03EE045D((Var3.f_2 - Var0.f_2));
	return ((Var6.f_0 >= 1.4f && Var6.f_1 >= 1.4f) && Var6.f_2 >= 1.4f);
}

int func_54(int iParam0)
{
	if (unk_0x8F474E419F56E48D(uParam0) == joaat("prop_dumpster_01a"))
	{
		return 1;
	}
	if (unk_0x8F474E419F56E48D(iParam0) == joaat("prop_dumpster_02a"))
	{
		return 1;
	}
	if (unk_0x8F474E419F56E48D(iParam0) == joaat("prop_dumpster_02b"))
	{
		return 1;
	}
	if (unk_0x8F474E419F56E48D(iParam0) == joaat("prop_dumpster_3a"))
	{
		return 1;
	}
	if (unk_0x8F474E419F56E48D(iParam0) == joaat("prop_dumpster_4a"))
	{
		return 1;
	}
	if (unk_0x8F474E419F56E48D(iParam0) == joaat("prop_dumpster_4b"))
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
{
	if (unk_0x8F474E419F56E48D(uParam0) == joaat("prop_carwash_roller_horz"))
	{
		return 1;
	}
	if (unk_0x8F474E419F56E48D(iParam0) == joaat("prop_carwash_roller_vert"))
	{
		return 1;
	}
	if (unk_0x8F474E419F56E48D(iParam0) == joaat("prop_ld_test_01"))
	{
		return 1;
	}
	return 0;
}

void func_56(int iParam0, float fParam1, float fParam2)
{
	if (unk_0xB540EEBB14C48518(iParam0))
	{
		unk_0x76F21C07E0602168(iParam0, fParam1);
		unk_0xFB94F197528404D4(iParam0, fParam2);
	}
}

bool func_57(var uParam0)
{
	int iVar0;
	
	iVar0 = func_59(uParam0->f_351 == 1, 20000, 15000);
	if (Global_71205)
	{
		return (func_58(uParam0) > iVar0 && uParam0->f_341);
	}
	return unk_0xFD34717937104F1C() > (uParam0->f_361 + iVar0);
}

int func_58(var uParam0)
{
	if (Global_71205)
	{
		return unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), uParam0->f_362);
	}
	return (unk_0xFD34717937104F1C() - uParam0->f_361);
}

int func_59(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_60(int iParam0)
{
	if (!unk_0x048D67718BE95EFE(iParam0))
	{
		return 0;
	}
	if (((unk_0xEB9F2352179A557A(iParam0, 0, 5000) || unk_0xEB9F2352179A557A(iParam0, 1, 5000)) || unk_0xEB9F2352179A557A(iParam0, 2, 5000)) || unk_0xEB9F2352179A557A(iParam0, 3, 5000))
	{
		return 1;
	}
	return 0;
}

int func_61()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_2423801[iVar0 /*413*/].f_234)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_63(iParam0))
	{
		iVar0 = 0;
		if (unk_0xB7223494EA10AF2F(iParam0, 0, 0) && unk_0xB7223494EA10AF2F(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0xB7223494EA10AF2F(iParam0, 4, 0) && unk_0xB7223494EA10AF2F(iParam0, 5, 0))
		{
			return 1;
		}
		if (unk_0xB7223494EA10AF2F(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0xB7223494EA10AF2F(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0xB7223494EA10AF2F(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0xB7223494EA10AF2F(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	if (func_5(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (!unk_0x463E3A48A46C9195(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_68(iParam0))
	{
		return 0;
	}
	if (!unk_0x5D7DFE2058701942(iParam0, 0))
	{
		return 0;
	}
	iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, 0);
	if (!func_331(iVar0))
	{
		return 0;
	}
	iVar1 = unk_0xB0D49A1F9F054602(iVar0, -1, 0);
	if (!func_68(iVar1))
	{
		return 0;
	}
	if (Global_71205)
	{
		iVar2 = unk_0x77065AD41B64E946(iVar1);
		if (iVar2 == func_25())
		{
			return 0;
		}
		if (!func_65(iVar2, 1, 0))
		{
			Global_2423801[iVar2 /*413*/].f_234 = 0;
			return 0;
		}
		return Global_2423801[iVar2 /*413*/].f_234;
	}
	return 1;
}

int func_65(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x58E3CCF930D23BD5(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_66(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

int func_67(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	if (!func_331(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xB0D49A1F9F054602(iParam0, -1, 0);
	if (!func_331(iParam0))
	{
		return 0;
	}
	if (!unk_0xF8882C5CDED0257A(uParam1->f_335))
	{
		return 0;
	}
	unk_0xC53974682AC939A9(iParam0, 1);
	if (unk_0xB540EEBB14C48518(iParam0))
	{
		unk_0xEE032FCCC9029460(iParam0, 1);
	}
	unk_0x2F89329397A277BC(&uVar1);
	unk_0xD9EF65DC6B9C0145(0, iParam0, uParam1->f_335, 262144, 0, 546, -1, uParam1->f_336, 0, 1.25f);
	unk_0xB3E1967E66494060(0, 3000);
	unk_0x301F42EEE3C40328(uVar1);
	unk_0xE1072FA2FECBAD96(iVar0, uVar1);
	unk_0x3A95A0A3221D4208(&uVar1);
	unk_0x54018E3EDDE5D43A(iParam0, uParam1->f_336);
	iLocal_71 = -1;
	uParam1->f_350 = 2;
	return 1;
}

bool func_68(int iParam0)
{
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	if (unk_0x7112137033807390(iParam0, 0))
	{
		return 0;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		if (!unk_0xC085874FDE5FE33A(iParam0))
		{
			return 0;
		}
	}
	return !unk_0xD61D0CA14AE902DF(iParam0, 1);
}

void func_69(var uParam0)
{
	uParam0->f_341 = 1;
	if (Global_71205)
	{
		uParam0->f_362 = unk_0xFFCC7EBF88BDEE54();
	}
	else
	{
		uParam0->f_361 = unk_0xFD34717937104F1C();
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0xBE079F709C76E132())
		{
			return;
		}
	}
}

void func_70(var uParam0, int iParam1)
{
	int iVar0;
	
	uParam0->f_339 = 99;
	func_82(uParam0, 0);
	func_81(uParam0);
	func_80(uParam0);
	func_26(uParam0->f_340, 1);
	func_79(unk_0xA19140A5C42D8715(), 0);
	func_71(&(uParam0->f_51));
	func_71(&(uParam0->f_30));
	func_71(&(uParam0->f_72));
	unk_0x271AF1531073FE9B(unk_0xD4E735F4B6A956AC(), 0);
	unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
	if (Global_71205)
	{
		iVar0 = unk_0x77065AD41B64E946(unk_0xA19140A5C42D8715());
		if (iVar0 != func_25())
		{
			if (Global_2423801[iVar0 /*413*/].f_234 == 1)
			{
				Global_2423801[iVar0 /*413*/].f_234 = 0;
			}
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iParam1))
	{
		func_32(iParam1, 1);
		func_168(iParam1);
		if (unk_0x4C9BACA8D249CB13())
		{
			if (unk_0xB540EEBB14C48518(iParam1))
			{
				unk_0xEE032FCCC9029460(iParam1, 0);
			}
		}
	}
	unk_0x8C15CE28B371C038(uParam0->f_352, uParam0->f_355, 0);
	uParam0->f_348 = 0;
	uParam0->f_349 = 0;
	uParam0->f_358 = 1;
	uParam0->f_341 = 0;
	if (unk_0x2F8EAF18929E1E59("CAR_WASH_SCENE"))
	{
		unk_0x5AD7D03C214BDA88("CAR_WASH_SCENE");
	}
}

void func_71(var uParam0)
{
	func_72(uParam0);
}

void func_72(var uParam0)
{
	uParam0->f_2 = 3;
	func_74(uParam0);
	func_73(&(uParam0->f_3));
}

void func_73(var uParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*uParam0))
	{
		if (unk_0x9298F1014462FC57(*uParam0))
		{
			unk_0xF334C9B245CD323D(*uParam0, 1, 1);
		}
		unk_0xC0AC848E56940C34(uParam0);
	}
}

void func_74(var uParam0)
{
	if (func_78(uParam0->f_2))
	{
		func_76(uParam0);
		func_75(&(uParam0->f_6));
		func_75(&(uParam0->f_5));
		uParam0->f_2 = 0;
	}
}

void func_75(var uParam0)
{
	if (*uParam0 != -1)
	{
		unk_0x5DE59A67B5F326CF(*uParam0);
		unk_0xB4442316D0B880FD(*uParam0);
		*uParam0 = -1;
	}
}

void func_76(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_14)
	{
		func_77(&(uParam0->f_14[iVar0]));
		iVar0++;
	}
}

void func_77(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x059A39F1D399060B(*uParam0))
		{
			unk_0x82E95CCADC55C11E(*uParam0, 0);
		}
		else
		{
			unk_0x2C3DB562E463BBE7(*uParam0, 0);
		}
		*uParam0 = 0;
	}
}

bool func_78(int iParam0)
{
	return !(iParam0 == 0 || iParam0 == 5);
}

void func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x77065AD41B64E946(iParam0);
	if (iVar0 == func_25())
	{
		return;
	}
	if (!func_68(iParam0))
	{
		Global_2423801[iVar0 /*413*/].f_234 = 0;
		return;
	}
	Global_2423801[iVar0 /*413*/].f_234 = iParam1;
}

void func_80(var uParam0)
{
	func_76(&(uParam0->f_51));
	func_76(&(uParam0->f_30));
	func_76(&(uParam0->f_72));
	func_77(&(uParam0->f_120.f_6[0]));
	func_77(&(uParam0->f_120.f_6[1]));
	func_77(&(uParam0->f_93.f_21));
}

void func_81(var uParam0)
{
	func_75(&(uParam0->f_93.f_16));
	func_75(&(uParam0->f_93.f_17));
	func_75(&(uParam0->f_93.f_18));
	func_75(&(uParam0->f_120.f_27));
	func_75(&(uParam0->f_120.f_28));
	func_75(&(uParam0->f_120.f_29));
	func_75(&(uParam0->f_30.f_5));
	func_75(&(uParam0->f_30.f_6));
	func_75(&(uParam0->f_51.f_5));
	func_75(&(uParam0->f_51.f_6));
	func_75(&(uParam0->f_72.f_5));
	func_75(&(uParam0->f_72.f_6));
}

void func_82(var uParam0, int iParam1)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_93.f_19))
	{
		unk_0xDCFB67537602326F(uParam0->f_93.f_19, 1, 0);
	}
	func_168(iParam1);
}

float func_83(var uParam0, int iParam1)
{
	if (!func_5(iParam1))
	{
		return 0f;
	}
	return unk_0x2856D986073DABA5(unk_0xE2BBD32891C18569(iParam1, 1), uParam0->f_14[0 /*3*/], uParam0->f_14[1 /*3*/], 0);
}

float func_84(var uParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	float fVar3;
	
	fVar3 = unk_0x2856D986073DABA5(unk_0xE2BBD32891C18569(iParam1, 1), *(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 0);
	if (fVar3 <= 1f)
	{
		if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iParam1, 0))
		{
			unk_0xD481A812073CCF02(0, 75, 1);
			unk_0xD481A812073CCF02(0, 101, 1);
		}
		if (unk_0xB0D49A1F9F054602(iParam1, -1, 0) == unk_0xA19140A5C42D8715())
		{
			func_110();
		}
		if (unk_0xB540EEBB14C48518(iParam1))
		{
			Var0 = { unk_0x8D0C441B2F86EA3E(unk_0xE2BBD32891C18569(iParam1, 1), *(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 0) };
			if (func_86(iParam1, Var0, 1) < 4f)
			{
				if (fVar3 > 0f)
				{
					func_56(iParam1, 0.005f, (fParam2 * (1f - fVar3)));
				}
			}
		}
	}
	if (unk_0x4C9BACA8D249CB13() == 0)
	{
		func_85(uParam0, iParam1);
	}
	if (unk_0xB540EEBB14C48518(iParam1))
	{
		if ((fVar3 > 0.85f && !uParam0->f_343) && uParam0->f_337 > 0f)
		{
			unk_0x54018E3EDDE5D43A(iParam1, uParam0->f_337);
			uParam0->f_343 = 1;
		}
	}
	return fVar3;
}

void func_85(var uParam0, int iParam1)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_93.f_19))
	{
		unk_0xDE616FF2D2026A26(iParam1, uParam0->f_93.f_19, 1);
		unk_0xDE616FF2D2026A26(uParam0->f_93.f_19, iParam1, 1);
	}
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_120.f_3[0]))
	{
		unk_0xDE616FF2D2026A26(iParam1, uParam0->f_120.f_3[0], 1);
		unk_0xDE616FF2D2026A26(uParam0->f_120.f_3[0], iParam1, 1);
	}
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_120.f_3[1]))
	{
		unk_0xDE616FF2D2026A26(iParam1, uParam0->f_120.f_3[1], 1);
		unk_0xDE616FF2D2026A26(uParam0->f_120.f_3[1], iParam1, 1);
	}
}

float func_86(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		Var0 = { unk_0xE2BBD32891C18569(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xE2BBD32891C18569(iParam0, 0) };
	}
	return unk_0x499324B3EF19C288(Var0, Param1, iParam4);
}

void func_87(var uParam0)
{
	bool bVar0;
	
	bVar0 = true;
	if (Global_71205)
	{
		bVar0 = func_61();
		if (bVar0)
		{
			uParam0->f_347 = unk_0xFD34717937104F1C();
		}
		if (bVar0 == 0 && uParam0->f_360 == 1)
		{
			uParam0->f_120.f_16 = 0f;
			uParam0->f_341 = 0;
		}
	}
	if (unk_0x4C9BACA8D249CB13() && iLocal_72)
	{
		func_108(&(uParam0->f_120), bVar0, uParam0->f_358);
	}
	else
	{
		func_103(&(uParam0->f_120), bVar0, uParam0->f_358);
	}
	if (Global_71205)
	{
		uParam0->f_360 = bVar0;
		if (unk_0xFD34717937104F1C() > uParam0->f_347 + 1500)
		{
			uParam0->f_348 = 0;
			uParam0->f_349 = 0;
			return;
		}
	}
	func_98(&(uParam0->f_93), bVar0);
	func_88(&(uParam0->f_51), bVar0);
	func_88(&(uParam0->f_30), bVar0);
	func_88(&(uParam0->f_72), bVar0);
}

void func_88(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	var uVar10;
	int iVar13;
	int iVar14;
	
	if (!func_331(uParam0->f_3) || *uParam0 == 0)
	{
		return;
	}
	if (func_78(uParam0->f_2))
	{
		if (bParam1 == 0)
		{
			uParam0->f_2 = 5;
		}
		if (unk_0x4C9BACA8D249CB13() && !func_61())
		{
			uParam0->f_2 = 5;
		}
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (unk_0xFD34717937104F1C() > uParam0->f_20 && bParam1 == 1)
			{
				if (uParam0->f_1 == 0)
				{
					if (uParam0->f_19 == 0)
					{
						if (unk_0xFD34717937104F1C() > uParam0->f_20)
						{
							Var1 = { unk_0x3201284584C7CD83(uParam0->f_3, (-uParam0->f_8 * 0.8f), 0f, (-uParam0->f_9 * 0.75f)) };
							Var4 = { unk_0x3201284584C7CD83(uParam0->f_3, (uParam0->f_8 * 0.8f), 0f, (-uParam0->f_9 * 0.75f)) };
							uParam0->f_19 = unk_0x931DC90E31FA1705(Var1, Var4, 2, uParam0->f_3, 4);
							unk_0x341AA026B031328A(uParam0->f_10, uParam0->f_7);
						}
					}
					else
					{
						iVar13 = unk_0x7C00B4755E048785(uParam0->f_19, &uVar0, &Var7, &uVar10, &iVar14);
						if (iVar13 == 2)
						{
							if (func_96(iVar14, 1))
							{
								uParam0->f_2 = 1;
							}
							uParam0->f_20 = (unk_0xFD34717937104F1C() + iLocal_41);
						}
						uParam0->f_19 = 0;
					}
				}
				else
				{
					uParam0->f_20 = (unk_0xFD34717937104F1C() + iLocal_41);
					if (func_94(uParam0->f_10, uParam0->f_7, 1))
					{
						uParam0->f_2 = 1;
						uParam0->f_19 = 0;
					}
				}
			}
			break;
		
		case 1:
			uParam0->f_2 = 3;
			func_92(uParam0, 0);
			unk_0x341AA026B031328A(uParam0->f_10, (uParam0->f_7 * 1.2f));
			uParam0->f_5 = unk_0x7A3ECD08D6D1D554();
			if (uParam0->f_1 == 0)
			{
				unk_0x6020229E34827A69(uParam0->f_5, "SPRAY", uParam0->f_3, "CARWASH_SOUNDS", 0, 0);
			}
			else
			{
				unk_0x6020229E34827A69(uParam0->f_5, "DRYER", uParam0->f_3, "CARWASH_SOUNDS", 0, 0);
			}
			break;
		
		case 3:
			if (bParam1 == 0)
			{
				uParam0->f_2 = 5;
				return;
			}
			if (unk_0x4C9BACA8D249CB13() && !func_61())
			{
				uParam0->f_2 = 5;
				return;
			}
			if (uParam0->f_1 == 0)
			{
				unk_0x341AA026B031328A(uParam0->f_10, (uParam0->f_7 * 1.2f));
				if (uParam0->f_19 == 0)
				{
					if (unk_0xFD34717937104F1C() > uParam0->f_20)
					{
						Var1 = { unk_0x3201284584C7CD83(uParam0->f_3, (-uParam0->f_8 * 0.8f), 0f, (-uParam0->f_9 * 0.75f)) };
						Var4 = { unk_0x3201284584C7CD83(uParam0->f_3, (uParam0->f_8 * 0.8f), 0f, (-uParam0->f_9 * 0.75f)) };
						uParam0->f_19 = unk_0x931DC90E31FA1705(Var1, Var4, 2, uParam0->f_3, 4);
					}
				}
				else
				{
					iVar13 = unk_0x7C00B4755E048785(uParam0->f_19, &uVar0, &Var7, &uVar10, &iVar14);
					if (iVar13 == 2)
					{
						if (!func_96(iVar14, 1))
						{
							uParam0->f_2 = 5;
						}
						else
						{
							if (uParam0->f_6 == -1)
							{
								uParam0->f_6 = unk_0x7A3ECD08D6D1D554();
								unk_0x6020229E34827A69(uParam0->f_6, "SPRAY_CAR", uParam0->f_3, "CARWASH_SOUNDS", 0, 0);
							}
							if (func_91(unk_0xA19140A5C42D8715(), unk_0xB86D86A5DBBC79F0(iVar14), 0))
							{
								func_89(iLocal_41, 64);
							}
						}
						uParam0->f_20 = (unk_0xFD34717937104F1C() + iLocal_41);
					}
					uParam0->f_19 = 0;
				}
				if ((unk_0xE3DA5E98850626D0(unk_0xA19140A5C42D8715()) || unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715())) || (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && !unk_0xEE7E2878CDBA6E58(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0))))
				{
					Var7 = { unk_0x61141C81AF57CBDC(uParam0->f_3, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1)) };
					if ((unk_0x69C0BB7D03EE045D(Var7.f_0) < uParam0->f_8 && unk_0x69C0BB7D03EE045D(Var7.f_1) < 1.2f) && Var7.f_2 < (-uParam0->f_9 * 0.25f))
					{
						unk_0xE6986585677D4D77(unk_0xA19140A5C42D8715(), 3f);
					}
				}
			}
			else if (unk_0xFD34717937104F1C() > uParam0->f_4)
			{
				func_89(iLocal_40, 16);
				if (!func_94(uParam0->f_10, (uParam0->f_7 * 1.25f), 1))
				{
					uParam0->f_2 = 5;
				}
				uParam0->f_4 = (unk_0xFD34717937104F1C() + iLocal_40);
			}
			break;
		
		case 5:
			func_76(uParam0);
			func_75(&(uParam0->f_6));
			func_75(&(uParam0->f_5));
			uParam0->f_2 = 0;
			break;
	}
}

void func_89(int iParam0, int iParam1)
{
	float fVar0;
	
	if (func_64(unk_0xA19140A5C42D8715()))
	{
		fVar0 = (unk_0xBBDA792448DB5A89(iParam1) * fLocal_65);
		fVar0 = func_90(fVar0, 0f, 256f);
		unk_0xB0E737394929E89F(0, iParam0, unk_0xF34EE736CF047844(fVar0));
	}
}

float func_90(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_91(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0) && !unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0xDC5D81351D6A4DDB(uParam1) && !unk_0x7112137033807390(iParam1, 0))
		{
			if (unk_0xE0FD180CD24C0B67(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_92(var uParam0, int iParam1)
{
	if (!func_93(iParam1))
	{
		uParam0->f_13 = iParam1;
	}
	func_76(uParam0);
	func_35(Local_59);
	if (uParam0->f_1 == 0)
	{
		uParam0->f_14[0] = unk_0x8E3AC3DF6783369A(uParam0->f_13, uParam0->f_3, uParam0->f_8, 0f, (-uParam0->f_9 * 0.25f), -Local_56, 1065353216, 0, 0, 0);
		uParam0->f_14[1] = unk_0x8E3AC3DF6783369A(uParam0->f_13, uParam0->f_3, -uParam0->f_8, 0f, (-uParam0->f_9 * 0.25f), Local_56, 1065353216, 0, 0, 0);
		uParam0->f_14[2] = unk_0x8E3AC3DF6783369A(uParam0->f_13, uParam0->f_3, uParam0->f_8, 0f, (-uParam0->f_9 * 0.75f), -Local_56, 1065353216, 0, 0, 0);
		uParam0->f_14[3] = unk_0x8E3AC3DF6783369A(uParam0->f_13, uParam0->f_3, -uParam0->f_8, 0f, (-uParam0->f_9 * 0.75f), Local_56, 1065353216, 0, 0, 0);
	}
	else
	{
		uParam0->f_14[0] = unk_0x8E3AC3DF6783369A(uParam0->f_13, uParam0->f_3, Local_62, 0f, 90f, 0f, 1065353216, 0, 0, 0);
		uParam0->f_14[1] = unk_0x8E3AC3DF6783369A(uParam0->f_13, uParam0->f_3, -1.96f, 0.1f, -2.16f, 0f, 35f, 0f, 1065353216, 0, 0, 0);
		uParam0->f_14[2] = unk_0x8E3AC3DF6783369A(uParam0->f_13, uParam0->f_3, 1.96f, 0.1f, -2.16f, 0f, 145f, 0f, 1065353216, 0, 0, 0);
	}
}

int func_93(var uParam0)
{
	if (unk_0x7032042E5696FFD7(uParam0))
	{
		return 1;
	}
	else if (unk_0x3CAC2741CC1A631F(uParam0, "") || unk_0x3CAC2741CC1A631F(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_94(struct<3> Param0, float fParam3, int iParam4)
{
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && func_95(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), Param0, fParam3))
	{
		return 1;
	}
	if (!unk_0x317672E799676CA5(Param0, fParam3) && iParam4 == 1)
	{
		return 0;
	}
	return unk_0xD3DCB71AF4A2BE13(Param0, fParam3, 0, 1, 0, 0, 0, 0, 1);
}

bool func_95(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xE2BBD32891C18569(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_96(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0xFAC06EE780B57279(iParam0) && func_331(iParam0))
	{
		iVar0 = unk_0xB86D86A5DBBC79F0(iParam0);
		if (bParam1)
		{
			if (!func_68(unk_0xB0D49A1F9F054602(iVar0, -1, 0)))
			{
				return 0;
			}
		}
		if (!func_97(iVar0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_97(int iParam0)
{
	if (!func_331(iParam0))
	{
		return 0;
	}
	return unk_0xAEAF59799C2F26E4(iParam0, "Carwash_Vehicle_Decorator");
}

void func_98(var uParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	float fVar12;
	
	Var9 = { uParam0->f_2 };
	fVar12 = (360f * unk_0x0000000050597EE2());
	Var9.f_2 = uParam0->f_22;
	if (func_78(*uParam0))
	{
		if (bParam1 == 0)
		{
			*uParam0 = 5;
		}
		if (unk_0x4C9BACA8D249CB13() && !func_61())
		{
			*uParam0 = 5;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (Global_71205)
			{
				if (!func_61())
				{
					return;
				}
			}
			if (unk_0x85A65397E2224648(uParam0->f_2, 4f))
			{
				if (uParam0->f_20 == 0)
				{
					if (unk_0xFD34717937104F1C() > uParam0->f_26)
					{
						uParam0->f_20 = unk_0x2655F64CD0F70A6B(uParam0->f_2, uParam0->f_2 - Vector(6f, 0f, 0f), (uParam0->f_15 * 1.2f), 2, uParam0->f_19, 4);
					}
				}
				else
				{
					iVar7 = unk_0x7C00B4755E048785(uParam0->f_20, &uVar0, &uVar1, &uVar4, &iVar8);
					if (iVar7 == 2)
					{
						if (func_96(iVar8, 1))
						{
							*uParam0 = 1;
							func_75(&(uParam0->f_16));
							uParam0->f_16 = unk_0x7A3ECD08D6D1D554();
							unk_0x6020229E34827A69(uParam0->f_16, "BRUSHES_SPINNING", uParam0->f_19, "CARWASH_SOUNDS", 0, 0);
						}
					}
					uParam0->f_20 = 0;
					uParam0->f_26 = (unk_0xFD34717937104F1C() + iLocal_41);
				}
			}
			break;
		
		case 1:
			if (bParam1 == 0)
			{
				*uParam0 = 5;
			}
			else
			{
				uParam0->f_13 = (uParam0->f_13 + fVar12);
				if (uParam0->f_13 >= 360f)
				{
					uParam0->f_13 = 360f;
					*uParam0 = 3;
					func_102(uParam0);
					func_75(&(uParam0->f_17));
					uParam0->f_17 = unk_0x7A3ECD08D6D1D554();
					unk_0x6020229E34827A69(uParam0->f_17, "BRUSHES_MOVE", uParam0->f_19, "CARWASH_SOUNDS", 0, 0);
				}
			}
			if (unk_0x4C9BACA8D249CB13() && !func_61())
			{
				*uParam0 = 5;
			}
			break;
		
		case 3:
			if (bParam1 == 0)
			{
				*uParam0 = 5;
			}
			else if (unk_0xFD34717937104F1C() > uParam0->f_25)
			{
				if (!func_94(Var9, uParam0->f_15, 1))
				{
					func_77(&(uParam0->f_21));
					*uParam0 = 5;
				}
				uParam0->f_25 = (unk_0xFD34717937104F1C() + iLocal_40);
			}
			if (unk_0x4C9BACA8D249CB13() && !func_61())
			{
				*uParam0 = 5;
			}
			break;
		
		case 5:
			uParam0->f_20 = 0;
			func_77(&(uParam0->f_21));
			func_75(&(uParam0->f_18));
			uParam0->f_13 = (uParam0->f_13 - fVar12);
			if (uParam0->f_13 <= 0f)
			{
				uParam0->f_13 = 0f;
				*uParam0 = 0;
				func_75(&(uParam0->f_17));
				func_75(&(uParam0->f_16));
			}
			break;
	}
	uParam0->f_12 = (uParam0->f_12 + (uParam0->f_13 * unk_0x0000000050597EE2()));
	if (uParam0->f_12 > 360f)
	{
		uParam0->f_12 = (uParam0->f_12 - 360f);
	}
	func_99(uParam0);
	unk_0x92DDCF53AA47A63D(uParam0->f_19, uParam0->f_11);
	unk_0x76D3D51F5F66367F(uParam0->f_19, unk_0x288B716F47E9BBBC(uParam0->f_19, 2) + Vector(0f, 0f, uParam0->f_12), 2, 1);
}

void func_99(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	int iVar10;
	int iVar11;
	
	if (!uParam0->f_1 == 1)
	{
		return;
	}
	if (func_78(*uParam0))
	{
		if (uParam0->f_20 == 0)
		{
			if (unk_0xFD34717937104F1C() > uParam0->f_26)
			{
				uParam0->f_20 = unk_0x931DC90E31FA1705(uParam0->f_2, uParam0->f_2 - Vector(5f, 0f, 0f), 2, uParam0->f_19, 4);
				if (uParam0->f_20 == 0)
				{
				}
			}
		}
		else
		{
			iVar10 = unk_0x7C00B4755E048785(uParam0->f_20, &iVar0, &Var4, &uVar7, &iVar11);
			if (iVar10 == 2)
			{
				if (iVar0 > 0)
				{
					if (uParam0->f_22 == 0f)
					{
						uParam0->f_22 = (Var4.f_2 + 0.55f);
					}
					uParam0->f_5 = { Var4 + Local_43 };
					if (uParam0->f_5.f_2 == uParam0->f_22)
					{
						uParam0->f_23 = (uParam0->f_2.f_2 - (0.55f * 1.1f));
					}
					else
					{
						uParam0->f_23 = (uParam0->f_5.f_2 + 0.1f);
						if (func_96(iVar11, 1))
						{
							unk_0xDE616FF2D2026A26(iVar11, uParam0->f_19, 1);
							unk_0xDE616FF2D2026A26(uParam0->f_19, iVar11, 1);
							if (uParam0->f_18 == -1)
							{
								uParam0->f_18 = unk_0x7A3ECD08D6D1D554();
								unk_0x6020229E34827A69(uParam0->f_18, "BRUSHES_HIT_CAR", uParam0->f_19, "CARWASH_SOUNDS", 0, 0);
							}
						}
					}
				}
			}
			uParam0->f_20 = 0;
			uParam0->f_26 = (unk_0xFD34717937104F1C() + iLocal_41);
		}
	}
	else
	{
		func_75(&(uParam0->f_18));
		uParam0->f_23 = uParam0->f_24;
	}
	Var1 = { unk_0xE2BBD32891C18569(uParam0->f_19, 1) };
	if (Var1.f_2 < uParam0->f_23)
	{
		Var1.f_2 = (Var1.f_2 + (uParam0->f_14 * unk_0x0000000050597EE2()));
		if (Var1.f_2 > uParam0->f_23)
		{
			Var1.f_2 = uParam0->f_23;
		}
	}
	if (Var1.f_2 > uParam0->f_23)
	{
		Var1.f_2 = (Var1.f_2 - (uParam0->f_14 * unk_0x0000000050597EE2()));
		if (Var1.f_2 < uParam0->f_23)
		{
			func_89(64, 64);
			Var1.f_2 = uParam0->f_23;
		}
	}
	if (uParam0->f_22 != 0f)
	{
		Var1.f_2 = func_90(Var1.f_2, uParam0->f_22, uParam0->f_24);
	}
	if (!func_101(uParam0->f_8, Var1, 0))
	{
		unk_0x4299736016AECE26(uParam0->f_19, Var1, 1, 0, 0, 1);
	}
	uParam0->f_8 = { Var1 };
	if (bLocal_46 == 1)
	{
		func_100(uParam0->f_2, uParam0->f_2.f_1, (uParam0->f_22 - 0.55f), uParam0->f_15, 0, 0, 255, 255, 32);
		unk_0x79BEC9B6187EBB45(uParam0->f_2, 0.0625f, 0, 0, 255, 255);
		unk_0x29D902B60F2CD9AB(uParam0->f_2, uParam0->f_5 - Local_43, 0, 0, 255, 255);
		unk_0x79BEC9B6187EBB45(uParam0->f_5 - Local_43, 0.03125f, 0, 0, 255, 255);
	}
}

void func_100(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar1 = (360f / unk_0xBBDA792448DB5A89(iParam8));
	Var2 = { Param0 };
	Var5 = { Param0 };
	fVar8 = 0f;
	Var2 = { Param0 };
	Var2.f_0 = (Var2.f_0 + (unk_0x0BADBFA3B172435F((fVar8 - fVar1)) * fParam3));
	Var2.f_1 = (Var2.f_1 + (unk_0xD0FFB162F40A139C((fVar8 - fVar1)) * fParam3));
	iVar0 = 0;
	while (iVar0 <= iParam8)
	{
		Var5 = { Param0 };
		Var5.f_0 = (Var5.f_0 + (unk_0x0BADBFA3B172435F(fVar8) * fParam3));
		Var5.f_1 = (Var5.f_1 + (unk_0xD0FFB162F40A139C(fVar8) * fParam3));
		unk_0x29D902B60F2CD9AB(Var2, Var5, iParam4, iParam5, iParam6, iParam7);
		Var2 = { Var5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

bool func_101(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_102(var uParam0)
{
	func_77(&(uParam0->f_21));
	if (func_331(uParam0->f_19))
	{
		if (!unk_0x059A39F1D399060B(uParam0->f_21))
		{
			uParam0->f_21 = unk_0x8E3AC3DF6783369A("ent_amb_car_wash", uParam0->f_19, 0f, 0f, 0f, Local_53, 1065353216, 0, 0, 0);
		}
	}
}

void func_103(var uParam0, bool bParam1, bool bParam2)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	var uVar15;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	struct<2> Var23;
	struct<2> Var26;
	int iVar29;
	int iVar30;
	float fVar31;
	float fVar32;
	
	fVar3 = (360f * unk_0x0000000050597EE2());
	iVar30 = -1;
	if (!*uParam0 == 1)
	{
		return;
	}
	func_107(uParam0);
	if (func_78(uParam0->f_2))
	{
		if (bParam1 == 0)
		{
			uParam0->f_2 = 5;
		}
		if (unk_0x4C9BACA8D249CB13() && !func_61())
		{
			bParam1 = false;
			uParam0->f_2 = 5;
		}
		if (bParam1 == 0)
		{
			uParam0->f_16 = (uParam0->f_16 - (fVar3 * 2f));
			if (uParam0->f_16 <= 0f)
			{
				uParam0->f_16 = 0f;
				func_75(&(uParam0->f_28));
			}
		}
	}
	else
	{
		uParam0->f_16 = (uParam0->f_16 - (fVar3 * 2f));
		if (uParam0->f_16 <= 0f)
		{
			uParam0->f_16 = 0f;
			func_75(&(uParam0->f_28));
		}
	}
	fVar31 = -1.5f;
	fVar32 = -0.55f;
	if (!bParam2 && uParam0->f_2 != 5)
	{
		if (unk_0xFD34717937104F1C() > uParam0->f_44)
		{
			Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
			uParam0->f_33[0] = func_94(Var0, uParam0->f_21[0], 1);
			Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, uParam0->f_18[1], 0f) };
			uParam0->f_33[1] = func_94(Var0, uParam0->f_21[1], 1);
			uParam0->f_44 = (unk_0xFD34717937104F1C() + iLocal_41);
		}
		if (bLocal_46 == 1)
		{
			Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
			if (uParam0->f_33[0])
			{
				func_100(Var0, uParam0->f_21[0], 0, 255, 0, 255, 32);
			}
			else
			{
				func_100(Var0, uParam0->f_21[0], 255, 0, 0, 255, 32);
			}
			Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, uParam0->f_18[1], 0f) };
			if (uParam0->f_33[1])
			{
				func_100(Var0, uParam0->f_21[1], 0, 255, 0, 255, 32);
			}
			else
			{
				func_100(Var0, uParam0->f_21[1], 0, 0, 255, 255, 32);
			}
			unk_0x29D902B60F2CD9AB(unk_0x3201284584C7CD83(uParam0->f_1, -2.5f, fVar31, 0.5f), unk_0x3201284584C7CD83(uParam0->f_1, 2.5f, fVar31, 0.5f), 0, 0, 255, 255);
			Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, 0f, 0.5f) };
			unk_0x29D902B60F2CD9AB(Var0, Var0 + unk_0xFA0A034A8C86C35E(uParam0->f_1), 0, 0, 255, 255);
		}
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (!bParam2)
			{
				if (bParam1 == 1 && uParam0->f_33[0])
				{
					func_75(&(uParam0->f_27));
					uParam0->f_27 = unk_0x7A3ECD08D6D1D554();
					unk_0x6020229E34827A69(uParam0->f_27, "BRUSHES_SPINNING", uParam0->f_1, "CARWASH_SOUNDS", 0, 0);
					uParam0->f_12[0] = -0.55f;
					uParam0->f_12[1] = 0.55f;
					uParam0->f_31 = 0;
					uParam0->f_2 = 1;
					uParam0->f_46[0] = 0;
					uParam0->f_46[1] = 0;
					uParam0->f_49[0] = 0;
					uParam0->f_49[1] = 0;
				}
			}
			break;
		
		case 1:
			uParam0->f_16 = (uParam0->f_16 + fVar3);
			Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
			iVar29 = unk_0x4C059EBFED753303(Var0, 2f, 0, 2064);
			if (func_96(iVar29, 1))
			{
				unk_0xDE616FF2D2026A26(iVar29, uParam0->f_3[0], 1);
				unk_0xDE616FF2D2026A26(iVar29, uParam0->f_3[1], 1);
			}
			if (uParam0->f_16 >= 360f)
			{
				uParam0->f_16 = 360f;
				func_106(uParam0);
				uParam0->f_28 = unk_0x7A3ECD08D6D1D554();
				unk_0x6020229E34827A69(uParam0->f_28, "BRUSHES_MOVE", uParam0->f_1, "CARWASH_SOUNDS", 0, 0);
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_36 == 0)
			{
				if (bLocal_66)
				{
					Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, -1f, 0f) };
					uParam0->f_36 = unk_0x2655F64CD0F70A6B(Var0, Var0 + Vector(1f, 0f, 0f), 2.5f, 2, 0, 4);
				}
				else
				{
					Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, -3f, fVar31, 0.5f) };
					uParam0->f_36 = unk_0x931DC90E31FA1705(Var0, unk_0x3201284584C7CD83(uParam0->f_1, 0f, fVar31, 0.5f), 2, 0, 7);
				}
				if (uParam0->f_36 == 0)
				{
				}
			}
			else
			{
				iVar11 = unk_0x7C00B4755E048785(uParam0->f_36, &iVar19, &Var12, &uVar15, &iVar10);
				if (iVar11 == 2)
				{
					if (func_96(iVar10, 1))
					{
						uParam0->f_37 = unk_0xB86D86A5DBBC79F0(iVar10);
						if (func_5(uParam0->f_37))
						{
						}
						unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(uParam0->f_37), &Var23, &Var26);
						fVar21 = unk_0x69C0BB7D03EE045D((Var26.f_0 - Var23.f_0));
						if (bLocal_66)
						{
							uParam0->f_12[0] = -((0.55f * 0.75f) + (fVar21 / 2f));
							uParam0->f_12[1] = ((0.55f * 0.75f) + (fVar21 / 2f));
						}
						else
						{
							Var0 = { unk_0x61141C81AF57CBDC(uParam0->f_1, Var12 + unk_0xFA0A034A8C86C35E(uParam0->f_1) * Vector(-fVar31, -fVar31, -fVar31)) };
							uParam0->f_17 = 1.5f;
						}
						if (iVar19 == 0)
						{
							uParam0->f_12[0] = -(0.55f + (fVar21 / 2f));
							uParam0->f_12[1] = (0.55f + (fVar21 / 2f));
						}
						uParam0->f_2 = 3;
						uParam0->f_17 = 1.5f;
						uParam0->f_46[0] = 0;
						uParam0->f_46[1] = 0;
						uParam0->f_49[0] = 0;
						uParam0->f_49[1] = 0;
						uParam0->f_41[0] = unk_0xFD34717937104F1C() + 32;
						uParam0->f_41[1] = unk_0xFD34717937104F1C() + 64;
					}
				}
				uParam0->f_36 = 0;
			}
			break;
		
		case 3:
			if (func_5(uParam0->f_37))
			{
				unk_0xDE616FF2D2026A26(uParam0->f_37, uParam0->f_3[0], 1);
				unk_0xDE616FF2D2026A26(uParam0->f_37, uParam0->f_3[1], 1);
				unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(uParam0->f_37), &Var23, &Var26);
				fVar22 = (unk_0x69C0BB7D03EE045D((Var26.f_1 - Var23.f_1)) / 2f);
				fVar21 = unk_0x69C0BB7D03EE045D((Var26.f_0 - Var23.f_0));
				iVar20 = func_104(unk_0xFA0A034A8C86C35E(uParam0->f_1), unk_0x3201284584C7CD83(uParam0->f_1, 0f, fVar22, 0f), unk_0xE2BBD32891C18569(uParam0->f_37, 1));
				if (iVar20 == 1)
				{
					uParam0->f_12[0] = -0.55f;
					uParam0->f_12[1] = 0.55f;
				}
				else if (bLocal_66)
				{
					uParam0->f_12[0] = -((0.55f * fLocal_42) + (fVar21 / 2f));
					uParam0->f_12[1] = ((0.55f * fLocal_42) + (fVar21 / 2f));
					uParam0->f_17 = 1f;
				}
				else
				{
					iVar18 = 0;
					while (iVar18 < uParam0->f_3)
					{
						Var4 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, fVar32, 0.5f) };
						if (iVar18 == 0)
						{
							Var7 = { unk_0x3201284584C7CD83(uParam0->f_1, -fLocal_75, fVar32, 0.5f) };
						}
						else
						{
							Var7 = { unk_0x3201284584C7CD83(uParam0->f_1, fLocal_75, fVar32, 0.5f) };
						}
						iVar30 = unk_0x4F9AEAB2CC029A5C(uParam0->f_37, "seat_dside_f");
						if (iVar30 != -1)
						{
							Var0 = { unk_0xB31A4B66C16032CC(uParam0->f_37, iVar30) };
							Var4.f_2 = Var0.f_2;
							Var7.f_2 = Var0.f_2;
						}
						if (bLocal_46)
						{
							unk_0x29D902B60F2CD9AB(Var4, Var7, 0, 0, 255, 255);
						}
						if (uParam0->f_38[iVar18] == 0)
						{
							if (unk_0xFD34717937104F1C() > uParam0->f_41[iVar18])
							{
								if (iLocal_73 == 1 || unk_0x22D95AF01E737CA1(uParam0->f_37, 0) != -1)
								{
									uParam0->f_38[iVar18] = unk_0xFC629A9C757A492E(Var7, Var4, fLocal_74, 2, 0, 4);
								}
								else
								{
									uParam0->f_38[iVar18] = unk_0x931DC90E31FA1705(Var7, Var4, 2, 0, 7);
								}
								if (uParam0->f_38[iVar18] == 0)
								{
								}
							}
						}
						else
						{
							iVar11 = unk_0x7C00B4755E048785(uParam0->f_38[iVar18], &iVar19, &Var12, &uVar15, &iVar10);
							if (iVar11 == 2)
							{
								uParam0->f_49[iVar18] = uParam0->f_46[iVar18];
								uParam0->f_46[iVar18] = 0;
								if (iVar19 > 0)
								{
									if (bLocal_46)
									{
										unk_0x79BEC9B6187EBB45(Var12, 0.06625f, 0, 0, 255, 255);
									}
									uParam0->f_46[iVar18] = 1;
								}
								if (func_96(iVar10, 1))
								{
									Var0 = { unk_0x61141C81AF57CBDC(uParam0->f_1, Var12 + unk_0xFA0A034A8C86C35E(uParam0->f_1) * Vector(-fVar32, -fVar32, -fVar32)) };
									uParam0->f_46[iVar18] = 1;
									if (iVar18 == 0)
									{
										uParam0->f_12[iVar18] = (Var0.f_0 - 0.55f);
									}
									else
									{
										uParam0->f_12[iVar18] = (Var0.f_0 + 0.55f);
									}
								}
							}
							uParam0->f_38[iVar18] = 0;
							uParam0->f_41[iVar18] = unk_0xFD34717937104F1C() + 120;
						}
						if (uParam0->f_49[iVar18] != uParam0->f_46[iVar18])
						{
							if (uParam0->f_49[iVar18] == 1 && uParam0->f_46[iVar18] == 0)
							{
							}
							if (uParam0->f_49[iVar18] == 0 && uParam0->f_46[iVar18] == 1)
							{
							}
						}
						iVar18++;
					}
				}
				iVar20 = func_104(unk_0xFA0A034A8C86C35E(uParam0->f_1), unk_0x3201284584C7CD83(uParam0->f_1, 0f, (fVar22 * 1.25f), 0f), unk_0xE2BBD32891C18569(uParam0->f_37, 1));
				if (iVar20 == 1)
				{
					uParam0->f_16 = (uParam0->f_16 - (fVar3 * 2f));
					if (uParam0->f_16 < 0f)
					{
						uParam0->f_16 = 0f;
						func_75(&(uParam0->f_29));
						func_75(&(uParam0->f_27));
						func_77(&(uParam0->f_6[0]));
						func_77(&(uParam0->f_6[1]));
					}
				}
			}
			if (!(uParam0->f_33[0] || uParam0->f_33[1]))
			{
				func_77(&(uParam0->f_6[0]));
				func_77(&(uParam0->f_6[1]));
				uParam0->f_2 = 5;
			}
			break;
		
		case 4:
			if (func_5(uParam0->f_37))
			{
				unk_0xDE616FF2D2026A26(uParam0->f_37, uParam0->f_3[0], 1);
				unk_0xDE616FF2D2026A26(uParam0->f_37, uParam0->f_3[1], 1);
				unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(uParam0->f_37), &Var23, &Var26);
				fVar22 = (unk_0x69C0BB7D03EE045D((Var26.f_1 - Var23.f_1)) / 2f);
				fVar21 = unk_0x69C0BB7D03EE045D((Var26.f_0 - Var23.f_0));
				iVar20 = func_104(unk_0xFA0A034A8C86C35E(uParam0->f_1), unk_0x3201284584C7CD83(uParam0->f_1, 0f, (fVar22 * 1.25f), 0f), unk_0xE2BBD32891C18569(uParam0->f_37, 1));
				if (iVar20 == 1)
				{
					uParam0->f_16 = (uParam0->f_16 - (fVar3 * 2f));
					if (uParam0->f_16 < 0f)
					{
						uParam0->f_16 = 0f;
						func_75(&(uParam0->f_29));
						func_75(&(uParam0->f_27));
						func_77(&(uParam0->f_6[0]));
						func_77(&(uParam0->f_6[1]));
						uParam0->f_2 = 5;
					}
				}
			}
			if (!(uParam0->f_33[0] || uParam0->f_33[1]))
			{
				func_77(&(uParam0->f_6[0]));
				func_77(&(uParam0->f_6[1]));
				uParam0->f_2 = 5;
			}
			break;
		
		case 5:
			func_75(&(uParam0->f_29));
			func_75(&(uParam0->f_27));
			func_77(&(uParam0->f_6[0]));
			func_77(&(uParam0->f_6[1]));
			uParam0->f_16 = (uParam0->f_16 - fVar3);
			uParam0->f_12[0] = -1.75f;
			uParam0->f_12[1] = 1.75f;
			uParam0->f_17 = 1.5f;
			uParam0->f_46[0] = 0;
			uParam0->f_46[1] = 0;
			uParam0->f_49[0] = 0;
			uParam0->f_49[1] = 0;
			if (uParam0->f_16 <= 0f)
			{
				uParam0->f_16 = 0f;
				func_75(&(uParam0->f_28));
			}
			if (unk_0xFD34717937104F1C() > uParam0->f_44)
			{
				if (!func_94(uParam0->f_24, 1f, 1))
				{
					uParam0->f_31 = 1;
					unk_0xDCFB67537602326F(uParam0->f_3[0], uParam0->f_31, 0);
					unk_0xDCFB67537602326F(uParam0->f_3[1], uParam0->f_31, 0);
					uParam0->f_44 = 0;
					uParam0->f_2 = 0;
				}
				else
				{
					uParam0->f_44 = (unk_0xFD34717937104F1C() + iLocal_41);
				}
			}
			break;
	}
}

int func_104(struct<3> Param0, struct<3> Param3, struct<3> Param6)
{
	float fVar0;
	
	fVar0 = func_105(Param6 - Param3, Param0);
	if (fVar0 < 0f)
	{
		return -1;
	}
	else if (fVar0 > 0f)
	{
		return 1;
	}
	return 0;
}

float func_105(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_106(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		func_77(&(uParam0->f_6[iVar0]));
		if (func_331(uParam0->f_3[iVar0]))
		{
			if (!unk_0x059A39F1D399060B(uParam0->f_6[iVar0]))
			{
				uParam0->f_6[iVar0] = unk_0x8E3AC3DF6783369A("ent_amb_car_wash", uParam0->f_3[iVar0], Local_47, Local_50, 1065353216, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_107(var uParam0)
{
	int iVar0;
	float fVar1;
	var uVar2[2];
	
	fVar1 = uParam0->f_15;
	if (uParam0->f_16 >= 360f)
	{
		uParam0->f_16 = 360f;
	}
	if (uParam0->f_16 <= 0f)
	{
		uParam0->f_16 = 0f;
	}
	uParam0->f_15 = (uParam0->f_15 + (uParam0->f_16 * unk_0x0000000050597EE2()));
	if (uParam0->f_15 < 0f)
	{
		uParam0->f_15 = (uParam0->f_15 + 360f);
	}
	if (uParam0->f_15 > 360f)
	{
		uParam0->f_15 = (uParam0->f_15 - 360f);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uVar2[iVar0] = uParam0->f_9[iVar0];
		if (uParam0->f_9[iVar0] < uParam0->f_12[iVar0])
		{
			uParam0->f_9[iVar0] = (uParam0->f_9[iVar0] + (uParam0->f_17 * unk_0x0000000050597EE2()));
			if (uParam0->f_9[iVar0] > uParam0->f_12[iVar0])
			{
				func_89(iLocal_41, 64);
				uParam0->f_9[iVar0] = uParam0->f_12[iVar0];
			}
		}
		if (uParam0->f_9[iVar0] > uParam0->f_12[iVar0])
		{
			uParam0->f_9[iVar0] = (uParam0->f_9[iVar0] - (uParam0->f_17 * unk_0x0000000050597EE2()));
			if (uParam0->f_9[iVar0] < uParam0->f_12[iVar0])
			{
				func_89(iLocal_41, 64);
				uParam0->f_9[iVar0] = uParam0->f_12[iVar0];
			}
		}
		if (uVar2[iVar0] != uParam0->f_9[iVar0])
		{
			unk_0x4299736016AECE26(uParam0->f_3[iVar0], unk_0x3201284584C7CD83(uParam0->f_1, uParam0->f_9[iVar0], 0f, 1.5f), 1, 0, 0, 1);
		}
		if (fVar1 != uParam0->f_15)
		{
			unk_0x92DDCF53AA47A63D(uParam0->f_3[iVar0], uParam0->f_15);
		}
		iVar0++;
	}
}

void func_108(var uParam0, bool bParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<3> Var16;
	var uVar19;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	struct<2> Var26;
	struct<2> Var29;
	
	fVar10 = -1.5f;
	fVar11 = -0.55f;
	fVar22 = (360f * unk_0x0000000050597EE2());
	iVar23 = -1;
	if (!*uParam0 == 1)
	{
		return;
	}
	func_107(uParam0);
	if (func_78(uParam0->f_2))
	{
		if (bParam1 == 0)
		{
			uParam0->f_2 = 5;
		}
		if (unk_0x4C9BACA8D249CB13() && !func_61())
		{
			bParam1 = false;
			uParam0->f_2 = 5;
		}
		if (bParam1 == 0)
		{
			uParam0->f_16 = (uParam0->f_16 - (fVar22 * 2f));
			if (uParam0->f_16 <= 0f)
			{
				uParam0->f_16 = 0f;
				func_75(&(uParam0->f_28));
			}
		}
	}
	else
	{
		uParam0->f_16 = (uParam0->f_16 - (fVar22 * 2f));
		if (uParam0->f_16 <= 0f)
		{
			uParam0->f_16 = 0f;
			func_75(&(uParam0->f_28));
		}
	}
	if (!bParam2 && uParam0->f_2 != 5)
	{
		if (unk_0xFD34717937104F1C() > uParam0->f_44)
		{
			Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
			uParam0->f_33[0] = func_94(Var0, uParam0->f_21[0], 1);
			Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, uParam0->f_18[1], 0f) };
			uParam0->f_33[1] = func_94(Var0, uParam0->f_21[1], 1);
			uParam0->f_44 = (unk_0xFD34717937104F1C() + iLocal_41);
		}
	}
	if (bLocal_46 == 1)
	{
		Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
		if (uParam0->f_33[0])
		{
			func_100(Var0, uParam0->f_21[0], 0, 255, 0, 255, 32);
		}
		else
		{
			func_100(Var0, uParam0->f_21[0], 255, 0, 0, 255, 32);
		}
		Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, uParam0->f_18[1], 0f) };
		if (uParam0->f_33[1])
		{
			func_100(Var0, uParam0->f_21[1], 0, 255, 0, 255, 32);
		}
		else
		{
			func_100(Var0, uParam0->f_21[1], 0, 0, 255, 255, 32);
		}
		unk_0x29D902B60F2CD9AB(unk_0x3201284584C7CD83(uParam0->f_1, -2.5f, fVar10, 0.5f), unk_0x3201284584C7CD83(uParam0->f_1, 2.5f, fVar10, 0.5f), 0, 0, 255, 255);
		Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, 0f, 0.5f) };
		unk_0x29D902B60F2CD9AB(Var0, Var0 + unk_0xFA0A034A8C86C35E(uParam0->f_1), 0, 0, 255, 255);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (!uParam0->f_33[0])
			{
				return;
			}
			if (uParam0->f_36 == 0)
			{
				Var0 = { unk_0x3201284584C7CD83(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
				uParam0->f_36 = unk_0x2655F64CD0F70A6B(Var0, Var0 + Vector(1f, 0f, 0f), 2.25f, 2, 0, 4);
			}
			else
			{
				iVar15 = unk_0x7C00B4755E048785(uParam0->f_36, &iVar13, &Var16, &uVar19, &iVar14);
				if (iVar15 == 2)
				{
					if (func_96(iVar14, 1))
					{
						uVar9 = unk_0xB86D86A5DBBC79F0(iVar14);
						if (func_109(unk_0xFA0A034A8C86C35E(uVar9), unk_0xFA0A034A8C86C35E(uParam0->f_1), 10f))
						{
							Var0 = { unk_0x39D039D3B0625870(iVar9, 1) };
							if (Var0.f_1 <= 0f)
							{
							}
							else
							{
								uParam0->f_2 = 1;
								uParam0->f_37 = iVar9;
								func_75(&(uParam0->f_27));
								uParam0->f_27 = unk_0x7A3ECD08D6D1D554();
								unk_0x6020229E34827A69(uParam0->f_27, "BRUSHES_SPINNING", uParam0->f_1, "CARWASH_SOUNDS", 0, 0);
							}
						}
					}
				}
				uParam0->f_36 = 0;
			}
			break;
		
		case 1:
			uParam0->f_16 = (uParam0->f_16 + fVar22);
			unk_0xDE616FF2D2026A26(uParam0->f_37, uParam0->f_3[0], 1);
			unk_0xDE616FF2D2026A26(uParam0->f_37, uParam0->f_3[1], 1);
			if (func_5(uParam0->f_37))
			{
			}
			if (uParam0->f_16 >= 360f)
			{
				uParam0->f_16 = 360f;
				func_106(uParam0);
				uParam0->f_28 = unk_0x7A3ECD08D6D1D554();
				unk_0x6020229E34827A69(uParam0->f_28, "BRUSHES_MOVE", uParam0->f_1, "CARWASH_SOUNDS", 0, 0);
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			uParam0->f_2 = 3;
			break;
		
		case 3:
			if (!func_96(uParam0->f_37, 1))
			{
				uParam0->f_2 = 4;
				return;
			}
			if (!func_68(unk_0xB0D49A1F9F054602(uParam0->f_37, -1, 0)))
			{
				uParam0->f_2 = 4;
				return;
			}
			if (unk_0x4C9BACA8D249CB13() && !func_61())
			{
				uParam0->f_2 = 4;
				return;
			}
			unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(uParam0->f_37), &Var26, &Var29);
			fVar25 = (unk_0x69C0BB7D03EE045D((Var29.f_1 - Var26.f_1)) / 2f);
			iVar24 = func_104(unk_0xFA0A034A8C86C35E(uParam0->f_1), unk_0x3201284584C7CD83(uParam0->f_1, 0f, fVar25, 0f), unk_0xE2BBD32891C18569(uParam0->f_37, 1));
			if (iVar24 == 1)
			{
				uParam0->f_12[0] = -0.55f;
				uParam0->f_12[1] = 0.55f;
				uParam0->f_2 = 4;
				return;
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_3)
			{
				if (iVar12 == 0)
				{
					Var3 = { unk_0x3201284584C7CD83(uParam0->f_1, 1f, fVar11, 0.5f) };
					Var6 = { unk_0x3201284584C7CD83(uParam0->f_1, -fLocal_75, fVar11, 0.5f) };
				}
				else
				{
					Var3 = { unk_0x3201284584C7CD83(uParam0->f_1, -1f, fVar11, 0.5f) };
					Var6 = { unk_0x3201284584C7CD83(uParam0->f_1, fLocal_75, fVar11, 0.5f) };
				}
				iVar23 = unk_0x4F9AEAB2CC029A5C(uParam0->f_37, "seat_dside_f");
				if (iVar23 != -1)
				{
					Var0 = { unk_0xB31A4B66C16032CC(uParam0->f_37, iVar23) };
					Var3.f_2 = Var0.f_2;
					Var6.f_2 = Var0.f_2;
				}
				if (uParam0->f_38[iVar12] == 0)
				{
					if (unk_0xFD34717937104F1C() > uParam0->f_41[iVar12])
					{
						if (iLocal_73 == 1 || unk_0x22D95AF01E737CA1(uParam0->f_37, 0) != -1)
						{
							uParam0->f_38[iVar12] = unk_0xFC629A9C757A492E(Var6, Var3, fLocal_74, 2, 0, 4);
						}
						else
						{
							uParam0->f_38[iVar12] = unk_0x931DC90E31FA1705(Var6, Var3, 2, 0, 7);
						}
						if (uParam0->f_38[iVar12] == 0)
						{
						}
					}
				}
				else
				{
					iVar15 = unk_0x7C00B4755E048785(uParam0->f_38[iVar12], &iVar13, &Var16, &uVar19, &iVar14);
					if (iVar15 == 2)
					{
						uParam0->f_49[iVar12] = uParam0->f_46[iVar12];
						uParam0->f_46[iVar12] = 0;
						if (iVar13 > 0)
						{
							unk_0x79BEC9B6187EBB45(Var16, 0.06625f, 0, 0, 255, 255);
							uParam0->f_46[iVar12] = 1;
						}
						if (func_96(iVar14, 1))
						{
							Var0 = { unk_0x61141C81AF57CBDC(uParam0->f_1, Var16 + unk_0xFA0A034A8C86C35E(uParam0->f_1) * Vector(-fVar11, -fVar11, -fVar11)) };
							if (iVar12 == 0)
							{
								uParam0->f_12[iVar12] = (Var0.f_0 - 0.55f);
							}
							else
							{
								uParam0->f_12[iVar12] = (Var0.f_0 + 0.55f);
							}
						}
					}
					uParam0->f_38[iVar12] = 0;
					uParam0->f_41[iVar12] = unk_0xFD34717937104F1C() + 120;
				}
				if (uParam0->f_49[iVar12] != uParam0->f_46[iVar12])
				{
					if (uParam0->f_49[iVar12] == 1 && uParam0->f_46[iVar12] == 0)
					{
					}
					if (uParam0->f_49[iVar12] == 0 && uParam0->f_46[iVar12] == 1)
					{
					}
				}
				iVar12++;
			}
			unk_0xDE616FF2D2026A26(uParam0->f_37, uParam0->f_3[0], 1);
			unk_0xDE616FF2D2026A26(uParam0->f_37, uParam0->f_3[1], 1);
			if (bParam2)
			{
				uParam0->f_2 = 4;
				return;
			}
			break;
		
		case 4:
			uParam0->f_37 = 0;
			uParam0->f_12[0] = (-uParam0->f_30 / 2f);
			uParam0->f_12[1] = (uParam0->f_30 / 2f);
			uParam0->f_16 = (uParam0->f_16 - fVar22);
			if (uParam0->f_16 <= 0f)
			{
				uParam0->f_16 = 0f;
				func_75(&(uParam0->f_29));
				func_75(&(uParam0->f_27));
				func_77(&(uParam0->f_6[0]));
				func_77(&(uParam0->f_6[1]));
			}
			if ((uParam0->f_12[0] == uParam0->f_9[0] && uParam0->f_12[1] == uParam0->f_9[1]) && uParam0->f_16 == 0f)
			{
				func_75(&(uParam0->f_28));
				uParam0->f_2 = 5;
			}
			break;
		
		case 5:
			func_75(&(uParam0->f_28));
			func_75(&(uParam0->f_29));
			func_75(&(uParam0->f_27));
			func_77(&(uParam0->f_6[0]));
			func_77(&(uParam0->f_6[1]));
			uParam0->f_12[0] = (-uParam0->f_30 / 2f);
			uParam0->f_12[1] = (uParam0->f_30 / 2f);
			uParam0->f_17 = 1.5f;
			if (unk_0xFD34717937104F1C() > uParam0->f_44)
			{
				if (!func_94(uParam0->f_24, 1f, 1))
				{
					uParam0->f_31 = 1;
					uParam0->f_44 = 0;
					uParam0->f_2 = 0;
				}
				else
				{
					uParam0->f_44 = (unk_0xFD34717937104F1C() + iLocal_41);
				}
			}
			break;
	}
}

bool func_109(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return unk_0x4CDDB4DE3FF7BBC4(func_105(Param3, Param0)) <= fParam6;
}

void func_110()
{
	unk_0xD481A812073CCF02(0, 101, 1);
	unk_0xD481A812073CCF02(0, 75, 1);
	unk_0xD481A812073CCF02(0, 74, 1);
	unk_0xD481A812073CCF02(0, 225, 1);
	unk_0xD481A812073CCF02(0, 69, 1);
	unk_0xD481A812073CCF02(0, 70, 1);
	unk_0xD481A812073CCF02(0, 91, 1);
	unk_0xD481A812073CCF02(0, 92, 1);
	func_112();
	if (!Global_71205)
	{
		func_111();
	}
}

void func_111()
{
	Global_17228.f_6 = 1;
}

void func_112()
{
	unk_0xD481A812073CCF02(0, 21, 1);
	unk_0xD481A812073CCF02(0, 37, 1);
	unk_0xD481A812073CCF02(0, 25, 1);
	unk_0xD481A812073CCF02(0, 141, 1);
	unk_0xD481A812073CCF02(0, 140, 1);
	unk_0xD481A812073CCF02(0, 24, 1);
	unk_0xD481A812073CCF02(0, 257, 1);
	unk_0xD481A812073CCF02(0, 22, 1);
	unk_0xD481A812073CCF02(0, 23, 1);
}

void func_113(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_71205)
	{
		func_127(15, 1);
	}
	else
	{
		uVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (func_331(uVar0))
		{
			if (unk_0xB0D49A1F9F054602(uVar0, -1, 0) == unk_0xA19140A5C42D8715())
			{
				iVar2 = 15;
				if (!unk_0xDD38C9BE3BA698E1(iVar2, 0, 0, 1, &iVar3, -1))
				{
					iVar2 = (iVar2 - iVar3);
					if (iVar2 <= 0)
					{
						return;
					}
				}
				if (func_126())
				{
					func_114(1182673174, iVar2, &iVar1, 0, 0, 1);
					Global_4262927[iVar1 /*80*/] = unk_0x8F474E419F56E48D(iVar0);
					Global_4262927[iVar1 /*80*/].f_1 = iParam0;
				}
				else
				{
					unk_0x6FDFAFE114E8B835(iVar2, unk_0x8F474E419F56E48D(iVar0), iParam0, 0, 1);
				}
			}
		}
	}
}

void func_114(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_126())
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
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_115(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_115(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_115(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_115(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_115(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_126())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_10()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262927[iVar2 /*80*/].f_61.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xEC103C948D1D3BEF(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar4))
		{
			*uParam0 = func_122(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262927[*uParam0 /*80*/].f_61.f_8 = 1;
					Global_4262927[*uParam0 /*80*/].f_61.f_12 = 1;
				}
			}
			Global_4263464 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4263477 = 1;
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_121(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_116(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_116(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_117(iParam0);
	}
}

void func_117(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_126())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_120(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_4262927[iParam0 /*80*/].f_61);
		}
		func_118(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_118(var uParam0)
{
	uParam0->f_61 = 0;
	uParam0->f_61 = 2147483647;
	uParam0->f_61.f_1 = 0;
	uParam0->f_61.f_2 = 0;
	uParam0->f_61.f_3 = -1593119440;
	uParam0->f_61.f_4 = -2085313189;
	uParam0->f_61.f_5 = 0;
	uParam0->f_61.f_6 = 1227573907;
	uParam0->f_61.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_119(&(uParam0->f_13));
	func_119(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_61.f_8 = 0;
	uParam0->f_61.f_9 = 0;
	uParam0->f_61.f_10 = 0;
	uParam0->f_61.f_11 = 0;
	uParam0->f_61.f_13 = 0;
	uParam0->f_61.f_12 = 0;
	uParam0->f_61.f_14 = 0;
	uParam0->f_61.f_15 = 0;
	uParam0->f_61.f_16 = 0;
	uParam0->f_61.f_18 = 0;
}

void func_119(var uParam0)
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

int func_120(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_121(int iParam0, var uParam1)
{
	Global_2460521 = uParam1;
	Global_2460520 = iParam0;
}

int func_122(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_126())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262927[iVar0 /*80*/].f_61.f_2 = 1;
			Global_4262927[iVar0 /*80*/].f_61.f_1 = uParam5;
			Global_4262927[iVar0 /*80*/].f_61.f_3 = iParam1;
			Global_4262927[iVar0 /*80*/].f_61.f_4 = uParam2;
			Global_4262927[iVar0 /*80*/].f_61.f_7 = uParam3;
			Global_4262927[iVar0 /*80*/].f_61.f_5 = 0;
			Global_4262927[iVar0 /*80*/].f_61 = iParam0;
			Global_4262927[iVar0 /*80*/].f_61.f_6 = iParam4;
			Global_4262927[iVar0 /*80*/].f_61.f_11 = uParam8;
			Global_4262927[iVar0 /*80*/].f_61.f_10 = uParam7;
			Global_4262927[iVar0 /*80*/].f_61.f_13 = iParam9;
			Global_4262927[iVar0 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar0 /*80*/].f_61.f_14 = unk_0x817B152F7462D506();
			Global_4262927[iVar0 /*80*/].f_61.f_18 = 0;
			Global_4263464 = 0;
			if (bParam6)
			{
				Global_4262927[iVar0 /*80*/].f_61.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_123(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_123(struct<62> Param0, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)
{
	struct<3> Var0;
	int iVar35;
	
	if (iParam80 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -313275313;
	Var0.f_1 = unk_0xD4E735F4B6A956AC();
	Var0.f_2 = { Param0.f_61 };
	Var0.f_2.f_32 = iParam80;
	iVar35 = func_125(Var0.f_1);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_124();
		unk_0x04F37AFC39D93909(1, &Var0, 35, iVar35);
	}
}

void func_124()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

var func_125(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

int func_126()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x4C9BACA8D249CB13())
	{
		iVar0 = func_165(unk_0xD4E735F4B6A956AC());
		if (iVar0 > 0)
		{
			if (iVar0 >= iParam0)
			{
				func_163(-iParam0, 1, 1, 0);
			}
			else
			{
				func_163(-iVar0, 1, 1, 0);
			}
		}
	}
	else
	{
		func_128(func_158(), iParam1, iParam0);
	}
}

int func_128(int iParam0, int iParam1, int iParam2)
{
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_129(Global_106070.f_28022[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_157();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_156(99, 1);
					func_155(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_155(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_155(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_140(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_136(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_155(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_155(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_155(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_136(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_155(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_155(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_155(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_155(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_155(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_155(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_155(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_155(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_155(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xB09979570758BDAD())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_155(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_155(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_155(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_155(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_155(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_155(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_136(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_155(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_155(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_155(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_155(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_155(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_155(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_135(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_156(95, iParam3);
					break;
				
				case 1:
					func_156(97, iParam3);
					break;
				
				case 2:
					func_156(96, iParam3);
					break;
			}
			func_156(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_132(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_132(iVar1);
	}
	iVar5 = (Global_53355[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53355[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53355[iVar2] = 2147483647;
				}
				else
				{
					Global_53355[iVar2] = (Global_53355[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_155(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_155(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_155(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53355[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53355[iVar2];
			Global_53355[iVar2] = (Global_53355[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106070.f_20536.f_233[iVar2 /*69*/]++;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_1++;
		if (Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_131(iParam0);
	if (Global_36117 == 15)
	{
		func_130(0);
	}
	return 1;
}

void func_130(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53363[iVar0 /*3*/][0] = Global_106070.f_20536[iVar0];
		Global_53363.f_31[iVar0 /*3*/][0] = Global_106070.f_20536.f_11[iVar0];
		Global_53363.f_62[iVar0 /*3*/][0] = Global_106070.f_20536.f_22[iVar0];
		Global_53363.f_93[iVar0 /*3*/][0] = Global_106070.f_20536.f_33[iVar0];
		Global_53363.f_124[iVar0 /*3*/][0] = Global_106070.f_20536.f_44[iVar0];
		Global_53363.f_155[iVar0 /*3*/][0] = Global_106070.f_20536.f_55[iVar0];
		Global_53363.f_186[iVar0 /*3*/][0] = Global_106070.f_20536.f_66[iVar0];
		Global_53363.f_217[iVar0 /*3*/][0] = Global_106070.f_20536.f_77[iVar0];
		Global_53363.f_248[iVar0 /*3*/][0] = Global_106070.f_20536.f_88[iVar0];
		if (!bParam0)
		{
			Global_53363[iVar0 /*3*/][1] = Global_106070.f_20536[iVar0];
			Global_53363.f_31[iVar0 /*3*/][1] = Global_106070.f_20536.f_11[iVar0];
			Global_53363.f_62[iVar0 /*3*/][1] = Global_106070.f_20536.f_22[iVar0];
			Global_53363.f_93[iVar0 /*3*/][1] = Global_106070.f_20536.f_33[iVar0];
			Global_53363.f_124[iVar0 /*3*/][1] = Global_106070.f_20536.f_44[iVar0];
			Global_53363.f_155[iVar0 /*3*/][1] = Global_106070.f_20536.f_55[iVar0];
			Global_53363.f_186[iVar0 /*3*/][1] = Global_106070.f_20536.f_66[iVar0];
			Global_53363.f_217[iVar0 /*3*/][1] = Global_106070.f_20536.f_77[iVar0];
			Global_53363.f_248[iVar0 /*3*/][1] = Global_106070.f_20536.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53355[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x93180BE33E7149EF(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x93180BE33E7149EF(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x93180BE33E7149EF(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_132(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_23(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_23(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_23(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_23(137, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0) || unk_0x05EFB6A616B6FADE(Global_2097152[func_134() /*12745*/].f_8178.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		unk_0xFA57C719261AA55D(&(Global_2097152[func_134() /*12745*/].f_8178.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x59FF6261546DDD52("COUP_RED");
		unk_0x4FDA9E6EF359F8A9(func_133(iParam0));
		unk_0x595B8132C1F20265(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		default:
	}
	return "";
}

int func_134()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_135(int iParam0)
{
	func_156(93, iParam0);
	func_156(29, iParam0);
	func_156(30, iParam0);
}

bool func_136(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_137(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_137(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_137(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_137(137, -1, -1);
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0);
	}
	return unk_0x05EFB6A616B6FADE(Global_2097152[func_134() /*12745*/].f_8178.f_10, iParam0);
}

int func_137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_10();
	}
	iVar1 = func_139(iParam0, iParam1);
	uVar2 = func_138(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_10();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_140(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x16E6CF5D5B848918(27))
	{
		return 0;
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x2AD48F3CEBA882E9(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x93180BE33E7149EF(joaat("num_cash_spent"), iVar1, 1);
		func_22(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_141(27, 1);
	return 1;
}

int func_141(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_142(iParam0, iParam1);
}

int func_142(int iParam0, int iParam1)
{
	if (func_154(14) && !func_153(iParam0))
	{
		return 0;
	}
	if (unk_0x16E6CF5D5B848918(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25706 != 0 && !Global_71205)
	{
		return 0;
	}
	if (func_152(&Global_4268566))
	{
		if (func_150(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_143(&Global_4268566, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xFA4FDE2EBD31459D(iParam0))
		{
			return 0;
		}
		if (unk_0x16E6CF5D5B848918(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_143(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_154(14) && !func_153(iParam1))
	{
		return 0;
	}
	if (func_150(uParam0, iParam1))
	{
		return 0;
	}
	if (func_149(uParam0) < 0f)
	{
		func_148(uParam0, 0);
	}
	func_146(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_144(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_144(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_154(14) && !func_153(iParam1))
	{
		return 0;
	}
	if (func_150(uParam0, iParam1))
	{
		return 0;
	}
	if (func_149(uParam0) < 0f)
	{
		func_148(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_145(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_145(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_146(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_147(uParam0, iVar0);
		iVar0++;
	}
	func_148(uParam0, (Global_4268565 - 0.5f));
}

void func_147(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_148(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_149(var uParam0)
{
	return uParam0->f_80;
}

bool func_150(var uParam0, int iParam1)
{
	return func_151(uParam0, iParam1) != -1;
}

int func_151(var uParam0, int iParam1)
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

bool func_152(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_153(int iParam0)
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

bool func_154(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_155(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x93180BE33E7149EF(iParam0, iVar0, 1);
}

void func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/])
	{
		unk_0x2AD48F3CEBA882E9(Global_51923[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x93180BE33E7149EF(Global_51923[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_157()
{
	int iVar0;
	
	if (unk_0xC29B8FF8374918FD())
	{
		unk_0x2AD48F3CEBA882E9(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53355[0] == iVar0)
		{
			Global_53355[0] = iVar0;
		}
		unk_0x2AD48F3CEBA882E9(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53355[1] == iVar0)
		{
			Global_53355[1] = iVar0;
		}
		unk_0x2AD48F3CEBA882E9(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53355[2] == iVar0)
		{
			Global_53355[2] = iVar0;
		}
	}
}

int func_158()
{
	func_159();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_159()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_162(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_161(unk_0xA19140A5C42D8715());
			if (func_160(iVar0) && (!func_154(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_160(Global_106070.f_2355.f_539.f_4301))
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

bool func_160(int iParam0)
{
	return iParam0 < 3;
}

int func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(uParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_162(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_162(int iParam0)
{
	if (func_160(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_163(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_4 = iVar1;
	Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_3 = (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_164(iVar1, 0);
	}
}

void func_164(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

var func_165(int iParam0)
{
	var uVar0;
	
	uVar0 = func_166(iParam0);
	return uVar0;
}

int func_166(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return unk_0xCCADB536D2A7894D(-1);
		}
		else if (func_167(iParam0))
		{
			return Global_1589747[iParam0 /*790*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_2437022.f_1, iParam0);
	}
	return 1;
}

void func_168(int iParam0)
{
	if (!func_5(iParam0))
	{
		return;
	}
	if (unk_0x048D67718BE95EFE(iParam0))
	{
		unk_0x66B55FD5AB9DEACD(iParam0);
	}
	if (unk_0xAEAF59799C2F26E4(iParam0, "Carwash_Vehicle_Decorator"))
	{
		unk_0x6F487A41E8897BBD(iParam0, "Carwash_Vehicle_Decorator");
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0xB540EEBB14C48518(iParam0))
		{
			unk_0xEE032FCCC9029460(iParam0, 0);
		}
	}
}

int func_169(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (!func_331(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xB0D49A1F9F054602(iParam0, -1, 0);
	if (!func_331(iParam0))
	{
		return 0;
	}
	if (unk_0x0F3E411830C671BC(iParam0))
	{
	}
	if (unk_0xEF6267624B1C9336(iParam0, 1))
	{
	}
	if (unk_0x429D45A6C6520026(uParam1->f_335))
	{
		func_171(iParam0, uParam1, 0f, uParam1->f_336);
		return 0;
	}
	if (!unk_0xF8882C5CDED0257A(uParam1->f_335))
	{
	}
	if (Global_71205)
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 512);
		if (unk_0xB540EEBB14C48518(iParam0))
		{
			unk_0xEE032FCCC9029460(iParam0, 1);
		}
	}
	unk_0xC53974682AC939A9(iParam0, 0);
	unk_0x9568B1B58F78FF36(iVar0);
	unk_0xE192BEF245E3374D(iParam0, 0f, 0f, 0f);
	uParam1->f_350 = 2;
	unk_0x2F89329397A277BC(&uVar1);
	if (iParam2 > 0)
	{
		unk_0xB3E1967E66494060(0, iParam2);
		uParam1->f_350++;
	}
	unk_0xD9EF65DC6B9C0145(0, iParam0, uParam1->f_335, 262144, 0, 546, -1, uParam1->f_336, 0, 1.25f);
	unk_0xB3E1967E66494060(0, 3000);
	unk_0x301F42EEE3C40328(uVar1);
	unk_0xE1072FA2FECBAD96(iVar0, uVar1);
	unk_0x3A95A0A3221D4208(&uVar1);
	unk_0x54018E3EDDE5D43A(iParam0, uParam1->f_336);
	iLocal_71 = -1;
	uParam1->f_358 = 0;
	func_170();
	unk_0x8B7498681D30D82E(iParam0, 0.2f, 1000, 0, 0, 0, -1);
	if (!unk_0xAEAF59799C2F26E4(iParam0, "Carwash_Vehicle_Decorator"))
	{
		unk_0x305AD237D017041C(iParam0, "Carwash_Vehicle_Decorator", 1);
	}
	func_69(uParam1);
	return 1;
}

void func_170()
{
	var uVar0;
	var uVar3;
	
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)), &uVar0, &uVar3);
		if (func_5(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
		{
		}
	}
}

void func_171(int iParam0, var uParam1, float fParam2, float fParam3)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	
	Var0 = { func_174(*(uParam1[0 /*3*/]), *(uParam1[1 /*3*/]), fParam2, 0) };
	uVar3 = func_173(*(uParam1[0 /*3*/]), *(uParam1[1 /*3*/]), 1);
	func_172(iParam0, Var0 + Vector(0.1f, 0f, 0f));
	unk_0x92DDCF53AA47A63D(iParam0, uVar3);
	unk_0xB29E08C7AB729BAD(iParam0, 0);
	if (fParam3 == 0f)
	{
		return;
	}
	unk_0xC19EDC1D7179164C(iParam0, 1, 1, 0);
	if (fParam2 > 1f)
	{
		return;
	}
	unk_0x625FB4B0328423D9(iParam0, fParam3);
	uVar4 = unk_0xB0D49A1F9F054602(iParam0, -1, 0);
	if (!func_68(uVar4))
	{
		return;
	}
	Var0 = { func_174(*(uParam1[0 /*3*/]), *(uParam1[1 /*3*/]), 1.1f, 0) };
	unk_0xE49301B2B6F420DE(uVar4, iParam0, Var0, fParam3, 0, unk_0x8F474E419F56E48D(iParam0), 262144, 0.5f, 1000f);
}

Vector3 func_172(int iParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0x8F7BA8E028ADF980(Param1, &uVar0, 0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_331(iParam0))
	{
		unk_0x4299736016AECE26(iParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

float func_173(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xA0844D842FD4B009(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

Vector3 func_174(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		fParam6 = func_90(fParam6, 0f, 1f);
	}
	return Param0 + Vector(fParam6, fParam6, fParam6) * Param3 - Param0;
}

void func_175()
{
	struct<3> Var0;
	float fVar3;
	
	func_204(&Local_76, -700.1f, -922.2f, 18.4f, -700.1f, -943.6f, 18.7f);
	func_203(&Local_76, -700.1f, -926.6f, 18.7f, -699.9344f, -939.5706f, 18.01449f);
	func_202(&Local_76, -699.9368f, -940.4027f, 20f, -699.8781f, -926.0388f, 20f);
	func_201(-701.15f, -947.1219f, 18.49169f, 6.2f, &(Local_76.f_352), &(Local_76.f_355));
	func_200(&Local_76, "carwash2_r");
	Local_76.f_338 = 0.6f;
	Local_76.f_351 = 2;
	Local_76.f_21 = { -700.0682f, -921.149f, 18.7028f };
	Local_76.f_337 = 4f;
	func_196(&(Local_76.f_172[0 /*23*/]), -701.0261f, -918.9723f, 21.3734f, 1.9948f, 0f, -121.2536f, -701.1696f, -918.9987f, 20.313f, -2.3997f, 0f, -166.3155f, func_59(Global_71205, 5000, 8500), 0);
	func_195(&(Local_76.f_172[0 /*23*/]), 50f, 0);
	func_194(&(Local_76.f_172[0 /*23*/]), 0.105457f);
	func_196(&(Local_76.f_172[1 /*23*/]), -701.5583f, -942.6389f, 20.2026f, -4.1156f, 0f, -23.5382f, -698.8515f, -942.399f, 20.1769f, -4.1156f, 0f, 16.0096f, 8500, 0);
	func_195(&(Local_76.f_172[1 /*23*/]), 50f, 0);
	func_194(&(Local_76.f_172[1 /*23*/]), 0.74f);
	func_331(unk_0xA19140A5C42D8715());
	if (!Global_71205)
	{
		func_193();
	}
	func_196(&(Local_76.f_172[6 /*23*/]), -699.0652f, -951.9319f, 18.9507f, 7.8579f, 0f, 8.784f, -698.65f, -952.932f, 19.26f, 0.7437f, 0f, 23.8817f, 7200, 0.45f);
	func_195(&(Local_76.f_172[6 /*23*/]), 40.022f, 0);
	Var0 = { unk_0x505186370955851F(unk_0xA19140A5C42D8715(), 31086, 0f, 0f, 0f) };
	if (unk_0x8F7BA8E028ADF980(Var0, &fVar3, 0, 0) && (Var0.f_2 - fVar3) > 1.35f)
	{
		Local_76.f_342 = 1;
	}
	if (!Global_71205)
	{
		func_34(&(Local_76.f_172[0 /*23*/]), &(Local_76.f_340), Local_76.f_342, 1, 1, 1);
	}
	func_192(&Local_76, 190);
	if (unk_0x4C9BACA8D249CB13())
	{
		func_191(&uLocal_439, Local_76.f_335);
	}
	else
	{
		func_184(&uLocal_439, Local_76.f_335);
	}
	func_183(&(Local_76.f_30), -699.97f, -927.7f, 20.8279f, 0f, 4.85f, 0, 0.3f);
	func_182(&(Local_76.f_30), "ent_amb_car_wash_jet_soap");
	func_181(60);
	func_180(&(Local_76.f_120), -699.97f, -935f, 17.9f, 180f, 3.6f, 0.2f);
	func_179(&(Local_76.f_93), -699.97f, -931.7f, 21.3f, 0f, 18.56449f);
	func_181(60);
	func_183(&(Local_76.f_51), -699.97f, -938.8f, 20.8279f, 180f, 4.85f, 0, 0.3f);
	func_182(&(Local_76.f_51), "ent_amb_car_wash_jet");
	func_181(60);
	func_176(&uLocal_439);
	unk_0x66E6A13BAFFFB63C("DRIVE", 0);
	unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_DRIVE_SOLO", 0);
	if (unk_0x4C9BACA8D249CB13())
	{
	}
}

void func_176(var uParam0)
{
	func_177(uParam0, 0);
	func_177(uParam0, 1);
	func_177(uParam0, 2);
}

int func_177(var uParam0, int iParam1)
{
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_114, iParam1) || (*uParam0)[iParam1 /*7*/] == 0)
	{
		return 1;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 1:
			if (unk_0x6028A581C9B817E3((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x1742AAA700C40086((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 2:
			if (unk_0x39C2D9AB77873F84((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x4DC885EA8D6AF7FC((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 3:
			if (unk_0xD0BEBF116142CB02((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xD37292AE1958B4F3((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 4:
			unk_0x2220B21A4CC075AC();
			break;
		
		case 5:
			break;
		
		case 6:
			if (unk_0x7FC99CCC73354033((uParam0[iParam1 /*7*/])->f_1))
			{
				unk_0xA5DE74AE39867B03((uParam0[iParam1 /*7*/])->f_1);
			}
			break;
		
		case 7:
			if (unk_0x5488D97A1366CE04())
			{
				unk_0xCF2B4C5AF45D129E();
			}
			break;
		
		case 8:
			if (unk_0xD744813D9841CA9A((uParam0[iParam1 /*7*/])->f_5))
			{
				unk_0x93DA13E8C75A3B00((uParam0[iParam1 /*7*/])->f_5, 0);
			}
			break;
		
		case 9:
			if (unk_0x87DF091EDFE6D083((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x91DE928AD81C6F57((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 10:
			if (unk_0x6F4A062113883115((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xD2BB05DE6C584878((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 11:
			if (unk_0xF8882C5CDED0257A((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xDC253F6738C56280((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 12:
			if (unk_0x86FB195D8E9C4FAB((uParam0[iParam1 /*7*/])->f_2))
			{
				unk_0xA09839556BE19A0B((uParam0[iParam1 /*7*/])->f_2);
			}
			break;
		
		default:
			return 0;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 12:
			break;
		
		default:
			break;
	}
	func_178(uParam0[iParam1 /*7*/]);
	return 1;
}

void func_178(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

void func_179(var uParam0, struct<3> Param1, float fParam4, float fParam5)
{
	float fVar0;
	
	uParam0->f_2 = { Param1 };
	uParam0->f_19 = unk_0xFCFC8CC5FF74580D(joaat("prop_carwash_roller_horz"), Param1, 0, 1, 0);
	uParam0->f_5 = { Param1 };
	uParam0->f_23 = Param1.f_2;
	uParam0->f_24 = Param1.f_2;
	uParam0->f_11 = fParam4;
	uParam0->f_1 = 1;
	uParam0->f_25 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(1, iLocal_40));
	uParam0->f_26 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(2, iLocal_41));
	uParam0->f_15 = 1.25f;
	if (fParam5 == 0f)
	{
		if (unk_0x8F7BA8E028ADF980(Param1, &fVar0, 0, 0))
		{
			if (fVar0 != 0f && fVar0 != -200f)
			{
				uParam0->f_22 = (fVar0 + 0.55f);
			}
		}
	}
	else
	{
		uParam0->f_22 = fParam5;
	}
	if (func_331(uParam0->f_19))
	{
		unk_0x92DDCF53AA47A63D(uParam0->f_19, fParam4);
		unk_0xB29E08C7AB729BAD(uParam0->f_19, 1);
		unk_0xDCFB67537602326F(uParam0->f_19, 1, 0);
		unk_0x33CF95E95A476FB9(uParam0->f_19, 1);
	}
	func_98(uParam0, 1);
}

void func_180(var uParam0, struct<3> Param1, float fParam4, float fParam5, float fParam6)
{
	var uVar0;
	struct<3> Var1;
	
	if (unk_0x8F7BA8E028ADF980(Param1 + Vector(0.3f, 0f, 0f), &uVar0, 0, 0))
	{
	}
	uParam0->f_24 = { Param1 };
	uParam0->f_30 = fParam5;
	Param1.f_2 = (Param1.f_2 + fParam6);
	uParam0->f_24 = { Param1 };
	uParam0->f_1 = unk_0xFCFC8CC5FF74580D(joaat("prop_ld_test_01"), Param1, 0, 1, 0);
	if (func_5(uParam0->f_1))
	{
		unk_0xB29E08C7AB729BAD(uParam0->f_1, 1);
		unk_0xE8B3104D1CB25CDC(uParam0->f_1, Param1, 0, 0, 1);
		unk_0x92DDCF53AA47A63D(uParam0->f_1, fParam4);
		unk_0xDCFB67537602326F(uParam0->f_1, 0, 0);
	}
	Var1 = { unk_0x3201284584C7CD83(uParam0->f_1, (-fParam5 / 2f), 0f, 1.5f) };
	uParam0->f_3[0] = unk_0xFCFC8CC5FF74580D(joaat("prop_carwash_roller_vert"), Var1, 0, 1, 0);
	uParam0->f_12[0] = (-fParam5 / 2f);
	uParam0->f_9[0] = (-fParam5 / 2f);
	unk_0xB29E08C7AB729BAD(uParam0->f_3[0], 1);
	unk_0xDCFB67537602326F(uParam0->f_3[0], 1, 0);
	unk_0x33CF95E95A476FB9(uParam0->f_3[0], 1);
	unk_0x0AEF0CE8AE66ED69(uParam0->f_3[0], 0);
	unk_0x4299736016AECE26(uParam0->f_3[0], Var1, 1, 0, 0, 1);
	Var1 = { unk_0x3201284584C7CD83(uParam0->f_1, (fParam5 / 2f), 0f, 1.5f) };
	uParam0->f_3[1] = unk_0xFCFC8CC5FF74580D(joaat("prop_carwash_roller_vert"), Var1, 0, 1, 0);
	uParam0->f_12[1] = (fParam5 / 2f);
	uParam0->f_9[1] = (fParam5 / 2f);
	unk_0xB29E08C7AB729BAD(uParam0->f_3[1], 1);
	unk_0xDCFB67537602326F(uParam0->f_3[1], 1, 0);
	unk_0x33CF95E95A476FB9(uParam0->f_3[1], 1);
	unk_0x0AEF0CE8AE66ED69(uParam0->f_3[1], 0);
	unk_0x4299736016AECE26(uParam0->f_3[1], Var1, 1, 0, 0, 1);
	uParam0->f_15 = 0f;
	uParam0->f_2 = 0;
	*uParam0 = 1;
	uParam0->f_18[0] = -1.275f;
	uParam0->f_21[0] = 1.25f;
	uParam0->f_18[1] = 0f;
	uParam0->f_21[1] = 0.62f;
	uParam0->f_12[0] = -1.75f;
	uParam0->f_12[1] = 1.75f;
	uParam0->f_44 = 0;
}

void func_181(int iParam0)
{
	var uVar0;
	
	if (!unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	uVar0 = unk_0xFFCC7EBF88BDEE54();
	while (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), uVar0)) < iParam0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_182(var uParam0, char* sParam1)
{
	uParam0->f_13 = sParam1;
}

void func_183(var uParam0, struct<3> Param1, float fParam4, float fParam5, int iParam6, float fParam7)
{
	float fVar0;
	
	if (unk_0x429D45A6C6520026(uParam0->f_13))
	{
		uParam0->f_13 = "ent_amb_car_wash_jet";
	}
	*uParam0 = 1;
	uParam0->f_8 = (fParam5 / 2f);
	uParam0->f_3 = unk_0xFCFC8CC5FF74580D(joaat("prop_ld_test_01"), Param1, 0, 1, 0);
	uParam0->f_1 = iParam6;
	if (func_331(uParam0->f_3))
	{
		unk_0x92DDCF53AA47A63D(uParam0->f_3, fParam4);
		unk_0xB29E08C7AB729BAD(uParam0->f_3, 1);
	}
	if (unk_0x8F7BA8E028ADF980(Param1, &fVar0, 0, 0))
	{
		uParam0->f_9 = unk_0x69C0BB7D03EE045D((Param1.f_2 - fVar0));
	}
	uParam0->f_7 = fParam7;
	uParam0->f_10 = { Param1 };
	uParam0->f_10.f_2 = fVar0;
}

void func_184(var uParam0, char* sParam1)
{
	func_190(uParam0, 0, joaat("prop_carwash_roller_horz"));
	func_190(uParam0, 1, joaat("prop_carwash_roller_vert"));
	func_190(uParam0, 2, joaat("prop_ld_test_01"));
	func_189(uParam0, 3, 4, "SCRIPT\CARWASH", 0);
	func_188(uParam0, 4);
	if (!unk_0x429D45A6C6520026(sParam1))
	{
		func_189(uParam0, 5, 11, sParam1, 0);
	}
	while (!func_185(uParam0))
	{
		unk_0x9EA8CBEA7355649E(2, 51);
		unk_0x9EA8CBEA7355649E(2, 75);
		func_110();
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_185(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD34717937104F1C() > uParam0->f_116 || uParam0->f_116 == 0)
	{
		if (uParam0->f_115 < *uParam0)
		{
			func_187(uParam0, uParam0->f_115);
			uParam0->f_115++;
		}
		uParam0->f_116 = unk_0xFD34717937104F1C() + 32;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_186(uParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 == *uParam0;
}

int func_186(var uParam0, int iParam1)
{
	if (unk_0x05EFB6A616B6FADE(uParam0->f_114, iParam1))
	{
		return 1;
	}
	if ((*uParam0)[iParam1 /*7*/] == 0)
	{
		return 1;
	}
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_113, iParam1))
	{
		return 0;
	}
	if (unk_0xFD34717937104F1C() > (uParam0[iParam1 /*7*/])->f_6)
	{
		uParam0->f_117 = 1;
		return 1;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0:
			return 1;
		
		case 1:
			if (!unk_0x6028A581C9B817E3((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0;
			}
			break;
		
		case 2:
			if (!unk_0x39C2D9AB77873F84((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0;
			}
			break;
		
		case 3:
			if (!unk_0xD0BEBF116142CB02((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0;
			}
			break;
		
		case 4:
			if (!unk_0x61346376C1469A0E((uParam0[iParam1 /*7*/])->f_3, 0, -1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (!unk_0xBEB81D4750DEAFA3((uParam0[iParam1 /*7*/])->f_3, 0))
			{
				return 0;
			}
			break;
		
		case 6:
			if (!unk_0x7FC99CCC73354033((uParam0[iParam1 /*7*/])->f_1))
			{
				return 0;
			}
			break;
		
		case 7:
			if (!unk_0x5488D97A1366CE04())
			{
				return 0;
			}
			break;
		
		case 8:
			if (!unk_0xD744813D9841CA9A((uParam0[iParam1 /*7*/])->f_5))
			{
				return 0;
			}
			break;
		
		case 9:
			if (!unk_0x87DF091EDFE6D083((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0;
			}
			break;
		
		case 10:
			if (!unk_0x6F4A062113883115((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3))
			{
				return 0;
			}
			break;
		
		case 11:
			if (!unk_0xF8882C5CDED0257A((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0;
			}
			break;
		
		case 12:
			if (!unk_0x86FB195D8E9C4FAB((uParam0[iParam1 /*7*/])->f_2))
			{
				return 0;
			}
			break;
		
		default:
			return 0;
	}
	unk_0x2BCFB39E86340DAA(&(uParam0->f_114), iParam1);
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 12:
			break;
		
		default:
			break;
	}
	return 1;
}

int func_187(var uParam0, int iParam1)
{
	if (unk_0x05EFB6A616B6FADE(uParam0->f_113, iParam1) || unk_0x05EFB6A616B6FADE(uParam0->f_114, iParam1))
	{
		return 1;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 1:
			unk_0x584E98CD1DE1E0C4((uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 2:
			unk_0x6D68030C791111E0((uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 3:
			unk_0x40C43275A74F9078((uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 4:
			unk_0x61346376C1469A0E((uParam0[iParam1 /*7*/])->f_3, 0, -1);
			break;
		
		case 5:
			unk_0xBEB81D4750DEAFA3((uParam0[iParam1 /*7*/])->f_3, (uParam0[iParam1 /*7*/])->f_4);
			break;
		
		case 6:
			unk_0xCACEBBBEAD8F262E((uParam0[iParam1 /*7*/])->f_1);
			break;
		
		case 7:
			unk_0x788BCD68EF8935BE();
			break;
		
		case 8:
			unk_0x6A633E13B2A856AE((uParam0[iParam1 /*7*/])->f_3, (uParam0[iParam1 /*7*/])->f_5);
			break;
		
		case 9:
			unk_0x8000C77B5F336760((uParam0[iParam1 /*7*/])->f_3, 0);
			break;
		
		case 10:
			unk_0x5C2A13372076C38C((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 11:
			unk_0x247955A7AC51D6E6((uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 12:
			unk_0x9231E8057B40EF0E((uParam0[iParam1 /*7*/])->f_2, 31, 0);
			break;
		
		default:
			return 0;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 12:
			break;
		
		default:
			break;
	}
	uParam0->f_117 = 0;
	(uParam0[iParam1 /*7*/])->f_6 = unk_0xFD34717937104F1C() + 10000;
	unk_0x2BCFB39E86340DAA(&(uParam0->f_113), iParam1);
	return 1;
}

int func_188(var uParam0, int iParam1)
{
	if (unk_0x05EFB6A616B6FADE(uParam0->f_113, iParam1) || unk_0x05EFB6A616B6FADE(uParam0->f_114, iParam1))
	{
		return 1;
	}
	func_178(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = 7;
	(uParam0[iParam1 /*7*/])->f_3 = "script";
	return 1;
}

int func_189(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	if (unk_0x05EFB6A616B6FADE(uParam0->f_113, iParam1) || unk_0x05EFB6A616B6FADE(uParam0->f_114, iParam1))
	{
		return 1;
	}
	if (unk_0x429D45A6C6520026(sParam3))
	{
		return 0;
	}
	switch (iParam2)
	{
		case 1:
			unk_0x584E98CD1DE1E0C4(sParam3);
			break;
		
		case 2:
			unk_0x6D68030C791111E0(sParam3);
			break;
		
		case 3:
			unk_0x40C43275A74F9078(sParam3);
			break;
		
		case 4:
			unk_0x61346376C1469A0E(sParam3, 0, -1);
			break;
		
		case 5:
			unk_0xBEB81D4750DEAFA3(sParam3, iParam4);
			break;
		
		case 9:
			unk_0x8000C77B5F336760(sParam3, 0);
			break;
		
		case 11:
			unk_0x247955A7AC51D6E6(sParam3);
			break;
		
		default:
			return 0;
	}
	func_178(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = iParam2;
	(uParam0[iParam1 /*7*/])->f_3 = sParam3;
	(uParam0[iParam1 /*7*/])->f_4 = iParam4;
	return 1;
}

int func_190(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(uParam0->f_113, iParam1) || unk_0x05EFB6A616B6FADE(uParam0->f_114, iParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	func_178(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = 6;
	(uParam0[iParam1 /*7*/])->f_1 = iParam2;
	return 1;
}

void func_191(var uParam0, char* sParam1)
{
	func_190(uParam0, 0, joaat("prop_carwash_roller_horz"));
	func_190(uParam0, 1, joaat("prop_carwash_roller_vert"));
	func_190(uParam0, 2, joaat("prop_ld_test_01"));
	if (unk_0xF113FAD553E1FB1B("SCRIPT\CARWASH", 0, -1))
	{
	}
	func_188(uParam0, 3);
	if (!unk_0x429D45A6C6520026(uParam1))
	{
		func_189(uParam0, 4, 11, sParam1, 0);
	}
	while (!func_185(uParam0))
	{
		unk_0x9EA8CBEA7355649E(2, 51);
		unk_0x9EA8CBEA7355649E(2, 75);
		func_110();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_192(var uParam0, int iParam1)
{
	uParam0->f_334 = iParam1;
	func_38(uParam0->f_334, 1, 0, 1, 0);
}

void func_193()
{
	var uVar0;
	struct<2> Var1;
	var uVar4;
	
	uVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(uVar0), &Var1, &uVar4);
	if (Var1.f_1 < -3.8f)
	{
		func_196(&(Local_76.f_172[2 /*23*/]), -699.969f, -929.1818f, 19.2126f, -0.8962f, -0.0038f, -179.6509f, -699.9516f, -932.04f, 19.1679f, -0.8962f, -0.0038f, -179.6509f, 6500, 1.5f);
	}
	else
	{
		func_196(&(Local_76.f_172[2 /*23*/]), -700.0016f, -932.0601f, 18.7178f, -8.6749f, 0f, -179.6145f, -700.0532f, -936.7521f, 18.6515f, 3.9366f, 0f, 179.651f, 6500, 1.5f);
	}
	Local_76.f_172[2 /*23*/].f_1[0 /*3*/].f_1 = (Local_76.f_172[2 /*23*/].f_1[0 /*3*/].f_1 + fLocal_629);
	Local_76.f_172[2 /*23*/].f_1[1 /*3*/].f_1 = (Local_76.f_172[2 /*23*/].f_1[1 /*3*/].f_1 + fLocal_629);
	func_195(&(Local_76.f_172[2 /*23*/]), 50f, 0);
	func_194(&(Local_76.f_172[2 /*23*/]), 1.107178f);
}

void func_194(var uParam0, float fParam1)
{
	uParam0->f_22 = fParam1;
}

void func_195(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_15[0] = fParam1;
	if (fParam2 == 0f)
	{
		uParam0->f_15[1] = fParam1;
	}
	else
	{
		uParam0->f_15[1] = fParam2;
	}
}

void func_196(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14)
{
	func_198(uParam0, Param1, Param4, 0, iParam14);
	func_197(uParam0, Param7, Param10, iParam13);
}

void func_197(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7)
{
	uParam0->f_1[1 /*3*/] = { Param1 };
	uParam0->f_8[1 /*3*/] = { Param4 };
	*uParam0 = 1;
	uParam0->f_20 = uParam7;
}

void func_198(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8)
{
	func_199(uParam0);
	uParam0->f_1[0 /*3*/] = { Param1 };
	uParam0->f_8[0 /*3*/] = { Param4 };
	*uParam0 = 1;
	uParam0->f_21 = iParam7;
	uParam0->f_18 = uParam8;
	uParam0->f_20 = 0;
}

void func_199(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1[1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_8[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_8[1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_15[0] = 50f;
	uParam0->f_15[1] = 0f;
	uParam0->f_21 = 0;
	uParam0->f_20 = 0;
}

void func_200(var uParam0, char* sParam1)
{
	uParam0->f_335 = sParam1;
}

void func_201(struct<3> Param0, float fParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	
	Var0 = { fParam3, fParam3, fParam3 };
	*uParam4 = { Param0 - Var0 };
	*uParam5 = { Param0 + Var0 };
}

void func_202(var uParam0, struct<3> Param1, struct<3> Param4)
{
	uParam0->f_7[0 /*3*/] = { Param1 };
	uParam0->f_7[1 /*3*/] = { Param4 };
	if (unk_0x69C0BB7D03EE045D((Param4.f_0 - Param1.f_0)) > unk_0x69C0BB7D03EE045D((Param4.f_1 - Param1.f_1)))
	{
		uParam0->f_29 = 0;
	}
	else
	{
		uParam0->f_29 = 0;
	}
}

void func_203(var uParam0, struct<3> Param1, struct<3> Param4)
{
	uParam0->f_14[0 /*3*/] = { Param1 };
	uParam0->f_14[1 /*3*/] = { Param4 };
}

void func_204(var uParam0, struct<3> Param1, struct<3> Param4)
{
	*(uParam0[0 /*3*/]) = { Param1 };
	*(uParam0[1 /*3*/]) = { Param4 };
	uParam0->f_26 = { func_37(Param4 - Param1) };
	uParam0->f_24 = func_206(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]));
	func_205(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, 0, !Global_71205, 0, 1, !Global_71205);
}

void func_205(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	fVar0 = unk_0x499324B3EF19C288(Param0, Param3, 1);
	Var2 = { Param0 };
	Var5 = { func_37(Param3 - Param0) };
	while (fVar1 < fVar0)
	{
		if (bParam7)
		{
			unk_0x3521B10FB737CE36(Var2, fParam6, 0);
		}
		if (bParam9)
		{
			unk_0x39F8A3E01BC1A69B(Var2, fParam6, 0);
		}
		if (bParam8)
		{
			unk_0x01AF8CB960828C2B(Var2, fParam6, 0, 0, 0, 0, 0, 0);
		}
		if (bParam10)
		{
			unk_0x341AA026B031328A(Var2, fParam6);
		}
		if (bParam11)
		{
			unk_0x9827D9AC8985F888(Var2, fParam6, 0);
		}
		Var2 = { Var2 + Var5 * FtoV((fParam6 / 2f)) };
		fVar1 = (fVar1 + (fParam6 / 2f));
	}
}

var func_206(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x0C1B8F3F6EFDC58B((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_207(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	int iVar0;
	
	iVar0 = unk_0xA6580F898F4E801C();
	if (unk_0x58E3CCF930D23BD5(iVar0))
	{
		func_324(0);
		if (bParam9)
		{
			unk_0x4CC7FDC7520D4E8A(unk_0xA6580F898F4E801C(), 1);
		}
		if (bParam8)
		{
			switch (func_158())
			{
				case 0:
					if (func_323(unk_0xA19140A5C42D8715(), 8, 15))
					{
						func_209(unk_0xA19140A5C42D8715(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_323(unk_0xA19140A5C42D8715(), 9, 6))
					{
						func_209(unk_0xA19140A5C42D8715(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 1:
					if (func_323(unk_0xA19140A5C42D8715(), 8, 1) || func_323(unk_0xA19140A5C42D8715(), 8, 10))
					{
						func_209(unk_0xA19140A5C42D8715(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 2:
					if (func_323(unk_0xA19140A5C42D8715(), 8, 4))
					{
						func_209(unk_0xA19140A5C42D8715(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			unk_0x3521B10FB737CE36(func_33(unk_0xA6580F898F4E801C()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			unk_0x39F8A3E01BC1A69B(Param0, 30f, 0);
		}
		if (bParam10)
		{
			unk_0x341AA026B031328A(Param0, 30f);
		}
		unk_0x9827D9AC8985F888(Param0, 30f, 0);
		unk_0xF10B3BC4F73177E5(iVar0, 0, 0);
		unk_0xDF341226C0B8BAC3(iVar0, 0);
		unk_0x271AF1531073FE9B(iVar0, 1);
		if (bParam12)
		{
			unk_0xDC374DA4DC566237(0);
			unk_0x85685830EFB9A55E(0);
		}
		unk_0x4F93066CECE72793();
		if (iParam11 == 1)
		{
			unk_0x135C61E339DABBAC(1);
		}
		if (iParam3 == 1)
		{
			unk_0x20732990927F4964(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_39 = 0;
			if (func_5(unk_0xA19140A5C42D8715()))
			{
				iLocal_39 = unk_0x734FB7703233A555(unk_0xA19140A5C42D8715());
				unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			func_208(500, 0);
		}
	}
}

void func_208(int iParam0, bool bParam1)
{
	if (unk_0x71364F510A1CB69F() || unk_0x607776744A243309())
	{
		if (!unk_0x3BE8B7AEED1A3971())
		{
			unk_0x70C1F5AA59767FE6(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x3A83743561B4F70C())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

int func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	var uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;
	
	if (unk_0x4915F4759304D5CF(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_71015++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x8F474E419F56E48D(iParam0);
	if (iParam5 == 0)
	{
		Global_71017[1 /*14*/] = { func_259(iVar10, iParam1, iParam2, -1) };
		if (!func_258(iParam3))
		{
			Global_71015 = (Global_71015 - 1);
			return 0;
		}
		func_251(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_249(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_249(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_248(iParam0, 1);
			if (!func_247(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_248(iParam0, 0);
			if (!func_246(iVar10, 14, iVar8, -1) && !func_245(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_248(iParam0, 2);
			}
		}
		unk_0x406CCC2A13C8D900(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_71060 };
		}
		else
		{
			uVar11 = { func_241(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_71017[1 /*14*/] = { func_259(iVar10, iVar0, uVar11[iVar0], -1) };
				if (unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_71077 };
						}
						else
						{
							uVar28 = { func_238(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_71017[1 /*14*/] = { func_259(iVar10, 14, uVar28[iVar1], -1) };
							func_229(iParam0, Global_71017[1 /*14*/].f_12, Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4);
							func_251(14);
							if (Global_71015 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_221(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_209(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_220(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x72A0FF8C49CFFC0D(iParam0, func_219(iVar0), Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4, unk_0xA4B664E8E0A26C23(iParam0, func_219(iVar0)));
						}
						else
						{
							unk_0x72A0FF8C49CFFC0D(iParam0, func_219(iVar0), Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4, iParam4);
						}
						func_251(iVar0);
						if (Global_71015 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_221(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_209(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_71017[1 /*14*/] = { func_259(iVar10, iVar0, func_218(iParam0, iVar0, -1), -1) };
				if (unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_217(iParam0, iVar10, &iVar4, 1))
							{
								func_209(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_241(iVar10, 0) };
						func_209(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_259(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_215(iVar10, iParam2, 8, iVar5, &uVar11, &Var55))
				{
					func_209(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_259(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_215(iVar10, iParam2, 9, iVar6, &uVar11, &Var55))
				{
					func_209(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_259(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_215(iVar10, iParam2, 14, iVar7, &uVar11, &Var55))
				{
					func_209(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_259(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_215(iVar10, iParam2, 14, iVar8, &uVar11, &Var55))
				{
					func_209(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_259(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_215(iVar10, iParam2, 14, iVar9, &uVar11, &Var55))
				{
					func_209(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_238(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_71017[1 /*14*/] = { func_259(iVar10, 14, uVar69[iVar1], -1) };
			func_229(iParam0, Global_71017[1 /*14*/].f_12, Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4);
			func_251(14);
			if (Global_71015 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_221(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_209(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_229(iParam0, Global_71017[1 /*14*/].f_12, Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4);
		func_251(iParam1);
		if (Global_71015 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_221(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_209(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x72A0FF8C49CFFC0D(iParam0, func_219(iParam1), Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4, unk_0xA4B664E8E0A26C23(iParam0, func_219(iParam1)));
		}
		else
		{
			unk_0x72A0FF8C49CFFC0D(iParam0, func_219(iParam1), Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4, iParam4);
		}
		if (Global_71015 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_221(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_209(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_212(iVar10, iParam1, iParam2);
		}
	}
	if (Global_71015 == 1)
	{
		if (func_217(iParam0, iVar10, &iVar4, 0))
		{
			func_209(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_210(iParam0, iVar10, &iVar4))
		{
			func_209(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_71015 = (Global_71015 - 1);
	return 1;
}

int func_210(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_211(iParam1);
	if (Global_106070.f_2355.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_323(iParam0, Global_106070.f_2355.f_539[iVar0 /*65*/].f_64, Global_106070.f_2355.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_62;
			Global_106070.f_2355.f_539[iVar0 /*65*/].f_63 = -99;
			Global_106070.f_2355.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_214(iParam0, 12, iVar0))
	{
		if (func_213(iParam0, iParam1, iParam2))
		{
			iVar1 = func_211(iParam0);
			if (iParam1 == 3)
			{
				Global_106070.f_2355.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_106070.f_2355.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_213(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_214(int iParam0, int iParam1, int iParam2)
{
	Global_71017[1 /*14*/] = { func_259(iParam0, iParam1, iParam2, -1) };
	return unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 2);
}

int func_215(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_238(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_216(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_247(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_246(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_245(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_247(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_246(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_245(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_247(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_246(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_245(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_217(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_211(iParam1);
	if (Global_106070.f_2355.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_323(iParam0, Global_106070.f_2355.f_539[iVar0 /*65*/].f_61, Global_106070.f_2355.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_59;
			Global_106070.f_2355.f_539[iVar0 /*65*/].f_60 = -99;
			Global_106070.f_2355.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_218(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_323(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_323(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_248(iParam0, iParam2);
			}
		}
		else
		{
			return func_249(iParam0, iParam1);
		}
	}
	return -99;
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_220(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_211(iParam0);
		Global_106070.f_2355.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_106070.f_2355.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_221(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_249(iParam0, 1);
				iVar0 = func_228(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_249(iParam0, 2);
				iVar0 = func_228(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_220(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_227(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_226(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_225(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_225(iParam0, 3, 135, 150))
									{
										iVar0 = func_224(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_225(iParam0, 3, 209, 222))
									{
										iVar0 = func_224(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_225(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_224(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_224(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_224(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_224(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_225(iParam0, 3, 176, 191) && !func_225(iParam0, 3, 227, 242))
									{
										iVar0 = func_224(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_249(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_249(iParam0, 11);
								iVar5 = func_223(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_249(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_222(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_249(iParam0, 8);
								iVar8 = func_249(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_223(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_223(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_249(iParam0, 11);
								iVar0 = func_223(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_222(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_223(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_224(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_224(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_224(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_214(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_225(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_249(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_227(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_211(iParam0);
		Global_106070.f_2355.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_106070.f_2355.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_228(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_229(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x8757CF4763C139B6(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x13E0A8160525AE55(iParam0, 34, 0);
			unk_0x13E0A8160525AE55(iParam0, 36, 0);
		}
	}
	else
	{
		unk_0x73774776D23F43BA(iParam0, iParam1, iParam2, iParam3, unk_0x4C9BACA8D249CB13());
		if (iParam1 == 0)
		{
			iVar0 = func_234(iParam0, iParam2, iParam3, iParam1);
			if (func_230(unk_0x8F474E419F56E48D(iParam0), 14, iVar0, unk_0xEF84BAF28F219386(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x13E0A8160525AE55(iParam0, 34, 1);
				unk_0x13E0A8160525AE55(iParam0, 36, 1);
			}
			else
			{
				unk_0x13E0A8160525AE55(iParam0, 34, 0);
				unk_0x13E0A8160525AE55(iParam0, 36, 0);
			}
		}
	}
}

int func_230(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_231(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x4BE6499482BEE1D8(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_231(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x4BE6499482BEE1D8(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_231(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xF21D7CAB6815AD7E(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_233(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0x6182A22F4D99005E(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0x1B674FE324A34577(iVar17, &Var0);
			if (!unk_0x3B61940560400F58(Var0.f_0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x4EC128057F5B6F27(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_232(iParam0, func_219(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_71139.f_26[iParam2] && iParam1 == Global_71139[iParam2]) && Global_71139.f_13[iParam2] != 0)
		{
			return Global_71139.f_13[iParam2];
		}
		iVar41 = unk_0x6182A22F4D99005E(iParam3, 6, -1, 0, -1, func_219(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0xF947B64BF5B65A2E(iVar38, &Var21);
			if (!unk_0x3B61940560400F58(Var21.f_0))
			{
				if (iVar39 == iVar40)
				{
					Global_71139.f_13[iParam2] = Var21.f_1;
					Global_71139[iParam2] = iParam1;
					Global_71139.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_232(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_234(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_237(iParam3);
	}
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	iVar1 = unk_0xEF84BAF28F219386(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_236(unk_0x8F474E419F56E48D(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_236(unk_0x8F474E419F56E48D(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xFBE47E4C51D1D9AE(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x912FC8EEC1AA4059(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_235(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_237(iParam3);
}

int func_235(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_236(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xF21D7CAB6815AD7E(&Var0);
		iVar18 = 0;
		iVar19 = unk_0x6182A22F4D99005E(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x1B674FE324A34577(iVar17, &Var0);
			if (!unk_0x3B61940560400F58(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_233(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x4EC128057F5B6F27(&Var20);
		iVar38 = 0;
		iVar39 = unk_0x6182A22F4D99005E(iParam3, 6, -1, 0, -1, func_219(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xF947B64BF5B65A2E(iVar37, &Var20);
			if (!unk_0x3B61940560400F58(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_232(iParam0, func_219(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

struct<10> func_238(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_240(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_240(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_240(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_240(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_240(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_240(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_240(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_240(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_240(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_240(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_240(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_239(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_240(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_240(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_240(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_240(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_240(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_240(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_240(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_240(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_240(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_240(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_239(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_240(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_240(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_240(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_240(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_240(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_240(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_240(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_240(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_240(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_240(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_239(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_240(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_240(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_240(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_240(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_240(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_240(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_240(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_240(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_240(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_240(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_240(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_240(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_240(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_240(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_240(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_240(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_240(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_240(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_240(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_240(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_240(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_240(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_240(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_240(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_240(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_240(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_239(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_240(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_240(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_240(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_240(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_240(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_240(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_240(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_240(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_240(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_240(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_240(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_240(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_240(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_240(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_240(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_240(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_240(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_240(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_240(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_240(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_240(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_240(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_240(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_240(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_240(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_239(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_239(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0xE57EF7838ECC886A(iParam2, &Var1);
		if (!unk_0x3B61940560400F58(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0x5AD89C73E28CAAB7(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_236(iParam1, Var16.f_0, 14, iVar0);
					}
					else if (Var16.f_1 != -1)
					{
						(*iParam0)[Var16.f_2] = Var16.f_1;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_241(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_106070.f_9057.f_99.f_58[120])
					{
						func_244(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_244(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_244(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_244(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_244(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_244(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_244(&Var1, -99, -99, Global_106070.f_2355.f_539.f_196[0], Global_106070.f_2355.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_244(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_244(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_244(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_244(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_244(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_244(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_244(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_244(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_244(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_244(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_244(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_244(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_244(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_244(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_244(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_244(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_244(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_244(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_244(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_244(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_244(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_244(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_244(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_244(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_244(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_244(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_244(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_244(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_244(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_244(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_244(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_244(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_244(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_244(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_244(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_244(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_244(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_244(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_244(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_244(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_244(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_244(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_244(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_244(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_244(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_244(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_244(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_242(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_244(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_244(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_244(&Var1, -99, -99, Global_106070.f_2355.f_539.f_196[1], Global_106070.f_2355.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_244(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_244(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_244(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_244(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_244(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_244(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_244(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_244(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_244(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_244(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_244(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_244(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_244(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_244(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_244(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_244(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_244(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_244(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_244(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_244(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_244(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_244(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_244(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_244(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_244(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_244(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_244(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_244(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_244(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_244(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_244(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_244(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_244(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_244(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_244(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_244(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_244(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_244(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_244(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_244(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_244(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_244(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_244(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_244(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_242(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_244(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_244(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_244(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_244(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_244(&Var1, -99, -99, Global_106070.f_2355.f_539.f_196[2], Global_106070.f_2355.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_244(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_244(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_244(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_244(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_244(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_244(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_244(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_244(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_244(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_244(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_244(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_244(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_244(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_244(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_244(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_244(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_244(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_244(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_244(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_244(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_244(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_244(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_244(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_244(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_244(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_244(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_244(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_244(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_244(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_244(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_244(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_244(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_244(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_244(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_244(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_244(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_244(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_244(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_244(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_244(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_244(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_244(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_244(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_242(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_244(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_244(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_244(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_244(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_244(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_244(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_244(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_244(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_244(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_244(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_244(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_244(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_244(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_244(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_244(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_244(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_244(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_244(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_244(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_244(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_244(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_244(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_244(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_244(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_244(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_244(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_242(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_244(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_244(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_244(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_244(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_244(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_244(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_244(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_244(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_244(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_244(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_244(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_244(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_244(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_244(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_244(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_244(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_244(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_244(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_244(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_244(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_244(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_244(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_244(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_244(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_244(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_244(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_244(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_244(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_242(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_242(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	struct<2> Var19;
	int iVar36;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0xDE2FA336A2CE65DB(iVar0, 0);
	unk_0xEBAB77C605128A7D((iParam2 - iParam3), &Var1);
	if (!unk_0x3B61940560400F58(Var1.f_0))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (unk_0x4D0CC9FD287B297C(Var1.f_1, iVar36, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						unk_0x4EC128057F5B6F27(&Var19);
						unk_0xDD7BFAE08DAD69B6(Var16.f_0, &Var19);
						if (Var16.f_0 != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var16.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_243(Var16.f_2)] = Var16.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_243(Var16.f_2)] = func_236(iParam1, Var16.f_0, func_243(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*uParam0)[func_243(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_244(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_245(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_231(iParam0, iParam2, 14, 3);
						}
						return (unk_0x4BE6499482BEE1D8(iParam3, joaat("HAT"), 1) || unk_0x4BE6499482BEE1D8(func_231(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_231(iParam0, iParam2, 1, 3);
						}
						return (unk_0x4BE6499482BEE1D8(iParam3, joaat("HAT"), 0) || unk_0x4BE6499482BEE1D8(func_231(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_231(iParam0, iParam2, 14, 4);
						}
						return (unk_0x4BE6499482BEE1D8(iParam3, joaat("HAT"), 1) || unk_0x4BE6499482BEE1D8(func_231(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_231(iParam0, iParam2, 1, 4);
						}
						return (unk_0x4BE6499482BEE1D8(iParam3, joaat("HAT"), 0) || unk_0x4BE6499482BEE1D8(func_231(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_246(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_231(iParam0, iParam2, 1, 3);
					}
					if (unk_0x4BE6499482BEE1D8(iParam3, joaat("HAT"), 0) || unk_0x4BE6499482BEE1D8(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_231(iParam0, iParam2, 1, 4);
					}
					if (unk_0x4BE6499482BEE1D8(iParam3, joaat("HAT"), 0) || unk_0x4BE6499482BEE1D8(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_247(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_231(iParam0, iParam2, 14, 3);
					}
					return unk_0x4BE6499482BEE1D8(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_231(iParam0, iParam2, 14, 4);
					}
					return unk_0x4BE6499482BEE1D8(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_248(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x4915F4759304D5CF(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xD1241BB51B6FE6DA(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_237(iParam1);
	}
	iVar1 = unk_0x2FB5EBD67ABDBF18(iParam0, iParam1);
	return func_234(iParam0, iVar0, iVar1, iParam1);
}

int func_249(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x4915F4759304D5CF(iParam0))
	{
		return -99;
	}
	iVar0 = func_219(iParam1);
	iVar1 = unk_0x774CB20D17C3FF03(iParam0, iVar0);
	iVar2 = unk_0x7710E77D1959B321(iParam0, iVar0);
	return func_250(iParam0, iVar1, iVar2, iParam1);
}

int func_250(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_219(iParam3);
	iVar1 = unk_0xE73139FCB8A4B748(uParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x2B322C65C819A12B(uParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_251(int iParam0)
{
	if (unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 1) && !unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 6))
	{
		func_257(iParam0, Global_71017[1 /*14*/].f_5, Global_71017[1 /*14*/].f_2, 2, Global_71017[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 1) && unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_252(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_252(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_252(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_252(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_71014;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_256(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_255(iVar2, iVar0, 0);
		unk_0x2BCFB39E86340DAA(&iVar3, iVar1);
		func_253(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_253(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_254(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_254(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_10();
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

int func_255(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_254(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_256(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 9954;
	if ((bParam4 && Global_4265675) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4265675)
		{
			iVar0 = unk_0xCD58BA1DE37B5D38(iParam0);
		}
		else
		{
			iVar0 = unk_0x6DD3E71121D6115E(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xCD58BA1DE37B5D38(iParam0);
	}
	else
	{
		iVar0 = unk_0x6DD3E71121D6115E(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
				
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
				
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 9954;
}

int func_257(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_258(int iParam0)
{
	if (!unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_259(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_322();
	if (iParam0 == joaat("player_zero"))
	{
		func_304(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_285(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_260(iParam1, iParam2);
	}
	return Global_71017[0 /*14*/];
}

void func_260(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_284(iParam1);
			break;
		
		case 2:
			func_283(iParam1);
			break;
		
		case 3:
			func_280(iParam1);
			break;
		
		case 4:
			func_279(iParam1);
			break;
		
		case 6:
			func_278(iParam1);
			break;
		
		case 5:
			func_277(iParam1);
			break;
		
		case 8:
			func_276(iParam1);
			break;
		
		case 9:
			func_275(iParam1);
			break;
		
		case 10:
			func_274(iParam1);
			break;
		
		case 1:
			func_273(iParam1);
			break;
		
		case 7:
			func_272(iParam1);
			break;
		
		case 11:
			func_271(iParam1);
			break;
		
		case 12:
			func_270(iParam1);
			break;
		
		case 13:
			func_269(iParam1);
			break;
		
		case 14:
			func_261(iParam1);
			break;
	}
}

void func_261(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 155, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_262(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_267(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0xFEB6EEC0545AF7AA(sParam3) != unk_0xFEB6EEC0545AF7AA("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 5);
		}
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 1);
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 2);
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 6);
		if (func_154(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x4BE6499482BEE1D8(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_266(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xFA57C719261AA55D(&(uParam0->f_6), 2);
			}
			if (!func_266(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_266(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xFA57C719261AA55D(&(uParam0->f_6), 2);
			}
			if (!func_266(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_266(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xFA57C719261AA55D(&(uParam0->f_6), 2);
			}
			if (!func_266(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 0);
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 5);
		if (func_257(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 1);
		}
		if (func_257(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 2);
		}
		if (!func_257(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_154(14))
			{
				return;
			}
			uVar0 = func_255(func_265(iParam1, uParam0->f_2), Global_71014, 0);
			if (unk_0x05EFB6A616B6FADE(uVar0, uParam0->f_1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 1);
			}
			uVar0 = func_255(func_264(iParam1, uParam0->f_2), Global_71014, 0);
			if (unk_0x05EFB6A616B6FADE(uVar0, uParam0->f_1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 2);
			}
			if (func_263(iParam1, uParam0->f_2, &iVar1))
			{
				uVar0 = func_255(iVar1, Global_71014, 0);
				if (!unk_0x05EFB6A616B6FADE(uVar0, uParam0->f_1))
				{
					unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 2);
		}
	}
}

bool func_263(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_264(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_265(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_266(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_71014;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_256(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_255(iVar2, iVar0, 0);
		return unk_0x05EFB6A616B6FADE(uVar3, iVar1);
	}
	return 0;
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_268(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_71017[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0xDE2FA336A2CE65DB(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xEBAB77C605128A7D(iVar17, &Var2);
			if (!unk_0x3B61940560400F58(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_262(&(Global_71017[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_262(&(Global_71017[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0xF21D7CAB6815AD7E(&Var20);
		iVar39 = 0;
		iVar40 = unk_0x6182A22F4D99005E(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0x1B674FE324A34577(iVar38, &Var20);
			if (!unk_0x3B61940560400F58(Var20.f_0))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20.f_0;
					func_262(&(Global_71017[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x4BE6499482BEE1D8(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0x4EC128057F5B6F27(&Var41);
		if (iParam3 != -1 && Global_71186)
		{
			unk_0xDD7BFAE08DAD69B6(iParam3, &Var41);
			Global_2621444 = Var41.f_1;
			Global_2621445 = Var41.f_0;
			func_262(&(Global_71017[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x4BE6499482BEE1D8(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
			return;
		}
		iVar59 = 0;
		iVar60 = unk_0x6182A22F4D99005E(iVar1, 6, -1, 0, -1, func_219(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0xF947B64BF5B65A2E(iVar58, &Var41);
			if (!unk_0x3B61940560400F58(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_262(&(Global_71017[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x4BE6499482BEE1D8(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_269(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_268(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_270(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_271(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_272(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_273(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_274(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_268(iVar10, iParam0, 33, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_275(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_268(iVar10, iParam0, 17, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_276(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_268(iVar10, iParam0, 18, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_277(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_268(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_278(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_268(iVar10, iParam0, 84, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_279(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_268(iVar10, iParam0, 104, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_280(int iParam0)
{
	if (iParam0 < 136)
	{
		func_282(iParam0);
	}
	else
	{
		func_281(iParam0);
	}
	if (Global_71017[0 /*14*/].f_2 == -1)
	{
		func_268(3, iParam0, 242, -1);
	}
}

void func_281(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_282(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_283(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_284(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_268(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_285(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_303(iParam1);
			break;
		
		case 2:
			func_302(iParam1);
			break;
		
		case 3:
			func_298(iParam1);
			break;
		
		case 4:
			func_297(iParam1);
			break;
		
		case 6:
			func_296(iParam1);
			break;
		
		case 5:
			func_295(iParam1);
			break;
		
		case 8:
			func_294(iParam1);
			break;
		
		case 9:
			func_293(iParam1);
			break;
		
		case 10:
			func_292(iParam1);
			break;
		
		case 1:
			func_291(iParam1);
			break;
		
		case 7:
			func_290(iParam1);
			break;
		
		case 11:
			func_289(iParam1);
			break;
		
		case 12:
			func_288(iParam1);
			break;
		
		case 13:
			func_287(iParam1);
			break;
		
		case 14:
			func_286(iParam1);
			break;
	}
}

void func_286(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 175, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_287(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_288(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 47, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_289(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_268(iVar10, iParam0, 63, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_290(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_291(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_292(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_293(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 12, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_294(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 77, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_295(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_268(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_296(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_268(iVar10, iParam0, 134, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_297(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_268(iVar10, iParam0, 117, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_298(int iParam0)
{
	if (iParam0 < 107)
	{
		func_301(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_300(iParam0);
	}
	else
	{
		func_299(iParam0);
	}
	if (Global_71017[0 /*14*/].f_2 == -1)
	{
		func_268(3, iParam0, 318, -1);
	}
}

void func_299(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_300(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_301(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_302(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_268(iVar10, iParam0, 21, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_303(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_268(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_304(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_321(iParam1);
			break;
		
		case 2:
			func_320(iParam1);
			break;
		
		case 3:
			func_317(iParam1);
			break;
		
		case 4:
			func_316(iParam1);
			break;
		
		case 6:
			func_315(iParam1);
			break;
		
		case 5:
			func_314(iParam1);
			break;
		
		case 8:
			func_313(iParam1);
			break;
		
		case 9:
			func_312(iParam1);
			break;
		
		case 10:
			func_311(iParam1);
			break;
		
		case 1:
			func_310(iParam1);
			break;
		
		case 7:
			func_309(iParam1);
			break;
		
		case 11:
			func_308(iParam1);
			break;
		
		case 12:
			func_307(iParam1);
			break;
		
		case 13:
			func_306(iParam1);
			break;
		
		case 14:
			func_305(iParam1);
			break;
	}
}

void func_305(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_268(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_306(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_268(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_307(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_308(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 45, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_309(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_310(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_311(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_268(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_312(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_268(iVar10, iParam0, 20, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_313(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_268(iVar10, iParam0, 24, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_314(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_268(iVar10, iParam0, 14, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_315(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_268(iVar10, iParam0, 99, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_316(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_317(int iParam0)
{
	if (iParam0 < 60)
	{
		func_319(iParam0);
	}
	else
	{
		func_318(iParam0);
	}
	if (Global_71017[0 /*14*/].f_2 == -1)
	{
		func_268(3, iParam0, 181, -1);
	}
}

void func_318(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_319(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_320(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_268(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_321(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_268(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_262(&(Global_71017[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_322()
{
	Global_71017[0 /*14*/].f_1 = -1;
	Global_71017[0 /*14*/].f_2 = -1;
	Global_71017[0 /*14*/].f_5 = -1;
	Global_71017[0 /*14*/].f_3 = -1;
	Global_71017[0 /*14*/].f_4 = -1;
	Global_71017[0 /*14*/].f_7 = 0;
	Global_71017[0 /*14*/].f_6 = 0;
	Global_71017[0 /*14*/].f_13 = -1;
	Global_71017[0 /*14*/].f_12 = 0;
	Global_71017[0 /*14*/] = 0;
	StringCopy(&(Global_71017[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_323(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;
	
	if (unk_0x4915F4759304D5CF(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	Global_71017[1 /*14*/] = { func_259(iVar0, iParam1, iParam2, -1) };
	if (!unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_241(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_323(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_238(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_323(iParam0, 14, uVar22[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_71017[2 /*14*/] = { func_259(iVar0, 14, iVar4, -1) };
									if (Global_71017[2 /*14*/].f_12 == iVar3)
									{
										if (func_323(iParam0, 14, iVar4))
										{
											if (!func_215(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_71017[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_249(iParam0, iVar2);
						Global_71017[2 /*14*/] = { func_259(iVar0, iVar2, iVar1, -1) };
						if (!func_215(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_71017[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_238(iVar0, iParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_323(iParam0, 14, uVar33[iVar32]))
			{
				return 0;
			}
			iVar32++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xD1241BB51B6FE6DA(iParam0, Global_71017[1 /*14*/].f_12) == Global_71017[1 /*14*/].f_3 && (unk_0x2FB5EBD67ABDBF18(iParam0, Global_71017[1 /*14*/].f_12) == Global_71017[1 /*14*/].f_4 || Global_71017[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_71017[1 /*14*/].f_3 == unk_0x774CB20D17C3FF03(iParam0, func_219(iParam1)) && Global_71017[1 /*14*/].f_4 == unk_0x7710E77D1959B321(iParam0, func_219(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_324(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA6580F898F4E801C();
	if (!unk_0xD32647D293B05ADD(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0x962CF6A9EA6FDCAC(iVar0, bParam0, 16);
		unk_0x962CF6A9EA6FDCAC(iVar0, bParam0, 32);
	}
	func_6(1, 1, 0, 0, 0);
}

int func_325()
{
	int iVar0;
	
	iVar0 = unk_0xFD34717937104F1C() + 100;
	while (unk_0xFD34717937104F1C() < iVar0)
	{
		switch (func_326(&iLocal_628, 0, 9, 0, 0))
		{
			case 1:
				return 1;
			
			case 0:
				return 0;
			
			default:
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_326(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_330(0))
		{
			return 0;
		}
		Global_36081++;
		*iParam0 = Global_36081;
		unk_0xEF06BE39D11763FC(unk_0xA6580F898F4E801C(), 0);
		Global_17228.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA5DD4141C1E70561(8);
		}
		Global_36117 = iParam2;
		Global_36079 = *iParam0;
		Global_36080 = iParam4;
		Global_36078 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_36078 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36078)
			{
				if (Global_36084[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36079 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_328(iParam2))
		{
			return 0;
		}
		if (Global_36078 == 8)
		{
			return 0;
		}
		Global_36081++;
		*iParam0 = Global_36081;
		Global_36084[Global_36078 /*4*/] = Global_36081;
		Global_36084[Global_36078 /*4*/].f_1 = iParam1;
		Global_36084[Global_36078 /*4*/].f_2 = iParam2;
		Global_36084[Global_36078 /*4*/].f_3 = 0;
		Global_36078++;
		if (iParam4 != 0)
		{
			func_327(iParam0, iParam4);
		}
	}
	return 2;
}

void func_327(var uParam0, int iParam1)
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

bool func_328(int iParam0)
{
	return func_329(iParam0, Global_36117);
}

int func_329(int iParam0, int iParam1)
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

int func_330(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_328(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_331(int iParam0)
{
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	return !unk_0x7112137033807390(iParam0, 0);
}

void func_332()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar12;
	int iVar15;
	struct<3> Var16;
	struct<3> Var19;
	var uVar22;
	int iVar23;
	
	while (unk_0x71364F510A1CB69F() || func_389())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_175();
	func_387(&(Local_562[0 /*24*/]), 1, "", func_388(157), 15, "", 0, 2.5f);
	func_386(&(Local_562[0 /*24*/]), Local_76.f_26, 15f);
	func_385(&uLocal_611, 1);
	Local_76.f_336 = 1.5f;
	while (true)
	{
		func_331(unk_0xA19140A5C42D8715());
		if (unk_0x4C9BACA8D249CB13())
		{
			if (func_376())
			{
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
				func_390(0);
			}
		}
		bVar1 = false;
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar3 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			bVar1 = (func_373(iVar3) || func_372(iVar3));
			bLocal_560 = unk_0x0F3E411830C671BC(iVar3);
			func_28(bLocal_560);
		}
		func_87(&Local_76);
		iVar2 = bLocal_558;
		bLocal_558 = func_64(unk_0xA19140A5C42D8715());
		if (iVar2 == 0 && bLocal_558 == 1)
		{
		}
		if (iVar2 == 1 && bLocal_558 == 0)
		{
		}
		if (bLocal_558)
		{
			if (iVar2 != bLocal_558)
			{
				Local_76.f_339 = 0;
				func_193();
			}
			func_84(&Local_76, iVar3, fLocal_557);
			if (func_16(&Local_76, iVar3))
			{
				if (Local_76.f_358 == 0)
				{
					func_113(2);
				}
				func_168(iVar3);
				func_81(&Local_76);
				func_24(unk_0xA19140A5C42D8715());
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
				unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
			}
		}
		else
		{
			func_26(Local_76.f_340, 1);
			func_24(unk_0xA19140A5C42D8715());
			if (iVar2 == 1 && bLocal_558 == 0)
			{
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
			}
			if (func_371(&(Local_562[0 /*24*/])))
			{
				Var16 = { unk_0x2F230B37E9FFF23F(Local_76.f_7[0 /*3*/] + Local_76.f_7[1 /*3*/] / Vector(2f, 2f, 2f), Local_76.f_24, Local_630) };
				Var19 = { fLocal_633, unk_0x2A488C176D52CCA5(Local_76.f_7[0 /*3*/], Local_76.f_7[1 /*3*/]), fLocal_634 };
				uVar22 = Local_76.f_24;
				if (iLocal_561 == 0)
				{
					if (unk_0xFD34717937104F1C() > iVar0)
					{
						iLocal_561 = unk_0x1638D11E5ADADAF6(Var16, Var19, 0f, 0f, uVar22, 0, 18, iVar3, 4);
					}
				}
				else
				{
					iVar7 = unk_0x7C00B4755E048785(iLocal_561, &iVar15, &uVar9, &uVar12, &uVar8);
					if (iVar7 == 2)
					{
						iLocal_559 = 0;
						if (iVar15 > 0)
						{
							if (func_52(uVar8))
							{
								iLocal_559 = 1;
							}
						}
						iLocal_561 = 0;
					}
					if (iVar7 == 0)
					{
						iLocal_561 = 0;
					}
					iVar0 = unk_0xFD34717937104F1C() + 250;
				}
			}
			Local_562[0 /*24*/].f_8 = iLocal_559;
			if (!iLocal_559 && func_371(&(Local_562[0 /*24*/])))
			{
				iVar23 = func_370(&(Local_562[0 /*24*/]));
				if (iVar23 > 1)
				{
				}
			}
			if (func_335(&Local_562, &uLocal_611, bVar1, 0, 0, 1424))
			{
				if (func_331(iVar3))
				{
					func_36(Local_76[0 /*3*/], Local_76[1 /*3*/], 3f, 0);
					func_333(iVar3, &Local_76, 1);
					func_79(unk_0xA19140A5C42D8715(), 1);
					func_169(iVar3, &Local_76, 0);
					fLocal_557 = unk_0x0ADBC1ED02016D2A(iVar3);
					Local_76.f_339 = 0;
					Local_76.f_343 = 0;
					iLocal_559 = 0;
				}
			}
		}
		Var4 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
		if (func_8(unk_0xD4E735F4B6A956AC(), 0))
		{
			Var4.f_2 = 18.5f;
		}
		if (unk_0xB7A628320EFF8E47(Var4, -700.6f, -933.4f, 18.5f) > (90f * 90f))
		{
			func_390(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_333(int iParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	
	if (func_331(iParam0))
	{
		func_34(&(uParam1->f_172[0 /*23*/]), &(uParam1->f_340), uParam1->f_342, 1, 1, 1);
		Var0 = { unk_0xFA0A034A8C86C35E(iParam0) };
		if (!func_334(uParam1->f_26, Var0, 30f) || iParam2 == 1)
		{
			func_172(iParam0, unk_0x8D0C441B2F86EA3E(unk_0xE2BBD32891C18569(iParam0, 1), *(uParam1[0 /*3*/]), *(uParam1[1 /*3*/]), 0) + Vector(0.1f, 0f, 0f));
			unk_0x92DDCF53AA47A63D(iParam0, uParam1->f_24);
			unk_0x99F546A9200EA026(iParam0, 1084227584);
			unk_0x625FB4B0328423D9(iParam0, 0f);
		}
		unk_0xC53974682AC939A9(iParam0, 0);
		uParam1->f_339 = 0;
		uParam1->f_345 = 0;
		uParam1->f_348 = 0;
		uParam1->f_349 = 0;
		if (Global_71205)
		{
			if (!unk_0xB540EEBB14C48518(iParam0))
			{
				return;
			}
		}
		func_32(iParam0, 2);
		if (unk_0xEF6267624B1C9336(iParam0, 1))
		{
			unk_0x1F47C2C85A56E64C(iParam0, 0);
		}
	}
}

bool func_334(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return unk_0x4CDDB4DE3FF7BBC4(unk_0x69C0BB7D03EE045D(func_105(Param3, Param0))) <= fParam6;
}

int func_335(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			func_366(uParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_358(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *uParam0)
				{
					if (func_371(uParam0[iVar0 /*24*/]) && (*uParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if (func_66(unk_0xD4E735F4B6A956AC(), 21))
						{
							func_357(uParam1, 6);
						}
						else if ((uParam0[iVar0 /*24*/])->f_7 || (unk_0x356461BAB19FFA77() && uParam1->f_16 == 0))
						{
							func_357(uParam1, 6);
						}
						else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
						{
							func_357(uParam1, 8);
						}
						else if (bParam2)
						{
							func_357(uParam1, 3);
						}
						else if ((uParam0[iVar0 /*24*/])->f_8)
						{
							func_357(uParam1, 2);
						}
						else if (!func_355((uParam0[uParam1->f_12 /*24*/])->f_9))
						{
							func_357(uParam1, 1);
						}
						else if (func_353())
						{
							func_357(uParam1, 7);
						}
						else if (func_352(uParam0[iVar0 /*24*/], &uVar1))
						{
							func_357(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_351(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_349(uParam1, uParam1->f_6);
			}
			if (func_347(uParam0[uParam1->f_12 /*24*/]) || (uParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_357(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_342(uParam1, uParam1->f_2, (uParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_347(uParam0[uParam1->f_12 /*24*/]) || func_355((uParam0[uParam1->f_12 /*24*/])->f_9))
			{
				func_357(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_349(uParam1, uParam1->f_1);
			}
			if (func_347(uParam0[uParam1->f_12 /*24*/]) || !func_358(uParam1->f_16))
			{
				func_357(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_349(uParam1, uParam1->f_3);
			}
			if ((func_347(uParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_358(uParam1->f_16))
			{
				func_357(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_349(uParam1, uParam1->f_5);
			}
			if (func_347(uParam0[uParam1->f_12 /*24*/]) || !func_358(uParam1->f_16))
			{
				func_357(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_349(uParam1, uParam1->f_4);
			}
			if (func_347(uParam0[uParam1->f_12 /*24*/]) || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
			{
				func_357(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_341())
				{
					func_349(uParam1, uParam1->f_7);
				}
				else
				{
					func_349(uParam1, uParam1->f_8);
				}
			}
			if (func_347(uParam0[uParam1->f_12 /*24*/]) || func_339(uParam0[uParam1->f_12 /*24*/]))
			{
				func_357(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			unk_0x9EA8CBEA7355649E(2, 51);
			unk_0xD481A812073CCF02(0, 101, 1);
			func_111();
			if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
			{
				func_357(uParam1, 8);
				return 0;
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_357(uParam1, 2);
				return 0;
			}
			if (func_347(uParam0[uParam1->f_12 /*24*/]) || !func_358(uParam1->f_16))
			{
				func_357(uParam1, 0);
				return 0;
			}
			if (Global_68494)
			{
				return 0;
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) || func_338(unk_0xA19140A5C42D8715(), 0) != -1)
				{
					func_357(uParam1, 0);
					return 0;
				}
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0x356461BAB19FFA77() && uParam1->f_16 == 0))
			{
				func_357(uParam1, 6);
				return 0;
			}
			if (func_353())
			{
				func_357(uParam1, 7);
				return 0;
			}
			if (!func_355((uParam0[uParam1->f_12 /*24*/])->f_9))
			{
				func_357(uParam1, 1);
				return 0;
			}
			if (bParam2)
			{
				func_357(uParam1, 3);
				return 0;
			}
			if (!bParam2 && !uParam1->f_9)
			{
				func_342(uParam1, *uParam1, (uParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && !unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
			}
			if (unk_0xD1ABB20CFF127CCC() || unk_0x2F161E7C6520CC0A())
			{
				return 0;
			}
			if (unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
			{
				if ((unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715()) || unk_0x834C766390D40EBF(unk_0xA19140A5C42D8715())) || unk_0xA4675B1CB298BFAA(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if ((unk_0x2C09842CA701A793(unk_0xA19140A5C42D8715()) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0xC35EE16DB41A098F(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x00819D7272FAC59E(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x2170AAD0EEFAA195(unk_0xA19140A5C42D8715()) || unk_0x443A3698D0CD9D06(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0xEAA5CEF8875FEEED(unk_0xA19140A5C42D8715()) > 0.05f)
				{
					return 0;
				}
			}
			if ((unk_0xDF0ADAD7E584090D(2, 51) && uParam1->f_9 == 1) && bParam2 == 0)
			{
				if (!func_339(uParam0[uParam1->f_12 /*24*/]))
				{
					func_357(uParam1, 9);
				}
				else
				{
					func_357(uParam1, 5);
				}
			}
			break;
		
		case 5:
			if (unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x61346376C1469A0E("SCRIPT\CARWASH", 0, -1))
				{
				}
			}
			func_351(uParam1);
			(uParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_357(uParam1, 0);
				return 1;
			}
			unk_0x135C61E339DABBAC(1);
			unk_0x9827D9AC8985F888(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 20f, 0);
			if (!unk_0x429D45A6C6520026((uParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0xD75A4240F0AD8613((uParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0xB1FDFCECA75CE4A7((uParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_111();
					if (func_331(unk_0xA19140A5C42D8715()))
					{
						if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && !Global_71205)
						{
							func_336(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 2f, 1, 1056964608, 0, 1, 0);
						}
					}
					unk_0x9EA8CBEA7355649E(2, 51);
					unk_0xD75A4240F0AD8613((uParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0xD481A812073CCF02(0, 101, 1);
					unk_0xD481A812073CCF02(0, 75, 1);
					unk_0xD481A812073CCF02(0, 23, 1);
					unk_0x4EDE34FBADD967A6(0);
				}
				if (bParam3)
				{
					unk_0x9662BE461F9FDF9E(250);
				}
				if (unk_0xB1FDFCECA75CE4A7((uParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0x71364F510A1CB69F())
						{
							if (func_331(unk_0xA19140A5C42D8715()))
							{
								if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && !Global_71205)
								{
									func_336(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 2f, 1, 1056964608, 0, 1, 0);
								}
							}
							unk_0x9EA8CBEA7355649E(2, 51);
							unk_0xD481A812073CCF02(0, 101, 1);
							unk_0xD481A812073CCF02(0, 75, 1);
							unk_0xD481A812073CCF02(0, 23, 1);
							func_111();
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					unk_0xE81651AD79516E48((uParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0x4659F4154D948B01((uParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_336(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xD481A812073CCF02(0, 71, 1);
	unk_0xD481A812073CCF02(0, 72, 1);
	unk_0xD481A812073CCF02(0, 76, 1);
	unk_0xD481A812073CCF02(0, 73, 1);
	unk_0xD481A812073CCF02(0, 59, 1);
	unk_0xD481A812073CCF02(0, 60, 1);
	if (bParam5)
	{
		unk_0xD481A812073CCF02(0, 75, 1);
	}
	unk_0xD481A812073CCF02(0, 80, 1);
	if (!bParam6)
	{
		unk_0xD481A812073CCF02(0, 69, 1);
		unk_0xD481A812073CCF02(0, 70, 1);
		unk_0xD481A812073CCF02(0, 68, 1);
	}
	unk_0xD481A812073CCF02(0, 74, 1);
	unk_0xD481A812073CCF02(0, 86, 1);
	unk_0xD481A812073CCF02(0, 81, 1);
	unk_0xD481A812073CCF02(0, 82, 1);
	unk_0xD481A812073CCF02(0, 138, 1);
	unk_0xD481A812073CCF02(0, 136, 1);
	unk_0xD481A812073CCF02(0, 114, 1);
	unk_0xD481A812073CCF02(0, 107, 1);
	unk_0xD481A812073CCF02(0, 110, 1);
	unk_0xD481A812073CCF02(0, 89, 1);
	unk_0xD481A812073CCF02(0, 89, 1);
	unk_0xD481A812073CCF02(0, 87, 1);
	unk_0xD481A812073CCF02(0, 88, 1);
	unk_0xD481A812073CCF02(0, 113, 1);
	unk_0xD481A812073CCF02(0, 115, 1);
	unk_0xD481A812073CCF02(0, 116, 1);
	unk_0xD481A812073CCF02(0, 117, 1);
	unk_0xD481A812073CCF02(0, 118, 1);
	unk_0xD481A812073CCF02(0, 119, 1);
	unk_0xD481A812073CCF02(0, 131, 1);
	unk_0xD481A812073CCF02(0, 132, 1);
	unk_0xD481A812073CCF02(0, 123, 1);
	unk_0xD481A812073CCF02(0, 126, 1);
	unk_0xD481A812073CCF02(0, 129, 1);
	unk_0xD481A812073CCF02(0, 130, 1);
	unk_0xD481A812073CCF02(0, 133, 1);
	unk_0xD481A812073CCF02(0, 134, 1);
	unk_0x8BCFD05DF9BB6004();
	func_337(iParam0);
	if ((unk_0xFD34717937104F1C() - Global_29) > 500)
	{
		unk_0x0185AEECD1FF63F3(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xFD34717937104F1C();
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0x69C0BB7D03EE045D(unk_0xEAA5CEF8875FEEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_337(int iParam0)
{
	if (!unk_0x7112137033807390(uParam0, 0))
	{
		if (unk_0xE276FD46E2FAC906(iParam0))
		{
			if (unk_0x7FBA23EA56BC811C(iParam0))
			{
				unk_0xAA99F8210C8FE6FD(iParam0, 0);
			}
		}
	}
}

int func_338(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (unk_0x5D7DFE2058701942(iParam0, iParam1))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, iParam1);
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				iVar1 = unk_0xE251DF9395C4E1C4(unk_0x8F474E419F56E48D(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x588F5E48C78F1C73(iVar0, iVar3, 0))
					{
						if (unk_0xB0D49A1F9F054602(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_339(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xA19140A5C42D8715();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_35(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iVar3 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (func_331(iVar3))
		{
			Var0 = { unk_0x288B716F47E9BBBC(iVar3, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar4 = iVar3;
		}
	}
	Var0 = { unk_0xFA0A034A8C86C35E(iVar4) };
	if (func_340(uParam0->f_12, Var0) > unk_0xD0FFB162F40A139C(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_340(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1));
}

bool func_341()
{
	var uVar0;
	
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		uVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		return unk_0xE0DEA0A8127CF965(uVar0, 1119092736);
	}
	return unk_0xE0DEA0A8127CF965(unk_0xA19140A5C42D8715(), 1119092736);
}

int func_342(var uParam0, char* sParam1, var uParam2)
{
	if (unk_0x429D45A6C6520026(uParam1))
	{
		return 0;
	}
	if (func_344(uParam0) || !unk_0xE06AA0996C4E4E03())
	{
		unk_0x135C61E339DABBAC(1);
		func_343(sParam1, uParam2);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_343(var uParam0, var uParam1)
{
	unk_0x143A55A4EA118F24(uParam0);
	unk_0xCDA87E1DA52C8C9D(uParam1);
	unk_0x9E55AC8543FF8836(0, 1, 1, -1);
}

int func_344(var uParam0)
{
	if (unk_0x429D45A6C6520026(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0xE06AA0996C4E4E03())
	{
		return 0;
	}
	if (unk_0x3CAC2741CC1A631F(*uParam0, uParam0->f_14) || unk_0x3CAC2741CC1A631F(uParam0->f_2, uParam0->f_14))
	{
		return func_346(uParam0->f_14, uParam0->f_15);
	}
	return func_345(uParam0->f_14);
}

var func_345(var uParam0)
{
	unk_0x42FEBE6569FBB03A(uParam0);
	return unk_0x3D94488A86ABB03F(0);
}

var func_346(var uParam0, var uParam1)
{
	unk_0x42FEBE6569FBB03A(uParam0);
	unk_0xCDA87E1DA52C8C9D(uParam1);
	return unk_0x3D94488A86ABB03F(0);
}

bool func_347(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			return 1;
		}
		if (func_338(unk_0xA19140A5C42D8715(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_95(unk_0xA19140A5C42D8715(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_348(uParam0->f_16, 2f) };
	return !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}

struct<8> func_348(struct<8> Param0, float fParam8)
{
	struct<8> Var0;
	struct<3> Var8;
	
	Var0 = 2;
	Var8 = { func_37(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam8, fParam8, fParam8) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var8 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var8 };
	Var0.f_7 = (Param0.f_7 + (fParam8 * 2f));
	return Var0;
}

int func_349(var uParam0, char* sParam1)
{
	if (unk_0x429D45A6C6520026(uParam1))
	{
		return 0;
	}
	if (func_344(uParam0) || !unk_0xE06AA0996C4E4E03())
	{
		unk_0x135C61E339DABBAC(1);
		func_350(sParam1);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_350(var uParam0)
{
	unk_0x143A55A4EA118F24(uParam0);
	unk_0x9E55AC8543FF8836(0, 1, 1, -1);
}

void func_351(var uParam0)
{
	if (func_344(uParam0))
	{
		unk_0x135C61E339DABBAC(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

int func_352(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5[32];
	
	iVar2 = -1;
	fVar4 = 1f;
	if (!unk_0x4C9BACA8D249CB13())
	{
		return 1;
	}
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xA4C9135FF4C7C4D2(unk_0xA19140A5C42D8715(), &uVar5);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_331(uVar5[iVar1]))
		{
			fVar3 = func_86(uVar5[iVar1], uParam0->f_1, 1);
			if (fVar3 < fVar4 || fVar4 == -1f)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		return 0;
	}
	if (unk_0xB0D49A1F9F054602(uVar5[iVar2], -1, 0) != unk_0xA19140A5C42D8715())
	{
		return 0;
	}
	*uParam1 = uVar5[iVar2];
	return 1;
}

bool func_353()
{
	int iVar0;
	
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	if (unk_0x463E3A48A46C9195(iVar0))
	{
		return 1;
	}
	if (func_354(iVar0))
	{
		return 1;
	}
	if (func_62(iVar0, 3))
	{
		return 1;
	}
	return !unk_0x1095F403F52B42E1(iVar0, 0);
}

int func_354(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (!unk_0x463E3A48A46C9195(iParam0))
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

bool func_355(int iParam0)
{
	if (unk_0x4C9BACA8D249CB13())
	{
		return unk_0x77F1D3747701BB35(iParam0, -1);
	}
	return func_356(func_158()) >= iParam0;
}

int func_356(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x2AD48F3CEBA882E9(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x2AD48F3CEBA882E9(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x2AD48F3CEBA882E9(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

void func_357(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_351(uParam0);
}

int func_358(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_365())
		{
			return 0;
		}
	}
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (unk_0x2F161E7C6520CC0A())
	{
		return 0;
	}
	if (func_364())
	{
		return 0;
	}
	if (Global_56175)
	{
		return 0;
	}
	if (func_363(0))
	{
		return 0;
	}
	if (func_49(0))
	{
		return 0;
	}
	if (func_359(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	return 1;
}

int func_359(int iParam0)
{
	if (func_362(iParam0))
	{
		return 1;
	}
	if (func_360(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_360(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_361(iParam0, 9);
	}
	return 0;
}

bool func_361(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

int func_362(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

bool func_363(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

bool func_364()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

int func_365()
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	return 1;
}

void func_366(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_367(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_100(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_367(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_368(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_368(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13[8];
	int iVar38;
	
	if (fParam6 == 0f)
	{
		return;
	}
	Var0 = { func_37(Param3 - Param0) };
	Var3 = { func_369(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	unk_0x29D902B60F2CD9AB(Var13[0 /*3*/], Var13[1 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x29D902B60F2CD9AB(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x29D902B60F2CD9AB(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x29D902B60F2CD9AB(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0x29D902B60F2CD9AB(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x29D902B60F2CD9AB(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x29D902B60F2CD9AB(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x29D902B60F2CD9AB(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x29D902B60F2CD9AB(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x29D902B60F2CD9AB(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x29D902B60F2CD9AB(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x29D902B60F2CD9AB(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_369(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

int func_370(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	float fVar35;
	int iVar36;
	
	iVar0 = unk_0xA4C9135FF4C7C4D2(unk_0xA19140A5C42D8715(), &uVar2);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_331(uVar2[iVar1]))
		{
			fVar35 = func_86(uVar2[iVar1], uParam0->f_1, 1);
			if (fVar35 <= (uParam0->f_10 * 2.5f))
			{
				iVar36++;
			}
		}
		iVar1++;
	}
	return iVar36;
}

bool func_371(var uParam0)
{
	func_331(unk_0xA19140A5C42D8715());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_363(0))
	{
		return 0;
	}
	if (func_364())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			return 0;
		}
		if (func_338(unk_0xA19140A5C42D8715(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return func_95(unk_0xA19140A5C42D8715(), uParam0->f_1, uParam0->f_10);
}

int func_372(int iParam0)
{
	if (!unk_0x425CD7B17352316F(unk_0x8F474E419F56E48D(iParam0)))
	{
		return 1;
	}
	if (unk_0x39FC9AD10285F177(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x39FC9AD10285F177(iParam0, 1))
	{
		return 1;
	}
	if (unk_0x39FC9AD10285F177(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x39FC9AD10285F177(iParam0, 3))
	{
		return 1;
	}
	if (unk_0xEF6267624B1C9336(iParam0, 1))
	{
		if (unk_0x392DF1C78010FB0C(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_373(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_5(iParam0))
	{
		return 0;
	}
	if (!unk_0x0F3E411830C671BC(iParam0))
	{
		return 1;
	}
	if (unk_0xD53D19F97BC843F7(iParam0))
	{
		return 1;
	}
	if (!unk_0x425CD7B17352316F(unk_0x8F474E419F56E48D(iParam0)))
	{
		return 1;
	}
	if (unk_0x463E3A48A46C9195(iParam0))
	{
		return 1;
	}
	if (func_374(iParam0))
	{
		return 1;
	}
	unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iParam0), &Var0, &Var3);
	if (unk_0x69C0BB7D03EE045D((Var3.f_0 - Var0.f_0)) > 3.4f)
	{
		return 1;
	}
	if (unk_0x69C0BB7D03EE045D((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_71205)
	{
		if (!unk_0xB540EEBB14C48518(iParam0))
		{
			return 0;
		}
	}
	if (unk_0xEF6267624B1C9336(iParam0, 1) && !unk_0x0F3E411830C671BC(iParam0))
	{
		return 1;
	}
	if (!unk_0xEF6267624B1C9336(iParam0, 1) && !unk_0x0F3E411830C671BC(iParam0))
	{
		return 1;
	}
	if (unk_0x8F474E419F56E48D(iParam0) == joaat("btype") || unk_0x8F474E419F56E48D(iParam0) == joaat("btype3"))
	{
		if (((((func_5(unk_0xB0D49A1F9F054602(iParam0, 3, 0)) || func_5(unk_0xB0D49A1F9F054602(iParam0, 4, 0))) || func_5(unk_0xB0D49A1F9F054602(iParam0, 5, 0))) || func_5(unk_0xB0D49A1F9F054602(iParam0, 6, 0))) || func_5(unk_0xB0D49A1F9F054602(iParam0, 7, 0))) || func_5(unk_0xB0D49A1F9F054602(iParam0, 8, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_374(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8F474E419F56E48D(uParam0);
	if (func_375(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0xED6D3EA61B44622B(iParam0, 2))
		{
			return 1;
		}
		if (unk_0xED6D3EA61B44622B(iParam0, 3) && unk_0xED6D3EA61B44622B(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0xED6D3EA61B44622B(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && unk_0xED6D3EA61B44622B(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !unk_0x0F3E411830C671BC(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && unk_0xED6D3EA61B44622B(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !unk_0xED6D3EA61B44622B(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && unk_0xED6D3EA61B44622B(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0xED6D3EA61B44622B(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0xED6D3EA61B44622B(iParam0, 3) && !unk_0xED6D3EA61B44622B(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_375(int iParam0)
{
	if (!unk_0x425CD7B17352316F(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case joaat("dune3"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("vigilante"):
		case joaat("deluxo"):
		case joaat("caracara"):
		case joaat("scramjet"):
		case joaat("menacer"):
			return 1;
		
		default:
	}
	return 0;
}

int func_376()
{
	var uVar0;
	
	func_382(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_381())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_380())
	{
		return 1;
	}
	if (func_379(157))
	{
		if (!func_378())
		{
			return 1;
		}
	}
	if (func_379(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_377() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_377()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_377()
{
	switch (func_21())
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

bool func_378()
{
	return Global_2448386.f_587;
}

int func_379(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_380()
{
	return Global_2458191;
}

bool func_381()
{
	return Global_2448386.f_582;
}

void func_382(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x8866A4E42CDA3EF1(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -563286670:
					func_383(iVar0);
					break;
				
				case 566035618:
					unk_0x8866A4E42CDA3EF1(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -1989728150)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_383(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &Var0, 3))
	{
		if (func_65(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0xEE978C39384D834F(Var0.f_1);
			if (unk_0xDC5D81351D6A4DDB(iVar3))
			{
				if (unk_0x5D7DFE2058701942(iVar3, 0))
				{
					uVar4 = unk_0xCAEB6CE71A2C7212(iVar3, 0);
					if (unk_0xEB1A41F6F719807C(uVar4, Var0.f_2) && unk_0xB592B7A61F21E7A5())
					{
						if (func_384(uVar4, &bVar5))
						{
							unk_0x3D2495030621765B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x792676988A48387F(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_384(int iParam0, var uParam1)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0))
	{
		if (!unk_0x4943BEEC19289B8E(iParam0))
		{
			if (unk_0xCC01DCC72D8B9E39(iParam0))
			{
				if (!unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(iParam0)))
				{
					unk_0x1F7948851FB36E88(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x82384F63D814C864(iParam0, 0))
		{
			if (unk_0xB540EEBB14C48518(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_385(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_71205)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0x332D85764ED0503F() || unk_0x7DD04831D0FC44CA())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0x365C4466BC171A2D() || unk_0x29A02C184A66D25E())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_386(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_12 = { func_37(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_90(fParam4, 0f, 360f);
}

void func_387(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { Param3 };
	uParam0->f_4 = sParam7;
	uParam0->f_9 = iParam6;
	uParam0->f_7 = iParam8;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam9 > 0f)
	{
		uParam0->f_10 = fParam9;
	}
}

Vector3 func_388(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_25834[iVar0 /*23*/][0 /*3*/];
}

var func_389()
{
	return Global_1312857;
}

void func_390(int iParam0)
{
	func_394(&Local_76);
	func_393(&Local_76, iParam0);
	func_392(&uLocal_439);
	if (Global_71205 == 0)
	{
		func_391(&iLocal_628);
	}
	unk_0x8F1A9FE6D91AAFEB();
}

void func_391(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_36079)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_36078 = 0;
	Global_36080 = 0;
	Global_36117 = 15;
	Global_56178 = 0;
	Global_56179 = 0;
}

void func_392(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_177(uParam0, iVar0);
		iVar0++;
	}
}

void func_393(var uParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	
	func_394(uParam0);
	if (Global_71205)
	{
		iVar3 = unk_0x77065AD41B64E946(unk_0xA19140A5C42D8715());
		if (iVar3 != func_25())
		{
			if (Global_2423801[iVar3 /*413*/].f_234 == 1)
			{
				Global_2423801[iVar3 /*413*/].f_234 = 0;
			}
		}
	}
	if (iParam1 == 1)
	{
		unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
		func_171(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), uParam0, 1f, 0f);
		unk_0x99F546A9200EA026(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 1084227584);
		unk_0xE192BEF245E3374D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0f, 0f, 0f);
		unk_0x4EDE34FBADD967A6(0);
		func_68(unk_0xA19140A5C42D8715());
		Var0 = { unk_0xE2BBD32891C18569(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 1) };
		Var0.f_2 = -200f;
		unk_0x4299736016AECE26(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), Var0, 1, 0, 0, 1);
		func_56(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 500f, 0f);
		func_32(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 1);
		unk_0x4EDE34FBADD967A6(125);
		unk_0x70C1F5AA59767FE6(500);
		unk_0x4EDE34FBADD967A6(1000);
		func_17(302, 0, 0);
		func_113(uParam0->f_351);
	}
	else if (!unk_0x4C9BACA8D249CB13())
	{
		unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
	}
	if (!Global_71205)
	{
		unk_0x80C9DD9E4EFF4730("launcher_CarWash");
	}
}

void func_394(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_3(1, 1, 1, 1);
	}
	func_24(unk_0xA19140A5C42D8715());
	func_401(0);
	uParam0->f_348 = 0;
	uParam0->f_349 = 0;
	func_82(uParam0, 0);
	func_81(uParam0);
	func_80(uParam0);
	func_398(&(uParam0->f_120));
	func_395(&(uParam0->f_93));
	func_71(&(uParam0->f_51));
	func_71(&(uParam0->f_30));
	func_71(&(uParam0->f_72));
	func_38(uParam0->f_334, 0, 0, 1, 0);
	func_29(&(uParam0->f_340), 0);
	if (unk_0x2F8EAF18929E1E59("CAR_WASH_SCENE"))
	{
		unk_0x5AD7D03C214BDA88("CAR_WASH_SCENE");
	}
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0);
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			uVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (func_331(uVar0))
			{
				func_32(uVar0, 1);
				func_168(uVar0);
			}
		}
	}
	if (Global_71205)
	{
		iVar1 = unk_0x77065AD41B64E946(unk_0xA19140A5C42D8715());
		if (iVar1 != func_25())
		{
			if (Global_2423801[iVar1 /*413*/].f_234 == 1)
			{
				Global_2423801[iVar1 /*413*/].f_234 = 0;
			}
		}
	}
	uVar0 = unk_0xC409B91AC4749F88();
	if (func_331(uVar0))
	{
		func_32(uVar0, 1);
		func_168(uVar0);
	}
	unk_0x8C15CE28B371C038(uParam0->f_352, uParam0->f_355, 0);
	unk_0x66E6A13BAFFFB63C("DRIVE", 1);
	unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_DRIVE_SOLO", 1);
}

void func_395(var uParam0)
{
	func_396(uParam0);
	func_73(&(uParam0->f_19));
}

void func_396(var uParam0)
{
	*uParam0 = 3;
	func_397(uParam0);
}

void func_397(var uParam0)
{
	if (func_78(*uParam0))
	{
		func_77(&(uParam0->f_21));
		func_75(&(uParam0->f_17));
		func_75(&(uParam0->f_16));
		func_75(&(uParam0->f_18));
		*uParam0 = 0;
	}
}

void func_398(var uParam0)
{
	func_399(uParam0);
	func_73(&(uParam0->f_3[0]));
	func_73(&(uParam0->f_3[1]));
}

void func_399(var uParam0)
{
	uParam0->f_2 = 0;
	func_400(uParam0);
	func_73(&(uParam0->f_1));
}

void func_400(var uParam0)
{
	if (func_78(uParam0->f_2))
	{
		func_77(&(uParam0->f_6[0]));
		func_77(&(uParam0->f_6[1]));
		func_75(&(uParam0->f_28));
		func_75(&(uParam0->f_27));
		func_75(&(uParam0->f_29));
		uParam0->f_2 = 0;
	}
}

void func_401(bool bParam0)
{
	if (bParam0)
	{
		func_402();
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 16);
		}
		Global_14513.f_1 = 1;
		if (func_49(0))
		{
			func_47(0);
		}
	}
	else if (Global_14513.f_1 == 1)
	{
		if (!Global_14513.f_1 == 0)
		{
			Global_14513.f_1 = 3;
		}
	}
}

void func_402()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

