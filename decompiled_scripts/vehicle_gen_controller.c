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
	unk_0xDA6A6B59F261B209(0);
	Local_402.f_5 = -1;
	Local_402.f_0 = -1;
	Local_402.f_1 = 99999.99f;
	func_449(&uLocal_521);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_90353[iVar0 /*3*/][0] = -1;
		Global_90353[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_104551.f_32429.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_104551.f_32429.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_104551.f_32429.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_104551.f_32429.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_104551.f_32429.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_104551.f_32429.f_4801 = -15;
		Global_104551.f_32429.f_4802 = 1;
	}
	if (((!func_448() && !func_447()) && !func_446()) && !func_445())
	{
		func_444(60, 0);
		func_444(61, 0);
	}
	func_443();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_442(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_401)
		{
			iLocal_401 = 1;
			if (unk_0x76BF814AB8D4CAB8(98))
			{
				if (unk_0x710DEBA94578CF6C() == 64)
				{
					if (!Global_70663)
					{
						iLocal_401 = 0;
					}
					else
					{
						func_441();
						func_440();
					}
					Global_70663 = 0;
				}
				else
				{
					func_441();
					func_440();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xBE773EB43BA738E3() != 5)
		{
			iLocal_672 = func_438();
			func_399();
			func_397();
			func_365(&uLocal_521);
			func_336();
			func_28();
			func_20();
			func_17(&uLocal_1010);
		}
		func_1(&uLocal_521);
	}
}

void func_1(var uParam0)
{
	bool bVar0;
	float fVar1;
	
	if (!unk_0xB03A1684359C50A1(Global_104551.f_9986.f_25, 7))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0) && func_14(func_16()))
		{
			bVar0 = false;
			if (unk_0xB03A1684359C50A1(*uParam0, 6) && unk_0xB03A1684359C50A1(*uParam0, 12))
			{
				fVar1 = unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), uParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (uParam0->f_2 == -1)
					{
						uParam0->f_2 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(10000, 15000));
					}
					else
					{
						if (func_13())
						{
							uParam0->f_2 = func_12(uParam0->f_2, (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(2000, 4000)));
						}
						if (!unk_0xB03A1684359C50A1(*uParam0, 23))
						{
							func_11(uParam0, &(uParam0->f_9));
						}
						else if (!unk_0xB03A1684359C50A1(*uParam0, 30))
						{
							if (unk_0xFF22FE9205F44FB6(&(uParam0->f_9), 0, -1))
							{
								if (unk_0x5AFB8ED811F05E4D() > uParam0->f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(uParam0, func_6(uParam0));
										func_3(0);
										unk_0xD2A9C3F486236CC5(uParam0, 30);
									}
								}
							}
						}
						else if (unk_0x688DCBE66AEC44C4(uParam0->f_1))
						{
							unk_0x62148293B793073B(uParam0, 30);
							unk_0x906C6BAB7E9BD0FF(uParam0->f_1);
							uParam0->f_1 = -1;
							uParam0->f_2 = -1;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (unk_0xB03A1684359C50A1(*uParam0, 23))
				{
					func_2(uParam0);
				}
				unk_0x62148293B793073B(uParam0, 30);
				uParam0->f_2 = -1;
			}
		}
	}
}

void func_2(var uParam0)
{
	unk_0x6279F6030B6B0475();
	unk_0x62148293B793073B(uParam0, 23);
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_9986.f_25), 22);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_104551.f_9986.f_25), 22);
	}
}

void func_4(var uParam0, struct<3> Param1)
{
	struct<16> Var0;
	struct<16> Var16;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var16 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	uParam0->f_1 = unk_0x2D524E0AFDB169D5();
	unk_0xFF4225D4B94E1277(uParam0->f_1, &Var0, Param1, &Var16, 0, 0, 0);
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
	
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		Var3 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
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
	
	if (unk_0x3199F4F904C324F9(0, 36))
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_9986.f_25), 22);
	}
	bVar0 = unk_0xB03A1684359C50A1(Global_104551.f_9986.f_25, 22);
	if (iParam0 && bVar0)
	{
		unk_0x62148293B793073B(&(Global_104551.f_9986.f_25), 22);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_9()
{
	var uVar0;
	
	uVar0 = func_10(Global_104551.f_9986.f_25, 14336, 11);
	return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)
{
	return unk_0x97EF1E5BCE9DC075((uParam0 && iParam1), iParam2);
}

void func_11(var uParam0, var uParam1)
{
	unk_0xFF22FE9205F44FB6(uParam1, 0, -1);
	unk_0xD2A9C3F486236CC5(uParam0, 23);
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
	
	bVar0 = unk_0xB03A1684359C50A1(Global_104551.f_9986.f_25, 22);
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
	return unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4());
}

void func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1319811.f_21)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1319811.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_1319811[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1319811[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = unk_0x8F2B4A814A6D7FB1(iVar0);
			if (Global_1319811[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1319811[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = unk_0x53293C2666077F44(iVar0);
			}
			else
			{
				fVar2 = unk_0x9B93908C44159DAE(iVar0);
			}
			if (Global_1319811[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1319811[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = unk_0x8F1F9B8A8097F230(iVar0);
			if (Global_1319811[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1319811[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

float func_18(int iParam0)
{
	if (iParam0 == 7)
	{
		return 51.77096f;
	}
	return unk_0x739CE4852166D461(iParam0);
}

int func_19(int iParam0, int iParam1)
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

void func_20()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xE769D9B5158D0F11(Global_69674.f_583))
	{
		bVar0 = false;
		if (iLocal_672 != Global_69674.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14))
		{
			bVar0 = true;
		}
		else if (Global_69674.f_590)
		{
			if (!func_26(Global_69674.f_584, unk_0x85D7B5415209F462(Global_69674.f_583), 1056964608, 0) || func_22(Global_69674.f_582, func_23(Global_69674.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_69674.f_591)
		{
			if (!func_26(Global_69674.f_587, unk_0x85D7B5415209F462(Global_69674.f_583), 1056964608, 0) || func_22(Global_69674.f_582, func_23(Global_69674.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!unk_0x31F12808DC47A9E5(Global_69674.f_581) || !unk_0xC4B84EB67F78C1F0(Global_69674.f_581, 0)) || (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Global_69674.f_581, 0)))
		{
			if (unk_0x31F12808DC47A9E5(Global_69674.f_581) && !unk_0xC4B84EB67F78C1F0(Global_69674.f_581, 0))
			{
				Global_69674.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (unk_0x31F12808DC47A9E5(Global_69674.f_581))
		{
			if (unk_0xC4B84EB67F78C1F0(Global_69674.f_581, 0))
			{
				Global_69674.f_587 = { unk_0x761660F5CE986DC4(Global_69674.f_581, 1) };
			}
			else
			{
				Global_69674.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0x40D517D991458154(&(Global_69674.f_583));
			Global_69674.f_590 = 0;
			Global_69674.f_591 = 0;
			Global_69674.f_581 = 0;
		}
	}
	else
	{
		Global_69674.f_590 = 0;
		Global_69674.f_591 = 0;
		Global_69674.f_581 = 0;
	}
	if ((((((!unk_0xE769D9B5158D0F11(Global_69674.f_583) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_90315[iVar2] != 145 && Global_90325[iVar2] != 0) && unk_0x31F12808DC47A9E5(Global_90305[iVar2])) && unk_0xC4B84EB67F78C1F0(Global_90305[iVar2], 0)) && !unk_0xE769D9B5158D0F11(unk_0x39FC77EC811362AB(Global_90305[iVar2]))) && Global_90315[iVar2] == iLocal_672) && unk_0x881022B41FD53CD6(unk_0x4F69FBD64CDF125B(Global_90305[iVar2])))
			{
				if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Global_90305[iVar2], 0))
				{
					Global_69674.f_581 = Global_90305[iVar2];
					Global_69674.f_582 = iLocal_672;
					Global_69674.f_590 = 0;
					Global_69674.f_583 = unk_0xA8EDC17CEEA40DFA(Global_69674.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0xE769D9B5158D0F11(Global_69674.f_583) && !func_21(Global_69674.f_584, 0f, 0f, 0f, 0))
			{
				Global_69674.f_581 = 0;
				Global_69674.f_582 = iLocal_672;
				Global_69674.f_590 = 1;
				Global_69674.f_583 = unk_0x29F0B4D7EFF08BF6(Global_69674.f_584);
			}
			if (!unk_0xE769D9B5158D0F11(Global_69674.f_583) && !func_21(Global_69674.f_587, 0f, 0f, 0f, 0))
			{
				Global_69674.f_581 = 0;
				Global_69674.f_582 = iLocal_672;
				Global_69674.f_591 = 1;
				Global_69674.f_583 = unk_0x29F0B4D7EFF08BF6(Global_69674.f_587);
			}
		}
		else
		{
			Global_69674.f_590 = 0;
			Global_69674.f_591 = 0;
		}
		if (unk_0xE769D9B5158D0F11(Global_69674.f_583))
		{
			unk_0xDC0EBFC7730AA226(Global_69674.f_583, 225);
			unk_0x61C2EC67C90074E5(Global_69674.f_583, "PVEHICLE");
			unk_0x90260EB52E59F0F5(Global_69674.f_583, false);
			unk_0xF60CEE5003674AF0(Global_69674.f_583, 3);
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
			unk_0x71925FF3194E84CE(Global_69674.f_583, iVar3);
		}
	}
}

bool func_21(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (unk_0x31F12808DC47A9E5(Global_90305[iVar1]) && unk_0xC4B84EB67F78C1F0(Global_90305[iVar1], 0))
		{
			if (Global_90315[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0x4F69FBD64CDF125B(Global_90305[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_25(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_24(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_24(int iParam0, var uParam1, int iParam2)
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
			if (Global_104551.f_9055.f_99.f_58[128] && !Global_104551.f_9055.f_99.f_58[131])
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
					if (Global_104551.f_9055.f_99.f_58[119])
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
			else if (Global_104551.f_9055.f_99.f_58[118])
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

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x36E1A96E1D63ED91((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_28()
{
	func_275();
	func_195();
	func_67();
	func_29();
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (((((Local_402.f_29.f_80 && !Local_402.f_29.f_69) && Local_402.f_0 != -1) && func_66(Local_402.f_0, 0)) && func_66(Local_402.f_0, 5)) && unk_0xE7FAF8E78F7D3A73(joaat("michael1")) == 0)
		{
			if (!unk_0x31F12808DC47A9E5(Local_402.f_113))
			{
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
					if (unk_0x31F12808DC47A9E5(iVar0) && unk_0xC4B84EB67F78C1F0(iVar0, 0))
					{
						iVar1 = unk_0x4F69FBD64CDF125B(iVar0);
						if (func_63(iVar1))
						{
							Local_402.f_113 = iVar0;
						}
					}
				}
			}
			else if (unk_0xC4B84EB67F78C1F0(Local_402.f_113, 0) && func_63(unk_0x4F69FBD64CDF125B(Local_402.f_113)))
			{
				if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Local_402.f_113, 0))
				{
					if (unk_0x11BBEE2752B9D0C8(Local_402.f_113, Local_402.f_29.f_48, Local_402.f_29.f_51, Local_402.f_29.f_54, 0, 1, 0))
					{
						if ((!func_62(Local_402.f_113) && !func_61(Local_402.f_113)) && Local_402.f_113 != Global_69674.f_484[Local_402.f_0])
						{
							func_30(Local_402.f_0, Local_402.f_113, 1);
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

void func_30(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_60(&(Global_69674.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 12) && !unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69674.f_555[0 /*21*/].f_4 != unk_0x4F69FBD64CDF125B(iParam1))
		{
			return;
		}
	}
	if (Global_70581 != -1 && Global_70581 != iParam0)
	{
		return;
	}
	if (unk_0x31F12808DC47A9E5(iParam1))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam1, 0))
		{
			if (!unk_0x90D1FDC9D31B7BE1(iParam1))
			{
				unk_0x337F2213526139E0(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_104551.f_32429.f_4801 = func_49();
			}
			if (iParam1 != Global_69674.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_48(iParam0);
					if ((unk_0x31F12808DC47A9E5(iVar0) && unk_0xC4B84EB67F78C1F0(iVar0, 0)) && iParam1 != iVar0)
					{
						func_31(iVar0, 145);
					}
				}
				Global_70580 = iParam1;
				Global_70581 = iParam0;
				Global_70582 = iParam2;
			}
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_36(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x4983F8C51A0C0AF3(iParam0, -1, 0);
		if (!unk_0x31F12808DC47A9E5(iVar0))
		{
			iVar0 = unk_0x75FAFA6C74F1ACCD(iParam0, -1);
		}
		if (unk_0x31F12808DC47A9E5(iVar0) && !unk_0x0FAE113CE72ED842(iVar0))
		{
			if (unk_0x4F69FBD64CDF125B(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_104551.f_2353.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x4F69FBD64CDF125B(iParam0) == Global_104551.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xFAFFA408239A026B(&(Global_104551.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x9D39145AD645E383(unk_0xE6A2C60E19ABFD84(iParam0), &(Global_104551.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104551.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104551.f_32429.f_5592[iVar1] = iVar2;
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
		if (unk_0x4F69FBD64CDF125B(iParam0) == Global_104551.f_32429.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xFAFFA408239A026B(&(Global_104551.f_32429.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x9D39145AD645E383(unk_0xE6A2C60E19ABFD84(iParam0), &(Global_104551.f_32429.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104551.f_32429.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104551.f_32429.f_5590 = iParam1;
	Global_70579 = iParam0;
	Global_104551.f_32429.f_5588 = 1;
	func_32(iParam0, &(Global_104551.f_32429.f_5510));
}

void func_32(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		func_35(uParam1);
		uParam1->f_66 = unk_0x4F69FBD64CDF125B(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE6A2C60E19ABFD84(iParam0), 16);
		*uParam1 = unk_0x2B07F86D9BC57D14(iParam0);
		unk_0xC2CED850D0B7AE40(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x939E5110724C9FF5(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5DEE36C41FD07639(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x5B416ECA8172648C(iParam0);
		uParam1->f_67 = unk_0x178913209B5C278C(iParam0);
		uParam1->f_69 = unk_0x459703DBCA7E4F90(iParam0);
		uParam1->f_70 = unk_0xA15463616D2BE67B(iParam0);
		unk_0x868FCC1ABD0392E2(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xC501B2A5F74552E1(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x6BF5E4054292013A(iParam0, 2))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 28);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 3))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 29);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 30);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 1))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7C094ED2B27D253F(iParam0, 0))
		{
			uParam1->f_68 = unk_0xB5305F9F7739856F(iParam0);
		}
		if (unk_0xD8BB60C76D29E4BB(uParam1->f_66))
		{
			if (unk_0xAD1AE6AEE26C1B5B(iParam0))
			{
				switch (unk_0xF0623119822BFA16(iParam0))
				{
					case 2:
					case 0:
						unk_0x62148293B793073B(&(uParam1->f_77), 23);
						unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x62148293B793073B(&(uParam1->f_77), 23);
						unk_0x62148293B793073B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xDCACEB538A650DBE(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 9);
		}
		if (unk_0x43AB555BD9D432EA(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 10);
		}
		if (unk_0x598942D690303B92(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 13);
			unk_0x9F7E6674DE4C23B5(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xFD2F81E6B2E852DA(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 12);
		}
		func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x6276BF0E9518E43A(iParam0, iVar0 + 1))
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x6D111CD3D2767A08(iParam0, 0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam1->f_77), 11);
		}
		if (unk_0x788C6B35BB3FCF53(iParam0, "IgnoredByQuickSave") && unk_0x3C32210A85B95B19(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam1->f_77), 27);
		}
	}
}

int func_33(int iParam0)
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

int func_34(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC4B84EB67F78C1F0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x8A27C3C945C9E921(*iParam0) == 0)
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
			if (unk_0xFA82454B8C070DBB(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x2FA7EA3CA1AD2BF9(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8730A3E327DA8627(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8730A3E327DA8627(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_35(var uParam0)
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

int func_36(int iParam0)
{
	if ((((((((((!unk_0x31F12808DC47A9E5(iParam0) || !unk_0xC4B84EB67F78C1F0(iParam0, 0)) || func_46(iParam0, 0, 0)) || func_46(iParam0, 1, 0)) || func_46(iParam0, 2, 0)) || func_45(iParam0) != 145) || func_44(iParam0)) || func_62(iParam0)) || func_61(iParam0)) || func_43(iParam0)) || !func_37(unk_0x4F69FBD64CDF125B(iParam0)))
	{
		if (func_62(iParam0))
		{
		}
		if (func_62(iParam0))
		{
		}
		if (func_46(iParam0, 0, 0))
		{
		}
		if (func_46(iParam0, 1, 0))
		{
		}
		if (func_46(iParam0, 2, 0))
		{
		}
		if (func_45(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_37(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x9605D2F02FA93911(iParam0) || unk_0xD8BB60C76D29E4BB(iParam0)) || unk_0xB6353CAE3EBC0919(iParam0)) || unk_0xA403D842C198CAFF(iParam0))
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

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xDC3C87280F94833B(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x44243F2E2F58B8E3()) || (iParam0 == joaat("buffalo3") && !unk_0x44243F2E2F58B8E3())) || (iParam0 == joaat("gauntlet2") && !unk_0x44243F2E2F58B8E3())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x44243F2E2F58B8E3())) || iParam0 == joaat("blista3"))
	{
		if (!func_42())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x469F77B2A79C2220())
		{
			if (unk_0x2164A4E269B646EB(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x0663FFD85FC79E8F(Var1.f_0))
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
		if ((((!func_448() && !func_447()) && !func_446()) && !func_445()) && !func_42())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x929A0C5D6A986B4F() || unk_0xC339C5C5B5E8BC5B()) || unk_0x0A8A596EB9C068FA())
		{
		}
		else if (!func_446())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_41(iParam0))
		{
			return 0;
		}
	}
	if (!func_39(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_39(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_40())
	{
		return 1;
	}
	unk_0xFA7CFD9BFC4E130D(&iVar0, &uVar1);
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
	if (!unk_0x393CD2FA300F18B3(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_40()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2491976)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE6E19D6A1FC25165();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5836 && !Global_262145.f_12069) && iVar1 < Global_262145.f_12070)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13367 && iVar1 < Global_262145.f_13379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13363 && iVar1 < Global_262145.f_13375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13364 && iVar1 < Global_262145.f_13376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13365 && iVar1 < Global_262145.f_13377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13366 && iVar1 < Global_262145.f_13378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13368 && iVar1 < Global_262145.f_13380)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13369 && iVar1 < Global_262145.f_13372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13370 && iVar1 < Global_262145.f_13373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13371 && iVar1 < Global_262145.f_13374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15998 && iVar1 < Global_262145.f_15963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15993 && iVar1 < Global_262145.f_15958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15997 && iVar1 < Global_262145.f_15962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15996 && iVar1 < Global_262145.f_15961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15990 && iVar1 < Global_262145.f_15955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15991 && iVar1 < Global_262145.f_15956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15994 && iVar1 < Global_262145.f_15959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15995 && iVar1 < Global_262145.f_15960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15992 && iVar1 < Global_262145.f_15957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16000 && iVar1 < Global_262145.f_15965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16001 && iVar1 < Global_262145.f_15966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15989 && iVar1 < Global_262145.f_15954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15988 && iVar1 < Global_262145.f_15953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15987 && iVar1 < Global_262145.f_15952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15999 && iVar1 < Global_262145.f_15964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16002 && iVar1 < Global_262145.f_15967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16003 && iVar1 < Global_262145.f_15968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16004 && iVar1 < Global_262145.f_15969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16005 && iVar1 < Global_262145.f_15970)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16150 && iVar1 < Global_262145.f_16172)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16151 && iVar1 < Global_262145.f_16173)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16152 && iVar1 < Global_262145.f_16174)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16153 && iVar1 < Global_262145.f_16175)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16154 && iVar1 < Global_262145.f_16176)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16155 && iVar1 < Global_262145.f_16177)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16157 && iVar1 < Global_262145.f_16178)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16158 && iVar1 < Global_262145.f_16179)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16159 && iVar1 < Global_262145.f_16180)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16160 && iVar1 < Global_262145.f_16181)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16161 && iVar1 < Global_262145.f_16182)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16162 && iVar1 < Global_262145.f_16183)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16163 && iVar1 < Global_262145.f_16184)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16166 && iVar1 < Global_262145.f_16187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16167 && iVar1 < Global_262145.f_16188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16156 && iVar1 < Global_262145.f_16190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16164 && iVar1 < Global_262145.f_16185)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16165 && iVar1 < Global_262145.f_16186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17801 && iVar1 < Global_262145.f_17861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17802 && iVar1 < Global_262145.f_17862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17803 && iVar1 < Global_262145.f_17863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17804 && iVar1 < Global_262145.f_17864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17805 && iVar1 < Global_262145.f_17865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17806 && iVar1 < Global_262145.f_17866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17807 && iVar1 < Global_262145.f_17867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17808 && iVar1 < Global_262145.f_17868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17809 && iVar1 < Global_262145.f_17869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17810 && iVar1 < Global_262145.f_17870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17811 && iVar1 < Global_262145.f_17871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17812 && iVar1 < Global_262145.f_17872)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17813 && iVar1 < Global_262145.f_17873)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17814 && iVar1 < Global_262145.f_17874)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17815 && iVar1 < Global_262145.f_17875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17816 && iVar1 < Global_262145.f_17876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17817 && iVar1 < Global_262145.f_17877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17818 && iVar1 < Global_262145.f_17878)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17819 && iVar1 < Global_262145.f_17879)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17820 && iVar1 < Global_262145.f_17880)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17821 && iVar1 < Global_262145.f_17881)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17822 && iVar1 < Global_262145.f_17882)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17823 && iVar1 < Global_262145.f_17883)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18844)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19688 && iVar1 < Global_262145.f_19696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19689 && iVar1 < Global_262145.f_19697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19690 && iVar1 < Global_262145.f_19698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19691 && iVar1 < Global_262145.f_19699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19692 && iVar1 < Global_262145.f_19700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19693 && iVar1 < Global_262145.f_19701)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20464 && iVar1 < Global_262145.f_20484)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20476 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20467 && iVar1 < Global_262145.f_20487)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20477 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20465 && iVar1 < Global_262145.f_20485)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20481 && iVar1 < Global_262145.f_20501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20479 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20480 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20475 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20482 && iVar1 < Global_262145.f_20502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20478 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20474 && iVar1 < Global_262145.f_20494)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20466 && iVar1 < Global_262145.f_20486)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20468 && iVar1 < Global_262145.f_20488)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20469 && iVar1 < Global_262145.f_20489)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20470 && iVar1 < Global_262145.f_20490)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20471 && iVar1 < Global_262145.f_20491)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20472 && iVar1 < Global_262145.f_20492)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20473 && iVar1 < Global_262145.f_20493)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21428 && iVar1 < Global_262145.f_21456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21429 && iVar1 < Global_262145.f_21457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21430 && iVar1 < Global_262145.f_21458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21431 && iVar1 < Global_262145.f_21459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21432 && iVar1 < Global_262145.f_21460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21433 && iVar1 < Global_262145.f_21461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21434 && iVar1 < Global_262145.f_21462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21435 && iVar1 < Global_262145.f_21463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21436 && iVar1 < Global_262145.f_21464)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21437 && iVar1 < Global_262145.f_21465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21438 && iVar1 < Global_262145.f_21466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21439 && iVar1 < Global_262145.f_21467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21440 && iVar1 < Global_262145.f_21468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21441 && iVar1 < Global_262145.f_21469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21442 && iVar1 < Global_262145.f_21470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21443 && iVar1 < Global_262145.f_21471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21444 && iVar1 < Global_262145.f_21472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21445 && iVar1 < Global_262145.f_21473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21446 && iVar1 < Global_262145.f_21474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21447 && iVar1 < Global_262145.f_21475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21448 && iVar1 < Global_262145.f_21476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21449 && iVar1 < Global_262145.f_21477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21450 && iVar1 < Global_262145.f_21478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21451 && iVar1 < Global_262145.f_21479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21452 && iVar1 < Global_262145.f_21480)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_42()
{
	var uVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xD2A9C3F486236CC5(&uVar0, 2);
				unk_0xD2A9C3F486236CC5(&uVar0, 4);
				unk_0xD2A9C3F486236CC5(&uVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					iVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&iVar0, 0);
					unk_0x167AC4B8CEEB1F11(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x4F69FBD64CDF125B(iParam0);
	uVar1 = unk_0xE6A2C60E19ABFD84(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x9D39145AD645E383(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_38(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(Global_69674.f_484[24]))
	{
		if (iParam0 == Global_69674.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x31F12808DC47A9E5(Global_69674.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69674.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 145;
	}
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]))
		{
			if (Global_90305[iVar0] == iParam0)
			{
				return Global_90315[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_46(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x31F12808DC47A9E5(iParam0) || !unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_47(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB03A1684359C50A1(Global_104551.f_7199[iVar9], 0))
		{
			if (unk_0x31AAECA8242E34AD(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_48(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69674.f_139[iParam0];
}

int func_49()
{
	var uVar0;
	
	func_59(&uVar0, unk_0xB093145A4ED05C87());
	func_58(&uVar0, unk_0x4BF279EB036481A0());
	func_57(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_52(&uVar0, unk_0x518720E0DE404FFC());
	func_51(&uVar0, unk_0x5E3E9A684A609866());
	func_50(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

void func_50(var uParam0, int iParam1)
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

void func_51(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_52(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_56(*uParam0);
	iVar1 = func_54(*uParam0);
	if (iParam1 < 1 || iParam1 > func_53(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_53(int iParam0, int iParam1)
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

var func_54(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_55(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_55(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_56(int iParam0)
{
	return iParam0 & 15;
}

void func_57(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_58(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_60(var uParam0, int iParam1)
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
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 19);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 19);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 22);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 22);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 22);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 27);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 27);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 27);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 11);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 11);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 9);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 9);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 2);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 30);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 2);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 22);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
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
			if (func_42())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 2);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 1);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_42())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 2);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 1);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 30);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 30);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xB03A1684359C50A1(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_104551.f_32429.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_21(Global_104551.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104551.f_32429.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_104551.f_32429.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_104551.f_32429.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xB03A1684359C50A1(uParam0->f_9, 19))
	{
		if (!func_21(Global_104551.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104551.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104551.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xB03A1684359C50A1(uParam0->f_9, 20))
	{
		if (!func_21(Global_104551.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104551.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104551.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x31F12808DC47A9E5(Global_90335[iVar0]))
		{
			if (Global_90335[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]) && unk_0xC4B84EB67F78C1F0(Global_90305[iVar0], 0))
			{
				if (Global_90305[iVar0] == iParam0 && unk_0x4F69FBD64CDF125B(Global_90305[iVar0]) == unk_0x4F69FBD64CDF125B(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	switch (Local_402.f_6)
	{
		case 0:
			return func_65(iParam0);
			break;
		
		case 1:
			if (((unk_0x9605D2F02FA93911(iParam0) || unk_0x9178C1B23106F7AA(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_64(iParam0);
			break;
		
		case 2:
			return (unk_0xB6353CAE3EBC0919(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_64(int iParam0)
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!unk_0x881022B41FD53CD6(iParam0) && !unk_0x422717A3330EA45D(iParam0)) && !unk_0x93CA7A248A4D402A(iParam0)) && !unk_0x309C05EAA86E194E(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_65(int iParam0)
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!unk_0xD8BB60C76D29E4BB(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

bool func_66(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_104551.f_32429[iParam0], iParam1);
}

void func_67()
{
	struct<100> Var0;
	struct<78> Var101;
	bool bVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	struct<4> Var185;
	int iVar189;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	int iVar194;
	int iVar195;
	bool bVar196;
	int iVar197;
	bool bVar198;
	bool bVar199;
	int iVar200;
	int iVar201;
	int iVar202;
	int iVar203;
	struct<2> Var204;
	int iVar208;
	bool bVar209;
	int iVar210;
	bool bVar211;
	var uVar212;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_95 = -1;
	Var0.f_96 = 1;
	Var0.f_98 = 132;
	Var0.f_99 = -1;
	Var101.f_9 = 49;
	Var101.f_59 = 2;
	bVar179 = false;
	iVar180 = 0;
	if (iLocal_654 > 0 && iLocal_654 != 99)
	{
		if (((((((((((((((Local_402.f_0 == -1 || unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0)) || ((unk_0x31F12808DC47A9E5(Global_69674.f_484[Local_402.f_0]) && unk_0xC4B84EB67F78C1F0(Global_69674.f_484[Local_402.f_0], 0)) && (unk_0x299A8727F19AED60(unk_0x18F7BE9ACB7D08F4(), Global_69674.f_484[Local_402.f_0]) || unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Global_69674.f_484[Local_402.f_0], 1)))) || ((unk_0x31F12808DC47A9E5(Global_69674.f_484[Local_402.f_0]) && unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4())) && ((unk_0xC2A319FA5560AFF3(unk_0x18F7BE9ACB7D08F4()) - 1f) > 0.15f && unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), Global_69674.f_484[Local_402.f_0])))) || ((unk_0x31F12808DC47A9E5(Global_69674.f_484[Local_402.f_0]) && unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4())) && unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Global_69674.f_484[Local_402.f_0], 1))) || (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()) && unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_194(0) != bLocal_1018) || bLocal_854) || func_193(-1082130432))
		{
			iLocal_654 = 99;
		}
	}
	switch (iLocal_654)
	{
		case 0:
			if ((((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) && !Global_68213) && !bLocal_854) && !unk_0xEC0ECEF2AF3FDA8D())
			{
				if ((((((((((Local_402.f_29.f_80 && Local_402.f_2 == 0) && (Global_69674.f_592[0] != -1 || func_192() != 0)) && Local_402.f_0 != -1) && !iLocal_1016) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_193(-1082130432))
				{
					if (iLocal_656 != -1)
					{
					}
					else if (func_66(Local_402.f_0, 0) && func_66(Local_402.f_0, 5))
					{
						if ((unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0) && !unk_0xDCAE40DC83E036DE(unk_0x18F7BE9ACB7D08F4())) && !unk_0x4A296E47F281D02F(unk_0x18F7BE9ACB7D08F4()))
						{
							if ((!unk_0x31F12808DC47A9E5(Global_69674.f_484[Local_402.f_0]) || !unk_0xC4B84EB67F78C1F0(Global_69674.f_484[Local_402.f_0], 0)) || (!unk_0x299A8727F19AED60(unk_0x18F7BE9ACB7D08F4(), Global_69674.f_484[Local_402.f_0]) && !unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Global_69674.f_484[Local_402.f_0], 1)))
							{
								iVar183 = func_192();
								iVar184 = 0;
								while (iVar184 < iVar183)
								{
									if (func_63(func_188(iVar184)))
									{
										iVar182++;
									}
									iVar184++;
								}
								iVar181 = 0;
								while (iVar181 < Global_69674.f_592)
								{
									if (Global_69674.f_592[iVar181] != -1)
									{
										if ((func_187(Global_69674.f_592[iVar181], iLocal_672) && Global_104551.f_32429.f_1982[iLocal_672 /*939*/].f_626[Global_69674.f_592[iVar181]] == -15) && (Global_69674.f_592[iVar181] != 200 || !Global_104551.f_25043.f_7))
										{
											iVar182++;
										}
									}
									iVar181++;
								}
								if (iVar182 > 0)
								{
									if (!unk_0x622E10ED992CEB95())
									{
										iLocal_856 = 1;
										if (Local_402.f_6 == 3)
										{
											func_186(&iLocal_655, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_186(&iLocal_655, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										bLocal_1018 = func_194(0);
										iLocal_654++;
									}
								}
								else if (!iLocal_856)
								{
									if (Local_402.f_6 == 0)
									{
										if (!unk_0x622E10ED992CEB95() || func_185("HANGAR_NO"))
										{
											func_184("HANGAR_NO", -1);
											StringCopy(&cLocal_1019, "HANGAR_NO", 16);
										}
										bVar179 = true;
									}
									else if (Local_402.f_6 == 1)
									{
										if (!unk_0x622E10ED992CEB95() || func_185("MARINA_NO"))
										{
											func_184("MARINA_NO", -1);
											StringCopy(&cLocal_1019, "MARINA_NO", 16);
										}
										bVar179 = true;
									}
									else if (Local_402.f_6 == 2)
									{
										if (!unk_0x622E10ED992CEB95() || func_185("HELIPAD_NO"))
										{
											func_184("HELIPAD_NO", -1);
											StringCopy(&cLocal_1019, "HELIPAD_NO", 16);
										}
										bVar179 = true;
									}
									else if (Local_402.f_6 == 3)
									{
										StringCopy(&Var185, "CAR_GAR_NO", 16);
										if (unk_0xC57A05B38A912073() || unk_0x0A8A596EB9C068FA())
										{
											StringConCat(&Var185, "_1", 16);
										}
										else if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
										{
											StringConCat(&Var185, "_2", 16);
										}
										if (!unk_0x622E10ED992CEB95() || func_185(&Var185))
										{
											func_184(&Var185, -1);
											cLocal_1019 = { Var185 };
										}
										bVar179 = true;
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
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && func_182(0, -1, 0))
			{
				if (iLocal_656 != -1)
				{
					iLocal_654 = 0;
					return;
				}
				if (func_181(iLocal_655, 1))
				{
					unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
					if (unk_0xC345D9AB8BB3AB24(unk_0xEBE31BF57A0E4641()) == 4)
					{
						unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
					}
					else
					{
						unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 256);
					}
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if (unk_0xC4B84EB67F78C1F0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
						{
							unk_0xA0611ED281CB47AA(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0);
						}
					}
					func_180();
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
				func_179(0);
				func_178(1, 4, 0, 0, 0);
				func_177(1, 2, 1, 1, 1);
				func_176("WEB_VEH_TITLE");
				iVar189 = 0;
				while (iVar189 < iLocal_646)
				{
					iLocal_646[iVar189] = 0;
					iVar189++;
				}
				iVar190 = -1;
				iVar191 = 0;
				func_60(&(Local_402.f_8), Local_402.f_0);
				iVar193 = 0;
				iVar194 = func_192();
				iVar192 = 0;
				while (iVar192 < iVar194)
				{
					if (func_63(func_188(iVar192)))
					{
						if (iVar190 == -1)
						{
							iVar190 = iVar193;
						}
						if (Local_402.f_8.f_4 == func_188(iVar192))
						{
							iLocal_645 = iVar193;
							iVar191 = 1;
						}
						iVar193++;
					}
					iVar192++;
				}
				iVar192 = 0;
				while (iVar192 < Global_69674.f_592)
				{
					if (Global_69674.f_592[iVar192] != -1)
					{
						if ((func_187(Global_69674.f_592[iVar192], iLocal_672) && Global_104551.f_32429.f_1982[iLocal_672 /*939*/].f_626[Global_69674.f_592[iVar192]] == -15) && (Global_69674.f_592[iVar192] != 200 || !Global_104551.f_25043.f_7))
						{
							func_135(Global_69674.f_592[iVar192], &Var0, 0, iLocal_672, -1);
							if (iVar190 == -1)
							{
								iVar190 = iVar193;
							}
							if (Local_402.f_8.f_4 == Var0.f_66)
							{
								iLocal_645 = iVar193;
								iVar191 = 1;
							}
							iVar193++;
						}
					}
					iVar192++;
				}
				if (iLocal_645 == -1)
				{
					iLocal_645 = iVar190;
				}
				iVar193 = 0;
				iVar194 = func_192();
				iVar192 = 0;
				while (iVar192 < iVar194)
				{
					if (func_63(func_188(iVar192)))
					{
						unk_0xD2A9C3F486236CC5(&(iLocal_646[(iVar193 / 32)]), (iVar193 % 32));
						func_131(iVar193, unk_0x89CCD0AB60278D90(func_188(iVar192)), 0, 1, 0, 0);
						if ((iLocal_645 == iVar193 && iVar191) && Local_402.f_6 != 3)
						{
							func_130(iVar193, 4, 0);
						}
						else
						{
							func_130(iVar193, 0, 0);
						}
						iVar193++;
					}
					iVar192++;
				}
				iVar192 = 0;
				while (iVar192 < Global_69674.f_592)
				{
					if (Global_69674.f_592[iVar192] != -1)
					{
						if ((func_187(Global_69674.f_592[iVar192], iLocal_672) && Global_104551.f_32429.f_1982[iLocal_672 /*939*/].f_626[Global_69674.f_592[iVar192]] == -15) && (Global_69674.f_592[iVar192] != 200 || !Global_104551.f_25043.f_7))
						{
							unk_0xD2A9C3F486236CC5(&(iLocal_646[(iVar193 / 32)]), (iVar193 % 32));
							func_135(Global_69674.f_592[iVar192], &Var0, 0, iLocal_672, -1);
							if (Global_69674.f_592[iVar192] != 164)
							{
								func_131(iVar193, func_128(Global_69674.f_592[iVar192]), 0, 1, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_131(iVar193, "TWOSTRINGS", 2, 1, 0, 0);
								func_125(func_128(Global_69674.f_592[iVar192]), 0);
								func_125("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_131(iVar193, "TWOSTRINGS", 2, 1, 0, 0);
								func_125(func_128(Global_69674.f_592[iVar192]), 0);
								func_125("VNX_SWFTB", 0);
							}
							else
							{
								func_131(iVar193, func_128(Global_69674.f_592[iVar192]), 0, 1, 0, 0);
							}
							if (iLocal_645 == iVar193 && iVar191)
							{
								func_130(iVar193, 4, 0);
							}
							else
							{
								func_130(iVar193, 0, 0);
							}
							iVar193++;
						}
					}
					iVar192++;
				}
				func_124(iLocal_645, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar180 = 0;
				if (unk_0xC339C5C5B5E8BC5B())
				{
					if (unk_0x51B842F5244C55D8(2))
					{
						unk_0x9C7EE7DE7041A3F4(0, 1, 1);
						unk_0x9C7EE7DE7041A3F4(0, 2, 1);
						unk_0x9C7EE7DE7041A3F4(2, 200, 1);
						unk_0xB156023E2D4E4859(0, 237, 1);
						unk_0xB156023E2D4E4859(0, 238, 1);
						unk_0xB156023E2D4E4859(0, 241, 1);
						unk_0xB156023E2D4E4859(0, 242, 1);
						func_121(0, 0, 0, 1);
						func_120(0, -1, 1);
						if (func_119())
						{
							if (Global_4265875 != iLocal_645)
							{
								unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_645 = Global_4265875;
								func_124(iLocal_645, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar180 = 1;
							}
						}
					}
				}
				if (unk_0xFC0C00F9DE2AEC93(2, 188) || unk_0xFC0C00F9DE2AEC93(2, 241))
				{
					iLocal_660 = 1;
					unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar195 = (iLocal_645 - 1);
					while (iVar195 >= 0)
					{
						if (unk_0xB03A1684359C50A1(iLocal_646[(iVar195 / 32)], (iVar195 % 32)))
						{
							iLocal_645 = iVar195;
							bVar196 = true;
							iVar195 = 0;
						}
						iVar195 = (iVar195 + -1);
					}
					if (!bVar196)
					{
						iVar195 = (iLocal_646 * 32 - 1);
						while (iVar195 >= iLocal_645 + 1)
						{
							if (unk_0xB03A1684359C50A1(iLocal_646[(iVar195 / 32)], (iVar195 % 32)))
							{
								iLocal_645 = iVar195;
								bVar196 = true;
								iVar195 = 0;
							}
							iVar195 = (iVar195 + -1);
						}
					}
					if (bVar196)
					{
						func_124(iLocal_645, 1, 1);
					}
				}
				else if (unk_0xFC0C00F9DE2AEC93(2, 187) || unk_0xFC0C00F9DE2AEC93(2, 242))
				{
					iLocal_660 = 1;
					unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar197 = iLocal_645 + 1;
					while (iVar197 <= (iLocal_646 * 32 - 1))
					{
						if (unk_0xB03A1684359C50A1(iLocal_646[(iVar197 / 32)], (iVar197 % 32)))
						{
							iLocal_645 = iVar197;
							bVar198 = true;
							iVar197 = iLocal_646 * 32 + 1;
						}
						iVar197++;
					}
					if (!bVar198)
					{
						iVar197 = 0;
						while (iVar197 <= (iLocal_645 - 1))
						{
							if (unk_0xB03A1684359C50A1(iLocal_646[(iVar197 / 32)], (iVar197 % 32)))
							{
								iLocal_645 = iVar197;
								bVar198 = true;
								iVar197 = iLocal_646 * 32 + 1;
							}
							iVar197++;
						}
					}
					if (bVar198)
					{
						func_124(iLocal_645, 1, 1);
					}
				}
				else if (unk_0x3469AD51EA8B9583(2, 201) || iVar180 == 1)
				{
					bVar199 = false;
					iVar180 = 0;
					unk_0x929C3CBA660376D5(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar201 = 0;
					iVar202 = func_192();
					iVar200 = 0;
					while (iVar200 < iVar202)
					{
						if (func_63(func_188(iVar200)))
						{
							if (iLocal_645 == iVar201 && (((((Local_402.f_8.f_4 != func_188(iVar200) || !unk_0x31F12808DC47A9E5(Global_69674.f_484[Local_402.f_0])) || !unk_0xC4B84EB67F78C1F0(Global_69674.f_484[Local_402.f_0], 0)) || Local_402.f_0 == 21) || Local_402.f_0 == 22) || Local_402.f_0 == 23))
							{
								bVar199 = true;
								if ((((!iLocal_659 && Local_402.f_8.f_4 != func_188(iVar200)) || (!iLocal_659 && Local_402.f_0 == 21)) || (!iLocal_659 && Local_402.f_0 == 22)) || (!iLocal_659 && Local_402.f_0 == 23))
								{
									func_118("VEH_SELECT_CNFA", 0, 0);
									func_117(-1);
									func_116(201, "ITEM_YES", -1);
									func_116(202, "ITEM_NO", -1);
									iLocal_659 = 1;
									iVar200 = func_192() + 1;
								}
								else if (Local_402.f_6 == 3)
								{
									if (func_115(func_188(iVar200)))
									{
										iLocal_1017 = func_188(iVar200);
										iLocal_657 = 0;
										iLocal_658 = 0;
										iLocal_651 = 0;
										iLocal_654++;
									}
									else
									{
										iLocal_1016 = 1;
										iLocal_1017 = func_188(iVar200);
										iLocal_654 = 99;
									}
								}
								else if (Local_402.f_6 == 0 && func_115(func_188(iVar200)))
								{
									iLocal_1017 = func_188(iVar200);
									iLocal_657 = 0;
									iLocal_658 = 0;
									iLocal_651 = 0;
									iLocal_654++;
								}
								else
								{
									if (unk_0x31F12808DC47A9E5(Global_69674.f_484[Local_402.f_0]))
									{
										unk_0x337F2213526139E0(Global_69674.f_484[Local_402.f_0], 0, 1);
										unk_0xBECECD970F645217(&(Global_69674.f_484[Local_402.f_0]));
									}
									Var101.f_66 = func_188(iVar200);
									unk_0xD2A9C3F486236CC5(&(Var101.f_77), 14);
									func_112(Local_402.f_0, &Var101, 0f, 0f, 0f, -1f, 145);
									func_111(Local_402.f_0);
									func_60(&(Local_402.f_8), Local_402.f_0);
									iVar200 = func_192() + 1;
									iLocal_658 = 1;
								}
							}
							iVar201++;
						}
						iVar200++;
					}
					if (!bVar199)
					{
						iVar200 = 0;
						while (iVar200 < Global_69674.f_592)
						{
							if (Global_69674.f_592[iVar200] != -1)
							{
								if ((func_187(Global_69674.f_592[iVar200], iLocal_672) && Global_104551.f_32429.f_1982[iLocal_672 /*939*/].f_626[Global_69674.f_592[iVar200]] == -15) && (Global_69674.f_592[iVar200] != 200 || !Global_104551.f_25043.f_7))
								{
									func_135(Global_69674.f_592[iVar200], &Var0, 0, iLocal_672, -1);
									if (iLocal_645 == iVar201 && ((Local_402.f_8.f_4 != Var0.f_66 || !unk_0x31F12808DC47A9E5(Global_69674.f_484[Local_402.f_0])) || !unk_0xC4B84EB67F78C1F0(Global_69674.f_484[Local_402.f_0], 0)))
									{
										bVar199 = true;
										if (!iLocal_659)
										{
											if (Local_402.f_6 == 3)
											{
												func_118("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_118("VEH_SELECT_CNFA", 0, 0);
											}
											func_117(-1);
											func_116(201, "ITEM_YES", -1);
											func_116(202, "ITEM_NO", -1);
											iLocal_659 = 1;
											iVar200 = Global_69674.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_654 = 3;
											iLocal_658 = 1;
											iVar200 = Global_69674.f_592 + 1;
										}
										else
										{
											if (unk_0x31F12808DC47A9E5(Global_69674.f_484[Local_402.f_0]))
											{
												unk_0x337F2213526139E0(Global_69674.f_484[Local_402.f_0], 0, 1);
												unk_0xBECECD970F645217(&(Global_69674.f_484[Local_402.f_0]));
											}
											func_135(Global_69674.f_592[iVar200], &Var0, 0, iLocal_672, -1);
											unk_0xD2A9C3F486236CC5(&(Var0.f_77), 14);
											if (unk_0xD8BB60C76D29E4BB(Var0.f_66))
											{
												unk_0xD2A9C3F486236CC5(&(Var0.f_77), 22);
											}
											func_112(Local_402.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
											func_111(Local_402.f_0);
											func_60(&(Local_402.f_8), Local_402.f_0);
											iVar200 = Global_69674.f_592 + 1;
											iLocal_658 = 1;
										}
									}
									iVar201++;
								}
							}
							iVar200++;
						}
					}
				}
				else if (unk_0x3469AD51EA8B9583(2, 202) || unk_0x3469AD51EA8B9583(2, 238))
				{
					unk_0x929C3CBA660376D5(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			unk_0x3F19B70555683951();
			if (iLocal_660)
			{
				func_118("", 0, 0);
				func_117(-1);
				func_116(201, "ITEM_SELECT", -1);
				func_116(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			func_73(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 3:
			if (!iLocal_657 || iLocal_658)
			{
				func_179(0);
				func_178(1, 0, 0, 0, 0);
				func_177(1, 1, 1, 1, 1);
				iVar203 = 0;
				while (iVar203 < iLocal_652)
				{
					iLocal_652[iVar203] = 0;
					iVar203++;
				}
				func_176("WEB_VEH_TITLE2");
				iVar203 = 0;
				while (iVar203 < 25)
				{
					StringCopy(&Var204, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var204, iVar203, 16);
					func_131(iVar203, &Var204, 0, 1, 0, 0);
					unk_0xD2A9C3F486236CC5(&(iLocal_652[(iVar203 / 32)]), (iVar203 % 32));
					iVar203++;
				}
				if (Local_674.f_12 == 0)
				{
					iLocal_651 = Global_104551.f_25152.f_313[200];
				}
				else if (Local_674.f_12 == 1)
				{
					iLocal_651 = Global_104551.f_25152.f_626[200];
				}
				else
				{
					iLocal_651 = Global_104551.f_25152.f_939[200];
				}
				func_124(iLocal_651, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar180 = 0;
				if (unk_0xC339C5C5B5E8BC5B())
				{
					if (unk_0x51B842F5244C55D8(2))
					{
						unk_0x9C7EE7DE7041A3F4(0, 1, 1);
						unk_0x9C7EE7DE7041A3F4(0, 2, 1);
						unk_0xB156023E2D4E4859(0, 237, 1);
						unk_0xB156023E2D4E4859(0, 238, 1);
						unk_0xB156023E2D4E4859(0, 241, 1);
						unk_0xB156023E2D4E4859(0, 242, 1);
						func_121(0, 0, 0, 1);
						func_120(0, -1, 1);
						if (func_119())
						{
							if (Global_4265875 != iLocal_651)
							{
								unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_651 = Global_4265875;
								func_124(iLocal_651, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar180 = 1;
							}
						}
					}
				}
				if (unk_0xFC0C00F9DE2AEC93(2, 188) || unk_0xFC0C00F9DE2AEC93(2, 241))
				{
					iLocal_660 = 1;
					unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar208 = (iLocal_651 - 1);
					while (iVar208 >= 0)
					{
						if (unk_0xB03A1684359C50A1(iLocal_652[(iVar208 / 32)], (iVar208 % 32)))
						{
							iLocal_651 = iVar208;
							bVar209 = true;
							iVar208 = 0;
						}
						iVar208 = (iVar208 + -1);
					}
					if (!bVar209)
					{
						iVar208 = 31;
						while (iVar208 >= iLocal_651 + 1)
						{
							if (unk_0xB03A1684359C50A1(iLocal_652[(iVar208 / 32)], (iVar208 % 32)))
							{
								iLocal_651 = iVar208;
								bVar209 = true;
								iVar208 = iLocal_651;
							}
							iVar208 = (iVar208 + -1);
						}
					}
					if (bVar209)
					{
						func_124(iLocal_651, 1, 1);
					}
				}
				else if (unk_0xFC0C00F9DE2AEC93(2, 187) || unk_0xFC0C00F9DE2AEC93(2, 242))
				{
					iLocal_660 = 1;
					unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar210 = iLocal_651 + 1;
					while (iVar210 <= 31)
					{
						if (unk_0xB03A1684359C50A1(iLocal_652[(iVar210 / 32)], (iVar210 % 32)))
						{
							iLocal_651 = iVar210;
							bVar211 = true;
							iVar210 = 31;
						}
						iVar210++;
					}
					if (!bVar211)
					{
						iVar210 = 0;
						while (iVar210 <= (iLocal_651 - 1))
						{
							if (unk_0xB03A1684359C50A1(iLocal_652[(iVar210 / 32)], (iVar210 % 32)))
							{
								iLocal_651 = iVar210;
								bVar211 = true;
								iVar210 = iLocal_651;
							}
							iVar210++;
						}
					}
					if (bVar211)
					{
						func_124(iLocal_651, 1, 1);
					}
				}
				else if (unk_0x3469AD51EA8B9583(2, 201) || iVar180 == 1)
				{
					iVar180 = 0;
					unk_0x929C3CBA660376D5(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (unk_0x31F12808DC47A9E5(Global_69674.f_484[Local_402.f_0]))
					{
						unk_0x337F2213526139E0(Global_69674.f_484[Local_402.f_0], 0, 1);
						unk_0xBECECD970F645217(&(Global_69674.f_484[Local_402.f_0]));
					}
					uVar212 = iLocal_651 + 1;
					if (iLocal_672 == 0)
					{
						Global_104551.f_25152.f_313[200] = uVar212;
					}
					else if (iLocal_672 == 1)
					{
						Global_104551.f_25152.f_626[200] = uVar212;
					}
					else if (iLocal_672 == 2)
					{
						Global_104551.f_25152.f_939[200] = uVar212;
					}
					func_135(200, &Var0, 0, iLocal_672, -1);
					unk_0xD2A9C3F486236CC5(&(Var0.f_77), 14);
					if (unk_0xD8BB60C76D29E4BB(Var0.f_66))
					{
						unk_0xD2A9C3F486236CC5(&(Var0.f_77), 22);
					}
					func_112(Local_402.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
					func_111(Local_402.f_0);
					func_60(&(Local_402.f_8), Local_402.f_0);
					iLocal_658 = 1;
					iLocal_654 = 2;
				}
				else if (unk_0x3469AD51EA8B9583(2, 202) || unk_0x3469AD51EA8B9583(2, 238))
				{
					unk_0x929C3CBA660376D5(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iLocal_657 = 0;
					iLocal_658 = 0;
					iLocal_654 = (iLocal_654 - 1);
				}
			}
			unk_0x3F19B70555683951();
			if (iLocal_660)
			{
				func_118("", 0, 0);
				func_117(-1);
				func_116(201, "ITEM_SELECT", -1);
				func_116(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			func_73(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			}
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				if (unk_0xC4B84EB67F78C1F0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
				{
					if (!unk_0x81824CE66CD5E2EE())
					{
						unk_0xA0611ED281CB47AA(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 1);
					}
				}
			}
			func_70(1, -1);
			iLocal_654 = 0;
			func_68(&iLocal_655);
			iLocal_655 = -1;
			break;
	}
	if (!bVar179 && unk_0x622E10ED992CEB95())
	{
		if (!unk_0xFAFFA408239A026B(&cLocal_1019))
		{
			if ((((func_185("HANGAR_NO") || func_185("MARINA_NO")) || func_185("HELIPAD_NO")) || func_185("CAR_GAR_NO_1")) || func_185("CAR_GAR_NO_2"))
			{
				unk_0xEFF1F12403847394(1);
			}
			StringCopy(&cLocal_1019, "", 16);
		}
	}
}

void func_68(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_69(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36563[iVar0 /*32*/])
		{
			Global_36563[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_69(int iParam0)
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
		if (Global_36563[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_70(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_72(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17301.f_7931)
	{
		unk_0xB9C0BA93B50CE575(15);
		Global_17301.f_7931 = 0;
	}
	unk_0x882C4E3F687152C5(0f);
	if (Global_17301.f_5498[iVar0])
	{
		unk_0x000ED7BEBF44F5EA(9, 0);
		Global_17301.f_5498[iVar0] = 0;
	}
	if (Global_17301.f_5484[iVar0])
	{
		unk_0x1D492DC0B64A955F("CommonMenu");
		Global_17301.f_5484[iVar0] = 0;
	}
	if (Global_17301.f_5491[iVar0])
	{
		unk_0x1D492DC0B64A955F("MPShopSale");
		Global_17301.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_71(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_71(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x5C716BBF766E1C70(*uParam0))
		{
			unk_0xEBE532BFFE618875(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_72(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x44243F2E2F58B8E3() && unk_0xD8E9E28C65F6D7A9())
		{
			iParam2 = unk_0x3910797658D84EE9();
		}
	}
	StringCopy(&cVar0, unk_0xFCA64981FEF7C913(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x6E987D62C8535B6E(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17301.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17301.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17301.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_73(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	int iVar55;
	bool bVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	float fVar60;
	int iVar61;
	int iVar62;
	float fVar63;
	float fVar64;
	float fVar65;
	char cVar66[64];
	char cVar82[64];
	float fVar98;
	int iVar99;
	float fVar100;
	float fVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_72(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_108(0, bParam6))
	{
		return;
	}
	unk_0x09EF2EB55114981C(76, 84);
	unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
	fVar58 = 0f;
	fVar59 = 0f;
	if (Global_17301)
	{
		if (func_106(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = fVar37;
			fVar59 = fVar36;
			fVar58 = (fVar58 + 0f);
		}
		else
		{
			Global_17301 = 0;
		}
	}
	if (unk_0x6E987D62C8535B6E(&(Global_17301.f_1)) == unk_0x6E987D62C8535B6E("HIDE"))
	{
		fVar60 = Global_17299;
	}
	else
	{
		fVar60 = (((Global_17299 + fVar58) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17300;
	}
	fVar63 = 1f;
	if (bParam7)
	{
		unk_0xA320869CAE52B097(&iVar61, &iVar62);
		fVar64 = unk_0x47DA03BCFF902E84(0);
		if (func_105())
		{
			iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar62) * fVar64));
		}
		fVar65 = (unk_0xBBDA792448DB5A89(iVar61) / unk_0xBBDA792448DB5A89(iVar62));
		fVar63 = (fVar65 / fVar64);
		if (func_105())
		{
			fVar63 = 1f;
		}
		iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) / fVar63));
		iVar62 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar62) / fVar63));
	}
	else
	{
		unk_0x22D0D3B91B10E6E4(&iVar61, &iVar62);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17301.f_5598)
		{
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_1)) == unk_0x6E987D62C8535B6E("HIDE"))
			{
				fVar51 = Global_17299;
			}
			else
			{
				if (Global_17301)
				{
					StringCopy(&cVar66, func_104(29), 64);
					StringCopy(&cVar82, func_101(29, 1), 64);
					if (unk_0x6E987D62C8535B6E(&(Global_17301.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_100(Global_17298, Global_17299, fParam5, (fVar58 - 0f), 0, 0, 0, 255);
						unk_0x27CD91E03FF596E2(&cVar66, &cVar82, (Global_17298 + (fParam5 * 0.5f)), (Global_17299 + ((fVar58 - 0f) * 0.5f)), fVar59, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x27CD91E03FF596E2(&cVar66, &cVar82, (Global_17298 + (fParam5 * 0.5f)), (Global_17299 + ((fVar58 - 0f) * 0.5f)), fParam5, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17301.f_7901)
				{
					iVar1 = Global_17301.f_7897;
					iVar2 = Global_17301.f_7898;
					iVar3 = Global_17301.f_7899;
					iVar4 = Global_17301.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_100(Global_17298, (Global_17299 + fVar58), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_17299 + fVar58) + 0.034722f) + 0f);
				if (unk_0x6E987D62C8535B6E(&(Global_17301.f_1)) != 0)
				{
					func_99();
					unk_0xD74B746610C55548(&(Global_17301.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17301.f_68)
					{
						if (Global_17301.f_5[iVar14] == 2)
						{
							unk_0x3A12001DBF78DC62(Global_17301.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17301.f_5[iVar14] == 3)
						{
							unk_0xEF512794542297CA(Global_17301.f_14[iVar16], Global_17301.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17301.f_5[iVar14] == 1)
						{
							unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 8)
						{
							unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 5)
						{
							unk_0xB4179F7E88F4C4BF(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 6)
						{
							unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 7)
						{
							unk_0xB4179F7E88F4C4BF(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 9)
						{
							unk_0xB4179F7E88F4C4BF(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x5D7608D88BED248F((Global_17298 + 0.00390625f), ((Global_17299 + fVar58) + 0.00416664f), 0);
				}
				if (Global_17301.f_5601 > Global_17301.f_5095)
				{
					if (Global_17301.f_5604 != 0)
					{
						func_99();
						func_97((((Global_17298 + fParam5) - 0.00390625f) - func_98("CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603)), ((Global_17299 + fVar58) + 0.00416664f), "CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603);
					}
				}
			}
			iVar6 = Global_17301.f_5605;
			iVar9 = 0;
			fVar98 = fVar51;
			if (Global_17301.f_7911)
			{
				iVar1 = Global_17301.f_7907;
				iVar2 = Global_17301.f_7908;
				iVar3 = Global_17301.f_7909;
				iVar4 = Global_17301.f_7910;
			}
			else
			{
				unk_0x954894782056D6CB(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17301.f_5095 && iVar6 <= Global_17301.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17301.f_5355[iVar6])
					{
						if (Global_17301.f_5226[iVar6] && iVar6 != Global_17301.f_5605)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar57 = 0.034722f;
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar57 = Global_17301.f_5612[iVar6];
						}
						fVar51 = (fVar51 + fVar57);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar57 = 0.034722f;
					fVar51 = (fVar51 + fVar57);
					iVar9++;
					if (Global_17301.f_5088 <= 1)
					{
						Global_17301.f_5088++;
					}
					iVar55 = 1;
				}
			}
			unk_0x27CD91E03FF596E2("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar98 + ((fVar51 - fVar98) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar98), 0f, 255, 255, 255, 255, 0);
			if (Global_17301.f_5601 > Global_17301.f_5095)
			{
				if (Global_17301.f_7916)
				{
					iVar1 = Global_17301.f_7912;
					iVar2 = Global_17301.f_7913;
					iVar3 = Global_17301.f_7914;
					iVar4 = Global_17301.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_100(Global_17298, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0xC1E91F9C48368605("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar63));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar63));
				if (Global_17301.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x954894782056D6CB(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x27CD91E03FF596E2("CommonMenu", "shop_arrows_upANDdown", (Global_17298 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar63), ((Var38.f_1 / 720f) * fVar63), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_4562)) != 0 && Global_17301.f_4636 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17298 + 0.0046875f);
				if (Global_17301.f_4638 != 0)
				{
					func_106(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17298 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_96(fVar42);
				unk_0x780BA79C46FB8FF0(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x3A12001DBF78DC62(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0xEF512794542297CA(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x72FADEA10CAEDC8D(fVar42, (fVar51 + 0.00277776f));
				unk_0x954894782056D6CB(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_100(Global_17298, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x954894782056D6CB(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x27CD91E03FF596E2("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_96(fVar42);
				unk_0xD74B746610C55548(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x3A12001DBF78DC62(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0xEF512794542297CA(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 8)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x5D7608D88BED248F(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_17301.f_4638 != 0)
				{
					func_106(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_95(Global_17301.f_4638, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x27CD91E03FF596E2(func_104(Global_17301.f_4638), func_101(Global_17301.f_4638, 1), ((Global_17298 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17301.f_4636 > 0)
				{
					if ((unk_0x5AFB8ED811F05E4D() - Global_17301.f_4637) > Global_17301.f_4636)
					{
						StringCopy(&(Global_17301.f_4562), "", 16);
						Global_17301.f_4636 = -1;
					}
				}
			}
			if (unk_0x6E987D62C8535B6E(&(Global_4265799.f_21)) != 0 && Global_4265799.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17298 + 0.0046875f);
				if (Global_4265799.f_67 != 0)
				{
					func_106(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17298 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_96(fVar42);
				unk_0x780BA79C46FB8FF0(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x3A12001DBF78DC62(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0xEF512794542297CA(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x72FADEA10CAEDC8D(fVar42, (fVar51 + 0.00277776f));
				unk_0x954894782056D6CB(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_100(Global_17298, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x954894782056D6CB(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x27CD91E03FF596E2("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_96(fVar42);
				unk_0xD74B746610C55548(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x3A12001DBF78DC62(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0xEF512794542297CA(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xBEFD1ED9B6BE5127(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0xB4179F7E88F4C4BF(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x5D7608D88BED248F(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4265799.f_67 != 0)
				{
					func_106(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_95(Global_4265799.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x27CD91E03FF596E2(func_104(Global_4265799.f_67), func_101(Global_4265799.f_67, 1), ((Global_17298 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x97BF326E4F5CD20E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4265799.f_65 > 0)
				{
					if ((unk_0x5AFB8ED811F05E4D() - Global_4265799.f_66) > Global_4265799.f_65)
					{
						StringCopy(&(Global_4265799.f_21), "", 16);
						Global_4265799.f_65 = -1;
					}
				}
			}
			func_87(iVar61, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x09EF2EB55114981C(76, 84);
			unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17301.f_5598)
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
			iVar99 = Global_17301.f_5088;
			if (Global_17301.f_5599)
			{
				iVar99 = (Global_17301.f_5602 - 1);
			}
			fVar100 = 0f;
			fVar101 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar99)
			{
				fVar57 = 0.034722f;
				if (Global_17301.f_5612[iVar6] != 0f)
				{
					fVar57 = Global_17301.f_5612[iVar6];
				}
				if (Global_17301.f_5599)
				{
					iVar6 = Global_17301.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17301.f_5605 && iVar9 < Global_17301.f_5095)
				{
					bVar33 = true;
					if (Global_17301.f_5606 == iVar6)
					{
						fVar101 = fVar100;
					}
					if (Global_17301.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17301.f_5746[iVar6] = fVar35;
				fVar34 = (Global_17298 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_17301.f_5606 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_17301.f_7923)
					{
						unk_0x954894782056D6CB(Global_17301.f_7922, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						unk_0x954894782056D6CB(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					unk_0x27CD91E03FF596E2("CommonMenu", "Gradient_Nav", (Global_17298 + (fParam5 * 0.5f)), (((fVar60 + fVar101) + (0.00277776f * IntToFloat(iVar12))) + (fVar57 * 0.5f)), fParam5, fVar57, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_17301.f_5744 = fVar35;
				}
				if (iVar55 && iVar7 == iVar99)
				{
					func_85(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0xD74B746610C55548("DFLT_MNU_OPT");
					unk_0x5D7608D88BED248F(fVar34, fVar35, 0);
					bVar41 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17301.f_5096)
					{
						if (unk_0xB03A1684359C50A1(Global_17301.f_4959[iVar6], iVar8) || Global_17301.f_4926[iVar8] == 5)
						{
							if (Global_17301.f_5599)
							{
								iVar19 = Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar20 = Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar21 = Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar22 = Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar23 = Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)];
							}
							else
							{
								Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar19;
								Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar20;
								Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar21;
								Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar22;
								Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar23;
							}
							iVar106 = 0;
							bVar56 = false;
							if (Global_17301.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[0])
								{
									bVar56 = true;
									iVar106 = 0;
								}
							}
							if (Global_17301.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[1])
								{
									bVar56 = true;
									iVar106 = 1;
								}
							}
							if (Global_17301.f_4932[iVar8] != -1f)
							{
								fVar34 = ((Global_17298 + 0.0046875f) + Global_17301.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17301.f_4932[iVar8 + 1] != -1f) && fVar34 < Global_17301.f_4932[iVar8 + 1])
							{
								fVar46 = (Global_17301.f_4932[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar46 = (((Global_17298 + Global_17300) - 0.0046875f) - fVar34);
							}
							if ((Global_17301.f_4945[iVar8] && Global_17301.f_5741) && bVar32)
							{
								bVar54 = true;
							}
							else
							{
								bVar54 = false;
							}
							switch (Global_17301.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											fVar43 = 0f;
											fVar44 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												bVar52 = false;
												bVar53 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar53 = true;
													}
													else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar52 = true;
													}
													iVar14++;
												}
												func_85(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, iVar106, bVar53, bVar52);
												unk_0xA5738E964D2E2159(&(Global_17301.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBEFD1ED9B6BE5127(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x3A12001DBF78DC62(Global_17301.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xEF512794542297CA(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												fVar43 = unk_0x1BD3A365A7E4BA14(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_106(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar44 = (fVar44 + fVar36);
														if (iVar14 > 0)
														{
															fVar44 = (fVar44 - (0.00078125f * 4f));
														}
														if (Global_17301.f_4433[(iVar22 + iVar14)] == 2 || Global_17301.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar44 = (fVar44 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar42 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar43;
											Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar43 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar44 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_106(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_106(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_95(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_104(26), func_101(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_106(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_106(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_95(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_104(27), func_101(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_85(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_84(bVar32);
											}
											unk_0xD74B746610C55548(&(Global_17301.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBEFD1ED9B6BE5127(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB4179F7E88F4C4BF(&(Global_2457316[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x3A12001DBF78DC62(Global_17301.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xEF512794542297CA(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17301.f_4433[(iVar22 + iVar28)] == 2 || Global_17301.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_106(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_106(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_95(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0x27CD91E03FF596E2(func_104(Global_17301.f_4433[(iVar22 + iVar28)]), func_101(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x27CD91E03FF596E2(func_104(Global_17301.f_4433[(iVar22 + iVar28)]), func_101(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															fVar42 = (fVar42 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_17301.f_4953[iVar8] == 2)
											{
												unk_0x5D7608D88BED248F(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0x5D7608D88BED248F((fVar34 + fVar42), fVar35, 0);
												if (func_83() && unk_0xE7FAF8E78F7D3A73(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_85(0, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
														StringCopy(&cVar107, "TEST_LABEL", 16);
														fVar111 = 0f;
														fVar112 = 55f;
														fVar113 = 0.0185f;
														fVar114 = 0.004f;
														fVar115 = 0.02f;
														unk_0x61EA61920DAA51B8(0f, (0.35f * 0.7f));
														unk_0xE14EBFD640A207D8(255, 255, 255, 150);
														unk_0x754933C14FFBA8EB((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar112), 0);
														unk_0xD74B746610C55548(&cVar107);
														unk_0x3A12001DBF78DC62((Global_17301.f_5605 + iVar30));
														unk_0x5D7608D88BED248F((fVar34 - fVar115), (fVar35 + fVar114), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar42 = (fVar42 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17301.f_4433[(iVar22 + iVar14)] != 2 && Global_17301.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_106(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_106(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_95(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_17301.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x27CD91E03FF596E2(func_104(Global_17301.f_4433[(iVar22 + iVar14)]), func_101(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (Global_17298 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0x27CD91E03FF596E2(func_104(Global_17301.f_4433[(iVar22 + iVar14)]), func_101(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x27CD91E03FF596E2(func_104(Global_17301.f_4433[(iVar22 + iVar14)]), func_101(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar41 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_85(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_84(bVar32);
											}
											unk_0xA5738E964D2E2159("NUMBER");
											unk_0x3A12001DBF78DC62(Global_17301.f_3918[iVar20]);
											fVar43 = unk_0x1BD3A365A7E4BA14(1);
											fVar42 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar43 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_106(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_106(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_95(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_104(26), func_101(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_106(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_106(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_95(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_104(27), func_101(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										func_85(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
										func_82((fVar34 + fVar42), fVar35, "NUMBER", Global_17301.f_3918[iVar20], 0);
									}
									bVar41 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_85(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_84(bVar32);
											}
											unk_0xA5738E964D2E2159("NUMBER");
											unk_0xEF512794542297CA(Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
											fVar43 = unk_0x1BD3A365A7E4BA14(1);
											fVar42 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar43 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_106(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_106(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_95(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_104(26), func_101(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_106(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_106(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_95(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x27CD91E03FF596E2(func_104(27), func_101(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										func_85(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
										func_81((fVar34 + fVar42), fVar35, "NUMBER", Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
									}
									bVar41 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_106(Global_17301.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_17301.f_5599)
											{
												fVar44 = fVar36;
												fVar42 = 0f;
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
												}
												else if (Global_17301.f_4953[iVar8] == 0)
												{
													fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
												}
												Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
												Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar44;
											}
											else
											{
												fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
												fVar44 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
											}
											if (bVar54)
											{
												if (func_106(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17301.f_4953[iVar8] == 2)
													{
														fVar42 = (fVar42 - (fVar36 * 2f));
													}
													fVar45 = (fVar36 * 0.5f);
													if (func_106(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_95(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
														unk_0x27CD91E03FF596E2(func_104(26), func_101(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
												if (func_106(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													fVar45 = (fVar36 * 0.5f);
													if (func_106(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_95(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
														unk_0x27CD91E03FF596E2(func_104(27), func_101(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_106(Global_17301.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_95(Global_17301.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0x27CD91E03FF596E2(func_104(Global_17301.f_4433[iVar22]), func_101(Global_17301.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), (fVar36 * func_80(Global_17301.f_4433[iVar22])), (fVar37 * func_80(Global_17301.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
									bVar41 = true;
									iVar22++;
									break;
								
								case 5:
									bVar41 = true;
									break;
							}
							if (Global_17301.f_4926[iVar8] == 5)
							{
								if (Global_17301.f_4938[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								if (Global_17301.f_4945[iVar8])
								{
									if (func_106(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_17301.f_7552[iVar9] = iVar6;
						Global_17301.f_5607 = iVar6;
						iVar9++;
						if (Global_17301.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar100 = (fVar100 + Global_17301.f_5612[iVar6]);
						}
						else
						{
							fVar100 = (fVar100 + 0.034722f);
						}
					}
					if (!Global_17301.f_5598)
					{
						Global_17301.f_5355[iVar6] = 1;
						if (Global_17301.f_5097[iVar6])
						{
							if (bVar32)
							{
								Global_17301.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17301.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17301.f_5598)
			{
				Global_17301.f_5600 = ((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12)));
				Global_17301.f_5603 = iVar11;
				Global_17301.f_5601 = iVar10;
				Global_17301.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17301.f_5599)
	{
		Global_17301.f_5602 = iVar9;
		Global_17301.f_5599 = 1;
	}
	Global_17301.f_5743 = fVar51;
	Global_17301.f_5745 = unk_0x5AFB8ED811F05E4D();
	unk_0x882C4E3F687152C5(Global_17301.f_5743);
	if (!Global_17301.f_7896)
	{
		func_75(0);
	}
	Global_17301.f_7896 = 0;
	if (bParam2)
	{
		unk_0xE05212008FE9A018(10);
	}
	unk_0xE05212008FE9A018(6);
	unk_0xE05212008FE9A018(7);
	unk_0xE05212008FE9A018(9);
	unk_0xE05212008FE9A018(8);
	if (bParam0)
	{
		func_74(1);
	}
	unk_0x3E233EDF605C23C0();
}

void func_74(int iParam0)
{
	Global_1358718.f_1079 = iParam0;
}

void func_75(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_79(0))
		{
			func_76(iParam0);
		}
		unk_0xD2A9C3F486236CC5(&Global_2324, 2);
	}
}

void func_76(int iParam0)
{
	if (Global_14615)
	{
		func_78(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_77())
	{
		Global_14453.f_1 = 3;
	}
}

int func_77()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_78(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_79(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_79(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

float func_80(int iParam0)
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
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_81(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xD74B746610C55548(sParam2);
	unk_0xEF512794542297CA(uParam3, uParam4);
	unk_0x5D7608D88BED248F(fParam0, fParam1, 0);
}

void func_82(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xD74B746610C55548(sParam2);
	unk_0x3A12001DBF78DC62(iParam3);
	unk_0x5D7608D88BED248F(fParam0, fParam1, iParam4);
}

bool func_83()
{
	return unk_0x5E02CD27DBE77D67(-1762644250);
}

void func_84(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x954894782056D6CB(Global_17301.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x954894782056D6CB(Global_17301.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, 255);
}

void func_85(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_86(Global_17301.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x954894782056D6CB(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x954894782056D6CB(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xE14EBFD640A207D8(155, 155, 155, 255);
		}
		else
		{
			unk_0xE14EBFD640A207D8(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xE14EBFD640A207D8(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xE14EBFD640A207D8(155, 155, 155, 255);
	}
	else
	{
		unk_0xE14EBFD640A207D8(155, 155, 155, 255);
	}
	unk_0x61EA61920DAA51B8(0f, 0.35f);
	unk_0xA3F605DDB63EE4B8(1);
	if (bParam5)
	{
		unk_0x61EA61920DAA51B8(0f, 0.425f);
		unk_0x03FBCA33C223558B(4);
	}
	else if (bParam6)
	{
		unk_0x61EA61920DAA51B8(0f, 0.425f);
		unk_0x03FBCA33C223558B(6);
	}
	else
	{
		unk_0x03FBCA33C223558B(0);
	}
	unk_0x36D27769309D1050(0f, 1f);
	unk_0xD2E1707404EC2AFA(0);
	unk_0xFA8404C1F8556E42(0, 0, 0, 0, 0);
	unk_0xF1BEA13DBF04FF12(0, 0, 0, 0, 0);
}

void func_86(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_72(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_108(bParam4, bParam8))
	{
		return;
	}
	if (func_93())
	{
		return;
	}
	if (unk_0x91A08229665C71F1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_90(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			return;
		}
	}
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x73A445C7E1EAA5D2() == 0 || unk_0x91A08229665C71F1())
		{
			return;
		}
	}
	if (Global_17301.f_4639 != 0)
	{
		if (unk_0x32085AF1EB302CDD(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (Global_17301.f_4896[iVar1] != 358)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0x305BC30EAC3E9BF4(2, Global_17301.f_4896[iVar1], 1), 64);
				}
				else if (Global_17301.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0x33206AC5E51B4373(2, Global_17301.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17301.f_4640 = 0;
		}
		if (!Global_17301.f_4640)
		{
			unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x954263F3D07BEFC2((1f - (Global_17301.f_4951 / 100f)));
			unk_0xE2B30EB9B14EEAB2();
			if (unk_0xC339C5C5B5E8BC5B())
			{
				unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD6F1BD29497A51C8(1);
				unk_0xE2B30EB9B14EEAB2();
			}
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (unk_0x6E987D62C8535B6E(&(Global_17301.f_4834[iVar1 /*4*/])) != unk_0x6E987D62C8535B6E("PREV"))
				{
					unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x22DD5585E00B80C3(iVar1);
					func_89(&(Global_17301.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x6E987D62C8535B6E(&(Global_17301.f_4834[iVar2 /*4*/])) == unk_0x6E987D62C8535B6E("PREV"))
					{
						func_89(&(Global_17301.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17301.f_4883[iVar1] == -1)
					{
						func_88(&(Global_17301.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x0ECBA72FAFCEBA59(&(Global_17301.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x1635DC214B2BB352(iParam2, 70);
						}
						else
						{
							unk_0x3A12001DBF78DC62(iParam2);
						}
						unk_0xC30401186AC91B01();
					}
					if (unk_0xC339C5C5B5E8BC5B())
					{
						if (Global_17301.f_4896[iVar1] != 358 && unk_0xB03A1684359C50A1(Global_17301.f_4922, iVar1))
						{
							unk_0xD6F1BD29497A51C8(1);
							unk_0x22DD5585E00B80C3(Global_17301.f_4896[iVar1]);
						}
						else
						{
							unk_0xD6F1BD29497A51C8(0);
							unk_0x22DD5585E00B80C3(358);
						}
					}
					unk_0xE2B30EB9B14EEAB2();
				}
				iVar1++;
			}
			if (unk_0x6E987D62C8535B6E(&(Global_4265799.f_16)) != unk_0x6E987D62C8535B6E(""))
			{
				unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x22DD5585E00B80C3(Global_17301.f_4639);
				func_89(&Global_4265799);
				if (Global_4265799.f_20 == -1)
				{
					func_88(&(Global_4265799.f_16));
				}
				else
				{
					unk_0x0ECBA72FAFCEBA59(&(Global_4265799.f_16));
					if (bParam5)
					{
						unk_0x1635DC214B2BB352(iParam2, 70);
					}
					else
					{
						unk_0x3A12001DBF78DC62(iParam2);
					}
					unk_0xC30401186AC91B01();
				}
				unk_0xE2B30EB9B14EEAB2();
			}
			unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(0);
			unk_0x22DD5585E00B80C3(80);
			unk_0xE2B30EB9B14EEAB2();
			unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17301.f_4952)
			{
				unk_0x22DD5585E00B80C3(1);
			}
			else
			{
				unk_0x22DD5585E00B80C3(0);
			}
			unk_0xE2B30EB9B14EEAB2();
			Global_17301.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17301.f_4639)
		{
			if (Global_17301.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x22DD5585E00B80C3(iVar1);
					unk_0x0ECBA72FAFCEBA59(&(Global_17301.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x1635DC214B2BB352(iParam2, 70);
					}
					else
					{
						unk_0x3A12001DBF78DC62(iParam2);
					}
					unk_0xC30401186AC91B01();
					unk_0xE2B30EB9B14EEAB2();
				}
			}
			iVar1++;
		}
		if (Global_4265799.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x22DD5585E00B80C3(iVar1);
				unk_0x0ECBA72FAFCEBA59(&(Global_4265799.f_16));
				if (bParam5)
				{
					unk_0x1635DC214B2BB352(iParam2, 70);
				}
				else
				{
					unk_0x3A12001DBF78DC62(iParam2);
				}
				unk_0xC30401186AC91B01();
				unk_0xE2B30EB9B14EEAB2();
			}
		}
		unk_0x09EF2EB55114981C(76, 66);
		unk_0xBECA8293AEA680BD(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17301.f_7931)
			{
				unk_0x83B36F3602F99423(15, 0f, -0.0375f);
				Global_17301.f_7931 = 1;
			}
		}
		else if (Global_17301.f_7931)
		{
			unk_0xB9C0BA93B50CE575(15);
			Global_17301.f_7931 = 0;
		}
		unk_0x3E233EDF605C23C0();
		if (Global_17301.f_4925)
		{
			unk_0x09EF2EB55114981C(82, 66);
			unk_0xBECA8293AEA680BD(0f, 0f, 0f, 0f);
			unk_0xC1C40A3B8772D9BA(Global_17301.f_5530[iVar0 /*10*/], Global_17301.f_4923, Global_17301.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x3E233EDF605C23C0();
		}
		else
		{
			unk_0x5E70D9959D6F2350(Global_17301.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_88(char[4] cParam0)
{
	unk_0x0ECBA72FAFCEBA59(cParam0);
	unk_0xC30401186AC91B01();
}

void func_89(var uParam0)
{
	unk_0xC34A54899652DAAF(uParam0);
}

bool func_90(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_91(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_91(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_92();
	}
	if (Global_1312834[iVar1] == 1)
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

int func_92()
{
	return Global_1312736;
}

int func_93()
{
	struct<3> Var0;
	
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	if (func_94())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xE0F240E99D061E79(&Var0);
		if (Global_14398 == 0)
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

int func_94()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_95(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x954894782056D6CB(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
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
		case 50:
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
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_96(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x03FBCA33C223558B(0);
	unk_0x61EA61920DAA51B8(0f, 0.35f);
	unk_0x758E707C181FC6C1(2);
	unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, iVar3);
	unk_0x36D27769309D1050(fParam0, ((Global_17298 + Global_17300) - 0.0046875f));
	unk_0xD2E1707404EC2AFA(0);
	unk_0xFA8404C1F8556E42(0, 0, 0, 0, 0);
	unk_0xF1BEA13DBF04FF12(0, 0, 0, 0, 0);
}

void func_97(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xD74B746610C55548(sParam2);
	unk_0x3A12001DBF78DC62(uParam3);
	unk_0x3A12001DBF78DC62(uParam4);
	unk_0x5D7608D88BED248F(fParam0, fParam1, 0);
}

float func_98(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xE0C4A595CD61B7F2(sParam0))
	{
		if (unk_0x6E987D62C8535B6E(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_99();
	unk_0xA5738E964D2E2159(sParam0);
	unk_0x3A12001DBF78DC62(uParam1);
	unk_0x3A12001DBF78DC62(uParam2);
	return unk_0x1BD3A365A7E4BA14(1);
}

void func_99()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x954894782056D6CB(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17301.f_7906)
	{
		iVar0 = Global_17301.f_7902;
		iVar1 = Global_17301.f_7903;
		iVar2 = Global_17301.f_7904;
		iVar3 = Global_17301.f_7905;
	}
	unk_0x03FBCA33C223558B(0);
	unk_0x61EA61920DAA51B8(0f, 0.35f);
	unk_0xE14EBFD640A207D8(iVar0, iVar1, iVar2, iVar3);
	unk_0x36D27769309D1050((Global_17298 + 0.0046875f), ((Global_17298 + Global_17300) - 0.0046875f));
	unk_0xD2E1707404EC2AFA(0);
	unk_0xFA8404C1F8556E42(0, 0, 0, 0, 0);
	unk_0xF1BEA13DBF04FF12(0, 0, 0, 0, 0);
}

void func_100(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x754933C14FFBA8EB((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_101(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xFAFFA408239A026B(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x6E987D62C8535B6E(&(Global_17301.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_103(unk_0x8CFC7D6E1DA5D304()) };
			if (unk_0xF9999DB826286D77(&Var19, &uVar3))
			{
				return func_102(&uVar3);
			}
		}
		else
		{
			return func_102(&(Global_17301.f_6719[iParam0 /*16*/]));
		}
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
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
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

var func_102(var uParam0)
{
	return uParam0;
}

struct<13> func_103(int iParam0)
{
	struct<13> Var0;
	
	unk_0xAFA03929DD14DF46(iParam0, &Var0, 13);
	return Var0;
}

char* func_104(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xFAFFA408239A026B(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x6E987D62C8535B6E(&(Global_17301.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_103(unk_0x8CFC7D6E1DA5D304()) };
			unk_0xF9999DB826286D77(&Var16, &uVar0);
			return func_102(&uVar0);
		}
		else
		{
			return func_102(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_105()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xA320869CAE52B097(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_104(iParam0), 64);
	StringCopy(&cVar16, func_101(iParam0, bParam1), 64);
	if (unk_0x6E987D62C8535B6E(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xA320869CAE52B097(&iVar32, &iVar33);
			fVar35 = unk_0x47DA03BCFF902E84(0);
			if (func_105())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_105())
			{
				fVar34 = 1f;
			}
			if (unk_0xE7FAF8E78F7D3A73(joaat("director_mode")) > 0)
			{
				unk_0x22D0D3B91B10E6E4(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x22D0D3B91B10E6E4(&iVar32, &iVar33);
		}
		Var37 = { unk_0xC1E91F9C48368605(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_107(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_107(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.f_0 = (Var37.f_0 - 2f);
			Var37.f_1 = (Var37.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.f_0 = 288f;
			Var37.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x6E987D62C8535B6E(&(Global_17301.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x33CE899911FC2AD8() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17300)
			{
				*fParam4 = (*fParam4 * (Global_17300 / *fParam3));
				*fParam3 = Global_17300;
			}
		}
		return 1;
	}
	return 0;
}

float func_107(int iParam0)
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

int func_108(bool bParam0, bool bParam1)
{
	if (Global_2436169.f_1777.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xC8AB6A5E6C1E6613() || (func_110(8, -1) && func_109() != 64)) || (unk_0xAF5EF4AF56129D79() != 0 && !bParam1)) || (unk_0x51CFE20A158947F4() && !bParam0)) || unk_0x09BCD61076F4FCCE()) || Global_71112) || Global_17301.f_7930) || unk_0xF45F7A07410EF1F5()) || Global_92881.f_1377)
	{
		return 0;
	}
	return 1;
}

int func_109()
{
	return Global_1312789;
}

bool func_110(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

void func_111(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_69674[iParam0] = 0;
	Global_69674.f_69[iParam0] = 0;
}

void func_112(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_60(&(Global_69674.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 10))
		{
			func_114(iParam0);
			func_113(uParam1, &(Global_104551.f_32429.f_69[Global_69674.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 11))
			{
				Global_104551.f_32429.f_1864[Global_69674.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_104551.f_32429.f_1934[Global_69674.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_104551.f_32429.f_1864[Global_69674.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_104551.f_32429.f_1934[Global_69674.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_104551.f_32429.f_1958[Global_69674.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_444(iParam0, 1);
		}
	}
}

void func_113(var uParam0, var uParam1)
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

void func_114(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_60(&(Global_69674.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x31F12808DC47A9E5(Global_69674.f_139[iParam0]))
		{
			unk_0x337F2213526139E0(Global_69674.f_139[iParam0], 1, 1);
			unk_0x4F5FF3F3FDCAB15D(&(Global_69674.f_139[iParam0]));
			Global_69674.f_139[iParam0] = 0;
		}
		if (unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 13))
		{
			func_444(iParam0, 0);
		}
	}
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_116(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x305BC30EAC3E9BF4(2, iParam0, 1);
	if (Global_17301.f_4639 >= 12)
	{
		StringCopy(&Global_4265799, sVar0, 64);
		StringCopy(&(Global_4265799.f_16), sParam1, 16);
		Global_4265799.f_20 = iParam2;
		return;
		return;
	}
	unk_0x62148293B793073B(&(Global_17301.f_4922), Global_17301.f_4639);
	StringCopy(&(Global_17301.f_4641[Global_17301.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17301.f_4834[Global_17301.f_4639 /*4*/]), sParam1, 16);
	Global_17301.f_4883[Global_17301.f_4639] = iParam2;
	Global_17301.f_4896[Global_17301.f_4639] = iParam0;
	Global_17301.f_4909[Global_17301.f_4639] = 32;
	Global_17301.f_4639++;
}

void func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17301.f_4639 = 0;
	Global_17301.f_4640 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17301.f_4834[iVar0 /*4*/]), "", 16);
		Global_17301.f_4883[iVar0] = -1;
		Global_17301.f_4896[iVar0] = 358;
		Global_17301.f_4909[iVar0] = 32;
		iVar0++;
	}
	Global_17301.f_4922 = 0;
	StringCopy(&(Global_4265799.f_16), "", 16);
	Global_4265799.f_20 = -1;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (!func_72(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0x76F4FB5EFF5BDED5(Global_17301.f_5530[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0xD6F1BD29497A51C8(0);
		unk_0xE2B30EB9B14EEAB2();
	}
}

void func_118(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_4562), sParam0, 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = iParam1;
	Global_17301.f_4637 = unk_0x5AFB8ED811F05E4D();
	Global_17301.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
}

int func_119()
{
	if (unk_0xC9FF45E740135482(2))
	{
		if (Global_4265875 > -1)
		{
			if (unk_0x3469AD51EA8B9583(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_120(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xC9FF45E740135482(2))
	{
		return 0;
	}
	if (unk_0xC83C302702976DCB() || unk_0xF45F7A07410EF1F5())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x3C97A09EF6BCD140();
	}
	if (Global_4265875 == -6)
	{
		unk_0x851FC14BAA61DC87(4);
		if (iParam0 && unk_0x02EA7C5633421A0F(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4265875 = -1;
			return 0;
		}
	}
	if (((Global_4265875 > -1 || Global_4265875 == -3) || Global_4265875 == -2) || unk_0x06BEA8ED8C1CD1FB())
	{
		unk_0x851FC14BAA61DC87(1);
		return 0;
	}
	if (Global_4265875 == -1 && iParam0)
	{
		if (unk_0x02EA7C5633421A0F(2, 237))
		{
			unk_0x851FC14BAA61DC87(4);
			Global_4265875 = -6;
			return 1;
		}
		else
		{
			unk_0x851FC14BAA61DC87(3);
			return 0;
		}
	}
	unk_0x851FC14BAA61DC87(1);
	return 0;
}

void func_121(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0xC9FF45E740135482(2))
	{
		Global_4265875 = -1;
		return;
	}
	unk_0x26AB951501A5D164(1);
	fVar0 = Global_17298;
	fVar2 = (fVar0 + Global_17300);
	fVar3 = Global_17301.f_5600;
	fVar1 = (Global_17301.f_5600 - (IntToFloat(Global_17301.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17301.f_5602 < 1)
	{
		fVar1 = (Global_17301.f_5600 - 0.034722f);
	}
	unk_0x09EF2EB55114981C(76, 84);
	unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x4825D153175149E8(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x4825D153175149E8(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x3E233EDF605C23C0();
	func_123();
	if (Global_4265875 == -6)
	{
		return;
	}
	Global_4265875 = -1;
	fVar7 = Global_4265869;
	fVar8 = Global_4265870;
	if (Global_17301.f_5603 > Global_17301.f_5602)
	{
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= fVar3) && Global_4265870 < (fVar3 + fVar6))
		{
			Global_4265875 = -2;
			if (bParam3)
			{
				func_122(0);
			}
			return;
		}
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= (fVar3 + fVar6)) && Global_4265870 < (fVar3 + 0.034722f))
		{
			Global_4265875 = -3;
			if (bParam3)
			{
				func_122(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17301.f_5603 == -1)
		{
			Global_4265875 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17301.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x09EF2EB55114981C(76, 84);
				unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
				func_100(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17300, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x3E233EDF605C23C0();
			}
		}
		Global_4265875 = Global_17301.f_7552[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4265875 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4265875 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4265875 = -4;
		return;
	}
	Global_4265875 = -1;
}

void func_122(bool bParam0)
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
	fVar0 = Global_17298;
	fVar1 = Global_17301.f_5600;
	unk_0x09EF2EB55114981C(76, 84);
	unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
	if (Global_4265875 == -2)
	{
		func_100(fVar0, fVar1, Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4265875 == -3)
	{
		func_100(fVar0, (fVar1 + fVar2), Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x3E233EDF605C23C0();
}

void func_123()
{
	Global_4265871 = Global_4265869;
	Global_4265872 = Global_4265870;
	Global_4265869 = unk_0x9163677583862019(2, 239);
	Global_4265870 = unk_0x9163677583862019(2, 240);
	Global_4265873 = (Global_4265869 - Global_4265871);
	Global_4265874 = (Global_4265870 - Global_4265872);
}

void func_124(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17301.f_5606 = iParam0;
	Global_17301.f_5741 = iParam2;
	if (Global_17301.f_5606 < Global_17301.f_5605)
	{
		Global_17301.f_5605 = Global_17301.f_5606;
	}
	else if ((Global_17301.f_5599 && Global_17301.f_5606 > Global_17301.f_5607) || (!Global_17301.f_5599 && Global_17301.f_5606 >= (Global_17301.f_5605 + Global_17301.f_5095)))
	{
		iVar0 = Global_17301.f_5605;
		while (iVar0 <= Global_17301.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17301.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17301.f_5095 && Global_17301.f_5605 < 128)
		{
			Global_17301.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17301.f_5605;
			while (iVar0 <= Global_17301.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17301.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17301.f_4562), "", 16);
		StringCopy(&(Global_4265799.f_21), "", 16);
	}
}

void func_125(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17301.f_5090 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 >= 4)
	{
		return;
	}
	if (Global_17301.f_5611 != 1)
	{
		return;
	}
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		return;
	}
	StringCopy(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), sParam0, 24);
	Global_17301.f_5090++;
	Global_17301.f_2124[Global_17301.f_5609 /*5*/][Global_17301.f_5610] = 1;
	Global_17301.f_5610++;
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		fVar0 = func_127();
		if (Global_17301.f_4945[Global_17301.f_5089] && Global_17301.f_5610 == Global_17301.f_5608)
		{
			func_106(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17301.f_4938[(Global_17301.f_5089 - 1)])
		{
			Global_17301.f_4938[(Global_17301.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17301.f_5610 >= Global_17301.f_5608)
		{
			fVar3 = func_126();
			if (fVar3 > Global_17301.f_5612[Global_17301.f_5088])
			{
				Global_17301.f_5612[Global_17301.f_5088] = fVar3;
			}
		}
	}
}

float func_126()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17301.f_5610)
	{
		if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17301.f_4433[((Global_17301.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_106(Global_17301.f_4433[((Global_17301.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x97BF326E4F5CD20E(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x97BF326E4F5CD20E(0.35f, 0);
}

float func_127()
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
	while (iVar7 < Global_17301.f_5610)
	{
		if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_85(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
	{
		unk_0xA5738E964D2E2159(&(Global_17301.f_73[Global_17301.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17301.f_5610)
	{
		if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(Global_17301.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xBEFD1ED9B6BE5127(&(Global_17301.f_73[(Global_17301.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0x3A12001DBF78DC62(Global_17301.f_3918[((Global_17301.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xEF512794542297CA(Global_17301.f_4175[((Global_17301.f_5093 - iVar4) + iVar10)], Global_17301.f_4304[((Global_17301.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xB4179F7E88F4C4BF(&(Global_2457316[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xBEFD1ED9B6BE5127(&(Global_2457316[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xB4179F7E88F4C4BF(&(Global_2457316[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 9)
		{
			if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				unk_0xB4179F7E88F4C4BF(&(Global_2457316[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x6E987D62C8535B6E(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0x1BD3A365A7E4BA14(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17301.f_4433[((Global_17301.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_106(Global_17301.f_4433[((Global_17301.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	if (func_129(iParam0, -1) == 0)
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
		
		case 267:
			return "LE7B";
		
		case 268:
			return "OMNIS";
		
		case 269:
			return "TROPOS";
		
		case 270:
			return "BRIOSO";
		
		case 271:
			return "TROPHY";
		
		case 272:
			return "TROPHY2";
		
		case 273:
			return "CONTENDER";
		
		case 274:
			return "CLIFFHANGER";
		
		case 275:
			return "BF400";
		
		case 279:
			return "TYRUS";
		
		case 280:
			return "LYNX";
		
		case 281:
			return "SHEAVA";
		
		case 276:
			return "RALLYTRUCK";
		
		case 277:
			return "TAMPA2";
		
		case 278:
			return "GARGOYLE";
		
		case 282:
			return "BAGGER";
		
		case 283:
			return "ESSKEY";
		
		case 284:
			return "NIGHTBLADE";
		
		case 285:
			return "DEFILER";
		
		case 286:
			return "AVARUS";
		
		case 287:
			return "ZOMBIEA";
		
		case 288:
			return "ZOMBIEB";
		
		case 289:
			return "CHIMERA";
		
		case 290:
			return "DAEMON2";
		
		case 291:
			return "RATBIKE";
		
		case 292:
			return "SHOTARO";
		
		case 293:
			return "RAPTOR";
		
		case 294:
			return "HAKUCHOU2";
		
		case 296:
			return "BLAZER4";
		
		case 297:
			return "SANCTUS";
		
		case 295:
			return "VORTEX";
		
		case 298:
			return "MANCHEZ";
		
		case 299:
			return "TORNADO6";
		
		case 300:
			return "YOUGA2";
		
		case 301:
			return "WOLFSBANE";
		
		case 302:
			return "FAGGIO3";
		
		case 303:
			return "FAGGION";
		
		case 304:
			return "DUNE5";
		
		case 305:
			return "PHANTOM2";
		
		case 306:
			return "TECHNICAL2";
		
		case 307:
			return "BLAZER5";
		
		case 308:
			return "BOXVILLE5";
		
		case 309:
			return "WASTLNDR";
		
		case 310:
			return "RUINER2";
		
		case 311:
			return "VOLTIC2";
		
		case 312:
			return "PENETRATOR";
		
		case 313:
			return "TEMPESTA";
		
		case 314:
			return "ITALIGTB";
		
		case 315:
			return "NERO";
		
		case 316:
			return "DIABLOUS";
		
		case 317:
			return "FCR";
		
		case 318:
			return "SPECTER";
		
		case 319:
			return "GP1";
		
		case 320:
			return "INFERNUS2";
		
		case 321:
			return "RUSTON";
		
		case 322:
			return "TURISMO2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 325:
			return "CHEETAH2";
		
		case 326:
			return "TORERO";
		
		case 327:
			return "VAGNER";
		
		case 328:
			return "XA21";
		
		case 329:
			return "APC";
		
		case 330:
			return "DUNE3";
		
		case 331:
			return "HALFTRACK";
		
		case 332:
			return "OPPRESSOR";
		
		case 333:
			return "TAMPA3";
		
		case 334:
			return "TRSMALL2";
		
		case 335:
			return "ARDENT";
		
		case 336:
			return "NIGHTSHARK";
		
		case 337:
			return "LAZER";
		
		case 338:
			return "MICROLIGHT";
		
		case 339:
			return "MOGUL";
		
		case 340:
			return "ROGUE";
		
		case 341:
			return "STARLING";
		
		case 342:
			return "SEABREEZE";
		
		case 343:
			return "TULA";
		
		case 344:
			return "PYRO";
		
		case 345:
			return "MOLOTOK";
		
		case 346:
			return "NOKOTA";
		
		case 347:
			return "BOMBUSHKA";
		
		case 348:
			return "HUNTER";
		
		case 349:
			return "HAVOK";
		
		case 350:
			return "HOWARD";
		
		case 351:
			return "ALPHAZ1";
		
		case 352:
			return "CYCLONE";
		
		case 353:
			return "VISIONE";
		
		case 354:
			return "RETINUE";
		
		case 355:
			return "RAPIDGT3";
		
		case 356:
			return "VIGILANTE";
		
		case 357:
			return "BIG_PLANE";
		
		case 358:
			return "DELUXO";
		
		case 359:
			return "STROMBERG";
		
		case 360:
			return "RIOT2";
		
		case 361:
			return "CHERNOBOG";
		
		case 362:
			return "KHANJALI";
		
		case 363:
			return "AKULA";
		
		case 364:
			return "THRUSTER";
		
		case 365:
			return "BARRAGE";
		
		case 366:
			return "VOLATOL";
		
		case 367:
			return "COMET4";
		
		case 368:
			return "NEON";
		
		case 369:
			return "STREITER";
		
		case 370:
			return "SENTINEL3";
		
		case 371:
			return "YOSEMITE";
		
		case 372:
			return "SC1";
		
		case 373:
			return "AUTARCH";
		
		case 374:
			return "GT500";
		
		case 375:
			return "HUSTLER";
		
		case 376:
			return "REVOLTER";
		
		case 377:
			return "PARIAH";
		
		case 378:
			return "RAIDEN";
		
		case 379:
			return "SAVESTRA";
		
		case 380:
			return "RIATA";
		
		case 381:
			return "HERMES";
		
		case 382:
			return "COMET5";
		
		case 383:
			return "Z190";
		
		case 384:
			return "VISERIS";
		
		case 385:
			return "KAMACHO";
		
		default:
	}
	return "";
}

int func_129(int iParam0, int iParam1)
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
			return Global_68193;
		
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
		
		case 267:
			return joaat("le7b");
		
		case 268:
			return joaat("omnis");
		
		case 269:
			return joaat("tropos");
		
		case 270:
			return joaat("brioso");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("contender");
		
		case 274:
			return joaat("cliffhanger");
		
		case 275:
			return joaat("bf400");
		
		case 279:
			return joaat("tyrus");
		
		case 280:
			return joaat("lynx");
		
		case 281:
			return joaat("sheava");
		
		case 276:
			return joaat("rallytruck");
		
		case 277:
			return joaat("tampa2");
		
		case 278:
			return joaat("gargoyle");
		
		case 282:
			return joaat("bagger");
		
		case 283:
			return joaat("esskey");
		
		case 284:
			return joaat("nightblade");
		
		case 285:
			return joaat("defiler");
		
		case 286:
			return joaat("avarus");
		
		case 287:
			return joaat("zombiea");
		
		case 288:
			return joaat("zombieb");
		
		case 289:
			return joaat("chimera");
		
		case 290:
			return joaat("daemon2");
		
		case 291:
			return joaat("ratbike");
		
		case 292:
			return joaat("shotaro");
		
		case 293:
			return joaat("raptor");
		
		case 294:
			return joaat("hakuchou2");
		
		case 296:
			return joaat("blazer4");
		
		case 297:
			return joaat("sanctus");
		
		case 295:
			return joaat("vortex");
		
		case 298:
			return joaat("manchez");
		
		case 299:
			return joaat("tornado6");
		
		case 300:
			return joaat("youga2");
		
		case 301:
			return joaat("wolfsbane");
		
		case 302:
			return joaat("faggio3");
		
		case 303:
			return joaat("faggio");
		
		case 304:
			return joaat("dune5");
		
		case 305:
			return joaat("phantom2");
		
		case 306:
			return joaat("technical2");
		
		case 307:
			return joaat("blazer5");
		
		case 308:
			return joaat("boxville5");
		
		case 309:
			return joaat("wastelander");
		
		case 310:
			return joaat("ruiner2");
		
		case 311:
			return joaat("voltic2");
		
		case 312:
			return joaat("penetrator");
		
		case 313:
			return joaat("tempesta");
		
		case 314:
			return joaat("italigtb");
		
		case 315:
			return joaat("nero");
		
		case 316:
			return joaat("diablous");
		
		case 317:
			return joaat("fcr");
		
		case 318:
			return joaat("specter");
		
		case 319:
			return joaat("gp1");
		
		case 320:
			return joaat("infernus2");
		
		case 321:
			return joaat("ruston");
		
		case 322:
			return joaat("turismo2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_68194;
		
		case 324:
			return Global_68195;
		
		case 325:
			return joaat("cheetah2");
		
		case 326:
			return joaat("torero");
		
		case 327:
			return joaat("vagner");
		
		case 328:
			return joaat("xa21");
		
		case 329:
			return joaat("apc");
		
		case 330:
			return joaat("dune3");
		
		case 331:
			return joaat("halftrack");
		
		case 332:
			return joaat("oppressor");
		
		case 333:
			return joaat("tampa3");
		
		case 334:
			return joaat("trailersmall2");
		
		case 335:
			return joaat("ardent");
		
		case 336:
			return joaat("nightshark");
		
		case 337:
			return joaat("lazer");
		
		case 338:
			return joaat("microlight");
		
		case 339:
			return joaat("mogul");
		
		case 340:
			return joaat("rogue");
		
		case 341:
			return joaat("starling");
		
		case 342:
			return joaat("seabreeze");
		
		case 343:
			return joaat("tula");
		
		case 344:
			return joaat("pyro");
		
		case 345:
			return joaat("molotok");
		
		case 346:
			return joaat("nokota");
		
		case 347:
			return joaat("bombushka");
		
		case 348:
			return joaat("hunter");
		
		case 349:
			return joaat("havok");
		
		case 350:
			return joaat("howard");
		
		case 351:
			return joaat("alphaz1");
		
		case 352:
			return joaat("cyclone");
		
		case 353:
			return joaat("visione");
		
		case 354:
			return joaat("retinue");
		
		case 355:
			return joaat("rapidgt3");
		
		case 356:
			return joaat("vigilante");
		
		case 357:
			return Global_68196;
		
		case 358:
			return joaat("deluxo");
		
		case 359:
			return joaat("stromberg");
		
		case 360:
			return joaat("riot2");
		
		case 361:
			return joaat("chernobog");
		
		case 362:
			return joaat("khanjali");
		
		case 363:
			return joaat("akula");
		
		case 364:
			return joaat("thruster");
		
		case 365:
			return joaat("barrage");
		
		case 366:
			return joaat("volatol");
		
		case 367:
			return joaat("comet4");
		
		case 368:
			return joaat("neon");
		
		case 369:
			return joaat("streiter");
		
		case 370:
			return joaat("sentinel3");
		
		case 371:
			return joaat("yosemite");
		
		case 372:
			return joaat("sc1");
		
		case 373:
			return joaat("autarch");
		
		case 374:
			return joaat("gt500");
		
		case 375:
			return joaat("hustler");
		
		case 376:
			return joaat("revolter");
		
		case 377:
			return joaat("pariah");
		
		case 378:
			return joaat("raiden");
		
		case 379:
			return joaat("savestra");
		
		case 380:
			return joaat("riata");
		
		case 381:
			return joaat("hermes");
		
		case 382:
			return joaat("comet5");
		
		case 383:
			return joaat("z190");
		
		case 384:
			return joaat("viseris");
		
		case 385:
			return joaat("kamacho");
		
		default:
	}
	return 0;
}

void func_130(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_17301.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17301.f_5088 >= 128)
	{
		return;
	}
	if (Global_17301.f_5094 >= 128)
	{
		return;
	}
	if (Global_17301.f_5610 < Global_17301.f_5608)
	{
		return;
	}
	if (Global_17301.f_5088 != iParam0)
	{
		Global_17301.f_5088 = iParam0;
		Global_17301.f_5089 = 0;
	}
	iVar0 = Global_17301.f_4926[Global_17301.f_5089];
	if (iVar0 != 4)
	{
		while (Global_17301.f_5089 < 4 && iVar0 != 4)
		{
			Global_17301.f_5089++;
			iVar0 = Global_17301.f_4926[Global_17301.f_5089];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_17301.f_4433[Global_17301.f_5094] = iParam1;
	Global_17301.f_5094++;
	if (iParam1 != 0)
	{
		func_106(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17301.f_4945[Global_17301.f_5089])
		{
			func_106(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_17301.f_4938[Global_17301.f_5089])
		{
			Global_17301.f_4938[Global_17301.f_5089] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_17301.f_5612[iParam0])
			{
				Global_17301.f_5612[iParam0] = fVar2;
			}
		}
	}
	unk_0xD2A9C3F486236CC5(&(Global_17301.f_4959[iParam0]), Global_17301.f_5089);
	Global_17301.f_5089++;
	Global_17301.f_5611 = 4;
}

void func_131(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17301.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17301.f_5088 >= 128)
	{
		return;
	}
	if (Global_17301.f_5090 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 < Global_17301.f_5608)
	{
		return;
	}
	if (Global_17301.f_5088 != iParam0)
	{
		Global_17301.f_5088 = iParam0;
		Global_17301.f_5089 = 0;
	}
	iVar0 = Global_17301.f_4926[Global_17301.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17301.f_5089 < 4 && iVar0 != 1)
		{
			Global_17301.f_5089++;
			iVar0 = Global_17301.f_4926[Global_17301.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0xFAFFA408239A026B(sParam1) && !unk_0xD76CFACBF6A6F21E(sParam1))
	{
	}
	Global_17301.f_1610[Global_17301.f_5090] = bParam3;
	Global_17301.f_1867[Global_17301.f_5090] = iParam4;
	Global_17301.f_5090++;
	if (!bParam3)
	{
		func_134(Global_17301.f_5088, 1);
	}
	else
	{
		func_134(Global_17301.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_133(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
		if (Global_17301.f_4945[Global_17301.f_5089])
		{
			func_106(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17301.f_4938[Global_17301.f_5089])
		{
			Global_17301.f_4938[Global_17301.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_132(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
			if (fVar4 > Global_17301.f_5612[iParam0])
			{
				Global_17301.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xD2A9C3F486236CC5(&(Global_17301.f_4959[iParam0]), Global_17301.f_5089);
	Global_17301.f_5089++;
	Global_17301.f_5611 = 1;
	Global_17301.f_5609 = (Global_17301.f_5090 - 1);
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = iParam2;
}

float func_132(char* sParam0)
{
	if (!unk_0xD76CFACBF6A6F21E(sParam0))
	{
	}
	return unk_0x97BF326E4F5CD20E(0.35f, 0);
}

float func_133(char* sParam0)
{
	if (!unk_0xE0C4A595CD61B7F2(sParam0))
	{
		if (unk_0x6E987D62C8535B6E(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_85(0, 1, 0, 0, 0, 0, 0);
	unk_0xA5738E964D2E2159(sParam0);
	return unk_0x1BD3A365A7E4BA14(1);
}

void func_134(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x62148293B793073B(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_135(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	float fVar0;
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
	int iVar14;
	char* sVar15;
	int iVar19;
	var uVar20;
	var uVar21;
	int iVar22;
	char* sVar23;
	int iVar27;
	var uVar28;
	var uVar29;
	
	uParam1->f_66 = func_129(iParam0, iParam4);
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
	func_175(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_174(iParam0))
	{
		if (Global_69648)
		{
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	*uParam1 = 0;
	if (iParam0 == 360)
	{
		*uParam1 = 4;
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
		if (Global_69648)
		{
			uParam1->f_65 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if ((((iParam0 == 320 || iParam0 == 321) || iParam0 == 322) || iParam0 == 327) || iParam0 == 382)
	{
		uParam1->f_9[0] = 1;
	}
	if (((((iParam0 == 329 || iParam0 == 330) || iParam0 == 331) || iParam0 == 334) || iParam0 == 332) || iParam0 == 333)
	{
		uParam1->f_9[10] = 0;
	}
	if (func_173(uParam1->f_66, &fVar0) && uParam1->f_79 != fVar0)
	{
		uParam1->f_79 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_69647;
	}
	else if (iParam3 == 0)
	{
		iVar1 = Global_104551.f_25152.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar1 = Global_104551.f_25152.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar1 = Global_104551.f_25152.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_67 = -1;
	if (iParam0 == 200)
	{
		switch (iVar1)
		{
			case 1:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 2:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 3:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 4:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 5:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 6:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 7:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 8:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 9:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 10:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 11:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 12:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 13:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 14:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 15:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 16:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 17:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 18:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 19:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 20:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 21:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 22:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 23:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 24:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			case 25:
				func_144(func_145(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_143(func_145(iParam0, iVar1));
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar1)
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
		switch (iVar1)
		{
			case 1:
				if (func_142(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_141(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else if (func_140(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
						{
							uParam1->f_5 = uVar3;
							uParam1->f_6 = uVar4;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_96 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_98 = 134;
							}
							else
							{
								uParam1->f_98 = 0;
							}
							uParam1->f_9[48] = uVar2;
						}
						else
						{
							uParam1->f_67 = 0;
						}
					}
					else
					{
						uParam1->f_67 = func_143(func_145(iParam0, iVar1));
					}
				}
				else if (func_174(iParam0))
				{
					if (!Global_69648)
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
				else if (func_139(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 89;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			
			case 2:
				if (func_142(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_141(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[48] = uVar5;
						}
						else if (func_140(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
						{
							uParam1->f_5 = uVar6;
							uParam1->f_6 = uVar7;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_96 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_98 = 134;
							}
							else
							{
								uParam1->f_98 = 0;
							}
							uParam1->f_9[48] = uVar5;
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
						uParam1->f_67 = func_143(func_145(iParam0, iVar1));
					}
				}
				else if (func_174(iParam0))
				{
					if (!Global_69648)
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
				else if (func_139(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 67;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			
			case 3:
				if (func_142(iParam0))
				{
					if (func_141(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[48] = uVar8;
					}
					else if (func_140(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
					{
						uParam1->f_5 = uVar9;
						uParam1->f_6 = uVar10;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_96 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_98 = 134;
						}
						else
						{
							uParam1->f_98 = 0;
						}
						uParam1->f_9[48] = uVar8;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (func_174(iParam0))
				{
					if (!Global_69648)
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
				else if (func_139(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 28;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			
			case 4:
				if (func_142(iParam0))
				{
					if (func_141(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[48] = uVar11;
					}
					else if (func_140(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
					{
						uParam1->f_5 = uVar12;
						uParam1->f_6 = uVar13;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_96 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_98 = 134;
						}
						else
						{
							uParam1->f_98 = 0;
						}
						uParam1->f_9[48] = uVar11;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (func_174(iParam0))
				{
					if (!Global_69648)
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
				else if (func_139(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_138(iVar14, &sVar15, &iVar19, &uVar20, &uVar21))
					{
						if (unk_0x9D39145AD645E383(&sVar15, "ORANGE") && iVar19 == 1)
						{
							uParam1->f_5 = uVar20;
							uParam1->f_6 = uVar21;
							iVar14 = -99;
						}
						iVar14++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 5:
				if (func_174(iParam0))
				{
					if (!Global_69648)
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
				else if (func_139(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 41;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 55;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_138(iVar22, &sVar23, &iVar27, &uVar28, &uVar29))
					{
						if (unk_0x9D39145AD645E383(&sVar23, "LIME_GREEN") && iVar27 == 1)
						{
							uParam1->f_5 = uVar28;
							uParam1->f_6 = uVar29;
							iVar22 = -99;
						}
						iVar22++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 6:
				if (func_174(iParam0))
				{
					if (!Global_69648)
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
				else if (func_139(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 63;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
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
				else if (func_174(iParam0))
				{
					if (!Global_69648)
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
				else if (func_139(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 5;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 333)
				{
					uParam1->f_5 = 154;
					uParam1->f_6 = 3;
					uParam1->f_96 = 0;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			
			case 8:
				if (func_174(iParam0))
				{
					if (!Global_69648)
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
				else if (func_139(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_96 = 8;
					uParam1->f_98 = 27;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
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
	if (iVar1 == 0)
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
			
			case 338:
				uParam1->f_5 = 64;
				uParam1->f_6 = 5;
				uParam1->f_7 = 111;
				uParam1->f_8 = 5;
				uParam1->f_96 = 0;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 339:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 340:
				uParam1->f_5 = 24;
				uParam1->f_6 = 29;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 341:
				uParam1->f_5 = 3;
				uParam1->f_6 = 4;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 342:
				uParam1->f_5 = 111;
				uParam1->f_6 = 89;
				uParam1->f_7 = 111;
				uParam1->f_8 = 111;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 343:
				uParam1->f_5 = 14;
				uParam1->f_6 = 121;
				uParam1->f_7 = 121;
				uParam1->f_8 = 111;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 344:
				uParam1->f_5 = 50;
				uParam1->f_6 = 91;
				uParam1->f_7 = 0;
				uParam1->f_8 = 111;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 345:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 346:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 347:
				uParam1->f_5 = 14;
				uParam1->f_6 = 5;
				uParam1->f_67 = -1;
				break;
			
			case 348:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 349:
				uParam1->f_5 = 27;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 350:
				uParam1->f_5 = 119;
				uParam1->f_6 = 73;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 351:
				uParam1->f_5 = 67;
				uParam1->f_6 = 1;
				uParam1->f_7 = 5;
				uParam1->f_8 = 111;
				uParam1->f_96 = 111;
				uParam1->f_98 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 356:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 363:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_96 = 1;
				uParam1->f_98 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 361:
				uParam1->f_5 = 154;
				uParam1->f_6 = 13;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_96 = 1;
				uParam1->f_98 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 358:
				uParam1->f_5 = 117;
				uParam1->f_6 = 118;
				uParam1->f_7 = 18;
				uParam1->f_8 = 0;
				uParam1->f_96 = 1;
				uParam1->f_98 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 362:
				uParam1->f_5 = 13;
				uParam1->f_6 = 8;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_96 = 1;
				uParam1->f_98 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 360:
				uParam1->f_5 = 9;
				uParam1->f_6 = 9;
				uParam1->f_7 = 7;
				uParam1->f_8 = 156;
				uParam1->f_96 = 1;
				uParam1->f_98 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 359:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_96 = 1;
				uParam1->f_98 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 364:
				uParam1->f_5 = 8;
				uParam1->f_6 = 14;
				uParam1->f_7 = 5;
				uParam1->f_8 = 156;
				uParam1->f_96 = 1;
				uParam1->f_98 = 132;
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
	if (iParam0 == 290)
	{
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291)
	{
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 304)
	{
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 305)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 306)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 307)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 308)
	{
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 309)
	{
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 310)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 311)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 329)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 330)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 331)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 0;
		uParam1->f_8 = 154;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 332)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 120;
		uParam1->f_7 = 35;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 334)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_96 = 0;
		uParam1->f_98 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 323)
	{
		if (iParam4 == 0)
		{
			uParam1->f_66 = joaat("phantom3");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_96 = 0;
			uParam1->f_98 = 0;
			uParam1->f_67 = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_66 = joaat("hauler2");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_96 = 0;
			uParam1->f_98 = 0;
			uParam1->f_67 = -1;
		}
	}
	if (func_137(uParam1->f_66))
	{
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 357)
	{
		uParam1->f_66 = func_136();
		uParam1->f_5 = 14;
		uParam1->f_6 = 131;
		uParam1->f_8 = 111;
		uParam1->f_96 = 1;
		uParam1->f_98 = 132;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 365)
	{
		uParam1->f_5 = 128;
		uParam1->f_8 = 156;
		uParam1->f_96 = 1;
		uParam1->f_98 = 132;
		uParam1->f_97 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 364)
	{
		uParam1->f_5 = 32;
		uParam1->f_6 = 112;
		uParam1->f_7 = 25;
		uParam1->f_8 = 156;
		uParam1->f_96 = 1;
		uParam1->f_98 = 132;
		uParam1->f_97 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 366)
	{
		uParam1->f_5 = 65;
		uParam1->f_6 = 65;
		uParam1->f_8 = 156;
		uParam1->f_96 = 1;
		uParam1->f_98 = 132;
		uParam1->f_97 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

int func_136()
{
	return joaat("avenger");
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_138(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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

int func_139(int iParam0)
{
	if (((((iParam0 == 286 || iParam0 == 289) || iParam0 == 290) || iParam0 == 301) || iParam0 == 287) || iParam0 == 288)
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	if (iParam0 == 275)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 270)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 274)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 278)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 267)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 280)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 268)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				func_144(func_145(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				func_144(func_145(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 281)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 277)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 271)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 272)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 38;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 88;
				*uParam3 = 88;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 269)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 279)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	return 0;
}

int func_141(int iParam0, int iParam1, var uParam2)
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
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 2;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	*uParam2 = -1;
	return 0;
}

int func_142(int iParam0)
{
	if (((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279)
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)
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
		
		case 90:
			return 0;
		
		case 91:
			return 1;
		
		default:
	}
	return -1;
}

int func_144(int iParam0, var uParam1, var uParam2)
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
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_145(int iParam0, int iParam1)
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
			if (func_146(iParam0, 11, iParam1))
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
		
		case 276:
			if (func_146(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		default:
	}
	return -1;
}

int func_146(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_129(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0xA8AC70C7EA782CC4())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_42() && func_172())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0x44243F2E2F58B8E3()) || (iParam0 == 207 && unk_0x44243F2E2F58B8E3())) || (iParam0 == 208 && unk_0x44243F2E2F58B8E3())) || (iParam0 == 209 && unk_0x44243F2E2F58B8E3()))
	{
		if (func_42())
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
	if (func_174(iParam0))
	{
		if (Global_69648)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_171(iVar0);
	if (iVar1 != -1)
	{
		if (func_169(func_170(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_168(iParam0))
	{
		if (func_42())
		{
			if ((iParam0 == 205 && Global_262145.f_18856) || (iParam0 != 205 && Global_262145.f_18855))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_167(iParam0))
	{
		if (func_158(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_157(iVar0);
	if (iVar2 != -1)
	{
		if (func_155(func_156(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_154(iVar0);
	if (iVar3 > 0)
	{
		if (func_152(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_151(iVar0);
	if (iVar4 != -1)
	{
		if (func_147(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	if (!Global_70852)
	{
		return 0;
	}
	iVar0 = func_149(5644, -1, 0);
	switch (iParam0)
	{
		case joaat("deluxo"):
			return unk_0xB03A1684359C50A1(iVar0, func_148(1));
		
		case joaat("akula"):
			return unk_0xB03A1684359C50A1(iVar0, func_148(2));
		
		case joaat("riot2"):
			return unk_0xB03A1684359C50A1(iVar0, func_148(6));
		
		case joaat("stromberg"):
			return unk_0xB03A1684359C50A1(iVar0, func_148(7));
		
		case joaat("chernobog"):
			return unk_0xB03A1684359C50A1(iVar0, func_148(10));
		
		case joaat("barrage"):
			return unk_0xB03A1684359C50A1(iVar0, func_148(11));
		
		case joaat("khanjali"):
			return unk_0xB03A1684359C50A1(iVar0, func_148(12));
		
		case joaat("volatol"):
			return unk_0xB03A1684359C50A1(iVar0, func_148(13));
		
		case joaat("thruster"):
			return unk_0xB03A1684359C50A1(iVar0, func_148(15));
		
		default:
	}
	return 0;
}

int func_148(int iParam0)
{
	switch (iParam0)
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
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_149(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_150(iParam1)];
	if (unk_0xD194C635833AC189(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_150(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_92();
		if (iVar1 > -1)
		{
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
		}
	}
	return iVar0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case joaat("deluxo"):
			return 0;
			break;
		
		case joaat("akula"):
			return 1;
			break;
		
		case joaat("riot2"):
			return 2;
			break;
		
		case joaat("stromberg"):
			return 3;
			break;
		
		case joaat("chernobog"):
			return 4;
			break;
		
		case joaat("barrage"):
			return 5;
			break;
		
		case joaat("khanjali"):
			return 6;
			break;
		
		case joaat("volatol"):
			return 7;
			break;
		
		case joaat("thruster"):
			return 8;
			break;
	}
	return -1;
}

int func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_70852)
	{
		return 0;
	}
	iVar0 = func_154(iParam0);
	iVar1 = func_153();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_153()
{
	return func_149(6096, -1, 0);
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return Global_262145.f_21278;
		
		case joaat("rogue"):
			return Global_262145.f_21279;
		
		case joaat("alphaz1"):
			return Global_262145.f_21280;
		
		case joaat("havok"):
			return Global_262145.f_21281;
		
		case joaat("starling"):
			return Global_262145.f_21282;
		
		case joaat("molotok"):
			return Global_262145.f_21283;
		
		case joaat("tula"):
			return Global_262145.f_21284;
		
		case joaat("bombushka"):
			return Global_262145.f_21285;
		
		case joaat("howard"):
			return Global_262145.f_21286;
		
		case joaat("mogul"):
			return Global_262145.f_21287;
		
		case joaat("pyro"):
			return Global_262145.f_21288;
		
		case joaat("seabreeze"):
			return Global_262145.f_21289;
		
		case joaat("nokota"):
			return Global_262145.f_21290;
		
		case joaat("hunter"):
			return Global_262145.f_21291;
		
		default:
	}
	return 0;
}

bool func_155(int iParam0)
{
	if (!Global_70852)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(func_149(5446, -1, 0), iParam0);
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
		
		case joaat("halftrack"):
			return 1;
		
		case joaat("trailersmall2"):
			return 2;
		
		case joaat("apc"):
			return 3;
		
		case joaat("tampa3"):
			return 5;
		
		case joaat("oppressor"):
			return 7;
		
		default:
	}
	return 3;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
			break;
		
		case joaat("halftrack"):
			return 1;
			break;
		
		case joaat("trailersmall2"):
			return 2;
			break;
		
		case joaat("apc"):
			return 3;
			break;
		
		case joaat("tampa3"):
			return 4;
			break;
		
		case joaat("oppressor"):
			return 5;
			break;
	}
	return -1;
}

int func_158(int iParam0)
{
	int iVar0;
	
	if (!Global_70852)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_159(iVar0);
}

bool func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_166())
	{
		return 0;
	}
	iVar0 = func_161(iParam0);
	iVar1 = iParam0;
	return unk_0xB03A1684359C50A1(iVar0, func_160(iVar1));
}

int func_160(int iParam0)
{
	return (iParam0 % 32);
}

var func_161(var uParam0)
{
	var uVar0;
	
	uVar0 = func_149(func_162(uParam0), -1, 0);
	return uVar0;
}

int func_162(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_165(iVar0);
	if ((func_164() == 0 || func_163() == 0) || (func_164() == 999 && func_163() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 735;
				break;
			
			case 1:
				return 736;
				break;
			}
	}
	return 7870;
}

int func_163()
{
	return Global_25234;
}

int func_164()
{
	return Global_25233;
}

int func_165(int iParam0)
{
	return (iParam0 / 32);
}

bool func_166()
{
	return Global_1312833;
}

int func_167(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

bool func_169(int iParam0)
{
	if (!Global_70852)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(func_149(5309, -1, 0), iParam0);
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
		
		case joaat("dune5"):
			return 0;
		
		case joaat("wastelander"):
			return 1;
		
		case joaat("blazer5"):
			return 2;
		
		case joaat("phantom2"):
			return 3;
		
		case joaat("voltic2"):
			return 4;
		
		case joaat("technical2"):
			return 5;
		
		case joaat("boxville5"):
			return 6;
		
		case joaat("ruiner2"):
			return 7;
		
		default:
	}
	return 0;
}

int func_171(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_172()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xB03A1684359C50A1(Global_25, 5))
	{
		if (unk_0xB03A1684359C50A1(Global_25, 1) || unk_0xB03A1684359C50A1(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0xB03A1684359C50A1(iVar0, 5))
		{
			if (unk_0xB03A1684359C50A1(iVar0, 1) || unk_0xB03A1684359C50A1(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0xB653347679CE8520(0))
	{
		if (Global_143071.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xD194C635833AC189(iVar2, &iVar1, -1))
			{
				if (unk_0xB03A1684359C50A1(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x16DC46A28107A94A())
	{
		iVar3 = unk_0x3A75EA627A024B7A(866);
		if (unk_0xB03A1684359C50A1(iVar3, 1) || unk_0xB03A1684359C50A1(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0x73408477E157DD0C())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				unk_0xD2A9C3F486236CC5(&iVar4, 1);
				unk_0xD2A9C3F486236CC5(&iVar4, 3);
				unk_0xD2A9C3F486236CC5(&iVar4, 5);
				unk_0xD2A9C3F486236CC5(&Global_25, 1);
				unk_0xD2A9C3F486236CC5(&Global_25, 3);
				unk_0xD2A9C3F486236CC5(&Global_25, 5);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (unk_0x16DC46A28107A94A())
				{
					iVar4 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&iVar4, 1);
					unk_0xD2A9C3F486236CC5(&iVar4, 3);
					unk_0x167AC4B8CEEB1F11(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_173(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
	}
	return *uParam1 != -1f;
}

int func_174(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 64:
			unk_0xD2A9C3F486236CC5(uParam1, 4);
			break;
		
		case 67:
			unk_0xD2A9C3F486236CC5(uParam1, 4);
			break;
		
		case 72:
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			break;
		
		case 117:
			unk_0x62148293B793073B(uParam1, 1);
			break;
		
		case 49:
			unk_0x62148293B793073B(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			break;
		
		case 118:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			unk_0x62148293B793073B(uParam1, 1);
			break;
		
		case 1:
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			break;
		
		case 119:
			unk_0x62148293B793073B(uParam1, 1);
			break;
		
		case 77:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			unk_0x62148293B793073B(uParam1, 1);
			unk_0x62148293B793073B(uParam1, 2);
			break;
		
		case 120:
			unk_0x62148293B793073B(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			unk_0x62148293B793073B(uParam1, 2);
			break;
		
		case 130:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			break;
		
		case 132:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			break;
		
		case 135:
			unk_0x62148293B793073B(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			break;
		
		case 137:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			break;
		
		case 141:
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			unk_0x62148293B793073B(uParam1, 6);
			break;
		
		case 147:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			unk_0xD2A9C3F486236CC5(uParam1, 2);
			unk_0xD2A9C3F486236CC5(uParam1, 3);
			unk_0xD2A9C3F486236CC5(uParam1, 4);
			unk_0xD2A9C3F486236CC5(uParam1, 5);
			unk_0xD2A9C3F486236CC5(uParam1, 6);
			unk_0xD2A9C3F486236CC5(uParam1, 7);
			unk_0xD2A9C3F486236CC5(uParam1, 8);
			break;
		
		case 203:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			unk_0x62148293B793073B(uParam1, 1);
			unk_0x62148293B793073B(uParam1, 2);
			break;
		
		case 100:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			unk_0xD2A9C3F486236CC5(uParam1, 2);
			break;
		
		case 170:
			unk_0x62148293B793073B(uParam1, 0);
			unk_0x62148293B793073B(uParam1, 1);
			unk_0x62148293B793073B(uParam1, 2);
			break;
		
		case 160:
			unk_0xD2A9C3F486236CC5(uParam1, 15);
			break;
		
		case 161:
			unk_0xD2A9C3F486236CC5(uParam1, 15);
			break;
		
		case 192:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			unk_0x62148293B793073B(uParam1, 2);
			break;
		
		case 221:
			unk_0x62148293B793073B(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			unk_0x62148293B793073B(uParam1, 2);
			break;
		
		case 222:
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			break;
		
		case 172:
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			break;
		
		case 165:
			unk_0x62148293B793073B(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			break;
		
		case 166:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			unk_0x62148293B793073B(uParam1, 1);
			break;
		
		case 139:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			break;
		
		case 104:
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			break;
		
		case 109:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			unk_0xD2A9C3F486236CC5(uParam1, 2);
			break;
		
		case 227:
		case 252:
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			unk_0x62148293B793073B(uParam1, 2);
			unk_0x62148293B793073B(uParam1, 4);
			break;
		
		case 97:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			break;
		
		case 52:
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			break;
		
		case 108:
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			break;
		
		case 237:
			unk_0xD2A9C3F486236CC5(uParam1, 9);
			break;
		
		case 238:
			unk_0x62148293B793073B(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			unk_0xD2A9C3F486236CC5(uParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_69648)
			{
				unk_0xD2A9C3F486236CC5(uParam1, 9);
			}
			break;
		
		case 271:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			unk_0xD2A9C3F486236CC5(uParam1, 2);
			unk_0xD2A9C3F486236CC5(uParam1, 3);
			unk_0xD2A9C3F486236CC5(uParam1, 4);
			break;
		
		case 272:
			unk_0xD2A9C3F486236CC5(uParam1, 3);
			unk_0xD2A9C3F486236CC5(uParam1, 4);
			break;
		
		case 273:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			break;
		
		case 281:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			break;
		
		case 267:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			break;
		
		case 268:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			break;
		
		case 292:
			unk_0xD2A9C3F486236CC5(uParam1, 9);
			break;
		
		case 309:
			unk_0xD2A9C3F486236CC5(uParam1, 9);
			break;
		
		case 329:
			unk_0xD2A9C3F486236CC5(uParam1, 9);
			break;
		
		case 364:
			unk_0xD2A9C3F486236CC5(uParam1, 0);
			unk_0xD2A9C3F486236CC5(uParam1, 1);
			unk_0xD2A9C3F486236CC5(uParam1, 9);
			break;
		
		case 360:
			unk_0xD2A9C3F486236CC5(uParam1, 9);
			break;
		
		default:
			return;
			break;
	}
}

void func_176(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_1), sParam0, 16);
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17301.f_4953[0] = iParam0;
	Global_17301.f_4953[1] = iParam1;
	Global_17301.f_4953[2] = iParam2;
	Global_17301.f_4953[3] = iParam3;
	Global_17301.f_4953[4] = iParam4;
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17301.f_4926[0] = iParam0;
	Global_17301.f_4926[1] = iParam1;
	Global_17301.f_4926[2] = iParam2;
	Global_17301.f_4926[3] = iParam3;
	Global_17301.f_4926[4] = iParam4;
	Global_17301.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17301.f_5096++;
	}
}

void func_179(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17301.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17301.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2457316[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17301.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4959[iVar0] = 0;
		Global_17301.f_5097[iVar0] = 0;
		Global_17301.f_5226[iVar0] = 0;
		Global_17301.f_5746[iVar0] = 0f;
		Global_17301.f_5355[iVar0] = 0;
		Global_17301.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17301.f_4926[iVar0] = 0;
		Global_17301.f_4938[iVar0] = 0f;
		Global_17301.f_4932[iVar0] = -1f;
		Global_17301.f_4945[iVar0] = 0;
		Global_17301.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17301.f_4834[iVar0 /*4*/]), "", 16);
		Global_17301.f_4883[iVar0] = -1;
		Global_17301.f_4896[iVar0] = 358;
		Global_17301.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17301.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17301.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_4265799.f_16), "", 16);
	Global_4265799.f_20 = -1;
	Global_17301 = 0;
	Global_17301.f_5088 = 0;
	Global_17301.f_5089 = 0;
	Global_17301.f_5090 = 0;
	Global_17301.f_5092 = 0;
	Global_17301.f_5093 = 0;
	Global_17301.f_5094 = 0;
	Global_17301.f_5091 = 0;
	Global_17301.f_5741 = 0;
	Global_17301.f_5606 = 0;
	Global_17301.f_5605 = 0;
	Global_17301.f_5607 = 0;
	StringCopy(&(Global_17301.f_4562), "", 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = 0;
	Global_17301.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_4638 = 0;
	StringCopy(&(Global_4265799.f_21), "", 16);
	Global_4265799.f_61 = 0;
	Global_4265799.f_62 = 0;
	Global_4265799.f_63 = 0;
	Global_4265799.f_64 = 0;
	Global_4265799.f_65 = 0;
	Global_4265799.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4265799.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4265799.f_67 = 0;
	StringCopy(&(Global_17301.f_1), "", 16);
	Global_17301.f_4944 = 0f;
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_5611 = 0;
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = 0;
	Global_17301.f_5609 = 0;
	Global_17301.f_4639 = 0;
	Global_17301.f_4640 = 0;
	Global_17301.f_5095 = 10;
	Global_17301.f_5096 = 0;
	Global_17301.f_5743 = 0f;
	Global_17301.f_5744 = 0f;
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	Global_17301.f_5600 = 0f;
	Global_17301.f_5601 = 0;
	Global_17301.f_5603 = 0;
	Global_17301.f_5602 = 0;
	Global_17301.f_5604 = 0;
	Global_17301.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17301.f_5875[iVar0] = -1;
		Global_17301.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17301.f_4951 = 0f;
	Global_17301.f_4922 = 0;
	Global_17301.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17301.f_5881)
	{
		Global_17301.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_7906 = 0;
	Global_17301.f_7901 = 0;
	Global_17301.f_7911 = 0;
	Global_17301.f_7916 = 0;
	Global_17301.f_7921 = 0;
	Global_17301.f_7923 = 0;
	Global_17301.f_7929 = 0;
	Global_17298 = 0.05f;
	Global_17299 = 0.05f;
	Global_17300 = 0.225f;
	fVar2 = unk_0x47DA03BCFF902E84(0);
	if (bParam0)
	{
		Global_17300 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17300 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17300 = 0.225f;
	}
}

void func_180()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		unk_0xB5767C907BB1B949(0.325f, 0.3f);
	}
}

int func_181(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_69(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x557001354138B7FB(unk_0x0A91D180DDC7A1B8()))
	{
		return 0;
	}
	if (func_79(0))
	{
		return 0;
	}
	if (unk_0xEAE1A41FBC3984B1())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36563[iVar0 /*32*/] == 1 && Global_36563[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36563[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36563[iVar0 /*32*/].f_5 = 1;
			Global_36563[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36563[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36563[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_182(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_72(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17301.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xFAFFA408239A026B(&(Global_17301.f_5505[iVar0 /*4*/])))
	{
		unk_0x8E058779F430F4D7(&(Global_17301.f_5505[iVar0 /*4*/]), 9);
		Global_17301.f_5498[iVar0] = 1;
		if (!unk_0x04BF76BDE53874AF(&(Global_17301.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x1E7BE791ACBDDC05("CommonMenu", 0);
	Global_17301.f_5484[iVar0] = 1;
	if (!unk_0x1865CC0DAB5F6A86("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x1E7BE791ACBDDC05("MPShopSale", 0);
		Global_17301.f_5491[iVar0] = 1;
		if (!unk_0x1865CC0DAB5F6A86("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17301.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_183(&(Global_17301.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_183(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x5C716BBF766E1C70(*uParam0))
			{
				*uParam0 = unk_0xBD7D7877C82BE42F(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x5C716BBF766E1C70(*uParam0))
					{
						uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x5C716BBF766E1C70(*uParam0))
			{
				uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x5C716BBF766E1C70(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_184(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

var func_185(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

void func_186(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xE7FAF8E78F7D3A73(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x51CFE20A158947F4())
	{
		if (!*iParam0 == -1)
		{
			func_68(iParam0);
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
		if (!Global_36563[iVar0 /*32*/])
		{
			Global_36563[iVar0 /*32*/] = 1;
			Global_36563[iVar0 /*32*/].f_1 = Global_36764;
			Global_36764++;
			Global_36563[iVar0 /*32*/].f_4 = 0;
			Global_36563[iVar0 /*32*/].f_29 = 0;
			Global_36563[iVar0 /*32*/].f_5 = 0;
			Global_36563[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36563[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36563[iVar0 /*32*/].f_6 = iParam3;
			Global_36563[iVar0 /*32*/].f_31 = unk_0xBCF9D020FA9C313D();
			Global_36563[iVar0 /*32*/].f_7 = 0;
			Global_36563[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xFAFFA408239A026B(sParam4))
			{
				Global_36563[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36563[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36563[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36563[iVar0 /*32*/].f_12 = 0;
				Global_36563[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36563[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_187(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 312)
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_104551.f_25152[iParam0], iVar0);
}

int func_188(int iParam0)
{
	int iVar0;
	int iVar1[128];
	
	if (func_191(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_104551.f_18544[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_42() && !unk_0x44243F2E2F58B8E3())
	{
		if (func_190(33, 0) && !func_189(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_104551.f_25043.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_104551.f_25043.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_104551.f_25043.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_104551.f_25043.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_104551.f_25043.f_7)
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

int func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_104551.f_7658.f_764)
	{
		if (Global_104551.f_7658.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	if (unk_0xB03A1684359C50A1(Global_104551.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_191(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_668.f_1307, 2))
		{
			return 1;
		}
	}
	if (unk_0xA8AC70C7EA782CC4())
	{
		if (!bParam1 || unk_0xA1C84586015AE5DB())
		{
			if (!unk_0xC57A05B38A912073() && !unk_0x0A8A596EB9C068FA())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0xE9A69EF13B00AA9D())
		{
			return 0;
		}
	}
	if (unk_0xA8AC70C7EA782CC4())
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_191(1, 1))
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			iVar0++;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_104551.f_18544[45 /*6*/], 3))
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			iVar0++;
		}
	}
	if (func_42() && !unk_0x44243F2E2F58B8E3())
	{
		if (func_190(33, 0) && !func_189(1751306471))
		{
			iVar0++;
		}
		if (Global_104551.f_25043.f_3)
		{
			iVar0++;
		}
		if (Global_104551.f_25043.f_4)
		{
			iVar0++;
		}
		if (Global_104551.f_25043.f_5)
		{
			iVar0++;
		}
		if (Global_104551.f_25043.f_6)
		{
			iVar0++;
		}
		if (Global_104551.f_25043.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_193(float fParam0)
{
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()) && !unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0xC37BC4D4141B3EC0(unk_0x18F7BE9ACB7D08F4()) > 0;
		}
		else
		{
			return unk_0x63597C1C6C539D5F(unk_0x18F7BE9ACB7D08F4(), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), fParam0) > 0;
		}
	}
	return 0;
}

bool func_194(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_195()
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
	if ((((((((((((((((Local_402.f_29.f_80 && Local_402.f_29.f_69) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) && Local_402.f_2 == 0) && Local_402.f_0 != -1) && func_66(Local_402.f_0, 0)) && func_66(Local_402.f_0, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_68213) && !func_194(1)) && !func_274()) || (((Local_402.f_3 > 1 && !func_194(0)) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) && !func_274()))
	{
		func_273(Local_402.f_0, &Local_546);
		fVar13 = 0f;
		sVar14 = "ANIM@APT_TRANS@GARAGE";
		Var15 = { 198.3659f, -1020.273f, -100f };
		Var18 = { Var15 };
		Var21 = { 198.9538f, -1026.13f, -100f };
		iVar24 = func_272(Local_402.f_0);
		switch (Local_402.f_3)
		{
			case 0:
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && !unk_0x51CFE20A158947F4())
				{
					Local_402.f_3 = 10;
					return;
				}
				if ((((((unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && (func_271(unk_0x93FDA3BF59E7B77F(unk_0x18F7BE9ACB7D08F4()), Local_402.f_29.f_68, 90f) || unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))) && unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) && !unk_0x422DF8890E5A5CBB(unk_0x18F7BE9ACB7D08F4())) && !unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) && !unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2)) && (iVar24 == iLocal_672 || iVar24 == 145))
				{
					if (func_270())
					{
						bVar25 = true;
						if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
						{
							iVar12 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 1);
							if (unk_0x31F12808DC47A9E5(iVar12))
							{
								if (unk_0xC4B84EB67F78C1F0(iVar12, 0))
								{
									iVar26 = unk_0x4F69FBD64CDF125B(iVar12);
									if (((((((((!func_63(iVar26) || func_62(iVar12)) || func_61(iVar12)) || !func_38(iVar26, 0)) || unk_0x88EA695420CF2150(iVar12)) || ((!unk_0x881022B41FD53CD6(iVar26) && !unk_0x422717A3330EA45D(iVar26)) && !unk_0x309C05EAA86E194E(iVar26))) || iVar26 == joaat("monster")) || unk_0x25A40FAC128F45B0(iVar12)) || unk_0xB84B6B13ADF5E3DF(iVar12)) || (unk_0xE560C15EC5C2F304(unk_0x18F7BE9ACB7D08F4()) && unk_0xE7FAF8E78F7D3A73(joaat("taxi_procedural")) > 0))
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
						else if (unk_0x3027D3DC1225727A(sVar14))
						{
							unk_0x831CD0FBFB26EC7E(sVar14);
							if (!unk_0x028356968FDD2DF2(sVar14))
							{
								bVar25 = false;
							}
						}
						if (bVar25)
						{
							func_186(&iLocal_656, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							iLocal_1034 = 0;
							Local_402.f_3 = 1;
						}
						else if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
						{
							if (!unk_0x622E10ED992CEB95() || func_185("WEB_VEH_INV"))
							{
								func_184("WEB_VEH_INV", -1);
								StringCopy(&cLocal_1023, "WEB_VEH_INV", 16);
								bVar11 = true;
							}
						}
					}
					else if (!unk_0x622E10ED992CEB95() || func_185("WEB_VEH_FULL"))
					{
						func_184("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_1023, "WEB_VEH_FULL", 16);
						bVar11 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_1032)
				{
					if (!unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
					{
						iLocal_1032 = 0;
						unk_0x831CD0FBFB26EC7E(sVar14);
						if (unk_0x028356968FDD2DF2(sVar14))
						{
							iLocal_1032 = 1;
						}
					}
					else
					{
						unk_0x334F1DD67B2EC86A(sVar14);
						iLocal_1032 = 1;
					}
				}
				iVar27 = 1;
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					iVar12 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 1);
					if (unk_0x31F12808DC47A9E5(iVar12))
					{
						if (unk_0xC4B84EB67F78C1F0(iVar12, 0))
						{
							iVar28 = unk_0x4F69FBD64CDF125B(iVar12);
							if ((((((((!func_63(iVar28) || func_62(iVar12)) || func_61(iVar12)) || unk_0x88EA695420CF2150(iVar12)) || ((!unk_0x881022B41FD53CD6(iVar28) && !unk_0x422717A3330EA45D(iVar28)) && !unk_0x309C05EAA86E194E(iVar28))) || iVar28 == joaat("monster")) || unk_0x25A40FAC128F45B0(iVar12)) || unk_0xB84B6B13ADF5E3DF(iVar12)) || (unk_0xE560C15EC5C2F304(unk_0x18F7BE9ACB7D08F4()) && unk_0xE7FAF8E78F7D3A73(joaat("taxi_procedural")) > 0))
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
				if (((((((((unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && (func_271(unk_0x93FDA3BF59E7B77F(unk_0x18F7BE9ACB7D08F4()), Local_402.f_29.f_68, 90f) || unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))) && unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) && func_270()) && !unk_0x422DF8890E5A5CBB(unk_0x18F7BE9ACB7D08F4())) && !unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) && !unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2)) && !func_274()) && (iVar24 == iLocal_672 || iVar24 == 145)) && iVar27)
				{
					if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()) || (unk_0x028356968FDD2DF2(sVar14) || !unk_0x3027D3DC1225727A(sVar14)))
					{
						if (func_181(iLocal_656, 1))
						{
							func_68(&iLocal_656);
							iLocal_1032 = 0;
							Local_402.f_3 = 2;
						}
						func_268(47, 0);
						func_263(47, 0);
						Local_402.f_112 = unk_0x0E40E816537BFB87(Var15, "v_garagem_sp");
						if (unk_0xB79050CDE709F080(Local_402.f_112))
						{
							if (!unk_0x44057CDFA5C14B91(Local_402.f_112))
							{
								if ((unk_0x756DE011CEDBBD7E() % 10) == 0)
								{
									unk_0x31EA01EDFF03ED26(Local_402.f_112);
								}
							}
							StringCopy(&Global_32581, "v_garagem_sp", 32);
						}
						if (!iLocal_1031 && !unk_0x8BDE5BE4E46BA35F())
						{
							if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
							{
								iVar29 = func_261(Local_402.f_0);
								func_60(&Var30, iVar29);
								Var18 = { Var30 };
								unk_0x2701380D2C44C561(Var18, 20f, 0);
							}
							else
							{
								unk_0x2701380D2C44C561(Var21 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_1031 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1031 && unk_0x8BDE5BE4E46BA35F())
					{
						unk_0xC7BB901E267A910A();
						iLocal_1031 = 0;
					}
					iLocal_1032 = 0;
					func_68(&iLocal_656);
					unk_0x334F1DD67B2EC86A(sVar14);
					Local_402.f_3 = 0;
				}
				break;
			
			case 2:
				func_268(47, 0);
				func_263(47, 0);
				unk_0x9BEC17E13AB1F07F(8);
				Global_69674.f_577 = 1;
				Global_69674.f_578 = { Local_402.f_29.f_55 };
				iLocal_1012 = unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304());
				unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
				unk_0xE560AD9B53AA9A85(unk_0x18F7BE9ACB7D08F4(), 0, 0);
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
				unk_0x4A3AD9384F0AAEA0(0);
				unk_0x77B57B2BB7F3EA0A(0);
				unk_0x41C542213B94067C(unk_0x8CFC7D6E1DA5D304());
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					iVar12 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
					if (unk_0x31F12808DC47A9E5(iVar12) && unk_0xC4B84EB67F78C1F0(iVar12, 0))
					{
						if (func_271(unk_0x93FDA3BF59E7B77F(iVar12), Local_402.f_29.f_68, 90f))
						{
							iLocal_1034 = 0;
						}
						else
						{
							iLocal_1034 = 1;
						}
						unk_0x8BA533846256EA8E(iVar12, 1, 1, 1, 1, 1, 1, 0, 0);
						unk_0x5E791DD328BCDC42(Local_546.f_86[0 /*6*/], 20f, 0);
						unk_0x8DE1BAABD1480350(Local_546.f_86[0 /*6*/], 20f, 0);
						unk_0x54C306A87B83151F(Local_546.f_86[0 /*6*/], 7f);
						unk_0x990FFD4FB6ADD630(iVar12, Local_546.f_86[0 /*6*/], 1, 0, 0, 1);
						if (iLocal_1034 && !unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
						{
							unk_0xB88121FF8A34A66F(iVar12, (Local_546.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0xB88121FF8A34A66F(iVar12, Local_546.f_86[0 /*6*/].f_3.f_2);
						}
						if (unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
						{
							unk_0xF4D78A196FDF05F5(unk_0x18F7BE9ACB7D08F4(), 0, 0, -1);
							unk_0xC741149CBDE5831B(unk_0x18F7BE9ACB7D08F4(), 1);
						}
						unk_0x9B53B2691E2B1F79(iVar12, 1084227584);
					}
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
					func_255(1, 1, 1, 0);
					func_254(&(Local_546[1 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 3;
				}
				else
				{
					if (unk_0x31F12808DC47A9E5(iLocal_1027) && !unk_0x74C2FE037DFC8B4A(iLocal_1027, 0))
					{
						if (unk_0x90D1FDC9D31B7BE1(iLocal_1027) && unk_0xE54DCC6B21FDC95A(iLocal_1027, 1))
						{
							unk_0x4F5FF3F3FDCAB15D(&iLocal_1027);
						}
					}
					iLocal_1027 = unk_0x952F33F151D40D1A();
					if ((((unk_0x31F12808DC47A9E5(iLocal_1027) && unk_0xC4B84EB67F78C1F0(iLocal_1027, 0)) && !unk_0xB6353CAE3EBC0919(unk_0x4F69FBD64CDF125B(iLocal_1027))) && !unk_0xD8BB60C76D29E4BB(unk_0x4F69FBD64CDF125B(iLocal_1027))) && !unk_0x9605D2F02FA93911(unk_0x4F69FBD64CDF125B(iLocal_1027)))
					{
						if (!unk_0x90D1FDC9D31B7BE1(iLocal_1027))
						{
							unk_0x337F2213526139E0(iLocal_1027, 0, 0);
						}
						if (unk_0x31F12808DC47A9E5(iLocal_1027) && unk_0xC4B84EB67F78C1F0(iLocal_1027, 0))
						{
							if (!bVar51)
							{
								if (unk_0x11BBEE2752B9D0C8(iLocal_1027, Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0))
								{
									bVar51 = true;
								}
							}
							if (!bVar51)
							{
								fVar52 = unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iLocal_1027, 1), Local_546[0 /*15*/]);
								if (fVar52 < (5f * 5f))
								{
									bVar51 = true;
								}
							}
							if (bVar51)
							{
								iVar53 = func_48(24);
								if (func_253(&Local_776, 24))
								{
									func_248(&Local_776, func_438());
									if (unk_0x31F12808DC47A9E5(iVar53))
									{
										unk_0xBECECD970F645217(&iVar53);
									}
								}
								if (Local_402.f_0 == 21)
								{
									unk_0x7EE425AE3317BA69(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
									func_246(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_402.f_0 == 22)
								{
									unk_0x7EE425AE3317BA69(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
									func_246(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_402.f_0 == 23)
								{
									unk_0x7EE425AE3317BA69(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
									func_246(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								unk_0x9B53B2691E2B1F79(iLocal_1027, 1084227584);
							}
						}
					}
					else
					{
						iLocal_1027 = 0;
					}
					Var54 = { Local_402.f_29 * Vector(2f, 2f, 2f) + Local_402.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var57 = { Local_402.f_29 * Vector(1f, 1f, 1f) + Local_402.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29, Var54.f_0, Var54.f_1, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0x61E9B3BFA06B017B(0, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Var54.f_0, Var54.f_1, Local_402.f_29.f_2, Var57.f_0, Var57.f_1, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0x61E9B3BFA06B017B(0, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Var57.f_0, Var57.f_1, Local_402.f_29.f_2, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0x61E9B3BFA06B017B(0, 2))
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
						switch (unk_0x61E9B3BFA06B017B(0, 6))
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
					unk_0x5E791DD328BCDC42(Local_546.f_73[0 /*4*/], 20f, 0);
					unk_0x8DE1BAABD1480350(Local_546.f_86[0 /*6*/], 20f, 0);
					unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Local_546.f_73[0 /*4*/], 1, 0, 0, 1);
					unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), Local_546.f_73[0 /*4*/].f_3);
					iLocal_661 = unk_0x3C3438327FFEB224(Local_546.f_73[0 /*4*/], 0f, 0f, Local_546.f_73[0 /*4*/].f_3, 2);
					unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0, 1148846080, 0);
					func_255(1, 1, 1, 0);
					func_254(&(Local_546[0 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 4;
				}
				Local_402.f_112 = unk_0x0E40E816537BFB87(Var15, "v_garagem_sp");
				if (unk_0xB79050CDE709F080(Local_402.f_112))
				{
					if (!unk_0x44057CDFA5C14B91(Local_402.f_112))
					{
						unk_0x31EA01EDFF03ED26(Local_402.f_112);
					}
					StringCopy(&Global_32581, "v_garagem_sp", 32);
				}
				if (!iLocal_1031)
				{
					if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
					{
						iVar60 = func_261(Local_402.f_0);
						func_60(&Var61, iVar60);
						Var18 = { Var61 };
						unk_0x2701380D2C44C561(Var18, 20f, 0);
					}
					else
					{
						unk_0x2701380D2C44C561(Var21, 20f, 0);
					}
				}
				unk_0xD2A9C3F486236CC5(&(Local_674.f_9), 25);
				func_242(198.0043f, -999.7775f, -100f, 50f, 0);
				func_111(Local_402.f_0);
				func_111(26);
				func_111(29);
				func_111(32);
				func_111(28);
				func_111(31);
				func_111(34);
				func_111(27);
				func_111(30);
				func_111(33);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1033 = 0;
				break;
			
			case 4:
				bVar82 = true;
				if (!unk_0x8BDE5BE4E46BA35F())
				{
				}
				else if (unk_0x34CC31673AD34B53())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0xB79050CDE709F080(Local_402.f_112))
				{
					if (!unk_0x44057CDFA5C14B91(Local_402.f_112))
					{
						unk_0x31EA01EDFF03ED26(Local_402.f_112);
					}
					StringCopy(&Global_32581, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = unk_0x0E40E816537BFB87(Var15, "v_garagem_sp");
				}
				if (func_241())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0x5400DC5FAEBF30F0(Local_402.f_110) && unk_0xA3E9633FD3E0D8EB(Local_402.f_110))
				{
					if (unk_0x644D3EC290513DA9(Local_402.f_110))
					{
						bVar82 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else if (unk_0x5400DC5FAEBF30F0(Local_402.f_111) && unk_0xA3E9633FD3E0D8EB(Local_402.f_111))
				{
					if (unk_0x644D3EC290513DA9(Local_402.f_111))
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
				if (unk_0xCF0FA6AB02EA68F7(iLocal_661))
				{
					fVar83 = unk_0x74CE979B042A1253(iLocal_661);
					if (fVar83 < 0.4f)
					{
						bVar82 = false;
					}
				}
				if (bVar82)
				{
					unk_0xFF91FEC6E57575E4(800);
					Local_402.f_3 = 5;
				}
				break;
			
			case 5:
				if (unk_0xEC0ECEF2AF3FDA8D())
				{
					iVar84 = unk_0x2D524E0AFDB169D5();
					unk_0x929C3CBA660376D5(iVar84, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0x7A3CC65A48A983E7(iVar84, "hold", (2250f / 1000f));
					func_255(0, 1, 1, 0);
					unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
					if (unk_0x5400DC5FAEBF30F0(Local_402.f_110))
					{
						unk_0x2C535610856B3F4D(Local_402.f_110, 0);
						unk_0x13AD763DBD687842(Local_402.f_110, 0);
					}
					if (unk_0x5400DC5FAEBF30F0(Local_402.f_111))
					{
						unk_0x2C535610856B3F4D(Local_402.f_111, 0);
						unk_0x13AD763DBD687842(Local_402.f_111, 0);
					}
					if (unk_0x31F12808DC47A9E5(iLocal_1037))
					{
						unk_0xF342BF6A7A4C7A8F(iLocal_1037, 1, 0);
						unk_0x73D7E57BF0ED7FEB(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
					unk_0x9BEC17E13AB1F07F(8);
					if (unk_0xCF0FA6AB02EA68F7(iLocal_661))
					{
						unk_0xF2918DC5CF9EC327(iLocal_661);
					}
					iLocal_661 = -1;
					unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
					unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), 194.5394f, -1026.32f, -100f, 1, 0, 0, 1);
					unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 334.1665f);
					unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 1);
					unk_0xA3F41A1968319181(0f);
					unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 6;
				}
				break;
			
			case 6:
				func_240(Local_402.f_0);
				if (unk_0xEC0ECEF2AF3FDA8D() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					unk_0x334F1DD67B2EC86A(sVar14);
					func_239();
					if (unk_0x8BDE5BE4E46BA35F())
					{
						unk_0xC7BB901E267A910A();
					}
					unk_0x8359CF51370FC969(800);
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
					unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 0);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					Local_402.f_3 = 10;
				}
				break;
			
			case 3:
				func_240(Local_402.f_0);
				bVar85 = true;
				if (!unk_0x8BDE5BE4E46BA35F())
				{
				}
				else if (unk_0x34CC31673AD34B53())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0xB79050CDE709F080(Local_402.f_112))
				{
					if (!unk_0x44057CDFA5C14B91(Local_402.f_112))
					{
						unk_0x31EA01EDFF03ED26(Local_402.f_112);
					}
					StringCopy(&Global_32581, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = unk_0x0E40E816537BFB87(Var15, "v_garagem_sp");
				}
				if (func_241())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0x5400DC5FAEBF30F0(Local_402.f_110) && unk_0xA3E9633FD3E0D8EB(Local_402.f_110))
				{
					if (unk_0x644D3EC290513DA9(Local_402.f_110))
					{
						bVar85 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else if (unk_0x5400DC5FAEBF30F0(Local_402.f_111) && unk_0xA3E9633FD3E0D8EB(Local_402.f_111))
				{
					if (unk_0x644D3EC290513DA9(Local_402.f_111))
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
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					Var86 = { 0f, 0f, 0f };
					Var86.f_3 = 0f;
					func_231(unk_0x18F7BE9ACB7D08F4(), Local_546.f_86[0 /*6*/], Local_546.f_66[0 /*3*/], ((Local_546[1 /*15*/].f_14 * 1000f) - 500f), Var86, 2, &fVar13);
				}
				if (bVar85)
				{
					func_239();
					unk_0xC1B1E9A034A63A62(0);
					unk_0xFF91FEC6E57575E4(800);
					Local_402.f_3 = 35;
				}
				break;
			
			case 35:
				bVar90 = true;
				func_240(Local_402.f_0);
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546.f_61[1] * 1000f))
				{
					bVar90 = false;
				}
				if (bVar90)
				{
					func_239();
					func_255(0, 1, 1, 0);
					unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
					if (unk_0x5400DC5FAEBF30F0(Local_402.f_110))
					{
						unk_0x2C535610856B3F4D(Local_402.f_110, 0);
						unk_0x13AD763DBD687842(Local_402.f_110, 0);
					}
					if (unk_0x5400DC5FAEBF30F0(Local_402.f_111))
					{
						unk_0x2C535610856B3F4D(Local_402.f_111, 0);
						unk_0x13AD763DBD687842(Local_402.f_111, 0);
					}
					if (unk_0x31F12808DC47A9E5(iLocal_1037))
					{
						unk_0xF342BF6A7A4C7A8F(iLocal_1037, 1, 0);
						unk_0x73D7E57BF0ED7FEB(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
					unk_0x9BEC17E13AB1F07F(8);
					if (unk_0x8BDE5BE4E46BA35F())
					{
						unk_0xC7BB901E267A910A();
					}
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						iVar12 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
						if (unk_0x31F12808DC47A9E5(iVar12) && unk_0xC4B84EB67F78C1F0(iVar12, 0))
						{
							iVar91 = func_261(Local_402.f_0);
							func_60(&Var92, iVar91);
							unk_0x990FFD4FB6ADD630(iVar12, Var92, 1, 0, 0, 1);
							unk_0xB88121FF8A34A66F(iVar12, Var92.f_3);
							unk_0x16255149C63FBEEC(iVar12, 1);
							unk_0x0F3F86C855582784(iVar12, 0, 1, 0);
							unk_0x91663DAD5DDAFA96(iVar12, 4);
							unk_0x7239B8AA404EA53B(iVar12, 1, 0);
							unk_0x7239B8AA404EA53B(iVar12, 0, 0);
							unk_0xA0611ED281CB47AA(iVar12, 0);
							unk_0x8BA533846256EA8E(iVar12, 0, 0, 0, 0, 0, 0, 0, 0);
							unk_0xD7A975DB04C06BA4(unk_0x18F7BE9ACB7D08F4(), iVar12, 0);
							unk_0x73D7E57BF0ED7FEB(iVar12, 0);
							Var113.f_9 = 49;
							Var113.f_59 = 2;
							func_32(iVar12, &Var113);
							func_112(iVar91, &Var113, 0f, 0f, 0f, -1f, 145);
							func_30(iVar91, iVar12, 1);
							func_230(iVar12);
						}
						unk_0xA3F41A1968319181(0f);
						unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
					}
					iVar191 = unk_0x74A7D93DBA7322F5(unk_0x18F7BE9ACB7D08F4(), &uVar0, -1);
					iVar192 = 0;
					while (iVar192 < iVar191)
					{
						if ((unk_0x31F12808DC47A9E5(uVar0[iVar192]) && !unk_0x0FAE113CE72ED842(uVar0[iVar192])) && unk_0x3F34AC735B9567E3(uVar0[iVar192], unk_0x7C9C05CA6A57A7E1(unk_0x8CFC7D6E1DA5D304())))
						{
							unk_0x3FF1EE7D5FD7094C(uVar0[iVar192], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar192++;
					}
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					unk_0x8359CF51370FC969(800);
					Local_402.f_3 = 10;
				}
				break;
			
			case 10:
				if (unk_0x83666F9FB8FEBD4B() < 7000 || !Global_104551.f_32429.f_4800)
				{
					if (!Global_104551.f_32429.f_4800)
					{
						if (iLocal_1013 == 0)
						{
							func_184("CAR_GAR_05", -1);
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
							func_184("CAR_GAR_06", -1);
							StringCopy(&cLocal_1023, "CAR_GAR_06", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								Global_104551.f_32429.f_4800 = 1;
							}
						}
					}
					else
					{
						func_184("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_1023, "CAR_GAR_EXIT", 16);
						bVar11 = true;
					}
				}
				else
				{
					Global_104551.f_32429.f_4800 = 1;
				}
				iVar193 = 0;
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (iLocal_656 != -1)
					{
						func_68(&iLocal_656);
					}
					iVar12 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
					if (unk_0x31F12808DC47A9E5(iVar12) && unk_0xC4B84EB67F78C1F0(iVar12, 0))
					{
						if (unk_0xB0A09312AB246F3C(iVar12) || unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
						{
							if (!(unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4())))
							{
								if ((((unk_0xA9B840C2F681E3E3(0, 71) != 0f || unk_0xFC0C00F9DE2AEC93(0, 71)) || unk_0x02EA7C5633421A0F(0, 71)) || unk_0x3199F4F904C324F9(0, 71)) || unk_0xBAEF57A3E716CC8D(0, 71))
								{
									iVar193 = 1;
								}
								if ((((unk_0xA9B840C2F681E3E3(0, 72) != 0f || unk_0xFC0C00F9DE2AEC93(0, 72)) || unk_0x02EA7C5633421A0F(0, 72)) || unk_0x3199F4F904C324F9(0, 72)) || unk_0xBAEF57A3E716CC8D(0, 72))
								{
									iVar193 = 1;
								}
							}
						}
					}
				}
				else
				{
					unk_0x831CD0FBFB26EC7E(sVar14);
					if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, 1, 0) && func_271(unk_0x93FDA3BF59E7B77F(unk_0x18F7BE9ACB7D08F4()), 180f, 90f))
					{
						if (iLocal_655 != -1)
						{
							func_68(&iLocal_655);
						}
						if (iLocal_656 == -1)
						{
							func_186(&iLocal_656, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_655 != -1 && !iLocal_656 == -1)
						{
							if (func_181(iLocal_656, 1))
							{
								func_68(&iLocal_656);
								iVar193 = 1;
							}
						}
					}
					else if (iLocal_656 != -1)
					{
						func_68(&iLocal_656);
					}
				}
				if (iLocal_1016)
				{
					iVar193 = 1;
				}
				if (iVar193 && !func_229())
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) || iLocal_1016)
					{
						unk_0xC1B1E9A034A63A62(0);
						unk_0x2701380D2C44C561(Local_546.f_73[2 /*4*/], 20f, 0);
						if (iLocal_656 != -1)
						{
							func_68(&iLocal_656);
						}
						Local_402.f_3 = 12;
					}
					else if (unk_0x028356968FDD2DF2(sVar14))
					{
						sLocal_1035 = "";
						switch (unk_0x61E9B3BFA06B017B(0, 6))
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
						iLocal_661 = unk_0x3C3438327FFEB224(Local_546.f_73[1 /*4*/], 0f, 0f, Local_546.f_73[1 /*4*/].f_3, 2);
						unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0, 1148846080, 0);
						func_255(1, 1, 1, 0);
						func_254(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
						unk_0x2701380D2C44C561(Local_546.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_656 != -1)
						{
							func_68(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
					else if (!unk_0x3027D3DC1225727A(sVar14))
					{
						unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Local_546.f_73[1 /*4*/], 1, 0, 0, 1);
						unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), Local_546.f_73[1 /*4*/].f_3);
						func_255(1, 1, 1, 0);
						func_254(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
						unk_0x2701380D2C44C561(Local_546.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_656 != -1)
						{
							func_68(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar194 = true;
				if (!unk_0x8BDE5BE4E46BA35F())
				{
				}
				else if (unk_0x34CC31673AD34B53())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (func_241())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (unk_0x5400DC5FAEBF30F0(Local_402.f_110) && unk_0xA3E9633FD3E0D8EB(Local_402.f_110))
				{
					if (unk_0x644D3EC290513DA9(Local_402.f_110))
					{
						bVar194 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else if (unk_0x5400DC5FAEBF30F0(Local_402.f_111) && unk_0xA3E9633FD3E0D8EB(Local_402.f_111))
				{
					if (unk_0x644D3EC290513DA9(Local_402.f_111))
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
				if (unk_0xCF0FA6AB02EA68F7(iLocal_661))
				{
					fVar195 = unk_0x74CE979B042A1253(iLocal_661);
					if (fVar195 < 0.4f)
					{
						bVar194 = false;
					}
				}
				if (bVar194)
				{
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					unk_0xFF91FEC6E57575E4(800);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 13;
				}
				break;
			
			case 12:
				unk_0x9C7EE7DE7041A3F4(0, 75, 1);
				if (unk_0x83666F9FB8FEBD4B() > 500)
				{
					iVar196 = func_228();
					if ((iVar196 == 21 || iVar196 == 22) || iVar196 == 23)
					{
						Var197.f_9 = 49;
						Var197.f_59 = 2;
						func_112(iVar196, &Var197, 0f, 0f, 0f, -1f, 145);
						func_114(iVar196);
					}
					else if (iVar196 != -1)
					{
						if (!iLocal_1016)
						{
							func_444(iVar196, 0);
							func_114(iVar196);
						}
					}
					unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
					unk_0xE560AD9B53AA9A85(unk_0x18F7BE9ACB7D08F4(), 0, 0);
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
					unk_0x334F1DD67B2EC86A(sVar14);
					unk_0xFF91FEC6E57575E4(800);
					Local_402.f_3 = 13;
				}
				break;
			
			case 13:
				if (unk_0xEC0ECEF2AF3FDA8D())
				{
					iVar275 = unk_0x2D524E0AFDB169D5();
					unk_0x929C3CBA660376D5(iVar275, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0x7A3CC65A48A983E7(iVar275, "hold", (2250f / 1000f));
					unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
					if (unk_0x5400DC5FAEBF30F0(Local_402.f_110))
					{
						unk_0x2C535610856B3F4D(Local_402.f_110, 0);
						unk_0x13AD763DBD687842(Local_402.f_110, 0);
					}
					if (unk_0x5400DC5FAEBF30F0(Local_402.f_111))
					{
						unk_0x2C535610856B3F4D(Local_402.f_111, 0);
						unk_0x13AD763DBD687842(Local_402.f_111, 0);
					}
					if (unk_0x31F12808DC47A9E5(iLocal_1037))
					{
						unk_0xF342BF6A7A4C7A8F(iLocal_1037, 1, 0);
						unk_0x73D7E57BF0ED7FEB(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
					unk_0x9BEC17E13AB1F07F(8);
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if (!iLocal_1016)
						{
							iVar12 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
							if (unk_0x31F12808DC47A9E5(iVar12) && unk_0xC4B84EB67F78C1F0(iVar12, 0))
							{
								unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
								unk_0x990FFD4FB6ADD630(iVar12, Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
								unk_0xB88121FF8A34A66F(iVar12, Local_402.f_29.f_77[1]);
								unk_0x9B53B2691E2B1F79(iVar12, 1084227584);
							}
						}
					}
					else
					{
						if (unk_0xCF0FA6AB02EA68F7(iLocal_661))
						{
							unk_0xF2918DC5CF9EC327(iLocal_661);
						}
						iLocal_661 = -1;
						unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
						unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
						unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29.f_77[1]);
					}
					unk_0xA3F41A1968319181(0f);
					unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 14;
				}
				break;
			
			case 14:
				if (unk_0xEC0ECEF2AF3FDA8D() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					bVar276 = true;
					if (iLocal_1016)
					{
						unk_0x9016574B77A748EE(iLocal_1017);
						if (unk_0xEDFE27D1AEA0EA7F(iLocal_1017))
						{
							iVar277 = unk_0x3064CCF56C6C32BC(iLocal_1017, Local_402.f_29.f_70[0 /*3*/], Local_402.f_29.f_77[0], 1, 1, 0);
							if (iLocal_1017 == joaat("windsor"))
							{
								unk_0xCB8AD4899214D0E6(iVar277, 0);
							}
							if (unk_0x31F12808DC47A9E5(iVar277) && unk_0xC4B84EB67F78C1F0(iVar277, 0))
							{
								unk_0x8D77EFA08616AD64(unk_0x18F7BE9ACB7D08F4(), iVar277, -1);
								unk_0xD5D1BF12DEFE6979(iVar277, 0f);
								unk_0x419C9117019F2E5A(iLocal_1017);
								if (func_115(iLocal_1017))
								{
									switch (iLocal_1017)
									{
										case joaat("marshall"):
											unk_0xCB8AD4899214D0E6(iVar277, iLocal_651);
											break;
										}
								}
								unk_0x4F5FF3F3FDCAB15D(&iVar277);
							}
							iLocal_1016 = 0;
						}
						else
						{
							bVar276 = false;
						}
					}
					if (!unk_0x8BDE5BE4E46BA35F())
					{
					}
					else if (unk_0x34CC31673AD34B53())
					{
					}
					else
					{
						bVar276 = false;
					}
					if (bVar276)
					{
						if (unk_0x31F12808DC47A9E5(iLocal_1027) && unk_0xC4B84EB67F78C1F0(iLocal_1027, 0))
						{
							iVar278 = func_48(24);
							if (func_253(&Local_776, 24))
							{
								func_248(&Local_776, func_438());
								if (unk_0x31F12808DC47A9E5(iVar278))
								{
									unk_0xBECECD970F645217(&iVar278);
								}
							}
							if (Local_402.f_0 == 21)
							{
								unk_0x7EE425AE3317BA69(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
								unk_0x990FFD4FB6ADD630(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
								unk_0xB88121FF8A34A66F(iLocal_1027, 154.4846f);
								func_246(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_402.f_0 == 22)
							{
								unk_0x7EE425AE3317BA69(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
								unk_0x990FFD4FB6ADD630(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
								unk_0xB88121FF8A34A66F(iLocal_1027, 319.6985f);
								func_246(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_402.f_0 == 23)
							{
								unk_0x7EE425AE3317BA69(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
								unk_0x990FFD4FB6ADD630(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
								unk_0xB88121FF8A34A66F(iLocal_1027, 270.8741f);
								func_246(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							unk_0x9B53B2691E2B1F79(iLocal_1027, 1084227584);
						}
						if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
						{
							iVar12 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
							if (unk_0x31F12808DC47A9E5(iVar12) && unk_0xC4B84EB67F78C1F0(iVar12, 0))
							{
								unk_0x990FFD4FB6ADD630(iVar12, Local_546.f_66[1 /*3*/], 1, 0, 0, 1);
								unk_0xB88121FF8A34A66F(iVar12, Local_402.f_29.f_77[0]);
								unk_0x9B53B2691E2B1F79(iVar12, 1084227584);
								if ((iLocal_1017 == joaat("monster") || iLocal_1017 == joaat("marshall")) || iLocal_1017 == joaat("rhino"))
								{
									unk_0x363C972963D518BE(iVar12, false);
								}
								else
								{
									unk_0x363C972963D518BE(iVar12, true);
								}
								if (unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
								{
									unk_0xF4D78A196FDF05F5(unk_0x18F7BE9ACB7D08F4(), 0, 0, -1);
									unk_0xC741149CBDE5831B(unk_0x18F7BE9ACB7D08F4(), 1);
								}
								unk_0xA0611ED281CB47AA(iVar12, 1);
								func_201(func_438(), &iVar12, 3, 1);
							}
							unk_0x8359CF51370FC969(800);
							func_255(1, 1, 1, 0);
							func_254(&(Local_546[3 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
							iLocal_1034 = 0;
							iLocal_1036 = -1;
							Local_402.f_3 = 15;
						}
						else
						{
							unk_0x334F1DD67B2EC86A(sVar14);
							func_239();
							unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
							if (unk_0x5400DC5FAEBF30F0(Local_402.f_110))
							{
								unk_0x2C535610856B3F4D(Local_402.f_110, 0);
								unk_0x13AD763DBD687842(Local_402.f_110, 0);
							}
							if (unk_0x5400DC5FAEBF30F0(Local_402.f_111))
							{
								unk_0x2C535610856B3F4D(Local_402.f_111, 0);
								unk_0x13AD763DBD687842(Local_402.f_111, 0);
							}
							if (unk_0x31F12808DC47A9E5(iLocal_1037))
							{
								unk_0xF342BF6A7A4C7A8F(iLocal_1037, 1, 0);
								unk_0x73D7E57BF0ED7FEB(iLocal_1037, 0);
								iLocal_1037 = 0;
							}
							unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
							unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
							unk_0x9BEC17E13AB1F07F(8);
							unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
							unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
							unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29.f_77[1]);
							unk_0x8359CF51370FC969(800);
							unk_0xC1B1E9A034A63A62(0);
							func_242(198.0043f, -999.7775f, -100f, 50f, 0);
							unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
							Local_402.f_3 = 16;
						}
						if (Local_402.f_3 != 16)
						{
							unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
						}
						unk_0x4A3AD9384F0AAEA0(0);
						unk_0x77B57B2BB7F3EA0A(0);
						unk_0xC1B1E9A034A63A62(0);
						unk_0xA3F41A1968319181(0f);
						unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
						iVar279 = unk_0x74A7D93DBA7322F5(unk_0x18F7BE9ACB7D08F4(), &uVar0, -1);
						iVar280 = 0;
						while (iVar280 < iVar279)
						{
							if ((unk_0x31F12808DC47A9E5(uVar0[iVar280]) && !unk_0x0FAE113CE72ED842(uVar0[iVar280])) && unk_0x3F34AC735B9567E3(uVar0[iVar280], unk_0x7C9C05CA6A57A7E1(unk_0x8CFC7D6E1DA5D304())))
							{
								if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
								{
									iVar12 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
									if ((unk_0x31F12808DC47A9E5(iVar12) && unk_0xC4B84EB67F78C1F0(iVar12, 0)) && unk_0xE4752B503DF3FEC0(iVar12) > iVar280)
									{
										unk_0x8D77EFA08616AD64(uVar0[iVar280], iVar12, iVar280);
									}
								}
								else
								{
									unk_0x3FF1EE7D5FD7094C(uVar0[iVar280], Local_402.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar280++;
						}
						unk_0x9BEC17E13AB1F07F(8);
						iLocal_1033 = 0;
					}
				}
				break;
			
			case 15:
				bVar281 = true;
				if (!unk_0x8BDE5BE4E46BA35F())
				{
				}
				else if (unk_0x34CC31673AD34B53())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (func_241())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (unk_0x5400DC5FAEBF30F0(Local_402.f_110) && unk_0xA3E9633FD3E0D8EB(Local_402.f_110))
				{
					if (unk_0x644D3EC290513DA9(Local_402.f_110))
					{
						bVar281 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else if (unk_0x5400DC5FAEBF30F0(Local_402.f_111) && unk_0xA3E9633FD3E0D8EB(Local_402.f_111))
				{
					if (unk_0x644D3EC290513DA9(Local_402.f_111))
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
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					func_231(unk_0x18F7BE9ACB7D08F4(), Local_546.f_86[1 /*6*/], Local_546.f_66[1 /*3*/], ((Local_546[3 /*15*/].f_14 * 1000f) - 500f), Local_546.f_73[2 /*4*/], 3, &fVar13);
				}
				if (iLocal_1036 < 1 && func_200(unk_0x18F7BE9ACB7D08F4(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_1036 == 0)
					{
						func_242(198.0043f, -999.7775f, -100f, 50f, 0);
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
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
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
				if (unk_0xB79050CDE709F080(Local_402.f_112))
				{
					unk_0xF8BEB899F39F51F4(Local_402.f_112);
				}
				StringCopy(&Global_32581, "", 32);
				if (unk_0x8BDE5BE4E46BA35F())
				{
					unk_0xC7BB901E267A910A();
				}
				func_199(47, 1);
				func_197(47, 1);
				Global_69674.f_577 = 0;
				if (unk_0xEC0ECEF2AF3FDA8D() || unk_0xBC13F084F3B1B544())
				{
					unk_0x8359CF51370FC969(250);
				}
				unk_0xC1B1E9A034A63A62(0);
				unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
				if (unk_0x5400DC5FAEBF30F0(Local_402.f_110))
				{
					unk_0x2C535610856B3F4D(Local_402.f_110, 0);
					unk_0x13AD763DBD687842(Local_402.f_110, 0);
				}
				if (unk_0x5400DC5FAEBF30F0(Local_402.f_111))
				{
					unk_0x2C535610856B3F4D(Local_402.f_111, 0);
					unk_0x13AD763DBD687842(Local_402.f_111, 0);
				}
				if (unk_0x31F12808DC47A9E5(iLocal_1037))
				{
					unk_0xF342BF6A7A4C7A8F(iLocal_1037, 1, 0);
					unk_0x73D7E57BF0ED7FEB(iLocal_1037, 0);
					iLocal_1037 = 0;
				}
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					iVar12 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
					if (unk_0x31F12808DC47A9E5(iVar12) && unk_0xC4B84EB67F78C1F0(iVar12, 0))
					{
						unk_0x990FFD4FB6ADD630(iVar12, Local_546.f_73[2 /*4*/], 1, 0, 0, 1);
						unk_0xB88121FF8A34A66F(iVar12, Local_546.f_73[2 /*4*/].f_3);
						unk_0x9B53B2691E2B1F79(iVar12, 1084227584);
						unk_0xA3F41A1968319181(0f);
						unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
					}
				}
				unk_0x4A3AD9384F0AAEA0(1);
				unk_0x77B57B2BB7F3EA0A(1);
				func_255(0, 1, 1, 0);
				unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				if (iLocal_1012 > 0)
				{
					unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), iLocal_1012, 0);
					unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
				}
				if (((unk_0x31F12808DC47A9E5(iLocal_1027) && unk_0x90D1FDC9D31B7BE1(iLocal_1027)) && unk_0xE54DCC6B21FDC95A(iLocal_1027, 0)) && iLocal_1027 != func_48(24))
				{
					unk_0x4F5FF3F3FDCAB15D(&iLocal_1027);
				}
				unk_0x62148293B793073B(&(Local_674.f_9), 25);
				iLocal_1031 = 0;
				Local_402.f_3 = 18;
				break;
			
			case 18:
				if (unk_0xC8AB6A5E6C1E6613())
				{
					Local_402.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_69674.f_577)
		{
			func_199(47, 1);
			func_197(47, 1);
			Global_69674.f_577 = 0;
		}
		Local_402.f_3 = 0;
		if (iLocal_656 != -1)
		{
			func_68(&iLocal_656);
		}
	}
	if (Global_69674.f_577)
	{
		unk_0x12C677F73640499C();
		func_196();
		func_75(0);
		unk_0x5C7D86C4752CBC68(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_unarmed"), 1);
		unk_0xFCBDBEB257C6D3FB(2, 202);
		unk_0x9C7EE7DE7041A3F4(0, 37, 1);
		unk_0x9C7EE7DE7041A3F4(0, 157, 1);
		unk_0x9C7EE7DE7041A3F4(0, 158, 1);
		unk_0x9C7EE7DE7041A3F4(0, 159, 1);
		unk_0x9C7EE7DE7041A3F4(0, 160, 1);
		unk_0x9C7EE7DE7041A3F4(0, 161, 1);
		unk_0x9C7EE7DE7041A3F4(0, 162, 1);
		unk_0x9C7EE7DE7041A3F4(0, 163, 1);
		unk_0x9C7EE7DE7041A3F4(0, 164, 1);
		unk_0x9C7EE7DE7041A3F4(0, 165, 1);
		unk_0x9C7EE7DE7041A3F4(0, 14, 1);
		unk_0x9C7EE7DE7041A3F4(0, 15, 1);
		unk_0x9C7EE7DE7041A3F4(0, 53, 1);
		unk_0x9C7EE7DE7041A3F4(0, 54, 1);
		unk_0x9C7EE7DE7041A3F4(0, 140, 1);
		unk_0x9C7EE7DE7041A3F4(0, 141, 1);
		unk_0x9C7EE7DE7041A3F4(0, 142, 1);
		unk_0x9C7EE7DE7041A3F4(0, 143, 1);
		unk_0x9C7EE7DE7041A3F4(0, 143, 1);
		unk_0x9C7EE7DE7041A3F4(0, 47, 1);
		unk_0x9C7EE7DE7041A3F4(0, 38, 1);
		unk_0x9C7EE7DE7041A3F4(0, 22, 1);
		unk_0x9C7EE7DE7041A3F4(0, 102, 1);
		unk_0x9C7EE7DE7041A3F4(0, 69, 1);
		unk_0x9C7EE7DE7041A3F4(0, 70, 1);
		unk_0x9C7EE7DE7041A3F4(0, 68, 1);
		unk_0x9C7EE7DE7041A3F4(0, 92, 1);
		unk_0x9C7EE7DE7041A3F4(0, 99, 1);
		unk_0x9C7EE7DE7041A3F4(0, 115, 1);
		unk_0x9C7EE7DE7041A3F4(0, 46, 1);
		unk_0x9C7EE7DE7041A3F4(0, 25, 1);
	}
	if (!bVar11 && Local_402.f_2 == 0)
	{
		if (unk_0x622E10ED992CEB95())
		{
			if (!unk_0xFAFFA408239A026B(&cLocal_1023))
			{
				if ((((func_185("WEB_VEH_INV") || func_185("WEB_VEH_FULL")) || func_185("CAR_GAR_05")) || func_185("CAR_GAR_06")) || func_185("CAR_GAR_EXIT"))
				{
					unk_0xEFF1F12403847394(1);
				}
				StringCopy(&cLocal_1023, "", 16);
			}
		}
	}
}

void func_196()
{
	Global_17162.f_6 = 1;
}

void func_197(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_198(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_31637[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_31637[Var0.f_1]), Var0.f_0);
	}
}

struct<2> func_198(var uParam0)
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
	while (iVar1 < 6)
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

void func_199(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_198(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_31630[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_31630[Var0.f_1]), Var0.f_0);
	}
}

float func_200(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Param1, iParam4);
}

void func_201(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_25(iParam0) && unk_0x31F12808DC47A9E5(*iParam1)) && unk_0xC4B84EB67F78C1F0(*iParam1, 0))
	{
		if (iParam2 > Global_104551.f_2353.f_539.f_2387)
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
			func_31(*iParam1, iParam0);
		}
		if (unk_0x8A27C3C945C9E921(*iParam1) != 0)
		{
			unk_0xD8A3CA4A1B092413(*iParam1, 0);
		}
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/] = unk_0x4F69FBD64CDF125B(*iParam1);
		if (unk_0xB55184BD4F9AC179(*iParam1, &iVar1))
		{
			Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x4F69FBD64CDF125B(iVar1);
		}
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x0618E1E91508E9FF(*iParam1);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x0A088F357EF627CA(*iParam1);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x6276BF0E9518E43A(*iParam1, 1);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x6276BF0E9518E43A(*iParam1, 2);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x6276BF0E9518E43A(*iParam1, 3);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x6276BF0E9518E43A(*iParam1, 4);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x6276BF0E9518E43A(*iParam1, 5);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x6276BF0E9518E43A(*iParam1, 6);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x6276BF0E9518E43A(*iParam1, 7);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x6276BF0E9518E43A(*iParam1, 8);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x6276BF0E9518E43A(*iParam1, 9);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x6276BF0E9518E43A(*iParam1, 10);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x6276BF0E9518E43A(*iParam1, 11);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x6276BF0E9518E43A(*iParam1, 12);
		if (unk_0x7C094ED2B27D253F(*iParam1, 0))
		{
			iVar2 = unk_0xB5305F9F7739856F(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0xFE4CC02D61DA2398();
		StringCopy(&(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0xE6A2C60E19ABFD84(*iParam1), 16);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x2B07F86D9BC57D14(*iParam1);
		unk_0xC2CED850D0B7AE40(*iParam1, &(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x939E5110724C9FF5(*iParam1, &(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x5DEE36C41FD07639(*iParam1, &(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0xDCACEB538A650DBE(*iParam1);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x5B416ECA8172648C(*iParam1);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x178913209B5C278C(*iParam1);
		Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x459703DBCA7E4F90(*iParam1);
		unk_0xC501B2A5F74552E1(*iParam1, &(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x6BF5E4054292013A(*iParam1, 2))
		{
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x62148293B793073B(&(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x6BF5E4054292013A(*iParam1, 3))
		{
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x62148293B793073B(&(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x6BF5E4054292013A(*iParam1, 0))
		{
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x62148293B793073B(&(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x6BF5E4054292013A(*iParam1, 1))
		{
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x62148293B793073B(&(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_104551.f_2353.f_539.f_4297[iParam0] = 10;
		if (unk_0x644667BAD1ED1486(*iParam1) >= 0 && func_204(*iParam1, 0, &uVar0))
		{
			func_34(iParam1, &(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_104551.f_20088[iParam0 /*43*/].f_40 = 1;
				Global_104551.f_20088[iParam0 /*43*/] = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/];
				Global_104551.f_20088[iParam0 /*43*/].f_3 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_104551.f_20088[iParam0 /*43*/].f_4 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_104551.f_20088[iParam0 /*43*/].f_5 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_104551.f_20088[iParam0 /*43*/].f_6 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_104551.f_20088[iParam0 /*43*/].f_10 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_104551.f_20088[iParam0 /*43*/].f_16 = !Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_104551.f_20088[iParam0 /*43*/].f_19 = { Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_104551.f_20088[iParam0 /*43*/].f_23 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_104551.f_20088[iParam0 /*43*/].f_7 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_104551.f_20088[iParam0 /*43*/].f_8 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_104551.f_20088[iParam0 /*43*/].f_9 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_104551.f_20088[iParam0 /*43*/].f_11 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_104551.f_20088[iParam0 /*43*/].f_12 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_104551.f_20088[iParam0 /*43*/].f_13 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_104551.f_20088[iParam0 /*43*/].f_14 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_104551.f_20088[iParam0 /*43*/].f_15 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_104551.f_20088[iParam0 /*43*/].f_18 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_104551.f_20088[iParam0 /*43*/].f_17 = Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_104551.f_20088[iParam0 /*43*/].f_24 = unk_0xEBA4C479CD632515(*iParam1, 11) + 1;
				Global_104551.f_20088[iParam0 /*43*/].f_25 = unk_0xEBA4C479CD632515(*iParam1, 12) + 1;
				Global_104551.f_20088[iParam0 /*43*/].f_26 = unk_0xEBA4C479CD632515(*iParam1, 4) + 1;
				Global_104551.f_20088[iParam0 /*43*/].f_27 = unk_0xEBA4C479CD632515(*iParam1, 23) + 1;
				Global_104551.f_20088[iParam0 /*43*/].f_28 = unk_0xEBA4C479CD632515(*iParam1, 14) + 1;
				Global_104551.f_20088[iParam0 /*43*/].f_29 = unk_0xEBA4C479CD632515(*iParam1, 16) + 1;
				Global_104551.f_20088[iParam0 /*43*/].f_30 = unk_0xEBA4C479CD632515(*iParam1, 15) + 1;
				Global_104551.f_20088[iParam0 /*43*/].f_32 = unk_0xEC702562720F9233(*iParam1);
				Global_104551.f_20088[iParam0 /*43*/].f_33[0] = unk_0x0FBD795851373D18(*iParam1);
				Global_104551.f_20088[iParam0 /*43*/].f_33[1] = unk_0x38A267B5B59A3598(*iParam1, 14, 0);
				Global_104551.f_20088[iParam0 /*43*/].f_33[2] = unk_0x38A267B5B59A3598(*iParam1, 14, 1);
				Global_104551.f_20088[iParam0 /*43*/].f_33[3] = unk_0x38A267B5B59A3598(*iParam1, 14, 2);
				Global_104551.f_20088[iParam0 /*43*/].f_33[4] = unk_0x38A267B5B59A3598(*iParam1, 14, 3);
				Global_104551.f_20088[iParam0 /*43*/].f_39 = unk_0x98BC4B9B1626687A(*iParam1);
				Global_104551.f_20088[iParam0 /*43*/].f_31 = func_203(*iParam1);
				Global_104551.f_20088[iParam0 /*43*/].f_33[0] = unk_0x7401627CA59B1344(*iParam1);
				unk_0xAF84612F64FEF825(*iParam1, &iVar4, &uVar5, &uVar6);
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
				func_202(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_104551.f_20088[iParam0 /*43*/].f_1));
				unk_0xCA7EF36F27E40B54(*iParam1, &iVar4, &uVar5);
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
				func_202(Global_104551.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_104551.f_20088[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_202(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_138(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
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

float func_203(int iParam0)
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
	if ((unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0)) && unk_0x644667BAD1ED1486(iParam0) >= 0)
	{
		if (unk_0x98BC4B9B1626687A(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x98BC4B9B1626687A(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x98BC4B9B1626687A(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x98BC4B9B1626687A(iParam0) == 0)
		{
			if (unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(iParam0)))
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

int func_204(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xDC3C87280F94833B(unk_0x4F69FBD64CDF125B(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x4F69FBD64CDF125B(iParam0);
	if ((!func_226(iVar0, bParam1, uParam2) && !func_225(unk_0x8CFC7D6E1DA5D304())) && !func_210(iParam0))
	{
		return 0;
	}
	if (func_225(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_209(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_205(unk_0x8CFC7D6E1DA5D304()) && (unk_0xB6353CAE3EBC0919(iVar0) || unk_0xD8BB60C76D29E4BB(iVar0)))
	{
		bVar1 = true;
	}
	if ((((((unk_0x88EA695420CF2150(iParam0) && unk_0x4F69FBD64CDF125B(iParam0) != joaat("halftrack")) && unk_0x4F69FBD64CDF125B(iParam0) != joaat("phantom3")) && unk_0x4F69FBD64CDF125B(iParam0) != joaat("hauler2")) && unk_0x4F69FBD64CDF125B(iParam0) != joaat("trailerlarge")) && unk_0x4F69FBD64CDF125B(iParam0) != joaat("trailersmall2")) && !bVar1)
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		if ((func_61(iParam0) && unk_0x4F69FBD64CDF125B(iParam0) != joaat("sentinel2")) && unk_0x4F69FBD64CDF125B(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_205(int iParam0)
{
	if (iParam0 != func_208())
	{
		if (func_207(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_206(Global_2422724[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
	}
	return -1;
}

int func_207(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_208()
{
	return -1;
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
			return 1;
			break;
	}
	return 0;
}

int func_210(int iParam0)
{
	if (func_224(unk_0x8CFC7D6E1DA5D304()) || func_223(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_211(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	if ((!unk_0x31F12808DC47A9E5(iParam0) || !unk_0xC4B84EB67F78C1F0(iParam0, 0)) || unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		return 0;
	}
	if (func_214(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x788C6B35BB3FCF53(iParam0, "Player_Vehicle"))
	{
		if (unk_0xFE0F5B815FB9D3D1(iParam0, "Player_Vehicle") == unk_0x7E3A1BB7F8EE1FD1(unk_0x8CFC7D6E1DA5D304()))
		{
			if (func_212(iParam0))
			{
				return 1;
			}
			switch (unk_0x4F69FBD64CDF125B(iParam0))
			{
				case joaat("ardent"):
				case joaat("nightshark"):
				case joaat("deluxo"):
				case joaat("stromberg"):
				case joaat("comet4"):
				case joaat("revolter"):
				case joaat("savestra"):
				case joaat("viseris"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_212(int iParam0)
{
	if (!unk_0x31F12808DC47A9E5(iParam0) || !unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	if (func_213(unk_0x4F69FBD64CDF125B(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("vigilante"):
		case joaat("barrage"):
			return 1;
			break;
	}
	return 0;
}

int func_214(int iParam0, bool bParam1)
{
	switch (unk_0x4F69FBD64CDF125B(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_216(unk_0x4F69FBD64CDF125B(iParam0), 0))
			{
				if (Global_2512581.f_289 == iParam0)
				{
					return 1;
				}
				else if (func_215(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2436169.f_611[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_216(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_222(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_221();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_13364)
			{
				return func_220();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_13365)
			{
				return func_220();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_13363)
			{
				return func_220();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_13366)
			{
				return func_220();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_13368)
			{
				return func_220();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_219();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_17809)
			{
				return func_218();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_17811)
			{
				return func_218();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_17815)
			{
				return func_218();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_17812)
			{
				return func_218();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_17819)
			{
				return func_218();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_17817)
			{
				return func_218();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_17822)
			{
				return func_218();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_19694)
			{
				return func_217();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_19695)
			{
				return func_217();
			}
			break;
	}
	return 0;
}

bool func_217()
{
	return unk_0x5E02CD27DBE77D67(joaat("mpgunrunning"));
}

bool func_218()
{
	return unk_0x5E02CD27DBE77D67(joaat("mpimportexport"));
}

bool func_219()
{
	return unk_0x5E02CD27DBE77D67(joaat("mpjanuary2016"));
}

bool func_220()
{
	return unk_0x5E02CD27DBE77D67(joaat("mplowrider2"));
}

bool func_221()
{
	return unk_0x5E02CD27DBE77D67(joaat("mplowrider"));
}

int func_222(int iParam0, int iParam1)
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
			if (!Global_262145.f_13364)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13365)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13363)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13366)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13368)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13367)
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
		
		case joaat("comet3"):
			if (Global_262145.f_17809)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17811)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17815)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17812)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_17819)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17817)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_17822)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_19694)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_19695)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

int func_223(int iParam0)
{
	if (iParam0 != func_208())
	{
		if (func_207(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422724[iParam0 /*420*/].f_324.f_4 != func_208())
			{
				return func_206(Global_2422724[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_224(int iParam0)
{
	if (iParam0 != func_208())
	{
		if (func_207(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422724[iParam0 /*420*/].f_324.f_4 != func_208())
			{
				return func_206(Global_2422724[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_225(int iParam0)
{
	if (iParam0 != func_208())
	{
		if (func_207(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_206(Global_2422724[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_226(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
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
	bVar0 = false;
	if (func_205(unk_0x8CFC7D6E1DA5D304()) && (unk_0xB6353CAE3EBC0919(iParam0) || unk_0xD8BB60C76D29E4BB(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!unk_0x881022B41FD53CD6(iParam0) && !unk_0x422717A3330EA45D(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && !bVar0)
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
	if (unk_0x44243F2E2F58B8E3())
	{
		if (func_227(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_227(int iParam0)
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

int func_228()
{
	int iVar0;
	
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (unk_0x31F12808DC47A9E5(iVar0) && unk_0xC4B84EB67F78C1F0(iVar0, 0))
		{
			if (iVar0 == Global_69674.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_69674.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_69674.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_69674.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_69674.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_69674.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_69674.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_69674.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_69674.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_69674.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_69674.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_69674.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_229()
{
	return unk_0x5AFB8ED811F05E4D() <= Global_17301.f_5745 + 100;
}

void func_230(int iParam0)
{
	if ((unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0)) && iParam0 == Global_70579)
	{
		Global_104551.f_32429.f_5588 = 0;
		Global_70579 = 0;
	}
}

int func_231(int iParam0, struct<4> Param1, var uParam5, var uParam6, struct<3> Param7, float fParam10, struct<4> Param11, int iParam15, float fParam16)
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
		iVar12 = unk_0x5AD687C3474F04B4(iParam0, 0);
		iLocal_1037 = iVar12;
		unk_0x16255149C63FBEEC(iLocal_1037, 1);
		unk_0xA2B45B1D3EE42178(iLocal_1037, 1);
		unk_0x9B53B2691E2B1F79(iLocal_1037, 1084227584);
		unk_0x0F3F86C855582784(iLocal_1037, 1, 1, 0);
		if (unk_0xB160CAD76325B7F1(iParam0))
		{
			unk_0xF4D78A196FDF05F5(iParam0, 0, 0, -1);
			unk_0xC741149CBDE5831B(iParam0, 1);
		}
		Var13 = { unk_0x761660F5CE986DC4(iLocal_1037, 1) };
		fLocal_1038 = (Var13.f_2 - Var0.f_2);
		unk_0x990FFD4FB6ADD630(iLocal_1037, Var0 + Vector(-10f, 0f, 0f), 1, 0, 0, 1);
		if (unk_0xC4B84EB67F78C1F0(iLocal_1037, 0))
		{
			unk_0x91663DAD5DDAFA96(iLocal_1037, 3);
		}
		iLocal_1039 = unk_0x5AFB8ED811F05E4D();
		iLocal_1033 = 1;
	}
	if (iLocal_1033 == 1)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_1037) && unk_0xC4B84EB67F78C1F0(iLocal_1037, 0))
		{
			fVar16 = unk_0xBBDA792448DB5A89(iLocal_1039);
			fVar17 = (fVar16 + fParam10);
			fVar18 = func_238(unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()), fVar16, fVar17);
			fVar18 = (fVar18 - fVar16);
			fVar18 = (fVar18 / fParam10);
			if (iParam15 == 1)
			{
				fVar18 = func_237(fVar18);
			}
			else if (iParam15 == 2)
			{
				fVar18 = func_236(fVar18);
			}
			else if (iParam15 == 3)
			{
				fVar18 = func_234(fVar18);
			}
			fVar18 = (fVar18 * fParam10);
			fVar18 = (fVar18 + fVar16);
			unk_0x9C7EE7DE7041A3F4(0, 72, 1);
			unk_0x3FF1EE7D5FD7094C(iLocal_1037, func_232(Var0 + Vector(fLocal_1038, 0f, 0f), Var6 + Vector(fLocal_1038, 0f, 0f), fVar16, fVar17, fVar18), 0, 0, 1);
			if (iLocal_1034 && !unk_0xB160CAD76325B7F1(iParam0))
			{
				unk_0x58F6B49606932378(iLocal_1037, func_232((0f - Var3.f_0), (0f - Var3.f_1), (Var3.f_2 + 180f), (0f - Var9.f_0), (0f - Var9.f_1), (Var9.f_2 + 180f), fVar16, fVar17, fVar18), 2, 1);
			}
			else
			{
				if (!unk_0x0FAE113CE72ED842(iParam0))
				{
					if (unk_0xB160CAD76325B7F1(iParam0))
					{
						unk_0xB05E48165A6F6058(iParam0, 236, 1);
						unk_0xB05E48165A6F6058(iParam0, 309, 1);
					}
				}
				unk_0x58F6B49606932378(iLocal_1037, func_232(Var3, Var9, fVar16, fVar17, fVar18), 2, 1);
			}
			unk_0xF342BF6A7A4C7A8F(iLocal_1037, 0, 0);
			unk_0x73D7E57BF0ED7FEB(iLocal_1037, 1);
		}
		else
		{
			iLocal_1033 = 2;
			return 0;
		}
		if (unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()) > (unk_0xBBDA792448DB5A89(iLocal_1039) + fParam10) && unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()) > ((unk_0xBBDA792448DB5A89(iLocal_1039) + fParam10) + 2600f))
		{
			iLocal_1033 = 2;
			return 0;
		}
	}
	if (iLocal_1033 == 2)
	{
		unk_0xB05E48165A6F6058(iParam0, 236, 0);
		unk_0xB05E48165A6F6058(iParam0, 309, 0);
		if (unk_0x31F12808DC47A9E5(iLocal_1037))
		{
			if (!func_21(Param11, 0f, 0f, 0f, 0))
			{
				unk_0x990FFD4FB6ADD630(iLocal_1037, Param11, 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(iLocal_1037, Param11.f_3);
				unk_0x9B53B2691E2B1F79(iLocal_1037, 1084227584);
			}
			unk_0xF342BF6A7A4C7A8F(iLocal_1037, 1, 0);
			unk_0x73D7E57BF0ED7FEB(iLocal_1037, 0);
			iLocal_1037 = 0;
		}
		if (unk_0xB160CAD76325B7F1(iParam0))
		{
			unk_0xE8144E7C72E963DC(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_232(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_233(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_233(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_233(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_233(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_234(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = unk_0x0BADBFA3B172435F(func_235(((fParam0 * 3.141593f) * 0.5f)));
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

float func_235(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_236(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - unk_0xD0FFB162F40A139C(func_235(((fParam0 * 3.141593f) * 0.5f))));
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

float func_237(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - unk_0xD0FFB162F40A139C(func_235((fParam0 * 3.141593f)))));
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

float func_238(float fParam0, float fParam1, float fParam2)
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

void func_239()
{
	Global_69674.f_553 = 1;
	Global_69674.f_554 = 0;
}

void func_240(var uParam0)
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
		iLocal_117[iVar2] = Global_104551.f_32429.f_69[iVar1 /*78*/].f_66;
		if (iLocal_117[iVar2] != 0)
		{
			if (!unk_0xB03A1684359C50A1(uLocal_48[iVar2], 2))
			{
				unk_0x9016574B77A748EE(iLocal_117[iVar2]);
				unk_0xD2A9C3F486236CC5(&(uLocal_48[iVar2]), 2);
				func_442(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_241()
{
	return !Global_69674.f_553;
}

void func_242(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_60(&(Global_69674.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x15EE504466B7BBD3(Param0, Global_69674.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_243(iVar0);
			}
		}
		iVar0++;
	}
}

void func_243(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_60(&(Global_69674.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x31F12808DC47A9E5(Global_69674.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC4B84EB67F78C1F0(Global_69674.f_139[iParam0], 0))
				{
					if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Global_69674.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x337F2213526139E0(Global_69674.f_139[iParam0], 1, 1);
				unk_0xBECECD970F645217(&(Global_69674.f_139[iParam0]));
			}
		}
		Global_69674[iParam0] = 1;
		if (unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_66(iParam0, 0)) && Global_70583.f_66 == 0) && Global_104551.f_32429.f_1958[Global_69674.f_555[0 /*21*/].f_14] != 0) && Global_104551.f_32429.f_1958[Global_69674.f_555[0 /*21*/].f_14] > 3) && (!func_244(0, Global_69674.f_555[0 /*21*/].f_12) || !func_244(1, Global_69674.f_555[0 /*21*/].f_12)))
			{
				func_113(&(Global_104551.f_32429.f_69[Global_69674.f_555[0 /*21*/].f_14 /*78*/]), &Global_70583);
				Global_70661 = Global_104551.f_32429.f_5591;
			}
			func_444(iParam0, 0);
		}
	}
}

int func_244(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_245(&(Global_104551.f_32429.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_38(Global_104551.f_32429.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_245(var uParam0)
{
	return *uParam0;
}

void func_246(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x31F12808DC47A9E5(Global_69674.f_484[25]) && unk_0xC4B84EB67F78C1F0(Global_69674.f_484[25], 0))
			{
				if (Global_69674.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x88EA695420CF2150(iParam0) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("bus")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_247(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_32(iParam0, &Var0);
		if (func_21(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x761660F5CE986DC4(iParam0, 1) };
			fParam4 = unk_0x93FDA3BF59E7B77F(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) != joaat("vehicle_gen_controller"))
			{
				Global_70662 = unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913());
			}
		}
		func_112(iParam5, &Var0, Param1, fParam4, func_45(iParam0));
		func_30(iParam5, iParam0, 0);
	}
}

void func_247(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_114(iParam0);
	func_444(iParam0, 0);
}

int func_248(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_37(uParam0->f_66))
	{
		return 0;
	}
	if (unk_0x31F12808DC47A9E5(Global_70580))
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
	if (!func_244(0, iParam1))
	{
		Global_104551.f_32429.f_5592[iVar0] = 0;
	}
	else if (!func_244(1, iParam1))
	{
		Global_104551.f_32429.f_5592[iVar0] = 1;
	}
	func_249(iParam1, unk_0x89CCD0AB60278D90(uParam0->f_66));
	func_113(uParam0, &(Global_104551.f_32429.f_5038[iVar0 /*157*/][Global_104551.f_32429.f_5592[iVar0] /*78*/]));
	Global_104551.f_32429.f_5592[iVar0]++;
	if (Global_104551.f_32429.f_5592[iVar0] >= func_245(&(Global_104551.f_32429.f_5038[iVar0 /*157*/])))
	{
		Global_104551.f_32429.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_92298[iVar0 /*98*/] == uParam0->f_66 && unk_0x9D39145AD645E383(&(Global_92298[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_92298[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_249(int iParam0, char* sParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_104551.f_32429.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_250("IMPOUND_HELPM", sParam1, 2, unk_0x61E9B3BFA06B017B(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_250("IMPOUND_HELPF", sParam1, 2, unk_0x61E9B3BFA06B017B(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_250("IMPOUND_HELPT", sParam1, 2, unk_0x61E9B3BFA06B017B(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_104551.f_32429.f_5596[iParam0] = 1;
	}
}

void func_250(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_251(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_251(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9D39145AD645E383(sParam0, ""))
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
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0x9D39145AD645E383(&(Global_104551.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104551.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_8 = (unk_0x5AFB8ED811F05E4D() + iParam3);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = ((unk_0x5AFB8ED811F05E4D() + iParam3) + iParam4);
		}
		else
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104551.f_20380.f_145++;
		func_252();
	}
}

void func_252()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104551.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[0])
			{
				Global_104551.f_20380.f_146[0] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[1])
			{
				Global_104551.f_20380.f_146[1] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[2])
			{
				Global_104551.f_20380.f_146[2] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_253(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_60(&(Global_69674.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_113(&(Global_104551.f_32429.f_69[Global_69674.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

int func_254(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x5400DC5FAEBF30F0(*uParam1))
	{
		unk_0x13AD763DBD687842(*uParam1, 0);
	}
	if (unk_0x5400DC5FAEBF30F0(*uParam2))
	{
		unk_0x13AD763DBD687842(*uParam2, 0);
	}
	*uParam1 = unk_0x5E35D8CCDF065701("DEFAULT_SCRIPTED_CAMERA", 0);
	*uParam2 = unk_0x5E35D8CCDF065701("DEFAULT_SCRIPTED_CAMERA", 0);
	if (unk_0x5400DC5FAEBF30F0(*uParam1) && unk_0x5400DC5FAEBF30F0(*uParam2))
	{
		unk_0xF6910B463A17E809(*uParam1, *uParam0);
		unk_0xA5D79F87520FD826(*uParam1, uParam0->f_3, 2);
		unk_0x2A2BB8210FB20081(*uParam1, uParam0->f_12);
		unk_0xF6910B463A17E809(*uParam2, uParam0->f_6);
		unk_0xA5D79F87520FD826(*uParam2, uParam0->f_6.f_3, 2);
		unk_0x2A2BB8210FB20081(*uParam2, uParam0->f_12);
		unk_0x24144CB94D75CE91(*uParam1, "HAND_SHAKE", uParam0->f_13);
		unk_0x24144CB94D75CE91(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			unk_0x544D4FC2BDA00B32(*uParam2, *uParam1, unk_0xF2DB717A73826179((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			unk_0x2C535610856B3F4D(*uParam1, 1);
		}
		unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_255(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_260(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_77())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_259(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_260(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_259(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_257(unk_0x8CFC7D6E1DA5D304())) && !func_90(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_256())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_257(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_256()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

int func_257(int iParam0)
{
	if (func_90(iParam0, 0))
	{
		return 1;
	}
	if (func_258())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_258()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_259(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_260(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

int func_261(int iParam0)
{
	func_60(&(Global_69674.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_69674.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_262(26))
			{
				return 26;
			}
			if (!func_262(29))
			{
				return 29;
			}
			if (!func_262(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_69674.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_262(27))
			{
				return 27;
			}
			if (!func_262(30))
			{
				return 30;
			}
			if (!func_262(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_69674.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_262(28))
			{
				return 28;
			}
			if (!func_262(31))
			{
				return 31;
			}
			if (!func_262(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_262(int iParam0)
{
	return func_66(iParam0, 0);
}

void func_263(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_265(iParam0, &iVar1);
	if (!unk_0x9D39145AD645E383("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xEBE493E29E0D8731(iVar1))
			{
				return;
			}
			if (unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == iVar1)
			{
				func_197(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xEBE493E29E0D8731(iVar1))
			{
				return;
			}
			if (func_264(iParam0))
			{
				func_197(iParam0, 0);
			}
		}
		unk_0xD1E5D502F8BD3DFF(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_264(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_198(iParam0) };
	if (Var0.f_1 != -1 && unk_0xB03A1684359C50A1(Global_31637[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

var func_265(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_266(iParam0) };
	*iParam1 = unk_0x0E40E816537BFB87(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_266(int iParam0)
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
			Var5 = { func_267(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_267(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_267(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_267(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_267(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_267(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_267(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049531[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_267(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_267(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_267(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_267(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_267(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_267(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_267(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_267(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_267(43, 0) };
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
			Var5 = { func_267(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_267(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_267(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_267(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_267(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_267(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_267(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_267(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_267(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_267(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_267(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_267(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_267(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_267(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_267(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_267(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_267(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_267(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_267(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_267(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_267(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_267(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_267(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_267(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_267(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_267(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_267(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_267(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_267(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_267(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_267(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_267(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_267(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_267(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_267(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_267(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_267(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_267(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_267(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_267(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_267(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_267(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_267(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_267(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_267(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_267(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_267(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_267(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_267(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_267(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_267(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_267(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_267(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_267(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_267(int iParam0, bool bParam1)
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
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_268(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_265(iParam0, &iVar1);
	if (!unk_0x9D39145AD645E383("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0x86F61DB549CCD597(iVar1))
		{
			if (unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == iVar1)
			{
				func_199(iParam0, 1);
				return;
			}
			unk_0xDA6B81788C10A6E2(iVar1, 1);
		}
		else if (!bParam1 && unk_0x86F61DB549CCD597(iVar1))
		{
			if (func_269(iParam0))
			{
				func_199(iParam0, 0);
			}
			unk_0xDA6B81788C10A6E2(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_269(iParam0))
			{
				func_199(iParam0, 0);
			}
		}
	}
}

int func_269(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_198(iParam0) };
	if (Var0.f_1 != -1 && unk_0xB03A1684359C50A1(Global_31630[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

int func_270()
{
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) || func_261(Local_402.f_0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_271(float fParam0, float fParam1, float fParam2)
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

int func_272(int iParam0)
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

int func_273(int iParam0, var uParam1)
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

int func_274()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

void func_275()
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
	
	if ((((((unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_672))
	{
		return;
	}
	if (!Global_68213)
	{
		if (Global_104551.f_32429.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] != -15)
		{
			if (!Global_69674[Global_104551.f_32429.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]])
			{
				if (func_330(func_49(), Global_104551.f_32429.f_1982[iLocal_672 /*939*/].f_626[iLocal_855]))
				{
					iVar0 = Global_104551.f_32429.f_1982[iLocal_672 /*939*/][iLocal_855];
					func_328(iVar0, iLocal_855, iLocal_672);
					func_60(&Var1, Global_104551.f_32429.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_444(Global_104551.f_32429.f_1982[iLocal_672 /*939*/].f_313[iLocal_855], 1);
					}
					Global_104551.f_32429.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] = -15;
				}
			}
		}
		iLocal_855++;
		if (iLocal_855 >= 312)
		{
			iLocal_855 = 0;
		}
	}
	if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) != Local_402.f_7 || Local_402.f_2 == 99)
	{
		if (Local_402.f_5 != -1)
		{
			func_68(&(Local_402.f_5));
		}
		if (Local_402.f_2 > 0)
		{
			unk_0xEFF1F12403847394(1);
		}
		Local_402.f_7 = unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4());
		Local_402.f_5 = -1;
		Local_402.f_2 = 0;
		Local_402.f_4 = 0;
		if (bLocal_854)
		{
			if (unk_0x622E10ED992CEB95())
			{
				unk_0xEFF1F12403847394(1);
			}
			unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
			if (unk_0x5400DC5FAEBF30F0(Local_402.f_110))
			{
				unk_0x2C535610856B3F4D(Local_402.f_110, 0);
				unk_0x13AD763DBD687842(Local_402.f_110, 0);
			}
			if (unk_0x5400DC5FAEBF30F0(Local_402.f_111))
			{
				unk_0x2C535610856B3F4D(Local_402.f_111, 0);
				unk_0x13AD763DBD687842(Local_402.f_111, 0);
			}
			unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 1, 0);
			unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 0);
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				unk_0x08C4F0937B57CB88(unk_0x8CFC7D6E1DA5D304(), 0);
			}
			iVar22 = unk_0x952F33F151D40D1A();
			if (unk_0x31F12808DC47A9E5(iVar22) && unk_0xC4B84EB67F78C1F0(iVar22, 0))
			{
				unk_0xA12407EB7D7CF146(iVar22, 1, 0);
				unk_0x73D7E57BF0ED7FEB(iVar22, 0);
				if (unk_0xE54DCC6B21FDC95A(iVar22, 1))
				{
					unk_0x4F5FF3F3FDCAB15D(&iVar22);
				}
			}
			iVar23 = 5000;
			iVar24 = unk_0x5AFB8ED811F05E4D();
			while (!unk_0xF662B8CF03C92579() && (unk_0x5AFB8ED811F05E4D() - iVar24) < iVar23)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (unk_0xB79050CDE709F080(Local_402.f_112))
			{
				unk_0xF8BEB899F39F51F4(Local_402.f_112);
			}
			StringCopy(&Global_32581, "", 32);
			if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
			{
				func_268(47, 1);
				func_263(47, 1);
			}
			unk_0xC7BB901E267A910A();
			unk_0x4A918952774CFC67();
			unk_0x4A3AD9384F0AAEA0(1);
			unk_0x77B57B2BB7F3EA0A(1);
			func_255(0, 1, 1, 0);
			bLocal_854 = false;
			Global_25486 = 0;
		}
	}
	bVar25 = false;
	if ((((((((((((!bLocal_854 && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0)) || (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) && !Local_402.f_29.f_69)) || (!unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()) && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))) || (!bLocal_854 && func_66(Local_402.f_0, 5))) || (!bLocal_854 && unk_0xFC0C00F9DE2AEC93(2, 199))) || (!bLocal_854 && unk_0xC83C302702976DCB())) || !func_326(0)) || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || unk_0xDCAE40DC83E036DE(unk_0x18F7BE9ACB7D08F4())) || unk_0xC609BB034C3270D6(unk_0x18F7BE9ACB7D08F4())) || Global_25383) || (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && unk_0x422DF8890E5A5CBB(unk_0x18F7BE9ACB7D08F4())))
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
			if ((((Local_402.f_0 != -1 && func_66(Local_402.f_0, 0)) && !func_66(Local_402.f_0, 5)) && !bLocal_1015) && !bVar25)
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && !unk_0x622E10ED992CEB95())
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_01", 16);
					func_186(&(Local_402.f_5), 3, &cVar26, 0, 0, 0, 0);
					Local_402.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_181(Local_402.f_5, 1))
			{
				if (func_325(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = unk_0x5AFB8ED811F05E4D();
					func_68(&(Local_402.f_5));
					iLocal_669 = 0;
					Local_402.f_2 = 90;
				}
				else
				{
					iLocal_669 = 0;
					Local_402.f_4 = unk_0x5AFB8ED811F05E4D();
					func_68(&(Local_402.f_5));
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
				func_186(&(Local_402.f_5), 3, &cVar26, 0, 0, 0, 0);
				Local_402.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_181(Local_402.f_5, 1))
			{
				if (func_325(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = unk_0x5AFB8ED811F05E4D();
					Local_402.f_2 = 90;
				}
				else
				{
					unk_0x929C3CBA660376D5(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
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
					Local_516.f_0 = unk_0xBD7D7877C82BE42F("MIDSIZED_MESSAGE");
					Local_516.f_1 = 0;
					Local_516.f_3 = 0;
					Local_516.f_2 = 0;
					iLocal_856 = 1;
					Global_25486 = 1;
					if (bLocal_854)
					{
						if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
						{
							func_268(47, 0);
							func_263(47, 0);
							Local_402.f_112 = unk_0x0E40E816537BFB87(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (unk_0xB79050CDE709F080(Local_402.f_112))
							{
								if (!unk_0x44057CDFA5C14B91(Local_402.f_112))
								{
									unk_0x31EA01EDFF03ED26(Local_402.f_112);
								}
								StringCopy(&Global_32581, "v_garagem_sp", 32);
							}
						}
						unk_0x36643EAE6212D16F(unk_0x8CFC7D6E1DA5D304(), 1);
						unk_0xC7BB901E267A910A();
						Local_402.f_4 = unk_0x5AFB8ED811F05E4D();
						Local_402.f_2 = 4;
					}
					else
					{
						Local_402.f_2 = 8;
					}
					func_68(&(Local_402.f_5));
				}
			}
			break;
		
		case 4:
			bVar35 = true;
			if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
			{
				Local_402.f_112 = unk_0x0E40E816537BFB87(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!unk_0xB79050CDE709F080(Local_402.f_112) || unk_0x86F61DB549CCD597(Local_402.f_112)) || unk_0xEBE493E29E0D8731(Local_402.f_112))
				{
					func_268(47, 0);
					func_263(47, 0);
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
					if (unk_0x2701380D2C44C561(200.4651f, -1020.631f, -100f, 50f, 0) || (unk_0x5AFB8ED811F05E4D() - Local_402.f_4) > 3500)
					{
						Local_402.f_4 = unk_0x5AFB8ED811F05E4D();
						Local_402.f_2 = 5;
					}
				}
				else if (unk_0xBD320BAA5701BEC0(Local_402.f_29.f_14, Var32, fVar30, iVar31) || (unk_0x5AFB8ED811F05E4D() - Local_402.f_4) > 3500)
				{
					Local_402.f_4 = unk_0x5AFB8ED811F05E4D();
					Local_402.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((unk_0x8BDE5BE4E46BA35F() && unk_0x34CC31673AD34B53()) && (!unk_0xB79050CDE709F080(Local_402.f_112) || unk_0x44057CDFA5C14B91(Local_402.f_112))) || (unk_0x5AFB8ED811F05E4D() - Local_402.f_4) > 10000)
			{
				Local_402.f_4 = unk_0x5AFB8ED811F05E4D();
				Local_402.f_2 = 6;
			}
			break;
		
		case 6:
			if ((unk_0x5AFB8ED811F05E4D() - Local_402.f_4) > 1000)
			{
				if ((unk_0x31F12808DC47A9E5(iLocal_1027) && unk_0x90D1FDC9D31B7BE1(iLocal_1027)) && unk_0xE54DCC6B21FDC95A(iLocal_1027, 1))
				{
					unk_0x4F5FF3F3FDCAB15D(&iLocal_1027);
				}
				iLocal_1027 = unk_0x952F33F151D40D1A();
				if ((((unk_0x31F12808DC47A9E5(iLocal_1027) && unk_0xC4B84EB67F78C1F0(iLocal_1027, 0)) && !unk_0xB6353CAE3EBC0919(unk_0x4F69FBD64CDF125B(iLocal_1027))) && !unk_0xD8BB60C76D29E4BB(unk_0x4F69FBD64CDF125B(iLocal_1027))) && !unk_0x9605D2F02FA93911(unk_0x4F69FBD64CDF125B(iLocal_1027)))
				{
					if (!unk_0x90D1FDC9D31B7BE1(iLocal_1027))
					{
						unk_0x337F2213526139E0(iLocal_1027, 0, 0);
					}
				}
				else
				{
					iLocal_1027 = 0;
				}
				unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 0, 0);
				if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 1);
				}
				if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 16);
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 32);
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 128);
					unk_0x08C4F0937B57CB88(unk_0x8CFC7D6E1DA5D304(), 1);
				}
				func_255(1, 1, 1, 0);
				unk_0x08FC50794202A47C();
				unk_0xEFF1F12403847394(1);
				Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_14.f_3.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_402.f_29.f_69)
				{
					unk_0x73808E1273F0FC1F(Local_402.f_29.f_14, Var32);
				}
				if (!unk_0x5400DC5FAEBF30F0(Local_402.f_110))
				{
					Local_402.f_110 = unk_0x5E35D8CCDF065701("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				if (unk_0x5400DC5FAEBF30F0(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						unk_0xE5E22CD3CF01EC79("GtaMloRoom001");
					}
					func_255(1, 1, 1, 0);
					func_254(&(Local_402.f_29.f_14), &(Local_402.f_110), &(Local_402.f_111));
				}
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
				unk_0x4A3AD9384F0AAEA0(0);
				unk_0x77B57B2BB7F3EA0A(0);
				unk_0xC7BB901E267A910A();
				Local_402.f_2 = 7;
				Local_402.f_4 = unk_0x5AFB8ED811F05E4D();
				func_68(&(Local_402.f_5));
			}
			break;
		
		case 7:
			if ((unk_0x5AFB8ED811F05E4D() - Local_402.f_4) < 7000 && !func_323(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_05", 16);
				func_184(&cVar26, -1);
				if (!unk_0x8BDE5BE4E46BA35F())
				{
					if (Local_402.f_0 == 12 || Local_402.f_0 == 13)
					{
						fVar30 = 85f;
						iVar31 = 2;
					}
					Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_29.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_29.f_2 + 90f)), 0f };
					unk_0xBD320BAA5701BEC0(Local_402.f_29.f_29, Var32, fVar30, iVar31);
				}
			}
			else
			{
				if (unk_0x5400DC5FAEBF30F0(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						unk_0xE5E22CD3CF01EC79("GtaMloRoom001");
					}
					func_255(1, 1, 1, 0);
					func_254(&(Local_402.f_29.f_29), &(Local_402.f_110), &(Local_402.f_111));
				}
				unk_0x4A918952774CFC67();
				unk_0xEFF1F12403847394(1);
				Local_402.f_4 = unk_0x5AFB8ED811F05E4D();
				Local_402.f_2 = 8;
			}
			break;
		
		case 8:
			if ((unk_0x5AFB8ED811F05E4D() - Local_402.f_4) < 7000 && !func_323(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_06", 16);
				if (!unk_0x622E10ED992CEB95())
				{
					func_184(&cVar26, 7000);
				}
			}
			else
			{
				unk_0xEFF1F12403847394(1);
				Local_402.f_4 = unk_0x5AFB8ED811F05E4D();
				Local_402.f_2 = 9;
			}
			break;
		
		case 9:
			if ((unk_0x5AFB8ED811F05E4D() - Local_402.f_4) < 3500 && !func_323(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_03", 16);
				if (unk_0x5C716BBF766E1C70(Local_516.f_0))
				{
					if (Local_516.f_1)
					{
						if (!Local_516.f_3)
						{
							unk_0x929C3CBA660376D5(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
							Local_516.f_3 = 1;
						}
						unk_0x5E70D9959D6F2350(Local_516.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x76F4FB5EFF5BDED5(Local_516.f_0, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_88(&cVar26);
						unk_0xA2A6B56DFF85AF55();
						Local_516.f_1 = 1;
					}
				}
			}
			else if ((unk_0x5AFB8ED811F05E4D() - Local_402.f_4) < 4000 && !func_323(1000))
			{
				if (unk_0x5C716BBF766E1C70(Local_516.f_0))
				{
					if (Local_516.f_2)
					{
						unk_0x5E70D9959D6F2350(Local_516.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x76F4FB5EFF5BDED5(Local_516.f_0, "SHARD_ANIM_OUT");
						unk_0x22DD5585E00B80C3(1);
						unk_0x954263F3D07BEFC2(0.33f);
						unk_0xE2B30EB9B14EEAB2();
						Local_516.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_854)
				{
					unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
					if (unk_0x5400DC5FAEBF30F0(Local_402.f_110))
					{
						unk_0x2C535610856B3F4D(Local_402.f_110, 0);
						unk_0x13AD763DBD687842(Local_402.f_110, 0);
					}
					if (unk_0x5400DC5FAEBF30F0(Local_402.f_111))
					{
						unk_0x2C535610856B3F4D(Local_402.f_111, 0);
						unk_0x13AD763DBD687842(Local_402.f_111, 0);
					}
					unk_0xA3F41A1968319181(0f);
					unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
					unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 1, 0);
					unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 0);
					iVar36 = unk_0x952F33F151D40D1A();
					if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
					{
						unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
						unk_0x08C4F0937B57CB88(unk_0x8CFC7D6E1DA5D304(), 0);
						if ((unk_0x31F12808DC47A9E5(iVar36) && unk_0xC4B84EB67F78C1F0(iVar36, 0)) && unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iVar36, 0))
						{
							unk_0x990FFD4FB6ADD630(iVar36, Local_402.f_29.f_44, 1, 1, 0, 1);
							unk_0xB88121FF8A34A66F(iVar36, Local_402.f_29.f_47);
							unk_0x9B53B2691E2B1F79(iVar36, 1084227584);
						}
						else
						{
							unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29.f_44, 1, 1, 0, 1);
							unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), Local_402.f_29.f_47);
						}
					}
					if (unk_0x31F12808DC47A9E5(iLocal_1027) && unk_0xC4B84EB67F78C1F0(iLocal_1027, 0))
					{
						iVar37 = func_48(24);
						if (func_253(&Local_776, 24))
						{
							func_248(&Local_776, func_438());
							if (unk_0x31F12808DC47A9E5(iVar37))
							{
								unk_0xBECECD970F645217(&iVar37);
							}
						}
						if (Local_402.f_0 == 21)
						{
							unk_0x7EE425AE3317BA69(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
							unk_0x990FFD4FB6ADD630(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
							unk_0xB88121FF8A34A66F(iLocal_1027, 154.4846f);
							func_246(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_402.f_0 == 22)
						{
							unk_0x7EE425AE3317BA69(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
							unk_0x990FFD4FB6ADD630(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
							unk_0xB88121FF8A34A66F(iLocal_1027, 319.6985f);
							func_246(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_402.f_0 == 23)
						{
							unk_0x7EE425AE3317BA69(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
							unk_0x990FFD4FB6ADD630(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
							unk_0xB88121FF8A34A66F(iLocal_1027, 270.8741f);
							func_246(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						unk_0x9B53B2691E2B1F79(iLocal_1027, 1084227584);
					}
					if (unk_0x31F12808DC47A9E5(iVar36) && unk_0xC4B84EB67F78C1F0(iVar36, 0))
					{
						unk_0xA12407EB7D7CF146(iVar36, 1, 0);
						unk_0x73D7E57BF0ED7FEB(iVar36, 0);
						if (unk_0xE54DCC6B21FDC95A(iVar36, 1))
						{
							unk_0x4F5FF3F3FDCAB15D(&iVar36);
						}
					}
					iVar38 = 5000;
					iVar39 = unk_0x5AFB8ED811F05E4D();
					while (!unk_0xF662B8CF03C92579() && (unk_0x5AFB8ED811F05E4D() - iVar39) < iVar38)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0xB79050CDE709F080(Local_402.f_112))
					{
						unk_0xF8BEB899F39F51F4(Local_402.f_112);
					}
					StringCopy(&Global_32581, "", 32);
					if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
					{
						func_268(47, 1);
						func_263(47, 1);
						Global_104551.f_32429.f_4800 = 1;
					}
					unk_0xC7BB901E267A910A();
					unk_0x4A918952774CFC67();
					unk_0x4A3AD9384F0AAEA0(1);
					unk_0x77B57B2BB7F3EA0A(1);
					func_255(0, 1, 1, 0);
					bLocal_854 = false;
					Global_25486 = 0;
				}
				if (unk_0x5C716BBF766E1C70(Local_516.f_0))
				{
					unk_0xEBE532BFFE618875(&Local_516);
				}
				func_292(iLocal_672, Local_516.f_4, Local_402.f_29.f_67);
				func_291(Local_402.f_0, 5, 1);
				func_278(Local_402.f_0);
				if (unk_0xE769D9B5158D0F11(Global_69674.f_208[Local_402.f_0]))
				{
					unk_0x40D517D991458154(&(Global_69674.f_208[Local_402.f_0]));
				}
				iLocal_940 = Local_402.f_0;
				func_277();
				Local_402.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_669++;
			if (iLocal_669 >= 3)
			{
				if ((unk_0x5AFB8ED811F05E4D() - Local_402.f_4) < 4000)
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_04", 16);
					func_276(&cVar26);
				}
				else
				{
					Local_402.f_2 = 99;
				}
			}
			break;
	}
}

void func_276(char[4] cParam0)
{
	unk_0x2202872EA73499C3(cParam0);
	unk_0xF764171B43EBA5E4(0, 1, 1, -1);
}

int func_277()
{
	if (func_194(0))
	{
		return 0;
	}
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

void func_278(int iParam0)
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
	func_290(iVar0, 0);
	iVar2 = func_289(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_288(iVar0);
		if (func_286(iVar0, iVar1, 1))
		{
			func_279(iVar0);
			func_288(iVar0);
		}
	}
}

void func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_285(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46304[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46304[iVar0 /*203*/].f_10[(Global_46304[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_46304[iVar0 /*203*/].f_9 - 1);
	if (!Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_284(Global_37004[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
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
		func_280(1, Global_37004[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_37004[iVar1 /*12*/].f_3)
		{
			case 0:
				func_280(0, Global_37004[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_280(1, Global_37004[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_280(2, Global_37004[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46304[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_280(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0xEAE1A41FBC3984B1())
	{
		return;
	}
	iVar0 = func_438();
	bVar1 = false;
	StringCopy(&cVar2, func_283(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x55E6536147AC42E6("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x55E6536147AC42E6("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x55E6536147AC42E6("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x55E6536147AC42E6(sParam3);
				if (!unk_0xFAFFA408239A026B(sParam4))
				{
					unk_0xBEFD1ED9B6BE5127(sParam4);
				}
				if (!unk_0xFAFFA408239A026B(sParam5))
				{
					unk_0xBEFD1ED9B6BE5127(sParam5);
				}
				if (!unk_0xFAFFA408239A026B(sParam6))
				{
					unk_0xBEFD1ED9B6BE5127(sParam6);
				}
				if (!unk_0xFAFFA408239A026B(sParam7))
				{
					unk_0xBEFD1ED9B6BE5127(sParam7);
				}
				if (!unk_0xFAFFA408239A026B(sParam8))
				{
					unk_0xBEFD1ED9B6BE5127(sParam8);
				}
				if (!unk_0xFAFFA408239A026B(sParam9))
				{
					unk_0xBEFD1ED9B6BE5127(sParam9);
				}
				if (!unk_0xFAFFA408239A026B(sParam10))
				{
					unk_0xBEFD1ED9B6BE5127(sParam10);
				}
				if (!unk_0xFAFFA408239A026B(sParam11))
				{
					unk_0xBEFD1ED9B6BE5127(sParam11);
				}
				if (!unk_0xFAFFA408239A026B(sParam12))
				{
					unk_0xBEFD1ED9B6BE5127(sParam12);
				}
				if (!unk_0xFAFFA408239A026B(sParam13))
				{
					unk_0xBEFD1ED9B6BE5127(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_281(unk_0xB317125F2A5746EB(&cVar2, &cVar2, 0, 2, unk_0xE883B8F5FA6A04DA(func_282(iParam1)), 0));
		}
		else
		{
			func_281(unk_0xB317125F2A5746EB("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xE883B8F5FA6A04DA(func_282(iParam1)), 0));
		}
		switch (Global_14453)
		{
			case 0:
				StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
				Global_36996++;
				if (Global_36996 > 16)
				{
					Global_36996 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
				Global_36998++;
				if (Global_36998 > 16)
				{
					Global_36998 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
				Global_36997++;
				if (Global_36997 > 16)
				{
					Global_36997 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x929C3CBA660376D5(-1, "Notification", &Global_14442, 1);
	}
}

void func_281(var uParam0)
{
	Global_36999[Global_37003] = uParam0;
	Global_16814 = 1;
	Global_16813 = uParam0;
	Global_37003++;
	if (Global_37003 == 3)
	{
		Global_37003 = 0;
	}
}

char* func_282(int iParam0)
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

char* func_283(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[0 /*29*/].f_7));
		
		case 1:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[1 /*29*/].f_7));
		
		case 2:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[2 /*29*/].f_7));
		
		case 7:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[12 /*29*/].f_7));
		
		case 4:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[60 /*29*/].f_7));
		
		case 6:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[62 /*29*/].f_7));
		
		case 3:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[14 /*29*/].f_7));
		
		case 16:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[97 /*29*/].f_7));
		
		case 19:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[99 /*29*/].f_7));
		
		case 15:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[96 /*29*/].f_7));
		
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
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[15 /*29*/].f_7));
		
		case 26:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[30 /*29*/].f_7));
		
		case 27:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[17 /*29*/].f_7));
		
		case 29:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[20 /*29*/].f_7));
		
		case 30:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[43 /*29*/].f_7));
		
		case 31:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[44 /*29*/].f_7));
		
		case 32:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[19 /*29*/].f_7));
		
		case 34:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[40 /*29*/].f_7));
		
		case 36:
			return unk_0xE883B8F5FA6A04DA("CELL_E_381");
		
		case 38:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[64 /*29*/].f_7));
		
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
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[122 /*29*/].f_7));
		
		case 40:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[125 /*29*/].f_7));
		
		case 41:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[113 /*29*/].f_7));
		
		case 42:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[126 /*29*/].f_7));
		
		case 43:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[127 /*29*/].f_7));
		
		case 44:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[124 /*29*/].f_7));
		
		case 45:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[114 /*29*/].f_7));
		
		case 46:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[115 /*29*/].f_7));
		
		case 47:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[116 /*29*/].f_7));
		
		case 48:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[123 /*29*/].f_7));
		
		case 49:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[117 /*29*/].f_7));
		
		case 50:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[118 /*29*/].f_7));
		
		case 51:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[119 /*29*/].f_7));
		
		case 52:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[120 /*29*/].f_7));
		
		case 53:
			return unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_284(int iParam0)
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

int func_285(int iParam0)
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
		if (Global_46304[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46304[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46304[iVar0 /*203*/].f_1;
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

int func_286(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_290(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_46304[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_46304[iVar0 /*203*/].f_2 = iParam0;
	Global_46304[iVar0 /*203*/].f_10[Global_46304[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46304[iVar0 /*203*/].f_10[Global_46304[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46304[iVar0 /*203*/].f_10[Global_46304[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46304[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46304[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46304[iVar0 /*203*/].f_4[iVar1] == Global_37004[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46304[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46304[iVar0 /*203*/].f_4[Global_46304[iVar0 /*203*/].f_3] = Global_37004[iParam1 /*12*/].f_3;
			Global_46304[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46304[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46304[iVar0 /*203*/].f_4[iVar1] == Global_37004[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46304[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46304[iVar0 /*203*/].f_4[Global_46304[iVar0 /*203*/].f_3] = Global_37004[iParam1 /*12*/].f_2;
			Global_46304[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46304[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46304[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_287(Global_46304[iVar0 /*203*/].f_4[iVar1], Global_46304[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_287(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar19 = (Global_40329[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_40329[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_284(Global_37004[iVar20 /*12*/].f_1) };
		if (Global_37004[iVar20 /*12*/].f_2 == iParam0 && !Global_37004[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_37004[iVar20 /*12*/].f_2;
		iVar0 = Global_45942[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_45942[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36996 = (Global_36996 - 1);
						if (Global_36996 < 0)
						{
							Global_36996 = 0;
						}
						break;
					
					case 1:
						Global_36997 = (Global_36997 - 1);
						if (Global_36997 < 0)
						{
							Global_36997 = 0;
						}
						break;
					
					case 2:
						Global_36998 = (Global_36998 - 1);
						if (Global_36998 < 0)
						{
							Global_36998 = 0;
						}
						break;
					}
				}
		}
		Global_45942[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45942[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45942[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45942[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45942[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45942[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45942[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_45942[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36996 = (Global_36996 - 1);
						if (Global_36996 < 0)
						{
							Global_36996 = 0;
						}
						break;
					
					case 1:
						Global_36997 = (Global_36997 - 1);
						if (Global_36997 < 0)
						{
							Global_36997 = 0;
						}
						break;
					
					case 2:
						Global_36998 = (Global_36998 - 1);
						if (Global_36998 < 0)
						{
							Global_36998 = 0;
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
			if (Global_46304[iVar24 /*203*/].f_1 == iParam1 && Global_46304[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45942[iParam0 /*120*/].f_18[iVar0] = Global_46304[iVar23 /*203*/].f_1;
		Global_45942[iParam0 /*120*/].f_1[iVar0] = (Global_46304[iVar23 /*203*/].f_9 - 1);
		Global_45942[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45942[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45942[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45942[iParam0 /*120*/]++;
		iVar25 = Global_45942[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_46304[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_37004[iVar26 /*12*/].f_2;
		if (Global_46304[iVar23 /*203*/].f_10[(Global_46304[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46304[iVar23 /*203*/].f_10[(Global_46304[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_284(Global_37004[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_45942[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_280(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_280(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_280(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_280(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_288(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0xB03A1684359C50A1(Global_104551.f_24956, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_285(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46304[iVar0 /*203*/] = 0;
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_47726 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46304[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_46304[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_46304[iVar1 /*203*/].f_1;
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
		if (Global_47727[iVar1 /*53*/].f_52 == 0)
		{
			Global_47727[iVar1 /*53*/].f_52 = iVar0;
			Global_47727[iVar1 /*53*/] = iParam0;
			Global_47727[iVar1 /*53*/].f_1 = iParam1;
			Global_47727[iVar1 /*53*/].f_2 = iParam2;
			Global_104551.f_21007.f_310++;
			if (Global_104551.f_21007.f_310 == 0)
			{
				Global_104551.f_21007.f_310 = 1;
			}
			Global_47727[iVar1 /*53*/].f_10 = 0;
			Global_47727[iVar1 /*53*/].f_3 = Global_104551.f_21007.f_310;
			Global_47727[iVar1 /*53*/].f_4 = 1;
			Global_47726++;
			return Global_47727[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_290(int iParam0, bool bParam1)
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
	
	iVar0 = func_285(iParam0);
	if (iVar0 > -1)
	{
		if (Global_46304[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46304[iVar1 /*203*/] == 0)
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
		if (Global_46304[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46304[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_46304[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46304[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46304[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46304[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45942[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45942[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45942[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45942[iVar6 /*120*/].f_18[iVar8] == Global_46304[iVar4 /*203*/].f_1)
							{
								if (Global_45942[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36996 = (Global_36996 - 1);
											break;
										
										case 1:
											Global_36997 = (Global_36997 - 1);
											break;
										
										case 2:
											Global_36998 = (Global_36998 - 1);
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
	Global_46304[iVar4 /*203*/].f_2 = iParam0;
	Global_46304[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_46304[iVar4 /*203*/] = 1;
	}
	Global_104551.f_21007.f_310++;
	if (Global_104551.f_21007.f_310 == 0)
	{
		Global_104551.f_21007.f_310 = 1;
	}
	Global_46304[iVar4 /*203*/].f_1 = Global_104551.f_21007.f_310;
	Global_46304[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_291(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_32429[iParam0]), iParam1);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_104551.f_32429[iParam0]), iParam1);
	}
}

int func_292(int iParam0, int iParam1, int iParam2)
{
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_293(Global_104551.f_28020[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_293(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_322();
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
					func_321(99, 1);
					func_320(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_320(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_320(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_305(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_301(5))
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
							func_320(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_320(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_320(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_301(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_320(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_320(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_320(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_320(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_320(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_320(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_320(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_320(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_320(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x088BDDE9EE449CE6())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_320(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_320(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_320(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_320(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_320(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_320(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_301(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_320(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_320(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_320(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_320(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_320(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_320(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_300(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_321(95, iParam3);
					break;
				
				case 1:
					func_321(97, iParam3);
					break;
				
				case 2:
					func_321(96, iParam3);
					break;
			}
			func_321(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_296(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_296(iVar1);
	}
	iVar5 = (Global_53075[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53075[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53075[iVar2] = 2147483647;
				}
				else
				{
					Global_53075[iVar2] = (Global_53075[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_320(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_320(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_320(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53075[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53075[iVar2];
			Global_53075[iVar2] = (Global_53075[iVar2] - iParam3);
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
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104551.f_20534.f_233[iVar2 /*69*/]++;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_295(iParam0);
	if (Global_35859 == 15)
	{
		func_294(0);
	}
	return 1;
}

void func_294(bool bParam0)
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
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53083[iVar0 /*3*/][0] = Global_104551.f_20534[iVar0];
		Global_53083.f_31[iVar0 /*3*/][0] = Global_104551.f_20534.f_11[iVar0];
		Global_53083.f_62[iVar0 /*3*/][0] = Global_104551.f_20534.f_22[iVar0];
		Global_53083.f_93[iVar0 /*3*/][0] = Global_104551.f_20534.f_33[iVar0];
		Global_53083.f_124[iVar0 /*3*/][0] = Global_104551.f_20534.f_44[iVar0];
		Global_53083.f_155[iVar0 /*3*/][0] = Global_104551.f_20534.f_55[iVar0];
		Global_53083.f_186[iVar0 /*3*/][0] = Global_104551.f_20534.f_66[iVar0];
		Global_53083.f_217[iVar0 /*3*/][0] = Global_104551.f_20534.f_77[iVar0];
		Global_53083.f_248[iVar0 /*3*/][0] = Global_104551.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53083[iVar0 /*3*/][1] = Global_104551.f_20534[iVar0];
			Global_53083.f_31[iVar0 /*3*/][1] = Global_104551.f_20534.f_11[iVar0];
			Global_53083.f_62[iVar0 /*3*/][1] = Global_104551.f_20534.f_22[iVar0];
			Global_53083.f_93[iVar0 /*3*/][1] = Global_104551.f_20534.f_33[iVar0];
			Global_53083.f_124[iVar0 /*3*/][1] = Global_104551.f_20534.f_44[iVar0];
			Global_53083.f_155[iVar0 /*3*/][1] = Global_104551.f_20534.f_55[iVar0];
			Global_53083.f_186[iVar0 /*3*/][1] = Global_104551.f_20534.f_66[iVar0];
			Global_53083.f_217[iVar0 /*3*/][1] = Global_104551.f_20534.f_77[iVar0];
			Global_53083.f_248[iVar0 /*3*/][1] = Global_104551.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_295(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53075[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xD92C8D8AF3C67820(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xD92C8D8AF3C67820(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xD92C8D8AF3C67820(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_296(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_299(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0) || unk_0xB03A1684359C50A1(Global_2097152[func_298() /*12062*/].f_7637.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		unk_0x62148293B793073B(&(Global_2097152[func_298() /*12062*/].f_7637.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x55E6536147AC42E6("COUP_RED");
		unk_0xBEFD1ED9B6BE5127(func_297(iParam0));
		unk_0xB317125F2A5746EB(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_297(int iParam0)
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
		
		default:
	}
	return "";
}

int func_298()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_299(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_92();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_300(int iParam0)
{
	func_321(93, iParam0);
	func_321(29, iParam0);
	func_321(30, iParam0);
}

bool func_301(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_302(129, -1, -1);
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0);
	}
	return unk_0xB03A1684359C50A1(Global_2097152[func_298() /*12062*/].f_7637.f_10, iParam0);
}

int func_302(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_92();
	}
	iVar1 = func_304(iParam0, iParam1);
	uVar2 = func_303(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_303(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_304(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_92();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_305(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x391A4DC2CC8A9143(27))
	{
		return 0;
	}
	if (unk_0xD194C635833AC189(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD194C635833AC189(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xD92C8D8AF3C67820(joaat("num_cash_spent"), iVar1, 1);
		func_319(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_306(27, 1);
	return 1;
}

int func_306(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_307(iParam0, iParam1);
}

int func_307(int iParam0, int iParam1)
{
	if (func_27(14) && !func_318(iParam0))
	{
		return 0;
	}
	if (unk_0x391A4DC2CC8A9143(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25479 != 0 && !Global_70852)
	{
		return 0;
	}
	if (func_317(&Global_4267379))
	{
		if (func_315(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_308(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4815E9FF4A7078A5(iParam0))
		{
			return 0;
		}
		if (unk_0x391A4DC2CC8A9143(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_308(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_318(iParam1))
	{
		return 0;
	}
	if (func_315(uParam0, iParam1))
	{
		return 0;
	}
	if (func_314(uParam0) < 0f)
	{
		func_313(uParam0, 0);
	}
	func_311(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_309(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_309(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_318(iParam1))
	{
		return 0;
	}
	if (func_315(uParam0, iParam1))
	{
		return 0;
	}
	if (func_314(uParam0) < 0f)
	{
		func_313(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_310(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_310(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_311(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_312(uParam0, iVar0);
		iVar0++;
	}
	func_313(uParam0, (Global_4267378 - 0.5f));
}

void func_312(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_313(var uParam0, float fParam1)
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

float func_314(var uParam0)
{
	return uParam0->f_80;
}

bool func_315(var uParam0, int iParam1)
{
	return func_316(uParam0, iParam1) != -1;
}

int func_316(var uParam0, int iParam1)
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

bool func_317(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_318(int iParam0)
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

int func_319(int iParam0, int iParam1)
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
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
	}
	return 0;
}

void func_320(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD194C635833AC189(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xD92C8D8AF3C67820(iParam0, iVar0, 1);
}

void func_321(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_322()
{
	int iVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		unk_0xD194C635833AC189(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53075[0] == iVar0)
		{
			Global_53075[0] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53075[1] == iVar0)
		{
			Global_53075[1] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53075[2] == iVar0)
		{
			Global_53075[2] = iVar0;
		}
	}
}

int func_323(int iParam0)
{
	if (unk_0xC8AB6A5E6C1E6613())
	{
		if ((unk_0x5AFB8ED811F05E4D() - Global_28) > iParam0)
		{
			Global_27 = unk_0x5AFB8ED811F05E4D();
		}
		Global_28 = unk_0x5AFB8ED811F05E4D();
		if ((unk_0x5AFB8ED811F05E4D() - Global_27) > iParam0)
		{
			if (func_324())
			{
				Global_27 = unk_0x5AFB8ED811F05E4D();
				return 1;
			}
		}
	}
	return 0;
}

int func_324()
{
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (unk_0xFC0C00F9DE2AEC93(0, 18) || unk_0xFC0C00F9DE2AEC93(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_325(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xD194C635833AC189(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xD194C635833AC189(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xD194C635833AC189(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_326(int iParam0)
{
	return func_327(iParam0, Global_35859);
}

int func_327(int iParam0, int iParam1)
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

void func_328(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_438();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_128(iParam1);
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
	if (func_286(iVar0, iVar1, 1))
	{
		func_329(iVar0, sVar3);
		func_279(iVar0);
		func_288(iVar0);
	}
}

void func_329(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_285(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46304[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46304[iVar0 /*203*/].f_10[(Global_46304[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_46304[iVar0 /*203*/].f_10[(Global_46304[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_46304[iVar0 /*203*/].f_10[(Global_46304[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_46304[iVar0 /*203*/].f_10[(Global_46304[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_330(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_335(iParam1) || !func_335(iParam0))
	{
		return 1;
	}
	iVar0 = func_54(iParam0);
	iVar1 = func_54(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_334(iParam0);
	iVar1 = func_334(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_333(iParam0);
	iVar1 = func_333(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_332(iParam0);
	iVar1 = func_332(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_331(iParam0);
	iVar1 = func_331(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_331(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_332(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_333(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_334(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_335(int iParam0)
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
	iVar0 = func_331(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_332(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_333(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_54(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_56(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_334(iParam0);
	if (iVar5 < 1 || iVar5 > func_53(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_336()
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("startup_positioning")) == 0)
	{
		if (Global_104551.f_32429.f_5588)
		{
			if (!unk_0x31F12808DC47A9E5(Global_70579))
			{
				func_248(&(Global_104551.f_32429.f_5510), Global_104551.f_32429.f_5590);
				Global_104551.f_32429.f_5588 = 0;
			}
			else if (!unk_0xC4B84EB67F78C1F0(Global_70579, 0) || func_46(Global_70579, Global_104551.f_32429.f_5590, 1))
			{
				Global_104551.f_32429.f_5588 = 0;
			}
			else
			{
				if ((unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0) == Global_70579) && func_363(unk_0x18F7BE9ACB7D08F4()) != Global_104551.f_32429.f_5590)
				{
					Global_104551.f_32429.f_5590 = func_363(unk_0x18F7BE9ACB7D08F4());
				}
				if (Global_70579 != iLocal_671)
				{
					sVar2 = unk_0x7677C12E3146DA0A(Global_70579, &uVar1);
					if (!unk_0xFAFFA408239A026B(sVar2))
					{
						if (unk_0x6E987D62C8535B6E(sVar2) == unk_0x6E987D62C8535B6E("vehicle_gen_controller"))
						{
							Global_104551.f_32429.f_5588 = 0;
							iLocal_1028 = Global_70579;
							if (Global_69674.f_139[24] == Global_70579 || (Global_70580 == Global_70579 && Global_70581 == 24))
							{
								func_362(458, 24, -1, 1);
							}
							else
							{
								func_362(458, 0, -1, 1);
							}
							Global_70579 = 0;
						}
					}
				}
				if (((Global_104551.f_32429.f_5590 != func_438() && Global_92298[Global_104551.f_32429.f_5590 /*98*/] == Global_104551.f_32429.f_5510.f_66) && unk_0x9D39145AD645E383(&(Global_92298[Global_104551.f_32429.f_5590 /*98*/].f_27), &(Global_104551.f_32429.f_5510.f_1))) && !unk_0x51CFE20A158947F4())
				{
					func_113(&(Global_104551.f_32429.f_5510), &(Global_104551.f_32429.f_5600[Global_104551.f_32429.f_5590 /*78*/]));
					Global_104551.f_32429.f_5588 = 0;
					iLocal_1028 = 0;
					func_362(458, 0, -1, 1);
					Global_70579 = 0;
				}
			}
		}
		else if ((unk_0x31F12808DC47A9E5(Global_70579) && unk_0xC4B84EB67F78C1F0(Global_70579, 0)) && !func_46(Global_70579, Global_104551.f_32429.f_5590, 1))
		{
			Global_104551.f_32429.f_5588 = 1;
		}
		if (unk_0x31F12808DC47A9E5(iLocal_1028) && unk_0xC4B84EB67F78C1F0(iLocal_1028, 0))
		{
			if (((!Global_104551.f_32429.f_5588 && iLocal_1028 != Global_70579) && iLocal_1028 != iLocal_1029) && !unk_0xE54DCC6B21FDC95A(iLocal_1028, 1))
			{
				func_31(iLocal_1028, 145);
				iLocal_1028 = 0;
				func_362(458, 0, -1, 1);
			}
		}
		else if (iLocal_1028 != 0)
		{
			iLocal_1028 = 0;
			func_362(458, 0, -1, 1);
		}
		if (unk_0x31F12808DC47A9E5(iLocal_1029) && unk_0xC4B84EB67F78C1F0(iLocal_1029, 0))
		{
		}
		else if (iLocal_1029 != 0)
		{
			iLocal_1029 = 0;
		}
	}
	if (Global_70583.f_66 != 0 && Global_70580 == 0)
	{
		func_248(&Global_70583, Global_70661);
		Global_70583.f_66 = 0;
	}
	Var3 = { 433.6721f, -1006.538f, 25.96351f };
	Var6 = { 433.6578f, -1017.5f, 32.09895f };
	fVar9 = 11.25f;
	if (iLocal_667 > 0 && iLocal_667 < 99)
	{
		if (iLocal_667 != 3)
		{
			if (((((unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) || !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Var3, Var6, fVar9, 0, 1, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14))
			{
				iLocal_667 = 99;
			}
		}
	}
	if (func_361(iLocal_672))
	{
		if (!unk_0xE769D9B5158D0F11(uLocal_857))
		{
			if (((func_27(15) || func_27(12)) && iLocal_667 != 3) && !unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
			{
				uLocal_857 = func_359(428.37f, -1013.5f, 27.93f, 0);
				unk_0xDC0EBFC7730AA226(uLocal_857, 225);
				unk_0x61C2EC67C90074E5(uLocal_857, "IMPOUND_BLIPNAME");
				unk_0x90260EB52E59F0F5(uLocal_857, true);
			}
		}
		else if ((!(func_27(15) || func_27(12)) || iLocal_667 == 3) || unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			unk_0x40D517D991458154(&uLocal_857);
		}
	}
	else if (unk_0xE769D9B5158D0F11(uLocal_857))
	{
		unk_0x40D517D991458154(&uLocal_857);
	}
	switch (iLocal_667)
	{
		case 0:
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if ((Local_402.f_2 == 0 && (func_27(15) || func_27(12))) && !unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					if (func_361(iLocal_672))
					{
						if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Var3, Var6, fVar9, 0, 1, 0))
						{
							if (func_325(iLocal_672) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (func_244(iVar11, iLocal_672))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									func_186(&iLocal_668, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_186(&iLocal_668, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_667 = 1;
							}
							else
							{
								func_184("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && func_182(0, -1, 0))
			{
				if (func_181(iLocal_668, 1))
				{
					func_68(&iLocal_668);
					unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
					func_358();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (func_244(iVar13, iLocal_672))
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
							if (func_244(iVar14, iLocal_672))
							{
								if (iVar14 == 0)
								{
									Var15 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var15 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_342(&iLocal_671, iVar14, Var15, 179.24f, 1))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								if (unk_0x31F12808DC47A9E5(iLocal_671))
								{
									if (iVar14 == 0)
									{
										func_341(18, 1, 0);
									}
									else
									{
										func_341(19, 1, 0);
									}
									if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
									{
										unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
									}
									func_292(iLocal_672, 118, 250);
									func_340(iVar14);
									func_31(iLocal_671, func_438());
									func_70(1, -1);
									iLocal_667 = 3;
									func_68(&iLocal_668);
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
			switch (func_438())
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
			func_358();
			if (!iLocal_657 || iLocal_658)
			{
				func_179(0);
				func_178(1, 1, 0, 0, 0);
				func_177(1, 2, 1, 1, 1);
				func_176("IMPOUND_TITLE");
				iLocal_663 = 0;
				iVar19 = -1;
				iVar21 = 0;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (func_244(iVar20, iLocal_672))
					{
						func_131(iVar21, unk_0x89CCD0AB60278D90(Global_104551.f_32429.f_5038[iVar18 /*157*/][iVar20 /*78*/].f_66), 0, 1, 0, 0);
						if (iVar19 == -1)
						{
							iVar19 = iVar21;
							iLocal_662 = iVar21;
						}
						unk_0xD2A9C3F486236CC5(&iLocal_663, iVar21);
						iLocal_664[iVar21] = iVar20;
						func_131(iVar21, "IMPOUND_COST", 1, 1, 0, 0);
						func_339(250, 0);
						iVar21++;
					}
					iVar20++;
				}
				iVar21 = 0;
				func_124(iLocal_662, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar0 = 0;
				if (unk_0xC339C5C5B5E8BC5B())
				{
					if (unk_0x51B842F5244C55D8(2))
					{
						unk_0x9C7EE7DE7041A3F4(0, 1, 1);
						unk_0x9C7EE7DE7041A3F4(0, 2, 1);
						unk_0xB156023E2D4E4859(0, 237, 1);
						unk_0xB156023E2D4E4859(0, 238, 1);
						unk_0xB156023E2D4E4859(0, 241, 1);
						unk_0xB156023E2D4E4859(0, 242, 1);
						func_121(0, 0, 0, 1);
						func_120(0, -1, 1);
						if (func_119())
						{
							if (Global_4265875 != iLocal_662)
							{
								unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_662 = Global_4265875;
								func_124(iLocal_662, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (unk_0xFC0C00F9DE2AEC93(2, 188) || unk_0xFC0C00F9DE2AEC93(2, 241))
				{
					if (!iLocal_659)
					{
						iLocal_660 = 1;
						unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar22 = (iLocal_662 - 1);
						while (iVar22 >= 0)
						{
							if (unk_0xB03A1684359C50A1(iLocal_663, iVar22))
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
								if (unk_0xB03A1684359C50A1(iLocal_663, iVar22))
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
							func_124(iLocal_662, 1, 1);
						}
					}
				}
				else if (unk_0xFC0C00F9DE2AEC93(2, 187) || unk_0xFC0C00F9DE2AEC93(2, 242))
				{
					if (!iLocal_659)
					{
						iLocal_660 = 1;
						unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar24 = iLocal_662 + 1;
						while (iVar24 <= 31)
						{
							if (unk_0xB03A1684359C50A1(iLocal_663, iVar24))
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
								if (unk_0xB03A1684359C50A1(iLocal_663, iVar24))
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
							func_124(iLocal_662, 1, 1);
						}
					}
				}
				else if (unk_0x3469AD51EA8B9583(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0x929C3CBA660376D5(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!iLocal_659)
					{
						func_118("IMPOUND_CNF", 0, 0);
						func_117(-1);
						func_116(201, "ITEM_YES", -1);
						func_116(202, "ITEM_NO", -1);
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
						if (func_244(iLocal_664[iLocal_662], iLocal_672))
						{
							while (!func_342(&iLocal_671, iLocal_664[iLocal_662], Var26, 179.24f, 1))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							if (unk_0x31F12808DC47A9E5(iLocal_671))
							{
								if (iLocal_662 == 0)
								{
									func_341(18, 1, 0);
								}
								else
								{
									func_341(19, 1, 0);
								}
								if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
								{
									unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
								}
								func_292(iLocal_672, 118, 250);
								func_340(iLocal_664[iLocal_662]);
								func_31(iLocal_671, func_438());
								func_70(1, -1);
								iLocal_667++;
								func_68(&iLocal_668);
								iLocal_668 = -1;
								iLocal_659 = 0;
							}
						}
						iLocal_658 = 1;
					}
				}
				else if (unk_0x3469AD51EA8B9583(2, 202) || unk_0x3469AD51EA8B9583(2, 238))
				{
					unk_0x929C3CBA660376D5(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			unk_0x3F19B70555683951();
			if (iLocal_660)
			{
				func_118("", 0, 0);
				func_117(-1);
				func_116(201, "ITEM_SELECT", -1);
				func_116(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			if (func_182(0, -1, 0))
			{
				func_73(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_338())
			{
				func_31(iLocal_671, func_438());
				iLocal_667 = 99;
			}
			else if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), 431.4f, -997.33f, 24.76f, 1) > 100f)
			{
				if (unk_0x31F12808DC47A9E5(iLocal_671))
				{
					if (!unk_0x74C2FE037DFC8B4A(iLocal_671, 0))
					{
						if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_671, 0) && unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iLocal_671, 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), 1) > 100f)
						{
							if (!unk_0x3AAE8FF7FB37F69E(iLocal_671))
							{
								func_337(iLocal_671, 1, 145);
								unk_0xBECECD970F645217(&iLocal_671);
								unk_0xE54597236B7D8C63(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0);
								iLocal_667 = 99;
							}
						}
						else if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_671, 0))
						{
							unk_0xE54597236B7D8C63(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0);
							func_31(iLocal_671, func_438());
							iLocal_667 = 99;
						}
					}
					else
					{
						unk_0xE54597236B7D8C63(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0);
						iLocal_667 = 99;
					}
				}
				else
				{
					unk_0xE54597236B7D8C63(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0);
					iLocal_667 = 99;
				}
			}
			break;
		
		case 99:
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			}
			func_68(&iLocal_668);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_664[iVar29] = -1;
				iVar29++;
			}
			func_341(18, 0, 0);
			func_341(19, 0, 0);
			if (unk_0x31F12808DC47A9E5(iLocal_671))
			{
				unk_0x4F5FF3F3FDCAB15D(&iLocal_671);
			}
			iLocal_667 = 0;
			break;
	}
	if (iLocal_667 == 0)
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, 1, 0))
		{
			if (!iLocal_670)
			{
				func_341(18, 1, 0);
				iLocal_670 = 1;
			}
		}
		else if (iLocal_670 && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, 1, 0))
		{
			func_341(18, 0, 0);
			iLocal_670 = 0;
		}
	}
}

int func_337(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x7677C12E3146DA0A(iParam0, &uVar0);
		if (!unk_0xFAFFA408239A026B(sVar1))
		{
			if (unk_0x6E987D62C8535B6E(sVar1) == unk_0x6E987D62C8535B6E("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_31(iParam0, iParam2);
	return 1;
}

int func_338()
{
	if (unk_0xCF8C072C2A4F2A76(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xCF8C072C2A4F2A76(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xCF8C072C2A4F2A76(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xCF8C072C2A4F2A76(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_339(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17301.f_5092 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 >= 4)
	{
		return;
	}
	if (Global_17301.f_5611 != 1)
	{
		return;
	}
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		return;
	}
	Global_17301.f_3918[Global_17301.f_5092] = iParam0;
	Global_17301.f_5092++;
	Global_17301.f_2124[Global_17301.f_5609 /*5*/][Global_17301.f_5610] = 2;
	Global_17301.f_5610++;
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		fVar0 = func_127();
		if (Global_17301.f_4945[Global_17301.f_5089] && Global_17301.f_5610 == Global_17301.f_5608)
		{
			func_106(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17301.f_4938[(Global_17301.f_5089 - 1)])
		{
			Global_17301.f_4938[(Global_17301.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17301.f_5610 >= Global_17301.f_5608)
		{
			fVar3 = func_126();
			if (fVar3 > Global_17301.f_5612[Global_17301.f_5088])
			{
				Global_17301.f_5612[Global_17301.f_5088] = fVar3;
			}
		}
	}
}

void func_340(int iParam0)
{
	int iVar0;
	
	switch (func_438())
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
	if (iParam0 < 0 || iParam0 >= func_245(&(Global_104551.f_32429.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_104551.f_32429.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_341(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_34982[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (unk_0xB03A1684359C50A1(Global_34982[iParam0 /*31*/].f_1, 1))
			{
				Global_34982[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_34982[iParam0 /*31*/].f_22 = 1f;
			}
			unk_0xFF035B24ADC36682(Global_34982[iParam0 /*31*/], Global_34982[iParam0 /*31*/].f_22, 0, 0);
			unk_0xF23A1E4D6AD3CAD2(Global_34982[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		unk_0x62148293B793073B(&(Global_34982[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_34982[iParam0 /*31*/].f_22 = 0f;
			unk_0xFF035B24ADC36682(Global_34982[iParam0 /*31*/], Global_34982[iParam0 /*31*/].f_22, 0, 0);
			unk_0xF23A1E4D6AD3CAD2(Global_34982[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_342(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_244(iParam1, func_438()) || unk_0x31F12808DC47A9E5(*iParam0))
	{
		return 0;
	}
	switch (func_438())
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
	unk_0x9016574B77A748EE(Global_104551.f_32429.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (unk_0xEDFE27D1AEA0EA7F(Global_104551.f_32429.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = unk_0x3064CCF56C6C32BC(Global_104551.f_32429.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, Param2, fParam5, 0, 0, 0);
		func_343(*iParam0, &(Global_104551.f_32429.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		unk_0x9B53B2691E2B1F79(*iParam0, 1084227584);
		unk_0x20DA875A55437C52(*iParam0, 0);
		unk_0xE58E53D56F33BF17(*iParam0, 1);
		if (bParam6)
		{
			unk_0x419C9117019F2E5A(Global_104551.f_32429.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_343(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if (!func_351(iParam0))
		{
			if (unk_0x6E987D62C8535B6E(&(uParam1->f_1)) != 0)
			{
				unk_0x1C4B08C81FA52071(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x1F5FE6436A0EC41B())
			{
				unk_0x98347A9DB184A9E3(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xB03A1684359C50A1(uParam1->f_77, func_33(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xB03A1684359C50A1(uParam1->f_77, func_33(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_33(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xF423B67DFD20BCA9(iParam0, 0);
			if (unk_0x2FA7EA3CA1AD2BF9(iParam0, 5) != -1)
			{
				unk_0xF423B67DFD20BCA9(iParam0, 1);
			}
		}
		if (unk_0xB03A1684359C50A1(uParam1->f_77, 13))
		{
			unk_0x0A0A6CC3A8BAD4E2(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x922D3A1033F467B3(iParam0);
		}
		if (unk_0xB03A1684359C50A1(uParam1->f_77, 12))
		{
			unk_0xE185F21936CEEAE1(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xBC56E64DD6367C93(iParam0);
		}
		unk_0x62270578972B4C56(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xD7C3FB938E520431(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xB03A1684359C50A1(uParam1->f_77, 15) || func_350(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_349())
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
		unk_0xB5F6C7EFD3748488(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x9F91D8B05EF0ED7C(iParam0, 0);
		}
		else
		{
			unk_0x9F91D8B05EF0ED7C(iParam0, 0);
			unk_0x9F91D8B05EF0ED7C(iParam0, uParam1->f_65);
		}
		unk_0x5D41CFDE94DA9F49(iParam0, !unk_0xB03A1684359C50A1(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xA2B45B1D3EE42178(iParam0, uParam1->f_70);
		}
		unk_0xC7E45A561A9E1BA4(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x3184374ACA6B725F(iParam0, 2, unk_0xB03A1684359C50A1(uParam1->f_77, 28));
		unk_0x3184374ACA6B725F(iParam0, 3, unk_0xB03A1684359C50A1(uParam1->f_77, 29));
		unk_0x3184374ACA6B725F(iParam0, 0, unk_0xB03A1684359C50A1(uParam1->f_77, 30));
		unk_0x3184374ACA6B725F(iParam0, 1, unk_0xB03A1684359C50A1(uParam1->f_77, 31));
		unk_0x0BF4E270537B1A96(iParam0, unk_0xB03A1684359C50A1(uParam1->f_77, 10));
		if (unk_0x299CF4427BA55484(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xCB8AD4899214D0E6(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(iParam0)))
			{
				if (unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_348(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_348(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x7C094ED2B27D253F(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xEBF8B8510CD7F80B(iParam0, 1);
			}
			else
			{
				unk_0x7EC79A4EBA8F7EF4(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_344(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xB6353CAE3EBC0919(uParam1->f_66) && !unk_0x9605D2F02FA93911(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xB03A1684359C50A1(uParam1->f_77, func_33(iVar2 + 1)))
				{
					if (!unk_0x6276BF0E9518E43A(iParam0, iVar2 + 1))
					{
						unk_0xDE2241F5D2C60ED8(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x6276BF0E9518E43A(iParam0, iVar2 + 1))
				{
					unk_0xDE2241F5D2C60ED8(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x4F69FBD64CDF125B(iParam0) == joaat("sheava") || unk_0x4F69FBD64CDF125B(iParam0) == joaat("omnis")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("le7b"))
		{
			if (unk_0x2FA7EA3CA1AD2BF9(iParam0, 0) == -1)
			{
				unk_0xDE2241F5D2C60ED8(iParam0, 1, false);
			}
		}
		if (((unk_0xD8BB60C76D29E4BB(uParam1->f_66) && unk_0x3619CAA2EDF23557(iParam0)) && !unk_0x0665EB554F07889E(iParam0, joaat("avenger"))) && !((Global_1646129.f_49002 == 6 || Global_1646129.f_49002 == 7) && unk_0xB03A1684359C50A1(Global_1646129.f_26, 8)))
		{
			if (!unk_0xB03A1684359C50A1(uParam1->f_77, 23))
			{
				if (unk_0xB03A1684359C50A1(uParam1->f_77, 22))
				{
					unk_0x6E397FC4BBDF1484(iParam0, 2);
				}
				else
				{
					unk_0x6E397FC4BBDF1484(iParam0, 3);
				}
			}
			else
			{
				unk_0x6E397FC4BBDF1484(iParam0, 4);
			}
		}
		if (unk_0xB03A1684359C50A1(uParam1->f_77, 27))
		{
			unk_0x9B3EE748523D62C3(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x9B3EE748523D62C3(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_344(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC4B84EB67F78C1F0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x8A27C3C945C9E921(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xD8A3CA4A1B092413(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4D9CCED3A1C96367(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x2FA7EA3CA1AD2BF9(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x814DFE1772D11095(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x6819ABF1BBD7D728(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x6819ABF1BBD7D728(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x6819ABF1BBD7D728(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_222(unk_0x4F69FBD64CDF125B(*iParam0), 1) && unk_0x2FA7EA3CA1AD2BF9(*iParam0, 24) != func_347(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x6819ABF1BBD7D728(*iParam0, 24, func_347(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_346(iParam0);
	if (func_345(*iParam0))
	{
		unk_0xF321DFA4C895508B(*iParam0, 1);
		unk_0xE58E53D56F33BF17(*iParam0, 1);
	}
	return 1;
}

int func_345(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x31F12808DC47A9E5(uParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0)) && unk_0x8A27C3C945C9E921(iParam0) > 0)
	{
		unk_0xD8A3CA4A1B092413(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x2FA7EA3CA1AD2BF9(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xEC0D634C701696DE(iParam0, iVar1, unk_0x2FA7EA3CA1AD2BF9(iParam0, iVar1)), 16);
				iVar2 = unk_0x6E987D62C8535B6E(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x6E987D62C8535B6E("MNU_CAGE") || iVar2 == unk_0x6E987D62C8535B6E("SABRE_CAG"))
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

void func_346(var uParam0)
{
	switch (unk_0x4F69FBD64CDF125B(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x2FA7EA3CA1AD2BF9(*uParam0, 4) == 0)
			{
				unk_0x6819ABF1BBD7D728(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x814DFE1772D11095(*uParam0, 13);
			}
			break;
	}
}

int func_347(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		switch (unk_0x4F69FBD64CDF125B(iParam0))
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
		iVar0 = unk_0xEBA4C479CD632515(iParam0, 38);
		iVar1 = unk_0xEBA4C479CD632515(iParam0, 24);
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

void func_348(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x8A27C3C945C9E921(iParam0) > 0)
	{
		unk_0xD8A3CA4A1B092413(iParam0, 0);
		iVar0 = unk_0x2FA7EA3CA1AD2BF9(iParam0, 24);
		iVar1 = unk_0x8730A3E327DA8627(iParam0, 24);
		unk_0xE047CE9047B91786(iParam0, iParam1);
		if (unk_0x4F69FBD64CDF125B(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x814DFE1772D11095(iParam0, 24);
		}
		else
		{
			unk_0x6819ABF1BBD7D728(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_349()
{
	return unk_0x5E02CD27DBE77D67(joaat("mpindependence"));
}

int func_350(int iParam0)
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (unk_0x23E808B211571A22("MPBitset", 3))
			{
				if (unk_0x788C6B35BB3FCF53(iParam0, "MPBitset"))
				{
					iVar0 = unk_0xFE0F5B815FB9D3D1(iParam0, "MPBitset");
				}
				return unk_0xB03A1684359C50A1(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!func_357(unk_0x8CFC7D6E1DA5D304(), -1))
		{
			iParam0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		}
	}
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	if (unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	if (func_353(unk_0x8CFC7D6E1DA5D304()) == 3)
	{
		if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (func_352(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_352(int iParam0)
{
	if (unk_0x23E808B211571A22("FMDeliverableID", 3))
	{
		if (unk_0x788C6B35BB3FCF53(iParam0, "FMDeliverableID"))
		{
			return unk_0xFE0F5B815FB9D3D1(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_353(int iParam0)
{
	if (func_356(iParam0) == 233)
	{
		return func_354(iParam0);
	}
	return -1;
}

int func_354(int iParam0)
{
	if (func_355(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_176;
	}
	return -1;
}

int func_355(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_356(int iParam0)
{
	if (func_355(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_33;
	}
	return -1;
}

int func_357(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_207(iParam0, 1, 1))
	{
		if (unk_0x657B649BA2AD3582(unk_0x6604E096142B4B55(iParam0), 0))
		{
			iVar0 = unk_0x5AD687C3474F04B4(unk_0x6604E096142B4B55(iParam0), 0);
			if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
			{
				if (unk_0x18F7BE9ACB7D08F4() == unk_0x4983F8C51A0C0AF3(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_358()
{
	unk_0x2E46E316136A29F6(0);
	unk_0xB156023E2D4E4859(0, 188, 1);
	unk_0xB156023E2D4E4859(0, 187, 1);
	unk_0xB156023E2D4E4859(0, 201, 1);
	unk_0xB156023E2D4E4859(0, 202, 1);
	unk_0xB156023E2D4E4859(0, 1, 1);
	unk_0xB156023E2D4E4859(0, 2, 1);
	unk_0xB156023E2D4E4859(0, 239, 1);
	unk_0xB156023E2D4E4859(0, 240, 1);
}

var func_359(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x29F0B4D7EFF08BF6(Param0);
	unk_0x0590222010A36CE4(uVar0, func_360(unk_0x44243F2E2F58B8E3(), 1f, 1f));
	unk_0x63EECA6600F1090E(uVar0, iParam3);
	return uVar0;
}

float func_360(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_361(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_244(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_362(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_92();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xEBEF812390A22BFA((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xEBEF812390A22BFA((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xEBEF812390A22BFA((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xEBEF812390A22BFA((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xEBEF812390A22BFA((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xEBEF812390A22BFA((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xEBEF812390A22BFA((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xEBEF812390A22BFA((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xEBEF812390A22BFA((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xEBEF812390A22BFA((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xEBEF812390A22BFA((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xEBEF812390A22BFA((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xEBEF812390A22BFA((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xEBEF812390A22BFA((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xEBEF812390A22BFA((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xEBEF812390A22BFA((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xEBEF812390A22BFA((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xEBEF812390A22BFA((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xBE55308715B43107(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_363(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_364(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_364(int iParam0)
{
	if (func_25(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_365(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (!unk_0xB03A1684359C50A1(Global_104551.f_9986.f_25, 7))
	{
		if (!unk_0xB03A1684359C50A1(*uParam0, 6))
		{
			if (func_27(13) && func_14(func_16()))
			{
				unk_0xD2A9C3F486236CC5(uParam0, 6);
				iVar0 = func_9();
				uParam0->f_6 = { func_396(iVar0) };
				if (Global_25504 == iVar0 || Global_25504 == 0)
				{
					func_3(1);
					Var1 = { func_395("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					unk_0x64D773F3BE6DC50A(&Var1);
					iVar0 = (Global_25504 + 1 % 8);
					func_393(uParam0, iVar0);
					uParam0->f_2 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(8000, 12000));
					unk_0xD2A9C3F486236CC5(uParam0, 12);
					if (iVar0 == 7)
					{
						unk_0xD2A9C3F486236CC5(&(Global_104551.f_9986.f_25), 7);
						func_392(255, 0);
					}
				}
				else
				{
					func_393(uParam0, 0);
					unk_0x62148293B793073B(&(Global_104551.f_9986.f_25), 12);
				}
			}
		}
		else
		{
			func_391();
			if (!unk_0xB03A1684359C50A1(*uParam0, 31))
			{
				if (!unk_0xB03A1684359C50A1(*uParam0, 25))
				{
					func_390(uParam0);
				}
				else if (func_389())
				{
					func_373(uParam0);
					uParam0->f_3 = unk_0x5AFB8ED811F05E4D() + 2000;
				}
				if (!func_372(0))
				{
					func_392(255, 0);
				}
			}
			else if (func_372(0))
			{
				if (unk_0x5AFB8ED811F05E4D() > uParam0->f_3)
				{
					func_392(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16()))
			{
				func_366(uParam0);
			}
		}
	}
}

void func_366(var uParam0)
{
	struct<8> Var0;
	
	if (unk_0xB03A1684359C50A1(*uParam0, 31))
	{
		func_371(uParam0);
	}
	if (unk_0xB03A1684359C50A1(*uParam0, 25))
	{
		func_367(uParam0);
	}
	Var0 = { func_395("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (unk_0x36CC410474001FBC(&Var0))
	{
		unk_0xA11D9B06B99FE786(&Var0);
	}
	unk_0x62148293B793073B(uParam0, 6);
	unk_0x62148293B793073B(uParam0, 30);
	unk_0x62148293B793073B(uParam0, 8);
}

void func_367(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_370(iVar0);
	iVar2 = func_369(iVar1);
	iVar3 = func_368(iVar1);
	if (iVar2 != 0)
	{
		unk_0x419C9117019F2E5A(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x419C9117019F2E5A(iVar3);
	}
	unk_0x62148293B793073B(uParam0, 25);
}

int func_368(int iParam0)
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

int func_369(int iParam0)
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

int func_370(int iParam0)
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

void func_371(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_4))
	{
		unk_0x8594DFCA271B6347(unk_0x761660F5CE986DC4(uParam0->f_4, 0), 10f);
		unk_0xBECECD970F645217(&(uParam0->f_4));
	}
	if (unk_0x31F12808DC47A9E5(uParam0->f_5))
	{
		unk_0x8594DFCA271B6347(unk_0x761660F5CE986DC4(uParam0->f_5, 0), 10f);
		unk_0x63C116C2153FAA3C(&(uParam0->f_5));
	}
	unk_0x62148293B793073B(uParam0, 31);
}

bool func_372(bool bParam0)
{
	if (bParam0)
	{
		return Global_101299.f_2 > 0.5f;
	}
	return Global_101299.f_2 >= 255f;
}

void func_373(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_370(iVar0);
	func_374(iVar1, &(uParam0->f_5), &(uParam0->f_4), func_388(iVar0), func_387(iVar0), 1);
	unk_0xD2A9C3F486236CC5(uParam0, 31);
}

void func_374(int iParam0, var uParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 12:
			func_386(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 109:
			func_385(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 43:
			func_384(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 35:
			func_383(uParam2, Param3, uParam6, bParam7);
			break;
		
		case 28:
			func_382(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 17:
			func_381(uParam1, uParam2, Param3, uParam6, bParam7);
			break;
		
		case 49:
			func_379(uParam1, uParam2, Param3, uParam6);
			break;
		
		case 25:
			func_378(uParam1, Param3, uParam6);
			break;
		
		case 14:
			func_377(uParam1, Param3, uParam6);
			break;
		
		case 86:
			func_375(uParam1, Param3, uParam6);
			break;
	}
}

void func_375(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_369(86);
	if (unk_0xEDFE27D1AEA0EA7F(iVar0))
	{
		*uParam0 = unk_0x364B87C5C64BD100(5, iVar0, Param1, uParam4, 1, 1);
		unk_0x0FD0F9C088D4B182(*uParam0, 1);
		unk_0x764AFC5A3A16C2B0(*uParam0, 227, 1);
		unk_0x419C9117019F2E5A(iVar0);
		unk_0x874004759C4BE8DC(*uParam0, 0);
		unk_0x2F96E5B023BC3998(*uParam0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_376(*uParam0);
		return;
	}
}

void func_376(var uParam0)
{
	unk_0x6E84AEA23E75B751(uParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	unk_0x6E84AEA23E75B751(uParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	unk_0x6E84AEA23E75B751(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	unk_0x6E84AEA23E75B751(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	unk_0x6E84AEA23E75B751(uParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	unk_0x6E84AEA23E75B751(uParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	unk_0x6E84AEA23E75B751(uParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	unk_0x6E84AEA23E75B751(uParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	unk_0x6E84AEA23E75B751(uParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	unk_0x6E84AEA23E75B751(uParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	unk_0x6E84AEA23E75B751(uParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	unk_0x6E84AEA23E75B751(uParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6E84AEA23E75B751(uParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_377(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_369(14);
	if (unk_0xEDFE27D1AEA0EA7F(iVar0))
	{
		*uParam0 = unk_0x364B87C5C64BD100(5, iVar0, Param1, uParam4, 1, 1);
		unk_0x0FD0F9C088D4B182(*uParam0, 1);
		unk_0x764AFC5A3A16C2B0(*uParam0, 227, 1);
		unk_0x419C9117019F2E5A(iVar0);
		unk_0x874004759C4BE8DC(*uParam0, 0);
		unk_0x2F96E5B023BC3998(*uParam0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_376(*uParam0);
		return;
	}
}

void func_378(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_369(25);
	if (unk_0xEDFE27D1AEA0EA7F(iVar0))
	{
		*uParam0 = unk_0x364B87C5C64BD100(4, iVar0, Param1, uParam4, 1, 1);
		unk_0x0FD0F9C088D4B182(*uParam0, 1);
		unk_0x764AFC5A3A16C2B0(*uParam0, 227, 1);
		unk_0x419C9117019F2E5A(iVar0);
		unk_0x874004759C4BE8DC(*uParam0, 0);
		unk_0x2F96E5B023BC3998(*uParam0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 + 0.02f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 - 0.23f), (Param1.f_1 + 0.04f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.11f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, (Param1.f_0 + 0.09f), (Param1.f_1 - 0.06f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_376(*uParam0);
		return;
	}
}

void func_379(var uParam0, var uParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_369(49);
	iVar1 = func_368(49);
	if (unk_0xEDFE27D1AEA0EA7F(iVar0) && unk_0xEDFE27D1AEA0EA7F(iVar1))
	{
		*uParam0 = unk_0x364B87C5C64BD100(4, iVar0, Param2, uParam5, 1, 1);
		unk_0x0FD0F9C088D4B182(*uParam0, 1);
		unk_0x764AFC5A3A16C2B0(*uParam0, 227, 1);
		unk_0x419C9117019F2E5A(iVar0);
		unk_0x874004759C4BE8DC(*uParam0, 0);
		unk_0x2F96E5B023BC3998(*uParam0);
		unk_0x6B01B73E7B5A03F7(1110, ((Param2.f_0 + 0.12f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, ((Param2.f_0 - 0.03f) - 0.3f), ((Param2.f_1 + 0.04f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, ((Param2.f_0 - 0.2f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, ((Param2.f_0 - 0.05f) - 0.3f), ((Param2.f_1 - 0.15f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6B01B73E7B5A03F7(1110, ((Param2.f_0 + 0.01f) - 0.3f), ((Param2.f_1 - 0.06f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_376(*uParam0);
		Var2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = unk_0x3064CCF56C6C32BC(iVar1, Param2 + Var2, uParam5, 1, 1, 0);
		unk_0x419C9117019F2E5A(iVar1);
		unk_0x1A9F0BE7AECEABB1(*uParam1, 2f);
		unk_0x9B53B2691E2B1F79(*uParam1, 1084227584);
		unk_0x62C9C90C90248D8F(*uParam1, 2f);
		unk_0x6D43F4166A458488(*uParam1, 1f);
		unk_0xF76BA00560EDBD4D(*uParam1, 0, func_380());
		unk_0xF76BA00560EDBD4D(*uParam1, 1, func_380());
		unk_0xF76BA00560EDBD4D(*uParam1, 2, func_380());
		unk_0xF76BA00560EDBD4D(*uParam1, 3, func_380());
		unk_0xF76BA00560EDBD4D(*uParam1, 4, func_380());
		unk_0xF76BA00560EDBD4D(*uParam1, 5, func_380());
		unk_0xD5D1BF12DEFE6979(*uParam1, 15f);
		unk_0x417CA2BF319F3894(*uParam1, 3);
		unk_0x91663DAD5DDAFA96(*uParam1, 2);
		unk_0x79C42A731F87F4BA(*uParam1, 1);
		unk_0x2F96E5B023BC3998(*uParam1);
		return;
	}
}

int func_380()
{
	if (unk_0xB03A1684359C50A1(unk_0x61E9B3BFA06B017B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_381(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_369(17);
	iVar1 = func_368(17);
	if (unk_0xEDFE27D1AEA0EA7F(iVar0) && unk_0xEDFE27D1AEA0EA7F(iVar1))
	{
		*uParam0 = unk_0x364B87C5C64BD100(4, iVar1, Param2, uParam5, 1, 1);
		unk_0x0FD0F9C088D4B182(*uParam0, 1);
		unk_0x764AFC5A3A16C2B0(*uParam0, 227, 1);
		unk_0x419C9117019F2E5A(iVar1);
		unk_0x874004759C4BE8DC(*uParam0, 0);
		unk_0x2F96E5B023BC3998(*uParam0);
		Var2 = { 0.02f, -0.01f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.23f, 0.04f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.01f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.11f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.09f, -0.06f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam6)
		{
			Var2 = { 0.5783f, 0.1357f, -0.0683f };
			unk_0x6B01B73E7B5A03F7(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.0477f, 0.1103f, -0.1388f };
			unk_0x6B01B73E7B5A03F7(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.5048f, 0.4595f, -0.1953f };
			unk_0x6B01B73E7B5A03F7(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_376(*uParam0);
		*uParam1 = unk_0x3064CCF56C6C32BC(iVar0, (Param2.f_0 - 0.4f), (Param2.f_1 - 0.5f), Param2.f_2, uParam5, 1, 1, 0);
		unk_0x419C9117019F2E5A(iVar0);
		unk_0x58F6B49606932378(*uParam1, 0f, 85f, 0f, 2, 1);
		unk_0x62C9C90C90248D8F(*uParam1, 20.5f);
		unk_0xD5D1BF12DEFE6979(*uParam1, 15f);
		unk_0x2F96E5B023BC3998(*uParam1);
		return;
	}
}

void func_382(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_369(28);
	if (unk_0xEDFE27D1AEA0EA7F(iVar0))
	{
		*uParam0 = unk_0x364B87C5C64BD100(28, iVar0, Param1, uParam4, 1, 1);
		unk_0x0FD0F9C088D4B182(*uParam0, 1);
		unk_0x764AFC5A3A16C2B0(*uParam0, 227, 1);
		unk_0x419C9117019F2E5A(iVar0);
		unk_0x874004759C4BE8DC(*uParam0, 0);
		unk_0x2F96E5B023BC3998(*uParam0);
		Var1 = { 0.02f, -0.01f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.01f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.5206f, 0f, 0.003f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.1258f, 0.0362f, -0.0837f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6107f, 0.4678f, -0.0815f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_383(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_369(35);
	if (unk_0xEDFE27D1AEA0EA7F(iVar0))
	{
		*uParam0 = unk_0x3064CCF56C6C32BC(iVar0, Param1, uParam4, 1, 1, 0);
		unk_0x419C9117019F2E5A(iVar0);
		unk_0x58F6B49606932378(*uParam0, 0f, 170f, 0f, 2, 1);
		unk_0x1A9F0BE7AECEABB1(*uParam0, 1f);
		unk_0x62C9C90C90248D8F(*uParam0, 1f);
		unk_0xD5D1BF12DEFE6979(*uParam0, 15f);
		unk_0xF76BA00560EDBD4D(*uParam0, 0, func_380());
		unk_0xF76BA00560EDBD4D(*uParam0, 1, func_380());
		unk_0xF76BA00560EDBD4D(*uParam0, 2, func_380());
		unk_0xF76BA00560EDBD4D(*uParam0, 3, func_380());
		unk_0xF76BA00560EDBD4D(*uParam0, 4, func_380());
		unk_0xF76BA00560EDBD4D(*uParam0, 5, func_380());
		unk_0x417CA2BF319F3894(*uParam0, 3);
		unk_0x91663DAD5DDAFA96(*uParam0, 2);
		unk_0x79C42A731F87F4BA(*uParam0, 1);
		unk_0x2F96E5B023BC3998(*uParam0);
		if (bParam5)
		{
			Var1 = { 0.4947f, 2.3632f, 0.1294f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
			Var1 = { 0.9243f, 2.6606f, 0.1951f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
			Var1 = { 1.5467f, 2.5044f, 0.2418f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
			Var1 = { 1.357f, 3.8779f, 0.3259f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_384(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_369(43);
	if (unk_0xEDFE27D1AEA0EA7F(iVar0))
	{
		*uParam0 = unk_0x364B87C5C64BD100(28, iVar0, Param1, uParam4, 1, 1);
		unk_0x0FD0F9C088D4B182(*uParam0, 1);
		unk_0x764AFC5A3A16C2B0(*uParam0, 227, 1);
		unk_0x419C9117019F2E5A(iVar0);
		unk_0x874004759C4BE8DC(*uParam0, 0);
		unk_0x2F96E5B023BC3998(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.4125f, -0.5815f, -0.2056f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
			Var1 = { 0.6332f, -1.1758f, -0.7106f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_385(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_369(109);
	if (unk_0xEDFE27D1AEA0EA7F(iVar0))
	{
		*uParam0 = unk_0x364B87C5C64BD100(28, iVar0, Param1, uParam4, 1, 1);
		unk_0x0FD0F9C088D4B182(*uParam0, 1);
		unk_0x419C9117019F2E5A(iVar0);
		unk_0x874004759C4BE8DC(*uParam0, 0);
		unk_0x2F96E5B023BC3998(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.4936f, -0.1763f, -0.0522f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.0645f, 0.0483f, -0.0698f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6011f, -0.1704f, -0.1473f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
		}
		func_376(*uParam0);
		return;
	}
}

void func_386(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_369(12);
	if (unk_0xEDFE27D1AEA0EA7F(iVar0))
	{
		*uParam0 = unk_0x364B87C5C64BD100(28, iVar0, Param1, uParam4, 1, 1);
		unk_0x0FD0F9C088D4B182(*uParam0, 1);
		unk_0x419C9117019F2E5A(iVar0);
		unk_0x874004759C4BE8DC(*uParam0, 0);
		unk_0x2F96E5B023BC3998(*uParam0);
		Var1 = { 0.04f, 0.02f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.01f, 0.05f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, -0.01f, 0f };
		unk_0x6B01B73E7B5A03F7(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.2417f, -0.3975f, -0.2282f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.0747f, -0.8188f, -0.2576f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.4322f, -1.1548f, -0.4902f };
			unk_0x6B01B73E7B5A03F7(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
		}
		func_376(*uParam0);
		return;
	}
}

float func_387(int iParam0)
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

Vector3 func_388(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_101276[0 /*3*/];
		
		case 2:
			return Global_101276[1 /*3*/];
		
		case 3:
			return Global_101276[2 /*3*/];
		
		case 4:
			return Global_101276[3 /*3*/];
		
		case 5:
			return Global_101276[4 /*3*/];
		
		case 6:
			return Global_101276[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_389()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_370(iVar0);
	iVar2 = func_369(iVar1);
	iVar3 = func_368(iVar1);
	if (iVar2 != 0)
	{
		if (!unk_0xEDFE27D1AEA0EA7F(iVar2))
		{
			return 0;
		}
	}
	if (iVar3 != 0)
	{
		if (!unk_0xEDFE27D1AEA0EA7F(iVar3))
		{
			return 0;
		}
	}
	return 1;
}

void func_390(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_370(iVar0);
	iVar2 = func_369(iVar1);
	iVar3 = func_368(iVar1);
	if (iVar2 != 0)
	{
		unk_0x9016574B77A748EE(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x9016574B77A748EE(iVar3);
	}
	unk_0xD2A9C3F486236CC5(uParam0, 25);
}

void func_391()
{
	if (Global_101299.f_3 == unk_0x756DE011CEDBBD7E())
	{
		return;
	}
	Global_101299.f_3 = unk_0x756DE011CEDBBD7E();
	if (Global_101299.f_2 == 0f && Global_101299.f_1 == 0f)
	{
		return;
	}
	if (Global_101299.f_2 != Global_101299.f_1)
	{
		Global_101299.f_2 = (Global_101299.f_2 + Global_101299);
		if (Global_101299 <= 0f)
		{
			if (Global_101299.f_2 < Global_101299.f_1)
			{
				Global_101299.f_2 = Global_101299.f_1;
			}
		}
		else if (Global_101299.f_2 > Global_101299.f_1)
		{
			Global_101299.f_2 = Global_101299.f_1;
		}
	}
	unk_0x754933C14FFBA8EB(0.5f, 0.5f, 1f, 1f, 255, 255, 255, unk_0xF2DB717A73826179(Global_101299.f_2), 0);
}

void func_392(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	if (iParam1 <= 0)
	{
		Global_101299 = 0f;
		Global_101299.f_1 = fVar0;
		Global_101299.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_101299.f_2);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1) / (unk_0x64031EF2AE5F9603() * 1000f));
		Global_101299 = (fVar1 / fVar2);
		Global_101299.f_1 = fVar0;
	}
}

void func_393(var uParam0, int iParam1)
{
	func_394(&(Global_104551.f_9986.f_25), iParam1, 14336, 11);
}

void func_394(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, iParam3));
}

struct<8> func_395(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_396(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_101254[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_397()
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_392)
			{
				unk_0x9016574B77A748EE(joaat("v_ilev_uvline"));
				iLocal_391 = 1;
				if (unk_0xEDFE27D1AEA0EA7F(joaat("v_ilev_uvline")))
				{
					if (func_398(8))
					{
						uLocal_393[4] = unk_0x7082ECB3731CD86C(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, 1, 0);
						unk_0x990FFD4FB6ADD630(uLocal_393[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
						unk_0x58F6B49606932378(uLocal_393[4], 0f, 0f, 116.9f, 2, 1);
						uLocal_393[1] = unk_0x7082ECB3731CD86C(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, 1, 0);
						unk_0x990FFD4FB6ADD630(uLocal_393[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
						unk_0x58F6B49606932378(uLocal_393[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_398(9))
					{
						uLocal_393[5] = unk_0x7082ECB3731CD86C(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, 1, 0);
						unk_0x990FFD4FB6ADD630(uLocal_393[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
						unk_0x58F6B49606932378(uLocal_393[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_398(10))
					{
						uLocal_393[3] = unk_0x7082ECB3731CD86C(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 1, 1, 0);
						unk_0x990FFD4FB6ADD630(uLocal_393[3], 471.48f, fVar0, 29.82f, 1, 0, 0, 1);
						unk_0x58F6B49606932378(uLocal_393[3], 0f, 0f, 116.9f, 2, 1);
					}
					uVar1 = unk_0x0E40E816537BFB87(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (unk_0x31F12808DC47A9E5(uLocal_393[iVar2]))
						{
							unk_0xA12407EB7D7CF146(uLocal_393[iVar2], 1, 0);
							unk_0x5C1B427FF1EDA9C6(uLocal_393[iVar2], 1);
							unk_0x6DDE9D4E99E540B5(uLocal_393[iVar2], uVar1);
						}
						iVar2++;
					}
					unk_0x419C9117019F2E5A(joaat("v_ilev_uvline"));
					iLocal_392 = 1;
				}
			}
		}
		else
		{
			if (iLocal_391)
			{
				unk_0x419C9117019F2E5A(joaat("v_ilev_uvline"));
				iLocal_391 = 0;
			}
			if (iLocal_392)
			{
				func_441();
				iLocal_392 = 0;
			}
		}
	}
}

int func_398(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104551.f_9055.f_330[iParam0 /*6*/];
}

void func_399()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69674.f_553)
	{
		if (!iLocal_400)
		{
			Global_69674.f_554 = 0;
			iLocal_400 = 1;
		}
		else if (Global_69674.f_554 >= 68)
		{
			Global_69674.f_553 = 0;
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
		if (func_60(&Local_674, iVar1))
		{
			func_437(&Local_695, iVar1);
			if ((Local_695.f_69 && Local_402.f_3 == 0) || iVar1 == 14)
			{
				uLocal_941[iVar1] = unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Local_695.f_55, 0);
			}
			else
			{
				uLocal_941[iVar1] = unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Local_674, 0);
			}
			if (func_436())
			{
				func_435(iVar1);
				func_433(iVar1);
				func_432(iVar1);
				func_431(iVar1);
				func_429(iVar1);
				func_428(iVar1);
				func_427(iVar1);
				func_401(iVar1);
				if (unk_0xB03A1684359C50A1(uLocal_48[iVar1], 2))
				{
					if (Global_69674.f_553)
					{
						iLocal_400 = 0;
					}
					func_442(iVar1);
				}
			}
			else
			{
				func_400(iVar1);
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
		if (unk_0xB03A1684359C50A1(uLocal_48[iLocal_867[iVar0]], 2))
		{
			func_442(iLocal_867[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_940 != -1)
	{
		func_442(iLocal_940);
		iLocal_940 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_442(iLocal_47);
	if (iLocal_1014)
	{
		func_442(21);
		func_442(22);
		func_442(23);
		iLocal_1014 = 0;
		bLocal_1015 = true;
	}
	else if (bLocal_1015)
	{
		bLocal_1015 = false;
	}
	if (Global_69674.f_553)
	{
		Global_69674.f_554++;
	}
}

void func_400(int iParam0)
{
	if (iLocal_117[iParam0] != 0)
	{
		unk_0x419C9117019F2E5A(iLocal_117[iParam0]);
		iLocal_117[iParam0] = 0;
	}
}

void func_401(int iParam0)
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
	if (!unk_0xB03A1684359C50A1(uLocal_48[iParam0], 2))
	{
		func_400(iParam0);
	}
	unk_0x62148293B793073B(&(uLocal_48[iParam0]), 2);
	if (unk_0xB03A1684359C50A1(uLocal_48[iParam0], 1))
	{
		fVar2 = unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Local_186[iParam0 /*3*/], 1);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (unk_0xB03A1684359C50A1(Local_674.f_9, 23))
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
	else if (unk_0xB03A1684359C50A1(Local_674.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0xB03A1684359C50A1(Local_674.f_9, 19) || unk_0xB03A1684359C50A1(Local_674.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0xB03A1684359C50A1(Local_674.f_9, 25) && (((iLocal_672 == 0 && Local_402.f_0 == 21) || (iLocal_672 == 0 && Local_402.f_0 == 22)) || (iLocal_672 == 0 && Local_402.f_0 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0x31F12808DC47A9E5(Global_69674.f_139[iParam0]))
	{
		if (unk_0xC4B84EB67F78C1F0(Global_69674.f_139[iParam0], 0))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (iParam0 == 24)
				{
					uVar3 = unk_0x4983F8C51A0C0AF3(Global_69674.f_139[iParam0], -1, 0);
					if (!unk_0x31F12808DC47A9E5(uVar3))
					{
						iVar3 = unk_0x75FAFA6C74F1ACCD(Global_69674.f_139[iParam0], -1);
					}
					iVar4 = func_363(iVar3);
					if (iVar4 != Global_104551.f_32429.f_5591)
					{
						if (func_25(iVar4))
						{
							func_426("Updating last character to use vehicle gen", iVar4);
							Global_104551.f_32429.f_5591 = iVar4;
						}
					}
				}
				if (!unk_0xE54DCC6B21FDC95A(Global_69674.f_139[iParam0], 1))
				{
					func_425("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_62(Global_69674.f_139[iParam0])) && !func_61(Global_69674.f_139[iParam0])) && unk_0x4F69FBD64CDF125B(Global_69674.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x363C972963D518BE(Global_69674.f_139[iParam0], true);
					}
					Global_69674.f_139[iParam0] = 0;
					Global_69674[iParam0] = 1;
					func_424(iParam0);
					return;
				}
				if (((unk_0xB03A1684359C50A1(uLocal_48[iParam0], 0) && !unk_0xB03A1684359C50A1(Local_674.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_425("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_62(Global_69674.f_139[iParam0])) && !func_61(Global_69674.f_139[iParam0])) && unk_0x4F69FBD64CDF125B(Global_69674.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x363C972963D518BE(Global_69674.f_139[iParam0], true);
					}
					unk_0x4F5FF3F3FDCAB15D(&(Global_69674.f_139[iParam0]));
					Global_69674.f_139[iParam0] = 0;
					Global_69674[iParam0] = 1;
					func_424(iParam0);
					return;
				}
				if ((!unk_0xB03A1684359C50A1(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (unk_0x1B843A60307EECA4(Global_69674.f_139[iParam0], unk_0x18F7BE9ACB7D08F4(), 1))
					{
						func_425("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_62(Global_69674.f_139[iParam0])) && !func_61(Global_69674.f_139[iParam0])) && unk_0x4F69FBD64CDF125B(Global_69674.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x363C972963D518BE(Global_69674.f_139[iParam0], true);
						}
						unk_0x4F5FF3F3FDCAB15D(&(Global_69674.f_139[iParam0]));
						Global_69674.f_139[iParam0] = 0;
						Global_69674[iParam0] = 1;
						func_424(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((unk_0xB03A1684359C50A1(uLocal_48[iParam0], 1) && unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(Global_69674.f_139[iParam0], 1), Local_186[iParam0 /*3*/], 1) > fVar5) || (!unk_0xB03A1684359C50A1(uLocal_48[iParam0], 1) && unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(Global_69674.f_139[iParam0], 1), Local_674, 1) > fVar5))
				{
					func_425("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_62(Global_69674.f_139[iParam0])) && !func_61(Global_69674.f_139[iParam0])) && unk_0x4F69FBD64CDF125B(Global_69674.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x363C972963D518BE(Global_69674.f_139[iParam0], true);
					}
					unk_0x4F5FF3F3FDCAB15D(&(Global_69674.f_139[iParam0]));
					Global_69674.f_139[iParam0] = 0;
					Global_69674[iParam0] = 1;
					func_424(iParam0);
					return;
				}
				if (!func_66(iParam0, 0))
				{
					func_425("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_62(Global_69674.f_139[iParam0])) && !func_61(Global_69674.f_139[iParam0])) && unk_0x4F69FBD64CDF125B(Global_69674.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x363C972963D518BE(Global_69674.f_139[iParam0], true);
					}
					unk_0x4F5FF3F3FDCAB15D(&(Global_69674.f_139[iParam0]));
					Global_69674.f_139[iParam0] = 0;
					Global_69674[iParam0] = 1;
					func_424(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_46(Global_69674.f_139[iParam0], iLocal_672, 1) && !func_62(Global_69674.f_139[iParam0])) && !func_61(Global_69674.f_139[iParam0]))
					{
						func_425("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0x4F69FBD64CDF125B(Global_69674.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x363C972963D518BE(Global_69674.f_139[iParam0], true);
						}
						Global_69674.f_139[iParam0] = 0;
						Global_69674[iParam0] = 1;
						func_424(iParam0);
						return;
					}
				}
				if (uLocal_941[iParam0] > fVar0 && (!unk_0xB03A1684359C50A1(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_49();
						iVar7 = Global_104551.f_32429.f_4801;
						func_422(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_330(iVar6, iVar7))
						{
							if ((!func_62(Global_69674.f_139[iParam0]) && !func_61(Global_69674.f_139[iParam0])) && unk_0x4F69FBD64CDF125B(Global_69674.f_139[iParam0]) != joaat("monster"))
							{
								unk_0x363C972963D518BE(Global_69674.f_139[iParam0], true);
							}
							func_31(Global_69674.f_139[iParam0], Global_104551.f_32429.f_5591);
							Global_69674[iParam0] = 1;
							func_424(iParam0);
						}
						else if (func_36(Global_69674.f_139[iParam0]))
						{
							func_32(Global_69674.f_139[iParam0], &Global_2458212);
							Global_2458211 = Global_104551.f_32429.f_5591;
							iLocal_1029 = Global_69674.f_139[iParam0];
						}
					}
					func_425("No longer needed: Player out for range");
					unk_0x4F5FF3F3FDCAB15D(&(Global_69674.f_139[iParam0]));
					unk_0x7EE425AE3317BA69(Local_674, 3f, 0, 0, 0, 0);
					unk_0xE54597236B7D8C63(Local_674, 3f, 0, 0, 0, 0, 0, 0);
					Global_69674.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
					{
						Global_69674.f_584 = { Local_674 };
						Global_69674.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0xB03A1684359C50A1(Local_674.f_9, 30))
				{
					if (!unk_0xB03A1684359C50A1(Local_674.f_9, 31))
					{
						if (!unk_0x5BEDB1779AE301BA(Global_69674.f_139[iParam0]) && !unk_0x4A296E47F281D02F(Global_69674.f_139[iParam0]))
						{
							Var8 = { unk_0x761660F5CE986DC4(Global_69674.f_139[iParam0], 1) };
							if (Var8.f_2 >= func_421(iParam0))
							{
								unk_0x2596D3899EEA8EF4(Global_69674.f_139[iParam0], 1);
								unk_0xD2A9C3F486236CC5(&(Local_674.f_9), 31);
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
		Global_69674.f_139[iParam0] = 0;
	}
	if (unk_0x31F12808DC47A9E5(Global_69674.f_139[iParam0]))
	{
		func_425("No longer needed: Vehicle not driveable");
		unk_0x4F5FF3F3FDCAB15D(&(Global_69674.f_139[iParam0]));
		Global_69674.f_139[iParam0] = 0;
		Global_69674[iParam0] = 1;
		func_424(iParam0);
		return;
	}
	if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		return;
	}
	if (Global_70581 == iParam0)
	{
		func_425("Processing a vehgen vehicle handover request.");
		if (unk_0x31F12808DC47A9E5(Global_70580) && unk_0xC4B84EB67F78C1F0(Global_70580, 0))
		{
			if (unk_0x31F12808DC47A9E5(Global_69674.f_139[iParam0]) && unk_0xC4B84EB67F78C1F0(Global_69674.f_139[iParam0], 0))
			{
				if (Global_69674.f_139[iParam0] == Global_70580)
				{
					func_425("Vehicle to be handed over is the same vehicle.");
					Global_70581 = -1;
					Global_70580 = 0;
					return;
				}
				else
				{
					func_425("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_62(Global_69674.f_139[iParam0])) && !func_61(Global_69674.f_139[iParam0])) && unk_0x4F69FBD64CDF125B(Global_69674.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x363C972963D518BE(Global_69674.f_139[iParam0], true);
					}
					unk_0x4F5FF3F3FDCAB15D(&(Global_69674.f_139[iParam0]));
					Global_69674.f_139[iParam0] = 0;
				}
			}
			Global_69674.f_139[iParam0] = Global_70580;
			Global_69674[iParam0] = 1;
			unk_0x62148293B793073B(&(uLocal_48[iParam0]), 0);
			unk_0xD2A9C3F486236CC5(&(uLocal_48[iParam0]), 1);
			unk_0x62148293B793073B(&(uLocal_48[iParam0]), 3);
			Local_186[iParam0 /*3*/] = { unk_0x761660F5CE986DC4(Global_70580, 1) };
			Global_70581 = -1;
			if (unk_0xB03A1684359C50A1(Local_674.f_9, 10))
			{
				Var11.f_9 = 49;
				Var11.f_59 = 2;
				func_32(Global_70580, &Var11);
				if (Global_70582)
				{
					func_112(iParam0, &Var11, unk_0x761660F5CE986DC4(Global_70580, 1), unk_0x93FDA3BF59E7B77F(Global_70580), func_45(Global_70580));
				}
				else
				{
					func_112(iParam0, &Var11, Global_104551.f_32429.f_1864[Local_674.f_14 /*3*/], Global_104551.f_32429.f_1934[Local_674.f_14], func_45(Global_70580));
				}
				Global_69674.f_139[iParam0] = Global_70580;
				Global_69674.f_484[iParam0] = Global_69674.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar89 = func_438();
				if (func_25(iVar89))
				{
					func_425("Players stored switch vehicle cleared for prep getaway.");
					Global_92597[iVar89] = 0;
				}
			}
			unk_0x337F2213526139E0(Global_69674.f_139[iParam0], 1, 1);
			if (iParam0 == 24)
			{
				unk_0x363C972963D518BE(Global_69674.f_139[iParam0], false);
			}
			Global_70580 = 0;
			if (Global_2458212.f_66 != 0)
			{
				func_248(&Global_2458212, Global_2458211);
				Global_2458212.f_66 = 0;
			}
			return;
		}
		if (Global_2458212.f_66 != 0)
		{
			func_248(&Global_2458212, Global_2458211);
			Global_2458212.f_66 = 0;
		}
		func_425("Vehicle to be handed over doesn't exist.");
		Global_70581 = -1;
		Global_70580 = 0;
	}
	if (Global_69674[iParam0])
	{
		if (uLocal_941[iParam0] >= fVar0)
		{
			Global_69674[iParam0] = 0;
			func_425("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_69674.f_584 = { 0f, 0f, 0f };
			Global_69674.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar90 = false;
	if (uLocal_941[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_104551.f_32429.f_1958[Local_674.f_14] != 0) && Global_104551.f_32429.f_1958[Local_674.f_14] > 3) && Local_674.f_4 != 0) && func_66(iParam0, 0)) && func_38(Local_674.f_4, 0))
		{
			iVar91 = func_49();
			iVar92 = Global_104551.f_32429.f_4801;
			func_422(&iVar92, 0, 0, 17, 0, 0, 0);
			if (func_330(iVar91, iVar92))
			{
				func_248(&(Global_104551.f_32429.f_69[Local_674.f_14 /*78*/]), Global_104551.f_32429.f_5591);
				func_424(iParam0);
				Global_69674[iParam0] = 1;
				func_425("Cannot be created: Vehicle ready for impound");
				Global_2458212.f_66 = 0;
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
		Global_69674.f_584 = { 0f, 0f, 0f };
		Global_69674.f_587 = { 0f, 0f, 0f };
	}
	if (Local_674.f_4 == 0)
	{
		Global_69674[iParam0] = 1;
		func_425("Cannot be created: Dummy model");
		return;
	}
	if (!func_38(Local_674.f_4, 0))
	{
		Global_69674[iParam0] = 1;
		func_425("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_66(iParam0, 0))
	{
		Global_69674[iParam0] = 1;
		func_425("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0xB03A1684359C50A1(Local_674.f_9, 14) && !func_66(iParam0, 5))
	{
		Global_69674[iParam0] = 1;
		func_425("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_420() && func_419(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_69674[iParam0] = 1;
		func_425("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_673)
	{
		Global_69674[iParam0] = 1;
		func_425("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0xB03A1684359C50A1(Local_674.f_9, 10))
	{
		if (unk_0x31F12808DC47A9E5(Global_69674.f_484[iParam0]))
		{
			Global_69674[iParam0] = 1;
			func_425("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_69674.f_484[iParam0] = 0;
		}
	}
	if (unk_0xB03A1684359C50A1(Local_674.f_9, 6))
	{
		if (func_418(Local_674.f_4, -1))
		{
			Global_69674[iParam0] = 1;
			func_425("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_417(Local_674.f_4, -1))
		{
			Global_69674[iParam0] = 1;
			func_425("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0xB03A1684359C50A1(Local_674.f_9, 29))
	{
		if (Local_402.f_3 == 0)
		{
			return;
		}
	}
	if (func_416(iParam0))
	{
		Global_69674[iParam0] = 1;
		func_425("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0x51CFE20A158947F4() && unk_0x32C5C8379484CA74() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_69674[iParam0] = 1;
			func_425("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar93 = 0;
	if (unk_0xB03A1684359C50A1(Local_674.f_9, 19))
	{
		iVar93 = 2;
	}
	else if (unk_0xB03A1684359C50A1(Local_674.f_9, 20))
	{
		iVar93 = 1;
	}
	if ((iParam0 == 24 && Global_104551.f_32429.f_1958[Local_674.f_14] > 0) && Global_104551.f_32429.f_1958[Local_674.f_14] <= 3)
	{
		if (unk_0x422717A3330EA45D(Local_674.f_4))
		{
			iVar93 = 2;
			Local_674.f_12 = (Global_104551.f_32429.f_1958[Local_674.f_14] - 1);
		}
		else if (unk_0x881022B41FD53CD6(Local_674.f_4))
		{
			iVar93 = 1;
			Local_674.f_12 = (Global_104551.f_32429.f_1958[Local_674.f_14] - 1);
		}
	}
	if (iVar93 != 0)
	{
		if (func_415(Local_674.f_12, iVar93, Local_674, -1f))
		{
			Global_69674[iParam0] = 1;
			func_425("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_444(iParam0, 0);
			}
			return;
		}
		if (unk_0xB03A1684359C50A1(Local_674.f_9, 19) || unk_0xB03A1684359C50A1(Local_674.f_9, 20))
		{
			if (iVar93 == 2)
			{
				if (Global_90353[Local_674.f_12 /*3*/][1] != -1 && (unk_0x5AFB8ED811F05E4D() - Global_90353[Local_674.f_12 /*3*/][1]) < unk_0x7BA495976DAC5657() * 180)
				{
					Global_69674[iParam0] = 1;
					func_425("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var94, "...", 24);
					StringIntConCat(&Var94, ((unk_0x7BA495976DAC5657() * 180 - (unk_0x5AFB8ED811F05E4D() - Global_90353[Local_674.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var94, " seconds", 24);
					func_425(&Var94);
					return;
				}
			}
			else if (iVar93 == 1)
			{
				if (Global_90353[Local_674.f_12 /*3*/][0] != -1 && (unk_0x5AFB8ED811F05E4D() - Global_90353[Local_674.f_12 /*3*/][0]) < unk_0x7BA495976DAC5657() * 180)
				{
					Global_69674[iParam0] = 1;
					func_425("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var100, "...", 24);
					StringIntConCat(&Var100, ((unk_0x7BA495976DAC5657() * 180 - (unk_0x5AFB8ED811F05E4D() - Global_90353[Local_674.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var100, " seconds", 24);
					func_425(&Var100);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
	{
		Global_69674.f_584 = { Local_674 };
	}
	if (bVar90)
	{
		return;
	}
	if (iVar93 != 0)
	{
		iLocal_117[iParam0] = func_23(Local_674.f_12, iVar93);
		unk_0x9016574B77A748EE(iLocal_117[iParam0]);
		unk_0xD2A9C3F486236CC5(&(uLocal_48[iParam0]), 2);
		if (!unk_0xEDFE27D1AEA0EA7F(iLocal_117[iParam0]))
		{
			func_425("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_414(iLocal_117[iParam0], Local_674, 1))
		{
			func_425("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0x7EE425AE3317BA69(Local_674, 3f, 0, 0, 0, 0);
		unk_0xE54597236B7D8C63(Local_674, 3f, 0, 0, 0, 0, 0, 0);
		if (iVar93 == 2)
		{
			func_409(&(Global_69674.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 2);
		}
		else if (iVar93 == 1)
		{
			func_409(&(Global_69674.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 1);
		}
		else
		{
			Global_69674[iParam0] = 1;
			func_425("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0x9016574B77A748EE(Local_674.f_4);
		iLocal_117[iParam0] = Local_674.f_4;
		unk_0xD2A9C3F486236CC5(&(uLocal_48[iParam0]), 2);
		if (!unk_0xEDFE27D1AEA0EA7F(Local_674.f_4))
		{
			func_425("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_414(Local_674.f_4, Local_674, 1))
		{
			func_425("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0x7EE425AE3317BA69(Local_674, 3f, 0, 0, 0, 0);
		unk_0xE54597236B7D8C63(Local_674, 3f, 0, 0, 0, 0, 0, 0);
		if (unk_0xB03A1684359C50A1(Local_674.f_9, 23))
		{
			unk_0x597B99EA7336BDBE(Local_674);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_674.f_4 == joaat("submersible2"))
			{
				Local_674.f_2 = -3f;
			}
		}
		Global_69674.f_139[iParam0] = unk_0x3064CCF56C6C32BC(Local_674.f_4, Local_674, Local_674.f_3, 1, 1, 0);
		if (unk_0xB03A1684359C50A1(Local_674.f_9, 10))
		{
			if (unk_0xD8BB60C76D29E4BB(Local_674.f_4))
			{
				unk_0xD2A9C3F486236CC5(&(Global_104551.f_32429.f_69[Local_674.f_14 /*78*/].f_77), 22);
			}
			if (unk_0xB03A1684359C50A1(Global_104551.f_32429.f_69[Local_674.f_14 /*78*/].f_77, 14))
			{
				func_32(Global_69674.f_139[iParam0], &Local_776);
				func_408(Local_776.f_77, &(Global_104551.f_32429.f_69[Local_674.f_14 /*78*/].f_77), Local_674.f_4);
				unk_0x62148293B793073B(&(Global_104551.f_32429.f_69[Local_674.f_14 /*78*/].f_77), 14);
			}
			func_343(Global_69674.f_139[iParam0], &(Global_104551.f_32429.f_69[Local_674.f_14 /*78*/]), 0, 1);
			Global_69674.f_484[iParam0] = Global_69674.f_139[iParam0];
		}
		else
		{
			if (unk_0xB03A1684359C50A1(Local_674.f_9, 9))
			{
				unk_0x62270578972B4C56(Global_69674.f_139[iParam0], Local_674.f_10, Local_674.f_11);
			}
			if (unk_0xB03A1684359C50A1(Local_674.f_9, 8))
			{
				unk_0xA2B45B1D3EE42178(Global_69674.f_139[iParam0], 2);
				unk_0x35BE54C36A93E6AF(Global_69674.f_139[iParam0], 0);
				unk_0xE5CFAEC4C6AFAA2E(Global_69674.f_139[iParam0], 0);
				unk_0xDDD736EF79925F76(Global_69674.f_139[iParam0], 0);
				unk_0xDFE3E6C2A4635F0A(Global_69674.f_139[iParam0], 0);
				unk_0xF9A57C919E2B4735(Global_69674.f_139[iParam0], 0);
				unk_0x5D41CFDE94DA9F49(Global_69674.f_139[iParam0], false);
				unk_0xF74B493CCF90C997(Global_69674.f_139[iParam0], 1);
				unk_0x73D7E57BF0ED7FEB(Global_69674.f_139[iParam0], 1);
			}
		}
	}
	if (unk_0x31F12808DC47A9E5(Global_69674.f_139[iParam0]))
	{
		func_407("Created - Coords: ", Local_674);
		func_406("Created - Dist From Player:", uLocal_941[iParam0]);
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_69674.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_674.f_4)
		{
			case joaat("miljet"):
				unk_0x62270578972B4C56(Global_69674.f_139[iParam0], 121, 21);
				unk_0xD7C3FB938E520431(Global_69674.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				unk_0x62270578972B4C56(Global_69674.f_139[iParam0], 122, 89);
				unk_0xD7C3FB938E520431(Global_69674.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0x62270578972B4C56(Global_69674.f_139[iParam0], 0, 0);
				unk_0xD7C3FB938E520431(Global_69674.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				unk_0x62270578972B4C56(Global_69674.f_139[iParam0], 131, 132);
				unk_0xD7C3FB938E520431(Global_69674.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0x62270578972B4C56(Global_69674.f_139[iParam0], 159, 0);
				unk_0xD7C3FB938E520431(Global_69674.f_139[iParam0], 160, 156);
				break;
		}
		if (unk_0xB03A1684359C50A1(Local_674.f_9, 22))
		{
			unk_0x2596D3899EEA8EF4(Global_69674.f_139[iParam0], 1);
		}
		if (unk_0xB03A1684359C50A1(Local_674.f_9, 30))
		{
			unk_0x62148293B793073B(&(Local_674.f_9), 31);
		}
		if (unk_0xB03A1684359C50A1(Local_674.f_9, 26))
		{
			unk_0xA2B45B1D3EE42178(Global_69674.f_139[iParam0], 7);
			unk_0x5B8B17345AD1581B(Global_69674.f_139[iParam0], 1);
		}
		func_405(Global_69674.f_139[iParam0], iParam0);
		if (!unk_0xB03A1684359C50A1(Local_674.f_9, 29) && !unk_0xB03A1684359C50A1(Local_674.f_9, 30))
		{
			unk_0x9B53B2691E2B1F79(Global_69674.f_139[iParam0], 1084227584);
		}
		unk_0xD5D1BF12DEFE6979(Global_69674.f_139[iParam0], 0f);
		unk_0xB05881241072FEE6(Global_69674.f_139[iParam0], 1);
		unk_0x363C972963D518BE(Global_69674.f_139[iParam0], unk_0xB03A1684359C50A1(Local_674.f_9, 5));
	}
	unk_0x62148293B793073B(&(uLocal_48[iParam0]), 0);
	unk_0x62148293B793073B(&(uLocal_48[iParam0]), 1);
	Global_69674[iParam0] = 1;
	if (iVar93 != 0)
	{
		Global_69674.f_69[iParam0] = 1;
	}
	iVar106 = func_402(458, -1, -1);
	if (iVar106 != 0 && iVar106 == iParam0)
	{
		iLocal_1028 = Global_69674.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2458212.f_66 = 0;
	}
}

int func_402(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_92();
	}
	iVar0 = 0;
	iVar1 = func_404(iParam0, iParam1);
	uVar2 = func_403(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x76DEA399E0EAFF3A(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_403(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xEBEF812390A22BFA((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xEBEF812390A22BFA((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xEBEF812390A22BFA((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xEBEF812390A22BFA((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xEBEF812390A22BFA((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xEBEF812390A22BFA((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xEBEF812390A22BFA((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xEBEF812390A22BFA((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xEBEF812390A22BFA((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xEBEF812390A22BFA((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xEBEF812390A22BFA((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xEBEF812390A22BFA((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xEBEF812390A22BFA((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xEBEF812390A22BFA((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xEBEF812390A22BFA((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xEBEF812390A22BFA((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xEBEF812390A22BFA((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xEBEF812390A22BFA((iParam0 - 18162)) * 8) * 8;
	}
	return iVar0;
}

int func_404(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_92();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	return iVar0;
}

void func_405(int iParam0, int iParam1)
{
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				unk_0xDB98829F7256F8AC(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				unk_0xDB98829F7256F8AC(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				unk_0xDB98829F7256F8AC(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				unk_0xDE2241F5D2C60ED8(iParam0, 6, false);
				unk_0xDE2241F5D2C60ED8(iParam0, 1, true);
				break;
			}
	}
}

void func_406(char* sParam0, float fParam1)
{
	if (!unk_0xFAFFA408239A026B(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_407(char* sParam0, float fParam1, var uParam2, var uParam3)
{
	if (!unk_0xFAFFA408239A026B(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_408(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0x62148293B793073B(&iVar0, 0);
			unk_0x62148293B793073B(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			unk_0x62148293B793073B(&iVar0, 0);
			unk_0x62148293B793073B(&iVar0, 1);
			unk_0x62148293B793073B(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			unk_0x62148293B793073B(&iVar0, 0);
			unk_0x62148293B793073B(&iVar0, 1);
			unk_0x62148293B793073B(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			unk_0x62148293B793073B(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			unk_0x62148293B793073B(&iVar0, 0);
			unk_0x62148293B793073B(&iVar0, 1);
			unk_0x62148293B793073B(&iVar0, 2);
			break;
		
		case joaat("chino"):
			unk_0x62148293B793073B(&iVar0, 0);
			unk_0x62148293B793073B(&iVar0, 1);
			unk_0x62148293B793073B(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_409(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;
	
	if (func_25(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_24(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x31F12808DC47A9E5(*iParam0))
		{
			if (unk_0x4F69FBD64CDF125B(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_104551.f_2353.f_539.f_4296) && Global_104551.f_9055.f_99.f_58[131])
		{
			Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x9016574B77A748EE(Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
			if (unk_0xEDFE27D1AEA0EA7F(Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x3064CCF56C6C32BC(Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/], Param2, uParam5, 0, 0, 0);
				unk_0x9B53B2691E2B1F79(*iParam0, 1084227584);
				unk_0x20DA875A55437C52(*iParam0, 0);
				unk_0x363C972963D518BE(*iParam0, false);
				unk_0xE58E53D56F33BF17(*iParam0, 1);
				unk_0x874004759C4BE8DC(*iParam0, 1250);
				unk_0x1A9F0BE7AECEABB1(*iParam0, 1250f);
				unk_0xE4A75DC396208954(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x62270578972B4C56(*iParam0, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_5, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0xD7C3FB938E520431(*iParam0, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_7, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0xD5D1BF12DEFE6979(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0xDE2241F5D2C60ED8(*iParam0, iVar103 + 1, !Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x548C592B667FA119(*iParam0, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_413(&uVar1, &uVar0))
				{
					unk_0x1C4B08C81FA52071(*iParam0, &uVar1);
					unk_0x98347A9DB184A9E3(*iParam0, uVar0);
				}
				else
				{
					unk_0x1C4B08C81FA52071(*iParam0, &(Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 < unk_0x1F5FE6436A0EC41B())
					{
						unk_0x98347A9DB184A9E3(*iParam0, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xB5F6C7EFD3748488(*iParam0, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_84, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_85, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x5D41CFDE94DA9F49(*iParam0, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x9F91D8B05EF0ED7C(*iParam0, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0xC7E45A561A9E1BA4(*iParam0, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_93, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_94, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x3184374ACA6B725F(*iParam0, 2, unk_0xB03A1684359C50A1(Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x3184374ACA6B725F(*iParam0, 3, unk_0xB03A1684359C50A1(Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x3184374ACA6B725F(*iParam0, 0, unk_0xB03A1684359C50A1(Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x3184374ACA6B725F(*iParam0, 1, unk_0xB03A1684359C50A1(Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x299CF4427BA55484(*iParam0) > 1 && Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xCB8AD4899214D0E6(*iParam0, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(*iParam0)))
					{
						if (unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(*iParam0)))
						{
							if (Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xE047CE9047B91786(*iParam0, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE047CE9047B91786(*iParam0, Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_344(iParam0, &(Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_31), &(Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0xB97C32026A7E946F(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x4F69FBD64CDF125B(*iParam0) == joaat("bodhi2"))
					{
						func_411(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x419C9117019F2E5A(Global_104551.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
				}
				func_410(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x9016574B77A748EE(Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
			if (unk_0xEDFE27D1AEA0EA7F(Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x3064CCF56C6C32BC(Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0, 0);
				unk_0x9B53B2691E2B1F79(*iParam0, 1084227584);
				unk_0x20DA875A55437C52(*iParam0, 0);
				unk_0x363C972963D518BE(*iParam0, false);
				unk_0xE58E53D56F33BF17(*iParam0, 1);
				unk_0x874004759C4BE8DC(*iParam0, 1250);
				unk_0x1A9F0BE7AECEABB1(*iParam0, 1250f);
				unk_0xE4A75DC396208954(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x62270578972B4C56(*iParam0, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_5, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0xD7C3FB938E520431(*iParam0, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_7, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0xD5D1BF12DEFE6979(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0xDE2241F5D2C60ED8(*iParam0, iVar104 + 1, !Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x548C592B667FA119(*iParam0, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_413(&uVar1, &uVar0))
				{
					unk_0x1C4B08C81FA52071(*iParam0, &uVar1);
					unk_0x98347A9DB184A9E3(*iParam0, uVar0);
				}
				else
				{
					unk_0x1C4B08C81FA52071(*iParam0, &(Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 < unk_0x1F5FE6436A0EC41B())
					{
						unk_0x98347A9DB184A9E3(*iParam0, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xB5F6C7EFD3748488(*iParam0, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_84, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_85, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x5D41CFDE94DA9F49(*iParam0, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x9F91D8B05EF0ED7C(*iParam0, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0xC7E45A561A9E1BA4(*iParam0, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_93, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_94, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x3184374ACA6B725F(*iParam0, 2, unk_0xB03A1684359C50A1(Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x3184374ACA6B725F(*iParam0, 3, unk_0xB03A1684359C50A1(Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x3184374ACA6B725F(*iParam0, 0, unk_0xB03A1684359C50A1(Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x3184374ACA6B725F(*iParam0, 1, unk_0xB03A1684359C50A1(Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x299CF4427BA55484(*iParam0) > 1 && Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xCB8AD4899214D0E6(*iParam0, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(*iParam0)))
					{
						if (unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(*iParam0)))
						{
							if (Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xE047CE9047B91786(*iParam0, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE047CE9047B91786(*iParam0, Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_344(iParam0, &(Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_31), &(Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0xB97C32026A7E946F(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x4F69FBD64CDF125B(*iParam0) == joaat("bodhi2"))
					{
						func_411(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x419C9117019F2E5A(Global_104551.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
				}
				func_410(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x9016574B77A748EE(Var5.f_0);
			if (unk_0xEDFE27D1AEA0EA7F(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0x3064CCF56C6C32BC(Var5.f_0, Param2, fParam5, 1, 1, 0);
				unk_0x9B53B2691E2B1F79(*iParam0, 1084227584);
				unk_0x20DA875A55437C52(*iParam0, 0);
				unk_0x363C972963D518BE(*iParam0, false);
				unk_0xE58E53D56F33BF17(*iParam0, 1);
				StringCopy(&cVar106, unk_0xE6A2C60E19ABFD84(*iParam0), 16);
				unk_0x874004759C4BE8DC(*iParam0, 1250);
				unk_0x1A9F0BE7AECEABB1(*iParam0, 1250f);
				unk_0xE4A75DC396208954(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x62270578972B4C56(*iParam0, Var5.f_5, Var5.f_6);
				unk_0xD7C3FB938E520431(*iParam0, Var5.f_7, Var5.f_8);
				unk_0xD5D1BF12DEFE6979(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0xDE2241F5D2C60ED8(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x548C592B667FA119(*iParam0, Var5.f_24);
				}
				if (func_413(&uVar1, &uVar0))
				{
					unk_0x1C4B08C81FA52071(*iParam0, &uVar1);
					unk_0x98347A9DB184A9E3(*iParam0, uVar0);
				}
				else
				{
					unk_0x1C4B08C81FA52071(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0x1F5FE6436A0EC41B())
					{
						unk_0x98347A9DB184A9E3(*iParam0, Var5.f_26);
					}
				}
				unk_0xB5F6C7EFD3748488(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0x5D41CFDE94DA9F49(*iParam0, Var5.f_88);
				unk_0x9F91D8B05EF0ED7C(*iParam0, Var5.f_87);
				unk_0xC7E45A561A9E1BA4(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0x3184374ACA6B725F(*iParam0, 2, unk_0xB03A1684359C50A1(Var5.f_92, 28));
				unk_0x3184374ACA6B725F(*iParam0, 3, unk_0xB03A1684359C50A1(Var5.f_92, 29));
				unk_0x3184374ACA6B725F(*iParam0, 0, unk_0xB03A1684359C50A1(Var5.f_92, 30));
				unk_0x3184374ACA6B725F(*iParam0, 1, unk_0xB03A1684359C50A1(Var5.f_92, 31));
				if (unk_0x299CF4427BA55484(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0xCB8AD4899214D0E6(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(*iParam0)))
					{
						if (unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0xE047CE9047B91786(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0xE047CE9047B91786(*iParam0, Var5.f_90);
						}
					}
				}
				func_344(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0xB97C32026A7E946F(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x4F69FBD64CDF125B(*iParam0) == joaat("bagger") && !Global_104551.f_9055.f_99.f_58[118])
					{
						unk_0x1C4B08C81FA52071(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x4F69FBD64CDF125B(*iParam0) == joaat("bodhi2"))
					{
						func_411(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_104551.f_2353.f_539.f_4296) && Global_104551.f_9055.f_99.f_58[131]) && unk_0x4F69FBD64CDF125B(*iParam0) == joaat("tailgater"))
				{
					unk_0x6819ABF1BBD7D728(*iParam0, 6, 1, false);
					unk_0x6819ABF1BBD7D728(*iParam0, 14, 7, false);
					unk_0x6819ABF1BBD7D728(*iParam0, 11, 2, false);
					unk_0x6819ABF1BBD7D728(*iParam0, 2, 3, false);
					unk_0x6819ABF1BBD7D728(*iParam0, 7, 5, false);
					unk_0x6819ABF1BBD7D728(*iParam0, 0, 0, false);
					unk_0x6819ABF1BBD7D728(*iParam0, 3, 3, false);
					unk_0x6819ABF1BBD7D728(*iParam0, 13, 1, false);
					unk_0x6819ABF1BBD7D728(*iParam0, 4, 3, false);
					unk_0x6819ABF1BBD7D728(*iParam0, 12, 2, false);
					unk_0x4D9CCED3A1C96367(*iParam0, 22, true);
					unk_0xE047CE9047B91786(*iParam0, 2);
					unk_0x6819ABF1BBD7D728(*iParam0, 23, 11, false);
					unk_0x9F91D8B05EF0ED7C(*iParam0, 2);
					Global_104551.f_2353.f_539.f_4296 = 1;
					func_201(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x419C9117019F2E5A(Var5.f_0);
				}
				if (bVar105)
				{
					func_410(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_410(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x31F12808DC47A9E5(Global_90305[iVar0]))
		{
			Global_90305[iVar0] = iParam0;
			Global_90315[iVar0] = iParam1;
			Global_90325[iVar0] = unk_0x4F69FBD64CDF125B(iParam0);
			if (unk_0x881022B41FD53CD6(Global_90325[iVar0]))
			{
				Global_90353[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90353[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_411(var uParam0)
{
	if (!func_412(*uParam0))
	{
		unk_0xDE2241F5D2C60ED8(*uParam0, 5, !Global_104551.f_9055.f_99.f_58[119]);
	}
}

bool func_412(int iParam0)
{
	return unk_0x6276BF0E9518E43A(iParam0, 5);
}

int func_413(var uParam0, var uParam1)
{
	if (unk_0x44243F2E2F58B8E3())
	{
	}
	else if (Global_104551.f_20088.f_261)
	{
		*uParam0 = { Global_104551.f_20088.f_267 };
		*uParam1 = Global_104551.f_20088.f_271;
		return 1;
	}
	return 0;
}

int func_414(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if ((iParam4 && unk_0xEC0ECEF2AF3FDA8D()) && unk_0xE7FAF8E78F7D3A73(joaat("startup_positioning")) > 0)
	{
		func_425("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	unk_0x0D8E51F437C55570(uParam0, &Var0, &Var3);
	fVar6 = unk_0x15EE504466B7BBD3(Var3, Var0, 1);
	if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Param1, 1) < (fVar6 * 0.5f))
	{
		func_406("player is in vehicle bounds - fLength: ", fVar6);
		func_406("player is in vehicle bounds - fDistance: ", unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Param1, 1));
		return 1;
	}
	return 0;
}

int func_415(int iParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	struct<82> Var1;
	int iVar99;
	
	if (!func_25(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar99 = 0;
	func_24(iParam0, &Var1, iParam1);
	iVar99 = Var1.f_0;
	if (iVar99 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]) && unk_0xC4B84EB67F78C1F0(Global_90305[iVar0], 0))
			{
				if (unk_0x4F69FBD64CDF125B(Global_90305[iVar0]) == iVar99 && Global_90315[iVar0] == iParam0)
				{
					if (fParam5 == -1f || unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(Global_90305[iVar0], 0), Param2, 1) <= fParam5)
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

int func_416(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_674.f_4 == joaat("frogger2"))
		{
			if (((func_418(Local_674.f_4, -1) || func_417(Local_674.f_4, -1)) || unk_0xE7FAF8E78F7D3A73(joaat("exile2")) > 0) || !func_398(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((unk_0x31F12808DC47A9E5(Global_69674.f_484[20]) && !unk_0x74C2FE037DFC8B4A(Global_69674.f_484[20], 0)) && unk_0xC4B84EB67F78C1F0(Global_69674.f_484[20], 0))
		{
			if (Local_674.f_4 == unk_0x4F69FBD64CDF125B(Global_69674.f_484[20]))
			{
				unk_0xC2CED850D0B7AE40(Global_69674.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_674.f_10 && iVar1 == Local_674.f_11)
				{
					func_243(20);
				}
			}
		}
	}
	return 0;
}

int func_417(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = unk_0x048A9E2FC8C538E3(Local_674, 200f, iParam0, iVar0);
	if ((unk_0x31F12808DC47A9E5(iVar1) && unk_0xC4B84EB67F78C1F0(iVar1, 0)) && unk_0x4F69FBD64CDF125B(iVar1) == iParam0)
	{
		if (iParam1 == -1 || unk_0x178913209B5C278C(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_418(int iParam0, int iParam1)
{
	var uVar0[50];
	int iVar51;
	int iVar52;
	
	iVar52 = unk_0xC4E133D43C01E0DF(unk_0x18F7BE9ACB7D08F4(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52)
	{
		if ((unk_0x31F12808DC47A9E5(uVar0[iVar51]) && unk_0xC4B84EB67F78C1F0(uVar0[iVar51], 0)) && unk_0x4F69FBD64CDF125B(uVar0[iVar51]) == iParam0)
		{
			if (iParam1 == -1 || unk_0x178913209B5C278C(uVar0[iVar51]) == iParam1)
			{
				return 1;
			}
		}
		iVar51++;
	}
	return 0;
}

int func_419(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_326(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_420()
{
	return Global_69674.f_138;
}

float func_421(int iParam0)
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

void func_422(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_54(*uParam0);
	iVar1 = func_56(*uParam0);
	iVar2 = func_334(*uParam0);
	iVar3 = func_333(*uParam0);
	iVar4 = func_332(*uParam0);
	iVar5 = func_331(*uParam0);
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
	iVar6 = func_53(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_53(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_423(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_423(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_59(uParam0, iParam1);
	func_58(uParam0, iParam2);
	func_57(uParam0, iParam3);
	func_51(uParam0, iParam5);
	func_52(uParam0, iParam4);
	func_50(uParam0, iParam6);
}

void func_424(int iParam0)
{
	if (unk_0xB03A1684359C50A1(Local_674.f_9, 13))
	{
		func_444(iParam0, 0);
	}
}

void func_425(char* sParam0)
{
	if (!unk_0xFAFFA408239A026B(sParam0))
	{
	}
}

void func_426(char* sParam0, int iParam1)
{
	if (!unk_0xFAFFA408239A026B(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_427(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
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
			bVar0 = !func_66(iParam0, 5);
			Var1 = { -961.42f, -2794.47f, 12.96f };
			fVar4 = -209.22f;
			iVar5 = 0;
			iVar6 = joaat("prop_airport_sale_sign");
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_66(iParam0, 5);
			Var1 = { -827.93f, -1368.14f, 3.9982f };
			fVar4 = -68.75f;
			iVar5 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_66(iParam0, 5);
			bVar0 = true;
			Var1 = { -710.07f, -1414.31f, 4f };
			fVar4 = -41.25f;
			iVar5 = 2;
			break;
		
		case 21:
			bVar0 = !func_66(iParam0, 5);
			Var1 = { -66.21f, 77.76f, 70.51f };
			fVar4 = -27f;
			iVar5 = 3;
			break;
		
		case 22:
			bVar0 = !func_66(iParam0, 5);
			Var1 = { -76.02f, -1825.61f, 25.88f };
			fVar4 = -129.67f;
			iVar5 = 4;
			break;
		
		case 23:
			bVar0 = !func_66(iParam0, 5);
			Var1 = { -218.68f, -1165.76f, 21.99f };
			fVar4 = 89.95f;
			iVar5 = 5;
			break;
	}
	if (bVar0 && unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Var1, 1) < 250f)
	{
		if (!unk_0x31F12808DC47A9E5(uLocal_858[iVar5]))
		{
			unk_0x9016574B77A748EE(iVar6);
			iLocal_865 = 1;
			if (unk_0xEDFE27D1AEA0EA7F(iVar6))
			{
				if (iLocal_865)
				{
					uLocal_858[iVar5] = unk_0xF9AE1AECDAABDFA9(iVar6, Var1, 0, 1, 0);
					unk_0x58F6B49606932378(uLocal_858[iVar5], 0f, 0f, fVar4, 2, 1);
					unk_0x5F1E15DC35404E1B(uLocal_858[iVar5], 0);
					unk_0x73D7E57BF0ED7FEB(uLocal_858[iVar5], 1);
					unk_0x419C9117019F2E5A(iVar6);
					iLocal_865 = 0;
				}
			}
		}
	}
	else if (iVar5 != -1)
	{
		if ((unk_0x31F12808DC47A9E5(uLocal_858[iVar5]) && !unk_0x3AAE8FF7FB37F69E(uLocal_858[iVar5])) && unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Var1, 1) > 255f)
		{
			unk_0x5BE35A26B9097351(&(uLocal_858[iVar5]));
			if (iLocal_865)
			{
				unk_0x419C9117019F2E5A(iVar6);
				iLocal_865 = 0;
			}
		}
	}
}

void func_428(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (func_66(iParam0, 0) && (!unk_0xB03A1684359C50A1(Local_674.f_9, 14) || func_66(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_69674.f_346[iParam0] != bVar0)
	{
		if (!func_21(Local_674.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_69674.f_346[iParam0])
				{
					unk_0x7E1D02126DA8A751(Global_69674.f_415[iParam0], 0);
				}
			}
			else if (!Global_69674.f_346[iParam0])
			{
				Global_69674.f_415[iParam0] = unk_0x1701E0E6A11D6B65(Local_674.f_15, Local_674.f_18, 0, 1, 1, 1);
			}
		}
		Global_69674.f_346[iParam0] = bVar0;
	}
}

void func_429(int iParam0)
{
	int iVar0;
	
	if (unk_0xB03A1684359C50A1(Local_674.f_9, 15))
	{
		if (func_66(iParam0, 0) && !func_66(iParam0, 5))
		{
			iVar0 = 145;
			if (unk_0xB03A1684359C50A1(Local_674.f_9, 16))
			{
				iVar0 = func_430(9);
			}
			else if (unk_0xB03A1684359C50A1(Local_674.f_9, 18))
			{
				iVar0 = func_430(4);
			}
			if (iVar0 == Local_674.f_12)
			{
				func_291(iParam0, 5, 1);
			}
		}
	}
}

int func_430(int iParam0)
{
	return Global_104551.f_24874[iParam0 /*4*/];
}

void func_431(int iParam0)
{
	if (func_66(iParam0, 0) && !func_66(iParam0, 3))
	{
		if (unk_0xB03A1684359C50A1(Local_674.f_9, 4))
		{
			func_291(iParam0, 3, 1);
		}
		else
		{
			func_291(iParam0, 3, 1);
		}
	}
}

void func_432(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_66(iParam0, 0) && bLocal_673)
	{
		if (unk_0xB03A1684359C50A1(Local_674.f_9, 0) || (unk_0xB03A1684359C50A1(Local_674.f_9, 2) && !func_66(iParam0, 2)))
		{
			if ((!unk_0xB03A1684359C50A1(Local_674.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0 || func_66(iParam0, 5)) || !unk_0xB03A1684359C50A1(Local_674.f_9, 28)))
			{
				bVar0 = false;
				if (!unk_0xE769D9B5158D0F11(Global_69674.f_208[iParam0]))
				{
					if (func_398(0))
					{
						if (unk_0xB03A1684359C50A1(Local_674.f_9, 14) && !func_66(iParam0, 5))
						{
							Global_69674.f_208[iParam0] = unk_0x29F0B4D7EFF08BF6(Local_695.f_55);
							if (Local_695.f_58 != -1)
							{
								unk_0xDC0EBFC7730AA226(Global_69674.f_208[iParam0], Local_695.f_58);
								if (!unk_0xFAFFA408239A026B(&(Local_695.f_59)))
								{
									unk_0x61C2EC67C90074E5(Global_69674.f_208[iParam0], &(Local_695.f_59));
								}
							}
						}
						else if (func_66(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_69674.f_208[iParam0] = unk_0x29F0B4D7EFF08BF6(Local_695.f_55);
							if (Local_674.f_13 != -1)
							{
								unk_0xDC0EBFC7730AA226(Global_69674.f_208[iParam0], Local_674.f_13);
								if (!unk_0xFAFFA408239A026B(&(Local_695.f_59)))
								{
									unk_0x61C2EC67C90074E5(Global_69674.f_208[iParam0], &(Local_695.f_59));
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
								unk_0x71925FF3194E84CE(Global_69674.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_69674.f_208[iParam0] = unk_0x29F0B4D7EFF08BF6(Local_674);
							if (Local_674.f_13 != -1)
							{
								unk_0xDC0EBFC7730AA226(Global_69674.f_208[iParam0], Local_674.f_13);
								if (!unk_0xFAFFA408239A026B(&(Local_695.f_59)))
								{
									unk_0x61C2EC67C90074E5(Global_69674.f_208[iParam0], &(Local_695.f_59));
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
									unk_0x71925FF3194E84CE(Global_69674.f_208[iParam0], iVar2);
								}
							}
						}
						unk_0x90260EB52E59F0F5(Global_69674.f_208[iParam0], !unk_0xB03A1684359C50A1(Local_674.f_9, 1));
						unk_0xC3BBD8D349129F55(Global_69674.f_208[iParam0], 0);
						unk_0xF60CEE5003674AF0(Global_69674.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0xE769D9B5158D0F11(Global_69674.f_208[iParam0]))
		{
			unk_0x40D517D991458154(&(Global_69674.f_208[iParam0]));
		}
	}
}

void func_433(int iParam0)
{
	if (func_66(iParam0, 0) && !func_66(iParam0, 1))
	{
		if (func_66(iParam0, 4))
		{
			if (unk_0xB03A1684359C50A1(Local_674.f_9, 3))
			{
				func_434(&(Local_674.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_291(iParam0, 1, 1);
			}
			else
			{
				func_291(iParam0, 1, 1);
			}
		}
	}
}

void func_434(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_251(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_435(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xB03A1684359C50A1(Local_674.f_9, 7) || Local_674.f_12 == iLocal_672)
	{
		bLocal_673 = true;
	}
	else
	{
		bLocal_673 = false;
	}
	if (func_27(14))
	{
		bLocal_673 = false;
	}
	if ((bLocal_673 && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) && unk_0xB03A1684359C50A1(Local_674.f_9, 14))
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
					while (iVar0 < Global_69674.f_592)
					{
						Global_69674.f_592[iVar0] = -1;
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
						iVar2 = func_129(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_69674.f_592)
							{
								switch (Local_402.f_6)
								{
									case 3:
										if (func_64(iVar2))
										{
											Global_69674.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (unk_0xB6353CAE3EBC0919(iVar2))
										{
											Global_69674.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((unk_0x9605D2F02FA93911(iVar2) || unk_0x9178C1B23106F7AA(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_69674.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_65(iVar2))
										{
											Global_69674.f_592[iVar1] = iVar0;
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
	if (!unk_0xB03A1684359C50A1(uLocal_48[iParam0], 0))
	{
		if (unk_0x31F12808DC47A9E5(Global_69674.f_139[iParam0]))
		{
			if (unk_0xC4B84EB67F78C1F0(Global_69674.f_139[iParam0], 0))
			{
				if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Global_69674.f_139[iParam0], 0))
					{
						if (!unk_0xB03A1684359C50A1(uLocal_48[iParam0], 1) || unk_0xB03A1684359C50A1(uLocal_48[iParam0], 3))
						{
							unk_0xD2A9C3F486236CC5(&(uLocal_48[iParam0]), 0);
							func_291(iParam0, 4, 1);
							func_291(iParam0, 2, 1);
						}
					}
					else
					{
						unk_0xD2A9C3F486236CC5(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((unk_0x31F12808DC47A9E5(Global_69674.f_484[iParam0]) && unk_0xC4B84EB67F78C1F0(Global_69674.f_484[iParam0], 0)) && unk_0x4F69FBD64CDF125B(Global_69674.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_1030)
			{
				if (unk_0x11BBEE2752B9D0C8(Global_69674.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
				{
					unk_0xF490ADF39C80E040(Global_69674.f_484[iParam0], 0f);
					iLocal_1030 = 1;
				}
			}
			else if (!unk_0x11BBEE2752B9D0C8(Global_69674.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
			{
				unk_0xF490ADF39C80E040(Global_69674.f_484[iParam0], 1f);
				iLocal_1030 = 0;
			}
		}
		else
		{
			iLocal_1030 = 0;
		}
	}
}

int func_436()
{
	return 1;
}

var func_437(var uParam0, int iParam1)
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

int func_438()
{
	func_439();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_439()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_364(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_363(unk_0x18F7BE9ACB7D08F4());
			if (func_25(iVar0) && (!func_27(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_25(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

void func_440()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xE769D9B5158D0F11(Global_69674.f_208[iVar0]))
		{
			unk_0x40D517D991458154(&(Global_69674.f_208[iVar0]));
		}
		if (unk_0x31F12808DC47A9E5(Global_69674.f_139[iVar0]))
		{
			if (unk_0xC4B84EB67F78C1F0(Global_69674.f_139[iVar0], 0))
			{
				unk_0x4F5FF3F3FDCAB15D(&(Global_69674.f_139[iVar0]));
				Global_69674.f_139[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (unk_0x5400DC5FAEBF30F0(Local_402.f_110))
	{
		unk_0x2C535610856B3F4D(Local_402.f_110, 0);
		unk_0x13AD763DBD687842(Local_402.f_110, 0);
	}
	if (unk_0x5400DC5FAEBF30F0(Local_402.f_111))
	{
		unk_0x2C535610856B3F4D(Local_402.f_111, 0);
		unk_0x13AD763DBD687842(Local_402.f_111, 0);
	}
	if (Local_402.f_3 != 0)
	{
		func_239();
		unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 0);
	}
	if (unk_0xE769D9B5158D0F11(Global_69674.f_583))
	{
		unk_0x40D517D991458154(&(Global_69674.f_583));
	}
	if (iLocal_656 != -1)
	{
		func_68(&iLocal_656);
	}
	if (iLocal_655 != -1)
	{
		func_68(&iLocal_655);
	}
	if (Local_402.f_5 != -1)
	{
		func_68(&(Local_402.f_5));
	}
	if (iLocal_668 != -1)
	{
		func_68(&iLocal_668);
	}
	if (Local_402.f_3 > 0)
	{
		if (Global_69674.f_577)
		{
			func_199(47, 1);
			func_197(47, 1);
			Global_69674.f_577 = 0;
			Local_402.f_3 = 0;
		}
	}
	Global_69674.f_553 = 0;
	unk_0x810C5D6462DD69E6();
}

void func_441()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0x31F12808DC47A9E5(uLocal_393[iVar0]))
		{
			unk_0x5BE35A26B9097351(&(uLocal_393[iVar0]));
		}
		iVar0++;
	}
}

void func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0xB03A1684359C50A1(iLocal_936[iVar0], iVar1))
	{
		unk_0xD2A9C3F486236CC5(&(iLocal_936[iVar0]), iVar1);
		iLocal_867[iLocal_866] = iParam0;
		iLocal_866++;
	}
}

void func_443()
{
	int iVar0;
	
	if (func_262(25))
	{
		if (Global_104551.f_32429.f_69[22 /*78*/].f_66 != 0 && !func_38(Global_104551.f_32429.f_69[22 /*78*/].f_66, 0))
		{
			Global_104551.f_32429.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_104551.f_32429.f_69[22 /*78*/].f_77 = 0;
			Global_104551.f_32429.f_69[22 /*78*/].f_65 = 0;
			Global_104551.f_32429.f_69[22 /*78*/].f_62 = 255;
			Global_104551.f_32429.f_69[22 /*78*/].f_63 = 255;
			Global_104551.f_32429.f_69[22 /*78*/].f_64 = 255;
			Global_104551.f_32429.f_69[22 /*78*/].f_5 = 0;
			Global_104551.f_32429.f_69[22 /*78*/].f_6 = 0;
			Global_104551.f_32429.f_69[22 /*78*/].f_7 = 0;
			Global_104551.f_32429.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_104551.f_32429.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_104551.f_32429.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_262(21) && Global_104551.f_32429.f_69[9 /*78*/].f_66 != 0) && !func_38(Global_104551.f_32429.f_69[9 /*78*/].f_66, 0))
	{
		Global_104551.f_32429.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_262(22) && Global_104551.f_32429.f_69[10 /*78*/].f_66 != 0) && !func_38(Global_104551.f_32429.f_69[10 /*78*/].f_66, 0))
	{
		Global_104551.f_32429.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_262(23) && Global_104551.f_32429.f_69[11 /*78*/].f_66 != 0) && !func_38(Global_104551.f_32429.f_69[11 /*78*/].f_66, 0))
	{
		Global_104551.f_32429.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_262(26) && !func_38(Global_104551.f_32429.f_69[12 /*78*/].f_66, 0))
	{
		func_444(26, 0);
	}
	if (func_262(27) && !func_38(Global_104551.f_32429.f_69[13 /*78*/].f_66, 0))
	{
		func_444(27, 0);
	}
	if (func_262(28) && !func_38(Global_104551.f_32429.f_69[14 /*78*/].f_66, 0))
	{
		func_444(28, 0);
	}
	if (func_262(29) && !func_38(Global_104551.f_32429.f_69[15 /*78*/].f_66, 0))
	{
		func_444(29, 0);
	}
	if (func_262(30) && !func_38(Global_104551.f_32429.f_69[16 /*78*/].f_66, 0))
	{
		func_444(30, 0);
	}
	if (func_262(31) && !func_38(Global_104551.f_32429.f_69[17 /*78*/].f_66, 0))
	{
		func_444(31, 0);
	}
	if (func_262(32) && !func_38(Global_104551.f_32429.f_69[18 /*78*/].f_66, 0))
	{
		func_444(32, 0);
	}
	if (func_262(33) && !func_38(Global_104551.f_32429.f_69[19 /*78*/].f_66, 0))
	{
		func_444(33, 0);
	}
	if (func_262(34) && !func_38(Global_104551.f_32429.f_69[20 /*78*/].f_66, 0))
	{
		func_444(34, 0);
	}
}

void func_444(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_66(iParam0, 0))
		{
			func_291(iParam0, 1, 0);
			func_291(iParam0, 2, 0);
			func_291(iParam0, 3, 0);
			func_291(iParam0, 4, 0);
			func_291(iParam0, 0, 1);
			Global_69674[iParam0] = 1;
		}
	}
	else
	{
		func_291(iParam0, 0, 0);
	}
}

int func_445()
{
	return 0;
}

int func_446()
{
	return 1;
}

int func_447()
{
	return 1;
}

int func_448()
{
	if (unk_0x5E02CD27DBE77D67(-1226939934))
	{
		return 1;
	}
	return 0;
}

void func_449(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_453();
	func_452();
	func_450();
}

void func_450()
{
	Global_102929 = 2405.849f;
	Global_102932 = 2408.22f;
	Global_102935 = 2386.096f;
	Global_102938 = 69.1875f;
	Global_102941[0 /*3*/] = 2417.105f;
	Global_102941[1 /*3*/] = 2407.058f;
	Global_102941[2 /*3*/] = 2371.92f;
	Global_102941[3 /*3*/] = 2399.583f;
	Global_102941[4 /*3*/] = 2416.519f;
	Global_102941[5 /*3*/] = 2430.345f;
	Global_102941[6 /*3*/] = 2385.819f;
	Global_102963[0] = 157.8636f;
	Global_102963[1] = 174.7226f;
	Global_102963[2] = 270.7562f;
	Global_102963[3] = 190.7495f;
	Global_102963[4] = 27.6506f;
	Global_102963[5] = 358.1218f;
	Global_102963[6] = 339.4363f;
	Global_102971 = 2399.82f;
	Global_102974 = 2414.7f;
	func_451(&Global_101298, 64);
}

void func_451(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_452()
{
	Global_101303[0 /*3*/].f_1 = 5141.01f;
	Global_101303[1 /*3*/].f_1 = 6048.71f;
	Global_101303[2 /*3*/].f_1 = 6185.32f;
	Global_101303[3 /*3*/].f_1 = 5180.99f;
	Global_101303[4 /*3*/].f_1 = 4582.72f;
	Global_101303[5 /*3*/].f_1 = 4831.82f;
	Global_101303[6 /*3*/].f_1 = 4322.66f;
	Global_101303[7 /*3*/].f_1 = 3503.92f;
	Global_101303[8 /*3*/].f_1 = 3777.54f;
	Global_101303[9 /*3*/].f_1 = 3810.8f;
	Global_101303[10 /*3*/].f_1 = 3095.88f;
	Global_101337[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_101337[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_101337[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_101337[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_101337[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_101337[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_101337[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_101337[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_101337[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_101337[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_101337[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_101337[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_101337[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_101337[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_101337[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_101337[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_101337[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_101337[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_101337[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_101337[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_101337[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_101337[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_101337[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_101337[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_101337[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_101337[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_101337[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_101337[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_101337[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_101337[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_101337[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_101337[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_101337[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_101337[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_101337[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_101337[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_101337[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_101337[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_101337[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_101337[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_101337[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_101337[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_101337[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_101337[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_101337[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_101337[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_101337[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_101337[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_101337[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_101337[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_101337[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_101337[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_101337[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_101337[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_101337[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_101337[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_101337[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_101337[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_101337[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_101337[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_101337[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_101337[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_101337[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_451(&Global_101298, 16);
}

void func_453()
{
	Global_101254[0 /*3*/] = -1567.382f;
	Global_101254[1 /*3*/] = -1436.305f;
	Global_101254[2 /*3*/] = 31.2408f;
	Global_101254[3 /*3*/] = 278.1924f;
	Global_101254[4 /*3*/] = 1116.002f;
	Global_101254[5 /*3*/] = 1676.193f;
	Global_101276[0 /*3*/] = -1592.642f;
	Global_101276[1 /*3*/] = -1573.501f;
	Global_101276[2 /*3*/] = -1459.359f;
	Global_101276[3 /*3*/] = 21.1005f;
	Global_101276[4 /*3*/] = 262.9409f;
	Global_101276[5 /*3*/] = 1091.07f;
	func_451(&Global_101298, 1);
}

