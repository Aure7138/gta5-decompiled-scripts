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
	int iLocal_28 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_117[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_186[68];
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	struct<114> Local_402 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_516 = { 0, 0, 0, 0, 0 } ;
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
	struct<74> Local_546 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 2;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646[4] = { 0, 0, 0, 0 };
	int iLocal_651 = 0;
	int iLocal_652[1] = { 0 };
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664[2] = { 0, 0 };
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	bool bLocal_673 = 0;
	struct<13> Local_674 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	struct<81> Local_695 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_776 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_936[3] = { 0, 0, 0 };
	int iLocal_940 = 0;
	var uLocal_941[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	bool bLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	bool bLocal_1018 = 0;
	char cLocal_1019[16] = "";
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	char cLocal_1023[16] = "";
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	int iLocal_1034 = 0;
	char* sLocal_1035 = NULL;
	int iLocal_1036 = 0;
	int iLocal_1037 = 0;
	float fLocal_1038 = 0f;
	int iLocal_1039 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_655 = -1;
	iLocal_656 = -1;
	iLocal_661 = -1;
	iLocal_668 = -1;
	iLocal_940 = -1;
	unk_0xF160EBCA8FFA0E2A(0);
	Local_402.f_5 = -1;
	Local_402.f_0 = -1;
	Local_402.f_1 = 99999.99f;
	func_382(&uLocal_521);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_88990[iVar0 /*3*/][0] = -1;
		Global_88990[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_101154.f_18807.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_101154.f_18807.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_101154.f_18807.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_101154.f_18807.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_101154.f_18807.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_101154.f_18807.f_4801 = -15;
		Global_101154.f_18807.f_4802 = 1;
	}
	if (((!func_381() && !func_380()) && !func_379()) && !func_378())
	{
		func_377(60, 0);
		func_377(61, 0);
	}
	func_376();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_375(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_401)
		{
			iLocal_401 = 1;
			if (unk_0x524AF15206846700(98))
			{
				if (unk_0x998ABBAD6623E9BD() == 64)
				{
					if (!Global_69308)
					{
						iLocal_401 = 0;
					}
					else
					{
						func_374();
						func_373();
					}
					Global_69308 = 0;
				}
				else
				{
					func_374();
					func_373();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xB6EFD0607BD29927() != 5)
		{
			iLocal_672 = func_371();
			func_332();
			func_330();
			func_298(&uLocal_521);
			func_276();
			func_27();
			func_19();
			func_17(&uLocal_1010);
		}
		func_1(&uLocal_521);
	}
}

void func_1(var uParam0)
{
	bool bVar0;
	float fVar1;
	
	if (!unk_0xF426A5DE932B3BEE(Global_101154.f_8706.f_25, 7))
	{
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0) && func_14(func_16()))
		{
			bVar0 = false;
			if (unk_0xF426A5DE932B3BEE(*uParam0, 6) && unk_0xF426A5DE932B3BEE(*uParam0, 12))
			{
				fVar1 = unk_0x2A488C176D52CCA5(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), uParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (uParam0->f_2 == -1)
					{
						uParam0->f_2 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(10000, 15000));
					}
					else
					{
						if (func_13())
						{
							uParam0->f_2 = func_12(uParam0->f_2, (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(2000, 4000)));
						}
						if (!unk_0xF426A5DE932B3BEE(*uParam0, 23))
						{
							func_11(uParam0, &(uParam0->f_9));
						}
						else if (!unk_0xF426A5DE932B3BEE(*uParam0, 30))
						{
							if (unk_0x386AEE656157CB3A(&(uParam0->f_9), 0))
							{
								if (unk_0xA0F74982C6AAA9D4() > uParam0->f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(uParam0, func_6(uParam0));
										func_3(0);
										unk_0x26545538B51562AD(uParam0, 30);
									}
								}
							}
						}
						else if (unk_0x1E18C8095B37D998(uParam0->f_1))
						{
							unk_0xF17F4B0641AB2DE1(uParam0, 30);
							unk_0xB79BFBEF5A2CE64B(uParam0->f_1);
							uParam0->f_1 = -1;
							uParam0->f_2 = -1;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (unk_0xF426A5DE932B3BEE(*uParam0, 23))
				{
					func_2(uParam0);
				}
				unk_0xF17F4B0641AB2DE1(uParam0, 30);
				uParam0->f_2 = -1;
			}
		}
	}
}

void func_2(var uParam0)
{
	unk_0xE2C17B4C500D756C();
	unk_0xF17F4B0641AB2DE1(uParam0, 23);
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		unk_0x26545538B51562AD(&(Global_101154.f_8706.f_25), 22);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_8706.f_25), 22);
	}
}

void func_4(var uParam0, struct<3> Param1)
{
	struct<16> Var0;
	struct<16> Var16;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var16 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	uParam0->f_1 = unk_0x9EE81D7901D9BCE2();
	unk_0xB3062467BC9D98A8(uParam0->f_1, &Var0, Param1, &Var16, 0, 0, 0);
}

struct<16> func_5(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<16> Var0;
	
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

Vector3 func_6(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		Var3 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
		Var6 = { func_7(uParam0->f_6 - Var3) * Vector(52.5f, 52.5f, 52.5f) };
		Var0 = { Var3 + Var6 };
	}
	return Var0;
}

Vector3 func_7(struct<3> Param0)
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

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0x71D2CBF04FD5E207(0, 36))
	{
		unk_0x26545538B51562AD(&(Global_101154.f_8706.f_25), 22);
	}
	bVar0 = unk_0xF426A5DE932B3BEE(Global_101154.f_8706.f_25, 22);
	if (iParam0 && bVar0)
	{
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_8706.f_25), 22);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_9()
{
	var uVar0;
	
	uVar0 = func_10(Global_101154.f_8706.f_25, 14336, 11);
	return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)
{
	return unk_0x97EF1E5BCE9DC075((uParam0 && iParam1), iParam2);
}

void func_11(var uParam0, var uParam1)
{
	unk_0x386AEE656157CB3A(uParam1, 0);
	unk_0x26545538B51562AD(uParam0, 23);
}

int func_12(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_13()
{
	bool bVar0;
	
	bVar0 = unk_0xF426A5DE932B3BEE(Global_101154.f_8706.f_25, 22);
	return (func_8(0, 0) && !bVar0);
}

bool func_14(int iParam0)
{
	return iParam0 == func_15();
}

int func_15()
{
	return joaat("ig_orleans");
}

int func_16()
{
	return unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030());
}

void func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1320775.f_21)
	{
		iVar1 = func_18(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1320775.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = unk_0x21C425AF9EA319E7(iVar0);
			if (Global_1320775[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1320775[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = unk_0x7D5F946BC15EF4E0(iVar0);
			if (Global_1320775[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1320775[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = unk_0x04067B773710819E(iVar0);
			}
			else
			{
				fVar2 = unk_0xA888ABBC2ABAD9F5(iVar0);
			}
			if (Global_1320775[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1320775[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = unk_0x40CD46AED1E463E7(iVar0);
			if (Global_1320775[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1320775[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

int func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				case 6:
					return 6;
				
				case 7:
					return 7;
				
				case 8:
					return 8;
				
				case 9:
					return 9;
				
				case 10:
					return 10;
				
				case 11:
					return 11;
				
				case 12:
					return 12;
				
				case 13:
					return 13;
				
				case 14:
					return 17;
				
				case 15:
					return 18;
				
				case 16:
					return 19;
				
				case 17:
					return 20;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 15;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 16;
				
				default:
			}
			break;
	}
	return -1;
}

void func_19()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x7B4654D62B7E0E9E(Global_68319.f_583))
	{
		bVar0 = false;
		if (iLocal_672 != Global_68319.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_26(0) || func_26(3)) || func_26(2)) || func_26(4)) || func_26(13)) || func_26(14))
		{
			bVar0 = true;
		}
		else if (Global_68319.f_590)
		{
			if (!func_25(Global_68319.f_584, unk_0xFB4AA60106DBA831(Global_68319.f_583), 1056964608, 0) || func_21(Global_68319.f_582, func_22(Global_68319.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_68319.f_591)
		{
			if (!func_25(Global_68319.f_587, unk_0xFB4AA60106DBA831(Global_68319.f_583), 1056964608, 0) || func_21(Global_68319.f_582, func_22(Global_68319.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!unk_0xD2CFFE76B625AE55(Global_68319.f_581) || !unk_0x0B4DDB992C7BCF57(Global_68319.f_581, 0)) || (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_68319.f_581, 0)))
		{
			if (unk_0xD2CFFE76B625AE55(Global_68319.f_581) && !unk_0x0B4DDB992C7BCF57(Global_68319.f_581, 0))
			{
				Global_68319.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (unk_0xD2CFFE76B625AE55(Global_68319.f_581))
		{
			if (unk_0x0B4DDB992C7BCF57(Global_68319.f_581, 0))
			{
				Global_68319.f_587 = { unk_0xA8CFDE65C45F813B(Global_68319.f_581, 1) };
			}
			else
			{
				Global_68319.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0x9403D0F4C7711241(&(Global_68319.f_583));
			Global_68319.f_590 = 0;
			Global_68319.f_591 = 0;
			Global_68319.f_581 = 0;
		}
	}
	else
	{
		Global_68319.f_590 = 0;
		Global_68319.f_591 = 0;
		Global_68319.f_581 = 0;
	}
	if ((((((!unk_0x7B4654D62B7E0E9E(Global_68319.f_583) && !func_26(0)) && !func_26(3)) && !func_26(2)) && !func_26(4)) && !func_26(13)) && !func_26(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_88952[iVar2] != 145 && Global_88962[iVar2] != 0) && unk_0xD2CFFE76B625AE55(Global_88942[iVar2])) && unk_0x0B4DDB992C7BCF57(Global_88942[iVar2], 0)) && !unk_0x7B4654D62B7E0E9E(unk_0x946E2000B30012F6(Global_88942[iVar2]))) && Global_88952[iVar2] == iLocal_672) && unk_0xA8059F869DFB2747(unk_0x946C63BD9EF05437(Global_88942[iVar2])))
			{
				if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_88942[iVar2], 0))
				{
					Global_68319.f_581 = Global_88942[iVar2];
					Global_68319.f_582 = iLocal_672;
					Global_68319.f_590 = 0;
					Global_68319.f_583 = unk_0xABF4388EB11AD060(Global_68319.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0x7B4654D62B7E0E9E(Global_68319.f_583) && !func_20(Global_68319.f_584, 0f, 0f, 0f, 0))
			{
				Global_68319.f_581 = 0;
				Global_68319.f_582 = iLocal_672;
				Global_68319.f_590 = 1;
				Global_68319.f_583 = unk_0x43B8950858CAD66F(Global_68319.f_584);
			}
			if (!unk_0x7B4654D62B7E0E9E(Global_68319.f_583) && !func_20(Global_68319.f_587, 0f, 0f, 0f, 0))
			{
				Global_68319.f_581 = 0;
				Global_68319.f_582 = iLocal_672;
				Global_68319.f_591 = 1;
				Global_68319.f_583 = unk_0x43B8950858CAD66F(Global_68319.f_587);
			}
		}
		else
		{
			Global_68319.f_590 = 0;
			Global_68319.f_591 = 0;
		}
		if (unk_0x7B4654D62B7E0E9E(Global_68319.f_583))
		{
			unk_0x216986E3E3E543F2(Global_68319.f_583, 225);
			unk_0xC5B67A5E18AF2B72(Global_68319.f_583, "PVEHICLE");
			unk_0xBFAFDBA74467F7B4(Global_68319.f_583, false);
			unk_0x1FDCAFA848ABB8FA(Global_68319.f_583, 3);
			if (iLocal_672 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_672 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_672 == 2)
			{
				iVar3 = 44;
			}
			unk_0x8D910E607F73E53D(Global_68319.f_583, iVar3);
		}
	}
}

bool func_20(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_21(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88942[iVar1]) && unk_0x0B4DDB992C7BCF57(Global_88942[iVar1], 0))
		{
			if (Global_88952[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0x946C63BD9EF05437(Global_88942[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_22(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_24(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_23(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_23(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101154.f_7775.f_99.f_58[128] && !Global_101154.f_7775.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_101154.f_7775.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101154.f_7775.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x43698C98CC255554((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x43698C98CC255554((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x43698C98CC255554((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x43698C98CC255554((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x43698C98CC255554((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_26(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_27()
{
	func_219();
	func_160();
	func_64();
	func_28();
}

void func_28()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (((((Local_402.f_29.f_80 && !Local_402.f_29.f_69) && Local_402.f_0 != -1) && func_63(Local_402.f_0, 0)) && func_63(Local_402.f_0, 5)) && unk_0xD32535FA4397160F(joaat("michael1")) == 0)
		{
			if (!unk_0xD2CFFE76B625AE55(Local_402.f_113))
			{
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
					if (unk_0xD2CFFE76B625AE55(iVar0) && unk_0x0B4DDB992C7BCF57(iVar0, 0))
					{
						iVar1 = unk_0x946C63BD9EF05437(iVar0);
						if (func_60(iVar1))
						{
							Local_402.f_113 = iVar0;
						}
					}
				}
			}
			else if (unk_0x0B4DDB992C7BCF57(Local_402.f_113, 0) && func_60(unk_0x946C63BD9EF05437(Local_402.f_113)))
			{
				if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_402.f_113, 0))
				{
					if (unk_0x98CEDC9398D49BB8(Local_402.f_113, Local_402.f_29.f_48, Local_402.f_29.f_51, Local_402.f_29.f_54, 0, 1, 0))
					{
						if ((!func_59(Local_402.f_113) && !func_58(Local_402.f_113)) && Local_402.f_113 != Global_68319.f_484[Local_402.f_0])
						{
							func_29(Local_402.f_0, Local_402.f_113, 1);
						}
						Local_402.f_113 = 0;
					}
				}
			}
			else
			{
				Local_402.f_113 = 0;
			}
		}
		else
		{
			Local_402.f_113 = 0;
		}
	}
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_57(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 12) && !unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68319.f_555[0 /*21*/].f_4 != unk_0x946C63BD9EF05437(iParam1))
		{
			return;
		}
	}
	if (Global_69226 != -1 && Global_69226 != iParam0)
	{
		return;
	}
	if (unk_0xD2CFFE76B625AE55(iParam1))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam1, 0))
		{
			if (!unk_0xE24B37600DCB21FC(iParam1))
			{
				unk_0xAF3355298F537BB0(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_101154.f_18807.f_4801 = func_46();
			}
			if (iParam1 != Global_68319.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_45(iParam0);
					if ((unk_0xD2CFFE76B625AE55(iVar0) && unk_0x0B4DDB992C7BCF57(iVar0, 0)) && iParam1 != iVar0)
					{
						func_30(iVar0, 145);
					}
				}
				Global_69225 = iParam1;
				Global_69226 = iParam0;
				Global_69227 = iParam2;
			}
		}
	}
}

void func_30(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_35(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x9297C590C99228DC(iParam0, -1);
		if (!unk_0xD2CFFE76B625AE55(iVar0))
		{
			iVar0 = unk_0x8704B0F200BD412D(iParam0, -1);
		}
		if (unk_0xD2CFFE76B625AE55(iVar0) && !unk_0xE4F7206742848BAF(iVar0))
		{
			if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x946C63BD9EF05437(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x75CB9E30BA492FF0(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xC1C5B83BB6719C6C(unk_0x9111F14F8ABAE773(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
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
		if (unk_0x946C63BD9EF05437(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x75CB9E30BA492FF0(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xC1C5B83BB6719C6C(unk_0x9111F14F8ABAE773(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_31(iParam0, &(Global_101154.f_18807.f_5510));
}

void func_31(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		func_34(uParam1);
		uParam1->f_66 = unk_0x946C63BD9EF05437(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x9111F14F8ABAE773(iParam0), 16);
		*uParam1 = unk_0xC960169422AD5363(iParam0);
		unk_0x923073D63782E037(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xC780DEE9C0D887BF(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x0C8CAFCFEDEEF36D(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xEF90EF7B0A4543EE(iParam0);
		uParam1->f_67 = unk_0xC3362AC1471926AA(iParam0);
		uParam1->f_69 = unk_0xA2A724EEE80F007F(iParam0);
		uParam1->f_70 = unk_0x977E90DD5881BA08(iParam0);
		unk_0x477102A8963B16B4(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x486F923523D0F4DB(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8A455A983374FA6C(iParam0, 2))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 28);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 3))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 29);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 30);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 1))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x1BCE164A254176FA(iParam0, 0))
		{
			uParam1->f_68 = unk_0xD3A88CAE99C338A3(iParam0);
		}
		if (unk_0xEC6E5897335290DD(uParam1->f_66))
		{
			if (unk_0x7D5667109E828021(iParam0))
			{
				switch (unk_0xDBA4852736CE4FDB(iParam0))
				{
					case 2:
					case 0:
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 23);
						unk_0x26545538B51562AD(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 23);
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x26545538B51562AD(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x480DA4A4EBDCE31C(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 9);
		}
		if (unk_0x6509ED7AD3D989FE(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 10);
		}
		if (unk_0xFD1E4AF84D93E688(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 13);
			unk_0x3E4DACD1434531DD(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE00D5F67AE8F1A68(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 12);
		}
		func_33(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3D866A165E63B4FE(iParam0, iVar0 + 1))
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), func_32(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3E70A6BAFEE797B2(iParam0, 0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 11);
		}
		if (unk_0xE8E046017EE675F2(iParam0, "IgnoredByQuickSave") && unk_0xF47B23D65F733C81(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 27);
		}
	}
}

int func_32(int iParam0)
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

int func_33(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0B4DDB992C7BCF57(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x41EEFFCF5FB2A6E4(*iParam0) == 0)
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
			if (unk_0x56F45DEAAF97E44B(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xC90889BF6C7006D1(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x0334928DD9F6AEB8(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x0334928DD9F6AEB8(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_34(var uParam0)
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

int func_35(int iParam0)
{
	if ((((((((((!unk_0xD2CFFE76B625AE55(iParam0) || !unk_0x0B4DDB992C7BCF57(iParam0, 0)) || func_43(iParam0, 0, 0)) || func_43(iParam0, 1, 0)) || func_43(iParam0, 2, 0)) || func_42(iParam0) != 145) || func_41(iParam0)) || func_59(iParam0)) || func_58(iParam0)) || func_40(iParam0)) || !func_36(unk_0x946C63BD9EF05437(iParam0)))
	{
		if (func_59(iParam0))
		{
		}
		if (func_59(iParam0))
		{
		}
		if (func_43(iParam0, 0, 0))
		{
		}
		if (func_43(iParam0, 1, 0))
		{
		}
		if (func_43(iParam0, 2, 0))
		{
		}
		if (func_42(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_36(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_37(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xD3AE48D8EB7DCBE6(iParam0) || unk_0xEC6E5897335290DD(iParam0)) || unk_0xDBFA5C79D9B3D622(iParam0)) || unk_0x5BFC131B92C92E97(iParam0))
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

int func_37(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xCCCEEEDD3FD9AA24(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x0E063DDE8855EC52())) || (iParam0 == joaat("buffalo3") && !unk_0x0E063DDE8855EC52())) || (iParam0 == joaat("gauntlet2") && !unk_0x0E063DDE8855EC52())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x0E063DDE8855EC52())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_39())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF91F65A88EC73320())
		{
			if (unk_0xB1B63407FCB8DC25(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x80EC20FBCB429863(Var1.f_0))
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
		if ((((!func_381() && !func_380()) && !func_379()) && !func_378()) && !func_39())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xD0333FE560420AC5() || unk_0xDFCB321F1D24137F()) || unk_0x748A964A12412EBB())
		{
		}
		else if (!func_379())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_38(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x9CC4C10F8D665832();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_39()
{
	var uVar0;
	
	if (unk_0xB3081451628A5D6C())
	{
		if (unk_0xF8B1AB221BA632B5())
		{
			if (unk_0x4C5F5AF635DED95E())
			{
				unk_0xD0D748C6C14C0E92(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x26545538B51562AD(&uVar0, 2);
				unk_0x26545538B51562AD(&uVar0, 4);
				unk_0x26545538B51562AD(&uVar0, 6);
				unk_0x26545538B51562AD(&Global_25, 2);
				unk_0x26545538B51562AD(&Global_25, 4);
				unk_0x26545538B51562AD(&Global_25, 6);
				unk_0xE2A8B026FA4DDFFF(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x755BFB74ADDC1524())
				{
					iVar0 = unk_0xC06A80AF9911D7A8(866);
					unk_0x26545538B51562AD(&iVar0, 0);
					unk_0xD020BAA9D2E33978(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return 1;
	}
	else if (Global_138274 == 3)
	{
		return 0;
	}
	if (unk_0x755BFB74ADDC1524())
	{
		if (unk_0xF426A5DE932B3BEE(unk_0xC06A80AF9911D7A8(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x946C63BD9EF05437(iParam0);
	uVar1 = unk_0x9111F14F8ABAE773(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xC1C5B83BB6719C6C(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_37(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_41(int iParam0)
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 145;
	}
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_43(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0) || !unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_44(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xF426A5DE932B3BEE(Global_101154.f_5919[iVar9], 0))
		{
			if (unk_0x005659B4CDF2566C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_45(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68319.f_139[iParam0];
}

int func_46()
{
	var uVar0;
	
	func_56(&uVar0, unk_0x2FADF5E93AB8D64B());
	func_55(&uVar0, unk_0x51C7DC141C5D0E6B());
	func_54(&uVar0, unk_0xEFEADD7EBD01C0A6());
	func_49(&uVar0, unk_0x388418AD39C0F4DE());
	func_48(&uVar0, unk_0xE3911478C9FE04B2());
	func_47(&uVar0, unk_0x8FB5B60BC869990E());
	return uVar0;
}

void func_47(var uParam0, int iParam1)
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

void func_48(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_49(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_53(*uParam0);
	iVar1 = func_51(*uParam0);
	if (iParam1 < 1 || iParam1 > func_50(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_50(int iParam0, int iParam1)
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

var func_51(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_52(unk_0xF426A5DE932B3BEE(iParam0, 31), -1, 1)) + 2011;
}

int func_52(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_53(int iParam0)
{
	return iParam0 & 15;
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_56(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_57(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_22(0, 1);
			uParam0->f_12 = 0;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_22(0, 1);
			uParam0->f_12 = 0;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_22(1, 1);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_22(1, 2);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 19);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_22(1, 1);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_22(1, 2);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 19);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_22(2, 1);
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_22(2, 1);
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_22(2, 1);
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 27);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 27);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 27);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 11);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 11);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x26545538B51562AD(&(uParam0->f_9), 9);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x26545538B51562AD(&(uParam0->f_9), 9);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_39())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_39())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xF426A5DE932B3BEE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101154.f_18807.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_20(Global_101154.f_18807.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101154.f_18807.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101154.f_18807.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101154.f_18807.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xF426A5DE932B3BEE(uParam0->f_9, 19))
	{
		if (!func_20(Global_101154.f_1826.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101154.f_1826.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xF426A5DE932B3BEE(uParam0->f_9, 20))
	{
		if (!func_20(Global_101154.f_1826.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101154.f_1826.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]) && unk_0x0B4DDB992C7BCF57(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && unk_0x946C63BD9EF05437(Global_88942[iVar0]) == unk_0x946C63BD9EF05437(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	switch (Local_402.f_6)
	{
		case 0:
			return func_62(iParam0);
			break;
		
		case 1:
			if (((unk_0xD3AE48D8EB7DCBE6(iParam0) || unk_0x7942D30C2A703CD1(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_61(iParam0);
			break;
		
		case 2:
			return (unk_0xDBFA5C79D9B3D622(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_61(int iParam0)
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!unk_0xA8059F869DFB2747(iParam0) && !unk_0x6CCC9ABA9456E815(iParam0)) && !unk_0x9D4118D82F876A81(iParam0)) && !unk_0xF283F0E0B39E6846(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_62(int iParam0)
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!unk_0xEC6E5897335290DD(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

bool func_63(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF426A5DE932B3BEE(Global_101154.f_18807[iParam0], iParam1);
}

void func_64()
{
	struct<99> Var0;
	struct<78> Var99;
	bool bVar177;
	int iVar178;
	int iVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	struct<4> Var183;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	bool bVar194;
	int iVar195;
	bool bVar196;
	bool bVar197;
	int iVar198;
	int iVar199;
	int iVar200;
	int iVar201;
	struct<2> Var202;
	int iVar206;
	bool bVar207;
	int iVar208;
	bool bVar209;
	var uVar210;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_95 = -1;
	Var0.f_96 = 1;
	Var0.f_98 = 132;
	Var99.f_9 = 49;
	Var99.f_59 = 2;
	bVar177 = false;
	iVar178 = 0;
	if (iLocal_654 > 0 && iLocal_654 != 99)
	{
		if (((((((((((((((Local_402.f_0 == -1 || unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || !unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0)) || ((unk_0xD2CFFE76B625AE55(Global_68319.f_484[Local_402.f_0]) && unk_0x0B4DDB992C7BCF57(Global_68319.f_484[Local_402.f_0], 0)) && (unk_0xC6DE8AE3E1D78D4C(unk_0x27D769C59BC9D030(), Global_68319.f_484[Local_402.f_0]) || unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_68319.f_484[Local_402.f_0], 1)))) || ((unk_0xD2CFFE76B625AE55(Global_68319.f_484[Local_402.f_0]) && unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030())) && ((unk_0xA9C97BD080FF4ED5(unk_0x27D769C59BC9D030()) - 1f) > 0.15f && unk_0x799B2D82E6E6C363(unk_0x27D769C59BC9D030(), Global_68319.f_484[Local_402.f_0])))) || ((unk_0xD2CFFE76B625AE55(Global_68319.f_484[Local_402.f_0]) && unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030())) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_68319.f_484[Local_402.f_0], 1))) || (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()) && unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030()))) || func_26(0)) || func_26(3)) || func_26(2)) || func_26(4)) || func_26(14)) || func_159(0) != bLocal_1018) || bLocal_854) || func_158(-1082130432))
		{
			iLocal_654 = 99;
		}
	}
	switch (iLocal_654)
	{
		case 0:
			if ((((!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && unk_0x170C6E2649B67440(unk_0x4D29100D094E5511())) && !Global_68058) && !bLocal_854) && !unk_0x3934E959DB2478D3())
			{
				if ((((((((((Local_402.f_29.f_80 && Local_402.f_2 == 0) && (Global_68319.f_592[0] != -1 || func_157() != 0)) && Local_402.f_0 != -1) && !iLocal_1016) && !func_26(0)) && !func_26(3)) && !func_26(2)) && !func_26(4)) && !func_26(14)) && !func_158(-1082130432))
				{
					if (iLocal_656 != -1)
					{
					}
					else if (func_63(Local_402.f_0, 0) && func_63(Local_402.f_0, 5))
					{
						if ((unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0) && !unk_0x58D91178F8617B11(unk_0x27D769C59BC9D030())) && !unk_0xBF99E4112970270F(unk_0x27D769C59BC9D030()))
						{
							if ((!unk_0xD2CFFE76B625AE55(Global_68319.f_484[Local_402.f_0]) || !unk_0x0B4DDB992C7BCF57(Global_68319.f_484[Local_402.f_0], 0)) || (!unk_0xC6DE8AE3E1D78D4C(unk_0x27D769C59BC9D030(), Global_68319.f_484[Local_402.f_0]) && !unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_68319.f_484[Local_402.f_0], 1)))
							{
								iVar181 = func_157();
								iVar182 = 0;
								while (iVar182 < iVar181)
								{
									if (func_60(func_153(iVar182)))
									{
										iVar180++;
									}
									iVar182++;
								}
								iVar179 = 0;
								while (iVar179 < Global_68319.f_592)
								{
									if (Global_68319.f_592[iVar179] != -1)
									{
										if ((func_152(Global_68319.f_592[iVar179], iLocal_672) && Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[Global_68319.f_592[iVar179]] == -15) && (Global_68319.f_592[iVar179] != 200 || !Global_101154.f_29598.f_7))
										{
											iVar180++;
										}
									}
									iVar179++;
								}
								if (iVar180 > 0)
								{
									if (!unk_0x46768B1495288824())
									{
										iLocal_856 = 1;
										if (Local_402.f_6 == 3)
										{
											func_151(&iLocal_655, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_151(&iLocal_655, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										bLocal_1018 = func_159(0);
										iLocal_654++;
									}
								}
								else if (!iLocal_856)
								{
									if (Local_402.f_6 == 0)
									{
										if (!unk_0x46768B1495288824() || func_150("HANGAR_NO"))
										{
											func_149("HANGAR_NO", -1);
											StringCopy(&cLocal_1019, "HANGAR_NO", 16);
										}
										bVar177 = true;
									}
									else if (Local_402.f_6 == 1)
									{
										if (!unk_0x46768B1495288824() || func_150("MARINA_NO"))
										{
											func_149("MARINA_NO", -1);
											StringCopy(&cLocal_1019, "MARINA_NO", 16);
										}
										bVar177 = true;
									}
									else if (Local_402.f_6 == 2)
									{
										if (!unk_0x46768B1495288824() || func_150("HELIPAD_NO"))
										{
											func_149("HELIPAD_NO", -1);
											StringCopy(&cLocal_1019, "HELIPAD_NO", 16);
										}
										bVar177 = true;
									}
									else if (Local_402.f_6 == 3)
									{
										StringCopy(&Var183, "CAR_GAR_NO", 16);
										if (unk_0x3E00A1016DB5AFEF() || unk_0x748A964A12412EBB())
										{
											StringConCat(&Var183, "_1", 16);
										}
										else if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
										{
											StringConCat(&Var183, "_2", 16);
										}
										if (!unk_0x46768B1495288824() || func_150(&Var183))
										{
											func_149(&Var183, -1);
											cLocal_1019 = { Var183 };
										}
										bVar177 = true;
									}
								}
							}
						}
						else
						{
							iLocal_856 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && func_147(0, -1, 0))
			{
				if (iLocal_656 != -1)
				{
					iLocal_654 = 0;
					return;
				}
				if (func_146(iLocal_655, 1))
				{
					unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
					if (unk_0xD7DDFCF6557D9296(unk_0x7DC564DE3CF907A4()) == 4)
					{
						unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
					}
					else
					{
						unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 256);
					}
					if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
					{
						if (unk_0x0B4DDB992C7BCF57(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 0))
						{
							unk_0x9C7CD45CE4DD7F73(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 0);
						}
					}
					func_145();
					iLocal_657 = 0;
					iLocal_658 = 0;
					iLocal_659 = 0;
					iLocal_645 = -1;
					iLocal_654++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_657 || iLocal_658)
			{
				func_144(0);
				func_143(1, 4, 0, 0, 0);
				func_142(1, 2, 1, 1, 1);
				func_141("WEB_VEH_TITLE");
				iVar187 = 0;
				while (iVar187 < iLocal_646)
				{
					iLocal_646[iVar187] = 0;
					iVar187++;
				}
				iVar188 = -1;
				iVar189 = 0;
				func_57(&(Local_402.f_8), Local_402.f_0);
				iVar191 = 0;
				iVar192 = func_157();
				iVar190 = 0;
				while (iVar190 < iVar192)
				{
					if (func_60(func_153(iVar190)))
					{
						if (iVar188 == -1)
						{
							iVar188 = iVar191;
						}
						if (Local_402.f_8.f_4 == func_153(iVar190))
						{
							iLocal_645 = iVar191;
							iVar189 = 1;
						}
						iVar191++;
					}
					iVar190++;
				}
				iVar190 = 0;
				while (iVar190 < Global_68319.f_592)
				{
					if (Global_68319.f_592[iVar190] != -1)
					{
						if ((func_152(Global_68319.f_592[iVar190], iLocal_672) && Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[Global_68319.f_592[iVar190]] == -15) && (Global_68319.f_592[iVar190] != 200 || !Global_101154.f_29598.f_7))
						{
							func_130(Global_68319.f_592[iVar190], &Var0, 0, iLocal_672, -1);
							if (iVar188 == -1)
							{
								iVar188 = iVar191;
							}
							if (Local_402.f_8.f_4 == Var0.f_66)
							{
								iLocal_645 = iVar191;
								iVar189 = 1;
							}
							iVar191++;
						}
					}
					iVar190++;
				}
				if (iLocal_645 == -1)
				{
					iLocal_645 = iVar188;
				}
				iVar191 = 0;
				iVar192 = func_157();
				iVar190 = 0;
				while (iVar190 < iVar192)
				{
					if (func_60(func_153(iVar190)))
					{
						unk_0x26545538B51562AD(&(iLocal_646[(iVar191 / 32)]), (iVar191 % 32));
						func_126(iVar191, unk_0x5FB9F0778C42904D(func_153(iVar190)), 0, 1, 0, 0);
						if ((iLocal_645 == iVar191 && iVar189) && Local_402.f_6 != 3)
						{
							func_125(iVar191, 4, 0);
						}
						else
						{
							func_125(iVar191, 0, 0);
						}
						iVar191++;
					}
					iVar190++;
				}
				iVar190 = 0;
				while (iVar190 < Global_68319.f_592)
				{
					if (Global_68319.f_592[iVar190] != -1)
					{
						if ((func_152(Global_68319.f_592[iVar190], iLocal_672) && Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[Global_68319.f_592[iVar190]] == -15) && (Global_68319.f_592[iVar190] != 200 || !Global_101154.f_29598.f_7))
						{
							unk_0x26545538B51562AD(&(iLocal_646[(iVar191 / 32)]), (iVar191 % 32));
							func_130(Global_68319.f_592[iVar190], &Var0, 0, iLocal_672, -1);
							if (Global_68319.f_592[iVar190] != 164)
							{
								func_126(iVar191, func_123(Global_68319.f_592[iVar190]), 0, 1, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_126(iVar191, "TWOSTRINGS", 2, 1, 0, 0);
								func_120(func_123(Global_68319.f_592[iVar190]), 0);
								func_120("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_126(iVar191, "TWOSTRINGS", 2, 1, 0, 0);
								func_120(func_123(Global_68319.f_592[iVar190]), 0);
								func_120("VNX_SWFTB", 0);
							}
							else
							{
								func_126(iVar191, func_123(Global_68319.f_592[iVar190]), 0, 1, 0, 0);
							}
							if (iLocal_645 == iVar191 && iVar189)
							{
								func_125(iVar191, 4, 0);
							}
							else
							{
								func_125(iVar191, 0, 0);
							}
							iVar191++;
						}
					}
					iVar190++;
				}
				func_119(iLocal_645, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar178 = 0;
				if (unk_0xDFCB321F1D24137F())
				{
					if (unk_0x34650B66FAF4897C(2))
					{
						unk_0xCFF471245AFEEDCE(0, 1, 1);
						unk_0xCFF471245AFEEDCE(0, 2, 1);
						unk_0xCFF471245AFEEDCE(2, 200, 1);
						unk_0x32AA9ADAA9E9A2D4(0, 237, 1);
						unk_0x32AA9ADAA9E9A2D4(0, 238, 1);
						unk_0x32AA9ADAA9E9A2D4(0, 241, 1);
						unk_0x32AA9ADAA9E9A2D4(0, 242, 1);
						func_116(0, 0, 0, 1);
						func_115(0, -1, 1);
						if (func_114())
						{
							if (Global_2562129 != iLocal_645)
							{
								unk_0x954BCDB8FDB0AC0F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_645 = Global_2562129;
								func_119(iLocal_645, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar178 = 1;
							}
						}
					}
				}
				if (unk_0x117D586920E8F7BA(2, 188) || unk_0x117D586920E8F7BA(2, 241))
				{
					iLocal_660 = 1;
					unk_0x954BCDB8FDB0AC0F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar193 = (iLocal_645 - 1);
					while (iVar193 >= 0)
					{
						if (unk_0xF426A5DE932B3BEE(iLocal_646[(iVar193 / 32)], (iVar193 % 32)))
						{
							iLocal_645 = iVar193;
							bVar194 = true;
							iVar193 = 0;
						}
						iVar193 = (iVar193 + -1);
					}
					if (!bVar194)
					{
						iVar193 = (iLocal_646 * 32 - 1);
						while (iVar193 >= iLocal_645 + 1)
						{
							if (unk_0xF426A5DE932B3BEE(iLocal_646[(iVar193 / 32)], (iVar193 % 32)))
							{
								iLocal_645 = iVar193;
								bVar194 = true;
								iVar193 = 0;
							}
							iVar193 = (iVar193 + -1);
						}
					}
					if (bVar194)
					{
						func_119(iLocal_645, 1, 1);
					}
				}
				else if (unk_0x117D586920E8F7BA(2, 187) || unk_0x117D586920E8F7BA(2, 242))
				{
					iLocal_660 = 1;
					unk_0x954BCDB8FDB0AC0F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar195 = iLocal_645 + 1;
					while (iVar195 <= (iLocal_646 * 32 - 1))
					{
						if (unk_0xF426A5DE932B3BEE(iLocal_646[(iVar195 / 32)], (iVar195 % 32)))
						{
							iLocal_645 = iVar195;
							bVar196 = true;
							iVar195 = iLocal_646 * 32 + 1;
						}
						iVar195++;
					}
					if (!bVar196)
					{
						iVar195 = 0;
						while (iVar195 <= (iLocal_645 - 1))
						{
							if (unk_0xF426A5DE932B3BEE(iLocal_646[(iVar195 / 32)], (iVar195 % 32)))
							{
								iLocal_645 = iVar195;
								bVar196 = true;
								iVar195 = iLocal_646 * 32 + 1;
							}
							iVar195++;
						}
					}
					if (bVar196)
					{
						func_119(iLocal_645, 1, 1);
					}
				}
				else if (unk_0xFE8B08EBA8FB9177(2, 201) || iVar178 == 1)
				{
					bVar197 = false;
					iVar178 = 0;
					unk_0x954BCDB8FDB0AC0F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar199 = 0;
					iVar200 = func_157();
					iVar198 = 0;
					while (iVar198 < iVar200)
					{
						if (func_60(func_153(iVar198)))
						{
							if (iLocal_645 == iVar199 && (((((Local_402.f_8.f_4 != func_153(iVar198) || !unk_0xD2CFFE76B625AE55(Global_68319.f_484[Local_402.f_0])) || !unk_0x0B4DDB992C7BCF57(Global_68319.f_484[Local_402.f_0], 0)) || Local_402.f_0 == 21) || Local_402.f_0 == 22) || Local_402.f_0 == 23))
							{
								bVar197 = true;
								if ((((!iLocal_659 && Local_402.f_8.f_4 != func_153(iVar198)) || (!iLocal_659 && Local_402.f_0 == 21)) || (!iLocal_659 && Local_402.f_0 == 22)) || (!iLocal_659 && Local_402.f_0 == 23))
								{
									func_113("VEH_SELECT_CNFA", 0, 0);
									func_112(-1);
									func_111(201, "ITEM_YES", -1);
									func_111(202, "ITEM_NO", -1);
									iLocal_659 = 1;
									iVar198 = func_157() + 1;
								}
								else if (Local_402.f_6 == 3)
								{
									if (func_110(func_153(iVar198)))
									{
										iLocal_1017 = func_153(iVar198);
										iLocal_657 = 0;
										iLocal_658 = 0;
										iLocal_651 = 0;
										iLocal_654++;
									}
									else
									{
										iLocal_1016 = 1;
										iLocal_1017 = func_153(iVar198);
										iLocal_654 = 99;
									}
								}
								else if (Local_402.f_6 == 0 && func_110(func_153(iVar198)))
								{
									iLocal_1017 = func_153(iVar198);
									iLocal_657 = 0;
									iLocal_658 = 0;
									iLocal_651 = 0;
									iLocal_654++;
								}
								else
								{
									if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[Local_402.f_0]))
									{
										unk_0xAF3355298F537BB0(Global_68319.f_484[Local_402.f_0], 0, 1);
										unk_0xF6E128C391C16F7C(&(Global_68319.f_484[Local_402.f_0]));
									}
									Var99.f_66 = func_153(iVar198);
									unk_0x26545538B51562AD(&(Var99.f_77), 14);
									func_107(Local_402.f_0, &Var99, 0f, 0f, 0f, -1f, 145);
									func_106(Local_402.f_0);
									func_57(&(Local_402.f_8), Local_402.f_0);
									iVar198 = func_157() + 1;
									iLocal_658 = 1;
								}
							}
							iVar199++;
						}
						iVar198++;
					}
					if (!bVar197)
					{
						iVar198 = 0;
						while (iVar198 < Global_68319.f_592)
						{
							if (Global_68319.f_592[iVar198] != -1)
							{
								if ((func_152(Global_68319.f_592[iVar198], iLocal_672) && Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[Global_68319.f_592[iVar198]] == -15) && (Global_68319.f_592[iVar198] != 200 || !Global_101154.f_29598.f_7))
								{
									func_130(Global_68319.f_592[iVar198], &Var0, 0, iLocal_672, -1);
									if (iLocal_645 == iVar199 && ((Local_402.f_8.f_4 != Var0.f_66 || !unk_0xD2CFFE76B625AE55(Global_68319.f_484[Local_402.f_0])) || !unk_0x0B4DDB992C7BCF57(Global_68319.f_484[Local_402.f_0], 0)))
									{
										bVar197 = true;
										if (!iLocal_659)
										{
											if (Local_402.f_6 == 3)
											{
												func_113("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_113("VEH_SELECT_CNFA", 0, 0);
											}
											func_112(-1);
											func_111(201, "ITEM_YES", -1);
											func_111(202, "ITEM_NO", -1);
											iLocal_659 = 1;
											iVar198 = Global_68319.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_654 = 3;
											iLocal_658 = 1;
											iVar198 = Global_68319.f_592 + 1;
										}
										else
										{
											if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[Local_402.f_0]))
											{
												unk_0xAF3355298F537BB0(Global_68319.f_484[Local_402.f_0], 0, 1);
												unk_0xF6E128C391C16F7C(&(Global_68319.f_484[Local_402.f_0]));
											}
											func_130(Global_68319.f_592[iVar198], &Var0, 0, iLocal_672, -1);
											unk_0x26545538B51562AD(&(Var0.f_77), 14);
											if (unk_0xEC6E5897335290DD(Var0.f_66))
											{
												unk_0x26545538B51562AD(&(Var0.f_77), 22);
											}
											func_107(Local_402.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
											func_106(Local_402.f_0);
											func_57(&(Local_402.f_8), Local_402.f_0);
											iVar198 = Global_68319.f_592 + 1;
											iLocal_658 = 1;
										}
									}
									iVar199++;
								}
							}
							iVar198++;
						}
					}
				}
				else if (unk_0xFE8B08EBA8FB9177(2, 202) || unk_0xFE8B08EBA8FB9177(2, 238))
				{
					unk_0x954BCDB8FDB0AC0F(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (iLocal_659)
					{
						iLocal_660 = 1;
						iLocal_659 = 0;
					}
					else
					{
						iLocal_654 = 99;
					}
				}
			}
			unk_0xC5EB6DE147B611C7();
			if (iLocal_660)
			{
				func_113("", 0, 0);
				func_112(-1);
				func_111(201, "ITEM_SELECT", -1);
				func_111(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			func_70(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 3:
			if (!iLocal_657 || iLocal_658)
			{
				func_144(0);
				func_143(1, 0, 0, 0, 0);
				func_142(1, 1, 1, 1, 1);
				iVar201 = 0;
				while (iVar201 < iLocal_652)
				{
					iLocal_652[iVar201] = 0;
					iVar201++;
				}
				func_141("WEB_VEH_TITLE2");
				iVar201 = 0;
				while (iVar201 < 25)
				{
					StringCopy(&Var202, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var202, iVar201, 16);
					func_126(iVar201, &Var202, 0, 1, 0, 0);
					unk_0x26545538B51562AD(&(iLocal_652[(iVar201 / 32)]), (iVar201 % 32));
					iVar201++;
				}
				if (Local_674.f_12 == 0)
				{
					iLocal_651 = Global_101154.f_29707.f_313[200];
				}
				else if (Local_674.f_12 == 1)
				{
					iLocal_651 = Global_101154.f_29707.f_626[200];
				}
				else
				{
					iLocal_651 = Global_101154.f_29707.f_939[200];
				}
				func_119(iLocal_651, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar178 = 0;
				if (unk_0xDFCB321F1D24137F())
				{
					if (unk_0x34650B66FAF4897C(2))
					{
						unk_0xCFF471245AFEEDCE(0, 1, 1);
						unk_0xCFF471245AFEEDCE(0, 2, 1);
						unk_0x32AA9ADAA9E9A2D4(0, 237, 1);
						unk_0x32AA9ADAA9E9A2D4(0, 238, 1);
						unk_0x32AA9ADAA9E9A2D4(0, 241, 1);
						unk_0x32AA9ADAA9E9A2D4(0, 242, 1);
						func_116(0, 0, 0, 1);
						func_115(0, -1, 1);
						if (func_114())
						{
							if (Global_2562129 != iLocal_651)
							{
								unk_0x954BCDB8FDB0AC0F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_651 = Global_2562129;
								func_119(iLocal_651, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar178 = 1;
							}
						}
					}
				}
				if (unk_0x117D586920E8F7BA(2, 188) || unk_0x117D586920E8F7BA(2, 241))
				{
					iLocal_660 = 1;
					unk_0x954BCDB8FDB0AC0F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar206 = (iLocal_651 - 1);
					while (iVar206 >= 0)
					{
						if (unk_0xF426A5DE932B3BEE(iLocal_652[(iVar206 / 32)], (iVar206 % 32)))
						{
							iLocal_651 = iVar206;
							bVar207 = true;
							iVar206 = 0;
						}
						iVar206 = (iVar206 + -1);
					}
					if (!bVar207)
					{
						iVar206 = 31;
						while (iVar206 >= iLocal_651 + 1)
						{
							if (unk_0xF426A5DE932B3BEE(iLocal_652[(iVar206 / 32)], (iVar206 % 32)))
							{
								iLocal_651 = iVar206;
								bVar207 = true;
								iVar206 = iLocal_651;
							}
							iVar206 = (iVar206 + -1);
						}
					}
					if (bVar207)
					{
						func_119(iLocal_651, 1, 1);
					}
				}
				else if (unk_0x117D586920E8F7BA(2, 187) || unk_0x117D586920E8F7BA(2, 242))
				{
					iLocal_660 = 1;
					unk_0x954BCDB8FDB0AC0F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar208 = iLocal_651 + 1;
					while (iVar208 <= 31)
					{
						if (unk_0xF426A5DE932B3BEE(iLocal_652[(iVar208 / 32)], (iVar208 % 32)))
						{
							iLocal_651 = iVar208;
							bVar209 = true;
							iVar208 = 31;
						}
						iVar208++;
					}
					if (!bVar209)
					{
						iVar208 = 0;
						while (iVar208 <= (iLocal_651 - 1))
						{
							if (unk_0xF426A5DE932B3BEE(iLocal_652[(iVar208 / 32)], (iVar208 % 32)))
							{
								iLocal_651 = iVar208;
								bVar209 = true;
								iVar208 = iLocal_651;
							}
							iVar208++;
						}
					}
					if (bVar209)
					{
						func_119(iLocal_651, 1, 1);
					}
				}
				else if (unk_0xFE8B08EBA8FB9177(2, 201) || iVar178 == 1)
				{
					iVar178 = 0;
					unk_0x954BCDB8FDB0AC0F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[Local_402.f_0]))
					{
						unk_0xAF3355298F537BB0(Global_68319.f_484[Local_402.f_0], 0, 1);
						unk_0xF6E128C391C16F7C(&(Global_68319.f_484[Local_402.f_0]));
					}
					uVar210 = iLocal_651 + 1;
					if (iLocal_672 == 0)
					{
						Global_101154.f_29707.f_313[200] = uVar210;
					}
					else if (iLocal_672 == 1)
					{
						Global_101154.f_29707.f_626[200] = uVar210;
					}
					else if (iLocal_672 == 2)
					{
						Global_101154.f_29707.f_939[200] = uVar210;
					}
					func_130(200, &Var0, 0, iLocal_672, -1);
					unk_0x26545538B51562AD(&(Var0.f_77), 14);
					if (unk_0xEC6E5897335290DD(Var0.f_66))
					{
						unk_0x26545538B51562AD(&(Var0.f_77), 22);
					}
					func_107(Local_402.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
					func_106(Local_402.f_0);
					func_57(&(Local_402.f_8), Local_402.f_0);
					iLocal_658 = 1;
					iLocal_654 = 2;
				}
				else if (unk_0xFE8B08EBA8FB9177(2, 202) || unk_0xFE8B08EBA8FB9177(2, 238))
				{
					unk_0x954BCDB8FDB0AC0F(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iLocal_657 = 0;
					iLocal_658 = 0;
					iLocal_654 = (iLocal_654 - 1);
				}
			}
			unk_0xC5EB6DE147B611C7();
			if (iLocal_660)
			{
				func_113("", 0, 0);
				func_112(-1);
				func_111(201, "ITEM_SELECT", -1);
				func_111(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			func_70(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
			}
			if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
			{
				if (unk_0x0B4DDB992C7BCF57(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 0))
				{
					if (!unk_0x283EBA21B92178D7())
					{
						unk_0x9C7CD45CE4DD7F73(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 1);
					}
				}
			}
			func_67(1, -1);
			iLocal_654 = 0;
			func_65(&iLocal_655);
			iLocal_655 = -1;
			break;
	}
	if (!bVar177 && unk_0x46768B1495288824())
	{
		if (!unk_0x75CB9E30BA492FF0(&cLocal_1019))
		{
			if ((((func_150("HANGAR_NO") || func_150("MARINA_NO")) || func_150("HELIPAD_NO")) || func_150("CAR_GAR_NO_1")) || func_150("CAR_GAR_NO_2"))
			{
				unk_0x5BD150B52CE8D356(1);
			}
			StringCopy(&cLocal_1019, "", 16);
		}
	}
}

void func_65(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_66(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_66(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_67(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17257.f_7862)
	{
		unk_0xFEA003123EAA8CFB(15);
		Global_17257.f_7862 = 0;
	}
	unk_0xD4E4E96CC60AD4AA(0f);
	if (Global_17257.f_5498[iVar0])
	{
		unk_0x85DF15590BBEBCCD(9, 0);
		Global_17257.f_5498[iVar0] = 0;
	}
	if (Global_17257.f_5484[iVar0])
	{
		unk_0xF63A8BFF63F2E865("CommonMenu");
		Global_17257.f_5484[iVar0] = 0;
	}
	if (Global_17257.f_5491[iVar0])
	{
		unk_0xF63A8BFF63F2E865("MPShopSale");
		Global_17257.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_68(&(Global_17257.f_5530[iVar0 /*10*/]));
		Global_17257.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[iVar0] = 0;
	}
}

void func_68(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x4C3CEC038B6637D7(*uParam0))
		{
			unk_0xBBDCA990E9FC1AE1(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_69(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x0E063DDE8855EC52() && unk_0xA8EFC723756B7650())
		{
			iParam2 = unk_0x01363833C34DE4AA();
		}
	}
	StringCopy(&cVar0, unk_0x3AA961419D971CB2(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x70ABFF261710305D(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17257.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_70(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_103(0, bParam6))
	{
		return;
	}
	unk_0xCAC481F47E89A9DD(76, 84);
	unk_0xE20858AA8B5A607E(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_101(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (unk_0x70ABFF261710305D(&(Global_17257.f_1)) == unk_0x70ABFF261710305D("HIDE"))
	{
		fVar56 = Global_17255;
	}
	else
	{
		fVar56 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17256;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0x3D0935E194DF3A04(&iVar57, &iVar58);
		fVar60 = unk_0xFE8EA5C3B2ABAB53(0);
		if (func_100())
		{
			iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) * fVar60));
		}
		fVar61 = (unk_0xBBDA792448DB5A89(iVar57) / unk_0xBBDA792448DB5A89(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_100())
		{
			fVar59 = 1f;
		}
		iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar57) / fVar59));
		iVar58 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) / fVar59));
	}
	else
	{
		unk_0x72BB14BDE0E1475F(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5598)
		{
			if (unk_0x70ABFF261710305D(&(Global_17257.f_1)) == unk_0x70ABFF261710305D("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					unk_0x1CD6F39268A57216(func_99(29), func_97(29, 1), (Global_17254 + (fParam5 * 0.5f)), (Global_17255 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7832)
				{
					iVar1 = Global_17257.f_7828;
					iVar2 = Global_17257.f_7829;
					iVar3 = Global_17257.f_7830;
					iVar4 = Global_17257.f_7831;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_96(Global_17254, (Global_17255 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
				if (unk_0x70ABFF261710305D(&(Global_17257.f_1)) != 0)
				{
					func_95();
					unk_0x16073B7747C188AC(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							unk_0x90805938ADF0F45C(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							unk_0x40F69525B6A7FC01(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							unk_0x2B088D6251C2080D(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							unk_0x2B088D6251C2080D(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							unk_0xF9E9E11D6DF3EBF8(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							unk_0x2B088D6251C2080D(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							unk_0xF9E9E11D6DF3EBF8(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x03BB339EA038BF3F((Global_17254 + 0.00390625f), ((Global_17255 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17257.f_5601 > Global_17257.f_5095)
				{
					if (Global_17257.f_5604 != 0)
					{
						func_95();
						func_93((((Global_17254 + fParam5) - 0.00390625f) - func_94("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603)), ((Global_17255 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
					}
				}
			}
			iVar6 = Global_17257.f_5605;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7842)
			{
				iVar1 = Global_17257.f_7838;
				iVar2 = Global_17257.f_7839;
				iVar3 = Global_17257.f_7840;
				iVar4 = Global_17257.f_7841;
			}
			else
			{
				unk_0x188B46661C05B1DA(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5095 && iVar6 <= Global_17257.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5355[iVar6])
					{
						if (Global_17257.f_5226[iVar6] && iVar6 != Global_17257.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17257.f_5088 <= 1)
					{
						Global_17257.f_5088++;
					}
					iVar52 = 1;
				}
			}
			unk_0x1CD6F39268A57216("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5601 > Global_17257.f_5095)
			{
				if (Global_17257.f_7847)
				{
					iVar1 = Global_17257.f_7843;
					iVar2 = Global_17257.f_7844;
					iVar3 = Global_17257.f_7845;
					iVar4 = Global_17257.f_7846;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_96(Global_17254, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0xB5965C7E2BDB923D("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17257.f_7860)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x188B46661C05B1DA(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x1CD6F39268A57216("CommonMenu", "shop_arrows_upANDdown", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar59), ((Var37.f_1 / 720f) * fVar59), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x70ABFF261710305D(&(Global_17257.f_4562)) != 0 && Global_17257.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_17257.f_4638 != 0)
				{
					func_101(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_92(fVar41);
				unk_0x9F56B0EEDDCBCEE3(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						unk_0x90805938ADF0F45C(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						unk_0x40F69525B6A7FC01(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						unk_0x2B088D6251C2080D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						unk_0xF9E9E11D6DF3EBF8(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						unk_0x2B088D6251C2080D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						unk_0xF9E9E11D6DF3EBF8(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x29AF3D3BD6530F90(fVar41, (fVar49 + 0.00277776f));
				unk_0x188B46661C05B1DA(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_96(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7852)
				{
					iVar1 = Global_17257.f_7848;
					iVar2 = Global_17257.f_7849;
					iVar3 = Global_17257.f_7850;
					iVar4 = Global_17257.f_7851;
				}
				else
				{
					unk_0x188B46661C05B1DA(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x1CD6F39268A57216("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x7A6411DA07C45D6F(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x7A6411DA07C45D6F(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_92(fVar41);
				unk_0x16073B7747C188AC(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						unk_0x90805938ADF0F45C(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						unk_0x40F69525B6A7FC01(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						unk_0x2B088D6251C2080D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						unk_0xF9E9E11D6DF3EBF8(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						unk_0x2B088D6251C2080D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						unk_0xF9E9E11D6DF3EBF8(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 8)
					{
						unk_0x2B088D6251C2080D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x03BB339EA038BF3F(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17257.f_4638 != 0)
				{
					func_101(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_91(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0x1CD6F39268A57216(func_99(Global_17257.f_4638), func_97(Global_17257.f_4638, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x7A6411DA07C45D6F(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17257.f_4636 > 0)
				{
					if ((unk_0xA0F74982C6AAA9D4() - Global_17257.f_4637) > Global_17257.f_4636)
					{
						StringCopy(&(Global_17257.f_4562), "", 16);
						Global_17257.f_4636 = -1;
					}
				}
			}
			if (unk_0x70ABFF261710305D(&(Global_2562053.f_21)) != 0 && Global_2562053.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_2562053.f_67 != 0)
				{
					func_101(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_92(fVar41);
				unk_0x9F56B0EEDDCBCEE3(&(Global_2562053.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2562053.f_61)
				{
					if (Global_2562053.f_25[iVar14] == 2)
					{
						unk_0x90805938ADF0F45C(Global_2562053.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2562053.f_25[iVar14] == 3)
					{
						unk_0x40F69525B6A7FC01(Global_2562053.f_34[iVar16], Global_2562053.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2562053.f_25[iVar14] == 1)
					{
						unk_0x2B088D6251C2080D(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 5)
					{
						unk_0xF9E9E11D6DF3EBF8(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 6)
					{
						unk_0x2B088D6251C2080D(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 7)
					{
						unk_0xF9E9E11D6DF3EBF8(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 8)
					{
						unk_0x2B088D6251C2080D(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x29AF3D3BD6530F90(fVar41, (fVar49 + 0.00277776f));
				unk_0x188B46661C05B1DA(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_96(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7852)
				{
					iVar1 = Global_17257.f_7848;
					iVar2 = Global_17257.f_7849;
					iVar3 = Global_17257.f_7850;
					iVar4 = Global_17257.f_7851;
				}
				else
				{
					unk_0x188B46661C05B1DA(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x1CD6F39268A57216("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x7A6411DA07C45D6F(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x7A6411DA07C45D6F(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_92(fVar41);
				unk_0x16073B7747C188AC(&(Global_2562053.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2562053.f_61)
				{
					if (Global_2562053.f_25[iVar14] == 2)
					{
						unk_0x90805938ADF0F45C(Global_2562053.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2562053.f_25[iVar14] == 3)
					{
						unk_0x40F69525B6A7FC01(Global_2562053.f_34[iVar16], Global_2562053.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2562053.f_25[iVar14] == 1)
					{
						unk_0x2B088D6251C2080D(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 8)
					{
						unk_0x2B088D6251C2080D(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 5)
					{
						unk_0xF9E9E11D6DF3EBF8(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 6)
					{
						unk_0x2B088D6251C2080D(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 7)
					{
						unk_0xF9E9E11D6DF3EBF8(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x03BB339EA038BF3F(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2562053.f_67 != 0)
				{
					func_101(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_91(Global_2562053.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0x1CD6F39268A57216(func_99(Global_2562053.f_67), func_97(Global_2562053.f_67, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x7A6411DA07C45D6F(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2562053.f_65 > 0)
				{
					if ((unk_0xA0F74982C6AAA9D4() - Global_2562053.f_66) > Global_2562053.f_65)
					{
						StringCopy(&(Global_2562053.f_21), "", 16);
						Global_2562053.f_65 = -1;
					}
				}
			}
			func_83(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xCAC481F47E89A9DD(76, 84);
			unk_0xE20858AA8B5A607E(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17257.f_5088;
			if (Global_17257.f_5599)
			{
				iVar63 = (Global_17257.f_5602 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5612[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5612[iVar6];
				}
				if (Global_17257.f_5599)
				{
					iVar6 = Global_17257.f_7488[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17257.f_5605 && iVar9 < Global_17257.f_5095)
				{
					bVar32 = true;
					if (Global_17257.f_5606 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17257.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17254 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17257.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7854)
					{
						unk_0x188B46661C05B1DA(Global_17257.f_7853, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0x188B46661C05B1DA(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0x1CD6F39268A57216("CommonMenu", "Gradient_Nav", (Global_17254 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5744 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_81(bVar31, 1, 0, 0, 0, 0);
					unk_0x16073B7747C188AC("DFLT_MNU_OPT");
					unk_0x03BB339EA038BF3F(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17257.f_5096)
					{
						if (unk_0xF426A5DE932B3BEE(Global_17257.f_4959[iVar6], iVar8) || Global_17257.f_4926[iVar8] == 5)
						{
							if (Global_17257.f_5599)
							{
								iVar19 = Global_17257.f_7499[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar20 = Global_17257.f_7540[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar21 = Global_17257.f_7581[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar22 = Global_17257.f_7622[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar23 = Global_17257.f_7663[((iVar9 * Global_17257.f_5096) + iVar8)];
							}
							else
							{
								Global_17257.f_7499[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar19;
								Global_17257.f_7540[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar20;
								Global_17257.f_7581[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar21;
								Global_17257.f_7622[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar22;
								Global_17257.f_7663[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17257.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5875[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5875[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17254 + 0.0046875f) + Global_17257.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17257.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17257.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17254 + Global_17256) - 0.0046875f) - fVar33);
							}
							if ((Global_17257.f_4945[iVar8] && Global_17257.f_5741) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17257.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_81(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, iVar70, bVar50);
												unk_0xA56937B322E371D6(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x2B088D6251C2080D(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x2B088D6251C2080D(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xF9E9E11D6DF3EBF8(&(Global_2443586[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x2B088D6251C2080D(&(Global_2443586[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xF9E9E11D6DF3EBF8(&(Global_2443586[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x90805938ADF0F45C(Global_17257.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x40F69525B6A7FC01(Global_17257.f_4175[(iVar21 + iVar27)], Global_17257.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x96CEDAB660C8AD63(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_101(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17257.f_4433[(iVar22 + iVar14)] == 2 || Global_17257.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17257.f_7704[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7745[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
											Global_17257.f_7786[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7704[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7745[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar43 = Global_17257.f_7786[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_101(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_101(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_91(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x1CD6F39268A57216(func_99(26), func_97(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_101(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_101(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_91(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x1CD6F39268A57216(func_99(27), func_97(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_81(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, bVar50);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_80(bVar31);
											}
											unk_0x16073B7747C188AC(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x2B088D6251C2080D(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x2B088D6251C2080D(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xF9E9E11D6DF3EBF8(&(Global_2443586[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x2B088D6251C2080D(&(Global_2443586[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xF9E9E11D6DF3EBF8(&(Global_2443586[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x90805938ADF0F45C(Global_17257.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x40F69525B6A7FC01(Global_17257.f_4175[(iVar21 + iVar27)], Global_17257.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4433[(iVar22 + iVar28)] == 2 || Global_17257.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_101(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_101(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_91(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																unk_0x1CD6F39268A57216(func_99(Global_17257.f_4433[(iVar22 + iVar28)]), func_97(Global_17257.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0x1CD6F39268A57216(func_99(Global_17257.f_4433[(iVar22 + iVar28)]), func_97(Global_17257.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (unk_0x70ABFF261710305D(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4953[iVar8] == 2)
											{
												unk_0x03BB339EA038BF3F(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x03BB339EA038BF3F((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4433[(iVar22 + iVar14)] != 2 && Global_17257.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_101(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_101(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_91(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x1CD6F39268A57216(func_99(Global_17257.f_4433[(iVar22 + iVar14)]), func_97(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), (Global_17254 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																unk_0x1CD6F39268A57216(func_99(Global_17257.f_4433[(iVar22 + iVar14)]), func_97(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0x1CD6F39268A57216(func_99(Global_17257.f_4433[(iVar22 + iVar14)]), func_97(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_81(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_80(bVar31);
											}
											unk_0xA56937B322E371D6("NUMBER");
											unk_0x90805938ADF0F45C(Global_17257.f_3918[iVar20]);
											fVar42 = unk_0x96CEDAB660C8AD63(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7704[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7745[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7704[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7745[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_101(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_101(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_91(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x1CD6F39268A57216(func_99(26), func_97(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_101(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_101(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_91(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x1CD6F39268A57216(func_99(27), func_97(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_81(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
										func_79((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_81(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_80(bVar31);
											}
											unk_0xA56937B322E371D6("NUMBER");
											unk_0x40F69525B6A7FC01(Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
											fVar42 = unk_0x96CEDAB660C8AD63(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7704[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7745[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7704[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7745[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_101(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_101(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_91(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0x1CD6F39268A57216(func_99(26), func_97(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_101(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_101(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_91(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x1CD6F39268A57216(func_99(27), func_97(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_81(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
										func_78((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_101(Global_17257.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17257.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17257.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17257.f_7704[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
												Global_17257.f_7786[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7704[((iVar9 * Global_17257.f_5096) + iVar8)];
												fVar43 = Global_17257.f_7786[((iVar9 * Global_17257.f_5096) + iVar8)];
											}
											if (bVar51)
											{
												if (func_101(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_101(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_91(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0x1CD6F39268A57216(func_99(26), func_97(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_101(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_101(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_91(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0x1CD6F39268A57216(func_99(27), func_97(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_101(Global_17257.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_91(Global_17257.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0x1CD6F39268A57216(func_99(Global_17257.f_4433[iVar22]), func_97(Global_17257.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_77(Global_17257.f_4433[iVar22])), (fVar36 * func_77(Global_17257.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17257.f_4926[iVar8] == 5)
							{
								if (Global_17257.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
								if (Global_17257.f_4945[iVar8])
								{
									if (func_101(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17257.f_7488[iVar9] = iVar6;
						Global_17257.f_5607 = iVar6;
						iVar9++;
						if (Global_17257.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17257.f_5612[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17257.f_5598)
					{
						Global_17257.f_5355[iVar6] = 1;
						if (Global_17257.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17257.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17257.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5598)
			{
				Global_17257.f_5600 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17257.f_5603 = iVar11;
				Global_17257.f_5601 = iVar10;
				Global_17257.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5599)
	{
		Global_17257.f_5602 = iVar9;
		Global_17257.f_5599 = 1;
	}
	Global_17257.f_5743 = fVar49;
	Global_17257.f_5745 = unk_0xA0F74982C6AAA9D4();
	unk_0xD4E4E96CC60AD4AA(Global_17257.f_5743);
	if (!Global_17257.f_7827)
	{
		func_72();
	}
	Global_17257.f_7827 = 0;
	if (bParam2)
	{
		unk_0x28981D48C12CB95E(10);
	}
	unk_0x28981D48C12CB95E(6);
	unk_0x28981D48C12CB95E(7);
	unk_0x28981D48C12CB95E(9);
	unk_0x28981D48C12CB95E(8);
	if (bParam0)
	{
		func_71(1);
	}
	unk_0xDAAA6512AF15CB42();
}

void func_71(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

void func_72()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_76(0))
		{
			func_73(0);
		}
		unk_0x26545538B51562AD(&Global_2284, 2);
	}
}

void func_73(int iParam0)
{
	if (Global_14571)
	{
		func_75(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 30);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 30);
	}
	if (!func_74())
	{
		Global_14413.f_1 = 3;
	}
}

int func_74()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_76(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x38AAAA167C55B731(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xF10089C8CCEFDB7A(Global_14350);
		}
		else
		{
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
}

int func_76(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

float func_77(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_78(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x16073B7747C188AC(sParam2);
	unk_0x40F69525B6A7FC01(uParam3, uParam4);
	unk_0x03BB339EA038BF3F(fParam0, fParam1, 0);
}

void func_79(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x16073B7747C188AC(sParam2);
	unk_0x90805938ADF0F45C(iParam3);
	unk_0x03BB339EA038BF3F(fParam0, fParam1, iParam4);
}

void func_80(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x188B46661C05B1DA(Global_17257.f_7855[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x188B46661C05B1DA(Global_17257.f_7855[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x09FBFA08412B6B1C(iVar0, iVar1, iVar2, 255);
}

void func_81(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_82(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x188B46661C05B1DA(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x09FBFA08412B6B1C(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x188B46661C05B1DA(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x09FBFA08412B6B1C(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x188B46661C05B1DA(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x09FBFA08412B6B1C(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x09FBFA08412B6B1C(155, 155, 155, 255);
		}
		else
		{
			unk_0x09FBFA08412B6B1C(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x09FBFA08412B6B1C(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x188B46661C05B1DA(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x09FBFA08412B6B1C(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x09FBFA08412B6B1C(155, 155, 155, 255);
	}
	else
	{
		unk_0x09FBFA08412B6B1C(155, 155, 155, 255);
	}
	unk_0xFFA0132BAEE84558(0f, 0.35f);
	unk_0x402543D4DFEA2C21(1);
	if (bParam5)
	{
		unk_0xFFA0132BAEE84558(0f, 0.425f);
		unk_0x0D229AABC4054103(4);
	}
	else
	{
		unk_0x0D229AABC4054103(0);
	}
	unk_0x478FAED9828C3447(0f, 1f);
	unk_0xA65B96806AFE1495(0);
	unk_0xC3B036EF48873204(0, 0, 0, 0, 0);
	unk_0xF3458F619B910FFD(0, 0, 0, 0, 0);
}

void func_82(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_103(bParam4, bParam8))
	{
		return;
	}
	if (func_89())
	{
		return;
	}
	if (unk_0xDEDA6095A64A34C2())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_86(unk_0x4D29100D094E5511(), 0))
		{
			return;
		}
	}
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0x35F8042CFBC340F9() == 0 || unk_0xDEDA6095A64A34C2())
		{
			return;
		}
	}
	if (Global_17257.f_4639 != 0)
	{
		if (unk_0x6972ED7043DFFBF7(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4639)
			{
				if (Global_17257.f_4896[iVar1] != 344)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), unk_0x2549EF0239E06207(2, Global_17257.f_4896[iVar1], 1), 64);
				}
				else if (Global_17257.f_4909[iVar1] != 31)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), unk_0xF99693FC563AE02C(2, Global_17257.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17257.f_4640 = 0;
		}
		if (!Global_17257.f_4640)
		{
			unk_0x8CED8F78CC31BEF2(Global_17257.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x7E5FA681CB7A2EF7();
			unk_0x8CED8F78CC31BEF2(Global_17257.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x4ACF99392701B935((1f - (Global_17257.f_4951 / 100f)));
			unk_0x7E5FA681CB7A2EF7();
			if (unk_0xDFCB321F1D24137F())
			{
				unk_0x8CED8F78CC31BEF2(Global_17257.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x6A784D1EF2D72A23(1);
				unk_0x7E5FA681CB7A2EF7();
			}
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4639)
			{
				if (unk_0x70ABFF261710305D(&(Global_17257.f_4834[iVar1 /*4*/])) != unk_0x70ABFF261710305D("PREV"))
				{
					unk_0x8CED8F78CC31BEF2(Global_17257.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xD2DC8221939F80F7(iVar1);
					func_85(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x70ABFF261710305D(&(Global_17257.f_4834[iVar2 /*4*/])) == unk_0x70ABFF261710305D("PREV"))
					{
						func_85(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_84(&(Global_17257.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x37B602106C6E0E91(&(Global_17257.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x633D9F40100E396A(iParam2, 70);
						}
						else
						{
							unk_0x90805938ADF0F45C(iParam2);
						}
						unk_0xD3076D52458B36EF();
					}
					if (unk_0xDFCB321F1D24137F())
					{
						if (Global_17257.f_4896[iVar1] != 344 && unk_0xF426A5DE932B3BEE(Global_17257.f_4922, iVar1))
						{
							unk_0x6A784D1EF2D72A23(1);
							unk_0xD2DC8221939F80F7(Global_17257.f_4896[iVar1]);
						}
						else
						{
							unk_0x6A784D1EF2D72A23(0);
							unk_0xD2DC8221939F80F7(344);
						}
					}
					unk_0x7E5FA681CB7A2EF7();
				}
				iVar1++;
			}
			if (unk_0x70ABFF261710305D(&(Global_2562053.f_16)) != unk_0x70ABFF261710305D(""))
			{
				unk_0x8CED8F78CC31BEF2(Global_17257.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xD2DC8221939F80F7(Global_17257.f_4639);
				func_85(&Global_2562053);
				if (Global_2562053.f_20 == -1)
				{
					func_84(&(Global_2562053.f_16));
				}
				else
				{
					unk_0x37B602106C6E0E91(&(Global_2562053.f_16));
					if (bParam5)
					{
						unk_0x633D9F40100E396A(iParam2, 70);
					}
					else
					{
						unk_0x90805938ADF0F45C(iParam2);
					}
					unk_0xD3076D52458B36EF();
				}
				unk_0x7E5FA681CB7A2EF7();
			}
			unk_0x8CED8F78CC31BEF2(Global_17257.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xD2DC8221939F80F7(0);
			unk_0xD2DC8221939F80F7(0);
			unk_0xD2DC8221939F80F7(0);
			unk_0xD2DC8221939F80F7(80);
			unk_0x7E5FA681CB7A2EF7();
			unk_0x8CED8F78CC31BEF2(Global_17257.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4952)
			{
				unk_0xD2DC8221939F80F7(1);
			}
			else
			{
				unk_0xD2DC8221939F80F7(0);
			}
			unk_0x7E5FA681CB7A2EF7();
			Global_17257.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17257.f_4639)
		{
			if (Global_17257.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x8CED8F78CC31BEF2(Global_17257.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xD2DC8221939F80F7(iVar1);
					unk_0x37B602106C6E0E91(&(Global_17257.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x633D9F40100E396A(iParam2, 70);
					}
					else
					{
						unk_0x90805938ADF0F45C(iParam2);
					}
					unk_0xD3076D52458B36EF();
					unk_0x7E5FA681CB7A2EF7();
				}
			}
			iVar1++;
		}
		if (Global_2562053.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x8CED8F78CC31BEF2(Global_17257.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xD2DC8221939F80F7(iVar1);
				unk_0x37B602106C6E0E91(&(Global_2562053.f_16));
				if (bParam5)
				{
					unk_0x633D9F40100E396A(iParam2, 70);
				}
				else
				{
					unk_0x90805938ADF0F45C(iParam2);
				}
				unk_0xD3076D52458B36EF();
				unk_0x7E5FA681CB7A2EF7();
			}
		}
		unk_0xCAC481F47E89A9DD(76, 66);
		unk_0xE20858AA8B5A607E(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17257.f_7862)
			{
				unk_0x353594586E54859C(15, 0f, -0.0375f);
				Global_17257.f_7862 = 1;
			}
		}
		else if (Global_17257.f_7862)
		{
			unk_0xFEA003123EAA8CFB(15);
			Global_17257.f_7862 = 0;
		}
		unk_0xDAAA6512AF15CB42();
		if (Global_17257.f_4925)
		{
			unk_0xCAC481F47E89A9DD(82, 66);
			unk_0xE20858AA8B5A607E(0f, 0f, 0f, 0f);
			unk_0xFF51FA5E68E9F7D4(Global_17257.f_5530[iVar0 /*10*/], Global_17257.f_4923, Global_17257.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xDAAA6512AF15CB42();
		}
		else
		{
			unk_0x6201690B328DD500(Global_17257.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_84(char[4] cParam0)
{
	unk_0x37B602106C6E0E91(cParam0);
	unk_0xD3076D52458B36EF();
}

void func_85(var uParam0)
{
	unk_0x238A63F9EFBCDF35(uParam0);
}

bool func_86(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_87(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_87(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_88();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_88()
{
	return Global_1312747;
}

int func_89()
{
	struct<3> Var0;
	
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	if (func_90())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x38AAAA167C55B731(&Var0);
		if (Global_14358 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_90()
{
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_91(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x188B46661C05B1DA(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_92(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x188B46661C05B1DA(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x0D229AABC4054103(0);
	unk_0xFFA0132BAEE84558(0f, 0.35f);
	unk_0x575759FE88389115(2);
	unk_0x09FBFA08412B6B1C(iVar0, iVar1, iVar2, iVar3);
	unk_0x478FAED9828C3447(fParam0, ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0xA65B96806AFE1495(0);
	unk_0xC3B036EF48873204(0, 0, 0, 0, 0);
	unk_0xF3458F619B910FFD(0, 0, 0, 0, 0);
}

void func_93(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x16073B7747C188AC(sParam2);
	unk_0x90805938ADF0F45C(uParam3);
	unk_0x90805938ADF0F45C(uParam4);
	unk_0x03BB339EA038BF3F(fParam0, fParam1, 0);
}

float func_94(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x0275404839C0A19A(sParam0))
	{
		if (unk_0x70ABFF261710305D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_95();
	unk_0xA56937B322E371D6(sParam0);
	unk_0x90805938ADF0F45C(uParam1);
	unk_0x90805938ADF0F45C(uParam2);
	return unk_0x96CEDAB660C8AD63(1);
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x188B46661C05B1DA(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7837)
	{
		iVar0 = Global_17257.f_7833;
		iVar1 = Global_17257.f_7834;
		iVar2 = Global_17257.f_7835;
		iVar3 = Global_17257.f_7836;
	}
	unk_0x0D229AABC4054103(0);
	unk_0xFFA0132BAEE84558(0f, 0.35f);
	unk_0x09FBFA08412B6B1C(iVar0, iVar1, iVar2, iVar3);
	unk_0x478FAED9828C3447((Global_17254 + 0.0046875f), ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0xA65B96806AFE1495(0);
	unk_0xC3B036EF48873204(0, 0, 0, 0, 0);
	unk_0xF3458F619B910FFD(0, 0, 0, 0, 0);
}

void func_96(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x962859A29A7D805C((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_97(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0x75CB9E30BA492FF0(&(Global_17257.f_6687[iParam0 /*16*/])))
	{
		return func_98(&(Global_17257.f_6687[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_98(var uParam0)
{
	return uParam0;
}

char* func_99(int iParam0)
{
	if (!unk_0x75CB9E30BA492FF0(&(Global_17257.f_5886[iParam0 /*16*/])))
	{
		return func_98(&(Global_17257.f_5886[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_100()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x3D0935E194DF3A04(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_99(iParam0);
	sVar1 = func_97(iParam0, bParam1);
	if (unk_0x70ABFF261710305D(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x3D0935E194DF3A04(&iVar2, &iVar3);
			fVar5 = unk_0xFE8EA5C3B2ABAB53(0);
			if (func_100())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_100())
			{
				fVar4 = 1f;
			}
			if (unk_0xD32535FA4397160F(joaat("director_mode")) > 0)
			{
				unk_0x72BB14BDE0E1475F(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0x72BB14BDE0E1475F(&iVar2, &iVar3);
		}
		Var7 = { unk_0xB5965C7E2BDB923D(uVar0, sVar1) };
		Var7.f_0 = (Var7.f_0 * (func_102(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_102(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.f_0 = (Var7.f_0 - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.f_0 = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xADE9BBB8055E9BBF() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17256)
			{
				*fParam4 = (*fParam4 * (Global_17256 / *fParam3));
				*fParam3 = Global_17256;
			}
		}
		return 1;
	}
	return 0;
}

float func_102(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_103(bool bParam0, bool bParam1)
{
	if (Global_2428492.f_1358.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xCBB243DDC0D132D1() || (func_105(8, -1) && func_104() != 64)) || (unk_0xE0D1D679E4B5371F() != 0 && !bParam1)) || (unk_0x5D293E404CA20AA5() && !bParam0)) || unk_0xED3A6ED798C4B31C()) || Global_69749) || Global_17257.f_7861) || unk_0xB5830E534335F40B()) || Global_91330.f_1352)
	{
		return 0;
	}
	return 1;
}

int func_104()
{
	return Global_1315846;
}

bool func_105(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

void func_106(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_68319[iParam0] = 0;
	Global_68319.f_69[iParam0] = 0;
}

void func_107(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_57(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 10))
		{
			func_109(iParam0);
			func_108(uParam1, &(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 11))
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_377(iParam0, 1);
		}
	}
}

void func_108(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_109(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_57(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_139[iParam0]))
		{
			unk_0xAF3355298F537BB0(Global_68319.f_139[iParam0], 1, 1);
			unk_0x9846B4D56971A958(&(Global_68319.f_139[iParam0]));
			Global_68319.f_139[iParam0] = 0;
		}
		if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			func_377(iParam0, 0);
		}
	}
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_111(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x2549EF0239E06207(2, iParam0, 1);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2562053, sVar0, 64);
		StringCopy(&(Global_2562053.f_16), sParam1, 16);
		Global_2562053.f_20 = iParam2;
		return;
		return;
	}
	unk_0xF17F4B0641AB2DE1(&(Global_17257.f_4922), Global_17257.f_4639);
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 31;
	Global_17257.f_4639++;
}

void func_112(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 344;
		Global_17257.f_4909[iVar0] = 31;
		iVar0++;
	}
	Global_17257.f_4922 = 0;
	StringCopy(&(Global_2562053.f_16), "", 16);
	Global_2562053.f_20 = -1;
	if (unk_0xDFCB321F1D24137F())
	{
		if (!func_69(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0x8CED8F78CC31BEF2(Global_17257.f_5530[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x6A784D1EF2D72A23(0);
		unk_0x7E5FA681CB7A2EF7();
	}
}

void func_113(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_4562), sParam0, 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = iParam1;
	Global_17257.f_4637 = unk_0xA0F74982C6AAA9D4();
	Global_17257.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
}

int func_114()
{
	if (unk_0xE1834019C3CC3C33(2))
	{
		if (Global_2562129 > -1)
		{
			if (unk_0xFE8B08EBA8FB9177(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_115(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xE1834019C3CC3C33(2))
	{
		return 0;
	}
	if (unk_0x1E114237D972903B() || unk_0xB5830E534335F40B())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xB29FFEDC1295422C();
	}
	if (Global_2562129 == -6)
	{
		unk_0x7FC484F9A7BEE63F(4);
		if (iParam0 && unk_0x5FCAE3F8AEC656AF(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2562129 = -1;
			return 0;
		}
	}
	if (((Global_2562129 > -1 || Global_2562129 == -3) || Global_2562129 == -2) || unk_0x8ED8779D25099E8D())
	{
		unk_0x7FC484F9A7BEE63F(1);
		return 0;
	}
	if (Global_2562129 == -1 && iParam0)
	{
		if (unk_0x5FCAE3F8AEC656AF(2, 237))
		{
			unk_0x7FC484F9A7BEE63F(4);
			Global_2562129 = -6;
			return 1;
		}
		else
		{
			unk_0x7FC484F9A7BEE63F(3);
			return 0;
		}
	}
	unk_0x7FC484F9A7BEE63F(1);
	return 0;
}

void func_116(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0xE1834019C3CC3C33(2))
	{
		Global_2562129 = -1;
		return;
	}
	unk_0x24FDEF6CC08556D3(1);
	fVar0 = Global_17254;
	fVar2 = (fVar0 + Global_17256);
	fVar3 = Global_17257.f_5600;
	fVar1 = (Global_17257.f_5600 - (IntToFloat(Global_17257.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17257.f_5602 < 1)
	{
		fVar1 = (Global_17257.f_5600 - 0.034722f);
	}
	unk_0xCAC481F47E89A9DD(76, 84);
	unk_0xE20858AA8B5A607E(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x752FAAEEF1315AAF(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x752FAAEEF1315AAF(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xDAAA6512AF15CB42();
	func_118();
	if (Global_2562129 == -6)
	{
		return;
	}
	Global_2562129 = -1;
	fVar7 = Global_2562123;
	fVar8 = Global_2562124;
	if (Global_17257.f_5603 > Global_17257.f_5602)
	{
		if (((Global_2562123 >= fVar0 && Global_2562123 <= fVar2) && Global_2562124 >= fVar3) && Global_2562124 < (fVar3 + fVar6))
		{
			Global_2562129 = -2;
			if (bParam3)
			{
				func_117(0);
			}
			return;
		}
		if (((Global_2562123 >= fVar0 && Global_2562123 <= fVar2) && Global_2562124 >= (fVar3 + fVar6)) && Global_2562124 < (fVar3 + 0.034722f))
		{
			Global_2562129 = -3;
			if (bParam3)
			{
				func_117(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17257.f_5603 == -1)
		{
			Global_2562129 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17257.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xCAC481F47E89A9DD(76, 84);
				unk_0xE20858AA8B5A607E(-0.05f, -0.05f, 0f, 0f);
				func_96(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17256, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xDAAA6512AF15CB42();
			}
		}
		Global_2562129 = Global_17257.f_7488[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2562129 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2562129 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2562129 = -4;
		return;
	}
	Global_2562129 = -1;
}

void func_117(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17254;
	fVar1 = Global_17257.f_5600;
	unk_0xCAC481F47E89A9DD(76, 84);
	unk_0xE20858AA8B5A607E(-0.05f, -0.05f, 0f, 0f);
	if (Global_2562129 == -2)
	{
		func_96(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2562129 == -3)
	{
		func_96(fVar0, (fVar1 + fVar2), Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xDAAA6512AF15CB42();
}

void func_118()
{
	Global_2562125 = Global_2562123;
	Global_2562126 = Global_2562124;
	Global_2562123 = unk_0xC7BC555CD69A1B05(2, 239);
	Global_2562124 = unk_0xC7BC555CD69A1B05(2, 240);
	Global_2562127 = (Global_2562123 - Global_2562125);
	Global_2562128 = (Global_2562124 - Global_2562126);
}

void func_119(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5606 = iParam0;
	Global_17257.f_5741 = iParam2;
	if (Global_17257.f_5606 < Global_17257.f_5605)
	{
		Global_17257.f_5605 = Global_17257.f_5606;
	}
	else if ((Global_17257.f_5599 && Global_17257.f_5606 > Global_17257.f_5607) || (!Global_17257.f_5599 && Global_17257.f_5606 >= (Global_17257.f_5605 + Global_17257.f_5095)))
	{
		iVar0 = Global_17257.f_5605;
		while (iVar0 <= Global_17257.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17257.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5095 && Global_17257.f_5605 < 128)
		{
			Global_17257.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5605;
			while (iVar0 <= Global_17257.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17257.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17257.f_4562), "", 16);
		StringCopy(&(Global_2562053.f_21), "", 16);
	}
}

void func_120(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam0, 24);
	Global_17257.f_5090++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 1;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_122();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_101(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4938[(Global_17257.f_5089 - 1)])
		{
			Global_17257.f_4938[(Global_17257.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_121();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

float func_121()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17257.f_4433[((Global_17257.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_101(Global_17257.f_4433[((Global_17257.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x7A6411DA07C45D6F(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x7A6411DA07C45D6F(0.35f, 0);
}

float func_122()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_81(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0x70ABFF261710305D(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		unk_0xA56937B322E371D6(&(Global_17257.f_73[Global_17257.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x70ABFF261710305D(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x2B088D6251C2080D(&(Global_17257.f_73[(Global_17257.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x70ABFF261710305D(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x2B088D6251C2080D(&(Global_17257.f_73[(Global_17257.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x70ABFF261710305D(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x90805938ADF0F45C(Global_17257.f_3918[((Global_17257.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x70ABFF261710305D(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x40F69525B6A7FC01(Global_17257.f_4175[((Global_17257.f_5093 - iVar4) + iVar10)], Global_17257.f_4304[((Global_17257.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x70ABFF261710305D(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0xF9E9E11D6DF3EBF8(&(Global_2443586[((Global_17257.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x70ABFF261710305D(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x2B088D6251C2080D(&(Global_2443586[((Global_17257.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x70ABFF261710305D(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0xF9E9E11D6DF3EBF8(&(Global_2443586[((Global_17257.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x70ABFF261710305D(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0x96CEDAB660C8AD63(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17257.f_4433[((Global_17257.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_101(Global_17257.f_4433[((Global_17257.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_123(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	if (func_124(iParam0, -1) == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "ZTYPE";
		
		case 1:
			return "STINGER";
		
		case 2:
			return "JB700";
		
		case 3:
			return "CHEETAH";
		
		case 4:
			return "ENTITYXF";
		
		case 5:
			return "ADDER";
		
		case 6:
			return "MONROE";
		
		case 7:
			return "COGCABRI";
		
		case 9:
			return "DODO";
		
		case 12:
			return "CUBAN800";
		
		case 13:
			return "DUSTER";
		
		case 14:
			return "LUXOR";
		
		case 10:
			return "SHAMAL";
		
		case 11:
			return "STUNT";
		
		case 113:
			return "VESTRA";
		
		case 15:
			return "FROGGER";
		
		case 16:
			return "MAVERICK";
		
		case 17:
			return "RHINO";
		
		case 18:
			return "TITAN";
		
		case 19:
			return "CARGOBOB";
		
		case 20:
			return "BUZZARD";
		
		case 21:
			return "CRUSADER";
		
		case 22:
			return "BARRACKS";
		
		case 23:
			return "MARINA";
		
		case 24:
			return "MARQUIS";
		
		case 25:
			return "JETMAX";
		
		case 26:
			return "SPEEDER";
		
		case 27:
			return "SQUALO";
		
		case 28:
			return "SUNTRAP";
		
		case 29:
			return "TROPIC";
		
		case 30:
			return "SEASHARK";
		
		case 32:
			return "SUNTRAP";
		
		case 31:
			return "SUBMERSIBLE";
		
		case 258:
			return "TUG";
		
		case 33:
			return "BMX";
		
		case 34:
			return "SCORCHER";
		
		case 35:
			return "TRIBIKE";
		
		case 36:
			return "TRIBIKE2";
		
		case 37:
			return "TRIBIKE3";
		
		case 38:
			return "CRUISER";
		
		case 39:
			return "SCHWARZE";
		
		case 40:
			return "ZION";
		
		case 41:
			return "GAUNTLET";
		
		case 42:
			return "VIGERO";
		
		case 43:
			return "ISSI2";
		
		case 44:
			return "INFERNUS";
		
		case 45:
			return "SURANO";
		
		case 46:
			return "VACCA";
		
		case 47:
			return "NINEF";
		
		case 48:
			return "COMET2";
		
		case 49:
			return "BANSHEE";
		
		case 50:
			return "FELTZER";
		
		case 51:
			return "BFINJECT";
		
		case 52:
			return "SANDKING";
		
		case 53:
			return "FUGITIVE";
		
		case 54:
			return "DILETTAN";
		
		case 55:
			return "SUPERD";
		
		case 56:
			return "EXEMPLAR";
		
		case 57:
			return "BALLER2";
		
		case 58:
			return "CAVCADE";
		
		case 59:
			return "ROCOTO";
		
		case 60:
			return "FELON";
		
		case 61:
			return "ORACLE";
		
		case 62:
			return "BATI";
		
		case 63:
			return "AKUMA";
		
		case 64:
			return "RUFFIAN";
		
		case 65:
			return "VADER";
		
		case 66:
			return "BLAZER";
		
		case 67:
			return "PCJ";
		
		case 68:
			return "SANCHEZ";
		
		case 69:
			return "FAGGIO";
		
		default:
	}
	switch (iParam0)
	{
		case 70:
			return "BULLET";
		
		case 71:
			return "CARBONIZ";
		
		case 72:
			return "COQUETTE";
		
		case 73:
			return "NINEF2";
		
		case 74:
			return "RAPIDGT";
		
		case 75:
			return "RAPIDGT";
		
		case 76:
			return "STINGERG";
		
		case 77:
			return "VOLTIC";
		
		case 78:
			return "ANNIHL";
		
		case joaat("mpsv_lp0_31"):
			return "MAMMATUS";
		
		case 80:
			return "VELUM";
		
		case 81:
			return "DUMP";
		
		case 82:
			return "AIRBUS";
		
		case 83:
			return "BUS";
		
		case 84:
			return "COACH";
		
		case 85:
			return "JOURNEY";
		
		case 86:
			return "MULE";
		
		case 87:
			return "RENTBUS";
		
		case 88:
			return "STRETCH";
		
		case 89:
			return "BISON";
		
		case 90:
			return "DOUBLE";
		
		case 91:
			return "FELON2";
		
		case 92:
			return "HEXER";
		
		case 93:
			return "ZION2";
		
		case 94:
			return "BATI2";
		
		case 95:
			return "ELEGY2";
		
		case 96:
			return "KHAMEL";
		
		case 97:
			return "HOTKNIFE";
		
		case 98:
			return "CARBON";
		
		case 99:
			return "BIFTA";
		
		case 100:
			return "KALAHARI";
		
		case 101:
			return "PARADISE";
		
		case 102:
			return "SPEEDER";
		
		case 103:
			return "BODHI2";
		
		case 104:
			return "DUNE";
		
		case 105:
			return "REBEL";
		
		case 106:
			return "SADLER";
		
		case 107:
			return "SANCHEZ2";
		
		case 108:
			return "SANDKIN2";
		
		case 109:
			return "ROOSEVELT";
		
		case 111:
			return "JESTER";
		
		case 114:
			return "MASSACRO";
		
		case 112:
			return "TURISMOR";
		
		case 115:
			return "ZENTORNO";
		
		case 116:
			return "HUNTLEY";
		
		case 110:
			return "ALPHA";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 121:
			return "THRUST";
		
		case 128:
			return "ASEA";
		
		case 129:
			return "ASTROPE";
		
		case 130:
			return "BOBCATXL";
		
		case 131:
			return "CAVCADE";
		
		case 132:
			return "GRANGER";
		
		case 133:
			return "INGOT";
		
		case 134:
			return "INTRUDER";
		
		case 135:
			return "MINIVAN";
		
		case 136:
			return "PREMIER";
		
		case 137:
			return "RADI";
		
		case 138:
			return "RANCHERX";
		
		case 139:
			return "RLOADER";
		
		case 140:
			return "STANIER";
		
		case 141:
			return "STRATUM";
		
		case 142:
			return "WASHINGT";
		
		case 122:
			return "DOMINATO";
		
		case 123:
			return "F620";
		
		case 124:
			return "FUSILADE";
		
		case 125:
			return "PENUMBRA";
		
		case 126:
			return "SENTINEL";
		
		case 127:
			return "SENTINEL2";
		
		case 143:
			return "BLADE";
		
		case 144:
			return "WARRENER";
		
		case 145:
			return "GLENDALE";
		
		case 146:
			return "RHAPSODY";
		
		case 147:
			return "PANTO";
		
		case 148:
			return "DUBSTA3";
		
		case 149:
			return "PIGALLE";
		
		case 150:
			return "PICADOR";
		
		case 151:
			return "REGINA";
		
		case 152:
			return "SURFER";
		
		case 153:
			return "YOUGA";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 156:
			return "PRIMO";
		
		case 157:
			return "BUFFALO";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 161:
			return "SOVEREIGN";
		
		case 160:
			return "MONSTER";
		
		case 162:
			return "MILJET";
		
		case 163:
			return "BESRA";
		
		case 164:
			return "SWIFT";
		
		case 165:
			return "COQUETTE2";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 167:
			return "INNOVATION";
		
		case 168:
			return "HAKUCHOU";
		
		case 169:
			return "FURORE";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 187:
			return "VALKYRIE";
		
		case 177:
			return "HYDRA";
		
		case 185:
			return "SAVAGE";
		
		case 174:
			return "ENDURO";
		
		case 171:
			return "BOXVILLE4";
		
		case 172:
			return "CASCO";
		
		case 173:
			return "DINGHY3";
		
		case 175:
			return "GBURRITO2";
		
		case 176:
			return "GUARDIAN";
		
		case 178:
			return "INSURGENT";
		
		case 179:
			return "INSURGENT2";
		
		case 180:
			return "KURUMA";
		
		case 181:
			return "KURUMA2";
		
		case 182:
			return "LECTRO";
		
		case 183:
			return "MULE3";
		
		case 184:
			return "PBUS";
		
		case 186:
			return "TECHNICAL";
		
		case 188:
			return "VELUM2";
		
		case 189:
			return "GRESLEY";
		
		case 190:
			return "JACKAL";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 193:
			return "NEMESIS";
		
		case 194:
			return "ORACLE1";
		
		case 195:
			return "RUMPO";
		
		case 196:
			return "SCHAFTER2";
		
		case 197:
			return "SEMINOLE";
		
		case 198:
			return "SURGE";
		
		case 199:
			return "DODO";
		
		case 200:
			return "MARSHALL";
		
		case 201:
			return "SUBMERS2";
		
		case 202:
			return "BLISTA2";
		
		case 203:
			return "STALION";
		
		case 204:
			return "DUKES";
		
		case 205:
			return "DUKES2";
		
		case 206:
			return "STALION2";
		
		case 207:
			return "DOMINATOR2";
		
		case 208:
			return "GAUNTLET2";
		
		case 209:
			return "BUFFALO3";
		
		case 210:
			return "SLAMVAN";
		
		case 211:
			return "RLOADER2";
		
		case 212:
			return "JESTER2";
		
		case 213:
			return "MASSACRO2";
		
		case 214:
			return "FELTZER3";
		
		case 215:
			return "LUXOR2";
		
		case 216:
			return "OSIRIS";
		
		case 217:
			return "SWIFT2";
		
		case 218:
			return "VIRGO";
		
		case 219:
			return "WINDSOR";
		
		case 220:
			return "BRAWLER";
		
		case 221:
			return "CHINO";
		
		case 222:
			return "COQUETTE3";
		
		case 223:
			return "T20";
		
		case 224:
			return "TORO";
		
		case 225:
			return "VINDICATOR";
		
		case 229:
			return "PRIMO";
		
		case 228:
			return "MOONBEAM";
		
		case 227:
			return "FACTION";
		
		case 226:
			return "BUCCANEE";
		
		case 230:
			return "VOODOO";
		
		case 231:
			return "BTYPE2";
		
		case 232:
			return "LURCHER";
		
		case 251:
			return "VIRGO3";
		
		case 250:
			return "TORNADO";
		
		case 249:
			return "SABREGT";
		
		case 252:
			return "FACTION";
		
		case 233:
			return "BALLER3";
		
		case 234:
			return "BALLER4";
		
		case 235:
			return "COG55";
		
		case 236:
			return "COGNOSC";
		
		case 237:
			return "LIMO2";
		
		case 238:
			return "MAMBA";
		
		case 239:
			return "NITESHAD";
		
		case 240:
			return "SCHAFTER3";
		
		case 241:
			return "SCHAFTER4";
		
		case 242:
			return "VERLIER";
		
		case 243:
			return "SVOLITO";
		
		case 244:
			return "SVOLITO2";
		
		case 245:
			return "BIG_YACHT";
		
		case 246:
			return "TAMPA";
		
		case 247:
			return "SULTAN";
		
		case 49:
			return "BANSHEE";
		
		case 248:
			return "ROOSEVELT2";
		
		default:
	}
	switch (iParam0)
	{
		case 253:
			return "VOLATUS";
		
		case 254:
			return "CARGOBOB2";
		
		case 255:
			return "RUMPO3";
		
		case 256:
			return "BRICKADE";
		
		case 257:
			return "NIMBUS";
		
		case 259:
			return "WINDSOR2";
		
		case 260:
			return "PROTOTIPO";
		
		case 261:
			return "FMJ";
		
		case 262:
			return "BESTIAGTS";
		
		case 263:
			return "XLS";
		
		case 264:
			return "SEVEN70";
		
		case 265:
			return "PFISTER811";
		
		case 266:
			return "REAPER";
		
		default:
	}
	return "";
}

int func_124(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case joaat("mpsv_lp0_31"):
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_68041;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
	}
	return 0;
}

void func_125(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_17257.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5088 >= 128)
	{
		return;
	}
	if (Global_17257.f_5094 >= 128)
	{
		return;
	}
	if (Global_17257.f_5610 < Global_17257.f_5608)
	{
		return;
	}
	if (Global_17257.f_5088 != iParam0)
	{
		Global_17257.f_5088 = iParam0;
		Global_17257.f_5089 = 0;
	}
	iVar0 = Global_17257.f_4926[Global_17257.f_5089];
	if (iVar0 != 4)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 4)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_17257.f_4433[Global_17257.f_5094] = iParam1;
	Global_17257.f_5094++;
	if (iParam1 != 0)
	{
		func_101(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_101(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
		{
			Global_17257.f_4938[Global_17257.f_5089] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar2;
			}
		}
	}
	unk_0x26545538B51562AD(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 4;
}

void func_126(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17257.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5088 >= 128)
	{
		return;
	}
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 < Global_17257.f_5608)
	{
		return;
	}
	if (Global_17257.f_5088 != iParam0)
	{
		Global_17257.f_5088 = iParam0;
		Global_17257.f_5089 = 0;
	}
	iVar0 = Global_17257.f_4926[Global_17257.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 1)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0x75CB9E30BA492FF0(sParam1) && !unk_0x2A19A119886EC3BF(sParam1))
	{
	}
	Global_17257.f_1610[Global_17257.f_5090] = bParam3;
	Global_17257.f_1867[Global_17257.f_5090] = iParam4;
	Global_17257.f_5090++;
	if (!bParam3)
	{
		func_129(Global_17257.f_5088, 1);
	}
	else
	{
		func_129(Global_17257.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_128(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_101(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
		{
			Global_17257.f_4938[Global_17257.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_127(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
			if (fVar4 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x26545538B51562AD(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 1;
	Global_17257.f_5609 = (Global_17257.f_5090 - 1);
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = iParam2;
}

float func_127(char* sParam0)
{
	if (!unk_0x2A19A119886EC3BF(sParam0))
	{
	}
	return unk_0x7A6411DA07C45D6F(0.35f, 0);
}

float func_128(char* sParam0)
{
	if (!unk_0x0275404839C0A19A(sParam0))
	{
		if (unk_0x70ABFF261710305D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_81(0, 1, 0, 0, 0, 0);
	unk_0xA56937B322E371D6(sParam0);
	return unk_0x96CEDAB660C8AD63(1);
}

void func_129(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x26545538B51562AD(&(Global_17257.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_17257.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_130(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	char* sVar6;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	char* sVar14;
	int iVar18;
	var uVar19;
	var uVar20;
	
	uParam1->f_66 = func_124(iParam0, iParam4);
	if (uParam1->f_66 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_66 == joaat("frogger"))
	{
		uParam1->f_66 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_67 = 1;
		return;
	}
	uParam1->f_77 = 0;
	func_140(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_139(iParam0))
	{
		if (Global_68316)
		{
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	uParam1->f_9[48] = 0;
	uParam1->f_98 = 0;
	if (iParam0 == 251)
	{
		uParam1->f_98 = 4;
	}
	uParam1->f_65 = 0;
	if (iParam0 == 263)
	{
		if (Global_68316)
		{
			uParam1->f_65 = 1;
		}
	}
	if (bParam2)
	{
		iVar0 = Global_68315;
	}
	else if (iParam3 == 0)
	{
		iVar0 = Global_101154.f_29707.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar0 = Global_101154.f_29707.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar0 = Global_101154.f_29707.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_67 = -1;
	if (iParam0 == 200)
	{
		switch (iVar0)
		{
			case 1:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 2:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 3:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 4:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 5:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 6:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 7:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 8:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 9:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 10:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 11:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 12:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 13:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 14:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 15:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 16:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 17:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 18:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 19:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 20:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 21:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 22:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 23:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 24:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			case 25:
				func_135(func_136(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_134(func_136(iParam0, iVar0));
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar0)
		{
			case 1:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 1;
				break;
			
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 2;
				break;
			
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 3;
				break;
			
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 8;
				break;
			
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 4;
				break;
			
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 5;
				break;
			
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 7;
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 6;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 1:
				if (func_133(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_132(iParam0, iVar0, &uVar1))
						{
							uParam1->f_9[48] = uVar1;
						}
						else
						{
							uParam1->f_67 = 0;
						}
					}
					else
					{
						uParam1->f_67 = func_134(func_136(iParam0, iVar0));
					}
				}
				else if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						uParam1->f_5 = 143;
						uParam1->f_6 = 34;
						uParam1->f_7 = 31;
						uParam1->f_96 = 99;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 40;
						uParam1->f_6 = 40;
						uParam1->f_96 = 93;
						uParam1->f_67 = -1;
					}
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			
			case 2:
				if (func_133(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_132(iParam0, iVar0, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else
						{
							uParam1->f_67 = 1;
						}
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_67 = func_134(func_136(iParam0, iVar0));
					}
				}
				else if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						uParam1->f_5 = 8;
						uParam1->f_6 = 8;
						uParam1->f_7 = 5;
						uParam1->f_96 = 106;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 14;
						uParam1->f_6 = 14;
						uParam1->f_96 = 108;
						uParam1->f_67 = -1;
					}
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			
			case 3:
				if (func_133(iParam0))
				{
					if (func_132(iParam0, iVar0, &uVar3))
					{
						uParam1->f_9[48] = uVar3;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						uParam1->f_5 = 100;
						uParam1->f_6 = 100;
						uParam1->f_7 = 100;
						uParam1->f_96 = 22;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 152;
						uParam1->f_6 = 152;
						uParam1->f_96 = 22;
						uParam1->f_67 = -1;
					}
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			
			case 4:
				if (func_133(iParam0))
				{
					if (func_132(iParam0, iVar0, &uVar4))
					{
						uParam1->f_9[48] = uVar4;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_7 = 106;
						uParam1->f_96 = 101;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_96 = 48;
						uParam1->f_67 = -1;
					}
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_131(iVar5, &sVar6, &iVar10, &uVar11, &uVar12))
					{
						if (unk_0xC1C5B83BB6719C6C(&sVar6, "ORANGE") && iVar10 == 1)
						{
							uParam1->f_5 = uVar11;
							uParam1->f_6 = uVar12;
							iVar5 = -99;
						}
						iVar5++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 5:
				if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						uParam1->f_5 = 49;
						uParam1->f_6 = 49;
						uParam1->f_7 = 52;
						uParam1->f_96 = 98;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 128;
						uParam1->f_6 = 128;
						uParam1->f_96 = 99;
						uParam1->f_67 = -1;
					}
				}
				else if ((iParam0 == 178 || iParam0 == 179) || iParam0 == 192)
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_131(iVar13, &sVar14, &iVar18, &uVar19, &uVar20))
					{
						if (unk_0xC1C5B83BB6719C6C(&sVar14, "LIME_GREEN") && iVar18 == 1)
						{
							uParam1->f_5 = uVar19;
							uParam1->f_6 = uVar20;
							iVar13 = -99;
						}
						iVar13++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 6:
				if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						uParam1->f_5 = 141;
						uParam1->f_6 = 141;
						uParam1->f_7 = 73;
						uParam1->f_96 = 5;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 84;
						uParam1->f_6 = 84;
						uParam1->f_96 = 24;
						uParam1->f_67 = -1;
					}
				}
				else
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 68;
					uParam1->f_67 = -1;
				}
				break;
			
			case 7:
				if (uParam1->f_66 == joaat("kuruma2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 0;
						uParam1->f_7 = 10;
						uParam1->f_96 = 1;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 12;
						uParam1->f_6 = 12;
						uParam1->f_96 = 0;
						uParam1->f_67 = -1;
					}
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			
			case 8:
				if (func_139(iParam0))
				{
					if (!Global_68316)
					{
						uParam1->f_5 = 112;
						uParam1->f_6 = 112;
						uParam1->f_7 = 0;
						uParam1->f_96 = 7;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 131;
						uParam1->f_6 = 131;
						uParam1->f_96 = 78;
						uParam1->f_67 = -1;
					}
				}
				else
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				break;
			
			default:
				break;
			}
	}
	if (iVar0 == 0)
	{
		switch (iParam0)
		{
			case 32:
				uParam1->f_5 = 111;
				uParam1->f_6 = 65;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_67 = -1;
				break;
			
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_67 = -1;
				break;
			
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_67 = -1;
				break;
			
			case 210:
				uParam1->f_5 = 28;
				uParam1->f_6 = 0;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_67 = -1;
				break;
			
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 205:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 12;
				uParam1->f_67 = -1;
				break;
			
			case 227:
				uParam1->f_5 = 0;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 226:
				uParam1->f_5 = 36;
				uParam1->f_6 = 36;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 230:
				uParam1->f_5 = 41;
				uParam1->f_6 = 41;
				uParam1->f_7 = 156;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			default:
				break;
			}
	}
	if (iParam0 == 161)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 231)
	{
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

bool func_131(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_132(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 == 231)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 4;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
			
			case 3:
				*uParam2 = 2;
				return 1;
				break;
			
			case 4:
				*uParam2 = 3;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 232)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 2;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	*uParam2 = -1;
	return 0;
}

int func_133(int iParam0)
{
	if (((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232)
	{
		return 1;
	}
	return 0;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		default:
	}
	return -1;
}

int func_135(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
			break;
	}
	return 0;
}

int func_136(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case joaat("mpsv_lp0_31"):
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_137(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		default:
	}
	return -1;
}

int func_137(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0xF9A2527AE152F062())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_39() && func_138())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if ((iParam0 == 221 || iParam0 == 135) || iParam0 == 210)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_139(iParam0))
	{
		if (Global_68316)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_138()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xF426A5DE932B3BEE(Global_25, 5))
	{
		if (unk_0xF426A5DE932B3BEE(Global_25, 1) || unk_0xF426A5DE932B3BEE(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0xF426A5DE932B3BEE(iVar0, 5))
		{
			if (unk_0xF426A5DE932B3BEE(iVar0, 1) || unk_0xF426A5DE932B3BEE(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0xDE59655A16832466(0))
	{
		if (Global_138275.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xD0D748C6C14C0E92(iVar2, &iVar1, -1))
			{
				if (unk_0xF426A5DE932B3BEE(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x755BFB74ADDC1524())
	{
		iVar3 = unk_0xC06A80AF9911D7A8(866);
		if (unk_0xF426A5DE932B3BEE(iVar3, 1) || unk_0xF426A5DE932B3BEE(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0xB3081451628A5D6C())
	{
		if (unk_0xF8B1AB221BA632B5())
		{
			if (unk_0x35C1EA95ADD54E4D())
			{
				unk_0xD0D748C6C14C0E92(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				unk_0x26545538B51562AD(&iVar4, 1);
				unk_0x26545538B51562AD(&iVar4, 3);
				unk_0x26545538B51562AD(&iVar4, 5);
				unk_0x26545538B51562AD(&Global_25, 1);
				unk_0x26545538B51562AD(&Global_25, 3);
				unk_0x26545538B51562AD(&Global_25, 5);
				unk_0xE2A8B026FA4DDFFF(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (unk_0x755BFB74ADDC1524())
				{
					iVar4 = unk_0xC06A80AF9911D7A8(866);
					unk_0x26545538B51562AD(&iVar4, 1);
					unk_0x26545538B51562AD(&iVar4, 3);
					unk_0xD020BAA9D2E33978(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

void func_140(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 64:
			unk_0x26545538B51562AD(uParam1, 4);
			break;
		
		case 67:
			unk_0x26545538B51562AD(uParam1, 4);
			break;
		
		case 72:
			unk_0x26545538B51562AD(uParam1, 1);
			break;
		
		case 117:
			unk_0xF17F4B0641AB2DE1(uParam1, 1);
			break;
		
		case 49:
			unk_0xF17F4B0641AB2DE1(uParam1, 0);
			unk_0x26545538B51562AD(uParam1, 1);
			break;
		
		case 118:
			unk_0x26545538B51562AD(uParam1, 0);
			unk_0xF17F4B0641AB2DE1(uParam1, 1);
			break;
		
		case 1:
			unk_0x26545538B51562AD(uParam1, 1);
			break;
		
		case 119:
			unk_0xF17F4B0641AB2DE1(uParam1, 1);
			break;
		
		case 77:
			unk_0x26545538B51562AD(uParam1, 0);
			unk_0xF17F4B0641AB2DE1(uParam1, 1);
			unk_0xF17F4B0641AB2DE1(uParam1, 2);
			break;
		
		case 120:
			unk_0xF17F4B0641AB2DE1(uParam1, 0);
			unk_0x26545538B51562AD(uParam1, 1);
			unk_0xF17F4B0641AB2DE1(uParam1, 2);
			break;
		
		case 130:
			unk_0x26545538B51562AD(uParam1, 0);
			break;
		
		case 132:
			unk_0x26545538B51562AD(uParam1, 0);
			break;
		
		case 135:
			unk_0xF17F4B0641AB2DE1(uParam1, 0);
			unk_0x26545538B51562AD(uParam1, 1);
			break;
		
		case 137:
			unk_0x26545538B51562AD(uParam1, 0);
			break;
		
		case 141:
			unk_0x26545538B51562AD(uParam1, 1);
			unk_0xF17F4B0641AB2DE1(uParam1, 6);
			break;
		
		case 147:
			unk_0x26545538B51562AD(uParam1, 0);
			unk_0x26545538B51562AD(uParam1, 1);
			unk_0x26545538B51562AD(uParam1, 2);
			unk_0x26545538B51562AD(uParam1, 3);
			unk_0x26545538B51562AD(uParam1, 4);
			unk_0x26545538B51562AD(uParam1, 5);
			unk_0x26545538B51562AD(uParam1, 6);
			unk_0x26545538B51562AD(uParam1, 7);
			unk_0x26545538B51562AD(uParam1, 8);
			break;
		
		case 203:
			unk_0x26545538B51562AD(uParam1, 0);
			unk_0xF17F4B0641AB2DE1(uParam1, 1);
			unk_0xF17F4B0641AB2DE1(uParam1, 2);
			break;
		
		case 100:
			unk_0x26545538B51562AD(uParam1, 0);
			unk_0x26545538B51562AD(uParam1, 1);
			unk_0x26545538B51562AD(uParam1, 2);
			break;
		
		case 170:
			unk_0xF17F4B0641AB2DE1(uParam1, 0);
			unk_0xF17F4B0641AB2DE1(uParam1, 1);
			unk_0xF17F4B0641AB2DE1(uParam1, 2);
			break;
		
		case 160:
			unk_0x26545538B51562AD(uParam1, 15);
			break;
		
		case 161:
			unk_0x26545538B51562AD(uParam1, 15);
			break;
		
		case 192:
			unk_0x26545538B51562AD(uParam1, 0);
			unk_0x26545538B51562AD(uParam1, 1);
			unk_0xF17F4B0641AB2DE1(uParam1, 2);
			break;
		
		case 221:
			unk_0xF17F4B0641AB2DE1(uParam1, 0);
			unk_0x26545538B51562AD(uParam1, 1);
			unk_0xF17F4B0641AB2DE1(uParam1, 2);
			break;
		
		case 222:
			unk_0x26545538B51562AD(uParam1, 1);
			break;
		
		case 172:
			unk_0x26545538B51562AD(uParam1, 1);
			break;
		
		case 165:
			unk_0xF17F4B0641AB2DE1(uParam1, 0);
			unk_0x26545538B51562AD(uParam1, 1);
			break;
		
		case 166:
			unk_0x26545538B51562AD(uParam1, 0);
			unk_0xF17F4B0641AB2DE1(uParam1, 1);
			break;
		
		case 139:
			unk_0x26545538B51562AD(uParam1, 0);
			break;
		
		case 104:
			unk_0x26545538B51562AD(uParam1, 1);
			break;
		
		case 109:
			unk_0x26545538B51562AD(uParam1, 0);
			unk_0x26545538B51562AD(uParam1, 1);
			unk_0x26545538B51562AD(uParam1, 2);
			break;
		
		case 227:
		case 252:
			unk_0x26545538B51562AD(uParam1, 1);
			unk_0xF17F4B0641AB2DE1(uParam1, 2);
			unk_0xF17F4B0641AB2DE1(uParam1, 4);
			break;
		
		case 97:
			unk_0x26545538B51562AD(uParam1, 0);
			unk_0x26545538B51562AD(uParam1, 1);
			break;
		
		case 52:
			unk_0x26545538B51562AD(uParam1, 1);
			break;
		
		case 108:
			unk_0x26545538B51562AD(uParam1, 1);
			break;
		
		case 237:
			unk_0x26545538B51562AD(uParam1, 9);
			break;
		
		case 238:
			unk_0xF17F4B0641AB2DE1(uParam1, 0);
			unk_0x26545538B51562AD(uParam1, 1);
			unk_0x26545538B51562AD(uParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_68316)
			{
				unk_0x26545538B51562AD(uParam1, 9);
			}
			break;
		
		default:
			return;
			break;
	}
}

void func_141(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_1), sParam0, 16);
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4926[0] = iParam0;
	Global_17257.f_4926[1] = iParam1;
	Global_17257.f_4926[2] = iParam2;
	Global_17257.f_4926[3] = iParam3;
	Global_17257.f_4926[4] = iParam4;
	Global_17257.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5096++;
	}
}

void func_144(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2443586[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17257.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4959[iVar0] = 0;
		Global_17257.f_5097[iVar0] = 0;
		Global_17257.f_5226[iVar0] = 0;
		Global_17257.f_5746[iVar0] = 0f;
		Global_17257.f_5355[iVar0] = 0;
		Global_17257.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4926[iVar0] = 0;
		Global_17257.f_4938[iVar0] = 0f;
		Global_17257.f_4932[iVar0] = -1f;
		Global_17257.f_4945[iVar0] = 0;
		Global_17257.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 344;
		Global_17257.f_4909[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_17257.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6687[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2562053.f_16), "", 16);
	Global_2562053.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5088 = 0;
	Global_17257.f_5089 = 0;
	Global_17257.f_5090 = 0;
	Global_17257.f_5092 = 0;
	Global_17257.f_5093 = 0;
	Global_17257.f_5094 = 0;
	Global_17257.f_5091 = 0;
	Global_17257.f_5741 = 0;
	Global_17257.f_5606 = 0;
	Global_17257.f_5605 = 0;
	Global_17257.f_5607 = 0;
	StringCopy(&(Global_17257.f_4562), "", 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = 0;
	Global_17257.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4638 = 0;
	StringCopy(&(Global_2562053.f_21), "", 16);
	Global_2562053.f_61 = 0;
	Global_2562053.f_62 = 0;
	Global_2562053.f_63 = 0;
	Global_2562053.f_64 = 0;
	Global_2562053.f_65 = 0;
	Global_2562053.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2562053.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2562053.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4944 = 0f;
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_5611 = 0;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = 0;
	Global_17257.f_5609 = 0;
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	Global_17257.f_5095 = 10;
	Global_17257.f_5096 = 0;
	Global_17257.f_5743 = 0f;
	Global_17257.f_5744 = 0f;
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	Global_17257.f_5600 = 0f;
	Global_17257.f_5601 = 0;
	Global_17257.f_5603 = 0;
	Global_17257.f_5602 = 0;
	Global_17257.f_5604 = 0;
	Global_17257.f_7858 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5875[iVar0] = -1;
		Global_17257.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4951 = 0f;
	Global_17257.f_4922 = 0;
	Global_17257.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5881)
	{
		Global_17257.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_7837 = 0;
	Global_17257.f_7832 = 0;
	Global_17257.f_7842 = 0;
	Global_17257.f_7847 = 0;
	Global_17257.f_7852 = 0;
	Global_17257.f_7854 = 0;
	Global_17257.f_7860 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = unk_0xFE8EA5C3B2ABAB53(0);
	if (bParam0)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17256 = 0.225f;
	}
}

void func_145()
{
	if (unk_0xDFCB321F1D24137F())
	{
		unk_0x06A159967E657EF2(0.325f, 0.3f);
	}
}

int func_146(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_66(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x2DB75A8F096AB1F1(unk_0xB927AFB90873B8C1()))
	{
		return 0;
	}
	if (func_76(0))
	{
		return 0;
	}
	if (unk_0x67FB99B1361E144E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/] == 1 && Global_36411[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36411[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36411[iVar0 /*32*/].f_5 = 1;
			Global_36411[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36411[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36411[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_147(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_69(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17257.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x75CB9E30BA492FF0(&(Global_17257.f_5505[iVar0 /*4*/])))
	{
		unk_0x8378AB3CED5FF44A(&(Global_17257.f_5505[iVar0 /*4*/]), 9);
		Global_17257.f_5498[iVar0] = 1;
		if (!unk_0xCB612AFFB3836CA1(&(Global_17257.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x72426D9FCE288C68("CommonMenu", 0);
	Global_17257.f_5484[iVar0] = 1;
	if (!unk_0xBF1504B8A1447E5E("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x72426D9FCE288C68("MPShopSale", 0);
		Global_17257.f_5491[iVar0] = 1;
		if (!unk_0xBF1504B8A1447E5E("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17257.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_148(&(Global_17257.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_148(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x4C3CEC038B6637D7(*uParam0))
			{
				*uParam0 = unk_0x9A64FC8B83855E3B(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x4C3CEC038B6637D7(*uParam0))
					{
						uParam0->f_8 = unk_0xA0F74982C6AAA9D4();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xA0F74982C6AAA9D4();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x4C3CEC038B6637D7(*uParam0))
			{
				uParam0->f_8 = unk_0xA0F74982C6AAA9D4();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x4C3CEC038B6637D7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_149(char* sParam0, int iParam1)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	unk_0x9785EE0D78241684(0, 0, 1, iParam1);
}

var func_150(char* sParam0)
{
	unk_0x66F753896FC4EEC3(sParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

void func_151(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xD32535FA4397160F(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x5D293E404CA20AA5())
	{
		if (!*iParam0 == -1)
		{
			func_65(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/] = 1;
			Global_36411[iVar0 /*32*/].f_1 = Global_36612;
			Global_36612++;
			Global_36411[iVar0 /*32*/].f_4 = 0;
			Global_36411[iVar0 /*32*/].f_29 = 0;
			Global_36411[iVar0 /*32*/].f_5 = 0;
			Global_36411[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36411[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36411[iVar0 /*32*/].f_6 = iParam3;
			Global_36411[iVar0 /*32*/].f_31 = unk_0xF42B3EF31F918DB2();
			Global_36411[iVar0 /*32*/].f_7 = 0;
			Global_36411[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x75CB9E30BA492FF0(sParam4))
			{
				Global_36411[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36411[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36411[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36411[iVar0 /*32*/].f_12 = 0;
				Global_36411[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36411[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return unk_0xF426A5DE932B3BEE(Global_101154.f_29707[iParam0], iVar0);
}

int func_153(int iParam0)
{
	int iVar0;
	int iVar1[128];
	
	if (func_156(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_101154.f_17264[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_39() && !unk_0x0E063DDE8855EC52())
	{
		if (func_155(33, 0) && !func_154(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_101154.f_29598.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_101154.f_29598.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_101154.f_29598.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_101154.f_29598.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_101154.f_29598.f_7)
		{
			iVar1[iVar0] = joaat("marshall");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return 0;
}

int func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_764)
	{
		if (Global_101154.f_6378.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_155(int iParam0, int iParam1)
{
	if (unk_0xF426A5DE932B3BEE(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_156(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_668.f_780, 2))
		{
			return 1;
		}
	}
	if (unk_0xF9A2527AE152F062())
	{
		if (!bParam1 || unk_0x88E055AE81551426())
		{
			if (!unk_0x3E00A1016DB5AFEF() && !unk_0x748A964A12412EBB())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0x554BB0B9E62F2C70())
		{
			return 0;
		}
	}
	if (unk_0xF9A2527AE152F062())
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_156(1, 1))
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			iVar0++;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_101154.f_17264[45 /*6*/], 3))
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			iVar0++;
		}
	}
	if (func_39() && !unk_0x0E063DDE8855EC52())
	{
		if (func_155(33, 0) && !func_154(1751306471))
		{
			iVar0++;
		}
		if (Global_101154.f_29598.f_3)
		{
			iVar0++;
		}
		if (Global_101154.f_29598.f_4)
		{
			iVar0++;
		}
		if (Global_101154.f_29598.f_5)
		{
			iVar0++;
		}
		if (Global_101154.f_29598.f_6)
		{
			iVar0++;
		}
		if (Global_101154.f_29598.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_158(float fParam0)
{
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()) && !unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0xEB8AC4765468F895(unk_0x27D769C59BC9D030()) > 0;
		}
		else
		{
			return unk_0x87FBB4407CFF92C7(unk_0x27D769C59BC9D030(), unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), fParam0) > 0;
		}
	}
	return 0;
}

bool func_159(bool bParam0)
{
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
}

void func_160()
{
	var uVar0[10];
	bool bVar11;
	int iVar12;
	float fVar13;
	char* sVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	int iVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	struct<3> Var30;
	bool bVar51;
	float fVar52;
	int iVar53;
	struct<3> Var54;
	struct<3> Var57;
	int iVar60;
	struct<3> Var61;
	bool bVar82;
	float fVar83;
	int iVar84;
	bool bVar85;
	struct<4> Var86;
	bool bVar90;
	int iVar91;
	struct<4> Var92;
	struct<60> Var113;
	int iVar191;
	int iVar192;
	int iVar193;
	bool bVar194;
	float fVar195;
	int iVar196;
	struct<60> Var197;
	int iVar275;
	bool bVar276;
	int iVar277;
	int iVar278;
	int iVar279;
	int iVar280;
	bool bVar281;
	bool bVar282;
	
	bVar11 = false;
	if ((((((((((((((((Local_402.f_29.f_80 && Local_402.f_29.f_69) && !unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030())) && Local_402.f_2 == 0) && Local_402.f_0 != -1) && func_63(Local_402.f_0, 0)) && func_63(Local_402.f_0, 5)) && !func_26(0)) && !func_26(3)) && !func_26(2)) && !func_26(4)) && !func_26(5)) && !func_26(14)) && !Global_68058) && !func_159(1)) && !func_218()) || (((Local_402.f_3 > 1 && !func_159(0)) && !unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030())) && !func_218()))
	{
		func_217(Local_402.f_0, &Local_546);
		fVar13 = 0f;
		sVar14 = "ANIM@APT_TRANS@GARAGE";
		Var15 = { 198.3659f, -1020.273f, -100f };
		Var18 = { Var15 };
		Var21 = { 198.9538f, -1026.13f, -100f };
		iVar24 = func_216(Local_402.f_0);
		switch (Local_402.f_3)
		{
			case 0:
				if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && !unk_0x5D293E404CA20AA5())
				{
					Local_402.f_3 = 10;
					return;
				}
				if ((((((unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && (func_215(unk_0x4D6B971C8AEE130C(unk_0x27D769C59BC9D030()), Local_402.f_29.f_68, 90f) || unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))) && unk_0x170C6E2649B67440(unk_0x4D29100D094E5511())) && !unk_0x9426D57129B5B113(unk_0x27D769C59BC9D030())) && !unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030())) && !unk_0xE4A4201018E7FD55(unk_0x27D769C59BC9D030(), 2)) && (iVar24 == iLocal_672 || iVar24 == 145))
				{
					if (func_214())
					{
						bVar25 = true;
						if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
						{
							iVar12 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 1);
							if (unk_0xD2CFFE76B625AE55(iVar12))
							{
								if (unk_0x0B4DDB992C7BCF57(iVar12, 0))
								{
									iVar26 = unk_0x946C63BD9EF05437(iVar12);
									if (((((((((!func_60(iVar26) || func_59(iVar12)) || func_58(iVar12)) || !func_37(iVar26, 0)) || unk_0x51A640907BDD41BB(iVar12)) || ((!unk_0xA8059F869DFB2747(iVar26) && !unk_0x6CCC9ABA9456E815(iVar26)) && !unk_0xF283F0E0B39E6846(iVar26))) || iVar26 == joaat("monster")) || unk_0xFA7888B344869306(iVar12)) || unk_0x72F060E36BC86756(iVar12)) || (unk_0x99A6DF927B71E935(unk_0x27D769C59BC9D030()) && unk_0xD32535FA4397160F(joaat("taxi_procedural")) > 0))
									{
										bVar25 = false;
									}
								}
								else
								{
									bVar25 = false;
								}
							}
						}
						else if (unk_0x29B35F8DCF6EDC78(sVar14))
						{
							unk_0x88172B3983EC5071(sVar14);
							if (!unk_0x482101C9B3483958(sVar14))
							{
								bVar25 = false;
							}
						}
						if (bVar25)
						{
							func_151(&iLocal_656, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							iLocal_1034 = 0;
							Local_402.f_3 = 1;
						}
						else if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
						{
							if (!unk_0x46768B1495288824() || func_150("WEB_VEH_INV"))
							{
								func_149("WEB_VEH_INV", -1);
								StringCopy(&cLocal_1023, "WEB_VEH_INV", 16);
								bVar11 = true;
							}
						}
					}
					else if (!unk_0x46768B1495288824() || func_150("WEB_VEH_FULL"))
					{
						func_149("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_1023, "WEB_VEH_FULL", 16);
						bVar11 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_1032)
				{
					if (!unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
					{
						iLocal_1032 = 0;
						unk_0x88172B3983EC5071(sVar14);
						if (unk_0x482101C9B3483958(sVar14))
						{
							iLocal_1032 = 1;
						}
					}
					else
					{
						unk_0x651E63BA2F4975EC(sVar14);
						iLocal_1032 = 1;
					}
				}
				iVar27 = 1;
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
				{
					iVar12 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 1);
					if (unk_0xD2CFFE76B625AE55(iVar12))
					{
						if (unk_0x0B4DDB992C7BCF57(iVar12, 0))
						{
							iVar28 = unk_0x946C63BD9EF05437(iVar12);
							if ((((((((!func_60(iVar28) || func_59(iVar12)) || func_58(iVar12)) || unk_0x51A640907BDD41BB(iVar12)) || ((!unk_0xA8059F869DFB2747(iVar28) && !unk_0x6CCC9ABA9456E815(iVar28)) && !unk_0xF283F0E0B39E6846(iVar28))) || iVar28 == joaat("monster")) || unk_0xFA7888B344869306(iVar12)) || unk_0x72F060E36BC86756(iVar12)) || (unk_0x99A6DF927B71E935(unk_0x27D769C59BC9D030()) && unk_0xD32535FA4397160F(joaat("taxi_procedural")) > 0))
							{
								iVar27 = 0;
							}
						}
						else
						{
							iVar27 = 0;
						}
					}
				}
				if (((((((((unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && (func_215(unk_0x4D6B971C8AEE130C(unk_0x27D769C59BC9D030()), Local_402.f_29.f_68, 90f) || unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))) && unk_0x170C6E2649B67440(unk_0x4D29100D094E5511())) && func_214()) && !unk_0x9426D57129B5B113(unk_0x27D769C59BC9D030())) && !unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030())) && !unk_0xE4A4201018E7FD55(unk_0x27D769C59BC9D030(), 2)) && !func_218()) && (iVar24 == iLocal_672 || iVar24 == 145)) && iVar27)
				{
					if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()) || (unk_0x482101C9B3483958(sVar14) || !unk_0x29B35F8DCF6EDC78(sVar14)))
					{
						if (func_146(iLocal_656, 1))
						{
							func_65(&iLocal_656);
							iLocal_1032 = 0;
							Local_402.f_3 = 2;
						}
						func_212(47, 0);
						func_207(47, 0);
						Local_402.f_112 = unk_0x695481387D3FCB8D(Var15, "v_garagem_sp");
						if (unk_0xBFF8C08B5EEF0974(Local_402.f_112))
						{
							if (!unk_0x73F79DD3F5F32B29(Local_402.f_112))
							{
								if ((unk_0xA08D2B17A64B8371() % 10) == 0)
								{
									unk_0x564E441E8CD3C56D(Local_402.f_112);
								}
							}
							StringCopy(&Global_32434, "v_garagem_sp", 32);
						}
						if (!iLocal_1031 && !unk_0x9A7F0D797C57AC34())
						{
							if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
							{
								iVar29 = func_205(Local_402.f_0);
								func_57(&Var30, iVar29);
								Var18 = { Var30 };
								unk_0x9BDDAC2B68E13329(Var18, 20f, 0);
							}
							else
							{
								unk_0x9BDDAC2B68E13329(Var21 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_1031 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1031 && unk_0x9A7F0D797C57AC34())
					{
						unk_0x18F9F40035A8905D();
						iLocal_1031 = 0;
					}
					iLocal_1032 = 0;
					func_65(&iLocal_656);
					unk_0x651E63BA2F4975EC(sVar14);
					Local_402.f_3 = 0;
				}
				break;
			
			case 2:
				func_212(47, 0);
				func_207(47, 0);
				unk_0xB1063C2349425DD1(8);
				Global_68319.f_577 = 1;
				Global_68319.f_578 = { Local_402.f_29.f_55 };
				iLocal_1012 = unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511());
				unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
				unk_0x35E648675FC36FAE(unk_0x27D769C59BC9D030(), 0, 0);
				unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
				unk_0x3DFCFAD590F85BF7(0);
				unk_0x83DB85FD25128C55(0);
				unk_0xDAE452D7515031D9(unk_0x4D29100D094E5511());
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					iVar12 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
					if (unk_0xD2CFFE76B625AE55(iVar12) && unk_0x0B4DDB992C7BCF57(iVar12, 0))
					{
						if (func_215(unk_0x4D6B971C8AEE130C(iVar12), Local_402.f_29.f_68, 90f))
						{
							iLocal_1034 = 0;
						}
						else
						{
							iLocal_1034 = 1;
						}
						unk_0xF7B3552987613A6B(iVar12, 1, 1, 1, 1, 1, 1, 0, 0);
						unk_0xBEE458FA951B0113(Local_546.f_86[0 /*6*/], 20f, 0);
						unk_0x8474F03FCE36E004(Local_546.f_86[0 /*6*/], 20f, 0);
						unk_0x19FAF10EF91E58C1(Local_546.f_86[0 /*6*/], 7f);
						unk_0x4EEE9D9427E70F4E(iVar12, Local_546.f_86[0 /*6*/], 1, 0, 0, 1);
						if (iLocal_1034 && !unk_0x40CB4787F2506675(unk_0x27D769C59BC9D030()))
						{
							unk_0xFBDCF3D5834B58D8(iVar12, (Local_546.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0xFBDCF3D5834B58D8(iVar12, Local_546.f_86[0 /*6*/].f_3.f_2);
						}
						if (unk_0x40CB4787F2506675(unk_0x27D769C59BC9D030()))
						{
							unk_0xEA9F3D2740164867(unk_0x27D769C59BC9D030(), 0, 0, -1);
							unk_0x846AF7F4E166B47A(unk_0x27D769C59BC9D030(), 1);
						}
						unk_0xFA3ED0FFF3FD8F34(iVar12);
					}
					unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
					func_199(1, 1, 1, 0);
					func_198(&(Local_546[1 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 3;
				}
				else
				{
					if (unk_0xD2CFFE76B625AE55(iLocal_1027) && !unk_0x2006A8C1BA2AFE80(iLocal_1027, 0))
					{
						if (unk_0xE24B37600DCB21FC(iLocal_1027) && unk_0xFF65D7BC656BA68E(iLocal_1027, 1))
						{
							unk_0x9846B4D56971A958(&iLocal_1027);
						}
					}
					iLocal_1027 = unk_0x070841EC2D20AB5A();
					if ((((unk_0xD2CFFE76B625AE55(iLocal_1027) && unk_0x0B4DDB992C7BCF57(iLocal_1027, 0)) && !unk_0xDBFA5C79D9B3D622(unk_0x946C63BD9EF05437(iLocal_1027))) && !unk_0xEC6E5897335290DD(unk_0x946C63BD9EF05437(iLocal_1027))) && !unk_0xD3AE48D8EB7DCBE6(unk_0x946C63BD9EF05437(iLocal_1027)))
					{
						if (!unk_0xE24B37600DCB21FC(iLocal_1027))
						{
							unk_0xAF3355298F537BB0(iLocal_1027, 0, 0);
						}
						if (unk_0xD2CFFE76B625AE55(iLocal_1027) && unk_0x0B4DDB992C7BCF57(iLocal_1027, 0))
						{
							if (!bVar51)
							{
								if (unk_0x98CEDC9398D49BB8(iLocal_1027, Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0))
								{
									bVar51 = true;
								}
							}
							if (!bVar51)
							{
								fVar52 = unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(iLocal_1027, 1), Local_546[0 /*15*/]);
								if (fVar52 < (5f * 5f))
								{
									bVar51 = true;
								}
							}
							if (bVar51)
							{
								iVar53 = func_45(24);
								if (func_197(&Local_776, 24))
								{
									func_192(&Local_776, func_371());
									if (unk_0xD2CFFE76B625AE55(iVar53))
									{
										unk_0xF6E128C391C16F7C(&iVar53);
									}
								}
								if (Local_402.f_0 == 21)
								{
									unk_0xEFA71310CAEBAE1F(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
									func_190(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_402.f_0 == 22)
								{
									unk_0xEFA71310CAEBAE1F(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
									func_190(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_402.f_0 == 23)
								{
									unk_0xEFA71310CAEBAE1F(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
									func_190(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								unk_0xFA3ED0FFF3FD8F34(iLocal_1027);
							}
						}
					}
					else
					{
						iLocal_1027 = 0;
					}
					Var54 = { Local_402.f_29 * Vector(2f, 2f, 2f) + Local_402.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var57 = { Local_402.f_29 * Vector(1f, 1f, 1f) + Local_402.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Local_402.f_29, Var54.f_0, Var54.f_1, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0x3A5708FEE1B560A9(0, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Var54.f_0, Var54.f_1, Local_402.f_29.f_2, Var57.f_0, Var57.f_1, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0x3A5708FEE1B560A9(0, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Var57.f_0, Var57.f_1, Local_402.f_29.f_2, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0x3A5708FEE1B560A9(0, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_1035 = "";
						switch (unk_0x3A5708FEE1B560A9(0, 6))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_1035 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_1035 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_1035 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_1035 = "gar_open_3_right";
								break;
							}
					}
					unk_0xBEE458FA951B0113(Local_546.f_73[0 /*4*/], 20f, 0);
					unk_0x8474F03FCE36E004(Local_546.f_86[0 /*6*/], 20f, 0);
					unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), Local_546.f_73[0 /*4*/], 1, 0, 0, 1);
					unk_0xFBDCF3D5834B58D8(unk_0x27D769C59BC9D030(), Local_546.f_73[0 /*4*/].f_3);
					iLocal_661 = unk_0x239E9E07DB537DC9(Local_546.f_73[0 /*4*/], 0f, 0f, Local_546.f_73[0 /*4*/].f_3, 2);
					unk_0x98E2FD5DA7CF97D3(unk_0x27D769C59BC9D030(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0, 1148846080, 0);
					func_199(1, 1, 1, 0);
					func_198(&(Local_546[0 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 4;
				}
				Local_402.f_112 = unk_0x695481387D3FCB8D(Var15, "v_garagem_sp");
				if (unk_0xBFF8C08B5EEF0974(Local_402.f_112))
				{
					if (!unk_0x73F79DD3F5F32B29(Local_402.f_112))
					{
						unk_0x564E441E8CD3C56D(Local_402.f_112);
					}
					StringCopy(&Global_32434, "v_garagem_sp", 32);
				}
				if (!iLocal_1031)
				{
					if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
					{
						iVar60 = func_205(Local_402.f_0);
						func_57(&Var61, iVar60);
						Var18 = { Var61 };
						unk_0x9BDDAC2B68E13329(Var18, 20f, 0);
					}
					else
					{
						unk_0x9BDDAC2B68E13329(Var21, 20f, 0);
					}
				}
				unk_0x26545538B51562AD(&(Local_674.f_9), 25);
				func_186(198.0043f, -999.7775f, -100f, 50f, 0);
				func_106(Local_402.f_0);
				func_106(26);
				func_106(29);
				func_106(32);
				func_106(28);
				func_106(31);
				func_106(34);
				func_106(27);
				func_106(30);
				func_106(33);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1033 = 0;
				break;
			
			case 4:
				bVar82 = true;
				if (!unk_0x9A7F0D797C57AC34())
				{
				}
				else if (unk_0x22AC80586B658378())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0xBFF8C08B5EEF0974(Local_402.f_112))
				{
					if (!unk_0x73F79DD3F5F32B29(Local_402.f_112))
					{
						unk_0x564E441E8CD3C56D(Local_402.f_112);
					}
					StringCopy(&Global_32434, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = unk_0x695481387D3FCB8D(Var15, "v_garagem_sp");
				}
				if (func_185())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0x54DA78A82349F5AC(Local_402.f_110) && unk_0x5D6077A892B90119(Local_402.f_110))
				{
					if (unk_0xC416F2B1A1D7685D(Local_402.f_110))
					{
						bVar82 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else if (unk_0x54DA78A82349F5AC(Local_402.f_111) && unk_0x5D6077A892B90119(Local_402.f_111))
				{
					if (unk_0xC416F2B1A1D7685D(Local_402.f_111))
					{
						bVar82 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0xC2AE0A979757C34A(iLocal_661))
				{
					fVar83 = unk_0xB3BBF60126795AAD(iLocal_661);
					if (fVar83 < 0.4f)
					{
						bVar82 = false;
					}
				}
				if (bVar82)
				{
					unk_0x4E63F662FDE672C3(800);
					Local_402.f_3 = 5;
				}
				break;
			
			case 5:
				if (unk_0x3934E959DB2478D3())
				{
					iVar84 = unk_0x9EE81D7901D9BCE2();
					unk_0x954BCDB8FDB0AC0F(iVar84, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0xE35939C3B3CA3B85(iVar84, "hold", (2250f / 1000f));
					func_199(0, 1, 1, 0);
					unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
					if (unk_0x54DA78A82349F5AC(Local_402.f_110))
					{
						unk_0xA931FF68636DF31C(Local_402.f_110, 0);
						unk_0x1D1A369233055AEC(Local_402.f_110, 0);
					}
					if (unk_0x54DA78A82349F5AC(Local_402.f_111))
					{
						unk_0xA931FF68636DF31C(Local_402.f_111, 0);
						unk_0x1D1A369233055AEC(Local_402.f_111, 0);
					}
					if (unk_0xD2CFFE76B625AE55(iLocal_1037))
					{
						unk_0xF1919C21714E9FAF(iLocal_1037, 1, 0);
						unk_0xA8CA82EB31D1626F(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0x99542B3CBA8A014E(unk_0x4D29100D094E5511());
					unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
					unk_0xB1063C2349425DD1(8);
					if (unk_0xC2AE0A979757C34A(iLocal_661))
					{
						unk_0x2C463497D9FB00B0(iLocal_661);
					}
					iLocal_661 = -1;
					unk_0x09D2BE36C9D2B76F(unk_0x27D769C59BC9D030());
					unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), 194.5394f, -1026.32f, -100f, 1, 0, 0, 1);
					unk_0xFBDCF3D5834B58D8(unk_0x27D769C59BC9D030(), 334.1665f);
					unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 1);
					unk_0x0B28AEB595CB09AF(0f);
					unk_0x4523FDDB9926E1D8(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 6;
				}
				break;
			
			case 6:
				func_184(Local_402.f_0);
				if (unk_0x3934E959DB2478D3() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					unk_0x651E63BA2F4975EC(sVar14);
					func_183();
					if (unk_0x9A7F0D797C57AC34())
					{
						unk_0x18F9F40035A8905D();
					}
					unk_0x4AD174B0D4656163(800);
					unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
					unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 0);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					Local_402.f_3 = 10;
				}
				break;
			
			case 3:
				func_184(Local_402.f_0);
				bVar85 = true;
				if (!unk_0x9A7F0D797C57AC34())
				{
				}
				else if (unk_0x22AC80586B658378())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0xBFF8C08B5EEF0974(Local_402.f_112))
				{
					if (!unk_0x73F79DD3F5F32B29(Local_402.f_112))
					{
						unk_0x564E441E8CD3C56D(Local_402.f_112);
					}
					StringCopy(&Global_32434, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = unk_0x695481387D3FCB8D(Var15, "v_garagem_sp");
				}
				if (func_185())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0x54DA78A82349F5AC(Local_402.f_110) && unk_0x5D6077A892B90119(Local_402.f_110))
				{
					if (unk_0xC416F2B1A1D7685D(Local_402.f_110))
					{
						bVar85 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else if (unk_0x54DA78A82349F5AC(Local_402.f_111) && unk_0x5D6077A892B90119(Local_402.f_111))
				{
					if (unk_0xC416F2B1A1D7685D(Local_402.f_111))
					{
						bVar85 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					Var86 = { 0f, 0f, 0f };
					Var86.f_3 = 0f;
					func_175(unk_0x27D769C59BC9D030(), Local_546.f_86[0 /*6*/], Local_546.f_66[0 /*3*/], ((Local_546[1 /*15*/].f_14 * 1000f) - 500f), Var86, 2, &fVar13);
				}
				if (bVar85)
				{
					func_183();
					unk_0xC1B1E9A034A63A62(0);
					unk_0x4E63F662FDE672C3(800);
					Local_402.f_3 = 35;
				}
				break;
			
			case 35:
				bVar90 = true;
				func_184(Local_402.f_0);
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546.f_61[1] * 1000f))
				{
					bVar90 = false;
				}
				if (bVar90)
				{
					func_183();
					func_199(0, 1, 1, 0);
					unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
					if (unk_0x54DA78A82349F5AC(Local_402.f_110))
					{
						unk_0xA931FF68636DF31C(Local_402.f_110, 0);
						unk_0x1D1A369233055AEC(Local_402.f_110, 0);
					}
					if (unk_0x54DA78A82349F5AC(Local_402.f_111))
					{
						unk_0xA931FF68636DF31C(Local_402.f_111, 0);
						unk_0x1D1A369233055AEC(Local_402.f_111, 0);
					}
					if (unk_0xD2CFFE76B625AE55(iLocal_1037))
					{
						unk_0xF1919C21714E9FAF(iLocal_1037, 1, 0);
						unk_0xA8CA82EB31D1626F(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0x99542B3CBA8A014E(unk_0x4D29100D094E5511());
					unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
					unk_0xB1063C2349425DD1(8);
					if (unk_0x9A7F0D797C57AC34())
					{
						unk_0x18F9F40035A8905D();
					}
					if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
					{
						iVar12 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
						if (unk_0xD2CFFE76B625AE55(iVar12) && unk_0x0B4DDB992C7BCF57(iVar12, 0))
						{
							iVar91 = func_205(Local_402.f_0);
							func_57(&Var92, iVar91);
							unk_0x4EEE9D9427E70F4E(iVar12, Var92, 1, 0, 0, 1);
							unk_0xFBDCF3D5834B58D8(iVar12, Var92.f_3);
							unk_0x48C585788C05DB37(iVar12, 1);
							unk_0x8BE1AEC303A057F7(iVar12, 0, 1, 0);
							unk_0xB4EBE8F97449D02E(iVar12, 4);
							unk_0xCB5DFB02BA72F726(iVar12, 1, 0);
							unk_0xCB5DFB02BA72F726(iVar12, 0, 0);
							unk_0x9C7CD45CE4DD7F73(iVar12, 0);
							unk_0xF7B3552987613A6B(iVar12, 0, 0, 0, 0, 0, 0, 0, 0);
							unk_0x8BD12B4D2B1648B7(unk_0x27D769C59BC9D030(), iVar12, 0);
							unk_0xA8CA82EB31D1626F(iVar12, 0);
							Var113.f_9 = 49;
							Var113.f_59 = 2;
							func_31(iVar12, &Var113);
							func_107(iVar91, &Var113, 0f, 0f, 0f, -1f, 145);
							func_29(iVar91, iVar12, 1);
							func_174(iVar12);
						}
						unk_0x0B28AEB595CB09AF(0f);
						unk_0x4523FDDB9926E1D8(0f, 1065353216);
					}
					iVar191 = unk_0xFCB979DB36343941(unk_0x27D769C59BC9D030(), &uVar0, -1);
					iVar192 = 0;
					while (iVar192 < iVar191)
					{
						if ((unk_0xD2CFFE76B625AE55(uVar0[iVar192]) && !unk_0xE4F7206742848BAF(uVar0[iVar192])) && unk_0x0CD267261D0845BA(uVar0[iVar192], unk_0x702DA8E73909DA0E(unk_0x4D29100D094E5511())))
						{
							unk_0x018805F05877E2E2(uVar0[iVar192], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar192++;
					}
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					unk_0x4AD174B0D4656163(800);
					Local_402.f_3 = 10;
				}
				break;
			
			case 10:
				if (unk_0x83666F9FB8FEBD4B() < 7000 || !Global_101154.f_18807.f_4800)
				{
					if (!Global_101154.f_18807.f_4800)
					{
						if (iLocal_1013 == 0)
						{
							func_149("CAR_GAR_05", -1);
							StringCopy(&cLocal_1023, "CAR_GAR_05", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								iLocal_1013++;
							}
						}
						else if (iLocal_1013 == 1)
						{
							func_149("CAR_GAR_06", -1);
							StringCopy(&cLocal_1023, "CAR_GAR_06", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								Global_101154.f_18807.f_4800 = 1;
							}
						}
					}
					else
					{
						func_149("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_1023, "CAR_GAR_EXIT", 16);
						bVar11 = true;
					}
				}
				else
				{
					Global_101154.f_18807.f_4800 = 1;
				}
				iVar193 = 0;
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					if (iLocal_656 != -1)
					{
						func_65(&iLocal_656);
					}
					iVar12 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
					if (unk_0xD2CFFE76B625AE55(iVar12) && unk_0x0B4DDB992C7BCF57(iVar12, 0))
					{
						if (unk_0x84AEB07678DD6163(iVar12) || unk_0x40CB4787F2506675(unk_0x27D769C59BC9D030()))
						{
							if (!(unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && !unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030())))
							{
								if ((((unk_0x1CB3481DB3DE9B89(0, 71) != 0f || unk_0x117D586920E8F7BA(0, 71)) || unk_0x5FCAE3F8AEC656AF(0, 71)) || unk_0x71D2CBF04FD5E207(0, 71)) || unk_0xC522B453AD5C9D05(0, 71))
								{
									iVar193 = 1;
								}
								if ((((unk_0x1CB3481DB3DE9B89(0, 72) != 0f || unk_0x117D586920E8F7BA(0, 72)) || unk_0x5FCAE3F8AEC656AF(0, 72)) || unk_0x71D2CBF04FD5E207(0, 72)) || unk_0xC522B453AD5C9D05(0, 72))
								{
									iVar193 = 1;
								}
							}
						}
					}
				}
				else
				{
					unk_0x88172B3983EC5071(sVar14);
					if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, 1, 0) && func_215(unk_0x4D6B971C8AEE130C(unk_0x27D769C59BC9D030()), 180f, 90f))
					{
						if (iLocal_655 != -1)
						{
							func_65(&iLocal_655);
						}
						if (iLocal_656 == -1)
						{
							func_151(&iLocal_656, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_655 != -1 && !iLocal_656 == -1)
						{
							if (func_146(iLocal_656, 1))
							{
								func_65(&iLocal_656);
								iVar193 = 1;
							}
						}
					}
					else if (iLocal_656 != -1)
					{
						func_65(&iLocal_656);
					}
				}
				if (iLocal_1016)
				{
					iVar193 = 1;
				}
				if (iVar193 && !func_173())
				{
					if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) || iLocal_1016)
					{
						unk_0xC1B1E9A034A63A62(0);
						unk_0x9BDDAC2B68E13329(Local_546.f_73[2 /*4*/], 20f, 0);
						if (iLocal_656 != -1)
						{
							func_65(&iLocal_656);
						}
						Local_402.f_3 = 12;
					}
					else if (unk_0x482101C9B3483958(sVar14))
					{
						sLocal_1035 = "";
						switch (unk_0x3A5708FEE1B560A9(0, 6))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_1035 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_1035 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_1035 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_1035 = "gar_open_3_right";
								break;
						}
						iLocal_661 = unk_0x239E9E07DB537DC9(Local_546.f_73[1 /*4*/], 0f, 0f, Local_546.f_73[1 /*4*/].f_3, 2);
						unk_0x98E2FD5DA7CF97D3(unk_0x27D769C59BC9D030(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0, 1148846080, 0);
						func_199(1, 1, 1, 0);
						func_198(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
						unk_0x9BDDAC2B68E13329(Local_546.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_656 != -1)
						{
							func_65(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
					else if (!unk_0x29B35F8DCF6EDC78(sVar14))
					{
						unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), Local_546.f_73[1 /*4*/], 1, 0, 0, 1);
						unk_0xFBDCF3D5834B58D8(unk_0x27D769C59BC9D030(), Local_546.f_73[1 /*4*/].f_3);
						func_199(1, 1, 1, 0);
						func_198(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
						unk_0x9BDDAC2B68E13329(Local_546.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_656 != -1)
						{
							func_65(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar194 = true;
				if (!unk_0x9A7F0D797C57AC34())
				{
				}
				else if (unk_0x22AC80586B658378())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (func_185())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (unk_0x54DA78A82349F5AC(Local_402.f_110) && unk_0x5D6077A892B90119(Local_402.f_110))
				{
					if (unk_0xC416F2B1A1D7685D(Local_402.f_110))
					{
						bVar194 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else if (unk_0x54DA78A82349F5AC(Local_402.f_111) && unk_0x5D6077A892B90119(Local_402.f_111))
				{
					if (unk_0xC416F2B1A1D7685D(Local_402.f_111))
					{
						bVar194 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else
				{
					bVar194 = false;
				}
				if (unk_0xC2AE0A979757C34A(iLocal_661))
				{
					fVar195 = unk_0xB3BBF60126795AAD(iLocal_661);
					if (fVar195 < 0.4f)
					{
						bVar194 = false;
					}
				}
				if (bVar194)
				{
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					unk_0x4E63F662FDE672C3(800);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 13;
				}
				break;
			
			case 12:
				unk_0xCFF471245AFEEDCE(0, 75, 1);
				if (unk_0x83666F9FB8FEBD4B() > 500)
				{
					iVar196 = func_172();
					if ((iVar196 == 21 || iVar196 == 22) || iVar196 == 23)
					{
						Var197.f_9 = 49;
						Var197.f_59 = 2;
						func_107(iVar196, &Var197, 0f, 0f, 0f, -1f, 145);
						func_109(iVar196);
					}
					else if (iVar196 != -1)
					{
						if (!iLocal_1016)
						{
							func_377(iVar196, 0);
							func_109(iVar196);
						}
					}
					unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
					unk_0x35E648675FC36FAE(unk_0x27D769C59BC9D030(), 0, 0);
					unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
					unk_0x651E63BA2F4975EC(sVar14);
					unk_0x4E63F662FDE672C3(800);
					Local_402.f_3 = 13;
				}
				break;
			
			case 13:
				if (unk_0x3934E959DB2478D3())
				{
					iVar275 = unk_0x9EE81D7901D9BCE2();
					unk_0x954BCDB8FDB0AC0F(iVar275, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0xE35939C3B3CA3B85(iVar275, "hold", (2250f / 1000f));
					unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
					if (unk_0x54DA78A82349F5AC(Local_402.f_110))
					{
						unk_0xA931FF68636DF31C(Local_402.f_110, 0);
						unk_0x1D1A369233055AEC(Local_402.f_110, 0);
					}
					if (unk_0x54DA78A82349F5AC(Local_402.f_111))
					{
						unk_0xA931FF68636DF31C(Local_402.f_111, 0);
						unk_0x1D1A369233055AEC(Local_402.f_111, 0);
					}
					if (unk_0xD2CFFE76B625AE55(iLocal_1037))
					{
						unk_0xF1919C21714E9FAF(iLocal_1037, 1, 0);
						unk_0xA8CA82EB31D1626F(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0x99542B3CBA8A014E(unk_0x4D29100D094E5511());
					unk_0xB1063C2349425DD1(8);
					if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
					{
						if (!iLocal_1016)
						{
							iVar12 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
							if (unk_0xD2CFFE76B625AE55(iVar12) && unk_0x0B4DDB992C7BCF57(iVar12, 0))
							{
								unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
								unk_0x4EEE9D9427E70F4E(iVar12, Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
								unk_0xFBDCF3D5834B58D8(iVar12, Local_402.f_29.f_77[1]);
								unk_0xFA3ED0FFF3FD8F34(iVar12);
							}
						}
					}
					else
					{
						if (unk_0xC2AE0A979757C34A(iLocal_661))
						{
							unk_0x2C463497D9FB00B0(iLocal_661);
						}
						iLocal_661 = -1;
						unk_0x09D2BE36C9D2B76F(unk_0x27D769C59BC9D030());
						unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
						unk_0xFBDCF3D5834B58D8(unk_0x27D769C59BC9D030(), Local_402.f_29.f_77[1]);
					}
					unk_0x0B28AEB595CB09AF(0f);
					unk_0x4523FDDB9926E1D8(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 14;
				}
				break;
			
			case 14:
				if (unk_0x3934E959DB2478D3() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					bVar276 = true;
					if (iLocal_1016)
					{
						unk_0x97C59C4E8349D15F(iLocal_1017);
						if (unk_0x875098323FCA8FE6(iLocal_1017))
						{
							iVar277 = unk_0x4E76306EE6AE7596(iLocal_1017, Local_402.f_29.f_70[0 /*3*/], Local_402.f_29.f_77[0], 1, 1);
							if (iLocal_1017 == joaat("windsor"))
							{
								unk_0x22302C6C9DC94642(iVar277, 0);
							}
							if (unk_0xD2CFFE76B625AE55(iVar277) && unk_0x0B4DDB992C7BCF57(iVar277, 0))
							{
								unk_0xBD875C7680C64C56(unk_0x27D769C59BC9D030(), iVar277, -1);
								unk_0x9B3E806EC535DBC3(iVar277, 0f);
								unk_0x0049DE0B34213B12(iLocal_1017);
								if (func_110(iLocal_1017))
								{
									switch (iLocal_1017)
									{
										case joaat("marshall"):
											unk_0x22302C6C9DC94642(iVar277, iLocal_651);
											break;
										}
								}
								unk_0x9846B4D56971A958(&iVar277);
							}
							iLocal_1016 = 0;
						}
						else
						{
							bVar276 = false;
						}
					}
					if (!unk_0x9A7F0D797C57AC34())
					{
					}
					else if (unk_0x22AC80586B658378())
					{
					}
					else
					{
						bVar276 = false;
					}
					if (bVar276)
					{
						if (unk_0xD2CFFE76B625AE55(iLocal_1027) && unk_0x0B4DDB992C7BCF57(iLocal_1027, 0))
						{
							iVar278 = func_45(24);
							if (func_197(&Local_776, 24))
							{
								func_192(&Local_776, func_371());
								if (unk_0xD2CFFE76B625AE55(iVar278))
								{
									unk_0xF6E128C391C16F7C(&iVar278);
								}
							}
							if (Local_402.f_0 == 21)
							{
								unk_0xEFA71310CAEBAE1F(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
								unk_0x4EEE9D9427E70F4E(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
								unk_0xFBDCF3D5834B58D8(iLocal_1027, 154.4846f);
								func_190(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_402.f_0 == 22)
							{
								unk_0xEFA71310CAEBAE1F(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
								unk_0x4EEE9D9427E70F4E(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
								unk_0xFBDCF3D5834B58D8(iLocal_1027, 319.6985f);
								func_190(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_402.f_0 == 23)
							{
								unk_0xEFA71310CAEBAE1F(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
								unk_0x4EEE9D9427E70F4E(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
								unk_0xFBDCF3D5834B58D8(iLocal_1027, 270.8741f);
								func_190(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							unk_0xFA3ED0FFF3FD8F34(iLocal_1027);
						}
						if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
						{
							iVar12 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
							if (unk_0xD2CFFE76B625AE55(iVar12) && unk_0x0B4DDB992C7BCF57(iVar12, 0))
							{
								unk_0x4EEE9D9427E70F4E(iVar12, Local_546.f_66[1 /*3*/], 1, 0, 0, 1);
								unk_0xFBDCF3D5834B58D8(iVar12, Local_402.f_29.f_77[0]);
								unk_0xFA3ED0FFF3FD8F34(iVar12);
								if ((iLocal_1017 == joaat("monster") || iLocal_1017 == joaat("marshall")) || iLocal_1017 == joaat("rhino"))
								{
									unk_0xC2677E1BE02B1E79(iVar12, false);
								}
								else
								{
									unk_0xC2677E1BE02B1E79(iVar12, true);
								}
								if (unk_0x40CB4787F2506675(unk_0x27D769C59BC9D030()))
								{
									unk_0xEA9F3D2740164867(unk_0x27D769C59BC9D030(), 0, 0, -1);
									unk_0x846AF7F4E166B47A(unk_0x27D769C59BC9D030(), 1);
								}
								unk_0x9C7CD45CE4DD7F73(iVar12, 1);
								func_166(func_371(), &iVar12, 3, 1);
							}
							unk_0x4AD174B0D4656163(800);
							func_199(1, 1, 1, 0);
							func_198(&(Local_546[3 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
							iLocal_1034 = 0;
							iLocal_1036 = -1;
							Local_402.f_3 = 15;
						}
						else
						{
							unk_0x651E63BA2F4975EC(sVar14);
							func_183();
							unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
							if (unk_0x54DA78A82349F5AC(Local_402.f_110))
							{
								unk_0xA931FF68636DF31C(Local_402.f_110, 0);
								unk_0x1D1A369233055AEC(Local_402.f_110, 0);
							}
							if (unk_0x54DA78A82349F5AC(Local_402.f_111))
							{
								unk_0xA931FF68636DF31C(Local_402.f_111, 0);
								unk_0x1D1A369233055AEC(Local_402.f_111, 0);
							}
							if (unk_0xD2CFFE76B625AE55(iLocal_1037))
							{
								unk_0xF1919C21714E9FAF(iLocal_1037, 1, 0);
								unk_0xA8CA82EB31D1626F(iLocal_1037, 0);
								iLocal_1037 = 0;
							}
							unk_0x99542B3CBA8A014E(unk_0x4D29100D094E5511());
							unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
							unk_0xB1063C2349425DD1(8);
							unk_0x09D2BE36C9D2B76F(unk_0x27D769C59BC9D030());
							unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
							unk_0xFBDCF3D5834B58D8(unk_0x27D769C59BC9D030(), Local_402.f_29.f_77[1]);
							unk_0x4AD174B0D4656163(800);
							unk_0xC1B1E9A034A63A62(0);
							func_186(198.0043f, -999.7775f, -100f, 50f, 0);
							unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
							Local_402.f_3 = 16;
						}
						if (Local_402.f_3 != 16)
						{
							unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
						}
						unk_0x3DFCFAD590F85BF7(0);
						unk_0x83DB85FD25128C55(0);
						unk_0xC1B1E9A034A63A62(0);
						unk_0x0B28AEB595CB09AF(0f);
						unk_0x4523FDDB9926E1D8(0f, 1065353216);
						iVar279 = unk_0xFCB979DB36343941(unk_0x27D769C59BC9D030(), &uVar0, -1);
						iVar280 = 0;
						while (iVar280 < iVar279)
						{
							if ((unk_0xD2CFFE76B625AE55(uVar0[iVar280]) && !unk_0xE4F7206742848BAF(uVar0[iVar280])) && unk_0x0CD267261D0845BA(uVar0[iVar280], unk_0x702DA8E73909DA0E(unk_0x4D29100D094E5511())))
							{
								if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
								{
									iVar12 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
									if ((unk_0xD2CFFE76B625AE55(iVar12) && unk_0x0B4DDB992C7BCF57(iVar12, 0)) && unk_0x1AEADBB0240E0B51(iVar12) > iVar280)
									{
										unk_0xBD875C7680C64C56(uVar0[iVar280], iVar12, iVar280);
									}
								}
								else
								{
									unk_0x018805F05877E2E2(uVar0[iVar280], Local_402.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar280++;
						}
						unk_0xB1063C2349425DD1(8);
						iLocal_1033 = 0;
					}
				}
				break;
			
			case 15:
				bVar281 = true;
				if (!unk_0x9A7F0D797C57AC34())
				{
				}
				else if (unk_0x22AC80586B658378())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (func_185())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (unk_0x54DA78A82349F5AC(Local_402.f_110) && unk_0x5D6077A892B90119(Local_402.f_110))
				{
					if (unk_0xC416F2B1A1D7685D(Local_402.f_110))
					{
						bVar281 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else if (unk_0x54DA78A82349F5AC(Local_402.f_111) && unk_0x5D6077A892B90119(Local_402.f_111))
				{
					if (unk_0xC416F2B1A1D7685D(Local_402.f_111))
					{
						bVar281 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else
				{
					bVar281 = false;
				}
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					func_175(unk_0x27D769C59BC9D030(), Local_546.f_86[1 /*6*/], Local_546.f_66[1 /*3*/], ((Local_546[3 /*15*/].f_14 * 1000f) - 500f), Local_546.f_73[2 /*4*/], 3, &fVar13);
				}
				if (iLocal_1036 < 1 && func_165(unk_0x27D769C59BC9D030(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_1036 == 0)
					{
						func_186(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_1036++;
				}
				if (bVar281)
				{
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 16;
				}
				else
				{
					unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
				}
				break;
			
			case 16:
				bVar282 = true;
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546.f_61[3] * 1000f))
				{
					bVar282 = false;
				}
				if (bVar282)
				{
					Local_402.f_3 = 17;
				}
				break;
			
			case 17:
				if (unk_0xBFF8C08B5EEF0974(Local_402.f_112))
				{
					unk_0x34E1C1B799C848E3(Local_402.f_112);
				}
				StringCopy(&Global_32434, "", 32);
				if (unk_0x9A7F0D797C57AC34())
				{
					unk_0x18F9F40035A8905D();
				}
				func_164(47, 1);
				func_162(47, 1);
				Global_68319.f_577 = 0;
				if (unk_0x3934E959DB2478D3() || unk_0xA07829C3F763B9B6())
				{
					unk_0x4AD174B0D4656163(250);
				}
				unk_0xC1B1E9A034A63A62(0);
				unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
				if (unk_0x54DA78A82349F5AC(Local_402.f_110))
				{
					unk_0xA931FF68636DF31C(Local_402.f_110, 0);
					unk_0x1D1A369233055AEC(Local_402.f_110, 0);
				}
				if (unk_0x54DA78A82349F5AC(Local_402.f_111))
				{
					unk_0xA931FF68636DF31C(Local_402.f_111, 0);
					unk_0x1D1A369233055AEC(Local_402.f_111, 0);
				}
				if (unk_0xD2CFFE76B625AE55(iLocal_1037))
				{
					unk_0xF1919C21714E9FAF(iLocal_1037, 1, 0);
					unk_0xA8CA82EB31D1626F(iLocal_1037, 0);
					iLocal_1037 = 0;
				}
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					iVar12 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
					if (unk_0xD2CFFE76B625AE55(iVar12) && unk_0x0B4DDB992C7BCF57(iVar12, 0))
					{
						unk_0x4EEE9D9427E70F4E(iVar12, Local_546.f_73[2 /*4*/], 1, 0, 0, 1);
						unk_0xFBDCF3D5834B58D8(iVar12, Local_546.f_73[2 /*4*/].f_3);
						unk_0xFA3ED0FFF3FD8F34(iVar12);
						unk_0x0B28AEB595CB09AF(0f);
						unk_0x4523FDDB9926E1D8(0f, 1065353216);
					}
				}
				unk_0x3DFCFAD590F85BF7(1);
				unk_0x83DB85FD25128C55(1);
				func_199(0, 1, 1, 0);
				unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
				unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
				if (iLocal_1012 > 0)
				{
					unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), iLocal_1012, 0);
					unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 0);
				}
				if (((unk_0xD2CFFE76B625AE55(iLocal_1027) && unk_0xE24B37600DCB21FC(iLocal_1027)) && unk_0xFF65D7BC656BA68E(iLocal_1027, 0)) && iLocal_1027 != func_45(24))
				{
					unk_0x9846B4D56971A958(&iLocal_1027);
				}
				unk_0xF17F4B0641AB2DE1(&(Local_674.f_9), 25);
				iLocal_1031 = 0;
				Local_402.f_3 = 18;
				break;
			
			case 18:
				if (unk_0xCBB243DDC0D132D1())
				{
					Local_402.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_68319.f_577)
		{
			func_164(47, 1);
			func_162(47, 1);
			Global_68319.f_577 = 0;
		}
		Local_402.f_3 = 0;
		if (iLocal_656 != -1)
		{
			func_65(&iLocal_656);
		}
	}
	if (Global_68319.f_577)
	{
		unk_0x83B3FD216F27C605();
		func_161();
		func_72();
		unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), joaat("weapon_unarmed"), 1);
		unk_0xDF3F6D6CDD523546(2, 202);
		unk_0xCFF471245AFEEDCE(0, 37, 1);
		unk_0xCFF471245AFEEDCE(0, 157, 1);
		unk_0xCFF471245AFEEDCE(0, 158, 1);
		unk_0xCFF471245AFEEDCE(0, 159, 1);
		unk_0xCFF471245AFEEDCE(0, 160, 1);
		unk_0xCFF471245AFEEDCE(0, 161, 1);
		unk_0xCFF471245AFEEDCE(0, 162, 1);
		unk_0xCFF471245AFEEDCE(0, 163, 1);
		unk_0xCFF471245AFEEDCE(0, 164, 1);
		unk_0xCFF471245AFEEDCE(0, 165, 1);
		unk_0xCFF471245AFEEDCE(0, 14, 1);
		unk_0xCFF471245AFEEDCE(0, 15, 1);
		unk_0xCFF471245AFEEDCE(0, 53, 1);
		unk_0xCFF471245AFEEDCE(0, 54, 1);
		unk_0xCFF471245AFEEDCE(0, 140, 1);
		unk_0xCFF471245AFEEDCE(0, 141, 1);
		unk_0xCFF471245AFEEDCE(0, 142, 1);
		unk_0xCFF471245AFEEDCE(0, 143, 1);
		unk_0xCFF471245AFEEDCE(0, 143, 1);
		unk_0xCFF471245AFEEDCE(0, 47, 1);
		unk_0xCFF471245AFEEDCE(0, 38, 1);
		unk_0xCFF471245AFEEDCE(0, 22, 1);
		unk_0xCFF471245AFEEDCE(0, 102, 1);
		unk_0xCFF471245AFEEDCE(0, 69, 1);
		unk_0xCFF471245AFEEDCE(0, 70, 1);
		unk_0xCFF471245AFEEDCE(0, 68, 1);
		unk_0xCFF471245AFEEDCE(0, 92, 1);
		unk_0xCFF471245AFEEDCE(0, 99, 1);
		unk_0xCFF471245AFEEDCE(0, 115, 1);
		unk_0xCFF471245AFEEDCE(0, 46, 1);
		unk_0xCFF471245AFEEDCE(0, 25, 1);
	}
	if (!bVar11 && Local_402.f_2 == 0)
	{
		if (unk_0x46768B1495288824())
		{
			if (!unk_0x75CB9E30BA492FF0(&cLocal_1023))
			{
				if ((((func_150("WEB_VEH_INV") || func_150("WEB_VEH_FULL")) || func_150("CAR_GAR_05")) || func_150("CAR_GAR_06")) || func_150("CAR_GAR_EXIT"))
				{
					unk_0x5BD150B52CE8D356(1);
				}
				StringCopy(&cLocal_1023, "", 16);
			}
		}
	}
}

void func_161()
{
	Global_17118.f_6 = 1;
}

void func_162(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_163(iParam0) };
	if (bParam1)
	{
		unk_0x26545538B51562AD(&(Global_31492[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_31492[Var0.f_1]), Var0.f_0);
	}
}

struct<2> func_163(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3.f_0 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 4)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3.f_0 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_164(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_163(iParam0) };
	if (bParam1)
	{
		unk_0x26545538B51562AD(&(Global_31487[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_31487[Var0.f_1]), Var0.f_0);
	}
}

float func_165(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Param1, iParam4);
}

void func_166(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_24(iParam0) && unk_0xD2CFFE76B625AE55(*iParam1)) && unk_0x0B4DDB992C7BCF57(*iParam1, 0))
	{
		if (iParam2 > Global_101154.f_1826.f_539.f_1635)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_30(*iParam1, iParam0);
		}
		if (unk_0x41EEFFCF5FB2A6E4(*iParam1) != 0)
		{
			unk_0x66E8010228AFE795(*iParam1, 0);
		}
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/] = unk_0x946C63BD9EF05437(*iParam1);
		if (unk_0xA0FB8E660C30A607(*iParam1, &iVar1))
		{
			Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x946C63BD9EF05437(iVar1);
		}
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x6CA4E0CFF9C81970(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x4C3235E6E203703D(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x3D866A165E63B4FE(*iParam1, 1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x3D866A165E63B4FE(*iParam1, 2);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x3D866A165E63B4FE(*iParam1, 3);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x3D866A165E63B4FE(*iParam1, 4);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x3D866A165E63B4FE(*iParam1, 5);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x3D866A165E63B4FE(*iParam1, 6);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x3D866A165E63B4FE(*iParam1, 7);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x3D866A165E63B4FE(*iParam1, 8);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x3D866A165E63B4FE(*iParam1, 9);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x3D866A165E63B4FE(*iParam1, 10);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x3D866A165E63B4FE(*iParam1, 11);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x3D866A165E63B4FE(*iParam1, 12);
		if (unk_0x1BCE164A254176FA(*iParam1, 0))
		{
			iVar2 = unk_0xD3A88CAE99C338A3(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0xB1540336553EB013();
		StringCopy(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x9111F14F8ABAE773(*iParam1), 16);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0xC960169422AD5363(*iParam1);
		unk_0x923073D63782E037(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0xC780DEE9C0D887BF(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x0C8CAFCFEDEEF36D(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x480DA4A4EBDCE31C(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0xEF90EF7B0A4543EE(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0xC3362AC1471926AA(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0xA2A724EEE80F007F(*iParam1);
		unk_0x486F923523D0F4DB(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x8A455A983374FA6C(*iParam1, 2))
		{
			unk_0x26545538B51562AD(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x8A455A983374FA6C(*iParam1, 3))
		{
			unk_0x26545538B51562AD(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x8A455A983374FA6C(*iParam1, 0))
		{
			unk_0x26545538B51562AD(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x8A455A983374FA6C(*iParam1, 1))
		{
			unk_0x26545538B51562AD(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_101154.f_1826.f_539.f_3545[iParam0] = 10;
		if ((unk_0xC3EF4DD17490E8DB(*iParam1) >= 0 && unk_0xC3EF4DD17490E8DB(*iParam1) < 255) && func_169(*iParam1, 0, &uVar0))
		{
			func_33(iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_101154.f_24643[iParam0 /*43*/].f_40 = 1;
				Global_101154.f_24643[iParam0 /*43*/] = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/];
				Global_101154.f_24643[iParam0 /*43*/].f_3 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_101154.f_24643[iParam0 /*43*/].f_4 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_101154.f_24643[iParam0 /*43*/].f_5 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_101154.f_24643[iParam0 /*43*/].f_6 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_101154.f_24643[iParam0 /*43*/].f_10 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_101154.f_24643[iParam0 /*43*/].f_16 = !Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_101154.f_24643[iParam0 /*43*/].f_19 = { Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_101154.f_24643[iParam0 /*43*/].f_23 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_101154.f_24643[iParam0 /*43*/].f_7 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_101154.f_24643[iParam0 /*43*/].f_8 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_101154.f_24643[iParam0 /*43*/].f_9 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_101154.f_24643[iParam0 /*43*/].f_11 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_101154.f_24643[iParam0 /*43*/].f_12 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_101154.f_24643[iParam0 /*43*/].f_13 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_101154.f_24643[iParam0 /*43*/].f_14 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_101154.f_24643[iParam0 /*43*/].f_15 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_101154.f_24643[iParam0 /*43*/].f_18 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_101154.f_24643[iParam0 /*43*/].f_17 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_101154.f_24643[iParam0 /*43*/].f_24 = unk_0xBBB5FCBC554BAAE8(*iParam1, 11) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_25 = unk_0xBBB5FCBC554BAAE8(*iParam1, 12) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_26 = unk_0xBBB5FCBC554BAAE8(*iParam1, 4) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_27 = unk_0xBBB5FCBC554BAAE8(*iParam1, 23) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_28 = unk_0xBBB5FCBC554BAAE8(*iParam1, 14) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_29 = unk_0xBBB5FCBC554BAAE8(*iParam1, 16) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_30 = unk_0xBBB5FCBC554BAAE8(*iParam1, 15) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_32 = unk_0x641E98BD18F444EB(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[0] = unk_0xABECB4E47E365302(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[1] = unk_0xECBA3FEAD66F0B3D(*iParam1, 14, 0);
				Global_101154.f_24643[iParam0 /*43*/].f_33[2] = unk_0xECBA3FEAD66F0B3D(*iParam1, 14, 1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[3] = unk_0xECBA3FEAD66F0B3D(*iParam1, 14, 2);
				Global_101154.f_24643[iParam0 /*43*/].f_33[4] = unk_0xECBA3FEAD66F0B3D(*iParam1, 14, 3);
				Global_101154.f_24643[iParam0 /*43*/].f_39 = unk_0x996808FDDACB1D68(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_31 = func_168(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[0] = unk_0x45AD20B46BBA6A77(*iParam1);
				unk_0x8EC9934D31790C89(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_167(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_101154.f_24643[iParam0 /*43*/].f_1));
				unk_0x19000717E98F2F50(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_167(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_101154.f_24643[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_167(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_131(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

float func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0)) && unk_0xC3EF4DD17490E8DB(iParam0) >= 0) && unk_0xC3EF4DD17490E8DB(iParam0) < 255)
	{
		if (unk_0x996808FDDACB1D68(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x996808FDDACB1D68(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x996808FDDACB1D68(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x996808FDDACB1D68(iParam0) == 0)
		{
			if (unk_0x6CCC9ABA9456E815(unk_0x946C63BD9EF05437(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
	return fVar6;
}

int func_169(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 0;
	}
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xCCCEEEDD3FD9AA24(unk_0x946C63BD9EF05437(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x946C63BD9EF05437(iParam0);
	if (!func_170(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (unk_0x51A640907BDD41BB(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x0E063DDE8855EC52())
	{
		if ((func_58(iParam0) && unk_0x946C63BD9EF05437(iParam0) != joaat("sentinel2")) && unk_0x946C63BD9EF05437(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_170(int iParam0, bool bParam1, var uParam2)
{
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((!unk_0xA8059F869DFB2747(iParam0) && !unk_0x6CCC9ABA9456E815(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x0E063DDE8855EC52())
	{
		if (func_171(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x0E063DDE8855EC52())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

int func_172()
{
	int iVar0;
	
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
		if (unk_0xD2CFFE76B625AE55(iVar0) && unk_0x0B4DDB992C7BCF57(iVar0, 0))
		{
			if (iVar0 == Global_68319.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_68319.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_68319.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_68319.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_68319.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_68319.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_68319.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_68319.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_68319.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_68319.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_68319.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_68319.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_173()
{
	return unk_0xA0F74982C6AAA9D4() <= Global_17257.f_5745 + 100;
}

void func_174(int iParam0)
{
	if ((unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0)) && iParam0 == Global_69224)
	{
		Global_101154.f_18807.f_5588 = 0;
		Global_69224 = 0;
	}
}

int func_175(int iParam0, struct<4> Param1, var uParam5, var uParam6, struct<3> Param7, float fParam10, struct<4> Param11, int iParam15, float fParam16)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	struct<3> Var13;
	float fVar16;
	float fVar17;
	float fVar18;
	
	Var0 = { Param1 };
	Var3 = { Param1.f_3 };
	Var6 = { Param7 };
	Var9 = { Param1.f_3 };
	if (iLocal_1033 == 0)
	{
		iVar12 = unk_0xD9FFE8E1642C81E2(uParam0, 0);
		iLocal_1037 = iVar12;
		unk_0x48C585788C05DB37(iLocal_1037, 1);
		unk_0x37B592C0F74990D2(iLocal_1037, 1);
		unk_0xFA3ED0FFF3FD8F34(iLocal_1037);
		unk_0x8BE1AEC303A057F7(iLocal_1037, 1, 1, 0);
		if (unk_0x40CB4787F2506675(iParam0))
		{
			unk_0xEA9F3D2740164867(iParam0, 0, 0, -1);
			unk_0x846AF7F4E166B47A(iParam0, 1);
		}
		Var13 = { unk_0xA8CFDE65C45F813B(iLocal_1037, 1) };
		fLocal_1038 = (Var13.f_2 - Var0.f_2);
		unk_0x4EEE9D9427E70F4E(iLocal_1037, Var0 + Vector(-10f, 0f, 0f), 1, 0, 0, 1);
		if (unk_0x0B4DDB992C7BCF57(iLocal_1037, 0))
		{
			unk_0xB4EBE8F97449D02E(iLocal_1037, 3);
		}
		iLocal_1039 = unk_0xA0F74982C6AAA9D4();
		iLocal_1033 = 1;
	}
	if (iLocal_1033 == 1)
	{
		if (unk_0xD2CFFE76B625AE55(iLocal_1037) && unk_0x0B4DDB992C7BCF57(iLocal_1037, 0))
		{
			fVar16 = unk_0xBBDA792448DB5A89(iLocal_1039);
			fVar17 = (fVar16 + fParam10);
			fVar18 = func_182(unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()), fVar16, fVar17);
			fVar18 = (fVar18 - fVar16);
			fVar18 = (fVar18 / fParam10);
			if (iParam15 == 1)
			{
				fVar18 = func_181(fVar18);
			}
			else if (iParam15 == 2)
			{
				fVar18 = func_180(fVar18);
			}
			else if (iParam15 == 3)
			{
				fVar18 = func_178(fVar18);
			}
			fVar18 = (fVar18 * fParam10);
			fVar18 = (fVar18 + fVar16);
			unk_0xCFF471245AFEEDCE(0, 72, 1);
			unk_0x018805F05877E2E2(iLocal_1037, func_176(Var0 + Vector(fLocal_1038, 0f, 0f), Var6 + Vector(fLocal_1038, 0f, 0f), fVar16, fVar17, fVar18), 0, 0, 1);
			if (iLocal_1034 && !unk_0x40CB4787F2506675(iParam0))
			{
				unk_0x0359A241E2DD22AC(iLocal_1037, func_176((0f - Var3.f_0), (0f - Var3.f_1), (Var3.f_2 + 180f), (0f - Var9.f_0), (0f - Var9.f_1), (Var9.f_2 + 180f), fVar16, fVar17, fVar18), 2, 1);
			}
			else
			{
				if (!unk_0xE4F7206742848BAF(iParam0))
				{
					if (unk_0x40CB4787F2506675(iParam0))
					{
						unk_0xC908FA7A5EBB2825(iParam0, 236, 1);
						unk_0xC908FA7A5EBB2825(iParam0, 309, 1);
					}
				}
				unk_0x0359A241E2DD22AC(iLocal_1037, func_176(Var3, Var9, fVar16, fVar17, fVar18), 2, 1);
			}
			unk_0xF1919C21714E9FAF(iLocal_1037, 0, 0);
			unk_0xA8CA82EB31D1626F(iLocal_1037, 1);
		}
		else
		{
			iLocal_1033 = 2;
			return 0;
		}
		if (unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()) > (unk_0xBBDA792448DB5A89(iLocal_1039) + fParam10) && unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()) > ((unk_0xBBDA792448DB5A89(iLocal_1039) + fParam10) + 2600f))
		{
			iLocal_1033 = 2;
			return 0;
		}
	}
	if (iLocal_1033 == 2)
	{
		unk_0xC908FA7A5EBB2825(iParam0, 236, 0);
		unk_0xC908FA7A5EBB2825(iParam0, 309, 0);
		if (unk_0xD2CFFE76B625AE55(iLocal_1037))
		{
			if (!func_20(Param11, 0f, 0f, 0f, 0))
			{
				unk_0x4EEE9D9427E70F4E(iLocal_1037, Param11, 1, 0, 0, 1);
				unk_0xFBDCF3D5834B58D8(iLocal_1037, Param11.f_3);
				unk_0xFA3ED0FFF3FD8F34(iLocal_1037);
			}
			unk_0xF1919C21714E9FAF(iLocal_1037, 1, 0);
			unk_0xA8CA82EB31D1626F(iLocal_1037, 0);
			iLocal_1037 = 0;
		}
		if (unk_0x40CB4787F2506675(iParam0))
		{
			unk_0x126149F876BC6432(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_176(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_177(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_177(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_177(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_177(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_178(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = unk_0x0BADBFA3B172435F(func_179(((fParam0 * 3.141593f) * 0.5f)));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_179(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_180(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - unk_0xD0FFB162F40A139C(func_179(((fParam0 * 3.141593f) * 0.5f))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_181(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - unk_0xD0FFB162F40A139C(func_179((fParam0 * 3.141593f)))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_182(float fParam0, float fParam1, float fParam2)
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

void func_183()
{
	Global_68319.f_553 = 1;
	Global_68319.f_554 = 0;
}

void func_184(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = uParam0;
		iVar1 = (9 + (iVar2 - 21));
		if (iVar0 > 0)
		{
			iVar2 = (iVar2 + 2 + iVar0 * 3);
			iVar1 = ((9 + (iVar2 - 21)) - 2);
		}
		iLocal_117[iVar2] = Global_101154.f_18807.f_69[iVar1 /*78*/].f_66;
		if (iLocal_117[iVar2] != 0)
		{
			if (!unk_0xF426A5DE932B3BEE(uLocal_48[iVar2], 2))
			{
				unk_0x97C59C4E8349D15F(iLocal_117[iVar2]);
				unk_0x26545538B51562AD(&(uLocal_48[iVar2]), 2);
				func_375(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_185()
{
	return !Global_68319.f_553;
}

void func_186(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_57(&(Global_68319.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x676D4CD42E0837CA(Param0, Global_68319.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_187(iVar0);
			}
		}
		iVar0++;
	}
}

void func_187(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_57(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				if (unk_0x0B4DDB992C7BCF57(Global_68319.f_139[iParam0], 0))
				{
					if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_68319.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xAF3355298F537BB0(Global_68319.f_139[iParam0], 1, 1);
				unk_0xF6E128C391C16F7C(&(Global_68319.f_139[iParam0]));
			}
		}
		Global_68319[iParam0] = 1;
		if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_63(iParam0, 0)) && Global_69228.f_66 == 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] != 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] > 3) && (!func_188(0, Global_68319.f_555[0 /*21*/].f_12) || !func_188(1, Global_68319.f_555[0 /*21*/].f_12)))
			{
				func_108(&(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]), &Global_69228);
				Global_69306 = Global_101154.f_18807.f_5591;
			}
			func_377(iParam0, 0);
		}
	}
}

int func_188(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_189(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_37(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_189(var uParam0)
{
	return *uParam0;
}

void func_190(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[25]) && unk_0x0B4DDB992C7BCF57(Global_68319.f_484[25], 0))
			{
				if (Global_68319.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x51A640907BDD41BB(iParam0) || unk_0x946C63BD9EF05437(iParam0) == joaat("bus")) || unk_0x946C63BD9EF05437(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_191(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_31(iParam0, &Var0);
		if (func_20(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
			fParam4 = unk_0x4D6B971C8AEE130C(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) != joaat("vehicle_gen_controller"))
			{
				Global_69307 = unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2());
			}
		}
		func_107(iParam5, &Var0, Param1, fParam4, func_42(iParam0));
		func_29(iParam5, iParam0, 0);
	}
}

void func_191(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_109(iParam0);
	func_377(iParam0, 0);
}

int func_192(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_36(uParam0->f_66))
	{
		return 0;
	}
	if (unk_0xD2CFFE76B625AE55(Global_69225))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (!func_188(0, iParam1))
	{
		Global_101154.f_18807.f_5592[iVar0] = 0;
	}
	else if (!func_188(1, iParam1))
	{
		Global_101154.f_18807.f_5592[iVar0] = 1;
	}
	func_193(iParam1, unk_0x5FB9F0778C42904D(uParam0->f_66));
	func_108(uParam0, &(Global_101154.f_18807.f_5038[iVar0 /*157*/][Global_101154.f_18807.f_5592[iVar0] /*78*/]));
	Global_101154.f_18807.f_5592[iVar0]++;
	if (Global_101154.f_18807.f_5592[iVar0] >= func_189(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		Global_101154.f_18807.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_90747[iVar0 /*98*/] == uParam0->f_66 && unk_0xC1C5B83BB6719C6C(&(Global_90747[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_90747[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_193(int iParam0, char* sParam1)
{
	if (!func_24(iParam0))
	{
		return;
	}
	if (!Global_101154.f_18807.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_194("IMPOUND_HELPM", sParam1, 2, unk_0x3A5708FEE1B560A9(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_194("IMPOUND_HELPF", sParam1, 2, unk_0x3A5708FEE1B560A9(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_194("IMPOUND_HELPT", sParam1, 2, unk_0x3A5708FEE1B560A9(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_101154.f_18807.f_5596[iParam0] = 1;
	}
}

void func_194(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_195(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_195(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xC1C5B83BB6719C6C(sParam0, ""))
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
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xC1C5B83BB6719C6C(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = (unk_0xA0F74982C6AAA9D4() + iParam3);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = ((unk_0xA0F74982C6AAA9D4() + iParam3) + iParam4);
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_196();
	}
}

void func_196()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_197(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_57(&(Global_68319.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_108(&(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

int func_198(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x54DA78A82349F5AC(*uParam1))
	{
		unk_0x1D1A369233055AEC(*uParam1, 0);
	}
	if (unk_0x54DA78A82349F5AC(*uParam2))
	{
		unk_0x1D1A369233055AEC(*uParam2, 0);
	}
	*uParam1 = unk_0x3A5E675E99CE82DC("DEFAULT_SCRIPTED_CAMERA", 0);
	*uParam2 = unk_0x3A5E675E99CE82DC("DEFAULT_SCRIPTED_CAMERA", 0);
	if (unk_0x54DA78A82349F5AC(*uParam1) && unk_0x54DA78A82349F5AC(*uParam2))
	{
		unk_0xA76CE456B0AC525B(*uParam1, *uParam0);
		unk_0xDA9442DEE6F3003E(*uParam1, uParam0->f_3, 2);
		unk_0x1FCE0CA03A463A36(*uParam1, uParam0->f_12);
		unk_0xA76CE456B0AC525B(*uParam2, uParam0->f_6);
		unk_0xDA9442DEE6F3003E(*uParam2, uParam0->f_6.f_3, 2);
		unk_0x1FCE0CA03A463A36(*uParam2, uParam0->f_12);
		unk_0xB936630341324D47(*uParam1, "HAND_SHAKE", uParam0->f_13);
		unk_0xB936630341324D47(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			unk_0x5C309DFF11824A69(*uParam2, *uParam1, unk_0xF2DB717A73826179((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			unk_0xA931FF68636DF31C(*uParam1, 1);
		}
		unk_0x04E786541E35ECB1(1, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_199(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x0952A7BA90103950(unk_0x4D29100D094E5511());
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 1);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 1);
		func_204(1);
		unk_0xD14C6D196E70C6B0();
		unk_0x7CC7CFD7BFFAAC4C();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x0EFEEF8E6B0B4E34())
			{
				unk_0x94DA6AACA7F07289(0);
			}
			if (!func_74())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_203(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_204(0);
		unk_0xFF2A2F3774F8F7B6();
		Global_55755 = 0;
		if (bParam1)
		{
			unk_0x2E6328B1B95241F5();
		}
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 0);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 0);
		func_203(0, iParam3, iParam2, 0);
		if (unk_0x0E063DDE8855EC52())
		{
			if (((!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_201(unk_0x4D29100D094E5511())) && !func_86(unk_0x4D29100D094E5511(), 0)) && !func_200())
			{
				unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
			}
		}
		else if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_201(unk_0x4D29100D094E5511()))
		{
			unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
		}
		Global_69487 = 0;
	}
}

bool func_200()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 14);
}

int func_201(int iParam0)
{
	if (func_86(iParam0, 0))
	{
		return 1;
	}
	if (func_202())
	{
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return 1;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_202()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
}

int func_203(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0xE9F84F88F70445CA() != iParam0 && uParam2)
		{
			unk_0x4959DFBF16606CE5(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_204(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 13);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 13);
	}
}

int func_205(int iParam0)
{
	func_57(&(Global_68319.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_68319.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_206(26))
			{
				return 26;
			}
			if (!func_206(29))
			{
				return 29;
			}
			if (!func_206(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_68319.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_206(27))
			{
				return 27;
			}
			if (!func_206(30))
			{
				return 30;
			}
			if (!func_206(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_68319.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_206(28))
			{
				return 28;
			}
			if (!func_206(31))
			{
				return 31;
			}
			if (!func_206(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_206(int iParam0)
{
	return func_63(iParam0, 0);
}

void func_207(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_209(iParam0, &iVar1);
	if (!unk_0xC1C5B83BB6719C6C("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x294FE1B87D8C5686(iVar1))
			{
				return;
			}
			if (unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030()) == iVar1)
			{
				func_162(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x294FE1B87D8C5686(iVar1))
			{
				return;
			}
			if (func_208(iParam0))
			{
				func_162(iParam0, 0);
			}
		}
		unk_0x61FAA41D6C7713E7(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_208(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_163(iParam0) };
	if (unk_0xF426A5DE932B3BEE(Global_31492[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

var func_209(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_210(iParam0) };
	*iParam1 = unk_0x695481387D3FCB8D(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_210(int iParam0)
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_211(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_211(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_211(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_211(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_211(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_211(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_211(7) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049163[34 /*1924*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_211(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_211(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_211(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_211(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_211(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_211(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_211(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_211(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_211(43) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var5 = { func_211(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_211(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_211(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_211(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_211(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_211(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_211(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_211(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_211(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_211(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_211(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_211(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_211(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_211(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_211(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_211(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_211(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_211(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_211(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_211(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_211(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_211(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_211(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_211(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_211(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_211(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_211(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_211(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_211(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_211(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_211(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_211(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_211(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_211(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_211(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_211(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_211(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
	}
	return Var0;
}

void func_212(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_209(iParam0, &iVar1);
	if (!unk_0xC1C5B83BB6719C6C("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0xB8D6BB6AEDDF34F8(iVar1))
		{
			if (unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030()) == iVar1)
			{
				func_164(iParam0, 1);
				return;
			}
			unk_0xEAF9A63AD91A2449(iVar1, 1);
		}
		else if (!bParam1 && unk_0xB8D6BB6AEDDF34F8(iVar1))
		{
			if (func_213(iParam0))
			{
				func_164(iParam0, 0);
			}
			unk_0xEAF9A63AD91A2449(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_213(iParam0))
			{
				func_164(iParam0, 0);
			}
		}
	}
}

int func_213(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_163(iParam0) };
	if (unk_0xF426A5DE932B3BEE(Global_31487[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

int func_214()
{
	if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) || func_205(Local_402.f_0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_215(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 26:
		case 29:
		case 32:
			return 0;
			break;
		
		case 23:
		case 28:
		case 31:
		case 34:
			return 2;
			break;
		
		case 22:
		case 27:
		case 30:
		case 33:
			return 1;
			break;
	}
	return 145;
}

int func_217(int iParam0, var uParam1)
{
	uParam1->f_73[1 /*4*/] = { 194.674f, -1026.984f, -100f };
	uParam1->f_73[1 /*4*/].f_3 = 285f;
	*(uParam1[2 /*15*/]) = { 198.9908f, -1025.956f, -98.8981f };
	(uParam1[2 /*15*/])->f_3 = { -4.5679f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_6 = { 198.6016f, -1026.103f, -98.9313f };
	(uParam1[2 /*15*/])->f_6.f_3 = { -5.3499f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_12 = 25.2218f;
	(uParam1[2 /*15*/])->f_13 = 0.2f;
	(uParam1[2 /*15*/])->f_14 = 3.5f;
	uParam1->f_61[2] = 0f;
	switch (iParam0)
	{
		case 21:
			*(uParam1[0 /*15*/]) = { -84.4891f, 95.2463f, 72.7397f };
			(uParam1[0 /*15*/])->f_3 = { -1.0236f, 0.0007f, -126.7439f };
			(uParam1[0 /*15*/])->f_6 = { -84.1568f, 94.9229f, 72.7318f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.0236f, 0.0007f, -127.1499f };
			(uParam1[0 /*15*/])->f_12 = 25.1687f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -62.5434f, 80.2917f, 70.5644f };
			uParam1->f_73[0 /*4*/].f_3 = 345f;
			*(uParam1[1 /*15*/]) = { -61.075f, 81.2555f, 84.5867f };
			(uParam1[1 /*15*/])->f_3 = { -69.9271f, 0f, 103.892f };
			(uParam1[1 /*15*/])->f_6 = { -60.6284f, 81.2036f, 84.5867f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -73.4239f, 0f, 108.7693f };
			(uParam1[1 /*15*/])->f_12 = 29.9579f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -60.3859f, 78.4352f, 70.5249f };
			uParam1->f_86[0 /*6*/] = { -67.0129f, 81.9471f, 70.5249f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -117.9206f };
			*(uParam1[3 /*15*/]) = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_3 = { -57.747f, 0f, 34.1968f };
			(uParam1[3 /*15*/])->f_6 = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -48.0008f, 0f, 49.6137f };
			(uParam1[3 /*15*/])->f_12 = 30.0324f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -62.6272f, 79.7534f, 70.6161f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 65f };
			uParam1->f_66[1 /*3*/] = { -79.1059f, 87.1091f, 70.5157f };
			uParam1->f_73[2 /*4*/] = { -88.4f, 70.8f, 72f };
			uParam1->f_73[2 /*4*/].f_3 = 150f;
			return 1;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = { -66.6121f, -1842.122f, 26.6941f };
			(uParam1[0 /*15*/])->f_3 = { 3.4131f, -0.0009f, 17.9566f };
			(uParam1[0 /*15*/])->f_6 = { -66.5137f, -1841.616f, 26.7211f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.1669f, -0.0009f, 18.0384f };
			(uParam1[0 /*15*/])->f_12 = 25.1856f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -72.5431f, -1820.447f, 25.9424f };
			uParam1->f_73[0 /*4*/].f_3 = 140f;
			*(uParam1[1 /*15*/]) = { -72.7256f, -1823.283f, 41.0951f };
			(uParam1[1 /*15*/])->f_3 = { -81.9335f, 0f, -58.1415f };
			(uParam1[1 /*15*/])->f_6 = { -72.9027f, -1822.998f, 41.0951f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.6657f, 0f, -29.6554f };
			(uParam1[1 /*15*/])->f_12 = 29.9864f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -76.7939f, -1816.77f, 26.6473f };
			uParam1->f_86[0 /*6*/] = { -69.2183f, -1823.258f, 25.9421f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, 49.4214f };
			*(uParam1[3 /*15*/]) = { -70.9492f, -1820.936f, 45.3628f };
			(uParam1[3 /*15*/])->f_3 = { -85.5171f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_6 = { -70.9836f, -1821.023f, 45.3628f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -89.4995f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_12 = 28.4803f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 4f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -75.3386f, -1818.249f, 26.0241f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, -132.7699f };
			uParam1->f_66[1 /*3*/] = { -63.988f, -1829.39f, 26.423f };
			uParam1->f_73[2 /*4*/] = { -49.738f, -1830.147f, 25.5591f };
			uParam1->f_73[2 /*4*/].f_3 = 317.3589f;
			return 1;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = { -237.074f, -1170.391f, 23.479f };
			(uParam1[0 /*15*/])->f_3 = { 7.619f, 0f, -69.7398f };
			(uParam1[0 /*15*/])->f_6 = { -237.2166f, -1169.672f, 23.4931f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 7.619f, 0f, -71.3391f };
			(uParam1[0 /*15*/])->f_12 = 40.0015f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -218.0289f, -1162.392f, 22.0242f };
			uParam1->f_73[0 /*4*/].f_3 = 15f;
			*(uParam1[1 /*15*/]) = { -219.5507f, -1159.951f, 36.8399f };
			(uParam1[1 /*15*/])->f_3 = { -81.7188f, 0f, 170.4291f };
			(uParam1[1 /*15*/])->f_6 = { -219.1442f, -1160.019f, 36.8399f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.5726f, 0f, -168.992f };
			(uParam1[1 /*15*/])->f_12 = 30.0319f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 4f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -211.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/] = { -221.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[3 /*15*/]) = { -218.5983f, -1159.061f, 31.4452f };
			(uParam1[3 /*15*/])->f_3 = { -62.4689f, 0f, -142.2907f };
			(uParam1[3 /*15*/])->f_6 = { -218.6533f, -1159.067f, 31.4471f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -62.4689f, 0f, -172.3491f };
			(uParam1[3 /*15*/])->f_12 = 30f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -214.5676f, -1162.658f, 21.9591f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 90f };
			uParam1->f_66[1 /*3*/] = { -227.7619f, -1162.848f, 22.0085f };
			uParam1->f_73[2 /*4*/] = { -221.6f, -1156.3f, 22.6f };
			uParam1->f_73[2 /*4*/].f_3 = 0f;
			return 1;
			break;
	}
	return 0;
}

int func_218()
{
	if (!unk_0x0E063DDE8855EC52())
	{
		return Global_89089.f_44 == 1;
	}
	return 0;
}

void func_219()
{
	int iVar0;
	struct<5> Var1;
	int iVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	char cVar26[16];
	float fVar30;
	int iVar31;
	struct<3> Var32;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if ((((((unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) || func_26(0)) || func_26(3)) || func_26(2)) || func_26(4)) || func_26(14)) || !func_24(iLocal_672))
	{
		return;
	}
	if (!Global_68058)
	{
		if (Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] != -15)
		{
			if (!Global_68319[Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]])
			{
				if (func_270(func_46(), Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[iLocal_855]))
				{
					iVar0 = Global_101154.f_18807.f_1982[iLocal_672 /*939*/][iLocal_855];
					func_268(iVar0, iLocal_855, iLocal_672);
					func_57(&Var1, Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_377(Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_313[iLocal_855], 1);
					}
					Global_101154.f_18807.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] = -15;
				}
			}
		}
		iLocal_855++;
		if (iLocal_855 >= 312)
		{
			iLocal_855 = 0;
		}
	}
	if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) != Local_402.f_7 || Local_402.f_2 == 99)
	{
		if (Local_402.f_5 != -1)
		{
			func_65(&(Local_402.f_5));
		}
		if (Local_402.f_2 > 0)
		{
			unk_0x5BD150B52CE8D356(1);
		}
		Local_402.f_7 = unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030());
		Local_402.f_5 = -1;
		Local_402.f_2 = 0;
		Local_402.f_4 = 0;
		if (bLocal_854)
		{
			if (unk_0x46768B1495288824())
			{
				unk_0x5BD150B52CE8D356(1);
			}
			unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
			if (unk_0x54DA78A82349F5AC(Local_402.f_110))
			{
				unk_0xA931FF68636DF31C(Local_402.f_110, 0);
				unk_0x1D1A369233055AEC(Local_402.f_110, 0);
			}
			if (unk_0x54DA78A82349F5AC(Local_402.f_111))
			{
				unk_0xA931FF68636DF31C(Local_402.f_111, 0);
				unk_0x1D1A369233055AEC(Local_402.f_111, 0);
			}
			unk_0xFBE386F7181B95E8(unk_0x27D769C59BC9D030(), 1, 0);
			unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 0);
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
				unk_0x5D707E54C2359852(unk_0x4D29100D094E5511(), 0);
			}
			iVar22 = unk_0x070841EC2D20AB5A();
			if (unk_0xD2CFFE76B625AE55(iVar22) && unk_0x0B4DDB992C7BCF57(iVar22, 0))
			{
				unk_0xFBE386F7181B95E8(iVar22, 1, 0);
				unk_0xA8CA82EB31D1626F(iVar22, 0);
				if (unk_0xFF65D7BC656BA68E(iVar22, 1))
				{
					unk_0x9846B4D56971A958(&iVar22);
				}
			}
			iVar23 = 5000;
			iVar24 = unk_0xA0F74982C6AAA9D4();
			while (!unk_0x848B254591916C7D() && (unk_0xA0F74982C6AAA9D4() - iVar24) < iVar23)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (unk_0xBFF8C08B5EEF0974(Local_402.f_112))
			{
				unk_0x34E1C1B799C848E3(Local_402.f_112);
			}
			StringCopy(&Global_32434, "", 32);
			if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
			{
				func_212(47, 1);
				func_207(47, 1);
			}
			unk_0x18F9F40035A8905D();
			unk_0xFE7F6902788E4A5B();
			unk_0x3DFCFAD590F85BF7(1);
			unk_0x83DB85FD25128C55(1);
			func_199(0, 1, 1, 0);
			bLocal_854 = false;
			Global_25373 = 0;
		}
	}
	bVar25 = false;
	if ((((((((((((!bLocal_854 && !unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0)) || (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) && !Local_402.f_29.f_69)) || (!unk_0x17753565205CF66F(unk_0x27D769C59BC9D030()) && !unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))) || (!bLocal_854 && func_63(Local_402.f_0, 5))) || (!bLocal_854 && unk_0x117D586920E8F7BA(2, 199))) || (!bLocal_854 && unk_0x1E114237D972903B())) || !func_266(0)) || unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0) || unk_0x58D91178F8617B11(unk_0x27D769C59BC9D030())) || unk_0xC72D51D19D0ADB20(unk_0x27D769C59BC9D030())) || Global_25270) || (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && unk_0x9426D57129B5B113(unk_0x27D769C59BC9D030())))
	{
		if (Local_402.f_2 > 0 && Local_402.f_2 != 90)
		{
			iLocal_1014 = 1;
			Local_402.f_2 = 99;
		}
		bVar25 = true;
	}
	fVar30 = 20f;
	iVar31 = 3;
	switch (Local_402.f_2)
	{
		case 0:
			if ((((Local_402.f_0 != -1 && func_63(Local_402.f_0, 0)) && !func_63(Local_402.f_0, 5)) && !bLocal_1015) && !bVar25)
			{
				if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && !unk_0x46768B1495288824())
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_01", 16);
					func_151(&(Local_402.f_5), 3, &cVar26, 0, 0, 0, 0);
					Local_402.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_146(Local_402.f_5, 1))
			{
				if (func_265(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = unk_0xA0F74982C6AAA9D4();
					func_65(&(Local_402.f_5));
					iLocal_669 = 0;
					Local_402.f_2 = 90;
				}
				else
				{
					iLocal_669 = 0;
					Local_402.f_4 = unk_0xA0F74982C6AAA9D4();
					func_65(&(Local_402.f_5));
					Local_402.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_669++;
			if (iLocal_669 >= 3)
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_02", 16);
				func_151(&(Local_402.f_5), 3, &cVar26, 0, 0, 0, 0);
				Local_402.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_146(Local_402.f_5, 1))
			{
				if (func_265(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = unk_0xA0F74982C6AAA9D4();
					Local_402.f_2 = 90;
				}
				else
				{
					unk_0x954BCDB8FDB0AC0F(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
					bLocal_854 = false;
					if ((Local_402.f_0 == 15 || Local_402.f_0 == 17) || Local_402.f_0 == 16)
					{
						Local_516.f_4 = 113;
						bLocal_854 = true;
					}
					else if (Local_402.f_0 == 18 || Local_402.f_0 == 19)
					{
						Local_516.f_4 = 115;
						bLocal_854 = true;
					}
					else if (Local_402.f_0 == 12 || Local_402.f_0 == 13)
					{
						Local_516.f_4 = 114;
						bLocal_854 = true;
					}
					else if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
					{
						Local_516.f_4 = 116;
						bLocal_854 = true;
					}
					Local_516.f_0 = unk_0x9A64FC8B83855E3B("MIDSIZED_MESSAGE");
					Local_516.f_1 = 0;
					Local_516.f_3 = 0;
					Local_516.f_2 = 0;
					iLocal_856 = 1;
					Global_25373 = 1;
					if (bLocal_854)
					{
						if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
						{
							func_212(47, 0);
							func_207(47, 0);
							Local_402.f_112 = unk_0x695481387D3FCB8D(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (unk_0xBFF8C08B5EEF0974(Local_402.f_112))
							{
								if (!unk_0x73F79DD3F5F32B29(Local_402.f_112))
								{
									unk_0x564E441E8CD3C56D(Local_402.f_112);
								}
								StringCopy(&Global_32434, "v_garagem_sp", 32);
							}
						}
						unk_0x4056514F44BCBB31(unk_0x4D29100D094E5511(), 1);
						unk_0x18F9F40035A8905D();
						Local_402.f_4 = unk_0xA0F74982C6AAA9D4();
						Local_402.f_2 = 4;
					}
					else
					{
						Local_402.f_2 = 8;
					}
					func_65(&(Local_402.f_5));
				}
			}
			break;
		
		case 4:
			bVar35 = true;
			if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
			{
				Local_402.f_112 = unk_0x695481387D3FCB8D(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!unk_0xBFF8C08B5EEF0974(Local_402.f_112) || unk_0xB8D6BB6AEDDF34F8(Local_402.f_112)) || unk_0x294FE1B87D8C5686(Local_402.f_112))
				{
					func_212(47, 0);
					func_207(47, 0);
					bVar35 = false;
				}
			}
			if (bVar35)
			{
				if (Local_402.f_0 == 12)
				{
					fVar30 = 95f;
					iVar31 = 2;
				}
				else if (Local_402.f_0 == 13)
				{
					fVar30 = 150f;
					iVar31 = 2;
				}
				else if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
				{
					fVar30 = 150f;
					iVar31 = 2;
				}
				Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_14.f_3.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
				{
					if (unk_0x9BDDAC2B68E13329(200.4651f, -1020.631f, -100f, 50f, 0) || (unk_0xA0F74982C6AAA9D4() - Local_402.f_4) > 3500)
					{
						Local_402.f_4 = unk_0xA0F74982C6AAA9D4();
						Local_402.f_2 = 5;
					}
				}
				else if (unk_0x048C2DF809E4EFCA(Local_402.f_29.f_14, Var32, fVar30, iVar31) || (unk_0xA0F74982C6AAA9D4() - Local_402.f_4) > 3500)
				{
					Local_402.f_4 = unk_0xA0F74982C6AAA9D4();
					Local_402.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((unk_0x9A7F0D797C57AC34() && unk_0x22AC80586B658378()) && (!unk_0xBFF8C08B5EEF0974(Local_402.f_112) || unk_0x73F79DD3F5F32B29(Local_402.f_112))) || (unk_0xA0F74982C6AAA9D4() - Local_402.f_4) > 10000)
			{
				Local_402.f_4 = unk_0xA0F74982C6AAA9D4();
				Local_402.f_2 = 6;
			}
			break;
		
		case 6:
			if ((unk_0xA0F74982C6AAA9D4() - Local_402.f_4) > 1000)
			{
				if ((unk_0xD2CFFE76B625AE55(iLocal_1027) && unk_0xE24B37600DCB21FC(iLocal_1027)) && unk_0xFF65D7BC656BA68E(iLocal_1027, 1))
				{
					unk_0x9846B4D56971A958(&iLocal_1027);
				}
				iLocal_1027 = unk_0x070841EC2D20AB5A();
				if ((((unk_0xD2CFFE76B625AE55(iLocal_1027) && unk_0x0B4DDB992C7BCF57(iLocal_1027, 0)) && !unk_0xDBFA5C79D9B3D622(unk_0x946C63BD9EF05437(iLocal_1027))) && !unk_0xEC6E5897335290DD(unk_0x946C63BD9EF05437(iLocal_1027))) && !unk_0xD3AE48D8EB7DCBE6(unk_0x946C63BD9EF05437(iLocal_1027)))
				{
					if (!unk_0xE24B37600DCB21FC(iLocal_1027))
					{
						unk_0xAF3355298F537BB0(iLocal_1027, 0, 0);
					}
				}
				else
				{
					iLocal_1027 = 0;
				}
				unk_0xFBE386F7181B95E8(unk_0x27D769C59BC9D030(), 0, 0);
				if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 1);
				}
				if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
				{
					unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 16);
					unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 32);
					unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 128);
					unk_0x5D707E54C2359852(unk_0x4D29100D094E5511(), 1);
				}
				func_199(1, 1, 1, 0);
				unk_0x8ACEB4FC9E9EE225();
				unk_0x5BD150B52CE8D356(1);
				Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_14.f_3.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_402.f_29.f_69)
				{
					unk_0x9197C6FFD26BCE7B(Local_402.f_29.f_14, Var32);
				}
				if (!unk_0x54DA78A82349F5AC(Local_402.f_110))
				{
					Local_402.f_110 = unk_0x3A5E675E99CE82DC("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				if (unk_0x54DA78A82349F5AC(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						unk_0x8032575D1E5EE6A1("GtaMloRoom001");
					}
					func_199(1, 1, 1, 0);
					func_198(&(Local_402.f_29.f_14), &(Local_402.f_110), &(Local_402.f_111));
				}
				unk_0x04E786541E35ECB1(1, 0, 3000, 1, 0, 0);
				unk_0x3DFCFAD590F85BF7(0);
				unk_0x83DB85FD25128C55(0);
				unk_0x18F9F40035A8905D();
				Local_402.f_2 = 7;
				Local_402.f_4 = unk_0xA0F74982C6AAA9D4();
				func_65(&(Local_402.f_5));
			}
			break;
		
		case 7:
			if ((unk_0xA0F74982C6AAA9D4() - Local_402.f_4) < 7000 && !func_263(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_05", 16);
				func_149(&cVar26, -1);
				if (!unk_0x9A7F0D797C57AC34())
				{
					if (Local_402.f_0 == 12 || Local_402.f_0 == 13)
					{
						fVar30 = 85f;
						iVar31 = 2;
					}
					Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_29.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_29.f_2 + 90f)), 0f };
					unk_0x048C2DF809E4EFCA(Local_402.f_29.f_29, Var32, fVar30, iVar31);
				}
			}
			else
			{
				if (unk_0x54DA78A82349F5AC(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						unk_0x8032575D1E5EE6A1("GtaMloRoom001");
					}
					func_199(1, 1, 1, 0);
					func_198(&(Local_402.f_29.f_29), &(Local_402.f_110), &(Local_402.f_111));
				}
				unk_0xFE7F6902788E4A5B();
				unk_0x5BD150B52CE8D356(1);
				Local_402.f_4 = unk_0xA0F74982C6AAA9D4();
				Local_402.f_2 = 8;
			}
			break;
		
		case 8:
			if ((unk_0xA0F74982C6AAA9D4() - Local_402.f_4) < 7000 && !func_263(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_06", 16);
				if (!unk_0x46768B1495288824())
				{
					func_149(&cVar26, 7000);
				}
			}
			else
			{
				unk_0x5BD150B52CE8D356(1);
				Local_402.f_4 = unk_0xA0F74982C6AAA9D4();
				Local_402.f_2 = 9;
			}
			break;
		
		case 9:
			if ((unk_0xA0F74982C6AAA9D4() - Local_402.f_4) < 3500 && !func_263(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_03", 16);
				if (unk_0x4C3CEC038B6637D7(Local_516.f_0))
				{
					if (Local_516.f_1)
					{
						if (!Local_516.f_3)
						{
							unk_0x954BCDB8FDB0AC0F(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
							Local_516.f_3 = 1;
						}
						unk_0x6201690B328DD500(Local_516.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x8CED8F78CC31BEF2(Local_516.f_0, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_84(&cVar26);
						unk_0xEF0E4A8ABAA0D524();
						Local_516.f_1 = 1;
					}
				}
			}
			else if ((unk_0xA0F74982C6AAA9D4() - Local_402.f_4) < 4000 && !func_263(1000))
			{
				if (unk_0x4C3CEC038B6637D7(Local_516.f_0))
				{
					if (Local_516.f_2)
					{
						unk_0x6201690B328DD500(Local_516.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x8CED8F78CC31BEF2(Local_516.f_0, "SHARD_ANIM_OUT");
						unk_0xD2DC8221939F80F7(1);
						unk_0x4ACF99392701B935(0.33f);
						unk_0x7E5FA681CB7A2EF7();
						Local_516.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_854)
				{
					unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
					if (unk_0x54DA78A82349F5AC(Local_402.f_110))
					{
						unk_0xA931FF68636DF31C(Local_402.f_110, 0);
						unk_0x1D1A369233055AEC(Local_402.f_110, 0);
					}
					if (unk_0x54DA78A82349F5AC(Local_402.f_111))
					{
						unk_0xA931FF68636DF31C(Local_402.f_111, 0);
						unk_0x1D1A369233055AEC(Local_402.f_111, 0);
					}
					unk_0x0B28AEB595CB09AF(0f);
					unk_0x4523FDDB9926E1D8(0f, 1065353216);
					unk_0xFBE386F7181B95E8(unk_0x27D769C59BC9D030(), 1, 0);
					unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 0);
					iVar36 = unk_0x070841EC2D20AB5A();
					if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
					{
						unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
						unk_0x5D707E54C2359852(unk_0x4D29100D094E5511(), 0);
						if ((unk_0xD2CFFE76B625AE55(iVar36) && unk_0x0B4DDB992C7BCF57(iVar36, 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iVar36, 0))
						{
							unk_0x4EEE9D9427E70F4E(iVar36, Local_402.f_29.f_44, 1, 1, 0, 1);
							unk_0xFBDCF3D5834B58D8(iVar36, Local_402.f_29.f_47);
							unk_0xFA3ED0FFF3FD8F34(iVar36);
						}
						else
						{
							unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), Local_402.f_29.f_44, 1, 1, 0, 1);
							unk_0xFBDCF3D5834B58D8(unk_0x27D769C59BC9D030(), Local_402.f_29.f_47);
						}
					}
					if (unk_0xD2CFFE76B625AE55(iLocal_1027) && unk_0x0B4DDB992C7BCF57(iLocal_1027, 0))
					{
						iVar37 = func_45(24);
						if (func_197(&Local_776, 24))
						{
							func_192(&Local_776, func_371());
							if (unk_0xD2CFFE76B625AE55(iVar37))
							{
								unk_0xF6E128C391C16F7C(&iVar37);
							}
						}
						if (Local_402.f_0 == 21)
						{
							unk_0xEFA71310CAEBAE1F(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
							unk_0x4EEE9D9427E70F4E(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
							unk_0xFBDCF3D5834B58D8(iLocal_1027, 154.4846f);
							func_190(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_402.f_0 == 22)
						{
							unk_0xEFA71310CAEBAE1F(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
							unk_0x4EEE9D9427E70F4E(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
							unk_0xFBDCF3D5834B58D8(iLocal_1027, 319.6985f);
							func_190(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_402.f_0 == 23)
						{
							unk_0xEFA71310CAEBAE1F(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
							unk_0x4EEE9D9427E70F4E(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
							unk_0xFBDCF3D5834B58D8(iLocal_1027, 270.8741f);
							func_190(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						unk_0xFA3ED0FFF3FD8F34(iLocal_1027);
					}
					if (unk_0xD2CFFE76B625AE55(iVar36) && unk_0x0B4DDB992C7BCF57(iVar36, 0))
					{
						unk_0xFBE386F7181B95E8(iVar36, 1, 0);
						unk_0xA8CA82EB31D1626F(iVar36, 0);
						if (unk_0xFF65D7BC656BA68E(iVar36, 1))
						{
							unk_0x9846B4D56971A958(&iVar36);
						}
					}
					iVar38 = 5000;
					iVar39 = unk_0xA0F74982C6AAA9D4();
					while (!unk_0x848B254591916C7D() && (unk_0xA0F74982C6AAA9D4() - iVar39) < iVar38)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0xBFF8C08B5EEF0974(Local_402.f_112))
					{
						unk_0x34E1C1B799C848E3(Local_402.f_112);
					}
					StringCopy(&Global_32434, "", 32);
					if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
					{
						func_212(47, 1);
						func_207(47, 1);
						Global_101154.f_18807.f_4800 = 1;
					}
					unk_0x18F9F40035A8905D();
					unk_0xFE7F6902788E4A5B();
					unk_0x3DFCFAD590F85BF7(1);
					unk_0x83DB85FD25128C55(1);
					func_199(0, 1, 1, 0);
					bLocal_854 = false;
					Global_25373 = 0;
				}
				if (unk_0x4C3CEC038B6637D7(Local_516.f_0))
				{
					unk_0xBBDCA990E9FC1AE1(&Local_516);
				}
				func_236(iLocal_672, Local_516.f_4, Local_402.f_29.f_67);
				func_235(Local_402.f_0, 5, 1);
				func_222(Local_402.f_0);
				if (unk_0x7B4654D62B7E0E9E(Global_68319.f_208[Local_402.f_0]))
				{
					unk_0x9403D0F4C7711241(&(Global_68319.f_208[Local_402.f_0]));
				}
				iLocal_940 = Local_402.f_0;
				func_221();
				Local_402.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_669++;
			if (iLocal_669 >= 3)
			{
				if ((unk_0xA0F74982C6AAA9D4() - Local_402.f_4) < 4000)
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_04", 16);
					func_220(&cVar26);
				}
				else
				{
					Local_402.f_2 = 99;
				}
			}
			break;
	}
}

void func_220(char[4] cParam0)
{
	unk_0x3432AC8623AF4EAC(cParam0);
	unk_0x9785EE0D78241684(0, 1, 1, -1);
}

int func_221()
{
	if (func_159(0))
	{
		return 0;
	}
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return 0;
	}
	Global_91317.f_10++;
	return 1;
}

void func_222(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 21:
			iVar0 = 20;
			iVar1 = 155;
			break;
		
		case 22:
			iVar0 = 21;
			iVar1 = 156;
			break;
		
		case 23:
			iVar0 = 22;
			iVar1 = 157;
			break;
		
		case 12:
			iVar0 = 13;
			iVar1 = 57;
			break;
		
		case 13:
			iVar0 = 16;
			iVar1 = 62;
			break;
		
		case 14:
			iVar0 = 19;
			iVar1 = 63;
			break;
		
		case 15:
			iVar0 = 12;
			iVar1 = 56;
			break;
		
		case 16:
			iVar0 = 15;
			iVar1 = 60;
			break;
		
		case 17:
			iVar0 = 18;
			iVar1 = 61;
			break;
		
		case 18:
			iVar0 = 11;
			iVar1 = 55;
			break;
		
		case 19:
			iVar0 = 14;
			iVar1 = 58;
			break;
	}
	func_234(iVar0, 0);
	iVar2 = func_233(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_232(iVar0);
		if (func_230(iVar0, iVar1, 1))
		{
			func_223(iVar0);
			func_232(iVar0);
		}
	}
}

void func_223(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_229(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46152[iVar0 /*203*/].f_10[(Global_46152[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_46152[iVar0 /*203*/].f_9 - 1);
	if (!Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_228(Global_36852[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_224(1, Global_36852[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_36852[iVar1 /*12*/].f_3)
		{
			case 0:
				func_224(0, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_224(1, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_224(2, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_224(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x67FB99B1361E144E())
	{
		return;
	}
	iVar0 = func_371();
	bVar1 = false;
	StringCopy(&cVar2, func_227(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x5411F6B456B04A6B("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x5411F6B456B04A6B("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x5411F6B456B04A6B("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x5411F6B456B04A6B(sParam3);
				if (!unk_0x75CB9E30BA492FF0(sParam4))
				{
					unk_0x2B088D6251C2080D(sParam4);
				}
				if (!unk_0x75CB9E30BA492FF0(sParam5))
				{
					unk_0x2B088D6251C2080D(sParam5);
				}
				if (!unk_0x75CB9E30BA492FF0(sParam6))
				{
					unk_0x2B088D6251C2080D(sParam6);
				}
				if (!unk_0x75CB9E30BA492FF0(sParam7))
				{
					unk_0x2B088D6251C2080D(sParam7);
				}
				if (!unk_0x75CB9E30BA492FF0(sParam8))
				{
					unk_0x2B088D6251C2080D(sParam8);
				}
				if (!unk_0x75CB9E30BA492FF0(sParam9))
				{
					unk_0x2B088D6251C2080D(sParam9);
				}
				if (!unk_0x75CB9E30BA492FF0(sParam10))
				{
					unk_0x2B088D6251C2080D(sParam10);
				}
				if (!unk_0x75CB9E30BA492FF0(sParam11))
				{
					unk_0x2B088D6251C2080D(sParam11);
				}
				if (!unk_0x75CB9E30BA492FF0(sParam12))
				{
					unk_0x2B088D6251C2080D(sParam12);
				}
				if (!unk_0x75CB9E30BA492FF0(sParam13))
				{
					unk_0x2B088D6251C2080D(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_225(unk_0xE8386CF1E84A5B3D(&cVar2, &cVar2, 0, 2, unk_0xC754513C760635E8(func_226(iParam1)), 0));
		}
		else
		{
			func_225(unk_0xE8386CF1E84A5B3D("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xC754513C760635E8(func_226(iParam1)), 0));
		}
		switch (Global_14413)
		{
			case 0:
				StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
				Global_36844++;
				if (Global_36844 > 16)
				{
					Global_36844 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
				Global_36846++;
				if (Global_36846 > 16)
				{
					Global_36846 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
				Global_36845++;
				if (Global_36845 > 16)
				{
					Global_36845 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x954BCDB8FDB0AC0F(-1, "Notification", &Global_14402, 1);
	}
}

void func_225(var uParam0)
{
	Global_36847[Global_36851] = uParam0;
	Global_16770 = 1;
	Global_16769 = uParam0;
	Global_36851++;
	if (Global_36851 == 3)
	{
		Global_36851 = 0;
	}
}

char* func_226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_227(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[0 /*29*/].f_7));
		
		case 1:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[1 /*29*/].f_7));
		
		case 2:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[2 /*29*/].f_7));
		
		case 7:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[12 /*29*/].f_7));
		
		case 4:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[60 /*29*/].f_7));
		
		case 6:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[62 /*29*/].f_7));
		
		case 3:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[14 /*29*/].f_7));
		
		case 16:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[97 /*29*/].f_7));
		
		case 19:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[99 /*29*/].f_7));
		
		case 15:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[15 /*29*/].f_7));
		
		case 26:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[30 /*29*/].f_7));
		
		case 27:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[17 /*29*/].f_7));
		
		case 29:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[20 /*29*/].f_7));
		
		case 30:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[43 /*29*/].f_7));
		
		case 31:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[44 /*29*/].f_7));
		
		case 32:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[19 /*29*/].f_7));
		
		case 34:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[40 /*29*/].f_7));
		
		case 36:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[22 /*29*/].f_7));
		
		case 38:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[122 /*29*/].f_7));
		
		case 40:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[125 /*29*/].f_7));
		
		case 41:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[113 /*29*/].f_7));
		
		case 42:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[126 /*29*/].f_7));
		
		case 43:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[127 /*29*/].f_7));
		
		case 44:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[124 /*29*/].f_7));
		
		case 45:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[114 /*29*/].f_7));
		
		case 46:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[115 /*29*/].f_7));
		
		case 47:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[116 /*29*/].f_7));
		
		case 48:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[123 /*29*/].f_7));
		
		case 49:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[117 /*29*/].f_7));
		
		case 50:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[118 /*29*/].f_7));
		
		case 51:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[119 /*29*/].f_7));
		
		case 52:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[120 /*29*/].f_7));
		
		case 53:
			return unk_0xC754513C760635E8(&(Global_101154.f_32575[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_228(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_46152[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46152[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46152[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_230(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_234(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_46152[iVar0 /*203*/].f_2 = iParam0;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46152[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46152[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46152[iVar0 /*203*/].f_4[iVar1] == Global_36852[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46152[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46152[iVar0 /*203*/].f_4[Global_46152[iVar0 /*203*/].f_3] = Global_36852[iParam1 /*12*/].f_3;
			Global_46152[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46152[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46152[iVar0 /*203*/].f_4[iVar1] == Global_36852[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46152[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46152[iVar0 /*203*/].f_4[Global_46152[iVar0 /*203*/].f_3] = Global_36852[iParam1 /*12*/].f_2;
			Global_46152[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46152[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46152[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_231(Global_46152[iVar0 /*203*/].f_4[iVar1], Global_46152[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_40177[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_40177[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_228(Global_36852[iVar20 /*12*/].f_1) };
		if (Global_36852[iVar20 /*12*/].f_2 == iParam0 && !Global_36852[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36852[iVar20 /*12*/].f_2;
		iVar0 = Global_45790[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_45790[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36844 = (Global_36844 - 1);
						if (Global_36844 < 0)
						{
							Global_36844 = 0;
						}
						break;
					
					case 1:
						Global_36845 = (Global_36845 - 1);
						if (Global_36845 < 0)
						{
							Global_36845 = 0;
						}
						break;
					
					case 2:
						Global_36846 = (Global_36846 - 1);
						if (Global_36846 < 0)
						{
							Global_36846 = 0;
						}
						break;
					}
				}
		}
		Global_45790[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45790[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45790[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45790[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45790[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_45790[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36844 = (Global_36844 - 1);
						if (Global_36844 < 0)
						{
							Global_36844 = 0;
						}
						break;
					
					case 1:
						Global_36845 = (Global_36845 - 1);
						if (Global_36845 < 0)
						{
							Global_36845 = 0;
						}
						break;
					
					case 2:
						Global_36846 = (Global_36846 - 1);
						if (Global_36846 < 0)
						{
							Global_36846 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_46152[iVar24 /*203*/].f_1 == iParam1 && Global_46152[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45790[iParam0 /*120*/].f_18[iVar0] = Global_46152[iVar23 /*203*/].f_1;
		Global_45790[iParam0 /*120*/].f_1[iVar0] = (Global_46152[iVar23 /*203*/].f_9 - 1);
		Global_45790[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45790[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45790[iParam0 /*120*/]++;
		iVar25 = Global_45790[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_46152[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_36852[iVar26 /*12*/].f_2;
		if (Global_46152[iVar23 /*203*/].f_10[(Global_46152[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46152[iVar23 /*203*/].f_10[(Global_46152[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_228(Global_36852[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_45790[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_224(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_224(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_224(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_224(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_232(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0xF426A5DE932B3BEE(Global_101154.f_29511, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_229(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46152[iVar0 /*203*/] = 0;
}

int func_233(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_47574 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46152[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_46152[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_46152[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_47575[iVar1 /*53*/].f_52 == 0)
		{
			Global_47575[iVar1 /*53*/].f_52 = iVar0;
			Global_47575[iVar1 /*53*/] = iParam0;
			Global_47575[iVar1 /*53*/].f_1 = iParam1;
			Global_47575[iVar1 /*53*/].f_2 = iParam2;
			Global_101154.f_25562.f_310++;
			if (Global_101154.f_25562.f_310 == 0)
			{
				Global_101154.f_25562.f_310 = 1;
			}
			Global_47575[iVar1 /*53*/].f_10 = 0;
			Global_47575[iVar1 /*53*/].f_3 = Global_101154.f_25562.f_310;
			Global_47575[iVar1 /*53*/].f_4 = 1;
			Global_47574++;
			return Global_47575[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_234(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_229(iParam0);
	if (iVar0 > -1)
	{
		if (Global_46152[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46152[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46152[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46152[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_46152[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46152[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46152[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46152[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45790[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45790[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45790[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45790[iVar6 /*120*/].f_18[iVar8] == Global_46152[iVar4 /*203*/].f_1)
							{
								if (Global_45790[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36844 = (Global_36844 - 1);
											break;
										
										case 1:
											Global_36845 = (Global_36845 - 1);
											break;
										
										case 2:
											Global_36846 = (Global_36846 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_46152[iVar4 /*203*/].f_2 = iParam0;
	Global_46152[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_46152[iVar4 /*203*/] = 1;
	}
	Global_101154.f_25562.f_310++;
	if (Global_101154.f_25562.f_310 == 0)
	{
		Global_101154.f_25562.f_310 = 1;
	}
	Global_46152[iVar4 /*203*/].f_1 = Global_101154.f_25562.f_310;
	Global_46152[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_235(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x26545538B51562AD(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_237(Global_101154.f_32575[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_237(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_262();
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
					func_261(99, 1);
					func_260(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_260(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_260(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_245(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_244(5))
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
							func_260(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_260(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_260(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_244(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_260(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_260(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_260(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_260(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_260(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_260(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_260(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_260(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_260(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x45755F80A3E63D8B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_260(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_260(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_260(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_260(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_260(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_260(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_244(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_260(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_260(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_260(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_260(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_260(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_260(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_243(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_261(95, iParam3);
					break;
				
				case 1:
					func_261(97, iParam3);
					break;
				
				case 2:
					func_261(96, iParam3);
					break;
			}
			func_261(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_240(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_240(iVar1);
	}
	iVar5 = (Global_52923[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52923[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52923[iVar2] = 2147483647;
				}
				else
				{
					Global_52923[iVar2] = (Global_52923[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_260(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_260(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_260(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52923[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52923[iVar2];
			Global_52923[iVar2] = (Global_52923[iVar2] - iParam3);
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
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101154.f_25089.f_233[iVar2 /*69*/]++;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_1++;
		if (Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_239(iParam0);
	if (Global_35711 == 15)
	{
		func_238(0);
	}
	return 1;
}

void func_238(bool bParam0)
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
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!bParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xE2A8B026FA4DDFFF(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xE2A8B026FA4DDFFF(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xE2A8B026FA4DDFFF(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_240(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x0E063DDE8855EC52())
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0) || unk_0xF426A5DE932B3BEE(Global_2097152[func_242() /*10375*/].f_7704.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_25089.f_471), iParam0);
		unk_0xF17F4B0641AB2DE1(&(Global_2097152[func_242() /*10375*/].f_7704.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5411F6B456B04A6B("COUP_RED");
		unk_0x2B088D6251C2080D(func_241(iParam0));
		unk_0xE8386CF1E84A5B3D(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_241(int iParam0)
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
		
		default:
	}
	return "";
}

int func_242()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_243(int iParam0)
{
	func_261(93, iParam0);
	func_261(29, iParam0);
	func_261(30, iParam0);
}

bool func_244(int iParam0)
{
	if (!unk_0x0E063DDE8855EC52())
	{
		return unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0);
	}
	return unk_0xF426A5DE932B3BEE(Global_2097152[func_242() /*10375*/].f_7704.f_10, iParam0);
}

int func_245(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xB0B3AFA733DD5B94(27))
	{
		return 0;
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD0D748C6C14C0E92(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xE2A8B026FA4DDFFF(joaat("num_cash_spent"), iVar1, 1);
		func_259(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_246(27, 1);
	return 1;
}

int func_246(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_247(iParam0, iParam1);
}

int func_247(int iParam0, int iParam1)
{
	if (func_26(14) && !func_258(iParam0))
	{
		return 0;
	}
	if (unk_0xB0B3AFA733DD5B94(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return 0;
	}
	if (func_257(&Global_2563627))
	{
		if (func_255(&Global_2563627, iParam0))
		{
			return 0;
		}
		if (func_248(&Global_2563627, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xD6FCD24FAC19ACBA(iParam0))
		{
			return 0;
		}
		if (unk_0xB0B3AFA733DD5B94(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_248(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xB0B3AFA733DD5B94(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_258(iParam1))
	{
		return 0;
	}
	if (func_255(uParam0, iParam1))
	{
		return 0;
	}
	if (func_254(uParam0) < 0f)
	{
		func_253(uParam0, 0);
	}
	func_251(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_249(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_249(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xB0B3AFA733DD5B94(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_258(iParam1))
	{
		return 0;
	}
	if (func_255(uParam0, iParam1))
	{
		return 0;
	}
	if (func_254(uParam0) < 0f)
	{
		func_253(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_250(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_250(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_251(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_252(uParam0, iVar0);
		iVar0++;
	}
	func_253(uParam0, (Global_2563626 - 0.5f));
}

void func_252(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_253(var uParam0, float fParam1)
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

float func_254(var uParam0)
{
	return uParam0->f_72;
}

bool func_255(var uParam0, int iParam1)
{
	return func_256(uParam0, iParam1) != -1;
}

int func_256(var uParam0, int iParam1)
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

bool func_257(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_258(int iParam0)
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

int func_259(int iParam0, int iParam1)
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
	iVar0 = unk_0x4ED42D8FD5CFED41(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x4BF394A19129A9AD(iParam0, iParam1);
	}
	return 0;
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD0D748C6C14C0E92(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE2A8B026FA4DDFFF(iParam0, iVar0, 1);
}

void func_261(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x0E063DDE8855EC52())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		unk_0xD0D748C6C14C0E92(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE2A8B026FA4DDFFF(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_262()
{
	int iVar0;
	
	if (unk_0xB3081451628A5D6C())
	{
		unk_0xD0D748C6C14C0E92(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		unk_0xD0D748C6C14C0E92(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		unk_0xD0D748C6C14C0E92(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

int func_263(int iParam0)
{
	if (unk_0xCBB243DDC0D132D1())
	{
		if ((unk_0xA0F74982C6AAA9D4() - Global_28) > iParam0)
		{
			Global_27 = unk_0xA0F74982C6AAA9D4();
		}
		Global_28 = unk_0xA0F74982C6AAA9D4();
		if ((unk_0xA0F74982C6AAA9D4() - Global_27) > iParam0)
		{
			if (func_264())
			{
				Global_27 = unk_0xA0F74982C6AAA9D4();
				return 1;
			}
		}
	}
	return 0;
}

int func_264()
{
	if (unk_0x1E114237D972903B())
	{
		return 0;
	}
	if (unk_0x117D586920E8F7BA(0, 18) || unk_0x117D586920E8F7BA(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_265(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xD0D748C6C14C0E92(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xD0D748C6C14C0E92(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xD0D748C6C14C0E92(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_266(int iParam0)
{
	return func_267(iParam0, Global_35711);
}

int func_267(int iParam0, int iParam1)
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

void func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_371();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_123(iParam1);
	switch (iParam0)
	{
		case 10:
			iVar0 = 5;
			switch (iVar2)
			{
				case 0:
					iVar1 = 32;
					break;
				
				case 2:
					iVar1 = 33;
					break;
				
				case 1:
					iVar1 = 31;
					break;
			}
			break;
		
		case 11:
			iVar0 = 7;
			if (((iParam1 == 15 || iParam1 == 16) || iParam1 == 164) || iParam1 == 217)
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 191;
						break;
					
					case 2:
						iVar1 = 193;
						break;
					
					case 1:
						iVar1 = 192;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 40;
						break;
					
					case 2:
						iVar1 = 42;
						break;
					
					case 1:
						iVar1 = 41;
						break;
					}
			}
			break;
		
		case 12:
			iVar0 = 6;
			switch (iVar2)
			{
				case 0:
					iVar1 = 34;
					break;
				
				case 2:
					iVar1 = 36;
					break;
				
				case 1:
					iVar1 = 35;
					break;
			}
			break;
		
		case 13:
			iVar0 = 8;
			switch (iVar2)
			{
				case 0:
					iVar1 = 37;
					break;
				
				case 2:
					iVar1 = 39;
					break;
				
				case 1:
					iVar1 = 38;
					break;
			}
			break;
		
		case 15:
			iVar0 = 9;
			switch (iVar2)
			{
				case 0:
					iVar1 = 186;
					break;
				
				case 2:
					iVar1 = 188;
					break;
				
				case 1:
					iVar1 = 185;
					break;
			}
			break;
		
		case 16:
			iVar0 = 10;
			switch (iVar2)
			{
				case 0:
					iVar1 = 189;
					break;
				
				case 2:
					iVar1 = 190;
					break;
				
				case 1:
					iVar1 = 187;
					break;
			}
			break;
		
		default:
			return;
			break;
	}
	if (func_230(iVar0, iVar1, 1))
	{
		func_269(iVar0, sVar3);
		func_223(iVar0);
		func_232(iVar0);
	}
}

void func_269(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_229(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_10[(Global_46152[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_46152[iVar0 /*203*/].f_10[(Global_46152[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_46152[iVar0 /*203*/].f_10[(Global_46152[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[(Global_46152[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_275(iParam1) || !func_275(iParam0))
	{
		return 1;
	}
	iVar0 = func_51(iParam0);
	iVar1 = func_51(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_53(iParam0);
	iVar1 = func_53(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_274(iParam0);
	iVar1 = func_274(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_273(iParam0);
	iVar1 = func_273(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_272(iParam0);
	iVar1 = func_272(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_271(iParam0);
	iVar1 = func_271(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_271(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_272(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_273(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_274(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_275(int iParam0)
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
	iVar0 = func_271(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_272(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_273(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_51(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_53(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_274(iParam0);
	if (iVar5 < 1 || iVar5 > func_50(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_276()
{
	int iVar0;
	var uVar1;
	char* sVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	int iVar24;
	bool bVar25;
	struct<3> Var26;
	int iVar29;
	
	iVar0 = 0;
	if (unk_0xD32535FA4397160F(joaat("startup_positioning")) == 0)
	{
		if (Global_101154.f_18807.f_5588)
		{
			if (!unk_0xD2CFFE76B625AE55(Global_69224))
			{
				func_192(&(Global_101154.f_18807.f_5510), Global_101154.f_18807.f_5590);
				Global_101154.f_18807.f_5588 = 0;
			}
			else if (!unk_0x0B4DDB992C7BCF57(Global_69224, 0) || func_43(Global_69224, Global_101154.f_18807.f_5590, 1))
			{
				Global_101154.f_18807.f_5588 = 0;
			}
			else
			{
				if ((unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0) == Global_69224) && func_296(unk_0x27D769C59BC9D030()) != Global_101154.f_18807.f_5590)
				{
					Global_101154.f_18807.f_5590 = func_296(unk_0x27D769C59BC9D030());
				}
				if (Global_69224 != iLocal_671)
				{
					sVar2 = unk_0x608A5034B2871DB1(Global_69224, &uVar1);
					if (!unk_0x75CB9E30BA492FF0(sVar2))
					{
						if (unk_0x70ABFF261710305D(sVar2) == unk_0x70ABFF261710305D("vehicle_gen_controller"))
						{
							Global_101154.f_18807.f_5588 = 0;
							iLocal_1028 = Global_69224;
							if (Global_68319.f_139[24] == Global_69224 || (Global_69225 == Global_69224 && Global_69226 == 24))
							{
								func_295(458, 24, -1, 1);
							}
							else
							{
								func_295(458, 0, -1, 1);
							}
							Global_69224 = 0;
						}
					}
				}
				if (((Global_101154.f_18807.f_5590 != func_371() && Global_90747[Global_101154.f_18807.f_5590 /*98*/] == Global_101154.f_18807.f_5510.f_66) && unk_0xC1C5B83BB6719C6C(&(Global_90747[Global_101154.f_18807.f_5590 /*98*/].f_27), &(Global_101154.f_18807.f_5510.f_1))) && !unk_0x5D293E404CA20AA5())
				{
					func_108(&(Global_101154.f_18807.f_5510), &(Global_101154.f_18807.f_5600[Global_101154.f_18807.f_5590 /*78*/]));
					Global_101154.f_18807.f_5588 = 0;
					iLocal_1028 = 0;
					func_295(458, 0, -1, 1);
					Global_69224 = 0;
				}
			}
		}
		else if ((unk_0xD2CFFE76B625AE55(Global_69224) && unk_0x0B4DDB992C7BCF57(Global_69224, 0)) && !func_43(Global_69224, Global_101154.f_18807.f_5590, 1))
		{
			Global_101154.f_18807.f_5588 = 1;
		}
		if (unk_0xD2CFFE76B625AE55(iLocal_1028) && unk_0x0B4DDB992C7BCF57(iLocal_1028, 0))
		{
			if (((!Global_101154.f_18807.f_5588 && iLocal_1028 != Global_69224) && iLocal_1028 != iLocal_1029) && !unk_0xFF65D7BC656BA68E(iLocal_1028, 1))
			{
				func_30(iLocal_1028, 145);
				iLocal_1028 = 0;
				func_295(458, 0, -1, 1);
			}
		}
		else if (iLocal_1028 != 0)
		{
			iLocal_1028 = 0;
			func_295(458, 0, -1, 1);
		}
		if (unk_0xD2CFFE76B625AE55(iLocal_1029) && unk_0x0B4DDB992C7BCF57(iLocal_1029, 0))
		{
		}
		else if (iLocal_1029 != 0)
		{
			iLocal_1029 = 0;
		}
	}
	if (Global_69228.f_66 != 0 && Global_69225 == 0)
	{
		func_192(&Global_69228, Global_69306);
		Global_69228.f_66 = 0;
	}
	Var3 = { 433.6721f, -1006.538f, 25.96351f };
	Var6 = { 433.6578f, -1017.5f, 32.09895f };
	fVar9 = 11.25f;
	if (iLocal_667 > 0 && iLocal_667 < 99)
	{
		if (iLocal_667 != 3)
		{
			if (((((unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) || !unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Var3, Var6, fVar9, 0, 1, 0)) || func_26(0)) || func_26(3)) || func_26(2)) || func_26(14))
			{
				iLocal_667 = 99;
			}
		}
	}
	if (func_294(iLocal_672))
	{
		if (!unk_0x7B4654D62B7E0E9E(uLocal_857))
		{
			if (((func_26(15) || func_26(12)) && iLocal_667 != 3) && !unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
			{
				uLocal_857 = func_292(428.37f, -1013.5f, 27.93f, 0);
				unk_0x216986E3E3E543F2(uLocal_857, 225);
				unk_0xC5B67A5E18AF2B72(uLocal_857, "IMPOUND_BLIPNAME");
				unk_0xBFAFDBA74467F7B4(uLocal_857, true);
			}
		}
		else if ((!(func_26(15) || func_26(12)) || iLocal_667 == 3) || unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
		{
			unk_0x9403D0F4C7711241(&uLocal_857);
		}
	}
	else if (unk_0x7B4654D62B7E0E9E(uLocal_857))
	{
		unk_0x9403D0F4C7711241(&uLocal_857);
	}
	switch (iLocal_667)
	{
		case 0:
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				if ((Local_402.f_2 == 0 && (func_26(15) || func_26(12))) && !unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
				{
					if (func_294(iLocal_672))
					{
						if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Var3, Var6, fVar9, 0, 1, 0))
						{
							if (func_265(iLocal_672) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (func_188(iVar11, iLocal_672))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									func_151(&iLocal_668, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_151(&iLocal_668, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_667 = 1;
							}
							else
							{
								func_149("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && func_147(0, -1, 0))
			{
				if (func_146(iLocal_668, 1))
				{
					func_65(&iLocal_668);
					unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
					func_291();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (func_188(iVar13, iLocal_672))
						{
							iVar12++;
						}
						iVar13++;
					}
					if (iVar12 > 1)
					{
						iLocal_657 = 0;
						iLocal_658 = 0;
						iLocal_659 = 0;
						iLocal_662 = -1;
						iLocal_667++;
					}
					else
					{
						iVar14 = 0;
						while (iVar14 < 2)
						{
							if (func_188(iVar14, iLocal_672))
							{
								if (iVar14 == 0)
								{
									Var15 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var15 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_282(&iLocal_671, iVar14, Var15, 179.24f, 1))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								if (unk_0xD2CFFE76B625AE55(iLocal_671))
								{
									if (iVar14 == 0)
									{
										func_281(18, 1, 0);
									}
									else
									{
										func_281(19, 1, 0);
									}
									if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
									{
										unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
									}
									func_236(iLocal_672, 118, 250);
									func_280(iVar14);
									func_30(iLocal_671, func_371());
									func_67(1, -1);
									iLocal_667 = 3;
									func_65(&iLocal_668);
									iLocal_668 = -1;
									iLocal_659 = 0;
								}
							}
							iVar14++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_371())
			{
				case 0:
					iVar18 = 0;
					break;
				
				case 1:
					iVar18 = 1;
					break;
				
				case 2:
					iVar18 = 2;
					break;
			}
			func_291();
			if (!iLocal_657 || iLocal_658)
			{
				func_144(0);
				func_143(1, 1, 0, 0, 0);
				func_142(1, 2, 1, 1, 1);
				func_141("IMPOUND_TITLE");
				iLocal_663 = 0;
				iVar19 = -1;
				iVar21 = 0;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (func_188(iVar20, iLocal_672))
					{
						func_126(iVar21, unk_0x5FB9F0778C42904D(Global_101154.f_18807.f_5038[iVar18 /*157*/][iVar20 /*78*/].f_66), 0, 1, 0, 0);
						if (iVar19 == -1)
						{
							iVar19 = iVar21;
							iLocal_662 = iVar21;
						}
						unk_0x26545538B51562AD(&iLocal_663, iVar21);
						iLocal_664[iVar21] = iVar20;
						func_126(iVar21, "IMPOUND_COST", 1, 1, 0, 0);
						func_279(250, 0);
						iVar21++;
					}
					iVar20++;
				}
				iVar21 = 0;
				func_119(iLocal_662, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar0 = 0;
				if (unk_0xDFCB321F1D24137F())
				{
					if (unk_0x34650B66FAF4897C(2))
					{
						unk_0xCFF471245AFEEDCE(0, 1, 1);
						unk_0xCFF471245AFEEDCE(0, 2, 1);
						unk_0x32AA9ADAA9E9A2D4(0, 237, 1);
						unk_0x32AA9ADAA9E9A2D4(0, 238, 1);
						unk_0x32AA9ADAA9E9A2D4(0, 241, 1);
						unk_0x32AA9ADAA9E9A2D4(0, 242, 1);
						func_116(0, 0, 0, 1);
						func_115(0, -1, 1);
						if (func_114())
						{
							if (Global_2562129 != iLocal_662)
							{
								unk_0x954BCDB8FDB0AC0F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_662 = Global_2562129;
								func_119(iLocal_662, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (unk_0x117D586920E8F7BA(2, 188) || unk_0x117D586920E8F7BA(2, 241))
				{
					if (!iLocal_659)
					{
						iLocal_660 = 1;
						unk_0x954BCDB8FDB0AC0F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar22 = (iLocal_662 - 1);
						while (iVar22 >= 0)
						{
							if (unk_0xF426A5DE932B3BEE(iLocal_663, iVar22))
							{
								iLocal_662 = iVar22;
								bVar23 = true;
								iVar22 = 0;
							}
							iVar22 = (iVar22 + -1);
						}
						if (!bVar23)
						{
							iVar22 = 31;
							while (iVar22 >= iLocal_662 + 1)
							{
								if (unk_0xF426A5DE932B3BEE(iLocal_663, iVar22))
								{
									iLocal_662 = iVar22;
									bVar23 = true;
									iVar22 = iLocal_662;
								}
								iVar22 = (iVar22 + -1);
							}
						}
						if (bVar23)
						{
							func_119(iLocal_662, 1, 1);
						}
					}
				}
				else if (unk_0x117D586920E8F7BA(2, 187) || unk_0x117D586920E8F7BA(2, 242))
				{
					if (!iLocal_659)
					{
						iLocal_660 = 1;
						unk_0x954BCDB8FDB0AC0F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar24 = iLocal_662 + 1;
						while (iVar24 <= 31)
						{
							if (unk_0xF426A5DE932B3BEE(iLocal_663, iVar24))
							{
								iLocal_662 = iVar24;
								bVar25 = true;
								iVar24 = 31;
							}
							iVar24++;
						}
						if (!bVar25)
						{
							iVar24 = 0;
							while (iVar24 <= (iLocal_662 - 1))
							{
								if (unk_0xF426A5DE932B3BEE(iLocal_663, iVar24))
								{
									iLocal_662 = iVar24;
									bVar25 = true;
									iVar24 = iLocal_662;
								}
								iVar24++;
							}
						}
						if (bVar25)
						{
							func_119(iLocal_662, 1, 1);
						}
					}
				}
				else if (unk_0xFE8B08EBA8FB9177(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0x954BCDB8FDB0AC0F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!iLocal_659)
					{
						func_113("IMPOUND_CNF", 0, 0);
						func_112(-1);
						func_111(201, "ITEM_YES", -1);
						func_111(202, "ITEM_NO", -1);
						iLocal_659 = 1;
					}
					else
					{
						if (iLocal_662 == 0)
						{
							Var26 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							Var26 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_188(iLocal_664[iLocal_662], iLocal_672))
						{
							while (!func_282(&iLocal_671, iLocal_664[iLocal_662], Var26, 179.24f, 1))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							if (unk_0xD2CFFE76B625AE55(iLocal_671))
							{
								if (iLocal_662 == 0)
								{
									func_281(18, 1, 0);
								}
								else
								{
									func_281(19, 1, 0);
								}
								if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
								{
									unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
								}
								func_236(iLocal_672, 118, 250);
								func_280(iLocal_664[iLocal_662]);
								func_30(iLocal_671, func_371());
								func_67(1, -1);
								iLocal_667++;
								func_65(&iLocal_668);
								iLocal_668 = -1;
								iLocal_659 = 0;
							}
						}
						iLocal_658 = 1;
					}
				}
				else if (unk_0xFE8B08EBA8FB9177(2, 202) || unk_0xFE8B08EBA8FB9177(2, 238))
				{
					unk_0x954BCDB8FDB0AC0F(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (iLocal_659)
					{
						iLocal_660 = 1;
						iLocal_659 = 0;
					}
					else
					{
						iLocal_667 = 99;
					}
				}
			}
			unk_0xC5EB6DE147B611C7();
			if (iLocal_660)
			{
				func_113("", 0, 0);
				func_112(-1);
				func_111(201, "ITEM_SELECT", -1);
				func_111(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			if (func_147(0, -1, 0))
			{
				func_70(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_278())
			{
				func_30(iLocal_671, func_371());
				iLocal_667 = 99;
			}
			else if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), 431.4f, -997.33f, 24.76f, 1) > 100f)
			{
				if (unk_0xD2CFFE76B625AE55(iLocal_671))
				{
					if (!unk_0x2006A8C1BA2AFE80(iLocal_671, 0))
					{
						if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_671, 0) && unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(iLocal_671, 1), unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), 1) > 100f)
						{
							if (!unk_0x4FB9EE3D0706477D(iLocal_671))
							{
								func_277(iLocal_671, 1, 145);
								unk_0xF6E128C391C16F7C(&iLocal_671);
								unk_0xC972AA2C9F94741D(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
								iLocal_667 = 99;
							}
						}
						else if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_671, 0))
						{
							unk_0xC972AA2C9F94741D(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
							func_30(iLocal_671, func_371());
							iLocal_667 = 99;
						}
					}
					else
					{
						unk_0xC972AA2C9F94741D(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
						iLocal_667 = 99;
					}
				}
				else
				{
					unk_0xC972AA2C9F94741D(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
					iLocal_667 = 99;
				}
			}
			break;
		
		case 99:
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
			}
			func_65(&iLocal_668);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_664[iVar29] = -1;
				iVar29++;
			}
			func_281(18, 0, 0);
			func_281(19, 0, 0);
			if (unk_0xD2CFFE76B625AE55(iLocal_671))
			{
				unk_0x9846B4D56971A958(&iLocal_671);
			}
			iLocal_667 = 0;
			break;
	}
	if (iLocal_667 == 0)
	{
		if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, 1, 0))
		{
			if (!iLocal_670)
			{
				func_281(18, 1, 0);
				iLocal_670 = 1;
			}
		}
		else if (iLocal_670 && !unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, 1, 0))
		{
			func_281(18, 0, 0);
			iLocal_670 = 0;
		}
	}
}

int func_277(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x608A5034B2871DB1(iParam0, &uVar0);
		if (!unk_0x75CB9E30BA492FF0(sVar1))
		{
			if (unk_0x70ABFF261710305D(sVar1) == unk_0x70ABFF261710305D("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_30(iParam0, iParam2);
	return 1;
}

int func_278()
{
	if (unk_0x589EDE4846388DD2(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x589EDE4846388DD2(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x589EDE4846388DD2(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x589EDE4846388DD2(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_279(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5092 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	Global_17257.f_3918[Global_17257.f_5092] = iParam0;
	Global_17257.f_5092++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 2;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_122();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_101(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4938[(Global_17257.f_5089 - 1)])
		{
			Global_17257.f_4938[(Global_17257.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_121();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

void func_280(int iParam0)
{
	int iVar0;
	
	switch (func_371())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_189(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_281(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x26545538B51562AD(&(Global_34834[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (unk_0xF426A5DE932B3BEE(Global_34834[iParam0 /*31*/].f_1, 1))
			{
				Global_34834[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_34834[iParam0 /*31*/].f_22 = 1f;
			}
			unk_0x823647AFDCCB939A(Global_34834[iParam0 /*31*/], Global_34834[iParam0 /*31*/].f_22, 0, 0);
			unk_0x29A7F2256763EE17(Global_34834[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_34834[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_34834[iParam0 /*31*/].f_22 = 0f;
			unk_0x823647AFDCCB939A(Global_34834[iParam0 /*31*/], Global_34834[iParam0 /*31*/].f_22, 0, 0);
			unk_0x29A7F2256763EE17(Global_34834[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_282(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_188(iParam1, func_371()) || unk_0xD2CFFE76B625AE55(*iParam0))
	{
		return 0;
	}
	switch (func_371())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	unk_0x97C59C4E8349D15F(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (unk_0x875098323FCA8FE6(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = unk_0x4E76306EE6AE7596(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, Param2, fParam5, 0, 0);
		func_283(*iParam0, &(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		unk_0xFA3ED0FFF3FD8F34(*iParam0);
		unk_0x8B93994E73DF8345(*iParam0, 0);
		unk_0x1B7FCBF5F0A9F480(*iParam0, 1);
		if (bParam6)
		{
			unk_0x0049DE0B34213B12(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_283(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		if (unk_0x70ABFF261710305D(&(uParam1->f_1)) != 0)
		{
			unk_0x363CB1E011E73B79(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0xDDE375984608ED63())
		{
			unk_0x97344EBF9AD0F17F(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xF426A5DE932B3BEE(uParam1->f_77, func_32(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), func_32(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xF426A5DE932B3BEE(uParam1->f_77, func_32(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), func_32(iVar1 + 1));
			}
		}
		if (unk_0xF426A5DE932B3BEE(uParam1->f_77, 13))
		{
			unk_0x5F3BFD21D9B2F155(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x260FAF7AD1C9058F(iParam0);
		}
		if (unk_0xF426A5DE932B3BEE(uParam1->f_77, 12))
		{
			unk_0x43EB68B30C2D12B2(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x60C7627F18E7E3B5(iParam0);
		}
		unk_0xFD2475756036347D(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x85E88CC5C37A1A11(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xF426A5DE932B3BEE(uParam1->f_77, 15) || func_290(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_289())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x7D42D99B3885D48F(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x15C84F66C4F9715B(iParam0, 0);
		}
		else
		{
			unk_0x15C84F66C4F9715B(iParam0, 0);
			unk_0x15C84F66C4F9715B(iParam0, uParam1->f_65);
		}
		unk_0x5140F895BFA54316(iParam0, !unk_0xF426A5DE932B3BEE(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x37B592C0F74990D2(iParam0, uParam1->f_70);
		}
		unk_0x7D1AE670C52C839A(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x1FD802F9308DD553(iParam0, 2, unk_0xF426A5DE932B3BEE(uParam1->f_77, 28));
		unk_0x1FD802F9308DD553(iParam0, 3, unk_0xF426A5DE932B3BEE(uParam1->f_77, 29));
		unk_0x1FD802F9308DD553(iParam0, 0, unk_0xF426A5DE932B3BEE(uParam1->f_77, 30));
		unk_0x1FD802F9308DD553(iParam0, 1, unk_0xF426A5DE932B3BEE(uParam1->f_77, 31));
		unk_0x11E91887F8A313B1(iParam0, unk_0xF426A5DE932B3BEE(uParam1->f_77, 10));
		if (unk_0xC14CF45D822A1BEF(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x22302C6C9DC94642(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x9D4118D82F876A81(unk_0x946C63BD9EF05437(iParam0)))
			{
				if (unk_0x6CCC9ABA9456E815(unk_0x946C63BD9EF05437(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_288(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_288(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x1BCE164A254176FA(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x72D8EEFEABAD4CC9(iParam0, 1);
			}
			else
			{
				unk_0x0716DFA30041BE76(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_284(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xDBFA5C79D9B3D622(uParam1->f_66) && !unk_0xD3AE48D8EB7DCBE6(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xF426A5DE932B3BEE(uParam1->f_77, func_32(iVar2 + 1)))
				{
					if (!unk_0x3D866A165E63B4FE(iParam0, iVar2 + 1))
					{
						unk_0x10CCA34E93B40732(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x3D866A165E63B4FE(iParam0, iVar2 + 1))
				{
					unk_0x10CCA34E93B40732(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if (unk_0xEC6E5897335290DD(uParam1->f_66))
		{
			if (!unk_0xF426A5DE932B3BEE(uParam1->f_77, 23))
			{
				if (unk_0xF426A5DE932B3BEE(uParam1->f_77, 22))
				{
					unk_0x4890188915218B70(iParam0, 2);
				}
				else
				{
					unk_0x4890188915218B70(iParam0, 3);
				}
			}
			else
			{
				unk_0x4890188915218B70(iParam0, 4);
			}
		}
		if (unk_0xF426A5DE932B3BEE(uParam1->f_77, 27))
		{
			unk_0xBC2F3726EAB9B952(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xBC2F3726EAB9B952(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_284(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0B4DDB992C7BCF57(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x41EEFFCF5FB2A6E4(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x66E8010228AFE795(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x31784B1E9A6BDD10(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xC90889BF6C7006D1(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x7D3DEE1D65BA1603(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x406E9DA605D8FD2B(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x406E9DA605D8FD2B(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x406E9DA605D8FD2B(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_287(unk_0x946C63BD9EF05437(*iParam0), 1) && unk_0xC90889BF6C7006D1(*iParam0, 24) != func_286(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x406E9DA605D8FD2B(*iParam0, 24, func_286(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_285(*iParam0))
	{
		unk_0x7DC8EB593E346DA4(*iParam0, 1);
		unk_0x1B7FCBF5F0A9F480(*iParam0, 1);
	}
	return 1;
}

int func_285(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xD2CFFE76B625AE55(uParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0)) && unk_0x41EEFFCF5FB2A6E4(iParam0) > 0)
	{
		unk_0x66E8010228AFE795(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xC90889BF6C7006D1(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x42CE83CA72E324C3(iParam0, iVar1, unk_0xC90889BF6C7006D1(iParam0, iVar1)), 16);
				iVar2 = unk_0x70ABFF261710305D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x70ABFF261710305D("MNU_CAGE") || iVar2 == unk_0x70ABFF261710305D("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_286(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		switch (unk_0x946C63BD9EF05437(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0xBBB5FCBC554BAAE8(iParam0, 38);
		iVar1 = unk_0xBBB5FCBC554BAAE8(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_287(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_11649)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_11650)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_11648)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_11651)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_11653)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_11652)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_288(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x41EEFFCF5FB2A6E4(iParam0) > 0)
	{
		unk_0x66E8010228AFE795(iParam0, 0);
		iVar0 = unk_0xC90889BF6C7006D1(iParam0, 24);
		iVar1 = unk_0x0334928DD9F6AEB8(iParam0, 24);
		unk_0xDB859F5026BDBB0E(iParam0, iParam1);
		if (iVar0 == -1)
		{
			unk_0x7D3DEE1D65BA1603(iParam0, 24);
		}
		else
		{
			unk_0x406E9DA605D8FD2B(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_289()
{
	return unk_0xA29E536967D6DF2E(joaat("mpindependence"));
}

int func_290(int iParam0)
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
		{
			if (unk_0x90F7F7FF57758DF4("MPBitset", 3))
			{
				if (unk_0xE8E046017EE675F2(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x6140AB07098540A5(iParam0, "MPBitset");
				}
				return unk_0xF426A5DE932B3BEE(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_291()
{
	unk_0x08D8EA8289B6D0F8(0);
	unk_0x32AA9ADAA9E9A2D4(0, 188, 1);
	unk_0x32AA9ADAA9E9A2D4(0, 187, 1);
	unk_0x32AA9ADAA9E9A2D4(0, 201, 1);
	unk_0x32AA9ADAA9E9A2D4(0, 202, 1);
	unk_0x32AA9ADAA9E9A2D4(0, 1, 1);
	unk_0x32AA9ADAA9E9A2D4(0, 2, 1);
	unk_0x32AA9ADAA9E9A2D4(0, 239, 1);
	unk_0x32AA9ADAA9E9A2D4(0, 240, 1);
}

var func_292(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x43B8950858CAD66F(Param0);
	unk_0xC5B4E9487339A2BB(uVar0, func_293(unk_0x0E063DDE8855EC52(), 1f, 1f));
	unk_0xAB27F3DE6390C749(uVar0, iParam3);
	return uVar0;
}

float func_293(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_294(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_188(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_295(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_88();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xCE0666B95FEBDB76((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xCE0666B95FEBDB76((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xCE0666B95FEBDB76((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xCE0666B95FEBDB76((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xE1C2CBC9B45C3225((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xCE0666B95FEBDB76((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xE1C2CBC9B45C3225((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xCE0666B95FEBDB76((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xCE0666B95FEBDB76((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xCE0666B95FEBDB76((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xCE0666B95FEBDB76((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xCE0666B95FEBDB76((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xCE0666B95FEBDB76((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xCE0666B95FEBDB76((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xCE0666B95FEBDB76((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x8870B9E70F312A20(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_296(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_297(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_297(int iParam0)
{
	if (func_24(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_298(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (!unk_0xF426A5DE932B3BEE(Global_101154.f_8706.f_25, 7))
	{
		if (!unk_0xF426A5DE932B3BEE(*uParam0, 6))
		{
			if (func_26(13) && func_14(func_16()))
			{
				unk_0x26545538B51562AD(uParam0, 6);
				iVar0 = func_9();
				uParam0->f_6 = { func_329(iVar0) };
				if (Global_25393 == iVar0 || Global_25393 == 0)
				{
					func_3(1);
					Var1 = { func_328("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					unk_0xF8B012FD1C255840(&Var1);
					iVar0 = (Global_25393 + 1 % 8);
					func_326(uParam0, iVar0);
					uParam0->f_2 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(8000, 12000));
					unk_0x26545538B51562AD(uParam0, 12);
					if (iVar0 == 7)
					{
						unk_0x26545538B51562AD(&(Global_101154.f_8706.f_25), 7);
						func_325(255, 0);
					}
				}
				else
				{
					func_326(uParam0, 0);
					unk_0xF17F4B0641AB2DE1(&(Global_101154.f_8706.f_25), 12);
				}
			}
		}
		else
		{
			func_324();
			if (!unk_0xF426A5DE932B3BEE(*uParam0, 31))
			{
				if (!unk_0xF426A5DE932B3BEE(*uParam0, 25))
				{
					func_323(uParam0);
				}
				else if (func_322())
				{
					func_306(uParam0);
					uParam0->f_3 = unk_0xA0F74982C6AAA9D4() + 2000;
				}
				if (!func_305(0))
				{
					func_325(255, 0);
				}
			}
			else if (func_305(0))
			{
				if (unk_0xA0F74982C6AAA9D4() > uParam0->f_3)
				{
					func_325(0, 800);
				}
			}
			if (!func_26(13) || !func_14(func_16()))
			{
				func_299(uParam0);
			}
		}
	}
}

void func_299(var uParam0)
{
	struct<8> Var0;
	
	if (unk_0xF426A5DE932B3BEE(*uParam0, 31))
	{
		func_304(uParam0);
	}
	if (unk_0xF426A5DE932B3BEE(*uParam0, 25))
	{
		func_300(uParam0);
	}
	Var0 = { func_328("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (unk_0x159730DB57D995D0(&Var0))
	{
		unk_0x354EC40268FD2071(&Var0);
	}
	unk_0xF17F4B0641AB2DE1(uParam0, 6);
	unk_0xF17F4B0641AB2DE1(uParam0, 30);
	unk_0xF17F4B0641AB2DE1(uParam0, 8);
}

void func_300(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_303(iVar0);
	iVar2 = func_302(iVar1);
	iVar3 = func_301(iVar1);
	if (iVar2 != 0)
	{
		unk_0x0049DE0B34213B12(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x0049DE0B34213B12(iVar3);
	}
	unk_0xF17F4B0641AB2DE1(uParam0, 25);
}

int func_301(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return joaat("u_m_y_cyclist_01");
		
		case 49:
			return joaat("dune");
		
		default:
	}
	return 0;
}

int func_302(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return joaat("a_c_rabbit_01");
		
		case 109:
			return joaat("a_c_boar");
		
		case 43:
			return joaat("a_c_deer");
		
		case 35:
			return joaat("emperor2");
		
		case 17:
			return joaat("scorcher");
		
		case 28:
			return joaat("a_c_mtlion");
		
		case 49:
			return joaat("cs_hunter");
		
		case 25:
			return joaat("a_m_y_hiker_01");
		
		case 14:
			return joaat("a_f_y_hippie_01");
		
		case 86:
			return joaat("a_m_m_hillbilly_01");
		
		default:
	}
	return 0;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 12;
		
		case 2:
			return 43;
		
		case 3:
			return 35;
		
		case 4:
			return 109;
		
		case 5:
			return 28;
		
		case 6:
			return 17;
		
		default:
	}
	return -1;
}

void func_304(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0->f_4))
	{
		unk_0x14EA3066FD050C45(unk_0xA8CFDE65C45F813B(uParam0->f_4, 0), 10f);
		unk_0xF6E128C391C16F7C(&(uParam0->f_4));
	}
	if (unk_0xD2CFFE76B625AE55(uParam0->f_5))
	{
		unk_0x14EA3066FD050C45(unk_0xA8CFDE65C45F813B(uParam0->f_5, 0), 10f);
		unk_0xF6ADC11BDB5ECA41(&(uParam0->f_5));
	}
	unk_0xF17F4B0641AB2DE1(uParam0, 31);
}

bool func_305(bool bParam0)
{
	if (bParam0)
	{
		return Global_98114.f_2 > 0.5f;
	}
	return Global_98114.f_2 >= 255f;
}

void func_306(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_303(iVar0);
	func_307(iVar1, &(uParam0->f_5), &(uParam0->f_4), func_321(iVar0), func_320(iVar0), 1);
	unk_0x26545538B51562AD(uParam0, 31);
}

void func_307(int iParam0, var uParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 12:
			func_319(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 109:
			func_318(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 43:
			func_317(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 35:
			func_316(uParam2, Param3, uParam6, bParam7);
			break;
		
		case 28:
			func_315(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 17:
			func_314(uParam1, uParam2, Param3, uParam6, bParam7);
			break;
		
		case 49:
			func_312(uParam1, uParam2, Param3, uParam6);
			break;
		
		case 25:
			func_311(uParam1, Param3, uParam6);
			break;
		
		case 14:
			func_310(uParam1, Param3, uParam6);
			break;
		
		case 86:
			func_308(uParam1, Param3, uParam6);
			break;
	}
}

void func_308(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_302(86);
	if (unk_0x875098323FCA8FE6(iVar0))
	{
		*uParam0 = unk_0x91D233CD0204A37F(5, iVar0, Param1, uParam4, 1, 1);
		unk_0xB44C5DE4630BE7A3(*uParam0, 1);
		unk_0x56F64CC9254C2E4F(*uParam0, 227, 1);
		unk_0x0049DE0B34213B12(iVar0);
		unk_0x51F79AC13D2AD286(*uParam0, 0);
		unk_0xE7CD799CF8963ACB(*uParam0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_309(*uParam0);
		return;
	}
}

void func_309(var uParam0)
{
	unk_0xD728E42852AE3D6E(uParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	unk_0xD728E42852AE3D6E(uParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	unk_0xD728E42852AE3D6E(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	unk_0xD728E42852AE3D6E(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	unk_0xD728E42852AE3D6E(uParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	unk_0xD728E42852AE3D6E(uParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	unk_0xD728E42852AE3D6E(uParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	unk_0xD728E42852AE3D6E(uParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	unk_0xD728E42852AE3D6E(uParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	unk_0xD728E42852AE3D6E(uParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	unk_0xD728E42852AE3D6E(uParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	unk_0xD728E42852AE3D6E(uParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xD728E42852AE3D6E(uParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_310(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_302(14);
	if (unk_0x875098323FCA8FE6(iVar0))
	{
		*uParam0 = unk_0x91D233CD0204A37F(5, iVar0, Param1, uParam4, 1, 1);
		unk_0xB44C5DE4630BE7A3(*uParam0, 1);
		unk_0x56F64CC9254C2E4F(*uParam0, 227, 1);
		unk_0x0049DE0B34213B12(iVar0);
		unk_0x51F79AC13D2AD286(*uParam0, 0);
		unk_0xE7CD799CF8963ACB(*uParam0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_309(*uParam0);
		return;
	}
}

void func_311(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_302(25);
	if (unk_0x875098323FCA8FE6(iVar0))
	{
		*uParam0 = unk_0x91D233CD0204A37F(4, iVar0, Param1, uParam4, 1, 1);
		unk_0xB44C5DE4630BE7A3(*uParam0, 1);
		unk_0x56F64CC9254C2E4F(*uParam0, 227, 1);
		unk_0x0049DE0B34213B12(iVar0);
		unk_0x51F79AC13D2AD286(*uParam0, 0);
		unk_0xE7CD799CF8963ACB(*uParam0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 + 0.02f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 - 0.23f), (Param1.f_1 + 0.04f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.11f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, (Param1.f_0 + 0.09f), (Param1.f_1 - 0.06f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_309(*uParam0);
		return;
	}
}

void func_312(var uParam0, var uParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_302(49);
	iVar1 = func_301(49);
	if (unk_0x875098323FCA8FE6(iVar0) && unk_0x875098323FCA8FE6(iVar1))
	{
		*uParam0 = unk_0x91D233CD0204A37F(4, iVar0, Param2, uParam5, 1, 1);
		unk_0xB44C5DE4630BE7A3(*uParam0, 1);
		unk_0x56F64CC9254C2E4F(*uParam0, 227, 1);
		unk_0x0049DE0B34213B12(iVar0);
		unk_0x51F79AC13D2AD286(*uParam0, 0);
		unk_0xE7CD799CF8963ACB(*uParam0);
		unk_0xAC874EE6A397A6B3(1110, ((Param2.f_0 + 0.12f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, ((Param2.f_0 - 0.03f) - 0.3f), ((Param2.f_1 + 0.04f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, ((Param2.f_0 - 0.2f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, ((Param2.f_0 - 0.05f) - 0.3f), ((Param2.f_1 - 0.15f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xAC874EE6A397A6B3(1110, ((Param2.f_0 + 0.01f) - 0.3f), ((Param2.f_1 - 0.06f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_309(*uParam0);
		Var2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = unk_0x4E76306EE6AE7596(iVar1, Param2 + Var2, uParam5, 1, 1);
		unk_0x0049DE0B34213B12(iVar1);
		unk_0x38B4190AFCA07B12(*uParam1, 2f);
		unk_0xFA3ED0FFF3FD8F34(*uParam1);
		unk_0xD0BC3555421EB89C(*uParam1, 2f);
		unk_0xE4E2FD323574965C(*uParam1, 1f);
		unk_0x6D9D42DC28CDC51E(*uParam1, 0, func_313());
		unk_0x6D9D42DC28CDC51E(*uParam1, 1, func_313());
		unk_0x6D9D42DC28CDC51E(*uParam1, 2, func_313());
		unk_0x6D9D42DC28CDC51E(*uParam1, 3, func_313());
		unk_0x6D9D42DC28CDC51E(*uParam1, 4, func_313());
		unk_0x6D9D42DC28CDC51E(*uParam1, 5, func_313());
		unk_0x9B3E806EC535DBC3(*uParam1, 15f);
		unk_0xE7549DFE804C4455(*uParam1, 3);
		unk_0xB4EBE8F97449D02E(*uParam1, 2);
		unk_0x3D6B0813889C9DDF(*uParam1, 1);
		unk_0xE7CD799CF8963ACB(*uParam1);
		return;
	}
}

int func_313()
{
	if (unk_0xF426A5DE932B3BEE(unk_0x3A5708FEE1B560A9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_314(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_302(17);
	iVar1 = func_301(17);
	if (unk_0x875098323FCA8FE6(iVar0) && unk_0x875098323FCA8FE6(iVar1))
	{
		*uParam0 = unk_0x91D233CD0204A37F(4, iVar1, Param2, uParam5, 1, 1);
		unk_0xB44C5DE4630BE7A3(*uParam0, 1);
		unk_0x56F64CC9254C2E4F(*uParam0, 227, 1);
		unk_0x0049DE0B34213B12(iVar1);
		unk_0x51F79AC13D2AD286(*uParam0, 0);
		unk_0xE7CD799CF8963ACB(*uParam0);
		Var2 = { 0.02f, -0.01f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.23f, 0.04f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.01f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.11f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.09f, -0.06f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam6)
		{
			Var2 = { 0.5783f, 0.1357f, -0.0683f };
			unk_0xAC874EE6A397A6B3(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.0477f, 0.1103f, -0.1388f };
			unk_0xAC874EE6A397A6B3(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.5048f, 0.4595f, -0.1953f };
			unk_0xAC874EE6A397A6B3(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_309(*uParam0);
		*uParam1 = unk_0x4E76306EE6AE7596(iVar0, (Param2.f_0 - 0.4f), (Param2.f_1 - 0.5f), Param2.f_2, uParam5, 1, 1);
		unk_0x0049DE0B34213B12(iVar0);
		unk_0x0359A241E2DD22AC(*uParam1, 0f, 85f, 0f, 2, 1);
		unk_0xD0BC3555421EB89C(*uParam1, 20.5f);
		unk_0x9B3E806EC535DBC3(*uParam1, 15f);
		unk_0xE7CD799CF8963ACB(*uParam1);
		return;
	}
}

void func_315(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_302(28);
	if (unk_0x875098323FCA8FE6(iVar0))
	{
		*uParam0 = unk_0x91D233CD0204A37F(28, iVar0, Param1, uParam4, 1, 1);
		unk_0xB44C5DE4630BE7A3(*uParam0, 1);
		unk_0x56F64CC9254C2E4F(*uParam0, 227, 1);
		unk_0x0049DE0B34213B12(iVar0);
		unk_0x51F79AC13D2AD286(*uParam0, 0);
		unk_0xE7CD799CF8963ACB(*uParam0);
		Var1 = { 0.02f, -0.01f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.01f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.5206f, 0f, 0.003f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.1258f, 0.0362f, -0.0837f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6107f, 0.4678f, -0.0815f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_316(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_302(35);
	if (unk_0x875098323FCA8FE6(iVar0))
	{
		*uParam0 = unk_0x4E76306EE6AE7596(iVar0, Param1, uParam4, 1, 1);
		unk_0x0049DE0B34213B12(iVar0);
		unk_0x0359A241E2DD22AC(*uParam0, 0f, 170f, 0f, 2, 1);
		unk_0x38B4190AFCA07B12(*uParam0, 1f);
		unk_0xD0BC3555421EB89C(*uParam0, 1f);
		unk_0x9B3E806EC535DBC3(*uParam0, 15f);
		unk_0x6D9D42DC28CDC51E(*uParam0, 0, func_313());
		unk_0x6D9D42DC28CDC51E(*uParam0, 1, func_313());
		unk_0x6D9D42DC28CDC51E(*uParam0, 2, func_313());
		unk_0x6D9D42DC28CDC51E(*uParam0, 3, func_313());
		unk_0x6D9D42DC28CDC51E(*uParam0, 4, func_313());
		unk_0x6D9D42DC28CDC51E(*uParam0, 5, func_313());
		unk_0xE7549DFE804C4455(*uParam0, 3);
		unk_0xB4EBE8F97449D02E(*uParam0, 2);
		unk_0x3D6B0813889C9DDF(*uParam0, 1);
		unk_0xE7CD799CF8963ACB(*uParam0);
		if (bParam5)
		{
			Var1 = { 0.4947f, 2.3632f, 0.1294f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
			Var1 = { 0.9243f, 2.6606f, 0.1951f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
			Var1 = { 1.5467f, 2.5044f, 0.2418f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
			Var1 = { 1.357f, 3.8779f, 0.3259f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_317(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_302(43);
	if (unk_0x875098323FCA8FE6(iVar0))
	{
		*uParam0 = unk_0x91D233CD0204A37F(28, iVar0, Param1, uParam4, 1, 1);
		unk_0xB44C5DE4630BE7A3(*uParam0, 1);
		unk_0x56F64CC9254C2E4F(*uParam0, 227, 1);
		unk_0x0049DE0B34213B12(iVar0);
		unk_0x51F79AC13D2AD286(*uParam0, 0);
		unk_0xE7CD799CF8963ACB(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.4125f, -0.5815f, -0.2056f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
			Var1 = { 0.6332f, -1.1758f, -0.7106f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_318(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_302(109);
	if (unk_0x875098323FCA8FE6(iVar0))
	{
		*uParam0 = unk_0x91D233CD0204A37F(28, iVar0, Param1, uParam4, 1, 1);
		unk_0xB44C5DE4630BE7A3(*uParam0, 1);
		unk_0x0049DE0B34213B12(iVar0);
		unk_0x51F79AC13D2AD286(*uParam0, 0);
		unk_0xE7CD799CF8963ACB(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.4936f, -0.1763f, -0.0522f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.0645f, 0.0483f, -0.0698f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6011f, -0.1704f, -0.1473f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
		}
		func_309(*uParam0);
		return;
	}
}

void func_319(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_302(12);
	if (unk_0x875098323FCA8FE6(iVar0))
	{
		*uParam0 = unk_0x91D233CD0204A37F(28, iVar0, Param1, uParam4, 1, 1);
		unk_0xB44C5DE4630BE7A3(*uParam0, 1);
		unk_0x0049DE0B34213B12(iVar0);
		unk_0x51F79AC13D2AD286(*uParam0, 0);
		unk_0xE7CD799CF8963ACB(*uParam0);
		Var1 = { 0.04f, 0.02f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.01f, 0.05f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, -0.01f, 0f };
		unk_0xAC874EE6A397A6B3(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.2417f, -0.3975f, -0.2282f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.0747f, -0.8188f, -0.2576f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.4322f, -1.1548f, -0.4902f };
			unk_0xAC874EE6A397A6B3(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
		}
		func_309(*uParam0);
		return;
	}
}

float func_320(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 190.1056f;
		
		case 2:
			return 132.9326f;
		
		case 3:
			return 355.7119f;
		
		case 4:
			return 209.0264f;
		
		case 5:
			return 122.6722f;
		
		case 6:
			return 174.841f;
		
		default:
	}
	return 0f;
}

Vector3 func_321(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_98091[0 /*3*/];
		
		case 2:
			return Global_98091[1 /*3*/];
		
		case 3:
			return Global_98091[2 /*3*/];
		
		case 4:
			return Global_98091[3 /*3*/];
		
		case 5:
			return Global_98091[4 /*3*/];
		
		case 6:
			return Global_98091[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_322()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_303(iVar0);
	iVar2 = func_302(iVar1);
	iVar3 = func_301(iVar1);
	if (iVar2 != 0)
	{
		if (!unk_0x875098323FCA8FE6(iVar2))
		{
			return 0;
		}
	}
	if (iVar3 != 0)
	{
		if (!unk_0x875098323FCA8FE6(iVar3))
		{
			return 0;
		}
	}
	return 1;
}

void func_323(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_303(iVar0);
	iVar2 = func_302(iVar1);
	iVar3 = func_301(iVar1);
	if (iVar2 != 0)
	{
		unk_0x97C59C4E8349D15F(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x97C59C4E8349D15F(iVar3);
	}
	unk_0x26545538B51562AD(uParam0, 25);
}

void func_324()
{
	if (Global_98114.f_3 == unk_0xA08D2B17A64B8371())
	{
		return;
	}
	Global_98114.f_3 = unk_0xA08D2B17A64B8371();
	if (Global_98114.f_2 == 0f && Global_98114.f_1 == 0f)
	{
		return;
	}
	if (Global_98114.f_2 != Global_98114.f_1)
	{
		Global_98114.f_2 = (Global_98114.f_2 + Global_98114);
		if (Global_98114 <= 0f)
		{
			if (Global_98114.f_2 < Global_98114.f_1)
			{
				Global_98114.f_2 = Global_98114.f_1;
			}
		}
		else if (Global_98114.f_2 > Global_98114.f_1)
		{
			Global_98114.f_2 = Global_98114.f_1;
		}
	}
	unk_0x962859A29A7D805C(0.5f, 0.5f, 1f, 1f, 255, 255, 255, unk_0xF2DB717A73826179(Global_98114.f_2), 0);
}

void func_325(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	if (iParam1 <= 0)
	{
		Global_98114 = 0f;
		Global_98114.f_1 = fVar0;
		Global_98114.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_98114.f_2);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1) / (unk_0xFF104D8C26C113A2() * 1000f));
		Global_98114 = (fVar1 / fVar2);
		Global_98114.f_1 = fVar0;
	}
}

void func_326(var uParam0, int iParam1)
{
	func_327(&(Global_101154.f_8706.f_25), iParam1, 14336, 11);
}

void func_327(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, iParam3));
}

struct<8> func_328(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_329(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_98069[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_330()
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_392)
			{
				unk_0x97C59C4E8349D15F(joaat("v_ilev_uvline"));
				iLocal_391 = 1;
				if (unk_0x875098323FCA8FE6(joaat("v_ilev_uvline")))
				{
					if (func_331(8))
					{
						uLocal_393[4] = unk_0xA8C993B9F5CB4D92(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, 1, 0);
						unk_0x4EEE9D9427E70F4E(uLocal_393[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
						unk_0x0359A241E2DD22AC(uLocal_393[4], 0f, 0f, 116.9f, 2, 1);
						uLocal_393[1] = unk_0xA8C993B9F5CB4D92(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, 1, 0);
						unk_0x4EEE9D9427E70F4E(uLocal_393[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
						unk_0x0359A241E2DD22AC(uLocal_393[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_331(9))
					{
						uLocal_393[5] = unk_0xA8C993B9F5CB4D92(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, 1, 0);
						unk_0x4EEE9D9427E70F4E(uLocal_393[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
						unk_0x0359A241E2DD22AC(uLocal_393[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_331(10))
					{
						uLocal_393[3] = unk_0xA8C993B9F5CB4D92(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 1, 1, 0);
						unk_0x4EEE9D9427E70F4E(uLocal_393[3], 471.48f, fVar0, 29.82f, 1, 0, 0, 1);
						unk_0x0359A241E2DD22AC(uLocal_393[3], 0f, 0f, 116.9f, 2, 1);
					}
					uVar1 = unk_0x695481387D3FCB8D(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (unk_0xD2CFFE76B625AE55(uLocal_393[iVar2]))
						{
							unk_0xFBE386F7181B95E8(uLocal_393[iVar2], 1, 0);
							unk_0x36F01E62334B745B(uLocal_393[iVar2], 1);
							unk_0x6FE174646CE0C4A4(uLocal_393[iVar2], uVar1);
						}
						iVar2++;
					}
					unk_0x0049DE0B34213B12(joaat("v_ilev_uvline"));
					iLocal_392 = 1;
				}
			}
		}
		else
		{
			if (iLocal_391)
			{
				unk_0x0049DE0B34213B12(joaat("v_ilev_uvline"));
				iLocal_391 = 0;
			}
			if (iLocal_392)
			{
				func_374();
				iLocal_392 = 0;
			}
		}
	}
}

int func_331(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_332()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68319.f_553)
	{
		if (!iLocal_400)
		{
			Global_68319.f_554 = 0;
			iLocal_400 = 1;
		}
		else if (Global_68319.f_554 >= 68)
		{
			Global_68319.f_553 = 0;
			iLocal_400 = 0;
		}
	}
	else
	{
		iLocal_400 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_866)
	{
		iVar1 = iLocal_867[iVar0];
		if (func_57(&Local_674, iVar1))
		{
			func_370(&Local_695, iVar1);
			if ((Local_695.f_69 && Local_402.f_3 == 0) || iVar1 == 14)
			{
				uLocal_941[iVar1] = unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Local_695.f_55, 0);
			}
			else
			{
				uLocal_941[iVar1] = unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Local_674, 0);
			}
			if (func_369())
			{
				func_368(iVar1);
				func_366(iVar1);
				func_365(iVar1);
				func_364(iVar1);
				func_362(iVar1);
				func_361(iVar1);
				func_360(iVar1);
				func_334(iVar1);
				if (unk_0xF426A5DE932B3BEE(uLocal_48[iVar1], 2))
				{
					if (Global_68319.f_553)
					{
						iLocal_400 = 0;
					}
					func_375(iVar1);
				}
			}
			else
			{
				func_333(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_866;
	iLocal_866 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_936)
	{
		iLocal_936[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0xF426A5DE932B3BEE(uLocal_48[iLocal_867[iVar0]], 2))
		{
			func_375(iLocal_867[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_940 != -1)
	{
		func_375(iLocal_940);
		iLocal_940 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_375(iLocal_47);
	if (iLocal_1014)
	{
		func_375(21);
		func_375(22);
		func_375(23);
		iLocal_1014 = 0;
		bLocal_1015 = true;
	}
	else if (bLocal_1015)
	{
		bLocal_1015 = false;
	}
	if (Global_68319.f_553)
	{
		Global_68319.f_554++;
	}
}

void func_333(int iParam0)
{
	if (iLocal_117[iParam0] != 0)
	{
		unk_0x0049DE0B34213B12(iLocal_117[iParam0]);
		iLocal_117[iParam0] = 0;
	}
}

void func_334(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	struct<60> Var11;
	int iVar89;
	bool bVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	struct<3> Var94;
	struct<3> Var100;
	int iVar106;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!unk_0xF426A5DE932B3BEE(uLocal_48[iParam0], 2))
	{
		func_333(iParam0);
	}
	unk_0xF17F4B0641AB2DE1(&(uLocal_48[iParam0]), 2);
	if (unk_0xF426A5DE932B3BEE(uLocal_48[iParam0], 1))
	{
		fVar2 = unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Local_186[iParam0 /*3*/], 1);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 23))
	{
		if (Local_674.f_4 == joaat("blimp"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0xF426A5DE932B3BEE(Local_674.f_9, 19) || unk_0xF426A5DE932B3BEE(Local_674.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 25) && (((iLocal_672 == 0 && Local_402.f_0 == 21) || (iLocal_672 == 0 && Local_402.f_0 == 22)) || (iLocal_672 == 0 && Local_402.f_0 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0xD2CFFE76B625AE55(Global_68319.f_139[iParam0]))
	{
		if (unk_0x0B4DDB992C7BCF57(Global_68319.f_139[iParam0], 0))
		{
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				if (iParam0 == 24)
				{
					uVar3 = unk_0x9297C590C99228DC(Global_68319.f_139[iParam0], -1);
					if (!unk_0xD2CFFE76B625AE55(uVar3))
					{
						iVar3 = unk_0x8704B0F200BD412D(Global_68319.f_139[iParam0], -1);
					}
					iVar4 = func_296(iVar3);
					if (iVar4 != Global_101154.f_18807.f_5591)
					{
						if (func_24(iVar4))
						{
							func_359("Updating last character to use vehicle gen", iVar4);
							Global_101154.f_18807.f_5591 = iVar4;
						}
					}
				}
				if (!unk_0xFF65D7BC656BA68E(Global_68319.f_139[iParam0], 1))
				{
					func_358("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0])) && unk_0x946C63BD9EF05437(Global_68319.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xC2677E1BE02B1E79(Global_68319.f_139[iParam0], true);
					}
					Global_68319.f_139[iParam0] = 0;
					Global_68319[iParam0] = 1;
					func_357(iParam0);
					return;
				}
				if (((unk_0xF426A5DE932B3BEE(uLocal_48[iParam0], 0) && !unk_0xF426A5DE932B3BEE(Local_674.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_358("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0])) && unk_0x946C63BD9EF05437(Global_68319.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xC2677E1BE02B1E79(Global_68319.f_139[iParam0], true);
					}
					unk_0x9846B4D56971A958(&(Global_68319.f_139[iParam0]));
					Global_68319.f_139[iParam0] = 0;
					Global_68319[iParam0] = 1;
					func_357(iParam0);
					return;
				}
				if ((!unk_0xF426A5DE932B3BEE(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (unk_0x77F1B7F6C32990D6(Global_68319.f_139[iParam0], unk_0x27D769C59BC9D030(), 1))
					{
						func_358("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0])) && unk_0x946C63BD9EF05437(Global_68319.f_139[iParam0]) != joaat("monster"))
						{
							unk_0xC2677E1BE02B1E79(Global_68319.f_139[iParam0], true);
						}
						unk_0x9846B4D56971A958(&(Global_68319.f_139[iParam0]));
						Global_68319.f_139[iParam0] = 0;
						Global_68319[iParam0] = 1;
						func_357(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((unk_0xF426A5DE932B3BEE(uLocal_48[iParam0], 1) && unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(Global_68319.f_139[iParam0], 1), Local_186[iParam0 /*3*/], 1) > fVar5) || (!unk_0xF426A5DE932B3BEE(uLocal_48[iParam0], 1) && unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(Global_68319.f_139[iParam0], 1), Local_674, 1) > fVar5))
				{
					func_358("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0])) && unk_0x946C63BD9EF05437(Global_68319.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xC2677E1BE02B1E79(Global_68319.f_139[iParam0], true);
					}
					unk_0x9846B4D56971A958(&(Global_68319.f_139[iParam0]));
					Global_68319.f_139[iParam0] = 0;
					Global_68319[iParam0] = 1;
					func_357(iParam0);
					return;
				}
				if (!func_63(iParam0, 0))
				{
					func_358("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0])) && unk_0x946C63BD9EF05437(Global_68319.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xC2677E1BE02B1E79(Global_68319.f_139[iParam0], true);
					}
					unk_0x9846B4D56971A958(&(Global_68319.f_139[iParam0]));
					Global_68319.f_139[iParam0] = 0;
					Global_68319[iParam0] = 1;
					func_357(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_43(Global_68319.f_139[iParam0], iLocal_672, 1) && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0]))
					{
						func_358("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0x946C63BD9EF05437(Global_68319.f_139[iParam0]) != joaat("monster"))
						{
							unk_0xC2677E1BE02B1E79(Global_68319.f_139[iParam0], true);
						}
						Global_68319.f_139[iParam0] = 0;
						Global_68319[iParam0] = 1;
						func_357(iParam0);
						return;
					}
				}
				if (uLocal_941[iParam0] > fVar0 && (!unk_0xF426A5DE932B3BEE(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_46();
						iVar7 = Global_101154.f_18807.f_4801;
						func_355(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_270(iVar6, iVar7))
						{
							if ((!func_59(Global_68319.f_139[iParam0]) && !func_58(Global_68319.f_139[iParam0])) && unk_0x946C63BD9EF05437(Global_68319.f_139[iParam0]) != joaat("monster"))
							{
								unk_0xC2677E1BE02B1E79(Global_68319.f_139[iParam0], true);
							}
							func_30(Global_68319.f_139[iParam0], Global_101154.f_18807.f_5591);
							Global_68319[iParam0] = 1;
							func_357(iParam0);
						}
						else if (func_35(Global_68319.f_139[iParam0]))
						{
							func_31(Global_68319.f_139[iParam0], &Global_2444471);
							Global_2444470 = Global_101154.f_18807.f_5591;
							iLocal_1029 = Global_68319.f_139[iParam0];
						}
					}
					func_358("No longer needed: Player out for range");
					unk_0x9846B4D56971A958(&(Global_68319.f_139[iParam0]));
					unk_0xEFA71310CAEBAE1F(Local_674, 3f, 0, 0, 0, 0);
					unk_0xC972AA2C9F94741D(Local_674, 3f, 0, 0, 0, 0, 0);
					Global_68319.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
					{
						Global_68319.f_584 = { Local_674 };
						Global_68319.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 30))
				{
					if (!unk_0xF426A5DE932B3BEE(Local_674.f_9, 31))
					{
						if (!unk_0xF6E7E32D0D604675(Global_68319.f_139[iParam0]) && !unk_0xBF99E4112970270F(Global_68319.f_139[iParam0]))
						{
							Var8 = { unk_0xA8CFDE65C45F813B(Global_68319.f_139[iParam0], 1) };
							if (Var8.f_2 >= func_354(iParam0))
							{
								unk_0x0C23D324D7619A77(Global_68319.f_139[iParam0], 1);
								unk_0x26545538B51562AD(&(Local_674.f_9), 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_68319.f_139[iParam0] = 0;
	}
	if (unk_0xD2CFFE76B625AE55(Global_68319.f_139[iParam0]))
	{
		func_358("No longer needed: Vehicle not driveable");
		unk_0x9846B4D56971A958(&(Global_68319.f_139[iParam0]));
		Global_68319.f_139[iParam0] = 0;
		Global_68319[iParam0] = 1;
		func_357(iParam0);
		return;
	}
	if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		return;
	}
	if (Global_69226 == iParam0)
	{
		func_358("Processing a vehgen vehicle handover request.");
		if (unk_0xD2CFFE76B625AE55(Global_69225) && unk_0x0B4DDB992C7BCF57(Global_69225, 0))
		{
			if (unk_0xD2CFFE76B625AE55(Global_68319.f_139[iParam0]) && unk_0x0B4DDB992C7BCF57(Global_68319.f_139[iParam0], 0))
			{
				if (Global_68319.f_139[iParam0] == Global_69225)
				{
					func_358("Vehicle to be handed over is the same vehicle.");
					Global_69226 = -1;
					Global_69225 = 0;
					return;
				}
				else
				{
					func_358("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_59(Global_68319.f_139[iParam0])) && !func_58(Global_68319.f_139[iParam0])) && unk_0x946C63BD9EF05437(Global_68319.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xC2677E1BE02B1E79(Global_68319.f_139[iParam0], true);
					}
					unk_0x9846B4D56971A958(&(Global_68319.f_139[iParam0]));
					Global_68319.f_139[iParam0] = 0;
				}
			}
			Global_68319.f_139[iParam0] = Global_69225;
			Global_68319[iParam0] = 1;
			unk_0xF17F4B0641AB2DE1(&(uLocal_48[iParam0]), 0);
			unk_0x26545538B51562AD(&(uLocal_48[iParam0]), 1);
			unk_0xF17F4B0641AB2DE1(&(uLocal_48[iParam0]), 3);
			Local_186[iParam0 /*3*/] = { unk_0xA8CFDE65C45F813B(Global_69225, 1) };
			Global_69226 = -1;
			if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 10))
			{
				Var11.f_9 = 49;
				Var11.f_59 = 2;
				func_31(Global_69225, &Var11);
				if (Global_69227)
				{
					func_107(iParam0, &Var11, unk_0xA8CFDE65C45F813B(Global_69225, 1), unk_0x4D6B971C8AEE130C(Global_69225), func_42(Global_69225));
				}
				else
				{
					func_107(iParam0, &Var11, Global_101154.f_18807.f_1864[Local_674.f_14 /*3*/], Global_101154.f_18807.f_1934[Local_674.f_14], func_42(Global_69225));
				}
				Global_68319.f_139[iParam0] = Global_69225;
				Global_68319.f_484[iParam0] = Global_68319.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar89 = func_371();
				if (func_24(iVar89))
				{
					func_358("Players stored switch vehicle cleared for prep getaway.");
					Global_91046[iVar89] = 0;
				}
			}
			unk_0xAF3355298F537BB0(Global_68319.f_139[iParam0], 1, 1);
			if (iParam0 == 24)
			{
				unk_0xC2677E1BE02B1E79(Global_68319.f_139[iParam0], false);
			}
			Global_69225 = 0;
			if (Global_2444471.f_66 != 0)
			{
				func_192(&Global_2444471, Global_2444470);
				Global_2444471.f_66 = 0;
			}
			return;
		}
		if (Global_2444471.f_66 != 0)
		{
			func_192(&Global_2444471, Global_2444470);
			Global_2444471.f_66 = 0;
		}
		func_358("Vehicle to be handed over doesn't exist.");
		Global_69226 = -1;
		Global_69225 = 0;
	}
	if (Global_68319[iParam0])
	{
		if (uLocal_941[iParam0] >= fVar0)
		{
			Global_68319[iParam0] = 0;
			func_358("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_68319.f_584 = { 0f, 0f, 0f };
			Global_68319.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar90 = false;
	if (uLocal_941[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_101154.f_18807.f_1958[Local_674.f_14] != 0) && Global_101154.f_18807.f_1958[Local_674.f_14] > 3) && Local_674.f_4 != 0) && func_63(iParam0, 0)) && func_37(Local_674.f_4, 0))
		{
			iVar91 = func_46();
			iVar92 = Global_101154.f_18807.f_4801;
			func_355(&iVar92, 0, 0, 17, 0, 0, 0);
			if (func_270(iVar91, iVar92))
			{
				func_192(&(Global_101154.f_18807.f_69[Local_674.f_14 /*78*/]), Global_101154.f_18807.f_5591);
				func_357(iParam0);
				Global_68319[iParam0] = 1;
				func_358("Cannot be created: Vehicle ready for impound");
				Global_2444471.f_66 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			bVar90 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
	{
		Global_68319.f_584 = { 0f, 0f, 0f };
		Global_68319.f_587 = { 0f, 0f, 0f };
	}
	if (Local_674.f_4 == 0)
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Dummy model");
		return;
	}
	if (!func_37(Local_674.f_4, 0))
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_63(iParam0, 0))
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 14) && !func_63(iParam0, 5))
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_353() && func_352(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_673)
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 10))
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[iParam0]))
		{
			Global_68319[iParam0] = 1;
			func_358("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_68319.f_484[iParam0] = 0;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 6))
	{
		if (func_351(Local_674.f_4, -1))
		{
			Global_68319[iParam0] = 1;
			func_358("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_350(Local_674.f_4, -1))
		{
			Global_68319[iParam0] = 1;
			func_358("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 29))
	{
		if (Local_402.f_3 == 0)
		{
			return;
		}
	}
	if (func_349(iParam0))
	{
		Global_68319[iParam0] = 1;
		func_358("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0x5D293E404CA20AA5() && unk_0x472A7A9D6102404C() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_68319[iParam0] = 1;
			func_358("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar93 = 0;
	if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 19))
	{
		iVar93 = 2;
	}
	else if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 20))
	{
		iVar93 = 1;
	}
	if ((iParam0 == 24 && Global_101154.f_18807.f_1958[Local_674.f_14] > 0) && Global_101154.f_18807.f_1958[Local_674.f_14] <= 3)
	{
		if (unk_0x6CCC9ABA9456E815(Local_674.f_4))
		{
			iVar93 = 2;
			Local_674.f_12 = (Global_101154.f_18807.f_1958[Local_674.f_14] - 1);
		}
		else if (unk_0xA8059F869DFB2747(Local_674.f_4))
		{
			iVar93 = 1;
			Local_674.f_12 = (Global_101154.f_18807.f_1958[Local_674.f_14] - 1);
		}
	}
	if (iVar93 != 0)
	{
		if (func_348(Local_674.f_12, iVar93, Local_674, -1f))
		{
			Global_68319[iParam0] = 1;
			func_358("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_377(iParam0, 0);
			}
			return;
		}
		if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 19) || unk_0xF426A5DE932B3BEE(Local_674.f_9, 20))
		{
			if (iVar93 == 2)
			{
				if (Global_88990[Local_674.f_12 /*3*/][1] != -1 && (unk_0xA0F74982C6AAA9D4() - Global_88990[Local_674.f_12 /*3*/][1]) < unk_0x78DA396756A9904E() * 180)
				{
					Global_68319[iParam0] = 1;
					func_358("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var94, "...", 24);
					StringIntConCat(&Var94, ((unk_0x78DA396756A9904E() * 180 - (unk_0xA0F74982C6AAA9D4() - Global_88990[Local_674.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var94, " seconds", 24);
					func_358(&Var94);
					return;
				}
			}
			else if (iVar93 == 1)
			{
				if (Global_88990[Local_674.f_12 /*3*/][0] != -1 && (unk_0xA0F74982C6AAA9D4() - Global_88990[Local_674.f_12 /*3*/][0]) < unk_0x78DA396756A9904E() * 180)
				{
					Global_68319[iParam0] = 1;
					func_358("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var100, "...", 24);
					StringIntConCat(&Var100, ((unk_0x78DA396756A9904E() * 180 - (unk_0xA0F74982C6AAA9D4() - Global_88990[Local_674.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var100, " seconds", 24);
					func_358(&Var100);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
	{
		Global_68319.f_584 = { Local_674 };
	}
	if (bVar90)
	{
		return;
	}
	if (iVar93 != 0)
	{
		iLocal_117[iParam0] = func_22(Local_674.f_12, iVar93);
		unk_0x97C59C4E8349D15F(iLocal_117[iParam0]);
		unk_0x26545538B51562AD(&(uLocal_48[iParam0]), 2);
		if (!unk_0x875098323FCA8FE6(iLocal_117[iParam0]))
		{
			func_358("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_347(iLocal_117[iParam0], Local_674, 1))
		{
			func_358("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0xEFA71310CAEBAE1F(Local_674, 3f, 0, 0, 0, 0);
		unk_0xC972AA2C9F94741D(Local_674, 3f, 0, 0, 0, 0, 0);
		if (iVar93 == 2)
		{
			func_342(&(Global_68319.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 2);
		}
		else if (iVar93 == 1)
		{
			func_342(&(Global_68319.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 1);
		}
		else
		{
			Global_68319[iParam0] = 1;
			func_358("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0x97C59C4E8349D15F(Local_674.f_4);
		iLocal_117[iParam0] = Local_674.f_4;
		unk_0x26545538B51562AD(&(uLocal_48[iParam0]), 2);
		if (!unk_0x875098323FCA8FE6(Local_674.f_4))
		{
			func_358("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_347(Local_674.f_4, Local_674, 1))
		{
			func_358("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0xEFA71310CAEBAE1F(Local_674, 3f, 0, 0, 0, 0);
		unk_0xC972AA2C9F94741D(Local_674, 3f, 0, 0, 0, 0, 0);
		if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 23))
		{
			unk_0xDE7AAE1778571748(Local_674);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_674.f_4 == joaat("submersible2"))
			{
				Local_674.f_2 = -3f;
			}
		}
		Global_68319.f_139[iParam0] = unk_0x4E76306EE6AE7596(Local_674.f_4, Local_674, Local_674.f_3, 1, 1);
		if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 10))
		{
			if (unk_0xEC6E5897335290DD(Local_674.f_4))
			{
				unk_0x26545538B51562AD(&(Global_101154.f_18807.f_69[Local_674.f_14 /*78*/].f_77), 22);
			}
			if (unk_0xF426A5DE932B3BEE(Global_101154.f_18807.f_69[Local_674.f_14 /*78*/].f_77, 14))
			{
				func_31(Global_68319.f_139[iParam0], &Local_776);
				func_341(Local_776.f_77, &(Global_101154.f_18807.f_69[Local_674.f_14 /*78*/].f_77), Local_674.f_4);
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_18807.f_69[Local_674.f_14 /*78*/].f_77), 14);
			}
			func_283(Global_68319.f_139[iParam0], &(Global_101154.f_18807.f_69[Local_674.f_14 /*78*/]), 0, 1);
			Global_68319.f_484[iParam0] = Global_68319.f_139[iParam0];
		}
		else
		{
			if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 9))
			{
				unk_0xFD2475756036347D(Global_68319.f_139[iParam0], Local_674.f_10, Local_674.f_11);
			}
			if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 8))
			{
				unk_0x37B592C0F74990D2(Global_68319.f_139[iParam0], 2);
				unk_0x25992F7526B31C35(Global_68319.f_139[iParam0], 0);
				unk_0x69E072E2BFA00412(Global_68319.f_139[iParam0], 0);
				unk_0x86F61FD03CB240C0(Global_68319.f_139[iParam0], 0);
				unk_0xB537FCB837C7D735(Global_68319.f_139[iParam0], 0);
				unk_0x185480333425A565(Global_68319.f_139[iParam0], 0);
				unk_0x5140F895BFA54316(Global_68319.f_139[iParam0], false);
				unk_0xDC994C828DF12354(Global_68319.f_139[iParam0], 1);
				unk_0xA8CA82EB31D1626F(Global_68319.f_139[iParam0], 1);
			}
		}
	}
	if (unk_0xD2CFFE76B625AE55(Global_68319.f_139[iParam0]))
	{
		func_340("Created - Coords: ", Local_674);
		func_339("Created - Dist From Player:", uLocal_941[iParam0]);
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_68319.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_674.f_4)
		{
			case joaat("miljet"):
				unk_0xFD2475756036347D(Global_68319.f_139[iParam0], 121, 21);
				unk_0x85E88CC5C37A1A11(Global_68319.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				unk_0xFD2475756036347D(Global_68319.f_139[iParam0], 122, 89);
				unk_0x85E88CC5C37A1A11(Global_68319.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0xFD2475756036347D(Global_68319.f_139[iParam0], 0, 0);
				unk_0x85E88CC5C37A1A11(Global_68319.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				unk_0xFD2475756036347D(Global_68319.f_139[iParam0], 131, 132);
				unk_0x85E88CC5C37A1A11(Global_68319.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0xFD2475756036347D(Global_68319.f_139[iParam0], 159, 0);
				unk_0x85E88CC5C37A1A11(Global_68319.f_139[iParam0], 160, 156);
				break;
		}
		if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 22))
		{
			unk_0x0C23D324D7619A77(Global_68319.f_139[iParam0], 1);
		}
		if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 30))
		{
			unk_0xF17F4B0641AB2DE1(&(Local_674.f_9), 31);
		}
		if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 26))
		{
			unk_0x37B592C0F74990D2(Global_68319.f_139[iParam0], 7);
			unk_0xFF67B6EC799C2F15(Global_68319.f_139[iParam0], 1);
		}
		func_338(Global_68319.f_139[iParam0], iParam0);
		if (!unk_0xF426A5DE932B3BEE(Local_674.f_9, 29) && !unk_0xF426A5DE932B3BEE(Local_674.f_9, 30))
		{
			unk_0xFA3ED0FFF3FD8F34(Global_68319.f_139[iParam0]);
		}
		unk_0x9B3E806EC535DBC3(Global_68319.f_139[iParam0], 0f);
		unk_0x77E24407E71C2B27(Global_68319.f_139[iParam0], 1);
		unk_0xC2677E1BE02B1E79(Global_68319.f_139[iParam0], unk_0xF426A5DE932B3BEE(Local_674.f_9, 5));
	}
	unk_0xF17F4B0641AB2DE1(&(uLocal_48[iParam0]), 0);
	unk_0xF17F4B0641AB2DE1(&(uLocal_48[iParam0]), 1);
	Global_68319[iParam0] = 1;
	if (iVar93 != 0)
	{
		Global_68319.f_69[iParam0] = 1;
	}
	iVar106 = func_335(458, -1, -1);
	if (iVar106 != 0 && iVar106 == iParam0)
	{
		iLocal_1028 = Global_68319.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2444471.f_66 = 0;
	}
}

int func_335(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_88();
	}
	iVar0 = 0;
	iVar1 = func_337(iParam0, iParam1);
	uVar2 = func_336(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x0B086D355E92A814(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_336(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xCE0666B95FEBDB76((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xCE0666B95FEBDB76((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xCE0666B95FEBDB76((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xCE0666B95FEBDB76((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xCE0666B95FEBDB76((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xCE0666B95FEBDB76((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xCE0666B95FEBDB76((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xCE0666B95FEBDB76((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xCE0666B95FEBDB76((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xCE0666B95FEBDB76((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xCE0666B95FEBDB76((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xCE0666B95FEBDB76((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xCE0666B95FEBDB76((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_337(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_88();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xE1C2CBC9B45C3225((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xE1C2CBC9B45C3225((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

void func_338(int iParam0, int iParam1)
{
	if (unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				unk_0x46124CE35D41A91E(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				unk_0x46124CE35D41A91E(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				unk_0x46124CE35D41A91E(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				unk_0x10CCA34E93B40732(iParam0, 6, false);
				unk_0x10CCA34E93B40732(iParam0, 1, true);
				break;
			}
	}
}

void func_339(char* sParam0, float fParam1)
{
	if (!unk_0x75CB9E30BA492FF0(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_340(char* sParam0, float fParam1, var uParam2, var uParam3)
{
	if (!unk_0x75CB9E30BA492FF0(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_341(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0xF17F4B0641AB2DE1(&iVar0, 0);
			unk_0xF17F4B0641AB2DE1(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			unk_0xF17F4B0641AB2DE1(&iVar0, 0);
			unk_0xF17F4B0641AB2DE1(&iVar0, 1);
			unk_0xF17F4B0641AB2DE1(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			unk_0xF17F4B0641AB2DE1(&iVar0, 0);
			unk_0xF17F4B0641AB2DE1(&iVar0, 1);
			unk_0xF17F4B0641AB2DE1(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			unk_0xF17F4B0641AB2DE1(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			unk_0xF17F4B0641AB2DE1(&iVar0, 0);
			unk_0xF17F4B0641AB2DE1(&iVar0, 1);
			unk_0xF17F4B0641AB2DE1(&iVar0, 2);
			break;
		
		case joaat("chino"):
			unk_0xF17F4B0641AB2DE1(&iVar0, 0);
			unk_0xF17F4B0641AB2DE1(&iVar0, 1);
			unk_0xF17F4B0641AB2DE1(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_342(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;
	
	if (func_24(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_23(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0xD2CFFE76B625AE55(*iParam0))
		{
			if (unk_0x946C63BD9EF05437(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_101154.f_1826.f_539.f_3544) && Global_101154.f_7775.f_99.f_58[131])
		{
			Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x97C59C4E8349D15F(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x875098323FCA8FE6(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x4E76306EE6AE7596(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/], Param2, uParam5, 0, 0);
				unk_0xFA3ED0FFF3FD8F34(*iParam0);
				unk_0x8B93994E73DF8345(*iParam0, 0);
				unk_0xC2677E1BE02B1E79(*iParam0, false);
				unk_0x1B7FCBF5F0A9F480(*iParam0, 1);
				unk_0x51F79AC13D2AD286(*iParam0, 1250);
				unk_0x38B4190AFCA07B12(*iParam0, 1250f);
				unk_0x3926A2D202D1C474(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xFD2475756036347D(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_5, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x85E88CC5C37A1A11(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_7, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x9B3E806EC535DBC3(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0x10CCA34E93B40732(*iParam0, iVar103 + 1, !Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x9ED6F10213DB8F66(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_346(&uVar1, &uVar0))
				{
					unk_0x363CB1E011E73B79(*iParam0, &uVar1);
					unk_0x97344EBF9AD0F17F(*iParam0, uVar0);
				}
				else
				{
					unk_0x363CB1E011E73B79(*iParam0, &(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 < unk_0xDDE375984608ED63())
					{
						unk_0x97344EBF9AD0F17F(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x7D42D99B3885D48F(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_84, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_85, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x5140F895BFA54316(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x15C84F66C4F9715B(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x7D1AE670C52C839A(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_93, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_94, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x1FD802F9308DD553(*iParam0, 2, unk_0xF426A5DE932B3BEE(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x1FD802F9308DD553(*iParam0, 3, unk_0xF426A5DE932B3BEE(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x1FD802F9308DD553(*iParam0, 0, unk_0xF426A5DE932B3BEE(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x1FD802F9308DD553(*iParam0, 1, unk_0xF426A5DE932B3BEE(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xC14CF45D822A1BEF(*iParam0) > 1 && Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x22302C6C9DC94642(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x9D4118D82F876A81(unk_0x946C63BD9EF05437(*iParam0)))
					{
						if (unk_0x6CCC9ABA9456E815(unk_0x946C63BD9EF05437(*iParam0)))
						{
							if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xDB859F5026BDBB0E(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xDB859F5026BDBB0E(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_284(iParam0, &(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x653D5FF464380C4A(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x946C63BD9EF05437(*iParam0) == joaat("bodhi2"))
					{
						func_344(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x0049DE0B34213B12(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
				}
				func_343(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x97C59C4E8349D15F(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x875098323FCA8FE6(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x4E76306EE6AE7596(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0);
				unk_0xFA3ED0FFF3FD8F34(*iParam0);
				unk_0x8B93994E73DF8345(*iParam0, 0);
				unk_0xC2677E1BE02B1E79(*iParam0, false);
				unk_0x1B7FCBF5F0A9F480(*iParam0, 1);
				unk_0x51F79AC13D2AD286(*iParam0, 1250);
				unk_0x38B4190AFCA07B12(*iParam0, 1250f);
				unk_0x3926A2D202D1C474(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xFD2475756036347D(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_5, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x85E88CC5C37A1A11(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_7, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x9B3E806EC535DBC3(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0x10CCA34E93B40732(*iParam0, iVar104 + 1, !Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x9ED6F10213DB8F66(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_346(&uVar1, &uVar0))
				{
					unk_0x363CB1E011E73B79(*iParam0, &uVar1);
					unk_0x97344EBF9AD0F17F(*iParam0, uVar0);
				}
				else
				{
					unk_0x363CB1E011E73B79(*iParam0, &(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 < unk_0xDDE375984608ED63())
					{
						unk_0x97344EBF9AD0F17F(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x7D42D99B3885D48F(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_84, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_85, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x5140F895BFA54316(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x15C84F66C4F9715B(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x7D1AE670C52C839A(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_93, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_94, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x1FD802F9308DD553(*iParam0, 2, unk_0xF426A5DE932B3BEE(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x1FD802F9308DD553(*iParam0, 3, unk_0xF426A5DE932B3BEE(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x1FD802F9308DD553(*iParam0, 0, unk_0xF426A5DE932B3BEE(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x1FD802F9308DD553(*iParam0, 1, unk_0xF426A5DE932B3BEE(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xC14CF45D822A1BEF(*iParam0) > 1 && Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x22302C6C9DC94642(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x9D4118D82F876A81(unk_0x946C63BD9EF05437(*iParam0)))
					{
						if (unk_0x6CCC9ABA9456E815(unk_0x946C63BD9EF05437(*iParam0)))
						{
							if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xDB859F5026BDBB0E(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xDB859F5026BDBB0E(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_284(iParam0, &(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x653D5FF464380C4A(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x946C63BD9EF05437(*iParam0) == joaat("bodhi2"))
					{
						func_344(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x0049DE0B34213B12(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
				}
				func_343(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x97C59C4E8349D15F(Var5.f_0);
			if (unk_0x875098323FCA8FE6(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0x4E76306EE6AE7596(Var5.f_0, Param2, fParam5, 1, 1);
				unk_0xFA3ED0FFF3FD8F34(*iParam0);
				unk_0x8B93994E73DF8345(*iParam0, 0);
				unk_0xC2677E1BE02B1E79(*iParam0, false);
				unk_0x1B7FCBF5F0A9F480(*iParam0, 1);
				StringCopy(&cVar106, unk_0x9111F14F8ABAE773(*iParam0), 16);
				unk_0x51F79AC13D2AD286(*iParam0, 1250);
				unk_0x38B4190AFCA07B12(*iParam0, 1250f);
				unk_0x3926A2D202D1C474(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xFD2475756036347D(*iParam0, Var5.f_5, Var5.f_6);
				unk_0x85E88CC5C37A1A11(*iParam0, Var5.f_7, Var5.f_8);
				unk_0x9B3E806EC535DBC3(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0x10CCA34E93B40732(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x9ED6F10213DB8F66(*iParam0, Var5.f_24);
				}
				if (func_346(&uVar1, &uVar0))
				{
					unk_0x363CB1E011E73B79(*iParam0, &uVar1);
					unk_0x97344EBF9AD0F17F(*iParam0, uVar0);
				}
				else
				{
					unk_0x363CB1E011E73B79(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0xDDE375984608ED63())
					{
						unk_0x97344EBF9AD0F17F(*iParam0, Var5.f_26);
					}
				}
				unk_0x7D42D99B3885D48F(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0x5140F895BFA54316(*iParam0, Var5.f_88);
				unk_0x15C84F66C4F9715B(*iParam0, Var5.f_87);
				unk_0x7D1AE670C52C839A(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0x1FD802F9308DD553(*iParam0, 2, unk_0xF426A5DE932B3BEE(Var5.f_92, 28));
				unk_0x1FD802F9308DD553(*iParam0, 3, unk_0xF426A5DE932B3BEE(Var5.f_92, 29));
				unk_0x1FD802F9308DD553(*iParam0, 0, unk_0xF426A5DE932B3BEE(Var5.f_92, 30));
				unk_0x1FD802F9308DD553(*iParam0, 1, unk_0xF426A5DE932B3BEE(Var5.f_92, 31));
				if (unk_0xC14CF45D822A1BEF(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0x22302C6C9DC94642(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0x9D4118D82F876A81(unk_0x946C63BD9EF05437(*iParam0)))
					{
						if (unk_0x6CCC9ABA9456E815(unk_0x946C63BD9EF05437(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0xDB859F5026BDBB0E(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0xDB859F5026BDBB0E(*iParam0, Var5.f_90);
						}
					}
				}
				func_284(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x653D5FF464380C4A(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x946C63BD9EF05437(*iParam0) == joaat("bagger") && !Global_101154.f_7775.f_99.f_58[118])
					{
						unk_0x363CB1E011E73B79(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x946C63BD9EF05437(*iParam0) == joaat("bodhi2"))
					{
						func_344(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_101154.f_1826.f_539.f_3544) && Global_101154.f_7775.f_99.f_58[131]) && unk_0x946C63BD9EF05437(*iParam0) == joaat("tailgater"))
				{
					unk_0x406E9DA605D8FD2B(*iParam0, 6, 1, false);
					unk_0x406E9DA605D8FD2B(*iParam0, 14, 7, false);
					unk_0x406E9DA605D8FD2B(*iParam0, 11, 2, false);
					unk_0x406E9DA605D8FD2B(*iParam0, 2, 3, false);
					unk_0x406E9DA605D8FD2B(*iParam0, 7, 5, false);
					unk_0x406E9DA605D8FD2B(*iParam0, 0, 0, false);
					unk_0x406E9DA605D8FD2B(*iParam0, 3, 3, false);
					unk_0x406E9DA605D8FD2B(*iParam0, 13, 1, false);
					unk_0x406E9DA605D8FD2B(*iParam0, 4, 3, false);
					unk_0x406E9DA605D8FD2B(*iParam0, 12, 2, false);
					unk_0x31784B1E9A6BDD10(*iParam0, 22, true);
					unk_0xDB859F5026BDBB0E(*iParam0, 2);
					unk_0x406E9DA605D8FD2B(*iParam0, 23, 11, false);
					unk_0x15C84F66C4F9715B(*iParam0, 2);
					Global_101154.f_1826.f_539.f_3544 = 1;
					func_166(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x0049DE0B34213B12(Var5.f_0);
				}
				if (bVar105)
				{
					func_343(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_343(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xD2CFFE76B625AE55(Global_88942[iVar0]))
		{
			Global_88942[iVar0] = iParam0;
			Global_88952[iVar0] = iParam1;
			Global_88962[iVar0] = unk_0x946C63BD9EF05437(iParam0);
			if (unk_0xA8059F869DFB2747(Global_88962[iVar0]))
			{
				Global_88990[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88990[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_344(var uParam0)
{
	if (!func_345(*uParam0))
	{
		unk_0x10CCA34E93B40732(*uParam0, 5, !Global_101154.f_7775.f_99.f_58[119]);
	}
}

bool func_345(int iParam0)
{
	return unk_0x3D866A165E63B4FE(iParam0, 5);
}

int func_346(var uParam0, var uParam1)
{
	if (unk_0x0E063DDE8855EC52())
	{
	}
	else if (Global_101154.f_24643.f_261)
	{
		*uParam0 = { Global_101154.f_24643.f_267 };
		*uParam1 = Global_101154.f_24643.f_271;
		return 1;
	}
	return 0;
}

int func_347(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if ((iParam4 && unk_0x3934E959DB2478D3()) && unk_0xD32535FA4397160F(joaat("startup_positioning")) > 0)
	{
		func_358("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	unk_0x3DE83953A8E7C5D3(uParam0, &Var0, &Var3);
	fVar6 = unk_0x676D4CD42E0837CA(Var3, Var0, 1);
	if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), Param1, 1) < (fVar6 * 0.5f))
	{
		func_339("player is in vehicle bounds - fLength: ", fVar6);
		func_339("player is in vehicle bounds - fDistance: ", unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), Param1, 1));
		return 1;
	}
	return 0;
}

int func_348(int iParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	struct<82> Var1;
	int iVar99;
	
	if (!func_24(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar99 = 0;
	func_23(iParam0, &Var1, iParam1);
	iVar99 = Var1.f_0;
	if (iVar99 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]) && unk_0x0B4DDB992C7BCF57(Global_88942[iVar0], 0))
			{
				if (unk_0x946C63BD9EF05437(Global_88942[iVar0]) == iVar99 && Global_88952[iVar0] == iParam0)
				{
					if (fParam5 == -1f || unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(Global_88942[iVar0], 0), Param2, 1) <= fParam5)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_674.f_4 == joaat("frogger2"))
		{
			if (((func_351(Local_674.f_4, -1) || func_350(Local_674.f_4, -1)) || unk_0xD32535FA4397160F(joaat("exile2")) > 0) || !func_331(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((unk_0xD2CFFE76B625AE55(Global_68319.f_484[20]) && !unk_0x2006A8C1BA2AFE80(Global_68319.f_484[20], 0)) && unk_0x0B4DDB992C7BCF57(Global_68319.f_484[20], 0))
		{
			if (Local_674.f_4 == unk_0x946C63BD9EF05437(Global_68319.f_484[20]))
			{
				unk_0x923073D63782E037(Global_68319.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_674.f_10 && iVar1 == Local_674.f_11)
				{
					func_187(20);
				}
			}
		}
	}
	return 0;
}

int func_350(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = unk_0xE02F462DE06D185B(Local_674, 200f, iParam0, iVar0);
	if ((unk_0xD2CFFE76B625AE55(iVar1) && unk_0x0B4DDB992C7BCF57(iVar1, 0)) && unk_0x946C63BD9EF05437(iVar1) == iParam0)
	{
		if (iParam1 == -1 || unk_0xC3362AC1471926AA(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_351(int iParam0, int iParam1)
{
	var uVar0[50];
	int iVar51;
	int iVar52;
	
	iVar52 = unk_0xE3D50125FB4DA7C7(unk_0x27D769C59BC9D030(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52)
	{
		if ((unk_0xD2CFFE76B625AE55(uVar0[iVar51]) && unk_0x0B4DDB992C7BCF57(uVar0[iVar51], 0)) && unk_0x946C63BD9EF05437(uVar0[iVar51]) == iParam0)
		{
			if (iParam1 == -1 || unk_0xC3362AC1471926AA(uVar0[iVar51]) == iParam1)
			{
				return 1;
			}
		}
		iVar51++;
	}
	return 0;
}

int func_352(int iParam0)
{
	if (Global_35711 == 15)
	{
		return 0;
	}
	if (func_266(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_353()
{
	return Global_68319.f_138;
}

float func_354(int iParam0)
{
	switch (iParam0)
	{
		case 57:
			return -0.7f;
			break;
		
		case 63:
			return -0.8f;
			break;
	}
	return 0f;
}

void func_355(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_51(*uParam0);
	iVar1 = func_53(*uParam0);
	iVar2 = func_274(*uParam0);
	iVar3 = func_273(*uParam0);
	iVar4 = func_272(*uParam0);
	iVar5 = func_271(*uParam0);
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
	iVar6 = func_50(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_50(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_356(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_356(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_56(uParam0, iParam1);
	func_55(uParam0, iParam2);
	func_54(uParam0, iParam3);
	func_48(uParam0, iParam5);
	func_49(uParam0, iParam4);
	func_47(uParam0, iParam6);
}

void func_357(int iParam0)
{
	if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 13))
	{
		func_377(iParam0, 0);
	}
}

void func_358(char* sParam0)
{
	if (!unk_0x75CB9E30BA492FF0(sParam0))
	{
	}
}

void func_359(char* sParam0, int iParam1)
{
	if (!unk_0x75CB9E30BA492FF0(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_360(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		return;
	}
	bVar0 = false;
	iVar5 = -1;
	iVar6 = joaat("prop_forsale_dyn_01");
	switch (iParam0)
	{
		case 12:
		case 13:
			bVar0 = !func_63(iParam0, 5);
			Var1 = { -961.42f, -2794.47f, 12.96f };
			fVar4 = -209.22f;
			iVar5 = 0;
			iVar6 = joaat("prop_airport_sale_sign");
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_63(iParam0, 5);
			Var1 = { -827.93f, -1368.14f, 3.9982f };
			fVar4 = -68.75f;
			iVar5 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_63(iParam0, 5);
			bVar0 = true;
			Var1 = { -710.07f, -1414.31f, 4f };
			fVar4 = -41.25f;
			iVar5 = 2;
			break;
		
		case 21:
			bVar0 = !func_63(iParam0, 5);
			Var1 = { -66.21f, 77.76f, 70.51f };
			fVar4 = -27f;
			iVar5 = 3;
			break;
		
		case 22:
			bVar0 = !func_63(iParam0, 5);
			Var1 = { -76.02f, -1825.61f, 25.88f };
			fVar4 = -129.67f;
			iVar5 = 4;
			break;
		
		case 23:
			bVar0 = !func_63(iParam0, 5);
			Var1 = { -218.68f, -1165.76f, 21.99f };
			fVar4 = 89.95f;
			iVar5 = 5;
			break;
	}
	if (bVar0 && unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), Var1, 1) < 250f)
	{
		if (!unk_0xD2CFFE76B625AE55(uLocal_858[iVar5]))
		{
			unk_0x97C59C4E8349D15F(iVar6);
			iLocal_865 = 1;
			if (unk_0x875098323FCA8FE6(iVar6))
			{
				if (iLocal_865)
				{
					uLocal_858[iVar5] = unk_0x8FC46BABCF818990(iVar6, Var1, 0, 1, 0);
					unk_0x0359A241E2DD22AC(uLocal_858[iVar5], 0f, 0f, fVar4, 2, 1);
					unk_0xCD0F5594F1C6772F(uLocal_858[iVar5], 0);
					unk_0xA8CA82EB31D1626F(uLocal_858[iVar5], 1);
					unk_0x0049DE0B34213B12(iVar6);
					iLocal_865 = 0;
				}
			}
		}
	}
	else if (iVar5 != -1)
	{
		if ((unk_0xD2CFFE76B625AE55(uLocal_858[iVar5]) && !unk_0x4FB9EE3D0706477D(uLocal_858[iVar5])) && unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), Var1, 1) > 255f)
		{
			unk_0x7C0FE14555841C1E(&(uLocal_858[iVar5]));
			if (iLocal_865)
			{
				unk_0x0049DE0B34213B12(iVar6);
				iLocal_865 = 0;
			}
		}
	}
}

void func_361(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (func_63(iParam0, 0) && (!unk_0xF426A5DE932B3BEE(Local_674.f_9, 14) || func_63(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_68319.f_346[iParam0] != bVar0)
	{
		if (!func_20(Local_674.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_68319.f_346[iParam0])
				{
					unk_0x3CE75187603652E2(Global_68319.f_415[iParam0], 0);
				}
			}
			else if (!Global_68319.f_346[iParam0])
			{
				Global_68319.f_415[iParam0] = unk_0x84496C593C3C7F04(Local_674.f_15, Local_674.f_18, 0, 1, 1, 1);
			}
		}
		Global_68319.f_346[iParam0] = bVar0;
	}
}

void func_362(int iParam0)
{
	int iVar0;
	
	if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 15))
	{
		if (func_63(iParam0, 0) && !func_63(iParam0, 5))
		{
			iVar0 = 145;
			if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 16))
			{
				iVar0 = func_363(9);
			}
			else if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 18))
			{
				iVar0 = func_363(4);
			}
			if (iVar0 == Local_674.f_12)
			{
				func_235(iParam0, 5, 1);
			}
		}
	}
}

int func_363(int iParam0)
{
	return Global_101154.f_29429[iParam0 /*4*/];
}

void func_364(int iParam0)
{
	if (func_63(iParam0, 0) && !func_63(iParam0, 3))
	{
		if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 4))
		{
			func_235(iParam0, 3, 1);
		}
		else
		{
			func_235(iParam0, 3, 1);
		}
	}
}

void func_365(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_63(iParam0, 0) && bLocal_673)
	{
		if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 0) || (unk_0xF426A5DE932B3BEE(Local_674.f_9, 2) && !func_63(iParam0, 2)))
		{
			if ((!unk_0xF426A5DE932B3BEE(Local_674.f_9, 21) || (((((((!func_26(0) && !func_26(3)) && !func_26(2)) && !func_26(4)) && !func_26(9)) && !func_26(10)) && !func_26(13)) && !func_26(14))) && ((unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) == 0 || func_63(iParam0, 5)) || !unk_0xF426A5DE932B3BEE(Local_674.f_9, 28)))
			{
				bVar0 = false;
				if (!unk_0x7B4654D62B7E0E9E(Global_68319.f_208[iParam0]))
				{
					if (func_331(0))
					{
						if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 14) && !func_63(iParam0, 5))
						{
							Global_68319.f_208[iParam0] = unk_0x43B8950858CAD66F(Local_695.f_55);
							if (Local_695.f_58 != -1)
							{
								unk_0x216986E3E3E543F2(Global_68319.f_208[iParam0], Local_695.f_58);
								if (!unk_0x75CB9E30BA492FF0(&(Local_695.f_59)))
								{
									unk_0xC5B67A5E18AF2B72(Global_68319.f_208[iParam0], &(Local_695.f_59));
								}
							}
						}
						else if (func_63(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_68319.f_208[iParam0] = unk_0x43B8950858CAD66F(Local_695.f_55);
							if (Local_674.f_13 != -1)
							{
								unk_0x216986E3E3E543F2(Global_68319.f_208[iParam0], Local_674.f_13);
								if (!unk_0x75CB9E30BA492FF0(&(Local_695.f_59)))
								{
									unk_0xC5B67A5E18AF2B72(Global_68319.f_208[iParam0], &(Local_695.f_59));
								}
								if (Local_674.f_12 == 0)
								{
									iVar1 = 42;
								}
								else if (Local_674.f_12 == 1)
								{
									iVar1 = 43;
								}
								else if (Local_674.f_12 == 2)
								{
									iVar1 = 44;
								}
								unk_0x8D910E607F73E53D(Global_68319.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_68319.f_208[iParam0] = unk_0x43B8950858CAD66F(Local_674);
							if (Local_674.f_13 != -1)
							{
								unk_0x216986E3E3E543F2(Global_68319.f_208[iParam0], Local_674.f_13);
								if (!unk_0x75CB9E30BA492FF0(&(Local_695.f_59)))
								{
									unk_0xC5B67A5E18AF2B72(Global_68319.f_208[iParam0], &(Local_695.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_674.f_12 == 0)
									{
										iVar2 = 42;
									}
									else if (Local_674.f_12 == 1)
									{
										iVar2 = 43;
									}
									else if (Local_674.f_12 == 2)
									{
										iVar2 = 44;
									}
									unk_0x8D910E607F73E53D(Global_68319.f_208[iParam0], iVar2);
								}
							}
						}
						unk_0xBFAFDBA74467F7B4(Global_68319.f_208[iParam0], !unk_0xF426A5DE932B3BEE(Local_674.f_9, 1));
						unk_0xCB3AA991DE0DE3A6(Global_68319.f_208[iParam0], 0);
						unk_0x1FDCAFA848ABB8FA(Global_68319.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0x7B4654D62B7E0E9E(Global_68319.f_208[iParam0]))
		{
			unk_0x9403D0F4C7711241(&(Global_68319.f_208[iParam0]));
		}
	}
}

void func_366(int iParam0)
{
	if (func_63(iParam0, 0) && !func_63(iParam0, 1))
	{
		if (func_63(iParam0, 4))
		{
			if (unk_0xF426A5DE932B3BEE(Local_674.f_9, 3))
			{
				func_367(&(Local_674.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_235(iParam0, 1, 1);
			}
			else
			{
				func_235(iParam0, 1, 1);
			}
		}
	}
}

void func_367(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_195(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_368(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xF426A5DE932B3BEE(Local_674.f_9, 7) || Local_674.f_12 == iLocal_672)
	{
		bLocal_673 = true;
	}
	else
	{
		bLocal_673 = false;
	}
	if (func_26(14))
	{
		bLocal_673 = false;
	}
	if ((bLocal_673 && !unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030())) && unk_0xF426A5DE932B3BEE(Local_674.f_9, 14))
	{
		if (Local_402.f_2 == 0 && Local_402.f_3 == 0)
		{
			if (uLocal_941[iParam0] < Local_402.f_1 || Local_402.f_0 == iParam0)
			{
				if (Local_402.f_0 != iParam0)
				{
					Local_402.f_8 = { Local_674 };
					Local_402.f_29 = { Local_695 };
					Local_402.f_0 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_68319.f_592)
					{
						Global_68319.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_402.f_6 = -1;
					if ((Local_402.f_0 == 12 || Local_402.f_0 == 13) || Local_402.f_0 == 14)
					{
						Local_402.f_6 = 0;
					}
					else if ((Local_402.f_0 == 15 || Local_402.f_0 == 16) || Local_402.f_0 == 17)
					{
						Local_402.f_6 = 1;
					}
					else if ((Local_402.f_0 == 18 || Local_402.f_0 == 19) || Local_402.f_0 == 20)
					{
						Local_402.f_6 = 2;
					}
					else if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
					{
						Local_402.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = func_124(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_68319.f_592)
							{
								switch (Local_402.f_6)
								{
									case 3:
										if (func_61(iVar2))
										{
											Global_68319.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (unk_0xDBFA5C79D9B3D622(iVar2))
										{
											Global_68319.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((unk_0xD3AE48D8EB7DCBE6(iVar2) || unk_0x7942D30C2A703CD1(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_68319.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_62(iVar2))
										{
											Global_68319.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_402.f_1 = uLocal_941[iParam0];
			}
		}
	}
	else if (Local_402.f_0 == iParam0)
	{
		Local_402.f_0 = -1;
		Local_402.f_1 = 99999.99f;
	}
	if (!unk_0xF426A5DE932B3BEE(uLocal_48[iParam0], 0))
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_139[iParam0]))
		{
			if (unk_0x0B4DDB992C7BCF57(Global_68319.f_139[iParam0], 0))
			{
				if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
				{
					if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_68319.f_139[iParam0], 0))
					{
						if (!unk_0xF426A5DE932B3BEE(uLocal_48[iParam0], 1) || unk_0xF426A5DE932B3BEE(uLocal_48[iParam0], 3))
						{
							unk_0x26545538B51562AD(&(uLocal_48[iParam0]), 0);
							func_235(iParam0, 4, 1);
							func_235(iParam0, 2, 1);
						}
					}
					else
					{
						unk_0x26545538B51562AD(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((unk_0xD2CFFE76B625AE55(Global_68319.f_484[iParam0]) && unk_0x0B4DDB992C7BCF57(Global_68319.f_484[iParam0], 0)) && unk_0x946C63BD9EF05437(Global_68319.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_1030)
			{
				if (unk_0x98CEDC9398D49BB8(Global_68319.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
				{
					unk_0x16FB058BC0769D90(Global_68319.f_484[iParam0], 0f);
					iLocal_1030 = 1;
				}
			}
			else if (!unk_0x98CEDC9398D49BB8(Global_68319.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
			{
				unk_0x16FB058BC0769D90(Global_68319.f_484[iParam0], 1f);
				iLocal_1030 = 0;
			}
		}
		else
		{
			iLocal_1030 = 0;
		}
	}
}

int func_369()
{
	return 1;
}

var func_370(var uParam0, int iParam1)
{
	uParam0->f_80 = 0;
	uParam0->f_69 = 0;
	StringCopy(&(uParam0->f_59), "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1652.454f, -3059.149f, 24.932f };
			uParam0->f_14.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_12 = 38.2303f;
			uParam0->f_14.f_6 = { -1651.547f, -3060.478f, 23.8077f };
			uParam0->f_14.f_6.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1650.431f, -3177.229f, 16.9898f };
			uParam0->f_29.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_12 = 38.2303f;
			uParam0->f_29.f_6 = { -1647.495f, -3173.728f, 16.6439f };
			uParam0->f_29.f_6.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_10 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_13 = 60.1875f;
			uParam0->f_48 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_51 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_54 = 60.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 13:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1184.2f, -3345f, 17.5f };
			uParam0->f_14.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_12 = 30.3f;
			uParam0->f_14.f_6 = { -1184.3f, -3345f, 16.6f };
			uParam0->f_14.f_6.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1272.6f, -3414.7f, 15.6f };
			uParam0->f_29.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_12 = 37.8f;
			uParam0->f_29.f_6 = { -1274f, -3414.4f, 15.6f };
			uParam0->f_29.f_6.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_10 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_13 = 66.1875f;
			uParam0->f_48 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_51 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_54 = 66.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 14:
			*uParam0 = { 1727.302f, 3291.453f, 39.61911f };
			uParam0->f_3 = { 1744.108f, 3296.215f, 44.17199f };
			uParam0->f_6 = 4.6875f;
			uParam0->f_44 = { 1737.53f, 3289.239f, 40.1448f };
			uParam0->f_47 = 14.8763f;
			uParam0->f_14 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_12 = 50f;
			uParam0->f_14.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_12 = 50f;
			uParam0->f_29.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_10 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_13 = 28.125f;
			uParam0->f_48 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_51 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME2", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 18:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -739.1531f, -1439.509f, 3.188024f };
			uParam0->f_10 = { -753.7792f, -1426.756f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -738f, -1440f, 6.3f };
			uParam0->f_14.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -738f, -1440f, 6f };
			uParam0->f_14.f_6.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -749.3f, -1425.7f, 5.9f };
			uParam0->f_29.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -749.9f, -1426f, 5.9f };
			uParam0->f_29.f_6.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -738.7791f, -1439.377f, 9.125515f };
			uParam0->f_51 = { -755.9111f, -1425.006f, 1.688014f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 19:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -755.6812f, -1459.234f, 3.188023f };
			uParam0->f_10 = { -770.7671f, -1446.867f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -754.6f, -1460.5f, 6.4f };
			uParam0->f_14.f_3 = { -4.8f, 0f, 48.5f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -754.6f, -1460.6f, 6.1f };
			uParam0->f_14.f_6.f_3 = { -2.2f, 0f, 48.5f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -771.8f, -1452.6f, 5.7f };
			uParam0->f_29.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -771.8f, -1452.1f, 5.7f };
			uParam0->f_29.f_6.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -755.5715f, -1459.453f, 9.125514f };
			uParam0->f_51 = { -771.4204f, -1446.235f, 1.688017f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 20:
			*uParam0 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_3 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_6 = 17.75f;
			uParam0->f_7 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_10 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_13 = 17.75f;
			uParam0->f_44 = { 1761.122f, 3250.125f, 40.733f };
			uParam0->f_47 = 236.5858f;
			uParam0->f_14 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_12 = 40f;
			uParam0->f_14.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { 1802.327f, 3245.165f, 46.95544f };
			uParam0->f_51 = { 1755.04f, 3237.17f, 38.6937f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME2", 16);
			uParam0->f_67 = 0;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 15:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -845.2216f, -1356.04f, -0.212093f };
			uParam0->f_10 = { -841.6451f, -1365.777f, 3.787907f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -835.86f, -1358.347f, 0.6102f };
			uParam0->f_47 = 112.3787f;
			uParam0->f_14 = { -859.6f, -1374f, 4.3f };
			uParam0->f_14.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_12 = 32.9f;
			uParam0->f_14.f_6 = { -859.7f, -1374f, 3f };
			uParam0->f_14.f_6.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -837.2f, -1350.3f, 2.4f };
			uParam0->f_29.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -837.4f, -1350.8f, 2.3f };
			uParam0->f_29.f_6.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 16:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -848.8177f, -1347.786f, -0.212093f };
			uParam0->f_10 = { -845.2482f, -1357.936f, 3.787908f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -839.2461f, -1349.525f, 0.6102f };
			uParam0->f_47 = 110.6762f;
			uParam0->f_14 = { -866.1f, -1365.6f, 4.3f };
			uParam0->f_14.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_12 = 30f;
			uParam0->f_14.f_6 = { -866.1f, -1365.6f, 3f };
			uParam0->f_14.f_6.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -838.7f, -1343.3f, 2.9f };
			uParam0->f_29.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -838.8f, -1343.2f, 2.9f };
			uParam0->f_29.f_6.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 17:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -851.6987f, -1339.128f, -0.212129f };
			uParam0->f_10 = { -848.128f, -1349.168f, 3.787905f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -842.0763f, -1341.401f, 0.6102f };
			uParam0->f_47 = 109.8916f;
			uParam0->f_14 = { -866.3f, -1357.9f, 4.3f };
			uParam0->f_14.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_12 = 31.2f;
			uParam0->f_14.f_6 = { -866.3f, -1357.9f, 3f };
			uParam0->f_14.f_6.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -841.6f, -1336.3f, 2.5f };
			uParam0->f_29.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -841.8f, -1336.1f, 2.5f };
			uParam0->f_29.f_6.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 21:
			*uParam0 = { -63.38147f, 84.0594f, 70.52139f };
			uParam0->f_3 = { -66.17774f, 77.95913f, 74.05372f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -65.2041f, 81.0524f, 70.5666f };
			uParam0->f_47 = 243.8699f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -62.62f, 80.03f, 70.62f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME1", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 243.8699f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -67.9068f, 82.2664f, 70.5153f };
			uParam0->f_77[0] = 66.202f;
			uParam0->f_70[1 /*3*/] = { -65.1234f, 81.2517f, 70.5644f };
			uParam0->f_77[1] = 71.6237f;
			uParam0->f_80 = 1;
			break;
		
		case 22:
			*uParam0 = { -72.41166f, -1824.142f, 25.81704f };
			uParam0->f_3 = { -68.70254f, -1819.642f, 29.37954f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -70.1992f, -1823.225f, 25.942f };
			uParam0->f_47 = 46.1535f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -71.29f, -1821.68f, 25.94f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME2", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 53.0985f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -64.2268f, -1832.598f, 25.8666f };
			uParam0->f_77[0] = 274.6339f;
			uParam0->f_70[1 /*3*/] = { -68.5531f, -1824.377f, 25.9424f };
			uParam0->f_77[1] = 215.8295f;
			uParam0->f_80 = 1;
			break;
		
		case 23:
			*uParam0 = { -220.7794f, -1159.28f, 21.90302f };
			uParam0->f_3 = { -220.7273f, -1165.265f, 25.45053f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -220.7592f, -1162.277f, 22.0242f };
			uParam0->f_47 = 271.2097f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -218.35f, -1162.18f, 22.02f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME3", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 271.2097f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -222.1935f, -1162.113f, 22.0204f };
			uParam0->f_77[0] = 358.5703f;
			uParam0->f_70[1 /*3*/] = { -220.8189f, -1162.302f, 22.0242f };
			uParam0->f_77[1] = 70.2711f;
			uParam0->f_80 = 1;
			break;
	}
	return uParam0->f_80;
}

int func_371()
{
	func_372();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_372()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_297(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_296(unk_0x27D769C59BC9D030());
			if (func_24(iVar0) && (!func_26(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_24(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

void func_373()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7B4654D62B7E0E9E(Global_68319.f_208[iVar0]))
		{
			unk_0x9403D0F4C7711241(&(Global_68319.f_208[iVar0]));
		}
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_139[iVar0]))
		{
			if (unk_0x0B4DDB992C7BCF57(Global_68319.f_139[iVar0], 0))
			{
				unk_0x9846B4D56971A958(&(Global_68319.f_139[iVar0]));
				Global_68319.f_139[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (unk_0x54DA78A82349F5AC(Local_402.f_110))
	{
		unk_0xA931FF68636DF31C(Local_402.f_110, 0);
		unk_0x1D1A369233055AEC(Local_402.f_110, 0);
	}
	if (unk_0x54DA78A82349F5AC(Local_402.f_111))
	{
		unk_0xA931FF68636DF31C(Local_402.f_111, 0);
		unk_0x1D1A369233055AEC(Local_402.f_111, 0);
	}
	if (Local_402.f_3 != 0)
	{
		func_183();
		unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 0);
	}
	if (unk_0x7B4654D62B7E0E9E(Global_68319.f_583))
	{
		unk_0x9403D0F4C7711241(&(Global_68319.f_583));
	}
	if (iLocal_656 != -1)
	{
		func_65(&iLocal_656);
	}
	if (iLocal_655 != -1)
	{
		func_65(&iLocal_655);
	}
	if (Local_402.f_5 != -1)
	{
		func_65(&(Local_402.f_5));
	}
	if (iLocal_668 != -1)
	{
		func_65(&iLocal_668);
	}
	if (Local_402.f_3 > 0)
	{
		if (Global_68319.f_577)
		{
			func_164(47, 1);
			func_162(47, 1);
			Global_68319.f_577 = 0;
			Local_402.f_3 = 0;
		}
	}
	Global_68319.f_553 = 0;
	unk_0x7C3AA2D27E16E2AD();
}

void func_374()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0xD2CFFE76B625AE55(uLocal_393[iVar0]))
		{
			unk_0x7C0FE14555841C1E(&(uLocal_393[iVar0]));
		}
		iVar0++;
	}
}

void func_375(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0xF426A5DE932B3BEE(iLocal_936[iVar0], iVar1))
	{
		unk_0x26545538B51562AD(&(iLocal_936[iVar0]), iVar1);
		iLocal_867[iLocal_866] = iParam0;
		iLocal_866++;
	}
}

void func_376()
{
	int iVar0;
	
	if (func_206(25))
	{
		if (Global_101154.f_18807.f_69[22 /*78*/].f_66 != 0 && !func_37(Global_101154.f_18807.f_69[22 /*78*/].f_66, 0))
		{
			Global_101154.f_18807.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_101154.f_18807.f_69[22 /*78*/].f_77 = 0;
			Global_101154.f_18807.f_69[22 /*78*/].f_65 = 0;
			Global_101154.f_18807.f_69[22 /*78*/].f_62 = 255;
			Global_101154.f_18807.f_69[22 /*78*/].f_63 = 255;
			Global_101154.f_18807.f_69[22 /*78*/].f_64 = 255;
			Global_101154.f_18807.f_69[22 /*78*/].f_5 = 0;
			Global_101154.f_18807.f_69[22 /*78*/].f_6 = 0;
			Global_101154.f_18807.f_69[22 /*78*/].f_7 = 0;
			Global_101154.f_18807.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_101154.f_18807.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_101154.f_18807.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_206(21) && Global_101154.f_18807.f_69[9 /*78*/].f_66 != 0) && !func_37(Global_101154.f_18807.f_69[9 /*78*/].f_66, 0))
	{
		Global_101154.f_18807.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_206(22) && Global_101154.f_18807.f_69[10 /*78*/].f_66 != 0) && !func_37(Global_101154.f_18807.f_69[10 /*78*/].f_66, 0))
	{
		Global_101154.f_18807.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_206(23) && Global_101154.f_18807.f_69[11 /*78*/].f_66 != 0) && !func_37(Global_101154.f_18807.f_69[11 /*78*/].f_66, 0))
	{
		Global_101154.f_18807.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_206(26) && !func_37(Global_101154.f_18807.f_69[12 /*78*/].f_66, 0))
	{
		func_377(26, 0);
	}
	if (func_206(27) && !func_37(Global_101154.f_18807.f_69[13 /*78*/].f_66, 0))
	{
		func_377(27, 0);
	}
	if (func_206(28) && !func_37(Global_101154.f_18807.f_69[14 /*78*/].f_66, 0))
	{
		func_377(28, 0);
	}
	if (func_206(29) && !func_37(Global_101154.f_18807.f_69[15 /*78*/].f_66, 0))
	{
		func_377(29, 0);
	}
	if (func_206(30) && !func_37(Global_101154.f_18807.f_69[16 /*78*/].f_66, 0))
	{
		func_377(30, 0);
	}
	if (func_206(31) && !func_37(Global_101154.f_18807.f_69[17 /*78*/].f_66, 0))
	{
		func_377(31, 0);
	}
	if (func_206(32) && !func_37(Global_101154.f_18807.f_69[18 /*78*/].f_66, 0))
	{
		func_377(32, 0);
	}
	if (func_206(33) && !func_37(Global_101154.f_18807.f_69[19 /*78*/].f_66, 0))
	{
		func_377(33, 0);
	}
	if (func_206(34) && !func_37(Global_101154.f_18807.f_69[20 /*78*/].f_66, 0))
	{
		func_377(34, 0);
	}
}

void func_377(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_63(iParam0, 0))
		{
			func_235(iParam0, 1, 0);
			func_235(iParam0, 2, 0);
			func_235(iParam0, 3, 0);
			func_235(iParam0, 4, 0);
			func_235(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_235(iParam0, 0, 0);
	}
}

int func_378()
{
	return 0;
}

int func_379()
{
	return 1;
}

int func_380()
{
	return 1;
}

int func_381()
{
	if (unk_0xA29E536967D6DF2E(-1226939934))
	{
		return 1;
	}
	return 0;
}

void func_382(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_386();
	func_385();
	func_383();
}

void func_383()
{
	Global_99744 = 2405.849f;
	Global_99747 = 2408.22f;
	Global_99750 = 2386.096f;
	Global_99753 = 69.1875f;
	Global_99756[0 /*3*/] = 2417.105f;
	Global_99756[1 /*3*/] = 2407.058f;
	Global_99756[2 /*3*/] = 2371.92f;
	Global_99756[3 /*3*/] = 2399.583f;
	Global_99756[4 /*3*/] = 2416.519f;
	Global_99756[5 /*3*/] = 2430.345f;
	Global_99756[6 /*3*/] = 2385.819f;
	Global_99778[0] = 157.8636f;
	Global_99778[1] = 174.7226f;
	Global_99778[2] = 270.7562f;
	Global_99778[3] = 190.7495f;
	Global_99778[4] = 27.6506f;
	Global_99778[5] = 358.1218f;
	Global_99778[6] = 339.4363f;
	Global_99786 = 2399.82f;
	Global_99789 = 2414.7f;
	func_384(&Global_98113, 64);
}

void func_384(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_385()
{
	Global_98118[0 /*3*/].f_1 = 5141.01f;
	Global_98118[1 /*3*/].f_1 = 6048.71f;
	Global_98118[2 /*3*/].f_1 = 6185.32f;
	Global_98118[3 /*3*/].f_1 = 5180.99f;
	Global_98118[4 /*3*/].f_1 = 4582.72f;
	Global_98118[5 /*3*/].f_1 = 4831.82f;
	Global_98118[6 /*3*/].f_1 = 4322.66f;
	Global_98118[7 /*3*/].f_1 = 3503.92f;
	Global_98118[8 /*3*/].f_1 = 3777.54f;
	Global_98118[9 /*3*/].f_1 = 3810.8f;
	Global_98118[10 /*3*/].f_1 = 3095.88f;
	Global_98152[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_98152[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_98152[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_98152[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_98152[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_98152[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_98152[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_98152[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_98152[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_98152[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_98152[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_98152[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_98152[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_98152[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_98152[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_98152[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_98152[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_98152[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_98152[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_98152[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_98152[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_98152[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_98152[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_98152[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_98152[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_98152[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_98152[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_98152[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_98152[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_98152[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_98152[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_98152[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_98152[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_98152[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_98152[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_98152[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_98152[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_98152[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_98152[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_98152[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_98152[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_98152[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_98152[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_98152[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_98152[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_98152[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_98152[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_98152[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_98152[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_98152[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_98152[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_98152[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_98152[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_98152[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_98152[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_98152[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_98152[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_98152[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_98152[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_98152[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_98152[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_98152[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_98152[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_384(&Global_98113, 16);
}

void func_386()
{
	Global_98069[0 /*3*/] = -1567.382f;
	Global_98069[1 /*3*/] = -1436.305f;
	Global_98069[2 /*3*/] = 31.2408f;
	Global_98069[3 /*3*/] = 278.1924f;
	Global_98069[4 /*3*/] = 1116.002f;
	Global_98069[5 /*3*/] = 1676.193f;
	Global_98091[0 /*3*/] = -1592.642f;
	Global_98091[1 /*3*/] = -1573.501f;
	Global_98091[2 /*3*/] = -1459.359f;
	Global_98091[3 /*3*/] = 21.1005f;
	Global_98091[4 /*3*/] = 262.9409f;
	Global_98091[5 /*3*/] = 1091.07f;
	func_384(&Global_98113, 1);
}

