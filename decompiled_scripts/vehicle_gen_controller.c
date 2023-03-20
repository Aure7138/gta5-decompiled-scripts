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
	unk_0x401559486BCA4D9B(0);
	Local_402.f_5 = -1;
	Local_402.f_0 = -1;
	Local_402.f_1 = 99999.99f;
	func_386(&uLocal_521);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_89118[iVar0 /*3*/][0] = -1;
		Global_89118[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_101553.f_18972.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_101553.f_18972.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_101553.f_18972.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_101553.f_18972.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_101553.f_18972.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_101553.f_18972.f_4801 = -15;
		Global_101553.f_18972.f_4802 = 1;
	}
	if (((!func_385() && !func_384()) && !func_383()) && !func_382())
	{
		func_381(60, 0);
		func_381(61, 0);
	}
	func_380();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_379(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_401)
		{
			iLocal_401 = 1;
			if (unk_0x2EC83C7ACA23E8A4(98))
			{
				if (unk_0xB265A20B540E1DFE() == 64)
				{
					if (!Global_69435)
					{
						iLocal_401 = 0;
					}
					else
					{
						func_378();
						func_377();
					}
					Global_69435 = 0;
				}
				else
				{
					func_378();
					func_377();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x23735087861170F2() != 5)
		{
			iLocal_672 = func_375();
			func_336();
			func_334();
			func_302(&uLocal_521);
			func_280();
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
	
	if (!unk_0x08BA6DD398CA197C(Global_101553.f_8871.f_25, 7))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0) && func_14(func_16()))
		{
			bVar0 = false;
			if (unk_0x08BA6DD398CA197C(*uParam0, 6) && unk_0x08BA6DD398CA197C(*uParam0, 12))
			{
				fVar1 = unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), uParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (uParam0->f_2 == -1)
					{
						uParam0->f_2 = (unk_0xDF658EB6CA91DFBC() + unk_0xB5BF1B58C833F7A9(10000, 15000));
					}
					else
					{
						if (func_13())
						{
							uParam0->f_2 = func_12(uParam0->f_2, (unk_0xDF658EB6CA91DFBC() + unk_0xB5BF1B58C833F7A9(2000, 4000)));
						}
						if (!unk_0x08BA6DD398CA197C(*uParam0, 23))
						{
							func_11(uParam0, &(uParam0->f_9));
						}
						else if (!unk_0x08BA6DD398CA197C(*uParam0, 30))
						{
							if (unk_0xDD9B91529459212C(&(uParam0->f_9), 0, -1))
							{
								if (unk_0xDF658EB6CA91DFBC() > uParam0->f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(uParam0, func_6(uParam0));
										func_3(0);
										unk_0x88B0F0DC270164B7(uParam0, 30);
									}
								}
							}
						}
						else if (unk_0x7DFD3CAC2CF49957(uParam0->f_1))
						{
							unk_0x09C86C0C5CA26B1E(uParam0, 30);
							unk_0xC8656944A36C8E78(uParam0->f_1);
							uParam0->f_1 = -1;
							uParam0->f_2 = -1;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (unk_0x08BA6DD398CA197C(*uParam0, 23))
				{
					func_2(uParam0);
				}
				unk_0x09C86C0C5CA26B1E(uParam0, 30);
				uParam0->f_2 = -1;
			}
		}
	}
}

void func_2(var uParam0)
{
	unk_0xAE8BF3C10F9D171E();
	unk_0x09C86C0C5CA26B1E(uParam0, 23);
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_101553.f_8871.f_25), 22);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_101553.f_8871.f_25), 22);
	}
}

void func_4(var uParam0, struct<3> Param1)
{
	struct<16> Var0;
	struct<16> Var16;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var16 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	uParam0->f_1 = unk_0x2657E29E0DD8087E();
	unk_0xCEFFD0ED686CCBA0(uParam0->f_1, &Var0, Param1, &Var16, 0, 0, 0);
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
	
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
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
	
	if (unk_0x5E429C409D2CBD68(0, 36))
	{
		unk_0x88B0F0DC270164B7(&(Global_101553.f_8871.f_25), 22);
	}
	bVar0 = unk_0x08BA6DD398CA197C(Global_101553.f_8871.f_25, 22);
	if (iParam0 && bVar0)
	{
		unk_0x09C86C0C5CA26B1E(&(Global_101553.f_8871.f_25), 22);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_9()
{
	var uVar0;
	
	uVar0 = func_10(Global_101553.f_8871.f_25, 14336, 11);
	return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)
{
	return unk_0x97EF1E5BCE9DC075((uParam0 && iParam1), iParam2);
}

void func_11(var uParam0, var uParam1)
{
	unk_0xDD9B91529459212C(uParam1, 0, -1);
	unk_0x88B0F0DC270164B7(uParam0, 23);
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
	
	bVar0 = unk_0x08BA6DD398CA197C(Global_101553.f_8871.f_25, 22);
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
	return unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5());
}

void func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1320088.f_21)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1320088.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_1320088[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1320088[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = unk_0x405468252CCA174F(iVar0);
			if (Global_1320088[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1320088[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = unk_0x6597E5895A4ACB86(iVar0);
			}
			else
			{
				fVar2 = unk_0x995172833C054001(iVar0);
			}
			if (Global_1320088[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1320088[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = unk_0x207FC861FC75524A(iVar0);
			if (Global_1320088[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1320088[*uParam0 /*5*/][2] = fVar2;
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
	return unk_0x10C16CF7856EFB3B(iParam0);
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
	
	if (unk_0x16833EFAA58E63DB(Global_68446.f_583))
	{
		bVar0 = false;
		if (iLocal_672 != Global_68446.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14))
		{
			bVar0 = true;
		}
		else if (Global_68446.f_590)
		{
			if (!func_26(Global_68446.f_584, unk_0xA4C471C6C99EDD6B(Global_68446.f_583), 1056964608, 0) || func_22(Global_68446.f_582, func_23(Global_68446.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_68446.f_591)
		{
			if (!func_26(Global_68446.f_587, unk_0xA4C471C6C99EDD6B(Global_68446.f_583), 1056964608, 0) || func_22(Global_68446.f_582, func_23(Global_68446.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!unk_0xD3FACCDA4D66AEAD(Global_68446.f_581) || !unk_0x1F1B2B6E500380C5(Global_68446.f_581, 0)) || (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), Global_68446.f_581, 0)))
		{
			if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_581) && !unk_0x1F1B2B6E500380C5(Global_68446.f_581, 0))
			{
				Global_68446.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_581))
		{
			if (unk_0x1F1B2B6E500380C5(Global_68446.f_581, 0))
			{
				Global_68446.f_587 = { unk_0xC59DF10B4FC39DF8(Global_68446.f_581, 1) };
			}
			else
			{
				Global_68446.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0x0B57C567D698C373(&(Global_68446.f_583));
			Global_68446.f_590 = 0;
			Global_68446.f_591 = 0;
			Global_68446.f_581 = 0;
		}
	}
	else
	{
		Global_68446.f_590 = 0;
		Global_68446.f_591 = 0;
		Global_68446.f_581 = 0;
	}
	if ((((((!unk_0x16833EFAA58E63DB(Global_68446.f_583) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_89080[iVar2] != 145 && Global_89090[iVar2] != 0) && unk_0xD3FACCDA4D66AEAD(Global_89070[iVar2])) && unk_0x1F1B2B6E500380C5(Global_89070[iVar2], 0)) && !unk_0x16833EFAA58E63DB(unk_0xF12D47E8A88B5BD0(Global_89070[iVar2]))) && Global_89080[iVar2] == iLocal_672) && unk_0x0778B61C8A904D0B(unk_0x705BC1BB91F530B5(Global_89070[iVar2])))
			{
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), Global_89070[iVar2], 0))
				{
					Global_68446.f_581 = Global_89070[iVar2];
					Global_68446.f_582 = iLocal_672;
					Global_68446.f_590 = 0;
					Global_68446.f_583 = unk_0x91B4D18C6AFDC14C(Global_68446.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0x16833EFAA58E63DB(Global_68446.f_583) && !func_21(Global_68446.f_584, 0f, 0f, 0f, 0))
			{
				Global_68446.f_581 = 0;
				Global_68446.f_582 = iLocal_672;
				Global_68446.f_590 = 1;
				Global_68446.f_583 = unk_0x52CE8C31DD5898E7(Global_68446.f_584);
			}
			if (!unk_0x16833EFAA58E63DB(Global_68446.f_583) && !func_21(Global_68446.f_587, 0f, 0f, 0f, 0))
			{
				Global_68446.f_581 = 0;
				Global_68446.f_582 = iLocal_672;
				Global_68446.f_591 = 1;
				Global_68446.f_583 = unk_0x52CE8C31DD5898E7(Global_68446.f_587);
			}
		}
		else
		{
			Global_68446.f_590 = 0;
			Global_68446.f_591 = 0;
		}
		if (unk_0x16833EFAA58E63DB(Global_68446.f_583))
		{
			unk_0x32479C670EB9962F(Global_68446.f_583, 225);
			unk_0x6F18BFEFE84565FF(Global_68446.f_583, "PVEHICLE");
			unk_0x9ABFD60B4E082992(Global_68446.f_583, false);
			unk_0x420759DE4A6A9555(Global_68446.f_583, 3);
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
			unk_0x77804F3DCBA01DB5(Global_68446.f_583, iVar3);
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
		if (unk_0xD3FACCDA4D66AEAD(Global_89070[iVar1]) && unk_0x1F1B2B6E500380C5(Global_89070[iVar1], 0))
		{
			if (Global_89080[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0x705BC1BB91F530B5(Global_89070[iVar1]))
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
			if (Global_101553.f_7940.f_99.f_58[128] && !Global_101553.f_7940.f_99.f_58[131])
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
					if (Global_101553.f_7940.f_99.f_58[119])
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
			else if (Global_101553.f_7940.f_99.f_58[118])
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
		if (unk_0x7466327978A6A24C((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7466327978A6A24C((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7466327978A6A24C((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7466327978A6A24C((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7466327978A6A24C((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_28()
{
	func_223();
	func_164();
	func_65();
	func_29();
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (((((Local_402.f_29.f_80 && !Local_402.f_29.f_69) && Local_402.f_0 != -1) && func_64(Local_402.f_0, 0)) && func_64(Local_402.f_0, 5)) && unk_0xA96867DD0A63C62C(joaat("michael1")) == 0)
		{
			if (!unk_0xD3FACCDA4D66AEAD(Local_402.f_113))
			{
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
					if (unk_0xD3FACCDA4D66AEAD(iVar0) && unk_0x1F1B2B6E500380C5(iVar0, 0))
					{
						iVar1 = unk_0x705BC1BB91F530B5(iVar0);
						if (func_61(iVar1))
						{
							Local_402.f_113 = iVar0;
						}
					}
				}
			}
			else if (unk_0x1F1B2B6E500380C5(Local_402.f_113, 0) && func_61(unk_0x705BC1BB91F530B5(Local_402.f_113)))
			{
				if (!unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), Local_402.f_113, 0))
				{
					if (unk_0xFD4DDA3E1EF89C67(Local_402.f_113, Local_402.f_29.f_48, Local_402.f_29.f_51, Local_402.f_29.f_54, 0, 1, 0))
					{
						if ((!func_60(Local_402.f_113) && !func_59(Local_402.f_113)) && Local_402.f_113 != Global_68446.f_484[Local_402.f_0])
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
	if (!func_58(&(Global_68446.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(Global_68446.f_555[0 /*21*/].f_9, 12) && !unk_0x08BA6DD398CA197C(Global_68446.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68446.f_555[0 /*21*/].f_4 != unk_0x705BC1BB91F530B5(iParam1))
		{
			return;
		}
	}
	if (Global_69353 != -1 && Global_69353 != iParam0)
	{
		return;
	}
	if (unk_0xD3FACCDA4D66AEAD(iParam1))
	{
		if (unk_0x1F1B2B6E500380C5(iParam1, 0))
		{
			if (!unk_0x18C670321BC98FDA(iParam1))
			{
				unk_0x7B17650F15A8876D(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_101553.f_18972.f_4801 = func_47();
			}
			if (iParam1 != Global_68446.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_46(iParam0);
					if ((unk_0xD3FACCDA4D66AEAD(iVar0) && unk_0x1F1B2B6E500380C5(iVar0, 0)) && iParam1 != iVar0)
					{
						func_31(iVar0, 145);
					}
				}
				Global_69352 = iParam1;
				Global_69353 = iParam0;
				Global_69354 = iParam2;
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
		iVar0 = unk_0x8FD32443A080784B(iParam0, -1, 0);
		if (!unk_0xD3FACCDA4D66AEAD(iVar0))
		{
			iVar0 = unk_0xA89799E38057BB0B(iParam0, -1);
		}
		if (unk_0xD3FACCDA4D66AEAD(iVar0) && !unk_0xEB361B4BD195A4D3(iVar0))
		{
			if (unk_0x705BC1BB91F530B5(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101553.f_1991.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x705BC1BB91F530B5(iParam0) == Global_101553.f_18972.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x509383441597090D(&(Global_101553.f_18972.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x28C1B9853548BD8E(unk_0x65FDE11354F074FF(iParam0), &(Global_101553.f_18972.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101553.f_18972.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101553.f_18972.f_5592[iVar1] = iVar2;
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
		if (unk_0x705BC1BB91F530B5(iParam0) == Global_101553.f_18972.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x509383441597090D(&(Global_101553.f_18972.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x28C1B9853548BD8E(unk_0x65FDE11354F074FF(iParam0), &(Global_101553.f_18972.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101553.f_18972.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101553.f_18972.f_5590 = iParam1;
	Global_69351 = iParam0;
	Global_101553.f_18972.f_5588 = 1;
	func_32(iParam0, &(Global_101553.f_18972.f_5510));
}

void func_32(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		func_35(uParam1);
		uParam1->f_66 = unk_0x705BC1BB91F530B5(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x65FDE11354F074FF(iParam0), 16);
		*uParam1 = unk_0x35FA749428DD4A65(iParam0);
		unk_0xCAD2F245E2AC499C(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x86DEF98E95F667ED(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xC9061BC15843FFE0(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xB62C5DACDE4A3153(iParam0);
		uParam1->f_67 = unk_0xB7F7AFF78B9F9EF6(iParam0);
		uParam1->f_69 = unk_0x488810150C919B35(iParam0);
		uParam1->f_70 = unk_0x573723AAC88FEB61(iParam0);
		unk_0x6F1B26095D81AF5F(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x9072FD06FAA1F250(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x00808205EBA044E7(iParam0, 2))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 28);
		}
		if (unk_0x00808205EBA044E7(iParam0, 3))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 29);
		}
		if (unk_0x00808205EBA044E7(iParam0, 0))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 30);
		}
		if (unk_0x00808205EBA044E7(iParam0, 1))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xE7D026C4E15E6E7F(iParam0, 0))
		{
			uParam1->f_68 = unk_0x851DDA9C534FCA13(iParam0);
		}
		if (unk_0x1E3C80E7C4B8041B(uParam1->f_66))
		{
			if (unk_0xCCB7105CE933D5AB(iParam0))
			{
				switch (unk_0xB5BA4B2B27FE3A39(iParam0))
				{
					case 2:
					case 0:
						unk_0x09C86C0C5CA26B1E(&(uParam1->f_77), 23);
						unk_0x88B0F0DC270164B7(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x09C86C0C5CA26B1E(&(uParam1->f_77), 23);
						unk_0x09C86C0C5CA26B1E(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x88B0F0DC270164B7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x88B0F0DC270164B7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xA2FDA679363F53A2(iParam0))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 9);
		}
		if (unk_0x7DB73C3712A1EDD0(iParam0))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 10);
		}
		if (unk_0x2DE691A863102557(iParam0))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 13);
			unk_0xD7BF27AD958D4143(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xFC480E19F9385A5D(iParam0))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 12);
		}
		func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDC21CA8351C75F1F(iParam0, iVar0 + 1))
			{
				unk_0x88B0F0DC270164B7(&(uParam1->f_77), func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA24589903C9634D8(iParam0, 0))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_77), 11);
		}
		if (unk_0x4184E6D274FCBFF1(iParam0, "IgnoredByQuickSave") && unk_0x86DCF0A510F96A88(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_77), 27);
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
	
	if (!unk_0x1F1B2B6E500380C5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x141913B932CAECD6(*iParam0) == 0)
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
			if (unk_0x11C052A5C8A50EE1(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xADEACD5FDE0D1FDE(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xA5E33613E078F35F(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xA5E33613E078F35F(*iParam0, iVar0);
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
	if ((((((((((!unk_0xD3FACCDA4D66AEAD(iParam0) || !unk_0x1F1B2B6E500380C5(iParam0, 0)) || func_44(iParam0, 0, 0)) || func_44(iParam0, 1, 0)) || func_44(iParam0, 2, 0)) || func_43(iParam0) != 145) || func_42(iParam0)) || func_60(iParam0)) || func_59(iParam0)) || func_41(iParam0)) || !func_37(unk_0x705BC1BB91F530B5(iParam0)))
	{
		if (func_60(iParam0))
		{
		}
		if (func_60(iParam0))
		{
		}
		if (func_44(iParam0, 0, 0))
		{
		}
		if (func_44(iParam0, 1, 0))
		{
		}
		if (func_44(iParam0, 2, 0))
		{
		}
		if (func_43(iParam0) != 145)
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
	if (((unk_0xE3C6E31B7236489F(iParam0) || unk_0x1E3C80E7C4B8041B(iParam0)) || unk_0xFC4346F9DE2AB4AE(iParam0)) || unk_0x11F6DEA60A2AE510(iParam0))
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
	if (!unk_0x30A854527925CD1E(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0xA86CA03D9749EEB3())) || (iParam0 == joaat("buffalo3") && !unk_0xA86CA03D9749EEB3())) || (iParam0 == joaat("gauntlet2") && !unk_0xA86CA03D9749EEB3())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0xA86CA03D9749EEB3())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_40())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x8BB2B23AB3E97230())
		{
			if (unk_0x0722C0B45A965936(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x993E467B1CA23C2D(Var1.f_0))
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
		if ((((!func_385() && !func_384()) && !func_383()) && !func_382()) && !func_40())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x15B0CAB107CFCDE1() || unk_0x955B8C8F89CC3AC0()) || unk_0xD95D58B9AAC86D55())
		{
		}
		else if (!func_383())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_39(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2471234)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x39E54E7BC7452169();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5415 && !Global_262145.f_11342) && iVar1 < Global_262145.f_11343)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12154 && iVar1 < Global_262145.f_12166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12150 && iVar1 < Global_262145.f_12162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12151 && iVar1 < Global_262145.f_12163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12152 && iVar1 < Global_262145.f_12164)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12153 && iVar1 < Global_262145.f_12165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12155 && iVar1 < Global_262145.f_12167)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12156 && iVar1 < Global_262145.f_12159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12157 && iVar1 < Global_262145.f_12160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12158 && iVar1 < Global_262145.f_12161)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14726 && iVar1 < Global_262145.f_14691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14729 && iVar1 < Global_262145.f_14694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14723 && iVar1 < Global_262145.f_14688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14724 && iVar1 < Global_262145.f_14689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14727 && iVar1 < Global_262145.f_14692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14728 && iVar1 < Global_262145.f_14693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14725 && iVar1 < Global_262145.f_14690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14722 && iVar1 < Global_262145.f_14687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14721 && iVar1 < Global_262145.f_14686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14720 && iVar1 < Global_262145.f_14685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14703)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_14884 && iVar1 < Global_262145.f_14906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_14885 && iVar1 < Global_262145.f_14907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_14886 && iVar1 < Global_262145.f_14908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_14888 && iVar1 < Global_262145.f_14909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_14889 && iVar1 < Global_262145.f_14910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_14890 && iVar1 < Global_262145.f_14911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_14891 && iVar1 < Global_262145.f_14912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_14892 && iVar1 < Global_262145.f_14913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_14893 && iVar1 < Global_262145.f_14914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_14894 && iVar1 < Global_262145.f_14915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_14895 && iVar1 < Global_262145.f_14916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_14896 && iVar1 < Global_262145.f_14917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_14897 && iVar1 < Global_262145.f_14918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_14903 && iVar1 < Global_262145.f_14925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_14900 && iVar1 < Global_262145.f_14921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_14901 && iVar1 < Global_262145.f_14922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_14902 && iVar1 < Global_262145.f_14923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_14887 && iVar1 < Global_262145.f_14924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_14904 && iVar1 < Global_262145.f_14926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_14898 && iVar1 < Global_262145.f_14919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_14899 && iVar1 < Global_262145.f_14920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_14905 && iVar1 < Global_262145.f_14927)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_40()
{
	var uVar0;
	
	if (unk_0x446ED6C2B9B18A21())
	{
		if (unk_0x941A660B39C95F30())
		{
			if (unk_0x6FC368894467C692())
			{
				unk_0x8A3351ECF43DB941(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x88B0F0DC270164B7(&uVar0, 2);
				unk_0x88B0F0DC270164B7(&uVar0, 4);
				unk_0x88B0F0DC270164B7(&uVar0, 6);
				unk_0x88B0F0DC270164B7(&Global_25, 2);
				unk_0x88B0F0DC270164B7(&Global_25, 4);
				unk_0x88B0F0DC270164B7(&Global_25, 6);
				unk_0x10CE8769EE2626C7(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x3F59EA61B56AFBC2())
				{
					iVar0 = unk_0x680A5FBB1F20F775(866);
					unk_0x88B0F0DC270164B7(&iVar0, 0);
					unk_0xDA842F3F06329D8C(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138925 == 2)
	{
		return 1;
	}
	else if (Global_138925 == 3)
	{
		return 0;
	}
	if (unk_0x3F59EA61B56AFBC2())
	{
		if (unk_0x08BA6DD398CA197C(unk_0x680A5FBB1F20F775(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_41(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x705BC1BB91F530B5(iParam0);
	uVar1 = unk_0x65FDE11354F074FF(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x28C1B9853548BD8E(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_38(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[24]))
	{
		if (iParam0 == Global_68446.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68446.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return 145;
	}
	if (!unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD3FACCDA4D66AEAD(Global_89070[iVar0]))
		{
			if (Global_89070[iVar0] == iParam0)
			{
				return Global_89080[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_44(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD3FACCDA4D66AEAD(iParam0) || !unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_45(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x08BA6DD398CA197C(Global_101553.f_6084[iVar9], 0))
		{
			if (unk_0xE994FC7025A2258D(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_45(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_46(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68446.f_139[iParam0];
}

int func_47()
{
	var uVar0;
	
	func_57(&uVar0, unk_0x8A1006B6887A61DE());
	func_56(&uVar0, unk_0x4A29A51562AC24A5());
	func_55(&uVar0, unk_0x7C42343912622BB6());
	func_50(&uVar0, unk_0x5EE1E0D1EBF5F7F6());
	func_49(&uVar0, unk_0x55ED786EB10EA740());
	func_48(&uVar0, unk_0x3258DF33389FB224());
	return uVar0;
}

void func_48(var uParam0, int iParam1)
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

void func_49(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_50(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(*uParam0);
	iVar1 = func_52(*uParam0);
	if (iParam1 < 1 || iParam1 > func_51(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_51(int iParam0, int iParam1)
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

var func_52(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_53(unk_0x08BA6DD398CA197C(iParam0, 31), -1, 1)) + 2011;
}

int func_53(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_54(int iParam0)
{
	return iParam0 & 15;
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_56(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_57(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_58(var uParam0, int iParam1)
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
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 20);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 20);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 20);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 19);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 20);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 19);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 20);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 20);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 20);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 14);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 14);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 14);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 14);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 22);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 14);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 22);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 14);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 22);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 14);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 14);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 14);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 23);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 14);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 24);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 28);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 14);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 24);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 28);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 14);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 24);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 28);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 29);
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
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 27);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 24);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 29);
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
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 27);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 24);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 29);
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
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 7);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 27);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 24);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 11);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 13);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 10);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 11);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 13);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 9);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 9);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 23);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 23);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 23);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 8);
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
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 2);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 30);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 2);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 22);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 6);
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
			if (func_40())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 13);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 2);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 1);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 23);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_40())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 13);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 2);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 1);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 23);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 21);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 23);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 6);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 30);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 23);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 30);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 23);
			unk_0x88B0F0DC270164B7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x08BA6DD398CA197C(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101553.f_18972.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_21(Global_101553.f_18972.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101553.f_18972.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101553.f_18972.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101553.f_18972.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x08BA6DD398CA197C(uParam0->f_9, 19))
	{
		if (!func_21(Global_101553.f_1991.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101553.f_1991.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101553.f_1991.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x08BA6DD398CA197C(uParam0->f_9, 20))
	{
		if (!func_21(Global_101553.f_1991.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101553.f_1991.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101553.f_1991.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD3FACCDA4D66AEAD(Global_89100[iVar0]))
		{
			if (Global_89100[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0) && unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD3FACCDA4D66AEAD(Global_89070[iVar0]) && unk_0x1F1B2B6E500380C5(Global_89070[iVar0], 0))
			{
				if (Global_89070[iVar0] == iParam0 && unk_0x705BC1BB91F530B5(Global_89070[iVar0]) == unk_0x705BC1BB91F530B5(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	switch (Local_402.f_6)
	{
		case 0:
			return func_63(iParam0);
			break;
		
		case 1:
			if (((unk_0xE3C6E31B7236489F(iParam0) || unk_0x63A9F8DD89623B7D(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_62(iParam0);
			break;
		
		case 2:
			return (unk_0xFC4346F9DE2AB4AE(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_62(int iParam0)
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!unk_0x0778B61C8A904D0B(iParam0) && !unk_0xBFD32C1D4D54E09B(iParam0)) && !unk_0xC388189407833D70(iParam0)) && !unk_0xA727EEDD175A1189(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_63(int iParam0)
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!unk_0x1E3C80E7C4B8041B(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

bool func_64(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_101553.f_18972[iParam0], iParam1);
}

void func_65()
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
		if (((((((((((((((Local_402.f_0 == -1 || unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || !unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0)) || ((unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[Local_402.f_0]) && unk_0x1F1B2B6E500380C5(Global_68446.f_484[Local_402.f_0], 0)) && (unk_0xCC55193D3D4E3458(unk_0xA0081090911D13E5(), Global_68446.f_484[Local_402.f_0]) || unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), Global_68446.f_484[Local_402.f_0], 1)))) || ((unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[Local_402.f_0]) && unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5())) && ((unk_0xC5F055346C582286(unk_0xA0081090911D13E5()) - 1f) > 0.15f && unk_0xE2205194B5B97090(unk_0xA0081090911D13E5(), Global_68446.f_484[Local_402.f_0])))) || ((unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[Local_402.f_0]) && unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5())) && unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), Global_68446.f_484[Local_402.f_0], 1))) || (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()) && unk_0x69FEFE28E1352842(unk_0xA0081090911D13E5()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_163(0) != bLocal_1018) || bLocal_854) || func_162(-1082130432))
		{
			iLocal_654 = 99;
		}
	}
	switch (iLocal_654)
	{
		case 0:
			if ((((!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B())) && !Global_68125) && !bLocal_854) && !unk_0x2C22E7D1C80A53EF())
			{
				if ((((((((((Local_402.f_29.f_80 && Local_402.f_2 == 0) && (Global_68446.f_592[0] != -1 || func_161() != 0)) && Local_402.f_0 != -1) && !iLocal_1016) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_162(-1082130432))
				{
					if (iLocal_656 != -1)
					{
					}
					else if (func_64(Local_402.f_0, 0) && func_64(Local_402.f_0, 5))
					{
						if ((unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0) && !unk_0x66ED05E88C842554(unk_0xA0081090911D13E5())) && !unk_0x884626CDE60D6728(unk_0xA0081090911D13E5()))
						{
							if ((!unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[Local_402.f_0]) || !unk_0x1F1B2B6E500380C5(Global_68446.f_484[Local_402.f_0], 0)) || (!unk_0xCC55193D3D4E3458(unk_0xA0081090911D13E5(), Global_68446.f_484[Local_402.f_0]) && !unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), Global_68446.f_484[Local_402.f_0], 1)))
							{
								iVar181 = func_161();
								iVar182 = 0;
								while (iVar182 < iVar181)
								{
									if (func_61(func_157(iVar182)))
									{
										iVar180++;
									}
									iVar182++;
								}
								iVar179 = 0;
								while (iVar179 < Global_68446.f_592)
								{
									if (Global_68446.f_592[iVar179] != -1)
									{
										if ((func_156(Global_68446.f_592[iVar179], iLocal_672) && Global_101553.f_18972.f_1982[iLocal_672 /*939*/].f_626[Global_68446.f_592[iVar179]] == -15) && (Global_68446.f_592[iVar179] != 200 || !Global_101553.f_29763.f_7))
										{
											iVar180++;
										}
									}
									iVar179++;
								}
								if (iVar180 > 0)
								{
									if (!unk_0x598A9E990F05F82C())
									{
										iLocal_856 = 1;
										if (Local_402.f_6 == 3)
										{
											func_155(&iLocal_655, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_155(&iLocal_655, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										bLocal_1018 = func_163(0);
										iLocal_654++;
									}
								}
								else if (!iLocal_856)
								{
									if (Local_402.f_6 == 0)
									{
										if (!unk_0x598A9E990F05F82C() || func_154("HANGAR_NO"))
										{
											func_153("HANGAR_NO", -1);
											StringCopy(&cLocal_1019, "HANGAR_NO", 16);
										}
										bVar177 = true;
									}
									else if (Local_402.f_6 == 1)
									{
										if (!unk_0x598A9E990F05F82C() || func_154("MARINA_NO"))
										{
											func_153("MARINA_NO", -1);
											StringCopy(&cLocal_1019, "MARINA_NO", 16);
										}
										bVar177 = true;
									}
									else if (Local_402.f_6 == 2)
									{
										if (!unk_0x598A9E990F05F82C() || func_154("HELIPAD_NO"))
										{
											func_153("HELIPAD_NO", -1);
											StringCopy(&cLocal_1019, "HELIPAD_NO", 16);
										}
										bVar177 = true;
									}
									else if (Local_402.f_6 == 3)
									{
										StringCopy(&Var183, "CAR_GAR_NO", 16);
										if (unk_0xBECAD780226FC009() || unk_0xD95D58B9AAC86D55())
										{
											StringConCat(&Var183, "_1", 16);
										}
										else if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
										{
											StringConCat(&Var183, "_2", 16);
										}
										if (!unk_0x598A9E990F05F82C() || func_154(&Var183))
										{
											func_153(&Var183, -1);
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
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && func_151(0, -1, 0))
			{
				if (iLocal_656 != -1)
				{
					iLocal_654 = 0;
					return;
				}
				if (func_150(iLocal_655, 1))
				{
					unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
					if (unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
					{
						unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
					}
					else
					{
						unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 256);
					}
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
					{
						if (unk_0x1F1B2B6E500380C5(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 0))
						{
							unk_0xF3E3BC1FD7FDE221(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 0);
						}
					}
					func_149();
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
				func_148(0);
				func_147(1, 4, 0, 0, 0);
				func_146(1, 2, 1, 1, 1);
				func_145("WEB_VEH_TITLE");
				iVar187 = 0;
				while (iVar187 < iLocal_646)
				{
					iLocal_646[iVar187] = 0;
					iVar187++;
				}
				iVar188 = -1;
				iVar189 = 0;
				func_58(&(Local_402.f_8), Local_402.f_0);
				iVar191 = 0;
				iVar192 = func_161();
				iVar190 = 0;
				while (iVar190 < iVar192)
				{
					if (func_61(func_157(iVar190)))
					{
						if (iVar188 == -1)
						{
							iVar188 = iVar191;
						}
						if (Local_402.f_8.f_4 == func_157(iVar190))
						{
							iLocal_645 = iVar191;
							iVar189 = 1;
						}
						iVar191++;
					}
					iVar190++;
				}
				iVar190 = 0;
				while (iVar190 < Global_68446.f_592)
				{
					if (Global_68446.f_592[iVar190] != -1)
					{
						if ((func_156(Global_68446.f_592[iVar190], iLocal_672) && Global_101553.f_18972.f_1982[iLocal_672 /*939*/].f_626[Global_68446.f_592[iVar190]] == -15) && (Global_68446.f_592[iVar190] != 200 || !Global_101553.f_29763.f_7))
						{
							func_132(Global_68446.f_592[iVar190], &Var0, 0, iLocal_672, -1);
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
				iVar192 = func_161();
				iVar190 = 0;
				while (iVar190 < iVar192)
				{
					if (func_61(func_157(iVar190)))
					{
						unk_0x88B0F0DC270164B7(&(iLocal_646[(iVar191 / 32)]), (iVar191 % 32));
						func_128(iVar191, unk_0xFC96A08CFC53257A(func_157(iVar190)), 0, 1, 0, 0);
						if ((iLocal_645 == iVar191 && iVar189) && Local_402.f_6 != 3)
						{
							func_127(iVar191, 4, 0);
						}
						else
						{
							func_127(iVar191, 0, 0);
						}
						iVar191++;
					}
					iVar190++;
				}
				iVar190 = 0;
				while (iVar190 < Global_68446.f_592)
				{
					if (Global_68446.f_592[iVar190] != -1)
					{
						if ((func_156(Global_68446.f_592[iVar190], iLocal_672) && Global_101553.f_18972.f_1982[iLocal_672 /*939*/].f_626[Global_68446.f_592[iVar190]] == -15) && (Global_68446.f_592[iVar190] != 200 || !Global_101553.f_29763.f_7))
						{
							unk_0x88B0F0DC270164B7(&(iLocal_646[(iVar191 / 32)]), (iVar191 % 32));
							func_132(Global_68446.f_592[iVar190], &Var0, 0, iLocal_672, -1);
							if (Global_68446.f_592[iVar190] != 164)
							{
								func_128(iVar191, func_125(Global_68446.f_592[iVar190]), 0, 1, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_128(iVar191, "TWOSTRINGS", 2, 1, 0, 0);
								func_122(func_125(Global_68446.f_592[iVar190]), 0);
								func_122("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_128(iVar191, "TWOSTRINGS", 2, 1, 0, 0);
								func_122(func_125(Global_68446.f_592[iVar190]), 0);
								func_122("VNX_SWFTB", 0);
							}
							else
							{
								func_128(iVar191, func_125(Global_68446.f_592[iVar190]), 0, 1, 0, 0);
							}
							if (iLocal_645 == iVar191 && iVar189)
							{
								func_127(iVar191, 4, 0);
							}
							else
							{
								func_127(iVar191, 0, 0);
							}
							iVar191++;
						}
					}
					iVar190++;
				}
				func_121(iLocal_645, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar178 = 0;
				if (unk_0x955B8C8F89CC3AC0())
				{
					if (unk_0xF3C67EB69BFA8F67(2))
					{
						unk_0xABC36CFE4F3421A0(0, 1, 1);
						unk_0xABC36CFE4F3421A0(0, 2, 1);
						unk_0xABC36CFE4F3421A0(2, 200, 1);
						unk_0xFF61FA1A24898079(0, 237, 1);
						unk_0xFF61FA1A24898079(0, 238, 1);
						unk_0xFF61FA1A24898079(0, 241, 1);
						unk_0xFF61FA1A24898079(0, 242, 1);
						func_118(0, 0, 0, 1);
						func_117(0, -1, 1);
						if (func_116())
						{
							if (Global_2576653 != iLocal_645)
							{
								unk_0xAB16AADE80707D47(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_645 = Global_2576653;
								func_121(iLocal_645, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar178 = 1;
							}
						}
					}
				}
				if (unk_0x2A57AED61E15C7C7(2, 188) || unk_0x2A57AED61E15C7C7(2, 241))
				{
					iLocal_660 = 1;
					unk_0xAB16AADE80707D47(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar193 = (iLocal_645 - 1);
					while (iVar193 >= 0)
					{
						if (unk_0x08BA6DD398CA197C(iLocal_646[(iVar193 / 32)], (iVar193 % 32)))
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
							if (unk_0x08BA6DD398CA197C(iLocal_646[(iVar193 / 32)], (iVar193 % 32)))
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
						func_121(iLocal_645, 1, 1);
					}
				}
				else if (unk_0x2A57AED61E15C7C7(2, 187) || unk_0x2A57AED61E15C7C7(2, 242))
				{
					iLocal_660 = 1;
					unk_0xAB16AADE80707D47(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar195 = iLocal_645 + 1;
					while (iVar195 <= (iLocal_646 * 32 - 1))
					{
						if (unk_0x08BA6DD398CA197C(iLocal_646[(iVar195 / 32)], (iVar195 % 32)))
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
							if (unk_0x08BA6DD398CA197C(iLocal_646[(iVar195 / 32)], (iVar195 % 32)))
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
						func_121(iLocal_645, 1, 1);
					}
				}
				else if (unk_0x382DB2E6C29D0F23(2, 201) || iVar178 == 1)
				{
					bVar197 = false;
					iVar178 = 0;
					unk_0xAB16AADE80707D47(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar199 = 0;
					iVar200 = func_161();
					iVar198 = 0;
					while (iVar198 < iVar200)
					{
						if (func_61(func_157(iVar198)))
						{
							if (iLocal_645 == iVar199 && (((((Local_402.f_8.f_4 != func_157(iVar198) || !unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[Local_402.f_0])) || !unk_0x1F1B2B6E500380C5(Global_68446.f_484[Local_402.f_0], 0)) || Local_402.f_0 == 21) || Local_402.f_0 == 22) || Local_402.f_0 == 23))
							{
								bVar197 = true;
								if ((((!iLocal_659 && Local_402.f_8.f_4 != func_157(iVar198)) || (!iLocal_659 && Local_402.f_0 == 21)) || (!iLocal_659 && Local_402.f_0 == 22)) || (!iLocal_659 && Local_402.f_0 == 23))
								{
									func_115("VEH_SELECT_CNFA", 0, 0);
									func_114(-1);
									func_113(201, "ITEM_YES", -1);
									func_113(202, "ITEM_NO", -1);
									iLocal_659 = 1;
									iVar198 = func_161() + 1;
								}
								else if (Local_402.f_6 == 3)
								{
									if (func_112(func_157(iVar198)))
									{
										iLocal_1017 = func_157(iVar198);
										iLocal_657 = 0;
										iLocal_658 = 0;
										iLocal_651 = 0;
										iLocal_654++;
									}
									else
									{
										iLocal_1016 = 1;
										iLocal_1017 = func_157(iVar198);
										iLocal_654 = 99;
									}
								}
								else if (Local_402.f_6 == 0 && func_112(func_157(iVar198)))
								{
									iLocal_1017 = func_157(iVar198);
									iLocal_657 = 0;
									iLocal_658 = 0;
									iLocal_651 = 0;
									iLocal_654++;
								}
								else
								{
									if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[Local_402.f_0]))
									{
										unk_0x7B17650F15A8876D(Global_68446.f_484[Local_402.f_0], 0, 1);
										unk_0xEFA1F34A28EE763C(&(Global_68446.f_484[Local_402.f_0]));
									}
									Var99.f_66 = func_157(iVar198);
									unk_0x88B0F0DC270164B7(&(Var99.f_77), 14);
									func_109(Local_402.f_0, &Var99, 0f, 0f, 0f, -1f, 145);
									func_108(Local_402.f_0);
									func_58(&(Local_402.f_8), Local_402.f_0);
									iVar198 = func_161() + 1;
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
						while (iVar198 < Global_68446.f_592)
						{
							if (Global_68446.f_592[iVar198] != -1)
							{
								if ((func_156(Global_68446.f_592[iVar198], iLocal_672) && Global_101553.f_18972.f_1982[iLocal_672 /*939*/].f_626[Global_68446.f_592[iVar198]] == -15) && (Global_68446.f_592[iVar198] != 200 || !Global_101553.f_29763.f_7))
								{
									func_132(Global_68446.f_592[iVar198], &Var0, 0, iLocal_672, -1);
									if (iLocal_645 == iVar199 && ((Local_402.f_8.f_4 != Var0.f_66 || !unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[Local_402.f_0])) || !unk_0x1F1B2B6E500380C5(Global_68446.f_484[Local_402.f_0], 0)))
									{
										bVar197 = true;
										if (!iLocal_659)
										{
											if (Local_402.f_6 == 3)
											{
												func_115("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_115("VEH_SELECT_CNFA", 0, 0);
											}
											func_114(-1);
											func_113(201, "ITEM_YES", -1);
											func_113(202, "ITEM_NO", -1);
											iLocal_659 = 1;
											iVar198 = Global_68446.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_654 = 3;
											iLocal_658 = 1;
											iVar198 = Global_68446.f_592 + 1;
										}
										else
										{
											if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[Local_402.f_0]))
											{
												unk_0x7B17650F15A8876D(Global_68446.f_484[Local_402.f_0], 0, 1);
												unk_0xEFA1F34A28EE763C(&(Global_68446.f_484[Local_402.f_0]));
											}
											func_132(Global_68446.f_592[iVar198], &Var0, 0, iLocal_672, -1);
											unk_0x88B0F0DC270164B7(&(Var0.f_77), 14);
											if (unk_0x1E3C80E7C4B8041B(Var0.f_66))
											{
												unk_0x88B0F0DC270164B7(&(Var0.f_77), 22);
											}
											func_109(Local_402.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
											func_108(Local_402.f_0);
											func_58(&(Local_402.f_8), Local_402.f_0);
											iVar198 = Global_68446.f_592 + 1;
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
				else if (unk_0x382DB2E6C29D0F23(2, 202) || unk_0x382DB2E6C29D0F23(2, 238))
				{
					unk_0xAB16AADE80707D47(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			unk_0xB477A2D8CA963C52();
			if (iLocal_660)
			{
				func_115("", 0, 0);
				func_114(-1);
				func_113(201, "ITEM_SELECT", -1);
				func_113(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			func_71(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 3:
			if (!iLocal_657 || iLocal_658)
			{
				func_148(0);
				func_147(1, 0, 0, 0, 0);
				func_146(1, 1, 1, 1, 1);
				iVar201 = 0;
				while (iVar201 < iLocal_652)
				{
					iLocal_652[iVar201] = 0;
					iVar201++;
				}
				func_145("WEB_VEH_TITLE2");
				iVar201 = 0;
				while (iVar201 < 25)
				{
					StringCopy(&Var202, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var202, iVar201, 16);
					func_128(iVar201, &Var202, 0, 1, 0, 0);
					unk_0x88B0F0DC270164B7(&(iLocal_652[(iVar201 / 32)]), (iVar201 % 32));
					iVar201++;
				}
				if (Local_674.f_12 == 0)
				{
					iLocal_651 = Global_101553.f_29872.f_313[200];
				}
				else if (Local_674.f_12 == 1)
				{
					iLocal_651 = Global_101553.f_29872.f_626[200];
				}
				else
				{
					iLocal_651 = Global_101553.f_29872.f_939[200];
				}
				func_121(iLocal_651, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar178 = 0;
				if (unk_0x955B8C8F89CC3AC0())
				{
					if (unk_0xF3C67EB69BFA8F67(2))
					{
						unk_0xABC36CFE4F3421A0(0, 1, 1);
						unk_0xABC36CFE4F3421A0(0, 2, 1);
						unk_0xFF61FA1A24898079(0, 237, 1);
						unk_0xFF61FA1A24898079(0, 238, 1);
						unk_0xFF61FA1A24898079(0, 241, 1);
						unk_0xFF61FA1A24898079(0, 242, 1);
						func_118(0, 0, 0, 1);
						func_117(0, -1, 1);
						if (func_116())
						{
							if (Global_2576653 != iLocal_651)
							{
								unk_0xAB16AADE80707D47(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_651 = Global_2576653;
								func_121(iLocal_651, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar178 = 1;
							}
						}
					}
				}
				if (unk_0x2A57AED61E15C7C7(2, 188) || unk_0x2A57AED61E15C7C7(2, 241))
				{
					iLocal_660 = 1;
					unk_0xAB16AADE80707D47(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar206 = (iLocal_651 - 1);
					while (iVar206 >= 0)
					{
						if (unk_0x08BA6DD398CA197C(iLocal_652[(iVar206 / 32)], (iVar206 % 32)))
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
							if (unk_0x08BA6DD398CA197C(iLocal_652[(iVar206 / 32)], (iVar206 % 32)))
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
						func_121(iLocal_651, 1, 1);
					}
				}
				else if (unk_0x2A57AED61E15C7C7(2, 187) || unk_0x2A57AED61E15C7C7(2, 242))
				{
					iLocal_660 = 1;
					unk_0xAB16AADE80707D47(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar208 = iLocal_651 + 1;
					while (iVar208 <= 31)
					{
						if (unk_0x08BA6DD398CA197C(iLocal_652[(iVar208 / 32)], (iVar208 % 32)))
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
							if (unk_0x08BA6DD398CA197C(iLocal_652[(iVar208 / 32)], (iVar208 % 32)))
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
						func_121(iLocal_651, 1, 1);
					}
				}
				else if (unk_0x382DB2E6C29D0F23(2, 201) || iVar178 == 1)
				{
					iVar178 = 0;
					unk_0xAB16AADE80707D47(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[Local_402.f_0]))
					{
						unk_0x7B17650F15A8876D(Global_68446.f_484[Local_402.f_0], 0, 1);
						unk_0xEFA1F34A28EE763C(&(Global_68446.f_484[Local_402.f_0]));
					}
					uVar210 = iLocal_651 + 1;
					if (iLocal_672 == 0)
					{
						Global_101553.f_29872.f_313[200] = uVar210;
					}
					else if (iLocal_672 == 1)
					{
						Global_101553.f_29872.f_626[200] = uVar210;
					}
					else if (iLocal_672 == 2)
					{
						Global_101553.f_29872.f_939[200] = uVar210;
					}
					func_132(200, &Var0, 0, iLocal_672, -1);
					unk_0x88B0F0DC270164B7(&(Var0.f_77), 14);
					if (unk_0x1E3C80E7C4B8041B(Var0.f_66))
					{
						unk_0x88B0F0DC270164B7(&(Var0.f_77), 22);
					}
					func_109(Local_402.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
					func_108(Local_402.f_0);
					func_58(&(Local_402.f_8), Local_402.f_0);
					iLocal_658 = 1;
					iLocal_654 = 2;
				}
				else if (unk_0x382DB2E6C29D0F23(2, 202) || unk_0x382DB2E6C29D0F23(2, 238))
				{
					unk_0xAB16AADE80707D47(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iLocal_657 = 0;
					iLocal_658 = 0;
					iLocal_654 = (iLocal_654 - 1);
				}
			}
			unk_0xB477A2D8CA963C52();
			if (iLocal_660)
			{
				func_115("", 0, 0);
				func_114(-1);
				func_113(201, "ITEM_SELECT", -1);
				func_113(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			func_71(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
			}
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				if (unk_0x1F1B2B6E500380C5(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 0))
				{
					if (!unk_0xA833EC76BCCA9EBA())
					{
						unk_0xF3E3BC1FD7FDE221(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 1);
					}
				}
			}
			func_68(1, -1);
			iLocal_654 = 0;
			func_66(&iLocal_655);
			iLocal_655 = -1;
			break;
	}
	if (!bVar177 && unk_0x598A9E990F05F82C())
	{
		if (!unk_0x509383441597090D(&cLocal_1019))
		{
			if ((((func_154("HANGAR_NO") || func_154("MARINA_NO")) || func_154("HELIPAD_NO")) || func_154("CAR_GAR_NO_1")) || func_154("CAR_GAR_NO_2"))
			{
				unk_0x94724F7C938EBE34(1);
			}
			StringCopy(&cLocal_1019, "", 16);
		}
	}
}

void func_66(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_67(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36478[iVar0 /*32*/])
		{
			Global_36478[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_67(int iParam0)
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
		if (Global_36478[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_68(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_70(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7894)
	{
		unk_0xC667A7C5CE24C569(15);
		Global_17290.f_7894 = 0;
	}
	unk_0xDA81B130FA38800A(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x89B76C6241C0104D(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0xB14EE32074164477("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0xB14EE32074164477("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_69(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_69(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x1E3F61C2C1E29520(*uParam0))
		{
			unk_0xA12A0D38735CCBF2(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_70(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0xA86CA03D9749EEB3() && unk_0x391BEA92ECF1B445())
		{
			iParam2 = unk_0x434A417780753DD9();
		}
	}
	StringCopy(&cVar0, unk_0x367152330DB70D69(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x3BB8D1C5FAAB25B3(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17290.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17290.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_71(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar80[64];
	float fVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	
	if (!func_70(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_105(0, bParam6))
	{
		return;
	}
	unk_0xCF4C2CE3511D92EA(76, 84);
	unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290)
	{
		if (func_103(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar56 = fVar36;
			fVar57 = fVar35;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_17290 = 0;
		}
	}
	if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) == unk_0x3BB8D1C5FAAB25B3("HIDE"))
	{
		fVar58 = Global_17288;
	}
	else
	{
		fVar58 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17289;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0x28EBEB55C44FD509(&iVar59, &iVar60);
		fVar62 = unk_0x900671749E93DC05(0);
		if (func_102())
		{
			iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) * fVar62));
		}
		fVar63 = (unk_0xBBDA792448DB5A89(iVar59) / unk_0xBBDA792448DB5A89(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_102())
		{
			fVar61 = 1f;
		}
		iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar59) / fVar61));
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar61));
	}
	else
	{
		unk_0xB1F1D8A3052317AC(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) == unk_0x3BB8D1C5FAAB25B3("HIDE"))
			{
				fVar49 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar64, func_101(29), 64);
					StringCopy(&cVar80, func_98(29, 1), 64);
					if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_97(Global_17287, Global_17288, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0xBD42180765457DB6(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xBD42180765457DB6(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17290.f_7864)
				{
					iVar1 = Global_17290.f_7860;
					iVar2 = Global_17290.f_7861;
					iVar3 = Global_17290.f_7862;
					iVar4 = Global_17290.f_7863;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_97(Global_17287, (Global_17288 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
				if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) != 0)
				{
					func_96();
					unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0x3F9D1B882EC0B8AF(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x63A04EB63F481124(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x80F8A2A91BE5A679((Global_17287 + 0.00390625f), ((Global_17288 + fVar56) + 0.00416664f), 0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095)
				{
					if (Global_17290.f_5604 != 0)
					{
						func_96();
						func_94((((Global_17287 + fParam5) - 0.00390625f) - func_95("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603)), ((Global_17288 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar96 = fVar49;
			if (Global_17290.f_7874)
			{
				iVar1 = Global_17290.f_7870;
				iVar2 = Global_17290.f_7871;
				iVar3 = Global_17290.f_7872;
				iVar4 = Global_17290.f_7873;
			}
			else
			{
				unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17290.f_5355[iVar6])
					{
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar55 = Global_17290.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_17290.f_5088 <= 1)
					{
						Global_17290.f_5088++;
					}
					iVar53 = 1;
				}
			}
			unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar96 + ((fVar49 - fVar96) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar96), 0f, 255, 255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095)
			{
				if (Global_17290.f_7879)
				{
					iVar1 = Global_17290.f_7875;
					iVar2 = Global_17290.f_7876;
					iVar3 = Global_17290.f_7877;
					iVar4 = Global_17290.f_7878;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_97(Global_17287, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x4F70A6A4752B71C7("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar61));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar61));
				if (Global_17290.f_7892)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x29F530EB20218AC0(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar61), ((Var37.f_1 / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_103(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_93(fVar41);
				unk_0x26962CC488F25A87(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xC05C59027C3AD7C0(fVar41, (fVar49 + 0.00277776f));
				unk_0x29F530EB20218AC0(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_97(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_93(fVar41);
				unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x80F8A2A91BE5A679(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_103(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_92(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0xBD42180765457DB6(func_101(Global_17290.f_4638), func_98(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0xDF658EB6CA91DFBC() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_2576577.f_21)) != 0 && Global_2576577.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2576577.f_67 != 0)
				{
					func_103(Global_2576577.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_93(fVar41);
				unk_0x26962CC488F25A87(&(Global_2576577.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2576577.f_61)
				{
					if (Global_2576577.f_25[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_2576577.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2576577.f_25[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_2576577.f_34[iVar16], Global_2576577.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2576577.f_25[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xC05C59027C3AD7C0(fVar41, (fVar49 + 0.00277776f));
				unk_0x29F530EB20218AC0(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_97(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_93(fVar41);
				unk_0x09BF2ADDAAD5BC05(&(Global_2576577.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2576577.f_61)
				{
					if (Global_2576577.f_25[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_2576577.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2576577.f_25[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_2576577.f_34[iVar16], Global_2576577.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2576577.f_25[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x80F8A2A91BE5A679(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2576577.f_67 != 0)
				{
					func_103(Global_2576577.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_92(Global_2576577.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xBD42180765457DB6(func_101(Global_2576577.f_67), func_98(Global_2576577.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2576577.f_65 > 0)
				{
					if ((unk_0xDF658EB6CA91DFBC() - Global_2576577.f_66) > Global_2576577.f_65)
					{
						StringCopy(&(Global_2576577.f_21), "", 16);
						Global_2576577.f_65 = -1;
					}
				}
			}
			func_84(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xCF4C2CE3511D92EA(76, 84);
			unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598)
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
			iVar97 = Global_17290.f_5088;
			if (Global_17290.f_5599)
			{
				iVar97 = (Global_17290.f_5602 - 1);
			}
			fVar98 = 0f;
			fVar99 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar97)
			{
				fVar55 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f)
				{
					fVar55 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599)
				{
					iVar6 = Global_17290.f_7520[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095)
				{
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6)
					{
						fVar99 = fVar98;
					}
					if (Global_17290.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17287 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_17290.f_7886)
					{
						unk_0x29F530EB20218AC0(Global_17290.f_7885, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0x29F530EB20218AC0(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xBD42180765457DB6("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar58 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97)
				{
					func_82(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x09BF2ADDAAD5BC05("DFLT_MNU_OPT");
					unk_0x80F8A2A91BE5A679(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0x08BA6DD398CA197C(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
						{
							if (Global_17290.f_5599)
							{
								iVar19 = Global_17290.f_7531[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar20 = Global_17290.f_7572[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar21 = Global_17290.f_7613[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar22 = Global_17290.f_7654[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar23 = Global_17290.f_7695[((iVar9 * Global_17290.f_5096) + iVar8)];
							}
							else
							{
								Global_17290.f_7531[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar19;
								Global_17290.f_7572[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar20;
								Global_17290.f_7613[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar21;
								Global_17290.f_7654[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar22;
								Global_17290.f_7695[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar23;
							}
							iVar104 = 0;
							bVar54 = false;
							if (Global_17290.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[0])
								{
									bVar54 = true;
									iVar104 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[1])
								{
									bVar54 = true;
									iVar104 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17287 + 0.0046875f) + Global_17290.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17290.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17290.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17287 + Global_17289) - 0.0046875f) - fVar33);
							}
							if ((Global_17290.f_4945[iVar8] && Global_17290.f_5741) && bVar31)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_17290.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_82(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, iVar104, bVar51, bVar50);
												unk_0x2F736F028E87FCBF(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63A04EB63F481124(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0xCEAFBE1E102E8742(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_103(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17290.f_4433[(iVar22 + iVar14)] == 2 || Global_17290.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
											Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar43 = Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_103(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_103(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_92(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_101(26), func_98(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_103(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_103(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_92(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_101(27), func_98(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_82(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_81(bVar31);
											}
											unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63A04EB63F481124(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17290.f_4433[(iVar22 + iVar28)] == 2 || Global_17290.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_103(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_103(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_92(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xBD42180765457DB6(func_101(Global_17290.f_4433[(iVar22 + iVar28)]), func_98(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xBD42180765457DB6(func_101(Global_17290.f_4433[(iVar22 + iVar28)]), func_98(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0x80F8A2A91BE5A679(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x80F8A2A91BE5A679((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17290.f_4433[(iVar22 + iVar14)] != 2 && Global_17290.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_103(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_103(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_92(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xBD42180765457DB6(func_101(Global_17290.f_4433[(iVar22 + iVar14)]), func_98(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xBD42180765457DB6(func_101(Global_17290.f_4433[(iVar22 + iVar14)]), func_98(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xBD42180765457DB6(func_101(Global_17290.f_4433[(iVar22 + iVar14)]), func_98(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_82(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_81(bVar31);
											}
											unk_0x2F736F028E87FCBF("NUMBER");
											unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0xCEAFBE1E102E8742(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_103(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_103(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_92(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_101(26), func_98(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_103(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_103(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_92(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_101(27), func_98(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_82(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_80((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_82(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_81(bVar31);
											}
											unk_0x2F736F028E87FCBF("NUMBER");
											unk_0x63A04EB63F481124(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0xCEAFBE1E102E8742(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_103(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_103(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_92(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_101(26), func_98(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_103(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_103(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_92(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_101(27), func_98(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_82(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_79((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_103(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17290.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17290.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
												Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
												fVar43 = Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)];
											}
											if (bVar52)
											{
												if (func_103(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17290.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_103(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_92(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xBD42180765457DB6(func_101(26), func_98(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_103(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_103(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_92(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xBD42180765457DB6(func_101(27), func_98(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_103(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_92(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xBD42180765457DB6(func_101(Global_17290.f_4433[iVar22]), func_98(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), (fVar35 * func_78(Global_17290.f_4433[iVar22])), (fVar36 * func_78(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17290.f_4926[iVar8] == 5)
							{
								if (Global_17290.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								if (Global_17290.f_4945[iVar8])
								{
									if (func_103(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17290.f_7520[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar98 = (fVar98 + Global_17290.f_5612[iVar6]);
						}
						else
						{
							fVar98 = (fVar98 + 0.034722f);
						}
					}
					if (!Global_17290.f_5598)
					{
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17290.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598)
			{
				Global_17290.f_5600 = ((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12)));
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599)
	{
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar49;
	Global_17290.f_5745 = unk_0xDF658EB6CA91DFBC();
	unk_0xDA81B130FA38800A(Global_17290.f_5743);
	if (!Global_17290.f_7859)
	{
		func_73();
	}
	Global_17290.f_7859 = 0;
	if (bParam2)
	{
		unk_0x7ABD1B29E6C2963D(10);
	}
	unk_0x7ABD1B29E6C2963D(6);
	unk_0x7ABD1B29E6C2963D(7);
	unk_0x7ABD1B29E6C2963D(9);
	unk_0x7ABD1B29E6C2963D(8);
	if (bParam0)
	{
		func_72(1);
	}
	unk_0x9AA8EEC80385B281();
}

void func_72(int iParam0)
{
	Global_1344178.f_932 = iParam0;
}

void func_73()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_77(0))
		{
			func_74(0);
		}
		unk_0x88B0F0DC270164B7(&Global_2314, 2);
	}
}

void func_74(int iParam0)
{
	if (Global_14604)
	{
		func_76(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_75())
	{
		Global_14443.f_1 = 3;
	}
}

int func_75()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_76(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_77(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_77(int iParam0)
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

float func_78(int iParam0)
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

void func_79(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x63A04EB63F481124(uParam3, uParam4);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, 0);
}

void func_80(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x3F9D1B882EC0B8AF(iParam3);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, iParam4);
}

void func_81(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x29F530EB20218AC0(Global_17290.f_7887[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x29F530EB20218AC0(Global_17290.f_7887[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
}

void func_82(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_83(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x29F530EB20218AC0(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x29F530EB20218AC0(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xDEB22FE9E351379F(155, 155, 155, 255);
		}
		else
		{
			unk_0xDEB22FE9E351379F(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xDEB22FE9E351379F(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xDEB22FE9E351379F(155, 155, 155, 255);
	}
	else
	{
		unk_0xDEB22FE9E351379F(155, 155, 155, 255);
	}
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0x00D7EEE9B3B84E1C(1);
	if (bParam5)
	{
		unk_0xBF14E70921AA4E54(0f, 0.425f);
		unk_0x03FEF1B70B6CD8DA(4);
	}
	else if (bParam6)
	{
		unk_0xBF14E70921AA4E54(0f, 0.425f);
		unk_0x03FEF1B70B6CD8DA(6);
	}
	else
	{
		unk_0x03FEF1B70B6CD8DA(0);
	}
	unk_0x366FF85701018BC1(0f, 1f);
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_83(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_70(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_105(bParam4, bParam8))
	{
		return;
	}
	if (func_90())
	{
		return;
	}
	if (unk_0x04781D6F82022E77())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_87(unk_0x0C1D3C552325765B(), 0))
		{
			return;
		}
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xC5400265B5C1CEB3() == 0 || unk_0x04781D6F82022E77())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0xFF9B577A7F80CFDD(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 348)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x62B1FF1B5EE703A7(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x611F82FE2F038F7C(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x0FFE3C1DBBA72236((1f - (Global_17290.f_4951 / 100f)));
			unk_0xE73340DA551C95E1();
			if (unk_0x955B8C8F89CC3AC0())
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x5CC02BB872FEF340(1);
				unk_0xE73340DA551C95E1();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0x3BB8D1C5FAAB25B3("PREV"))
				{
					unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(iVar1);
					func_86(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0x3BB8D1C5FAAB25B3("PREV"))
					{
						func_86(&(Global_17290.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1)
					{
						func_85(&(Global_17290.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x709662CF2BD061A4(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x37F0707A16E921F7(iParam2, 70);
						}
						else
						{
							unk_0x3F9D1B882EC0B8AF(iParam2);
						}
						unk_0x1E77BE8F4283FA05();
					}
					if (unk_0x955B8C8F89CC3AC0())
					{
						if (Global_17290.f_4896[iVar1] != 348 && unk_0x08BA6DD398CA197C(Global_17290.f_4922, iVar1))
						{
							unk_0x5CC02BB872FEF340(1);
							unk_0x7CBFB9F4AF33C67E(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0x5CC02BB872FEF340(0);
							unk_0x7CBFB9F4AF33C67E(348);
						}
					}
					unk_0xE73340DA551C95E1();
				}
				iVar1++;
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_2576577.f_16)) != unk_0x3BB8D1C5FAAB25B3(""))
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x7CBFB9F4AF33C67E(Global_17290.f_4639);
				func_86(&Global_2576577);
				if (Global_2576577.f_20 == -1)
				{
					func_85(&(Global_2576577.f_16));
				}
				else
				{
					unk_0x709662CF2BD061A4(&(Global_2576577.f_16));
					if (bParam5)
					{
						unk_0x37F0707A16E921F7(iParam2, 70);
					}
					else
					{
						unk_0x3F9D1B882EC0B8AF(iParam2);
					}
					unk_0x1E77BE8F4283FA05();
				}
				unk_0xE73340DA551C95E1();
			}
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(80);
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0x7CBFB9F4AF33C67E(1);
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(0);
			}
			unk_0xE73340DA551C95E1();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x7CBFB9F4AF33C67E(iVar1);
					unk_0x709662CF2BD061A4(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x37F0707A16E921F7(iParam2, 70);
					}
					else
					{
						unk_0x3F9D1B882EC0B8AF(iParam2);
					}
					unk_0x1E77BE8F4283FA05();
					unk_0xE73340DA551C95E1();
				}
			}
			iVar1++;
		}
		if (Global_2576577.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x7CBFB9F4AF33C67E(iVar1);
				unk_0x709662CF2BD061A4(&(Global_2576577.f_16));
				if (bParam5)
				{
					unk_0x37F0707A16E921F7(iParam2, 70);
				}
				else
				{
					unk_0x3F9D1B882EC0B8AF(iParam2);
				}
				unk_0x1E77BE8F4283FA05();
				unk_0xE73340DA551C95E1();
			}
		}
		unk_0xCF4C2CE3511D92EA(76, 66);
		unk_0x9EB94F4B302F02C5(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7894)
			{
				unk_0x9EAFA57A34157CEF(15, 0f, -0.0375f);
				Global_17290.f_7894 = 1;
			}
		}
		else if (Global_17290.f_7894)
		{
			unk_0xC667A7C5CE24C569(15);
			Global_17290.f_7894 = 0;
		}
		unk_0x9AA8EEC80385B281();
		if (Global_17290.f_4925)
		{
			unk_0xCF4C2CE3511D92EA(82, 66);
			unk_0x9EB94F4B302F02C5(0f, 0f, 0f, 0f);
			unk_0x04F50370A3D0809C(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x9AA8EEC80385B281();
		}
		else
		{
			unk_0x0F83039847376F53(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_85(char[4] cParam0)
{
	unk_0x709662CF2BD061A4(cParam0);
	unk_0x1E77BE8F4283FA05();
}

void func_86(var uParam0)
{
	unk_0x481EA0389B099920(uParam0);
}

bool func_87(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_88(-1, 0) == 8;
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

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_89();
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

int func_89()
{
	return Global_1312731;
}

int func_90()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_91())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x4788913DF846A969(&Var0);
		if (Global_14388 == 0)
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

int func_91()
{
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x29F530EB20218AC0(1, iParam2, iParam3, iParam4, &uVar0);
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
	}
}

void func_93(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x03FEF1B70B6CD8DA(0);
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0x2FBB13D1590A874B(2);
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
	unk_0x366FF85701018BC1(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_94(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x3F9D1B882EC0B8AF(uParam3);
	unk_0x3F9D1B882EC0B8AF(uParam4);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, 0);
}

float func_95(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xD28EDDD3F7264249(sParam0))
	{
		if (unk_0x3BB8D1C5FAAB25B3(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_96();
	unk_0x2F736F028E87FCBF(sParam0);
	unk_0x3F9D1B882EC0B8AF(uParam1);
	unk_0x3F9D1B882EC0B8AF(uParam2);
	return unk_0xCEAFBE1E102E8742(1);
}

void func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7869)
	{
		iVar0 = Global_17290.f_7865;
		iVar1 = Global_17290.f_7866;
		iVar2 = Global_17290.f_7867;
		iVar3 = Global_17290.f_7868;
	}
	unk_0x03FEF1B70B6CD8DA(0);
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
	unk_0x366FF85701018BC1((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_97(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x676A3D7F15838EEA((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_98(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x509383441597090D(&(Global_17290.f_6703[iParam0 /*16*/])))
	{
		if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_100(unk_0x0C1D3C552325765B()) };
			if (unk_0xFD20D4DB68C4280F(&Var19, &uVar3))
			{
				return func_99(&uVar3);
			}
		}
		else
		{
			return func_99(&(Global_17290.f_6703[iParam0 /*16*/]));
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

var func_99(var uParam0)
{
	return uParam0;
}

struct<13> func_100(var uParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(uParam0, &Var0, 13);
	return Var0;
}

char* func_101(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x509383441597090D(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_100(unk_0x0C1D3C552325765B()) };
			unk_0xFD20D4DB68C4280F(&Var16, &uVar0);
			return func_99(&uVar0);
		}
		else
		{
			return func_99(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_102()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x28EBEB55C44FD509(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_101(iParam0), 64);
	StringCopy(&cVar16, func_98(iParam0, bParam1), 64);
	if (unk_0x3BB8D1C5FAAB25B3(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0x28EBEB55C44FD509(&iVar32, &iVar33);
			fVar35 = unk_0x900671749E93DC05(0);
			if (func_102())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_102())
			{
				fVar34 = 1f;
			}
			if (unk_0xA96867DD0A63C62C(joaat("director_mode")) > 0)
			{
				unk_0xB1F1D8A3052317AC(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0xB1F1D8A3052317AC(&iVar32, &iVar33);
		}
		Var37 = { unk_0x4F70A6A4752B71C7(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_104(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_104(iParam0) / fVar34));
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
		if (iParam0 == 29 && unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x626C2E82CA013B68() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17289)
			{
				*fParam4 = (*fParam4 * (Global_17289 / *fParam3));
				*fParam3 = Global_17289;
			}
		}
		return 1;
	}
	return 0;
}

float func_104(int iParam0)
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

int func_105(bool bParam0, bool bParam1)
{
	if (Global_2432628.f_1384.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xB20CA7A3EE29687A() || (func_107(8, -1) && func_106() != 64)) || (unk_0xAD490CD811854704() != 0 && !bParam1)) || (unk_0xC740F8182E7E9681() && !bParam0)) || unk_0x0BC39FA2C6867467()) || Global_69877) || Global_17290.f_7893) || unk_0xCD755B20D2481736()) || Global_91458.f_1361)
	{
		return 0;
	}
	return 1;
}

int func_106()
{
	return Global_1315164;
}

bool func_107(int iParam0, int iParam1)
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

void func_108(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_68446[iParam0] = 0;
	Global_68446.f_69[iParam0] = 0;
}

void func_109(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_58(&(Global_68446.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x08BA6DD398CA197C(Global_68446.f_555[0 /*21*/].f_9, 10))
		{
			func_111(iParam0);
			func_110(uParam1, &(Global_101553.f_18972.f_69[Global_68446.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x08BA6DD398CA197C(Global_68446.f_555[0 /*21*/].f_9, 11))
			{
				Global_101553.f_18972.f_1864[Global_68446.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_101553.f_18972.f_1934[Global_68446.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_101553.f_18972.f_1864[Global_68446.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_101553.f_18972.f_1934[Global_68446.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101553.f_18972.f_1958[Global_68446.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_381(iParam0, 1);
		}
	}
}

void func_110(var uParam0, var uParam1)
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

void func_111(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_58(&(Global_68446.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_139[iParam0]))
		{
			unk_0x7B17650F15A8876D(Global_68446.f_139[iParam0], 1, 1);
			unk_0x615DE34FC732CF11(&(Global_68446.f_139[iParam0]));
			Global_68446.f_139[iParam0] = 0;
		}
		if (unk_0x08BA6DD398CA197C(Global_68446.f_555[0 /*21*/].f_9, 13))
		{
			func_381(iParam0, 0);
		}
	}
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_113(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x62B1FF1B5EE703A7(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2576577, sVar0, 64);
		StringCopy(&(Global_2576577.f_16), sParam1, 16);
		Global_2576577.f_20 = iParam2;
		return;
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_17290.f_4922), Global_17290.f_4639);
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17290.f_4834[iVar0 /*4*/]), "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 348;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	Global_17290.f_4922 = 0;
	StringCopy(&(Global_2576577.f_16), "", 16);
	Global_2576577.f_20 = -1;
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (!func_70(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x5CC02BB872FEF340(0);
		unk_0xE73340DA551C95E1();
	}
}

void func_115(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_4562), sParam0, 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = iParam1;
	Global_17290.f_4637 = unk_0xDF658EB6CA91DFBC();
	Global_17290.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
}

int func_116()
{
	if (unk_0x4255B5ECB9D34344(2))
	{
		if (Global_2576653 > -1)
		{
			if (unk_0x382DB2E6C29D0F23(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_117(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x4255B5ECB9D34344(2))
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756() || unk_0xCD755B20D2481736())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x3AAD9D87062EB88B();
	}
	if (Global_2576653 == -6)
	{
		unk_0x70F5FD87FA8FE8FD(4);
		if (iParam0 && unk_0x7F6103BD34B839B0(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2576653 = -1;
			return 0;
		}
	}
	if (((Global_2576653 > -1 || Global_2576653 == -3) || Global_2576653 == -2) || unk_0x6946F66C693055AC())
	{
		unk_0x70F5FD87FA8FE8FD(1);
		return 0;
	}
	if (Global_2576653 == -1 && iParam0)
	{
		if (unk_0x7F6103BD34B839B0(2, 237))
		{
			unk_0x70F5FD87FA8FE8FD(4);
			Global_2576653 = -6;
			return 1;
		}
		else
		{
			unk_0x70F5FD87FA8FE8FD(3);
			return 0;
		}
	}
	unk_0x70F5FD87FA8FE8FD(1);
	return 0;
}

void func_118(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0x4255B5ECB9D34344(2))
	{
		Global_2576653 = -1;
		return;
	}
	unk_0xE27C28EF3F6A97B8(1);
	fVar0 = Global_17287;
	fVar2 = (fVar0 + Global_17289);
	fVar3 = Global_17290.f_5600;
	fVar1 = (Global_17290.f_5600 - (IntToFloat(Global_17290.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17290.f_5602 < 1)
	{
		fVar1 = (Global_17290.f_5600 - 0.034722f);
	}
	unk_0xCF4C2CE3511D92EA(76, 84);
	unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x01B50A0EA91F8229(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x01B50A0EA91F8229(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x9AA8EEC80385B281();
	func_120();
	if (Global_2576653 == -6)
	{
		return;
	}
	Global_2576653 = -1;
	fVar7 = Global_2576647;
	fVar8 = Global_2576648;
	if (Global_17290.f_5603 > Global_17290.f_5602)
	{
		if (((Global_2576647 >= fVar0 && Global_2576647 <= fVar2) && Global_2576648 >= fVar3) && Global_2576648 < (fVar3 + fVar6))
		{
			Global_2576653 = -2;
			if (bParam3)
			{
				func_119(0);
			}
			return;
		}
		if (((Global_2576647 >= fVar0 && Global_2576647 <= fVar2) && Global_2576648 >= (fVar3 + fVar6)) && Global_2576648 < (fVar3 + 0.034722f))
		{
			Global_2576653 = -3;
			if (bParam3)
			{
				func_119(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17290.f_5603 == -1)
		{
			Global_2576653 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17290.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xCF4C2CE3511D92EA(76, 84);
				unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
				func_97(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17289, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x9AA8EEC80385B281();
			}
		}
		Global_2576653 = Global_17290.f_7520[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2576653 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2576653 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2576653 = -4;
		return;
	}
	Global_2576653 = -1;
}

void func_119(bool bParam0)
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
	fVar0 = Global_17287;
	fVar1 = Global_17290.f_5600;
	unk_0xCF4C2CE3511D92EA(76, 84);
	unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
	if (Global_2576653 == -2)
	{
		func_97(fVar0, fVar1, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2576653 == -3)
	{
		func_97(fVar0, (fVar1 + fVar2), Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x9AA8EEC80385B281();
}

void func_120()
{
	Global_2576649 = Global_2576647;
	Global_2576650 = Global_2576648;
	Global_2576647 = unk_0x7648D90D868BBF55(2, 239);
	Global_2576648 = unk_0x7648D90D868BBF55(2, 240);
	Global_2576651 = (Global_2576647 - Global_2576649);
	Global_2576652 = (Global_2576648 - Global_2576650);
}

void func_121(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17290.f_5606 = iParam0;
	Global_17290.f_5741 = iParam2;
	if (Global_17290.f_5606 < Global_17290.f_5605)
	{
		Global_17290.f_5605 = Global_17290.f_5606;
	}
	else if ((Global_17290.f_5599 && Global_17290.f_5606 > Global_17290.f_5607) || (!Global_17290.f_5599 && Global_17290.f_5606 >= (Global_17290.f_5605 + Global_17290.f_5095)))
	{
		iVar0 = Global_17290.f_5605;
		while (iVar0 <= Global_17290.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17290.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17290.f_5095 && Global_17290.f_5605 < 128)
		{
			Global_17290.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17290.f_5605;
			while (iVar0 <= Global_17290.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17290.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17290.f_4562), "", 16);
		StringCopy(&(Global_2576577.f_21), "", 16);
	}
}

void func_122(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17290.f_5090 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 >= 4)
	{
		return;
	}
	if (Global_17290.f_5611 != 1)
	{
		return;
	}
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		return;
	}
	StringCopy(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]), sParam0, 24);
	Global_17290.f_5090++;
	Global_17290.f_2124[Global_17290.f_5609 /*5*/][Global_17290.f_5610] = 1;
	Global_17290.f_5610++;
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		fVar0 = func_124();
		if (Global_17290.f_4945[Global_17290.f_5089] && Global_17290.f_5610 == Global_17290.f_5608)
		{
			func_103(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17290.f_4938[(Global_17290.f_5089 - 1)])
		{
			Global_17290.f_4938[(Global_17290.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17290.f_5610 >= Global_17290.f_5608)
		{
			fVar3 = func_123();
			if (fVar3 > Global_17290.f_5612[Global_17290.f_5088])
			{
				Global_17290.f_5612[Global_17290.f_5088] = fVar3;
			}
		}
	}
}

float func_123()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17290.f_4433[((Global_17290.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_103(Global_17290.f_4433[((Global_17290.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x167B696877E49A32(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x167B696877E49A32(0.35f, 0);
}

float func_124()
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
	while (iVar7 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_82(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
	{
		unk_0x2F736F028E87FCBF(&(Global_17290.f_73[Global_17290.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(Global_17290.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(Global_17290.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[((Global_17290.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x63A04EB63F481124(Global_17290.f_4175[((Global_17290.f_5093 - iVar4) + iVar10)], Global_17290.f_4304[((Global_17290.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xDA35BDB37E728640(&(Global_2452282[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xBDE6EEC5F6BDC060(&(Global_2452282[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xDA35BDB37E728640(&(Global_2452282[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xDA35BDB37E728640(&(Global_2452282[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0xCEAFBE1E102E8742(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17290.f_4433[((Global_17290.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_103(Global_17290.f_4433[((Global_17290.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_125(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	if (func_126(iParam0, -1) == 0)
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
		
		default:
	}
	return "";
}

int func_126(int iParam0, int iParam1)
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
			return Global_68108;
		
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
	}
	return 0;
}

void func_127(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_17290.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17290.f_5088 >= 128)
	{
		return;
	}
	if (Global_17290.f_5094 >= 128)
	{
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608)
	{
		return;
	}
	if (Global_17290.f_5088 != iParam0)
	{
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 4)
	{
		while (Global_17290.f_5089 < 4 && iVar0 != 4)
		{
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_17290.f_4433[Global_17290.f_5094] = iParam1;
	Global_17290.f_5094++;
	if (iParam1 != 0)
	{
		func_103(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_103(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089])
		{
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar2;
			}
		}
	}
	unk_0x88B0F0DC270164B7(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 4;
}

void func_128(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17290.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17290.f_5088 >= 128)
	{
		return;
	}
	if (Global_17290.f_5090 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608)
	{
		return;
	}
	if (Global_17290.f_5088 != iParam0)
	{
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17290.f_5089 < 4 && iVar0 != 1)
		{
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0x509383441597090D(sParam1) && !unk_0x7179DC5DD4B8EEBC(sParam1))
	{
	}
	Global_17290.f_1610[Global_17290.f_5090] = bParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!bParam3)
	{
		func_131(Global_17290.f_5088, 1);
	}
	else
	{
		func_131(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_130(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_103(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089])
		{
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_129(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
			if (fVar4 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x88B0F0DC270164B7(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_129(char* sParam0)
{
	if (!unk_0x7179DC5DD4B8EEBC(sParam0))
	{
	}
	return unk_0x167B696877E49A32(0.35f, 0);
}

float func_130(char* sParam0)
{
	if (!unk_0xD28EDDD3F7264249(sParam0))
	{
		if (unk_0x3BB8D1C5FAAB25B3(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_82(0, 1, 0, 0, 0, 0, 0);
	unk_0x2F736F028E87FCBF(sParam0);
	return unk_0xCEAFBE1E102E8742(1);
}

void func_131(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_132(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	var uVar1;
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
	int iVar13;
	char* sVar14;
	int iVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	char* sVar22;
	int iVar26;
	var uVar27;
	var uVar28;
	
	uParam1->f_66 = func_126(iParam0, iParam4);
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
	func_144(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_143(iParam0))
	{
		if (Global_68443)
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
		if (Global_68443)
		{
			uParam1->f_65 = 1;
		}
	}
	if (bParam2)
	{
		iVar0 = Global_68442;
	}
	else if (iParam3 == 0)
	{
		iVar0 = Global_101553.f_29872.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar0 = Global_101553.f_29872.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar0 = Global_101553.f_29872.f_939[iParam0];
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
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 2:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 3:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 4:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 5:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 6:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 7:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 8:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 9:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 10:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 11:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 12:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 13:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 14:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 15:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 16:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 17:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 18:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 19:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 20:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 21:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 22:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 23:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 24:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
				break;
			
			case 25:
				func_139(func_140(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_138(func_140(iParam0, iVar0));
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
				if (func_137(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_136(iParam0, iVar0, &uVar1))
						{
							uParam1->f_9[48] = uVar1;
						}
						else if (func_135(iParam0, iVar0, &uVar2, &uVar3, &uVar1))
						{
							uParam1->f_5 = uVar2;
							uParam1->f_6 = uVar3;
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
							uParam1->f_9[48] = uVar1;
						}
						else
						{
							uParam1->f_67 = 0;
						}
					}
					else
					{
						uParam1->f_67 = func_138(func_140(iParam0, iVar0));
					}
				}
				else if (func_143(iParam0))
				{
					if (!Global_68443)
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
				else if (func_134(iParam0))
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
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			
			case 2:
				if (func_137(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_136(iParam0, iVar0, &uVar4))
						{
							uParam1->f_9[48] = uVar4;
						}
						else if (func_135(iParam0, iVar0, &uVar5, &uVar6, &uVar4))
						{
							uParam1->f_5 = uVar5;
							uParam1->f_6 = uVar6;
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
							uParam1->f_9[48] = uVar4;
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
						uParam1->f_67 = func_138(func_140(iParam0, iVar0));
					}
				}
				else if (func_143(iParam0))
				{
					if (!Global_68443)
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
				else if (func_134(iParam0))
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
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			
			case 3:
				if (func_137(iParam0))
				{
					if (func_136(iParam0, iVar0, &uVar7))
					{
						uParam1->f_9[48] = uVar7;
					}
					else if (func_135(iParam0, iVar0, &uVar8, &uVar9, &uVar7))
					{
						uParam1->f_5 = uVar8;
						uParam1->f_6 = uVar9;
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
						uParam1->f_9[48] = uVar7;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (func_143(iParam0))
				{
					if (!Global_68443)
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
				else if (func_134(iParam0))
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
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			
			case 4:
				if (func_137(iParam0))
				{
					if (func_136(iParam0, iVar0, &uVar10))
					{
						uParam1->f_9[48] = uVar10;
					}
					else if (func_135(iParam0, iVar0, &uVar11, &uVar12, &uVar10))
					{
						uParam1->f_5 = uVar11;
						uParam1->f_6 = uVar12;
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
						uParam1->f_9[48] = uVar10;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (func_143(iParam0))
				{
					if (!Global_68443)
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
				else if (func_134(iParam0))
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
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_133(iVar13, &sVar14, &iVar18, &uVar19, &uVar20))
					{
						if (unk_0x28C1B9853548BD8E(&sVar14, "ORANGE") && iVar18 == 1)
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
			
			case 5:
				if (func_143(iParam0))
				{
					if (!Global_68443)
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
				else if (func_134(iParam0))
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
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_133(iVar21, &sVar22, &iVar26, &uVar27, &uVar28))
					{
						if (unk_0x28C1B9853548BD8E(&sVar22, "LIME_GREEN") && iVar26 == 1)
						{
							uParam1->f_5 = uVar27;
							uParam1->f_6 = uVar28;
							iVar21 = -99;
						}
						iVar21++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 6:
				if (func_143(iParam0))
				{
					if (!Global_68443)
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
				else if (func_134(iParam0))
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
				else if (func_143(iParam0))
				{
					if (!Global_68443)
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
				else if (func_134(iParam0))
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
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			
			case 8:
				if (func_143(iParam0))
				{
					if (!Global_68443)
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
				else if (func_134(iParam0))
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
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

bool func_133(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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

int func_134(int iParam0)
{
	if (((((iParam0 == 286 || iParam0 == 289) || iParam0 == 290) || iParam0 == 301) || iParam0 == 287) || iParam0 == 288)
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
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
				func_139(func_140(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				func_139(func_140(iParam0, iParam1), uParam2, uParam3);
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

int func_136(int iParam0, int iParam1, var uParam2)
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

int func_137(int iParam0)
{
	if (((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279)
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0)
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

int func_139(int iParam0, var uParam1, var uParam2)
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

int func_140(int iParam0, int iParam1)
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
			if (func_141(iParam0, 11, iParam1))
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
			if (func_141(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		default:
	}
	return -1;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
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
		if (unk_0x1EC72E271ABEC1BA())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_40() && func_142())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0xA86CA03D9749EEB3()) || (iParam0 == 207 && unk_0xA86CA03D9749EEB3())) || (iParam0 == 208 && unk_0xA86CA03D9749EEB3())) || (iParam0 == 209 && unk_0xA86CA03D9749EEB3()))
	{
		if (func_40())
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
	if (func_143(iParam0))
	{
		if (Global_68443)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_142()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x08BA6DD398CA197C(Global_25, 5))
	{
		if (unk_0x08BA6DD398CA197C(Global_25, 1) || unk_0x08BA6DD398CA197C(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0x08BA6DD398CA197C(iVar0, 5))
		{
			if (unk_0x08BA6DD398CA197C(iVar0, 1) || unk_0x08BA6DD398CA197C(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x780C82A5FB0E714F(0))
	{
		if (Global_138926.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x8A3351ECF43DB941(iVar2, &iVar1, -1))
			{
				if (unk_0x08BA6DD398CA197C(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x3F59EA61B56AFBC2())
	{
		iVar3 = unk_0x680A5FBB1F20F775(866);
		if (unk_0x08BA6DD398CA197C(iVar3, 1) || unk_0x08BA6DD398CA197C(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x446ED6C2B9B18A21())
	{
		if (unk_0x941A660B39C95F30())
		{
			if (unk_0x28AB0A510FC49CA4())
			{
				unk_0x8A3351ECF43DB941(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				unk_0x88B0F0DC270164B7(&iVar4, 1);
				unk_0x88B0F0DC270164B7(&iVar4, 3);
				unk_0x88B0F0DC270164B7(&iVar4, 5);
				unk_0x88B0F0DC270164B7(&Global_25, 1);
				unk_0x88B0F0DC270164B7(&Global_25, 3);
				unk_0x88B0F0DC270164B7(&Global_25, 5);
				unk_0x10CE8769EE2626C7(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (unk_0x3F59EA61B56AFBC2())
				{
					iVar4 = unk_0x680A5FBB1F20F775(866);
					unk_0x88B0F0DC270164B7(&iVar4, 1);
					unk_0x88B0F0DC270164B7(&iVar4, 3);
					unk_0xDA842F3F06329D8C(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_143(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

void func_144(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 64:
			unk_0x88B0F0DC270164B7(uParam1, 4);
			break;
		
		case 67:
			unk_0x88B0F0DC270164B7(uParam1, 4);
			break;
		
		case 72:
			unk_0x88B0F0DC270164B7(uParam1, 1);
			break;
		
		case 117:
			unk_0x09C86C0C5CA26B1E(uParam1, 1);
			break;
		
		case 49:
			unk_0x09C86C0C5CA26B1E(uParam1, 0);
			unk_0x88B0F0DC270164B7(uParam1, 1);
			break;
		
		case 118:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			unk_0x09C86C0C5CA26B1E(uParam1, 1);
			break;
		
		case 1:
			unk_0x88B0F0DC270164B7(uParam1, 1);
			break;
		
		case 119:
			unk_0x09C86C0C5CA26B1E(uParam1, 1);
			break;
		
		case 77:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			unk_0x09C86C0C5CA26B1E(uParam1, 1);
			unk_0x09C86C0C5CA26B1E(uParam1, 2);
			break;
		
		case 120:
			unk_0x09C86C0C5CA26B1E(uParam1, 0);
			unk_0x88B0F0DC270164B7(uParam1, 1);
			unk_0x09C86C0C5CA26B1E(uParam1, 2);
			break;
		
		case 130:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			break;
		
		case 132:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			break;
		
		case 135:
			unk_0x09C86C0C5CA26B1E(uParam1, 0);
			unk_0x88B0F0DC270164B7(uParam1, 1);
			break;
		
		case 137:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			break;
		
		case 141:
			unk_0x88B0F0DC270164B7(uParam1, 1);
			unk_0x09C86C0C5CA26B1E(uParam1, 6);
			break;
		
		case 147:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			unk_0x88B0F0DC270164B7(uParam1, 1);
			unk_0x88B0F0DC270164B7(uParam1, 2);
			unk_0x88B0F0DC270164B7(uParam1, 3);
			unk_0x88B0F0DC270164B7(uParam1, 4);
			unk_0x88B0F0DC270164B7(uParam1, 5);
			unk_0x88B0F0DC270164B7(uParam1, 6);
			unk_0x88B0F0DC270164B7(uParam1, 7);
			unk_0x88B0F0DC270164B7(uParam1, 8);
			break;
		
		case 203:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			unk_0x09C86C0C5CA26B1E(uParam1, 1);
			unk_0x09C86C0C5CA26B1E(uParam1, 2);
			break;
		
		case 100:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			unk_0x88B0F0DC270164B7(uParam1, 1);
			unk_0x88B0F0DC270164B7(uParam1, 2);
			break;
		
		case 170:
			unk_0x09C86C0C5CA26B1E(uParam1, 0);
			unk_0x09C86C0C5CA26B1E(uParam1, 1);
			unk_0x09C86C0C5CA26B1E(uParam1, 2);
			break;
		
		case 160:
			unk_0x88B0F0DC270164B7(uParam1, 15);
			break;
		
		case 161:
			unk_0x88B0F0DC270164B7(uParam1, 15);
			break;
		
		case 192:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			unk_0x88B0F0DC270164B7(uParam1, 1);
			unk_0x09C86C0C5CA26B1E(uParam1, 2);
			break;
		
		case 221:
			unk_0x09C86C0C5CA26B1E(uParam1, 0);
			unk_0x88B0F0DC270164B7(uParam1, 1);
			unk_0x09C86C0C5CA26B1E(uParam1, 2);
			break;
		
		case 222:
			unk_0x88B0F0DC270164B7(uParam1, 1);
			break;
		
		case 172:
			unk_0x88B0F0DC270164B7(uParam1, 1);
			break;
		
		case 165:
			unk_0x09C86C0C5CA26B1E(uParam1, 0);
			unk_0x88B0F0DC270164B7(uParam1, 1);
			break;
		
		case 166:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			unk_0x09C86C0C5CA26B1E(uParam1, 1);
			break;
		
		case 139:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			break;
		
		case 104:
			unk_0x88B0F0DC270164B7(uParam1, 1);
			break;
		
		case 109:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			unk_0x88B0F0DC270164B7(uParam1, 1);
			unk_0x88B0F0DC270164B7(uParam1, 2);
			break;
		
		case 227:
		case 252:
			unk_0x88B0F0DC270164B7(uParam1, 1);
			unk_0x09C86C0C5CA26B1E(uParam1, 2);
			unk_0x09C86C0C5CA26B1E(uParam1, 4);
			break;
		
		case 97:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			unk_0x88B0F0DC270164B7(uParam1, 1);
			break;
		
		case 52:
			unk_0x88B0F0DC270164B7(uParam1, 1);
			break;
		
		case 108:
			unk_0x88B0F0DC270164B7(uParam1, 1);
			break;
		
		case 237:
			unk_0x88B0F0DC270164B7(uParam1, 9);
			break;
		
		case 238:
			unk_0x09C86C0C5CA26B1E(uParam1, 0);
			unk_0x88B0F0DC270164B7(uParam1, 1);
			unk_0x88B0F0DC270164B7(uParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_68443)
			{
				unk_0x88B0F0DC270164B7(uParam1, 9);
			}
			break;
		
		case 271:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			unk_0x88B0F0DC270164B7(uParam1, 1);
			unk_0x88B0F0DC270164B7(uParam1, 2);
			unk_0x88B0F0DC270164B7(uParam1, 3);
			unk_0x88B0F0DC270164B7(uParam1, 4);
			break;
		
		case 272:
			unk_0x88B0F0DC270164B7(uParam1, 3);
			unk_0x88B0F0DC270164B7(uParam1, 4);
			break;
		
		case 273:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			break;
		
		case 281:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			break;
		
		case 267:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			break;
		
		case 268:
			unk_0x88B0F0DC270164B7(uParam1, 0);
			break;
		
		case 292:
			unk_0x88B0F0DC270164B7(uParam1, 9);
			break;
		
		default:
			return;
			break;
	}
}

void func_145(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_1), sParam0, 16);
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_146(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

void func_147(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4926[0] = iParam0;
	Global_17290.f_4926[1] = iParam1;
	Global_17290.f_4926[2] = iParam2;
	Global_17290.f_4926[3] = iParam3;
	Global_17290.f_4926[4] = iParam4;
	Global_17290.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17290.f_5096++;
	}
}

void func_148(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17290.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17290.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2452282[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17290.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4959[iVar0] = 0;
		Global_17290.f_5097[iVar0] = 0;
		Global_17290.f_5226[iVar0] = 0;
		Global_17290.f_5746[iVar0] = 0f;
		Global_17290.f_5355[iVar0] = 0;
		Global_17290.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17290.f_4926[iVar0] = 0;
		Global_17290.f_4938[iVar0] = 0f;
		Global_17290.f_4932[iVar0] = -1f;
		Global_17290.f_4945[iVar0] = 0;
		Global_17290.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17290.f_4834[iVar0 /*4*/]), "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 348;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		StringCopy(&(Global_17290.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17290.f_6703[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2576577.f_16), "", 16);
	Global_2576577.f_20 = -1;
	Global_17290 = 0;
	Global_17290.f_5088 = 0;
	Global_17290.f_5089 = 0;
	Global_17290.f_5090 = 0;
	Global_17290.f_5092 = 0;
	Global_17290.f_5093 = 0;
	Global_17290.f_5094 = 0;
	Global_17290.f_5091 = 0;
	Global_17290.f_5741 = 0;
	Global_17290.f_5606 = 0;
	Global_17290.f_5605 = 0;
	Global_17290.f_5607 = 0;
	StringCopy(&(Global_17290.f_4562), "", 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = 0;
	Global_17290.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_4638 = 0;
	StringCopy(&(Global_2576577.f_21), "", 16);
	Global_2576577.f_61 = 0;
	Global_2576577.f_62 = 0;
	Global_2576577.f_63 = 0;
	Global_2576577.f_64 = 0;
	Global_2576577.f_65 = 0;
	Global_2576577.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2576577.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2576577.f_67 = 0;
	StringCopy(&(Global_17290.f_1), "", 16);
	Global_17290.f_4944 = 0f;
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_5611 = 0;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = 0;
	Global_17290.f_5609 = 0;
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	Global_17290.f_5095 = 10;
	Global_17290.f_5096 = 0;
	Global_17290.f_5743 = 0f;
	Global_17290.f_5744 = 0f;
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	Global_17290.f_5600 = 0f;
	Global_17290.f_5601 = 0;
	Global_17290.f_5603 = 0;
	Global_17290.f_5602 = 0;
	Global_17290.f_5604 = 0;
	Global_17290.f_7890 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17290.f_5875[iVar0] = -1;
		Global_17290.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17290.f_4951 = 0f;
	Global_17290.f_4922 = 0;
	Global_17290.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5881)
	{
		Global_17290.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_7869 = 0;
	Global_17290.f_7864 = 0;
	Global_17290.f_7874 = 0;
	Global_17290.f_7879 = 0;
	Global_17290.f_7884 = 0;
	Global_17290.f_7886 = 0;
	Global_17290.f_7892 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = unk_0x900671749E93DC05(0);
	if (bParam0)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17289 = 0.225f;
	}
}

void func_149()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		unk_0xAB3C5FCC37C7F637(0.325f, 0.3f);
	}
}

int func_150(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_67(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xC0691D80D21C989D(unk_0x4A0FB18E33FE5805()))
	{
		return 0;
	}
	if (func_77(0))
	{
		return 0;
	}
	if (unk_0x7C0379981B7E6E40())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36478[iVar0 /*32*/] == 1 && Global_36478[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36478[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36478[iVar0 /*32*/].f_5 = 1;
			Global_36478[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36478[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36478[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_151(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_70(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x509383441597090D(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0x7BCE93123FE81E45(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0x15CD8FB3CF6BE10D(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xC41E276F33F448DD("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xC04F047A523E9370("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xC41E276F33F448DD("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xC04F047A523E9370("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_152(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_152(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x1E3F61C2C1E29520(*uParam0))
			{
				*uParam0 = unk_0x474309DF4921072A(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x1E3F61C2C1E29520(*uParam0))
					{
						uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x1E3F61C2C1E29520(*uParam0))
			{
				uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x1E3F61C2C1E29520(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_153(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

var func_154(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_155(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xA96867DD0A63C62C(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xC740F8182E7E9681())
	{
		if (!*iParam0 == -1)
		{
			func_66(iParam0);
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
		if (!Global_36478[iVar0 /*32*/])
		{
			Global_36478[iVar0 /*32*/] = 1;
			Global_36478[iVar0 /*32*/].f_1 = Global_36679;
			Global_36679++;
			Global_36478[iVar0 /*32*/].f_4 = 0;
			Global_36478[iVar0 /*32*/].f_29 = 0;
			Global_36478[iVar0 /*32*/].f_5 = 0;
			Global_36478[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36478[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36478[iVar0 /*32*/].f_6 = iParam3;
			Global_36478[iVar0 /*32*/].f_31 = unk_0xEAE20F1125B83888();
			Global_36478[iVar0 /*32*/].f_7 = 0;
			Global_36478[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x509383441597090D(sParam4))
			{
				Global_36478[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36478[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36478[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36478[iVar0 /*32*/].f_12 = 0;
				Global_36478[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36478[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_101553.f_29872[iParam0], iVar0);
}

int func_157(int iParam0)
{
	int iVar0;
	int iVar1[128];
	
	if (func_160(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_101553.f_17429[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_40() && !unk_0xA86CA03D9749EEB3())
	{
		if (func_159(33, 0) && !func_158(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_101553.f_29763.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_101553.f_29763.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_101553.f_29763.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_101553.f_29763.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_101553.f_29763.f_7)
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

int func_158(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_101553.f_6543.f_764)
	{
		if (Global_101553.f_6543.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_159(int iParam0, int iParam1)
{
	if (unk_0x08BA6DD398CA197C(Global_101553.f_29685.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_160(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0x08BA6DD398CA197C(Global_101553.f_668.f_945, 2))
		{
			return 1;
		}
	}
	if (unk_0x1EC72E271ABEC1BA())
	{
		if (!bParam1 || unk_0x98C339BD475B043D())
		{
			if (!unk_0xBECAD780226FC009() && !unk_0xD95D58B9AAC86D55())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0xA7F2473F08003D66())
		{
			return 0;
		}
	}
	if (unk_0x1EC72E271ABEC1BA())
	{
		return 1;
	}
	return 0;
}

int func_161()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_160(1, 1))
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			iVar0++;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_101553.f_17429[45 /*6*/], 3))
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			iVar0++;
		}
	}
	if (func_40() && !unk_0xA86CA03D9749EEB3())
	{
		if (func_159(33, 0) && !func_158(1751306471))
		{
			iVar0++;
		}
		if (Global_101553.f_29763.f_3)
		{
			iVar0++;
		}
		if (Global_101553.f_29763.f_4)
		{
			iVar0++;
		}
		if (Global_101553.f_29763.f_5)
		{
			iVar0++;
		}
		if (Global_101553.f_29763.f_6)
		{
			iVar0++;
		}
		if (Global_101553.f_29763.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_162(float fParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()) && !unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0xBA41AA46A339E323(unk_0xA0081090911D13E5()) > 0;
		}
		else
		{
			return unk_0x8994C956AF25DEC7(unk_0xA0081090911D13E5(), unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), fParam0) > 0;
		}
	}
	return 0;
}

bool func_163(bool bParam0)
{
	if (!bParam0 && unk_0xA96867DD0A63C62C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_69865, 0);
}

void func_164()
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
	if ((((((((((((((((Local_402.f_29.f_80 && Local_402.f_29.f_69) && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5())) && Local_402.f_2 == 0) && Local_402.f_0 != -1) && func_64(Local_402.f_0, 0)) && func_64(Local_402.f_0, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_68125) && !func_163(1)) && !func_222()) || (((Local_402.f_3 > 1 && !func_163(0)) && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5())) && !func_222()))
	{
		func_221(Local_402.f_0, &Local_546);
		fVar13 = 0f;
		sVar14 = "ANIM@APT_TRANS@GARAGE";
		Var15 = { 198.3659f, -1020.273f, -100f };
		Var18 = { Var15 };
		Var21 = { 198.9538f, -1026.13f, -100f };
		iVar24 = func_220(Local_402.f_0);
		switch (Local_402.f_3)
		{
			case 0:
				if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && !unk_0xC740F8182E7E9681())
				{
					Local_402.f_3 = 10;
					return;
				}
				if ((((((unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && (func_219(unk_0x5E6FDC4F3A8C8EDE(unk_0xA0081090911D13E5()), Local_402.f_29.f_68, 90f) || unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))) && unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B())) && !unk_0x12AE3D700F6A2545(unk_0xA0081090911D13E5())) && !unk_0x69FEFE28E1352842(unk_0xA0081090911D13E5())) && !unk_0x77B21D2C209C7D47(unk_0xA0081090911D13E5(), 2)) && (iVar24 == iLocal_672 || iVar24 == 145))
				{
					if (func_218())
					{
						bVar25 = true;
						if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
						{
							iVar12 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 1);
							if (unk_0xD3FACCDA4D66AEAD(iVar12))
							{
								if (unk_0x1F1B2B6E500380C5(iVar12, 0))
								{
									iVar26 = unk_0x705BC1BB91F530B5(iVar12);
									if (((((((((!func_61(iVar26) || func_60(iVar12)) || func_59(iVar12)) || !func_38(iVar26, 0)) || unk_0x29626AAD56D23B62(iVar12)) || ((!unk_0x0778B61C8A904D0B(iVar26) && !unk_0xBFD32C1D4D54E09B(iVar26)) && !unk_0xA727EEDD175A1189(iVar26))) || iVar26 == joaat("monster")) || unk_0x601CCD1205C6523F(iVar12)) || unk_0x0E3B720DBDB92515(iVar12)) || (unk_0xF580F0607D97E33F(unk_0xA0081090911D13E5()) && unk_0xA96867DD0A63C62C(joaat("taxi_procedural")) > 0))
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
						else if (unk_0x346FAFE6C319D5AB(sVar14))
						{
							unk_0xA9DC3948106CC3E4(sVar14);
							if (!unk_0xAD21C77209FD2024(sVar14))
							{
								bVar25 = false;
							}
						}
						if (bVar25)
						{
							func_155(&iLocal_656, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							iLocal_1034 = 0;
							Local_402.f_3 = 1;
						}
						else if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
						{
							if (!unk_0x598A9E990F05F82C() || func_154("WEB_VEH_INV"))
							{
								func_153("WEB_VEH_INV", -1);
								StringCopy(&cLocal_1023, "WEB_VEH_INV", 16);
								bVar11 = true;
							}
						}
					}
					else if (!unk_0x598A9E990F05F82C() || func_154("WEB_VEH_FULL"))
					{
						func_153("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_1023, "WEB_VEH_FULL", 16);
						bVar11 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_1032)
				{
					if (!unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
					{
						iLocal_1032 = 0;
						unk_0xA9DC3948106CC3E4(sVar14);
						if (unk_0xAD21C77209FD2024(sVar14))
						{
							iLocal_1032 = 1;
						}
					}
					else
					{
						unk_0x04269E768DDAF940(sVar14);
						iLocal_1032 = 1;
					}
				}
				iVar27 = 1;
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
				{
					iVar12 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 1);
					if (unk_0xD3FACCDA4D66AEAD(iVar12))
					{
						if (unk_0x1F1B2B6E500380C5(iVar12, 0))
						{
							iVar28 = unk_0x705BC1BB91F530B5(iVar12);
							if ((((((((!func_61(iVar28) || func_60(iVar12)) || func_59(iVar12)) || unk_0x29626AAD56D23B62(iVar12)) || ((!unk_0x0778B61C8A904D0B(iVar28) && !unk_0xBFD32C1D4D54E09B(iVar28)) && !unk_0xA727EEDD175A1189(iVar28))) || iVar28 == joaat("monster")) || unk_0x601CCD1205C6523F(iVar12)) || unk_0x0E3B720DBDB92515(iVar12)) || (unk_0xF580F0607D97E33F(unk_0xA0081090911D13E5()) && unk_0xA96867DD0A63C62C(joaat("taxi_procedural")) > 0))
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
				if (((((((((unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && (func_219(unk_0x5E6FDC4F3A8C8EDE(unk_0xA0081090911D13E5()), Local_402.f_29.f_68, 90f) || unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))) && unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B())) && func_218()) && !unk_0x12AE3D700F6A2545(unk_0xA0081090911D13E5())) && !unk_0x69FEFE28E1352842(unk_0xA0081090911D13E5())) && !unk_0x77B21D2C209C7D47(unk_0xA0081090911D13E5(), 2)) && !func_222()) && (iVar24 == iLocal_672 || iVar24 == 145)) && iVar27)
				{
					if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()) || (unk_0xAD21C77209FD2024(sVar14) || !unk_0x346FAFE6C319D5AB(sVar14)))
					{
						if (func_150(iLocal_656, 1))
						{
							func_66(&iLocal_656);
							iLocal_1032 = 0;
							Local_402.f_3 = 2;
						}
						func_216(47, 0);
						func_211(47, 0);
						Local_402.f_112 = unk_0x07BE5BF18FEF759E(Var15, "v_garagem_sp");
						if (unk_0x72C176FA688CE74D(Local_402.f_112))
						{
							if (!unk_0x319560E9F4C27299(Local_402.f_112))
							{
								if ((unk_0xFDE3C5D948890F7C() % 10) == 0)
								{
									unk_0x493EEE1A031FD768(Local_402.f_112);
								}
							}
							StringCopy(&Global_32498, "v_garagem_sp", 32);
						}
						if (!iLocal_1031 && !unk_0x9726BE1252F8F0B6())
						{
							if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
							{
								iVar29 = func_209(Local_402.f_0);
								func_58(&Var30, iVar29);
								Var18 = { Var30 };
								unk_0x639927C5DE78E8D7(Var18, 20f, 0);
							}
							else
							{
								unk_0x639927C5DE78E8D7(Var21 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_1031 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1031 && unk_0x9726BE1252F8F0B6())
					{
						unk_0x2E1E57681BD2050A();
						iLocal_1031 = 0;
					}
					iLocal_1032 = 0;
					func_66(&iLocal_656);
					unk_0x04269E768DDAF940(sVar14);
					Local_402.f_3 = 0;
				}
				break;
			
			case 2:
				func_216(47, 0);
				func_211(47, 0);
				unk_0xD74A648A7073D681(8);
				Global_68446.f_577 = 1;
				Global_68446.f_578 = { Local_402.f_29.f_55 };
				iLocal_1012 = unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B());
				unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
				unk_0x645BA9420353EC0E(unk_0xA0081090911D13E5(), 0, 0);
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
				unk_0x943A052E20E9C2CE(0);
				unk_0x627D428B266FEDCA(0);
				unk_0xF0B830D304A5232C(unk_0x0C1D3C552325765B());
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					iVar12 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
					if (unk_0xD3FACCDA4D66AEAD(iVar12) && unk_0x1F1B2B6E500380C5(iVar12, 0))
					{
						if (func_219(unk_0x5E6FDC4F3A8C8EDE(iVar12), Local_402.f_29.f_68, 90f))
						{
							iLocal_1034 = 0;
						}
						else
						{
							iLocal_1034 = 1;
						}
						unk_0xC2407AC016215F2D(iVar12, 1, 1, 1, 1, 1, 1, 0, 0);
						unk_0xC6C0752EE78174C2(Local_546.f_86[0 /*6*/], 20f, 0);
						unk_0x30822041FD942595(Local_546.f_86[0 /*6*/], 20f, 0);
						unk_0xEE1FF61B97C76DFD(Local_546.f_86[0 /*6*/], 7f);
						unk_0x27327EB62D93CDBA(iVar12, Local_546.f_86[0 /*6*/], 1, 0, 0, 1);
						if (iLocal_1034 && !unk_0xD05DBB55CBEF6ACF(unk_0xA0081090911D13E5()))
						{
							unk_0x10BB9EA2ADBCF0F3(iVar12, (Local_546.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0x10BB9EA2ADBCF0F3(iVar12, Local_546.f_86[0 /*6*/].f_3.f_2);
						}
						if (unk_0xD05DBB55CBEF6ACF(unk_0xA0081090911D13E5()))
						{
							unk_0xC874C506F7527F84(unk_0xA0081090911D13E5(), 0, 0, -1);
							unk_0x4519324BAE580305(unk_0xA0081090911D13E5(), 1);
						}
						unk_0x74207974B5483203(iVar12);
					}
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
					func_203(1, 1, 1, 0);
					func_202(&(Local_546[1 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 3;
				}
				else
				{
					if (unk_0xD3FACCDA4D66AEAD(iLocal_1027) && !unk_0x912AD5A10E7633F0(iLocal_1027, 0))
					{
						if (unk_0x18C670321BC98FDA(iLocal_1027) && unk_0x687CB62D355FD7FD(iLocal_1027, 1))
						{
							unk_0x615DE34FC732CF11(&iLocal_1027);
						}
					}
					iLocal_1027 = unk_0x525584039F375488();
					if ((((unk_0xD3FACCDA4D66AEAD(iLocal_1027) && unk_0x1F1B2B6E500380C5(iLocal_1027, 0)) && !unk_0xFC4346F9DE2AB4AE(unk_0x705BC1BB91F530B5(iLocal_1027))) && !unk_0x1E3C80E7C4B8041B(unk_0x705BC1BB91F530B5(iLocal_1027))) && !unk_0xE3C6E31B7236489F(unk_0x705BC1BB91F530B5(iLocal_1027)))
					{
						if (!unk_0x18C670321BC98FDA(iLocal_1027))
						{
							unk_0x7B17650F15A8876D(iLocal_1027, 0, 0);
						}
						if (unk_0xD3FACCDA4D66AEAD(iLocal_1027) && unk_0x1F1B2B6E500380C5(iLocal_1027, 0))
						{
							if (!bVar51)
							{
								if (unk_0xFD4DDA3E1EF89C67(iLocal_1027, Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0))
								{
									bVar51 = true;
								}
							}
							if (!bVar51)
							{
								fVar52 = unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(iLocal_1027, 1), Local_546[0 /*15*/]);
								if (fVar52 < (5f * 5f))
								{
									bVar51 = true;
								}
							}
							if (bVar51)
							{
								iVar53 = func_46(24);
								if (func_201(&Local_776, 24))
								{
									func_196(&Local_776, func_375());
									if (unk_0xD3FACCDA4D66AEAD(iVar53))
									{
										unk_0xEFA1F34A28EE763C(&iVar53);
									}
								}
								if (Local_402.f_0 == 21)
								{
									unk_0x0B17BC5D018E224B(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
									func_194(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_402.f_0 == 22)
								{
									unk_0x0B17BC5D018E224B(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
									func_194(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_402.f_0 == 23)
								{
									unk_0x0B17BC5D018E224B(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
									func_194(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								unk_0x74207974B5483203(iLocal_1027);
							}
						}
					}
					else
					{
						iLocal_1027 = 0;
					}
					Var54 = { Local_402.f_29 * Vector(2f, 2f, 2f) + Local_402.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var57 = { Local_402.f_29 * Vector(1f, 1f, 1f) + Local_402.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_402.f_29, Var54.f_0, Var54.f_1, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0xB5BF1B58C833F7A9(0, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Var54.f_0, Var54.f_1, Local_402.f_29.f_2, Var57.f_0, Var57.f_1, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0xB5BF1B58C833F7A9(0, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Var57.f_0, Var57.f_1, Local_402.f_29.f_2, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0xB5BF1B58C833F7A9(0, 2))
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
						switch (unk_0xB5BF1B58C833F7A9(0, 6))
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
					unk_0xC6C0752EE78174C2(Local_546.f_73[0 /*4*/], 20f, 0);
					unk_0x30822041FD942595(Local_546.f_86[0 /*6*/], 20f, 0);
					unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Local_546.f_73[0 /*4*/], 1, 0, 0, 1);
					unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), Local_546.f_73[0 /*4*/].f_3);
					iLocal_661 = unk_0x6194C3993E6BB2A5(Local_546.f_73[0 /*4*/], 0f, 0f, Local_546.f_73[0 /*4*/].f_3, 2);
					unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0, 1148846080, 0);
					func_203(1, 1, 1, 0);
					func_202(&(Local_546[0 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 4;
				}
				Local_402.f_112 = unk_0x07BE5BF18FEF759E(Var15, "v_garagem_sp");
				if (unk_0x72C176FA688CE74D(Local_402.f_112))
				{
					if (!unk_0x319560E9F4C27299(Local_402.f_112))
					{
						unk_0x493EEE1A031FD768(Local_402.f_112);
					}
					StringCopy(&Global_32498, "v_garagem_sp", 32);
				}
				if (!iLocal_1031)
				{
					if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
					{
						iVar60 = func_209(Local_402.f_0);
						func_58(&Var61, iVar60);
						Var18 = { Var61 };
						unk_0x639927C5DE78E8D7(Var18, 20f, 0);
					}
					else
					{
						unk_0x639927C5DE78E8D7(Var21, 20f, 0);
					}
				}
				unk_0x88B0F0DC270164B7(&(Local_674.f_9), 25);
				func_190(198.0043f, -999.7775f, -100f, 50f, 0);
				func_108(Local_402.f_0);
				func_108(26);
				func_108(29);
				func_108(32);
				func_108(28);
				func_108(31);
				func_108(34);
				func_108(27);
				func_108(30);
				func_108(33);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1033 = 0;
				break;
			
			case 4:
				bVar82 = true;
				if (!unk_0x9726BE1252F8F0B6())
				{
				}
				else if (unk_0x66491EA3F355967D())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0x72C176FA688CE74D(Local_402.f_112))
				{
					if (!unk_0x319560E9F4C27299(Local_402.f_112))
					{
						unk_0x493EEE1A031FD768(Local_402.f_112);
					}
					StringCopy(&Global_32498, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = unk_0x07BE5BF18FEF759E(Var15, "v_garagem_sp");
				}
				if (func_189())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110) && unk_0xD369B57993C85A50(Local_402.f_110))
				{
					if (unk_0xE006B634C7488210(Local_402.f_110))
					{
						bVar82 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else if (unk_0x0D2E3F017CBCB8A8(Local_402.f_111) && unk_0xD369B57993C85A50(Local_402.f_111))
				{
					if (unk_0xE006B634C7488210(Local_402.f_111))
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
				if (unk_0x74CC94B98FBFE813(iLocal_661))
				{
					fVar83 = unk_0xA84C8086E7377CD5(iLocal_661);
					if (fVar83 < 0.4f)
					{
						bVar82 = false;
					}
				}
				if (bVar82)
				{
					unk_0xF215E3B07B7990BC(800);
					Local_402.f_3 = 5;
				}
				break;
			
			case 5:
				if (unk_0x2C22E7D1C80A53EF())
				{
					iVar84 = unk_0x2657E29E0DD8087E();
					unk_0xAB16AADE80707D47(iVar84, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0x86F350F5CCA04497(iVar84, "hold", (2250f / 1000f));
					func_203(0, 1, 1, 0);
					unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
					if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110))
					{
						unk_0x07553DAC96600443(Local_402.f_110, 0);
						unk_0x50C86ABC13A071F8(Local_402.f_110, 0);
					}
					if (unk_0x0D2E3F017CBCB8A8(Local_402.f_111))
					{
						unk_0x07553DAC96600443(Local_402.f_111, 0);
						unk_0x50C86ABC13A071F8(Local_402.f_111, 0);
					}
					if (unk_0xD3FACCDA4D66AEAD(iLocal_1037))
					{
						unk_0x591413670A1EF437(iLocal_1037, 1, 0);
						unk_0xBB21B5C3111E5F85(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
					unk_0xD74A648A7073D681(8);
					if (unk_0x74CC94B98FBFE813(iLocal_661))
					{
						unk_0x5FB710E6CD88134B(iLocal_661);
					}
					iLocal_661 = -1;
					unk_0xB0993C95A7DBF879(unk_0xA0081090911D13E5());
					unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), 194.5394f, -1026.32f, -100f, 1, 0, 0, 1);
					unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), 334.1665f);
					unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), 1);
					unk_0x8BDD755F07063522(0f);
					unk_0x2A7D387AD73F1D15(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 6;
				}
				break;
			
			case 6:
				func_188(Local_402.f_0);
				if (unk_0x2C22E7D1C80A53EF() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					unk_0x04269E768DDAF940(sVar14);
					func_187();
					if (unk_0x9726BE1252F8F0B6())
					{
						unk_0x2E1E57681BD2050A();
					}
					unk_0xA0303A6B8C99DD6A(800);
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
					unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), 0);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					Local_402.f_3 = 10;
				}
				break;
			
			case 3:
				func_188(Local_402.f_0);
				bVar85 = true;
				if (!unk_0x9726BE1252F8F0B6())
				{
				}
				else if (unk_0x66491EA3F355967D())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0x72C176FA688CE74D(Local_402.f_112))
				{
					if (!unk_0x319560E9F4C27299(Local_402.f_112))
					{
						unk_0x493EEE1A031FD768(Local_402.f_112);
					}
					StringCopy(&Global_32498, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = unk_0x07BE5BF18FEF759E(Var15, "v_garagem_sp");
				}
				if (func_189())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110) && unk_0xD369B57993C85A50(Local_402.f_110))
				{
					if (unk_0xE006B634C7488210(Local_402.f_110))
					{
						bVar85 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else if (unk_0x0D2E3F017CBCB8A8(Local_402.f_111) && unk_0xD369B57993C85A50(Local_402.f_111))
				{
					if (unk_0xE006B634C7488210(Local_402.f_111))
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
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					Var86 = { 0f, 0f, 0f };
					Var86.f_3 = 0f;
					func_179(unk_0xA0081090911D13E5(), Local_546.f_86[0 /*6*/], Local_546.f_66[0 /*3*/], ((Local_546[1 /*15*/].f_14 * 1000f) - 500f), Var86, 2, &fVar13);
				}
				if (bVar85)
				{
					func_187();
					unk_0xC1B1E9A034A63A62(0);
					unk_0xF215E3B07B7990BC(800);
					Local_402.f_3 = 35;
				}
				break;
			
			case 35:
				bVar90 = true;
				func_188(Local_402.f_0);
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546.f_61[1] * 1000f))
				{
					bVar90 = false;
				}
				if (bVar90)
				{
					func_187();
					func_203(0, 1, 1, 0);
					unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
					if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110))
					{
						unk_0x07553DAC96600443(Local_402.f_110, 0);
						unk_0x50C86ABC13A071F8(Local_402.f_110, 0);
					}
					if (unk_0x0D2E3F017CBCB8A8(Local_402.f_111))
					{
						unk_0x07553DAC96600443(Local_402.f_111, 0);
						unk_0x50C86ABC13A071F8(Local_402.f_111, 0);
					}
					if (unk_0xD3FACCDA4D66AEAD(iLocal_1037))
					{
						unk_0x591413670A1EF437(iLocal_1037, 1, 0);
						unk_0xBB21B5C3111E5F85(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
					unk_0xD74A648A7073D681(8);
					if (unk_0x9726BE1252F8F0B6())
					{
						unk_0x2E1E57681BD2050A();
					}
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
					{
						iVar12 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
						if (unk_0xD3FACCDA4D66AEAD(iVar12) && unk_0x1F1B2B6E500380C5(iVar12, 0))
						{
							iVar91 = func_209(Local_402.f_0);
							func_58(&Var92, iVar91);
							unk_0x27327EB62D93CDBA(iVar12, Var92, 1, 0, 0, 1);
							unk_0x10BB9EA2ADBCF0F3(iVar12, Var92.f_3);
							unk_0x4877CFC15DCA5DED(iVar12, 1);
							unk_0x6F40E1EE32FE6A5E(iVar12, 0, 1, 0);
							unk_0x028D0662CAA67D4F(iVar12, 4);
							unk_0x6E3EB6601FEB3A1C(iVar12, 1, 0);
							unk_0x6E3EB6601FEB3A1C(iVar12, 0, 0);
							unk_0xF3E3BC1FD7FDE221(iVar12, 0);
							unk_0xC2407AC016215F2D(iVar12, 0, 0, 0, 0, 0, 0, 0, 0);
							unk_0xAB74B3F15710FF7D(unk_0xA0081090911D13E5(), iVar12, 0);
							unk_0xBB21B5C3111E5F85(iVar12, 0);
							Var113.f_9 = 49;
							Var113.f_59 = 2;
							func_32(iVar12, &Var113);
							func_109(iVar91, &Var113, 0f, 0f, 0f, -1f, 145);
							func_30(iVar91, iVar12, 1);
							func_178(iVar12);
						}
						unk_0x8BDD755F07063522(0f);
						unk_0x2A7D387AD73F1D15(0f, 1065353216);
					}
					iVar191 = unk_0xC204507743BB34BC(unk_0xA0081090911D13E5(), &uVar0, -1);
					iVar192 = 0;
					while (iVar192 < iVar191)
					{
						if ((unk_0xD3FACCDA4D66AEAD(uVar0[iVar192]) && !unk_0xEB361B4BD195A4D3(uVar0[iVar192])) && unk_0xCD62786CA98E5AFD(uVar0[iVar192], unk_0x67D12A4DCB18DE93(unk_0x0C1D3C552325765B())))
						{
							unk_0xB8EF5851A40C2867(uVar0[iVar192], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar192++;
					}
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					unk_0xA0303A6B8C99DD6A(800);
					Local_402.f_3 = 10;
				}
				break;
			
			case 10:
				if (unk_0x83666F9FB8FEBD4B() < 7000 || !Global_101553.f_18972.f_4800)
				{
					if (!Global_101553.f_18972.f_4800)
					{
						if (iLocal_1013 == 0)
						{
							func_153("CAR_GAR_05", -1);
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
							func_153("CAR_GAR_06", -1);
							StringCopy(&cLocal_1023, "CAR_GAR_06", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								Global_101553.f_18972.f_4800 = 1;
							}
						}
					}
					else
					{
						func_153("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_1023, "CAR_GAR_EXIT", 16);
						bVar11 = true;
					}
				}
				else
				{
					Global_101553.f_18972.f_4800 = 1;
				}
				iVar193 = 0;
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					if (iLocal_656 != -1)
					{
						func_66(&iLocal_656);
					}
					iVar12 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
					if (unk_0xD3FACCDA4D66AEAD(iVar12) && unk_0x1F1B2B6E500380C5(iVar12, 0))
					{
						if (unk_0xD75C122E26DC1917(iVar12) || unk_0xD05DBB55CBEF6ACF(unk_0xA0081090911D13E5()))
						{
							if (!(unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) && !unk_0x4745637EEB85132D(unk_0xA0081090911D13E5())))
							{
								if ((((unk_0xBC901F1C15EF7F84(0, 71) != 0f || unk_0x2A57AED61E15C7C7(0, 71)) || unk_0x7F6103BD34B839B0(0, 71)) || unk_0x5E429C409D2CBD68(0, 71)) || unk_0xFEB2816B7220E998(0, 71))
								{
									iVar193 = 1;
								}
								if ((((unk_0xBC901F1C15EF7F84(0, 72) != 0f || unk_0x2A57AED61E15C7C7(0, 72)) || unk_0x7F6103BD34B839B0(0, 72)) || unk_0x5E429C409D2CBD68(0, 72)) || unk_0xFEB2816B7220E998(0, 72))
								{
									iVar193 = 1;
								}
							}
						}
					}
				}
				else
				{
					unk_0xA9DC3948106CC3E4(sVar14);
					if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, 1, 0) && func_219(unk_0x5E6FDC4F3A8C8EDE(unk_0xA0081090911D13E5()), 180f, 90f))
					{
						if (iLocal_655 != -1)
						{
							func_66(&iLocal_655);
						}
						if (iLocal_656 == -1)
						{
							func_155(&iLocal_656, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_655 != -1 && !iLocal_656 == -1)
						{
							if (func_150(iLocal_656, 1))
							{
								func_66(&iLocal_656);
								iVar193 = 1;
							}
						}
					}
					else if (iLocal_656 != -1)
					{
						func_66(&iLocal_656);
					}
				}
				if (iLocal_1016)
				{
					iVar193 = 1;
				}
				if (iVar193 && !func_177())
				{
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || iLocal_1016)
					{
						unk_0xC1B1E9A034A63A62(0);
						unk_0x639927C5DE78E8D7(Local_546.f_73[2 /*4*/], 20f, 0);
						if (iLocal_656 != -1)
						{
							func_66(&iLocal_656);
						}
						Local_402.f_3 = 12;
					}
					else if (unk_0xAD21C77209FD2024(sVar14))
					{
						sLocal_1035 = "";
						switch (unk_0xB5BF1B58C833F7A9(0, 6))
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
						iLocal_661 = unk_0x6194C3993E6BB2A5(Local_546.f_73[1 /*4*/], 0f, 0f, Local_546.f_73[1 /*4*/].f_3, 2);
						unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0, 1148846080, 0);
						func_203(1, 1, 1, 0);
						func_202(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
						unk_0x639927C5DE78E8D7(Local_546.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_656 != -1)
						{
							func_66(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
					else if (!unk_0x346FAFE6C319D5AB(sVar14))
					{
						unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Local_546.f_73[1 /*4*/], 1, 0, 0, 1);
						unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), Local_546.f_73[1 /*4*/].f_3);
						func_203(1, 1, 1, 0);
						func_202(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
						unk_0x639927C5DE78E8D7(Local_546.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_656 != -1)
						{
							func_66(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar194 = true;
				if (!unk_0x9726BE1252F8F0B6())
				{
				}
				else if (unk_0x66491EA3F355967D())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (func_189())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110) && unk_0xD369B57993C85A50(Local_402.f_110))
				{
					if (unk_0xE006B634C7488210(Local_402.f_110))
					{
						bVar194 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else if (unk_0x0D2E3F017CBCB8A8(Local_402.f_111) && unk_0xD369B57993C85A50(Local_402.f_111))
				{
					if (unk_0xE006B634C7488210(Local_402.f_111))
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
				if (unk_0x74CC94B98FBFE813(iLocal_661))
				{
					fVar195 = unk_0xA84C8086E7377CD5(iLocal_661);
					if (fVar195 < 0.4f)
					{
						bVar194 = false;
					}
				}
				if (bVar194)
				{
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					unk_0xF215E3B07B7990BC(800);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 13;
				}
				break;
			
			case 12:
				unk_0xABC36CFE4F3421A0(0, 75, 1);
				if (unk_0x83666F9FB8FEBD4B() > 500)
				{
					iVar196 = func_176();
					if ((iVar196 == 21 || iVar196 == 22) || iVar196 == 23)
					{
						Var197.f_9 = 49;
						Var197.f_59 = 2;
						func_109(iVar196, &Var197, 0f, 0f, 0f, -1f, 145);
						func_111(iVar196);
					}
					else if (iVar196 != -1)
					{
						if (!iLocal_1016)
						{
							func_381(iVar196, 0);
							func_111(iVar196);
						}
					}
					unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
					unk_0x645BA9420353EC0E(unk_0xA0081090911D13E5(), 0, 0);
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
					unk_0x04269E768DDAF940(sVar14);
					unk_0xF215E3B07B7990BC(800);
					Local_402.f_3 = 13;
				}
				break;
			
			case 13:
				if (unk_0x2C22E7D1C80A53EF())
				{
					iVar275 = unk_0x2657E29E0DD8087E();
					unk_0xAB16AADE80707D47(iVar275, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0x86F350F5CCA04497(iVar275, "hold", (2250f / 1000f));
					unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
					if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110))
					{
						unk_0x07553DAC96600443(Local_402.f_110, 0);
						unk_0x50C86ABC13A071F8(Local_402.f_110, 0);
					}
					if (unk_0x0D2E3F017CBCB8A8(Local_402.f_111))
					{
						unk_0x07553DAC96600443(Local_402.f_111, 0);
						unk_0x50C86ABC13A071F8(Local_402.f_111, 0);
					}
					if (unk_0xD3FACCDA4D66AEAD(iLocal_1037))
					{
						unk_0x591413670A1EF437(iLocal_1037, 1, 0);
						unk_0xBB21B5C3111E5F85(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
					unk_0xD74A648A7073D681(8);
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
					{
						if (!iLocal_1016)
						{
							iVar12 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
							if (unk_0xD3FACCDA4D66AEAD(iVar12) && unk_0x1F1B2B6E500380C5(iVar12, 0))
							{
								unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
								unk_0x27327EB62D93CDBA(iVar12, Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
								unk_0x10BB9EA2ADBCF0F3(iVar12, Local_402.f_29.f_77[1]);
								unk_0x74207974B5483203(iVar12);
							}
						}
					}
					else
					{
						if (unk_0x74CC94B98FBFE813(iLocal_661))
						{
							unk_0x5FB710E6CD88134B(iLocal_661);
						}
						iLocal_661 = -1;
						unk_0xB0993C95A7DBF879(unk_0xA0081090911D13E5());
						unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
						unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), Local_402.f_29.f_77[1]);
					}
					unk_0x8BDD755F07063522(0f);
					unk_0x2A7D387AD73F1D15(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 14;
				}
				break;
			
			case 14:
				if (unk_0x2C22E7D1C80A53EF() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					bVar276 = true;
					if (iLocal_1016)
					{
						unk_0x491067A8E906F22D(iLocal_1017);
						if (unk_0x2C1B5A0D3E233FC3(iLocal_1017))
						{
							iVar277 = unk_0xE044C77D0FC9DB66(iLocal_1017, Local_402.f_29.f_70[0 /*3*/], Local_402.f_29.f_77[0], 1, 1);
							if (iLocal_1017 == joaat("windsor"))
							{
								unk_0xB9C9103C26C01C4F(iVar277, 0);
							}
							if (unk_0xD3FACCDA4D66AEAD(iVar277) && unk_0x1F1B2B6E500380C5(iVar277, 0))
							{
								unk_0xC7E3E32FBCC0DCD6(unk_0xA0081090911D13E5(), iVar277, -1);
								unk_0xA353FBC64C96C09F(iVar277, 0f);
								unk_0x2C07692AA3545079(iLocal_1017);
								if (func_112(iLocal_1017))
								{
									switch (iLocal_1017)
									{
										case joaat("marshall"):
											unk_0xB9C9103C26C01C4F(iVar277, iLocal_651);
											break;
										}
								}
								unk_0x615DE34FC732CF11(&iVar277);
							}
							iLocal_1016 = 0;
						}
						else
						{
							bVar276 = false;
						}
					}
					if (!unk_0x9726BE1252F8F0B6())
					{
					}
					else if (unk_0x66491EA3F355967D())
					{
					}
					else
					{
						bVar276 = false;
					}
					if (bVar276)
					{
						if (unk_0xD3FACCDA4D66AEAD(iLocal_1027) && unk_0x1F1B2B6E500380C5(iLocal_1027, 0))
						{
							iVar278 = func_46(24);
							if (func_201(&Local_776, 24))
							{
								func_196(&Local_776, func_375());
								if (unk_0xD3FACCDA4D66AEAD(iVar278))
								{
									unk_0xEFA1F34A28EE763C(&iVar278);
								}
							}
							if (Local_402.f_0 == 21)
							{
								unk_0x0B17BC5D018E224B(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
								unk_0x27327EB62D93CDBA(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
								unk_0x10BB9EA2ADBCF0F3(iLocal_1027, 154.4846f);
								func_194(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_402.f_0 == 22)
							{
								unk_0x0B17BC5D018E224B(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
								unk_0x27327EB62D93CDBA(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
								unk_0x10BB9EA2ADBCF0F3(iLocal_1027, 319.6985f);
								func_194(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_402.f_0 == 23)
							{
								unk_0x0B17BC5D018E224B(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
								unk_0x27327EB62D93CDBA(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
								unk_0x10BB9EA2ADBCF0F3(iLocal_1027, 270.8741f);
								func_194(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							unk_0x74207974B5483203(iLocal_1027);
						}
						if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
						{
							iVar12 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
							if (unk_0xD3FACCDA4D66AEAD(iVar12) && unk_0x1F1B2B6E500380C5(iVar12, 0))
							{
								unk_0x27327EB62D93CDBA(iVar12, Local_546.f_66[1 /*3*/], 1, 0, 0, 1);
								unk_0x10BB9EA2ADBCF0F3(iVar12, Local_402.f_29.f_77[0]);
								unk_0x74207974B5483203(iVar12);
								if ((iLocal_1017 == joaat("monster") || iLocal_1017 == joaat("marshall")) || iLocal_1017 == joaat("rhino"))
								{
									unk_0xB6EC3F3CD188EFCE(iVar12, false);
								}
								else
								{
									unk_0xB6EC3F3CD188EFCE(iVar12, true);
								}
								if (unk_0xD05DBB55CBEF6ACF(unk_0xA0081090911D13E5()))
								{
									unk_0xC874C506F7527F84(unk_0xA0081090911D13E5(), 0, 0, -1);
									unk_0x4519324BAE580305(unk_0xA0081090911D13E5(), 1);
								}
								unk_0xF3E3BC1FD7FDE221(iVar12, 1);
								func_170(func_375(), &iVar12, 3, 1);
							}
							unk_0xA0303A6B8C99DD6A(800);
							func_203(1, 1, 1, 0);
							func_202(&(Local_546[3 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
							iLocal_1034 = 0;
							iLocal_1036 = -1;
							Local_402.f_3 = 15;
						}
						else
						{
							unk_0x04269E768DDAF940(sVar14);
							func_187();
							unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
							if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110))
							{
								unk_0x07553DAC96600443(Local_402.f_110, 0);
								unk_0x50C86ABC13A071F8(Local_402.f_110, 0);
							}
							if (unk_0x0D2E3F017CBCB8A8(Local_402.f_111))
							{
								unk_0x07553DAC96600443(Local_402.f_111, 0);
								unk_0x50C86ABC13A071F8(Local_402.f_111, 0);
							}
							if (unk_0xD3FACCDA4D66AEAD(iLocal_1037))
							{
								unk_0x591413670A1EF437(iLocal_1037, 1, 0);
								unk_0xBB21B5C3111E5F85(iLocal_1037, 0);
								iLocal_1037 = 0;
							}
							unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
							unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
							unk_0xD74A648A7073D681(8);
							unk_0xB0993C95A7DBF879(unk_0xA0081090911D13E5());
							unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
							unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), Local_402.f_29.f_77[1]);
							unk_0xA0303A6B8C99DD6A(800);
							unk_0xC1B1E9A034A63A62(0);
							func_190(198.0043f, -999.7775f, -100f, 50f, 0);
							unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
							Local_402.f_3 = 16;
						}
						if (Local_402.f_3 != 16)
						{
							unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
						}
						unk_0x943A052E20E9C2CE(0);
						unk_0x627D428B266FEDCA(0);
						unk_0xC1B1E9A034A63A62(0);
						unk_0x8BDD755F07063522(0f);
						unk_0x2A7D387AD73F1D15(0f, 1065353216);
						iVar279 = unk_0xC204507743BB34BC(unk_0xA0081090911D13E5(), &uVar0, -1);
						iVar280 = 0;
						while (iVar280 < iVar279)
						{
							if ((unk_0xD3FACCDA4D66AEAD(uVar0[iVar280]) && !unk_0xEB361B4BD195A4D3(uVar0[iVar280])) && unk_0xCD62786CA98E5AFD(uVar0[iVar280], unk_0x67D12A4DCB18DE93(unk_0x0C1D3C552325765B())))
							{
								if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
								{
									iVar12 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
									if ((unk_0xD3FACCDA4D66AEAD(iVar12) && unk_0x1F1B2B6E500380C5(iVar12, 0)) && unk_0x8EF0E5E933BE561D(iVar12) > iVar280)
									{
										unk_0xC7E3E32FBCC0DCD6(uVar0[iVar280], iVar12, iVar280);
									}
								}
								else
								{
									unk_0xB8EF5851A40C2867(uVar0[iVar280], Local_402.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar280++;
						}
						unk_0xD74A648A7073D681(8);
						iLocal_1033 = 0;
					}
				}
				break;
			
			case 15:
				bVar281 = true;
				if (!unk_0x9726BE1252F8F0B6())
				{
				}
				else if (unk_0x66491EA3F355967D())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (func_189())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110) && unk_0xD369B57993C85A50(Local_402.f_110))
				{
					if (unk_0xE006B634C7488210(Local_402.f_110))
					{
						bVar281 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else if (unk_0x0D2E3F017CBCB8A8(Local_402.f_111) && unk_0xD369B57993C85A50(Local_402.f_111))
				{
					if (unk_0xE006B634C7488210(Local_402.f_111))
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
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					func_179(unk_0xA0081090911D13E5(), Local_546.f_86[1 /*6*/], Local_546.f_66[1 /*3*/], ((Local_546[3 /*15*/].f_14 * 1000f) - 500f), Local_546.f_73[2 /*4*/], 3, &fVar13);
				}
				if (iLocal_1036 < 1 && func_169(unk_0xA0081090911D13E5(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_1036 == 0)
					{
						func_190(198.0043f, -999.7775f, -100f, 50f, 0);
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
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
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
				if (unk_0x72C176FA688CE74D(Local_402.f_112))
				{
					unk_0xBC4C3BADA8503A20(Local_402.f_112);
				}
				StringCopy(&Global_32498, "", 32);
				if (unk_0x9726BE1252F8F0B6())
				{
					unk_0x2E1E57681BD2050A();
				}
				func_168(47, 1);
				func_166(47, 1);
				Global_68446.f_577 = 0;
				if (unk_0x2C22E7D1C80A53EF() || unk_0x44F90FBF2C1E8021())
				{
					unk_0xA0303A6B8C99DD6A(250);
				}
				unk_0xC1B1E9A034A63A62(0);
				unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
				if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110))
				{
					unk_0x07553DAC96600443(Local_402.f_110, 0);
					unk_0x50C86ABC13A071F8(Local_402.f_110, 0);
				}
				if (unk_0x0D2E3F017CBCB8A8(Local_402.f_111))
				{
					unk_0x07553DAC96600443(Local_402.f_111, 0);
					unk_0x50C86ABC13A071F8(Local_402.f_111, 0);
				}
				if (unk_0xD3FACCDA4D66AEAD(iLocal_1037))
				{
					unk_0x591413670A1EF437(iLocal_1037, 1, 0);
					unk_0xBB21B5C3111E5F85(iLocal_1037, 0);
					iLocal_1037 = 0;
				}
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					iVar12 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
					if (unk_0xD3FACCDA4D66AEAD(iVar12) && unk_0x1F1B2B6E500380C5(iVar12, 0))
					{
						unk_0x27327EB62D93CDBA(iVar12, Local_546.f_73[2 /*4*/], 1, 0, 0, 1);
						unk_0x10BB9EA2ADBCF0F3(iVar12, Local_546.f_73[2 /*4*/].f_3);
						unk_0x74207974B5483203(iVar12);
						unk_0x8BDD755F07063522(0f);
						unk_0x2A7D387AD73F1D15(0f, 1065353216);
					}
				}
				unk_0x943A052E20E9C2CE(1);
				unk_0x627D428B266FEDCA(1);
				func_203(0, 1, 1, 0);
				unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
				if (iLocal_1012 > 0)
				{
					unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), iLocal_1012, 0);
					unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
				}
				if (((unk_0xD3FACCDA4D66AEAD(iLocal_1027) && unk_0x18C670321BC98FDA(iLocal_1027)) && unk_0x687CB62D355FD7FD(iLocal_1027, 0)) && iLocal_1027 != func_46(24))
				{
					unk_0x615DE34FC732CF11(&iLocal_1027);
				}
				unk_0x09C86C0C5CA26B1E(&(Local_674.f_9), 25);
				iLocal_1031 = 0;
				Local_402.f_3 = 18;
				break;
			
			case 18:
				if (unk_0xB20CA7A3EE29687A())
				{
					Local_402.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_68446.f_577)
		{
			func_168(47, 1);
			func_166(47, 1);
			Global_68446.f_577 = 0;
		}
		Local_402.f_3 = 0;
		if (iLocal_656 != -1)
		{
			func_66(&iLocal_656);
		}
	}
	if (Global_68446.f_577)
	{
		unk_0x084AD48033322CE9();
		func_165();
		func_73();
		unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 1);
		unk_0xCEEF85C0FC6A898F(2, 202);
		unk_0xABC36CFE4F3421A0(0, 37, 1);
		unk_0xABC36CFE4F3421A0(0, 157, 1);
		unk_0xABC36CFE4F3421A0(0, 158, 1);
		unk_0xABC36CFE4F3421A0(0, 159, 1);
		unk_0xABC36CFE4F3421A0(0, 160, 1);
		unk_0xABC36CFE4F3421A0(0, 161, 1);
		unk_0xABC36CFE4F3421A0(0, 162, 1);
		unk_0xABC36CFE4F3421A0(0, 163, 1);
		unk_0xABC36CFE4F3421A0(0, 164, 1);
		unk_0xABC36CFE4F3421A0(0, 165, 1);
		unk_0xABC36CFE4F3421A0(0, 14, 1);
		unk_0xABC36CFE4F3421A0(0, 15, 1);
		unk_0xABC36CFE4F3421A0(0, 53, 1);
		unk_0xABC36CFE4F3421A0(0, 54, 1);
		unk_0xABC36CFE4F3421A0(0, 140, 1);
		unk_0xABC36CFE4F3421A0(0, 141, 1);
		unk_0xABC36CFE4F3421A0(0, 142, 1);
		unk_0xABC36CFE4F3421A0(0, 143, 1);
		unk_0xABC36CFE4F3421A0(0, 143, 1);
		unk_0xABC36CFE4F3421A0(0, 47, 1);
		unk_0xABC36CFE4F3421A0(0, 38, 1);
		unk_0xABC36CFE4F3421A0(0, 22, 1);
		unk_0xABC36CFE4F3421A0(0, 102, 1);
		unk_0xABC36CFE4F3421A0(0, 69, 1);
		unk_0xABC36CFE4F3421A0(0, 70, 1);
		unk_0xABC36CFE4F3421A0(0, 68, 1);
		unk_0xABC36CFE4F3421A0(0, 92, 1);
		unk_0xABC36CFE4F3421A0(0, 99, 1);
		unk_0xABC36CFE4F3421A0(0, 115, 1);
		unk_0xABC36CFE4F3421A0(0, 46, 1);
		unk_0xABC36CFE4F3421A0(0, 25, 1);
	}
	if (!bVar11 && Local_402.f_2 == 0)
	{
		if (unk_0x598A9E990F05F82C())
		{
			if (!unk_0x509383441597090D(&cLocal_1023))
			{
				if ((((func_154("WEB_VEH_INV") || func_154("WEB_VEH_FULL")) || func_154("CAR_GAR_05")) || func_154("CAR_GAR_06")) || func_154("CAR_GAR_EXIT"))
				{
					unk_0x94724F7C938EBE34(1);
				}
				StringCopy(&cLocal_1023, "", 16);
			}
		}
	}
}

void func_165()
{
	Global_17151.f_6 = 1;
}

void func_166(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_167(iParam0) };
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_31556[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_31556[Var0.f_1]), Var0.f_0);
	}
}

struct<2> func_167(var uParam0)
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

void func_168(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_167(iParam0) };
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_31551[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_31551[Var0.f_1]), Var0.f_0);
	}
}

float func_169(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	return unk_0x999A157665D69393(Var0, Param1, iParam4);
}

void func_170(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_25(iParam0) && unk_0xD3FACCDA4D66AEAD(*iParam1)) && unk_0x1F1B2B6E500380C5(*iParam1, 0))
	{
		if (iParam2 > Global_101553.f_1991.f_539.f_1635)
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
		if (unk_0x141913B932CAECD6(*iParam1) != 0)
		{
			unk_0xE1A095B0BA3A0EA3(*iParam1, 0);
		}
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/] = unk_0x705BC1BB91F530B5(*iParam1);
		if (unk_0xBFD07924C8EBEB59(*iParam1, &iVar1))
		{
			Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x705BC1BB91F530B5(iVar1);
		}
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xDBCF006BC0FE82D2(*iParam1);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0xC6FE0F623405BFA8(*iParam1);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0xDC21CA8351C75F1F(*iParam1, 1);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0xDC21CA8351C75F1F(*iParam1, 2);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0xDC21CA8351C75F1F(*iParam1, 3);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0xDC21CA8351C75F1F(*iParam1, 4);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0xDC21CA8351C75F1F(*iParam1, 5);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0xDC21CA8351C75F1F(*iParam1, 6);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0xDC21CA8351C75F1F(*iParam1, 7);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0xDC21CA8351C75F1F(*iParam1, 8);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0xDC21CA8351C75F1F(*iParam1, 9);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0xDC21CA8351C75F1F(*iParam1, 10);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0xDC21CA8351C75F1F(*iParam1, 11);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0xDC21CA8351C75F1F(*iParam1, 12);
		if (unk_0xE7D026C4E15E6E7F(*iParam1, 0))
		{
			iVar2 = unk_0x851DDA9C534FCA13(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x6327B643497275A6();
		StringCopy(&(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x65FDE11354F074FF(*iParam1), 16);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x35FA749428DD4A65(*iParam1);
		unk_0xCAD2F245E2AC499C(*iParam1, &(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x86DEF98E95F667ED(*iParam1, &(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xC9061BC15843FFE0(*iParam1, &(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0xA2FDA679363F53A2(*iParam1);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0xB62C5DACDE4A3153(*iParam1);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0xB7F7AFF78B9F9EF6(*iParam1);
		Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x488810150C919B35(*iParam1);
		unk_0x9072FD06FAA1F250(*iParam1, &(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x00808205EBA044E7(*iParam1, 2))
		{
			unk_0x88B0F0DC270164B7(&(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x00808205EBA044E7(*iParam1, 3))
		{
			unk_0x88B0F0DC270164B7(&(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x00808205EBA044E7(*iParam1, 0))
		{
			unk_0x88B0F0DC270164B7(&(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x00808205EBA044E7(*iParam1, 1))
		{
			unk_0x88B0F0DC270164B7(&(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_101553.f_1991.f_539.f_3545[iParam0] = 10;
		if ((unk_0x50B1D75C8D874AB7(*iParam1) >= 0 && unk_0x50B1D75C8D874AB7(*iParam1) < 255) && func_173(*iParam1, 0, &uVar0))
		{
			func_34(iParam1, &(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_101553.f_24808[iParam0 /*43*/].f_40 = 1;
				Global_101553.f_24808[iParam0 /*43*/] = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/];
				Global_101553.f_24808[iParam0 /*43*/].f_3 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_101553.f_24808[iParam0 /*43*/].f_4 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_101553.f_24808[iParam0 /*43*/].f_5 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_101553.f_24808[iParam0 /*43*/].f_6 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_101553.f_24808[iParam0 /*43*/].f_10 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_101553.f_24808[iParam0 /*43*/].f_16 = !Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_101553.f_24808[iParam0 /*43*/].f_19 = { Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_101553.f_24808[iParam0 /*43*/].f_23 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_101553.f_24808[iParam0 /*43*/].f_7 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_101553.f_24808[iParam0 /*43*/].f_8 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_101553.f_24808[iParam0 /*43*/].f_9 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_101553.f_24808[iParam0 /*43*/].f_11 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_101553.f_24808[iParam0 /*43*/].f_12 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_101553.f_24808[iParam0 /*43*/].f_13 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_101553.f_24808[iParam0 /*43*/].f_14 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_101553.f_24808[iParam0 /*43*/].f_15 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_101553.f_24808[iParam0 /*43*/].f_18 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_101553.f_24808[iParam0 /*43*/].f_17 = Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_101553.f_24808[iParam0 /*43*/].f_24 = unk_0x952B48FDCC7BFAAC(*iParam1, 11) + 1;
				Global_101553.f_24808[iParam0 /*43*/].f_25 = unk_0x952B48FDCC7BFAAC(*iParam1, 12) + 1;
				Global_101553.f_24808[iParam0 /*43*/].f_26 = unk_0x952B48FDCC7BFAAC(*iParam1, 4) + 1;
				Global_101553.f_24808[iParam0 /*43*/].f_27 = unk_0x952B48FDCC7BFAAC(*iParam1, 23) + 1;
				Global_101553.f_24808[iParam0 /*43*/].f_28 = unk_0x952B48FDCC7BFAAC(*iParam1, 14) + 1;
				Global_101553.f_24808[iParam0 /*43*/].f_29 = unk_0x952B48FDCC7BFAAC(*iParam1, 16) + 1;
				Global_101553.f_24808[iParam0 /*43*/].f_30 = unk_0x952B48FDCC7BFAAC(*iParam1, 15) + 1;
				Global_101553.f_24808[iParam0 /*43*/].f_32 = unk_0x2AAC8569B67D415A(*iParam1);
				Global_101553.f_24808[iParam0 /*43*/].f_33[0] = unk_0x133955D95356A9F3(*iParam1);
				Global_101553.f_24808[iParam0 /*43*/].f_33[1] = unk_0x27E0F1C4254FE068(*iParam1, 14, 0);
				Global_101553.f_24808[iParam0 /*43*/].f_33[2] = unk_0x27E0F1C4254FE068(*iParam1, 14, 1);
				Global_101553.f_24808[iParam0 /*43*/].f_33[3] = unk_0x27E0F1C4254FE068(*iParam1, 14, 2);
				Global_101553.f_24808[iParam0 /*43*/].f_33[4] = unk_0x27E0F1C4254FE068(*iParam1, 14, 3);
				Global_101553.f_24808[iParam0 /*43*/].f_39 = unk_0x3F9519EA6CB3B018(*iParam1);
				Global_101553.f_24808[iParam0 /*43*/].f_31 = func_172(*iParam1);
				Global_101553.f_24808[iParam0 /*43*/].f_33[0] = unk_0x96349EE944BF31BC(*iParam1);
				unk_0xD61D02E08E5ABADB(*iParam1, &iVar4, &uVar5, &uVar6);
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
				func_171(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_101553.f_24808[iParam0 /*43*/].f_1));
				unk_0x8D1BC87C8AC01C5E(*iParam1, &iVar4, &uVar5);
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
				func_171(Global_101553.f_1991.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_101553.f_24808[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_171(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_133(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
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

float func_172(int iParam0)
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
	if (((unk_0xD3FACCDA4D66AEAD(iParam0) && unk_0x1F1B2B6E500380C5(iParam0, 0)) && unk_0x50B1D75C8D874AB7(iParam0) >= 0) && unk_0x50B1D75C8D874AB7(iParam0) < 255)
	{
		if (unk_0x3F9519EA6CB3B018(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x3F9519EA6CB3B018(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x3F9519EA6CB3B018(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x3F9519EA6CB3B018(iParam0) == 0)
		{
			if (unk_0xBFD32C1D4D54E09B(unk_0x705BC1BB91F530B5(iParam0)))
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

int func_173(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return 0;
	}
	if (!unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x30A854527925CD1E(unk_0x705BC1BB91F530B5(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x705BC1BB91F530B5(iParam0);
	if (!func_174(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (unk_0x29626AAD56D23B62(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0xA86CA03D9749EEB3())
	{
		if ((func_59(iParam0) && unk_0x705BC1BB91F530B5(iParam0) != joaat("sentinel2")) && unk_0x705BC1BB91F530B5(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_174(int iParam0, bool bParam1, var uParam2)
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
	if (((((!unk_0x0778B61C8A904D0B(iParam0) && !unk_0xBFD32C1D4D54E09B(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("chimera"))
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
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_175(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0xA86CA03D9749EEB3())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_175(int iParam0)
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

int func_176()
{
	int iVar0;
	
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
		if (unk_0xD3FACCDA4D66AEAD(iVar0) && unk_0x1F1B2B6E500380C5(iVar0, 0))
		{
			if (iVar0 == Global_68446.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_68446.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_68446.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_68446.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_68446.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_68446.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_68446.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_68446.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_68446.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_68446.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_68446.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_68446.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_177()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

void func_178(int iParam0)
{
	if ((unk_0xD3FACCDA4D66AEAD(iParam0) && unk_0x1F1B2B6E500380C5(iParam0, 0)) && iParam0 == Global_69351)
	{
		Global_101553.f_18972.f_5588 = 0;
		Global_69351 = 0;
	}
}

int func_179(int iParam0, struct<4> Param1, var uParam5, var uParam6, struct<3> Param7, float fParam10, struct<4> Param11, int iParam15, float fParam16)
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
		iVar12 = unk_0xF8DB47D339B8B953(uParam0, 0);
		iLocal_1037 = iVar12;
		unk_0x4877CFC15DCA5DED(iLocal_1037, 1);
		unk_0xB032923150355520(iLocal_1037, 1);
		unk_0x74207974B5483203(iLocal_1037);
		unk_0x6F40E1EE32FE6A5E(iLocal_1037, 1, 1, 0);
		if (unk_0xD05DBB55CBEF6ACF(iParam0))
		{
			unk_0xC874C506F7527F84(iParam0, 0, 0, -1);
			unk_0x4519324BAE580305(iParam0, 1);
		}
		Var13 = { unk_0xC59DF10B4FC39DF8(iLocal_1037, 1) };
		fLocal_1038 = (Var13.f_2 - Var0.f_2);
		unk_0x27327EB62D93CDBA(iLocal_1037, Var0 + Vector(-10f, 0f, 0f), 1, 0, 0, 1);
		if (unk_0x1F1B2B6E500380C5(iLocal_1037, 0))
		{
			unk_0x028D0662CAA67D4F(iLocal_1037, 3);
		}
		iLocal_1039 = unk_0xDF658EB6CA91DFBC();
		iLocal_1033 = 1;
	}
	if (iLocal_1033 == 1)
	{
		if (unk_0xD3FACCDA4D66AEAD(iLocal_1037) && unk_0x1F1B2B6E500380C5(iLocal_1037, 0))
		{
			fVar16 = unk_0xBBDA792448DB5A89(iLocal_1039);
			fVar17 = (fVar16 + fParam10);
			fVar18 = func_186(unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC()), fVar16, fVar17);
			fVar18 = (fVar18 - fVar16);
			fVar18 = (fVar18 / fParam10);
			if (iParam15 == 1)
			{
				fVar18 = func_185(fVar18);
			}
			else if (iParam15 == 2)
			{
				fVar18 = func_184(fVar18);
			}
			else if (iParam15 == 3)
			{
				fVar18 = func_182(fVar18);
			}
			fVar18 = (fVar18 * fParam10);
			fVar18 = (fVar18 + fVar16);
			unk_0xABC36CFE4F3421A0(0, 72, 1);
			unk_0xB8EF5851A40C2867(iLocal_1037, func_180(Var0 + Vector(fLocal_1038, 0f, 0f), Var6 + Vector(fLocal_1038, 0f, 0f), fVar16, fVar17, fVar18), 0, 0, 1);
			if (iLocal_1034 && !unk_0xD05DBB55CBEF6ACF(iParam0))
			{
				unk_0x4A1ACDDF793F9777(iLocal_1037, func_180((0f - Var3.f_0), (0f - Var3.f_1), (Var3.f_2 + 180f), (0f - Var9.f_0), (0f - Var9.f_1), (Var9.f_2 + 180f), fVar16, fVar17, fVar18), 2, 1);
			}
			else
			{
				if (!unk_0xEB361B4BD195A4D3(iParam0))
				{
					if (unk_0xD05DBB55CBEF6ACF(iParam0))
					{
						unk_0xF674E664795C8CB3(iParam0, 236, 1);
						unk_0xF674E664795C8CB3(iParam0, 309, 1);
					}
				}
				unk_0x4A1ACDDF793F9777(iLocal_1037, func_180(Var3, Var9, fVar16, fVar17, fVar18), 2, 1);
			}
			unk_0x591413670A1EF437(iLocal_1037, 0, 0);
			unk_0xBB21B5C3111E5F85(iLocal_1037, 1);
		}
		else
		{
			iLocal_1033 = 2;
			return 0;
		}
		if (unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC()) > (unk_0xBBDA792448DB5A89(iLocal_1039) + fParam10) && unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC()) > ((unk_0xBBDA792448DB5A89(iLocal_1039) + fParam10) + 2600f))
		{
			iLocal_1033 = 2;
			return 0;
		}
	}
	if (iLocal_1033 == 2)
	{
		unk_0xF674E664795C8CB3(iParam0, 236, 0);
		unk_0xF674E664795C8CB3(iParam0, 309, 0);
		if (unk_0xD3FACCDA4D66AEAD(iLocal_1037))
		{
			if (!func_21(Param11, 0f, 0f, 0f, 0))
			{
				unk_0x27327EB62D93CDBA(iLocal_1037, Param11, 1, 0, 0, 1);
				unk_0x10BB9EA2ADBCF0F3(iLocal_1037, Param11.f_3);
				unk_0x74207974B5483203(iLocal_1037);
			}
			unk_0x591413670A1EF437(iLocal_1037, 1, 0);
			unk_0xBB21B5C3111E5F85(iLocal_1037, 0);
			iLocal_1037 = 0;
		}
		if (unk_0xD05DBB55CBEF6ACF(iParam0))
		{
			unk_0xF152F4EB3CEAF22E(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_180(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_181(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_181(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_181(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_181(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_182(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = unk_0x0BADBFA3B172435F(func_183(((fParam0 * 3.141593f) * 0.5f)));
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

float func_183(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_184(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - unk_0xD0FFB162F40A139C(func_183(((fParam0 * 3.141593f) * 0.5f))));
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

float func_185(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - unk_0xD0FFB162F40A139C(func_183((fParam0 * 3.141593f)))));
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

float func_186(float fParam0, float fParam1, float fParam2)
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

void func_187()
{
	Global_68446.f_553 = 1;
	Global_68446.f_554 = 0;
}

void func_188(var uParam0)
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
		iLocal_117[iVar2] = Global_101553.f_18972.f_69[iVar1 /*78*/].f_66;
		if (iLocal_117[iVar2] != 0)
		{
			if (!unk_0x08BA6DD398CA197C(uLocal_48[iVar2], 2))
			{
				unk_0x491067A8E906F22D(iLocal_117[iVar2]);
				unk_0x88B0F0DC270164B7(&(uLocal_48[iVar2]), 2);
				func_379(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_189()
{
	return !Global_68446.f_553;
}

void func_190(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_58(&(Global_68446.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x999A157665D69393(Param0, Global_68446.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_191(iVar0);
			}
		}
		iVar0++;
	}
}

void func_191(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_58(&(Global_68446.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0x1F1B2B6E500380C5(Global_68446.f_139[iParam0], 0))
				{
					if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), Global_68446.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x7B17650F15A8876D(Global_68446.f_139[iParam0], 1, 1);
				unk_0xEFA1F34A28EE763C(&(Global_68446.f_139[iParam0]));
			}
		}
		Global_68446[iParam0] = 1;
		if (unk_0x08BA6DD398CA197C(Global_68446.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_64(iParam0, 0)) && Global_69355.f_66 == 0) && Global_101553.f_18972.f_1958[Global_68446.f_555[0 /*21*/].f_14] != 0) && Global_101553.f_18972.f_1958[Global_68446.f_555[0 /*21*/].f_14] > 3) && (!func_192(0, Global_68446.f_555[0 /*21*/].f_12) || !func_192(1, Global_68446.f_555[0 /*21*/].f_12)))
			{
				func_110(&(Global_101553.f_18972.f_69[Global_68446.f_555[0 /*21*/].f_14 /*78*/]), &Global_69355);
				Global_69433 = Global_101553.f_18972.f_5591;
			}
			func_381(iParam0, 0);
		}
	}
}

int func_192(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_193(&(Global_101553.f_18972.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_38(Global_101553.f_18972.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_193(var uParam0)
{
	return *uParam0;
}

void func_194(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0) && unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[25]) && unk_0x1F1B2B6E500380C5(Global_68446.f_484[25], 0))
			{
				if (Global_68446.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x29626AAD56D23B62(iParam0) || unk_0x705BC1BB91F530B5(iParam0) == joaat("bus")) || unk_0x705BC1BB91F530B5(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_195(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_32(iParam0, &Var0);
		if (func_21(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
			fParam4 = unk_0x5E6FDC4F3A8C8EDE(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) != joaat("vehicle_gen_controller"))
			{
				Global_69434 = unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69());
			}
		}
		func_109(iParam5, &Var0, Param1, fParam4, func_43(iParam0));
		func_30(iParam5, iParam0, 0);
	}
}

void func_195(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_111(iParam0);
	func_381(iParam0, 0);
}

int func_196(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_37(uParam0->f_66))
	{
		return 0;
	}
	if (unk_0xD3FACCDA4D66AEAD(Global_69352))
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
	if (!func_192(0, iParam1))
	{
		Global_101553.f_18972.f_5592[iVar0] = 0;
	}
	else if (!func_192(1, iParam1))
	{
		Global_101553.f_18972.f_5592[iVar0] = 1;
	}
	func_197(iParam1, unk_0xFC96A08CFC53257A(uParam0->f_66));
	func_110(uParam0, &(Global_101553.f_18972.f_5038[iVar0 /*157*/][Global_101553.f_18972.f_5592[iVar0] /*78*/]));
	Global_101553.f_18972.f_5592[iVar0]++;
	if (Global_101553.f_18972.f_5592[iVar0] >= func_193(&(Global_101553.f_18972.f_5038[iVar0 /*157*/])))
	{
		Global_101553.f_18972.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_90875[iVar0 /*98*/] == uParam0->f_66 && unk_0x28C1B9853548BD8E(&(Global_90875[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_90875[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_197(int iParam0, char* sParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_101553.f_18972.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_198("IMPOUND_HELPM", sParam1, 2, unk_0xB5BF1B58C833F7A9(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_198("IMPOUND_HELPF", sParam1, 2, unk_0xB5BF1B58C833F7A9(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_198("IMPOUND_HELPT", sParam1, 2, unk_0xB5BF1B58C833F7A9(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_101553.f_18972.f_5596[iParam0] = 1;
	}
}

void func_198(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_199(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_199(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x28C1B9853548BD8E(sParam0, ""))
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
	while (iVar0 < Global_101553.f_25100.f_145)
	{
		if (unk_0x28C1B9853548BD8E(&(Global_101553.f_25100[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101553.f_25100.f_145 < 9)
	{
		StringCopy(&(Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_4), sParam1, 16);
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_8 = (unk_0xDF658EB6CA91DFBC() + iParam3);
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_9 = iParam5;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_11 = iParam6;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_12 = uParam2;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_13 = iParam7;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_14 = iParam8;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_10 = ((unk_0xDF658EB6CA91DFBC() + iParam3) + iParam4);
		}
		else
		{
			Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_10 = -1;
		}
		Global_101553.f_25100.f_145++;
		func_200();
	}
}

void func_200()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101553.f_25100.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101553.f_25100.f_145)
	{
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25100[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101553.f_25100[iVar0 /*16*/].f_12 > Global_101553.f_25100.f_146[0])
			{
				Global_101553.f_25100.f_146[0] = Global_101553.f_25100[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25100[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101553.f_25100[iVar0 /*16*/].f_12 > Global_101553.f_25100.f_146[1])
			{
				Global_101553.f_25100.f_146[1] = Global_101553.f_25100[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25100[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101553.f_25100[iVar0 /*16*/].f_12 > Global_101553.f_25100.f_146[2])
			{
				Global_101553.f_25100.f_146[2] = Global_101553.f_25100[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_201(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_58(&(Global_68446.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_110(&(Global_101553.f_18972.f_69[Global_68446.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

int func_202(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x0D2E3F017CBCB8A8(*uParam1))
	{
		unk_0x50C86ABC13A071F8(*uParam1, 0);
	}
	if (unk_0x0D2E3F017CBCB8A8(*uParam2))
	{
		unk_0x50C86ABC13A071F8(*uParam2, 0);
	}
	*uParam1 = unk_0x669DFEC6C5E8A812("DEFAULT_SCRIPTED_CAMERA", 0);
	*uParam2 = unk_0x669DFEC6C5E8A812("DEFAULT_SCRIPTED_CAMERA", 0);
	if (unk_0x0D2E3F017CBCB8A8(*uParam1) && unk_0x0D2E3F017CBCB8A8(*uParam2))
	{
		unk_0x8E4B7BCF3F153D3C(*uParam1, *uParam0);
		unk_0x00D89D1097963F54(*uParam1, uParam0->f_3, 2);
		unk_0x033BAA756AF85975(*uParam1, uParam0->f_12);
		unk_0x8E4B7BCF3F153D3C(*uParam2, uParam0->f_6);
		unk_0x00D89D1097963F54(*uParam2, uParam0->f_6.f_3, 2);
		unk_0x033BAA756AF85975(*uParam2, uParam0->f_12);
		unk_0xE54CCCC537E33A2F(*uParam1, "HAND_SHAKE", uParam0->f_13);
		unk_0xE54CCCC537E33A2F(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			unk_0xF13B03E3D574D5F1(*uParam2, *uParam1, unk_0xF2DB717A73826179((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			unk_0x07553DAC96600443(*uParam1, 1);
		}
		unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_203(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x864EAABAADAAA1E3(unk_0x0C1D3C552325765B());
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 1);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 1);
		func_208(1);
		unk_0x3437639A811EF082();
		unk_0xB5B3F40B585C8D07();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xC6CB0C1523C73C77())
			{
				unk_0x588D9B1F6CF36C3C(0);
			}
			if (!func_75())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_207(1, iParam3, iParam2, 0);
		Global_55822 = 1;
		Global_68128 = 1;
		Global_69615 = 1;
	}
	else
	{
		func_208(0);
		unk_0x2D1364CCF7771349();
		Global_55822 = 0;
		if (bParam1)
		{
			unk_0xF100005CC9E0A614();
		}
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 0);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 0);
		func_207(0, iParam3, iParam2, 0);
		if (unk_0xA86CA03D9749EEB3())
		{
			if (((!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_205(unk_0x0C1D3C552325765B())) && !func_87(unk_0x0C1D3C552325765B(), 0)) && !func_204())
			{
				unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
			}
		}
		else if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_205(unk_0x0C1D3C552325765B()))
		{
			unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
		}
		Global_69615 = 0;
	}
}

bool func_204()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

int func_205(int iParam0)
{
	if (func_87(iParam0, 0))
	{
		return 1;
	}
	if (func_206())
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

bool func_206()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

int func_207(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xD0570FF450787B16() != iParam0 && uParam2)
		{
			unk_0x0898502403A5CFE2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_208(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 13);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 13);
	}
}

int func_209(int iParam0)
{
	func_58(&(Global_68446.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_68446.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_210(26))
			{
				return 26;
			}
			if (!func_210(29))
			{
				return 29;
			}
			if (!func_210(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_68446.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_210(27))
			{
				return 27;
			}
			if (!func_210(30))
			{
				return 30;
			}
			if (!func_210(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_68446.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_210(28))
			{
				return 28;
			}
			if (!func_210(31))
			{
				return 31;
			}
			if (!func_210(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_210(int iParam0)
{
	return func_64(iParam0, 0);
}

void func_211(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_213(iParam0, &iVar1);
	if (!unk_0x28C1B9853548BD8E("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xEE57F76AC9F2B20C(iVar1))
			{
				return;
			}
			if (unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()) == iVar1)
			{
				func_166(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xEE57F76AC9F2B20C(iVar1))
			{
				return;
			}
			if (func_212(iParam0))
			{
				func_166(iParam0, 0);
			}
		}
		unk_0x11ABA5583C494FAD(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_212(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_167(iParam0) };
	if (unk_0x08BA6DD398CA197C(Global_31556[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

var func_213(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_214(iParam0) };
	*iParam1 = unk_0x07BE5BF18FEF759E(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_214(int iParam0)
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
			Var5 = { func_215(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_215(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_215(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_215(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_215(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_215(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_215(7) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049287[34 /*1908*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_215(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_215(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_215(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_215(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_215(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_215(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_215(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_215(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_215(43) };
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
			Var5 = { func_215(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_215(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_215(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_215(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_215(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_215(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_215(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_215(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_215(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_215(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_215(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_215(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_215(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_215(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_215(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_215(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_215(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_215(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_215(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_215(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_215(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_215(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_215(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_215(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_215(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_215(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_215(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_215(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_215(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_215(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_215(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_215(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_215(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_215(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_215(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_215(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_215(91) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_215(97) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_215(int iParam0)
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
	}
	return Var0;
}

void func_216(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_213(iParam0, &iVar1);
	if (!unk_0x28C1B9853548BD8E("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0x0201083D93067366(iVar1))
		{
			if (unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()) == iVar1)
			{
				func_168(iParam0, 1);
				return;
			}
			unk_0x3CB5223C17FAF3F6(iVar1, 1);
		}
		else if (!bParam1 && unk_0x0201083D93067366(iVar1))
		{
			if (func_217(iParam0))
			{
				func_168(iParam0, 0);
			}
			unk_0x3CB5223C17FAF3F6(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_217(iParam0))
			{
				func_168(iParam0, 0);
			}
		}
	}
}

int func_217(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_167(iParam0) };
	if (Var0.f_1 != -1 && unk_0x08BA6DD398CA197C(Global_31551[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || func_209(Local_402.f_0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_219(float fParam0, float fParam1, float fParam2)
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

int func_220(int iParam0)
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

int func_221(int iParam0, var uParam1)
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

int func_222()
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return Global_89217.f_44 == 1;
	}
	return 0;
}

void func_223()
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
	
	if ((((((unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_672))
	{
		return;
	}
	if (!Global_68125)
	{
		if (Global_101553.f_18972.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] != -15)
		{
			if (!Global_68446[Global_101553.f_18972.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]])
			{
				if (func_274(func_47(), Global_101553.f_18972.f_1982[iLocal_672 /*939*/].f_626[iLocal_855]))
				{
					iVar0 = Global_101553.f_18972.f_1982[iLocal_672 /*939*/][iLocal_855];
					func_272(iVar0, iLocal_855, iLocal_672);
					func_58(&Var1, Global_101553.f_18972.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_381(Global_101553.f_18972.f_1982[iLocal_672 /*939*/].f_313[iLocal_855], 1);
					}
					Global_101553.f_18972.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] = -15;
				}
			}
		}
		iLocal_855++;
		if (iLocal_855 >= 312)
		{
			iLocal_855 = 0;
		}
	}
	if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) != Local_402.f_7 || Local_402.f_2 == 99)
	{
		if (Local_402.f_5 != -1)
		{
			func_66(&(Local_402.f_5));
		}
		if (Local_402.f_2 > 0)
		{
			unk_0x94724F7C938EBE34(1);
		}
		Local_402.f_7 = unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5());
		Local_402.f_5 = -1;
		Local_402.f_2 = 0;
		Local_402.f_4 = 0;
		if (bLocal_854)
		{
			if (unk_0x598A9E990F05F82C())
			{
				unk_0x94724F7C938EBE34(1);
			}
			unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
			if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110))
			{
				unk_0x07553DAC96600443(Local_402.f_110, 0);
				unk_0x50C86ABC13A071F8(Local_402.f_110, 0);
			}
			if (unk_0x0D2E3F017CBCB8A8(Local_402.f_111))
			{
				unk_0x07553DAC96600443(Local_402.f_111, 0);
				unk_0x50C86ABC13A071F8(Local_402.f_111, 0);
			}
			unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 1, 0);
			unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), 0);
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
				unk_0xA28FB996DF5377EF(unk_0x0C1D3C552325765B(), 0);
			}
			iVar22 = unk_0x525584039F375488();
			if (unk_0xD3FACCDA4D66AEAD(iVar22) && unk_0x1F1B2B6E500380C5(iVar22, 0))
			{
				unk_0xEDBE0CD7C81FA37E(iVar22, 1, 0);
				unk_0xBB21B5C3111E5F85(iVar22, 0);
				if (unk_0x687CB62D355FD7FD(iVar22, 1))
				{
					unk_0x615DE34FC732CF11(&iVar22);
				}
			}
			iVar23 = 5000;
			iVar24 = unk_0xDF658EB6CA91DFBC();
			while (!unk_0x76E840F466FECF8E() && (unk_0xDF658EB6CA91DFBC() - iVar24) < iVar23)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (unk_0x72C176FA688CE74D(Local_402.f_112))
			{
				unk_0xBC4C3BADA8503A20(Local_402.f_112);
			}
			StringCopy(&Global_32498, "", 32);
			if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
			{
				func_216(47, 1);
				func_211(47, 1);
			}
			unk_0x2E1E57681BD2050A();
			unk_0xE6A458183F9D98BB();
			unk_0x943A052E20E9C2CE(1);
			unk_0x627D428B266FEDCA(1);
			func_203(0, 1, 1, 0);
			bLocal_854 = false;
			Global_25438 = 0;
		}
	}
	bVar25 = false;
	if ((((((((((((!bLocal_854 && !unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0)) || (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) && !Local_402.f_29.f_69)) || (!unk_0xB6024B1E922B8E1A(unk_0xA0081090911D13E5()) && !unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))) || (!bLocal_854 && func_64(Local_402.f_0, 5))) || (!bLocal_854 && unk_0x2A57AED61E15C7C7(2, 199))) || (!bLocal_854 && unk_0x84C71F36E7D97756())) || !func_270(0)) || unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0) || unk_0x66ED05E88C842554(unk_0xA0081090911D13E5())) || unk_0xBE7699DE338079B3(unk_0xA0081090911D13E5())) || Global_25335) || (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) && unk_0x12AE3D700F6A2545(unk_0xA0081090911D13E5())))
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
			if ((((Local_402.f_0 != -1 && func_64(Local_402.f_0, 0)) && !func_64(Local_402.f_0, 5)) && !bLocal_1015) && !bVar25)
			{
				if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && !unk_0x598A9E990F05F82C())
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_01", 16);
					func_155(&(Local_402.f_5), 3, &cVar26, 0, 0, 0, 0);
					Local_402.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_150(Local_402.f_5, 1))
			{
				if (func_269(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = unk_0xDF658EB6CA91DFBC();
					func_66(&(Local_402.f_5));
					iLocal_669 = 0;
					Local_402.f_2 = 90;
				}
				else
				{
					iLocal_669 = 0;
					Local_402.f_4 = unk_0xDF658EB6CA91DFBC();
					func_66(&(Local_402.f_5));
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
				func_155(&(Local_402.f_5), 3, &cVar26, 0, 0, 0, 0);
				Local_402.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_150(Local_402.f_5, 1))
			{
				if (func_269(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = unk_0xDF658EB6CA91DFBC();
					Local_402.f_2 = 90;
				}
				else
				{
					unk_0xAB16AADE80707D47(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
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
					Local_516.f_0 = unk_0x474309DF4921072A("MIDSIZED_MESSAGE");
					Local_516.f_1 = 0;
					Local_516.f_3 = 0;
					Local_516.f_2 = 0;
					iLocal_856 = 1;
					Global_25438 = 1;
					if (bLocal_854)
					{
						if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
						{
							func_216(47, 0);
							func_211(47, 0);
							Local_402.f_112 = unk_0x07BE5BF18FEF759E(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (unk_0x72C176FA688CE74D(Local_402.f_112))
							{
								if (!unk_0x319560E9F4C27299(Local_402.f_112))
								{
									unk_0x493EEE1A031FD768(Local_402.f_112);
								}
								StringCopy(&Global_32498, "v_garagem_sp", 32);
							}
						}
						unk_0x8F2CF88C37D4A413(unk_0x0C1D3C552325765B(), 1);
						unk_0x2E1E57681BD2050A();
						Local_402.f_4 = unk_0xDF658EB6CA91DFBC();
						Local_402.f_2 = 4;
					}
					else
					{
						Local_402.f_2 = 8;
					}
					func_66(&(Local_402.f_5));
				}
			}
			break;
		
		case 4:
			bVar35 = true;
			if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
			{
				Local_402.f_112 = unk_0x07BE5BF18FEF759E(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!unk_0x72C176FA688CE74D(Local_402.f_112) || unk_0x0201083D93067366(Local_402.f_112)) || unk_0xEE57F76AC9F2B20C(Local_402.f_112))
				{
					func_216(47, 0);
					func_211(47, 0);
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
					if (unk_0x639927C5DE78E8D7(200.4651f, -1020.631f, -100f, 50f, 0) || (unk_0xDF658EB6CA91DFBC() - Local_402.f_4) > 3500)
					{
						Local_402.f_4 = unk_0xDF658EB6CA91DFBC();
						Local_402.f_2 = 5;
					}
				}
				else if (unk_0x34534A9EB2E27FA9(Local_402.f_29.f_14, Var32, fVar30, iVar31) || (unk_0xDF658EB6CA91DFBC() - Local_402.f_4) > 3500)
				{
					Local_402.f_4 = unk_0xDF658EB6CA91DFBC();
					Local_402.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((unk_0x9726BE1252F8F0B6() && unk_0x66491EA3F355967D()) && (!unk_0x72C176FA688CE74D(Local_402.f_112) || unk_0x319560E9F4C27299(Local_402.f_112))) || (unk_0xDF658EB6CA91DFBC() - Local_402.f_4) > 10000)
			{
				Local_402.f_4 = unk_0xDF658EB6CA91DFBC();
				Local_402.f_2 = 6;
			}
			break;
		
		case 6:
			if ((unk_0xDF658EB6CA91DFBC() - Local_402.f_4) > 1000)
			{
				if ((unk_0xD3FACCDA4D66AEAD(iLocal_1027) && unk_0x18C670321BC98FDA(iLocal_1027)) && unk_0x687CB62D355FD7FD(iLocal_1027, 1))
				{
					unk_0x615DE34FC732CF11(&iLocal_1027);
				}
				iLocal_1027 = unk_0x525584039F375488();
				if ((((unk_0xD3FACCDA4D66AEAD(iLocal_1027) && unk_0x1F1B2B6E500380C5(iLocal_1027, 0)) && !unk_0xFC4346F9DE2AB4AE(unk_0x705BC1BB91F530B5(iLocal_1027))) && !unk_0x1E3C80E7C4B8041B(unk_0x705BC1BB91F530B5(iLocal_1027))) && !unk_0xE3C6E31B7236489F(unk_0x705BC1BB91F530B5(iLocal_1027)))
				{
					if (!unk_0x18C670321BC98FDA(iLocal_1027))
					{
						unk_0x7B17650F15A8876D(iLocal_1027, 0, 0);
					}
				}
				else
				{
					iLocal_1027 = 0;
				}
				unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 0, 0);
				if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), 1);
				}
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 16);
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 32);
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 128);
					unk_0xA28FB996DF5377EF(unk_0x0C1D3C552325765B(), 1);
				}
				func_203(1, 1, 1, 0);
				unk_0x715FC4B638D9A515();
				unk_0x94724F7C938EBE34(1);
				Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_14.f_3.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_402.f_29.f_69)
				{
					unk_0x9A32D4A48E252BF5(Local_402.f_29.f_14, Var32);
				}
				if (!unk_0x0D2E3F017CBCB8A8(Local_402.f_110))
				{
					Local_402.f_110 = unk_0x669DFEC6C5E8A812("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						unk_0xA7667D1639F16A5C("GtaMloRoom001");
					}
					func_203(1, 1, 1, 0);
					func_202(&(Local_402.f_29.f_14), &(Local_402.f_110), &(Local_402.f_111));
				}
				unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
				unk_0x943A052E20E9C2CE(0);
				unk_0x627D428B266FEDCA(0);
				unk_0x2E1E57681BD2050A();
				Local_402.f_2 = 7;
				Local_402.f_4 = unk_0xDF658EB6CA91DFBC();
				func_66(&(Local_402.f_5));
			}
			break;
		
		case 7:
			if ((unk_0xDF658EB6CA91DFBC() - Local_402.f_4) < 7000 && !func_267(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_05", 16);
				func_153(&cVar26, -1);
				if (!unk_0x9726BE1252F8F0B6())
				{
					if (Local_402.f_0 == 12 || Local_402.f_0 == 13)
					{
						fVar30 = 85f;
						iVar31 = 2;
					}
					Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_29.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_29.f_2 + 90f)), 0f };
					unk_0x34534A9EB2E27FA9(Local_402.f_29.f_29, Var32, fVar30, iVar31);
				}
			}
			else
			{
				if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						unk_0xA7667D1639F16A5C("GtaMloRoom001");
					}
					func_203(1, 1, 1, 0);
					func_202(&(Local_402.f_29.f_29), &(Local_402.f_110), &(Local_402.f_111));
				}
				unk_0xE6A458183F9D98BB();
				unk_0x94724F7C938EBE34(1);
				Local_402.f_4 = unk_0xDF658EB6CA91DFBC();
				Local_402.f_2 = 8;
			}
			break;
		
		case 8:
			if ((unk_0xDF658EB6CA91DFBC() - Local_402.f_4) < 7000 && !func_267(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_06", 16);
				if (!unk_0x598A9E990F05F82C())
				{
					func_153(&cVar26, 7000);
				}
			}
			else
			{
				unk_0x94724F7C938EBE34(1);
				Local_402.f_4 = unk_0xDF658EB6CA91DFBC();
				Local_402.f_2 = 9;
			}
			break;
		
		case 9:
			if ((unk_0xDF658EB6CA91DFBC() - Local_402.f_4) < 3500 && !func_267(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_03", 16);
				if (unk_0x1E3F61C2C1E29520(Local_516.f_0))
				{
					if (Local_516.f_1)
					{
						if (!Local_516.f_3)
						{
							unk_0xAB16AADE80707D47(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
							Local_516.f_3 = 1;
						}
						unk_0x0F83039847376F53(Local_516.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xB9D4F4DE7E7EC038(Local_516.f_0, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_85(&cVar26);
						unk_0xC23FC7D89C4FAF05();
						Local_516.f_1 = 1;
					}
				}
			}
			else if ((unk_0xDF658EB6CA91DFBC() - Local_402.f_4) < 4000 && !func_267(1000))
			{
				if (unk_0x1E3F61C2C1E29520(Local_516.f_0))
				{
					if (Local_516.f_2)
					{
						unk_0x0F83039847376F53(Local_516.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xB9D4F4DE7E7EC038(Local_516.f_0, "SHARD_ANIM_OUT");
						unk_0x7CBFB9F4AF33C67E(1);
						unk_0x0FFE3C1DBBA72236(0.33f);
						unk_0xE73340DA551C95E1();
						Local_516.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_854)
				{
					unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
					if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110))
					{
						unk_0x07553DAC96600443(Local_402.f_110, 0);
						unk_0x50C86ABC13A071F8(Local_402.f_110, 0);
					}
					if (unk_0x0D2E3F017CBCB8A8(Local_402.f_111))
					{
						unk_0x07553DAC96600443(Local_402.f_111, 0);
						unk_0x50C86ABC13A071F8(Local_402.f_111, 0);
					}
					unk_0x8BDD755F07063522(0f);
					unk_0x2A7D387AD73F1D15(0f, 1065353216);
					unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 1, 0);
					unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), 0);
					iVar36 = unk_0x525584039F375488();
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
						unk_0xA28FB996DF5377EF(unk_0x0C1D3C552325765B(), 0);
						if ((unk_0xD3FACCDA4D66AEAD(iVar36) && unk_0x1F1B2B6E500380C5(iVar36, 0)) && unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iVar36, 0))
						{
							unk_0x27327EB62D93CDBA(iVar36, Local_402.f_29.f_44, 1, 1, 0, 1);
							unk_0x10BB9EA2ADBCF0F3(iVar36, Local_402.f_29.f_47);
							unk_0x74207974B5483203(iVar36);
						}
						else
						{
							unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Local_402.f_29.f_44, 1, 1, 0, 1);
							unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), Local_402.f_29.f_47);
						}
					}
					if (unk_0xD3FACCDA4D66AEAD(iLocal_1027) && unk_0x1F1B2B6E500380C5(iLocal_1027, 0))
					{
						iVar37 = func_46(24);
						if (func_201(&Local_776, 24))
						{
							func_196(&Local_776, func_375());
							if (unk_0xD3FACCDA4D66AEAD(iVar37))
							{
								unk_0xEFA1F34A28EE763C(&iVar37);
							}
						}
						if (Local_402.f_0 == 21)
						{
							unk_0x0B17BC5D018E224B(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
							unk_0x27327EB62D93CDBA(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
							unk_0x10BB9EA2ADBCF0F3(iLocal_1027, 154.4846f);
							func_194(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_402.f_0 == 22)
						{
							unk_0x0B17BC5D018E224B(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
							unk_0x27327EB62D93CDBA(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
							unk_0x10BB9EA2ADBCF0F3(iLocal_1027, 319.6985f);
							func_194(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_402.f_0 == 23)
						{
							unk_0x0B17BC5D018E224B(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
							unk_0x27327EB62D93CDBA(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
							unk_0x10BB9EA2ADBCF0F3(iLocal_1027, 270.8741f);
							func_194(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						unk_0x74207974B5483203(iLocal_1027);
					}
					if (unk_0xD3FACCDA4D66AEAD(iVar36) && unk_0x1F1B2B6E500380C5(iVar36, 0))
					{
						unk_0xEDBE0CD7C81FA37E(iVar36, 1, 0);
						unk_0xBB21B5C3111E5F85(iVar36, 0);
						if (unk_0x687CB62D355FD7FD(iVar36, 1))
						{
							unk_0x615DE34FC732CF11(&iVar36);
						}
					}
					iVar38 = 5000;
					iVar39 = unk_0xDF658EB6CA91DFBC();
					while (!unk_0x76E840F466FECF8E() && (unk_0xDF658EB6CA91DFBC() - iVar39) < iVar38)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0x72C176FA688CE74D(Local_402.f_112))
					{
						unk_0xBC4C3BADA8503A20(Local_402.f_112);
					}
					StringCopy(&Global_32498, "", 32);
					if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
					{
						func_216(47, 1);
						func_211(47, 1);
						Global_101553.f_18972.f_4800 = 1;
					}
					unk_0x2E1E57681BD2050A();
					unk_0xE6A458183F9D98BB();
					unk_0x943A052E20E9C2CE(1);
					unk_0x627D428B266FEDCA(1);
					func_203(0, 1, 1, 0);
					bLocal_854 = false;
					Global_25438 = 0;
				}
				if (unk_0x1E3F61C2C1E29520(Local_516.f_0))
				{
					unk_0xA12A0D38735CCBF2(&Local_516);
				}
				func_240(iLocal_672, Local_516.f_4, Local_402.f_29.f_67);
				func_239(Local_402.f_0, 5, 1);
				func_226(Local_402.f_0);
				if (unk_0x16833EFAA58E63DB(Global_68446.f_208[Local_402.f_0]))
				{
					unk_0x0B57C567D698C373(&(Global_68446.f_208[Local_402.f_0]));
				}
				iLocal_940 = Local_402.f_0;
				func_225();
				Local_402.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_669++;
			if (iLocal_669 >= 3)
			{
				if ((unk_0xDF658EB6CA91DFBC() - Local_402.f_4) < 4000)
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_04", 16);
					func_224(&cVar26);
				}
				else
				{
					Local_402.f_2 = 99;
				}
			}
			break;
	}
}

void func_224(char[4] cParam0)
{
	unk_0x55B5433015A91E85(cParam0);
	unk_0x85AE92859C5AADE3(0, 1, 1, -1);
}

int func_225()
{
	if (func_163(0))
	{
		return 0;
	}
	if (Global_91445.f_8)
	{
		if (Global_91445.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91445.f_10 > 1)
	{
		return 0;
	}
	Global_91445.f_10++;
	return 1;
}

void func_226(int iParam0)
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
	func_238(iVar0, 0);
	iVar2 = func_237(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_236(iVar0);
		if (func_234(iVar0, iVar1, 1))
		{
			func_227(iVar0);
			func_236(iVar0);
		}
	}
}

void func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_233(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46219[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46219[iVar0 /*203*/].f_10[(Global_46219[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_46219[iVar0 /*203*/].f_9 - 1);
	if (!Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_232(Global_36919[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
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
		func_228(1, Global_36919[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_36919[iVar1 /*12*/].f_3)
		{
			case 0:
				func_228(0, Global_36919[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_228(1, Global_36919[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_228(2, Global_36919[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46219[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_228(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x7C0379981B7E6E40())
	{
		return;
	}
	iVar0 = func_375();
	bVar1 = false;
	StringCopy(&cVar2, func_231(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x754E61FE98961B39("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x754E61FE98961B39("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x754E61FE98961B39("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x754E61FE98961B39(sParam3);
				if (!unk_0x509383441597090D(sParam4))
				{
					unk_0xBDE6EEC5F6BDC060(sParam4);
				}
				if (!unk_0x509383441597090D(sParam5))
				{
					unk_0xBDE6EEC5F6BDC060(sParam5);
				}
				if (!unk_0x509383441597090D(sParam6))
				{
					unk_0xBDE6EEC5F6BDC060(sParam6);
				}
				if (!unk_0x509383441597090D(sParam7))
				{
					unk_0xBDE6EEC5F6BDC060(sParam7);
				}
				if (!unk_0x509383441597090D(sParam8))
				{
					unk_0xBDE6EEC5F6BDC060(sParam8);
				}
				if (!unk_0x509383441597090D(sParam9))
				{
					unk_0xBDE6EEC5F6BDC060(sParam9);
				}
				if (!unk_0x509383441597090D(sParam10))
				{
					unk_0xBDE6EEC5F6BDC060(sParam10);
				}
				if (!unk_0x509383441597090D(sParam11))
				{
					unk_0xBDE6EEC5F6BDC060(sParam11);
				}
				if (!unk_0x509383441597090D(sParam12))
				{
					unk_0xBDE6EEC5F6BDC060(sParam12);
				}
				if (!unk_0x509383441597090D(sParam13))
				{
					unk_0xBDE6EEC5F6BDC060(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_229(unk_0xDAB775768F2B11B1(&cVar2, &cVar2, 0, 2, unk_0xFFC9DE7E93AEAE21(func_230(iParam1)), 0));
		}
		else
		{
			func_229(unk_0xDAB775768F2B11B1("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xFFC9DE7E93AEAE21(func_230(iParam1)), 0));
		}
		switch (Global_14443)
		{
			case 0:
				StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
				Global_36911++;
				if (Global_36911 > 16)
				{
					Global_36911 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
				Global_36913++;
				if (Global_36913 > 16)
				{
					Global_36913 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
				Global_36912++;
				if (Global_36912 > 16)
				{
					Global_36912 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xAB16AADE80707D47(-1, "Notification", &Global_14432, 1);
	}
}

void func_229(var uParam0)
{
	Global_36914[Global_36918] = uParam0;
	Global_16803 = 1;
	Global_16802 = uParam0;
	Global_36918++;
	if (Global_36918 == 3)
	{
		Global_36918 = 0;
	}
}

char* func_230(int iParam0)
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

char* func_231(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[0 /*29*/].f_7));
		
		case 1:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[1 /*29*/].f_7));
		
		case 2:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[2 /*29*/].f_7));
		
		case 7:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[12 /*29*/].f_7));
		
		case 4:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[60 /*29*/].f_7));
		
		case 6:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[62 /*29*/].f_7));
		
		case 3:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[14 /*29*/].f_7));
		
		case 16:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[97 /*29*/].f_7));
		
		case 19:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[99 /*29*/].f_7));
		
		case 15:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[96 /*29*/].f_7));
		
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
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[15 /*29*/].f_7));
		
		case 26:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[30 /*29*/].f_7));
		
		case 27:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[17 /*29*/].f_7));
		
		case 29:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[20 /*29*/].f_7));
		
		case 30:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[43 /*29*/].f_7));
		
		case 31:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[44 /*29*/].f_7));
		
		case 32:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[19 /*29*/].f_7));
		
		case 34:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[40 /*29*/].f_7));
		
		case 36:
			return unk_0xFFC9DE7E93AEAE21("CELL_E_381");
		
		case 38:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[64 /*29*/].f_7));
		
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
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[122 /*29*/].f_7));
		
		case 40:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[125 /*29*/].f_7));
		
		case 41:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[113 /*29*/].f_7));
		
		case 42:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[126 /*29*/].f_7));
		
		case 43:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[127 /*29*/].f_7));
		
		case 44:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[124 /*29*/].f_7));
		
		case 45:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[114 /*29*/].f_7));
		
		case 46:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[115 /*29*/].f_7));
		
		case 47:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[116 /*29*/].f_7));
		
		case 48:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[123 /*29*/].f_7));
		
		case 49:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[117 /*29*/].f_7));
		
		case 50:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[118 /*29*/].f_7));
		
		case 51:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[119 /*29*/].f_7));
		
		case 52:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[120 /*29*/].f_7));
		
		case 53:
			return unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_232(int iParam0)
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

int func_233(int iParam0)
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
		if (Global_46219[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46219[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46219[iVar0 /*203*/].f_1;
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

int func_234(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_238(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_46219[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_46219[iVar0 /*203*/].f_2 = iParam0;
	Global_46219[iVar0 /*203*/].f_10[Global_46219[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46219[iVar0 /*203*/].f_10[Global_46219[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46219[iVar0 /*203*/].f_10[Global_46219[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46219[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46219[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46219[iVar0 /*203*/].f_4[iVar1] == Global_36919[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46219[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46219[iVar0 /*203*/].f_4[Global_46219[iVar0 /*203*/].f_3] = Global_36919[iParam1 /*12*/].f_3;
			Global_46219[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46219[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46219[iVar0 /*203*/].f_4[iVar1] == Global_36919[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46219[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46219[iVar0 /*203*/].f_4[Global_46219[iVar0 /*203*/].f_3] = Global_36919[iParam1 /*12*/].f_2;
			Global_46219[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46219[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46219[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_235(Global_46219[iVar0 /*203*/].f_4[iVar1], Global_46219[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_235(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar19 = (Global_40244[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_40244[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_232(Global_36919[iVar20 /*12*/].f_1) };
		if (Global_36919[iVar20 /*12*/].f_2 == iParam0 && !Global_36919[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36919[iVar20 /*12*/].f_2;
		iVar0 = Global_45857[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_45857[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36911 = (Global_36911 - 1);
						if (Global_36911 < 0)
						{
							Global_36911 = 0;
						}
						break;
					
					case 1:
						Global_36912 = (Global_36912 - 1);
						if (Global_36912 < 0)
						{
							Global_36912 = 0;
						}
						break;
					
					case 2:
						Global_36913 = (Global_36913 - 1);
						if (Global_36913 < 0)
						{
							Global_36913 = 0;
						}
						break;
					}
				}
		}
		Global_45857[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45857[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45857[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45857[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45857[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45857[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45857[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_45857[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36911 = (Global_36911 - 1);
						if (Global_36911 < 0)
						{
							Global_36911 = 0;
						}
						break;
					
					case 1:
						Global_36912 = (Global_36912 - 1);
						if (Global_36912 < 0)
						{
							Global_36912 = 0;
						}
						break;
					
					case 2:
						Global_36913 = (Global_36913 - 1);
						if (Global_36913 < 0)
						{
							Global_36913 = 0;
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
			if (Global_46219[iVar24 /*203*/].f_1 == iParam1 && Global_46219[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45857[iParam0 /*120*/].f_18[iVar0] = Global_46219[iVar23 /*203*/].f_1;
		Global_45857[iParam0 /*120*/].f_1[iVar0] = (Global_46219[iVar23 /*203*/].f_9 - 1);
		Global_45857[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45857[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45857[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45857[iParam0 /*120*/]++;
		iVar25 = Global_45857[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_46219[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_36919[iVar26 /*12*/].f_2;
		if (Global_46219[iVar23 /*203*/].f_10[(Global_46219[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46219[iVar23 /*203*/].f_10[(Global_46219[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_232(Global_36919[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_45857[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_228(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_228(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_228(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_228(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_236(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0x08BA6DD398CA197C(Global_101553.f_29676, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_233(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46219[iVar0 /*203*/] = 0;
}

int func_237(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_47641 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46219[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_46219[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_46219[iVar1 /*203*/].f_1;
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
		if (Global_47642[iVar1 /*53*/].f_52 == 0)
		{
			Global_47642[iVar1 /*53*/].f_52 = iVar0;
			Global_47642[iVar1 /*53*/] = iParam0;
			Global_47642[iVar1 /*53*/].f_1 = iParam1;
			Global_47642[iVar1 /*53*/].f_2 = iParam2;
			Global_101553.f_25727.f_310++;
			if (Global_101553.f_25727.f_310 == 0)
			{
				Global_101553.f_25727.f_310 = 1;
			}
			Global_47642[iVar1 /*53*/].f_10 = 0;
			Global_47642[iVar1 /*53*/].f_3 = Global_101553.f_25727.f_310;
			Global_47642[iVar1 /*53*/].f_4 = 1;
			Global_47641++;
			return Global_47642[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_238(int iParam0, bool bParam1)
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
	
	iVar0 = func_233(iParam0);
	if (iVar0 > -1)
	{
		if (Global_46219[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46219[iVar1 /*203*/] == 0)
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
		if (Global_46219[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46219[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_46219[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46219[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46219[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46219[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45857[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45857[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45857[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45857[iVar6 /*120*/].f_18[iVar8] == Global_46219[iVar4 /*203*/].f_1)
							{
								if (Global_45857[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36911 = (Global_36911 - 1);
											break;
										
										case 1:
											Global_36912 = (Global_36912 - 1);
											break;
										
										case 2:
											Global_36913 = (Global_36913 - 1);
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
	Global_46219[iVar4 /*203*/].f_2 = iParam0;
	Global_46219[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_46219[iVar4 /*203*/] = 1;
	}
	Global_101553.f_25727.f_310++;
	if (Global_101553.f_25727.f_310 == 0)
	{
		Global_101553.f_25727.f_310 = 1;
	}
	Global_46219[iVar4 /*203*/].f_1 = Global_101553.f_25727.f_310;
	Global_46219[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_239(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x88B0F0DC270164B7(&(Global_101553.f_18972[iParam0]), iParam1);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_101553.f_18972[iParam0]), iParam1);
	}
}

int func_240(int iParam0, int iParam1, int iParam2)
{
	if (Global_101553.f_32740[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101553.f_32740[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_241(Global_101553.f_32740[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_241(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_266();
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
					func_265(99, 1);
					func_264(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_264(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_264(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_249(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_248(5))
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
							func_264(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_264(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_264(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_248(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_264(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_264(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_264(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_264(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_264(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_264(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_264(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_264(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_264(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xD24F6522EB082914())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_264(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_264(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_264(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_264(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_264(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_264(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_248(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_264(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_264(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_264(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_264(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_264(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_264(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_247(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_265(95, iParam3);
					break;
				
				case 1:
					func_265(97, iParam3);
					break;
				
				case 2:
					func_265(96, iParam3);
					break;
			}
			func_265(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_244(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_244(iVar1);
	}
	iVar5 = (Global_52990[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52990[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52990[iVar2] = 2147483647;
				}
				else
				{
					Global_52990[iVar2] = (Global_52990[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_264(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_264(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_264(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52990[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52990[iVar2];
			Global_52990[iVar2] = (Global_52990[iVar2] - iParam3);
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
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_2[Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_2[Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_2[Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101553.f_25254.f_233[iVar2 /*69*/]++;
		Global_101553.f_25254.f_233[iVar2 /*69*/].f_1++;
		if (Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101553.f_25254.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_243(iParam0);
	if (Global_35775 == 15)
	{
		func_242(0);
	}
	return 1;
}

void func_242(bool bParam0)
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
			Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101553.f_25254.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52998[iVar0 /*3*/][0] = Global_101553.f_25254[iVar0];
		Global_52998.f_31[iVar0 /*3*/][0] = Global_101553.f_25254.f_11[iVar0];
		Global_52998.f_62[iVar0 /*3*/][0] = Global_101553.f_25254.f_22[iVar0];
		Global_52998.f_93[iVar0 /*3*/][0] = Global_101553.f_25254.f_33[iVar0];
		Global_52998.f_124[iVar0 /*3*/][0] = Global_101553.f_25254.f_44[iVar0];
		Global_52998.f_155[iVar0 /*3*/][0] = Global_101553.f_25254.f_55[iVar0];
		Global_52998.f_186[iVar0 /*3*/][0] = Global_101553.f_25254.f_66[iVar0];
		Global_52998.f_217[iVar0 /*3*/][0] = Global_101553.f_25254.f_77[iVar0];
		Global_52998.f_248[iVar0 /*3*/][0] = Global_101553.f_25254.f_88[iVar0];
		if (!bParam0)
		{
			Global_52998[iVar0 /*3*/][1] = Global_101553.f_25254[iVar0];
			Global_52998.f_31[iVar0 /*3*/][1] = Global_101553.f_25254.f_11[iVar0];
			Global_52998.f_62[iVar0 /*3*/][1] = Global_101553.f_25254.f_22[iVar0];
			Global_52998.f_93[iVar0 /*3*/][1] = Global_101553.f_25254.f_33[iVar0];
			Global_52998.f_124[iVar0 /*3*/][1] = Global_101553.f_25254.f_44[iVar0];
			Global_52998.f_155[iVar0 /*3*/][1] = Global_101553.f_25254.f_55[iVar0];
			Global_52998.f_186[iVar0 /*3*/][1] = Global_101553.f_25254.f_66[iVar0];
			Global_52998.f_217[iVar0 /*3*/][1] = Global_101553.f_25254.f_77[iVar0];
			Global_52998.f_248[iVar0 /*3*/][1] = Global_101553.f_25254.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_243(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52990[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x10CE8769EE2626C7(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x10CE8769EE2626C7(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x10CE8769EE2626C7(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_244(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x09C86C0C5CA26B1E(&(Global_101553.f_25254.f_471), iParam0);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0) || unk_0x08BA6DD398CA197C(Global_2097152[func_246() /*10106*/].f_7120.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x09C86C0C5CA26B1E(&(Global_101553.f_25254.f_471), iParam0);
		unk_0x09C86C0C5CA26B1E(&(Global_2097152[func_246() /*10106*/].f_7120.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x754E61FE98961B39("COUP_RED");
		unk_0xBDE6EEC5F6BDC060(func_245(iParam0));
		unk_0xDAB775768F2B11B1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_245(int iParam0)
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

int func_246()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_247(int iParam0)
{
	func_265(93, iParam0);
	func_265(29, iParam0);
	func_265(30, iParam0);
}

bool func_248(int iParam0)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0);
	}
	return unk_0x08BA6DD398CA197C(Global_2097152[func_246() /*10106*/].f_7120.f_10, iParam0);
}

int func_249(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x3C91BC99A9AE5C7D(27))
	{
		return 0;
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x8A3351ECF43DB941(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x8A3351ECF43DB941(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x10CE8769EE2626C7(joaat("num_cash_spent"), iVar1, 1);
		func_263(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_250(27, 1);
	return 1;
}

int func_250(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_251(iParam0, iParam1);
}

int func_251(int iParam0, int iParam1)
{
	if (func_27(14) && !func_262(iParam0))
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
	if (func_261(&Global_2578151))
	{
		if (func_259(&Global_2578151, iParam0))
		{
			return 0;
		}
		if (func_252(&Global_2578151, iParam0))
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

int func_252(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x3C91BC99A9AE5C7D(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_262(iParam1))
	{
		return 0;
	}
	if (func_259(uParam0, iParam1))
	{
		return 0;
	}
	if (func_258(uParam0) < 0f)
	{
		func_257(uParam0, 0);
	}
	func_255(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_253(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_253(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x3C91BC99A9AE5C7D(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_262(iParam1))
	{
		return 0;
	}
	if (func_259(uParam0, iParam1))
	{
		return 0;
	}
	if (func_258(uParam0) < 0f)
	{
		func_257(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_254(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_254(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_255(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_256(uParam0, iVar0);
		iVar0++;
	}
	func_257(uParam0, (Global_2578150 - 0.5f));
}

void func_256(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_257(var uParam0, float fParam1)
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

float func_258(var uParam0)
{
	return uParam0->f_72;
}

bool func_259(var uParam0, int iParam1)
{
	return func_260(uParam0, iParam1) != -1;
}

int func_260(var uParam0, int iParam1)
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

bool func_261(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_262(int iParam0)
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

int func_263(int iParam0, int iParam1)
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
	iVar0 = unk_0xC7B7B86D55D4C17E(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC77B359C84812EFE(iParam0, iParam1);
	}
	return 0;
}

void func_264(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x8A3351ECF43DB941(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x10CE8769EE2626C7(iParam0, iVar0, 1);
}

void func_265(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51558[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	if (Global_51558[iParam0 /*7*/])
	{
		unk_0x8A3351ECF43DB941(Global_51558[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x10CE8769EE2626C7(Global_51558[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_266()
{
	int iVar0;
	
	if (unk_0x446ED6C2B9B18A21())
	{
		unk_0x8A3351ECF43DB941(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52990[0] == iVar0)
		{
			Global_52990[0] = iVar0;
		}
		unk_0x8A3351ECF43DB941(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52990[1] == iVar0)
		{
			Global_52990[1] = iVar0;
		}
		unk_0x8A3351ECF43DB941(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52990[2] == iVar0)
		{
			Global_52990[2] = iVar0;
		}
	}
}

int func_267(int iParam0)
{
	if (unk_0xB20CA7A3EE29687A())
	{
		if ((unk_0xDF658EB6CA91DFBC() - Global_28) > iParam0)
		{
			Global_27 = unk_0xDF658EB6CA91DFBC();
		}
		Global_28 = unk_0xDF658EB6CA91DFBC();
		if ((unk_0xDF658EB6CA91DFBC() - Global_27) > iParam0)
		{
			if (func_268())
			{
				Global_27 = unk_0xDF658EB6CA91DFBC();
				return 1;
			}
		}
	}
	return 0;
}

int func_268()
{
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (unk_0x2A57AED61E15C7C7(0, 18) || unk_0x2A57AED61E15C7C7(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_269(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x8A3351ECF43DB941(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x8A3351ECF43DB941(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x8A3351ECF43DB941(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_270(int iParam0)
{
	return func_271(iParam0, Global_35775);
}

int func_271(int iParam0, int iParam1)
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

void func_272(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_375();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_125(iParam1);
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
	if (func_234(iVar0, iVar1, 1))
	{
		func_273(iVar0, sVar3);
		func_227(iVar0);
		func_236(iVar0);
	}
}

void func_273(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_233(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46219[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46219[iVar0 /*203*/].f_10[(Global_46219[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_46219[iVar0 /*203*/].f_10[(Global_46219[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_46219[iVar0 /*203*/].f_10[(Global_46219[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_46219[iVar0 /*203*/].f_10[(Global_46219[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_274(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_279(iParam1) || !func_279(iParam0))
	{
		return 1;
	}
	iVar0 = func_52(iParam0);
	iVar1 = func_52(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	iVar0 = func_278(iParam0);
	iVar1 = func_278(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_277(iParam0);
	iVar1 = func_277(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_276(iParam0);
	iVar1 = func_276(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_275(iParam0);
	iVar1 = func_275(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_275(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_276(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_277(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_278(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_279(int iParam0)
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
	iVar0 = func_275(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_276(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_277(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_52(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_54(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_278(iParam0);
	if (iVar5 < 1 || iVar5 > func_51(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_280()
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
	if (unk_0xA96867DD0A63C62C(joaat("startup_positioning")) == 0)
	{
		if (Global_101553.f_18972.f_5588)
		{
			if (!unk_0xD3FACCDA4D66AEAD(Global_69351))
			{
				func_196(&(Global_101553.f_18972.f_5510), Global_101553.f_18972.f_5590);
				Global_101553.f_18972.f_5588 = 0;
			}
			else if (!unk_0x1F1B2B6E500380C5(Global_69351, 0) || func_44(Global_69351, Global_101553.f_18972.f_5590, 1))
			{
				Global_101553.f_18972.f_5588 = 0;
			}
			else
			{
				if ((unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) && unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0) == Global_69351) && func_300(unk_0xA0081090911D13E5()) != Global_101553.f_18972.f_5590)
				{
					Global_101553.f_18972.f_5590 = func_300(unk_0xA0081090911D13E5());
				}
				if (Global_69351 != iLocal_671)
				{
					sVar2 = unk_0x31A36F72D3ABDCD7(Global_69351, &uVar1);
					if (!unk_0x509383441597090D(sVar2))
					{
						if (unk_0x3BB8D1C5FAAB25B3(sVar2) == unk_0x3BB8D1C5FAAB25B3("vehicle_gen_controller"))
						{
							Global_101553.f_18972.f_5588 = 0;
							iLocal_1028 = Global_69351;
							if (Global_68446.f_139[24] == Global_69351 || (Global_69352 == Global_69351 && Global_69353 == 24))
							{
								func_299(458, 24, -1, 1);
							}
							else
							{
								func_299(458, 0, -1, 1);
							}
							Global_69351 = 0;
						}
					}
				}
				if (((Global_101553.f_18972.f_5590 != func_375() && Global_90875[Global_101553.f_18972.f_5590 /*98*/] == Global_101553.f_18972.f_5510.f_66) && unk_0x28C1B9853548BD8E(&(Global_90875[Global_101553.f_18972.f_5590 /*98*/].f_27), &(Global_101553.f_18972.f_5510.f_1))) && !unk_0xC740F8182E7E9681())
				{
					func_110(&(Global_101553.f_18972.f_5510), &(Global_101553.f_18972.f_5600[Global_101553.f_18972.f_5590 /*78*/]));
					Global_101553.f_18972.f_5588 = 0;
					iLocal_1028 = 0;
					func_299(458, 0, -1, 1);
					Global_69351 = 0;
				}
			}
		}
		else if ((unk_0xD3FACCDA4D66AEAD(Global_69351) && unk_0x1F1B2B6E500380C5(Global_69351, 0)) && !func_44(Global_69351, Global_101553.f_18972.f_5590, 1))
		{
			Global_101553.f_18972.f_5588 = 1;
		}
		if (unk_0xD3FACCDA4D66AEAD(iLocal_1028) && unk_0x1F1B2B6E500380C5(iLocal_1028, 0))
		{
			if (((!Global_101553.f_18972.f_5588 && iLocal_1028 != Global_69351) && iLocal_1028 != iLocal_1029) && !unk_0x687CB62D355FD7FD(iLocal_1028, 1))
			{
				func_31(iLocal_1028, 145);
				iLocal_1028 = 0;
				func_299(458, 0, -1, 1);
			}
		}
		else if (iLocal_1028 != 0)
		{
			iLocal_1028 = 0;
			func_299(458, 0, -1, 1);
		}
		if (unk_0xD3FACCDA4D66AEAD(iLocal_1029) && unk_0x1F1B2B6E500380C5(iLocal_1029, 0))
		{
		}
		else if (iLocal_1029 != 0)
		{
			iLocal_1029 = 0;
		}
	}
	if (Global_69355.f_66 != 0 && Global_69352 == 0)
	{
		func_196(&Global_69355, Global_69433);
		Global_69355.f_66 = 0;
	}
	Var3 = { 433.6721f, -1006.538f, 25.96351f };
	Var6 = { 433.6578f, -1017.5f, 32.09895f };
	fVar9 = 11.25f;
	if (iLocal_667 > 0 && iLocal_667 < 99)
	{
		if (iLocal_667 != 3)
		{
			if (((((unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) || !unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Var3, Var6, fVar9, 0, 1, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14))
			{
				iLocal_667 = 99;
			}
		}
	}
	if (func_298(iLocal_672))
	{
		if (!unk_0x16833EFAA58E63DB(uLocal_857))
		{
			if (((func_27(15) || func_27(12)) && iLocal_667 != 3) && !unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
			{
				uLocal_857 = func_296(428.37f, -1013.5f, 27.93f, 0);
				unk_0x32479C670EB9962F(uLocal_857, 225);
				unk_0x6F18BFEFE84565FF(uLocal_857, "IMPOUND_BLIPNAME");
				unk_0x9ABFD60B4E082992(uLocal_857, true);
			}
		}
		else if ((!(func_27(15) || func_27(12)) || iLocal_667 == 3) || unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
		{
			unk_0x0B57C567D698C373(&uLocal_857);
		}
	}
	else if (unk_0x16833EFAA58E63DB(uLocal_857))
	{
		unk_0x0B57C567D698C373(&uLocal_857);
	}
	switch (iLocal_667)
	{
		case 0:
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if ((Local_402.f_2 == 0 && (func_27(15) || func_27(12))) && !unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
				{
					if (func_298(iLocal_672))
					{
						if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Var3, Var6, fVar9, 0, 1, 0))
						{
							if (func_269(iLocal_672) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (func_192(iVar11, iLocal_672))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									func_155(&iLocal_668, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_155(&iLocal_668, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_667 = 1;
							}
							else
							{
								func_153("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && func_151(0, -1, 0))
			{
				if (func_150(iLocal_668, 1))
				{
					func_66(&iLocal_668);
					unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
					func_295();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (func_192(iVar13, iLocal_672))
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
							if (func_192(iVar14, iLocal_672))
							{
								if (iVar14 == 0)
								{
									Var15 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var15 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_286(&iLocal_671, iVar14, Var15, 179.24f, 1))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								if (unk_0xD3FACCDA4D66AEAD(iLocal_671))
								{
									if (iVar14 == 0)
									{
										func_285(18, 1, 0);
									}
									else
									{
										func_285(19, 1, 0);
									}
									if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
									{
										unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
									}
									func_240(iLocal_672, 118, 250);
									func_284(iVar14);
									func_31(iLocal_671, func_375());
									func_68(1, -1);
									iLocal_667 = 3;
									func_66(&iLocal_668);
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
			switch (func_375())
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
			func_295();
			if (!iLocal_657 || iLocal_658)
			{
				func_148(0);
				func_147(1, 1, 0, 0, 0);
				func_146(1, 2, 1, 1, 1);
				func_145("IMPOUND_TITLE");
				iLocal_663 = 0;
				iVar19 = -1;
				iVar21 = 0;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (func_192(iVar20, iLocal_672))
					{
						func_128(iVar21, unk_0xFC96A08CFC53257A(Global_101553.f_18972.f_5038[iVar18 /*157*/][iVar20 /*78*/].f_66), 0, 1, 0, 0);
						if (iVar19 == -1)
						{
							iVar19 = iVar21;
							iLocal_662 = iVar21;
						}
						unk_0x88B0F0DC270164B7(&iLocal_663, iVar21);
						iLocal_664[iVar21] = iVar20;
						func_128(iVar21, "IMPOUND_COST", 1, 1, 0, 0);
						func_283(250, 0);
						iVar21++;
					}
					iVar20++;
				}
				iVar21 = 0;
				func_121(iLocal_662, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar0 = 0;
				if (unk_0x955B8C8F89CC3AC0())
				{
					if (unk_0xF3C67EB69BFA8F67(2))
					{
						unk_0xABC36CFE4F3421A0(0, 1, 1);
						unk_0xABC36CFE4F3421A0(0, 2, 1);
						unk_0xFF61FA1A24898079(0, 237, 1);
						unk_0xFF61FA1A24898079(0, 238, 1);
						unk_0xFF61FA1A24898079(0, 241, 1);
						unk_0xFF61FA1A24898079(0, 242, 1);
						func_118(0, 0, 0, 1);
						func_117(0, -1, 1);
						if (func_116())
						{
							if (Global_2576653 != iLocal_662)
							{
								unk_0xAB16AADE80707D47(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_662 = Global_2576653;
								func_121(iLocal_662, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (unk_0x2A57AED61E15C7C7(2, 188) || unk_0x2A57AED61E15C7C7(2, 241))
				{
					if (!iLocal_659)
					{
						iLocal_660 = 1;
						unk_0xAB16AADE80707D47(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar22 = (iLocal_662 - 1);
						while (iVar22 >= 0)
						{
							if (unk_0x08BA6DD398CA197C(iLocal_663, iVar22))
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
								if (unk_0x08BA6DD398CA197C(iLocal_663, iVar22))
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
							func_121(iLocal_662, 1, 1);
						}
					}
				}
				else if (unk_0x2A57AED61E15C7C7(2, 187) || unk_0x2A57AED61E15C7C7(2, 242))
				{
					if (!iLocal_659)
					{
						iLocal_660 = 1;
						unk_0xAB16AADE80707D47(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar24 = iLocal_662 + 1;
						while (iVar24 <= 31)
						{
							if (unk_0x08BA6DD398CA197C(iLocal_663, iVar24))
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
								if (unk_0x08BA6DD398CA197C(iLocal_663, iVar24))
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
							func_121(iLocal_662, 1, 1);
						}
					}
				}
				else if (unk_0x382DB2E6C29D0F23(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0xAB16AADE80707D47(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!iLocal_659)
					{
						func_115("IMPOUND_CNF", 0, 0);
						func_114(-1);
						func_113(201, "ITEM_YES", -1);
						func_113(202, "ITEM_NO", -1);
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
						if (func_192(iLocal_664[iLocal_662], iLocal_672))
						{
							while (!func_286(&iLocal_671, iLocal_664[iLocal_662], Var26, 179.24f, 1))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							if (unk_0xD3FACCDA4D66AEAD(iLocal_671))
							{
								if (iLocal_662 == 0)
								{
									func_285(18, 1, 0);
								}
								else
								{
									func_285(19, 1, 0);
								}
								if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
								{
									unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
								}
								func_240(iLocal_672, 118, 250);
								func_284(iLocal_664[iLocal_662]);
								func_31(iLocal_671, func_375());
								func_68(1, -1);
								iLocal_667++;
								func_66(&iLocal_668);
								iLocal_668 = -1;
								iLocal_659 = 0;
							}
						}
						iLocal_658 = 1;
					}
				}
				else if (unk_0x382DB2E6C29D0F23(2, 202) || unk_0x382DB2E6C29D0F23(2, 238))
				{
					unk_0xAB16AADE80707D47(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			unk_0xB477A2D8CA963C52();
			if (iLocal_660)
			{
				func_115("", 0, 0);
				func_114(-1);
				func_113(201, "ITEM_SELECT", -1);
				func_113(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			if (func_151(0, -1, 0))
			{
				func_71(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_282())
			{
				func_31(iLocal_671, func_375());
				iLocal_667 = 99;
			}
			else if (unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), 431.4f, -997.33f, 24.76f, 1) > 100f)
			{
				if (unk_0xD3FACCDA4D66AEAD(iLocal_671))
				{
					if (!unk_0x912AD5A10E7633F0(iLocal_671, 0))
					{
						if (!unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_671, 0) && unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(iLocal_671, 1), unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), 1) > 100f)
						{
							if (!unk_0x7DB334F5F834726A(iLocal_671))
							{
								func_281(iLocal_671, 1, 145);
								unk_0xEFA1F34A28EE763C(&iLocal_671);
								unk_0xD74B8343DB9FEFD5(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
								iLocal_667 = 99;
							}
						}
						else if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_671, 0))
						{
							unk_0xD74B8343DB9FEFD5(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
							func_31(iLocal_671, func_375());
							iLocal_667 = 99;
						}
					}
					else
					{
						unk_0xD74B8343DB9FEFD5(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
						iLocal_667 = 99;
					}
				}
				else
				{
					unk_0xD74B8343DB9FEFD5(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
					iLocal_667 = 99;
				}
			}
			break;
		
		case 99:
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
			}
			func_66(&iLocal_668);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_664[iVar29] = -1;
				iVar29++;
			}
			func_285(18, 0, 0);
			func_285(19, 0, 0);
			if (unk_0xD3FACCDA4D66AEAD(iLocal_671))
			{
				unk_0x615DE34FC732CF11(&iLocal_671);
			}
			iLocal_667 = 0;
			break;
	}
	if (iLocal_667 == 0)
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, 1, 0))
		{
			if (!iLocal_670)
			{
				func_285(18, 1, 0);
				iLocal_670 = 1;
			}
		}
		else if (iLocal_670 && !unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, 1, 0))
		{
			func_285(18, 0, 0);
			iLocal_670 = 0;
		}
	}
}

int func_281(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x31A36F72D3ABDCD7(iParam0, &uVar0);
		if (!unk_0x509383441597090D(sVar1))
		{
			if (unk_0x3BB8D1C5FAAB25B3(sVar1) == unk_0x3BB8D1C5FAAB25B3("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_31(iParam0, iParam2);
	return 1;
}

int func_282()
{
	if (unk_0xB4F50EDEB984CEB4(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xB4F50EDEB984CEB4(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xB4F50EDEB984CEB4(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0xB4F50EDEB984CEB4(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_283(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17290.f_5092 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 >= 4)
	{
		return;
	}
	if (Global_17290.f_5611 != 1)
	{
		return;
	}
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		return;
	}
	Global_17290.f_3918[Global_17290.f_5092] = iParam0;
	Global_17290.f_5092++;
	Global_17290.f_2124[Global_17290.f_5609 /*5*/][Global_17290.f_5610] = 2;
	Global_17290.f_5610++;
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		fVar0 = func_124();
		if (Global_17290.f_4945[Global_17290.f_5089] && Global_17290.f_5610 == Global_17290.f_5608)
		{
			func_103(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17290.f_4938[(Global_17290.f_5089 - 1)])
		{
			Global_17290.f_4938[(Global_17290.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17290.f_5610 >= Global_17290.f_5608)
		{
			fVar3 = func_123();
			if (fVar3 > Global_17290.f_5612[Global_17290.f_5088])
			{
				Global_17290.f_5612[Global_17290.f_5088] = fVar3;
			}
		}
	}
}

void func_284(int iParam0)
{
	int iVar0;
	
	switch (func_375())
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
	if (iParam0 < 0 || iParam0 >= func_193(&(Global_101553.f_18972.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_101553.f_18972.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_285(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_34898[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (unk_0x08BA6DD398CA197C(Global_34898[iParam0 /*31*/].f_1, 1))
			{
				Global_34898[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_34898[iParam0 /*31*/].f_22 = 1f;
			}
			unk_0xED71B6E985126065(Global_34898[iParam0 /*31*/], Global_34898[iParam0 /*31*/].f_22, 0, 0);
			unk_0x6A7EBBBF8B647A25(Global_34898[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_34898[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_34898[iParam0 /*31*/].f_22 = 0f;
			unk_0xED71B6E985126065(Global_34898[iParam0 /*31*/], Global_34898[iParam0 /*31*/].f_22, 0, 0);
			unk_0x6A7EBBBF8B647A25(Global_34898[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_286(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_192(iParam1, func_375()) || unk_0xD3FACCDA4D66AEAD(*iParam0))
	{
		return 0;
	}
	switch (func_375())
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
	unk_0x491067A8E906F22D(Global_101553.f_18972.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (unk_0x2C1B5A0D3E233FC3(Global_101553.f_18972.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = unk_0xE044C77D0FC9DB66(Global_101553.f_18972.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, Param2, fParam5, 0, 0);
		func_287(*iParam0, &(Global_101553.f_18972.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		unk_0x74207974B5483203(*iParam0);
		unk_0x62F8A663774DA6EA(*iParam0, 0);
		unk_0x6783F2971949E5C2(*iParam0, 1);
		if (bParam6)
		{
			unk_0x2C07692AA3545079(Global_101553.f_18972.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_287(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		if (unk_0x3BB8D1C5FAAB25B3(&(uParam1->f_1)) != 0)
		{
			unk_0x58398448C0A1FC69(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0xE4FB82B76B7E1C67())
		{
			unk_0xC3F98B670A143BDD(iParam0, *uParam1);
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
			if (unk_0x08BA6DD398CA197C(uParam1->f_77, func_33(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x88B0F0DC270164B7(&(uParam1->f_77), func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x08BA6DD398CA197C(uParam1->f_77, func_33(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x88B0F0DC270164B7(&(uParam1->f_77), func_33(iVar1 + 1));
			}
		}
		if (unk_0x08BA6DD398CA197C(uParam1->f_77, 13))
		{
			unk_0xD11F996F2FA368A0(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x6AB3C011F32ADEE1(iParam0);
		}
		if (unk_0x08BA6DD398CA197C(uParam1->f_77, 12))
		{
			unk_0xAF450BF0FFB19AB7(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x742893DC43AB0799(iParam0);
		}
		unk_0x728045E0733945FD(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xE491F8C2C2A96483(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x08BA6DD398CA197C(uParam1->f_77, 15) || func_294(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_293())
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
		unk_0x3A9188D7AA55A522(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x5B5BB9221E7FD2F8(iParam0, 0);
		}
		else
		{
			unk_0x5B5BB9221E7FD2F8(iParam0, 0);
			unk_0x5B5BB9221E7FD2F8(iParam0, uParam1->f_65);
		}
		unk_0x0DD72E0CB1FCF511(iParam0, !unk_0x08BA6DD398CA197C(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xB032923150355520(iParam0, uParam1->f_70);
		}
		unk_0x1C73C3411F2D84F5(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x8AF3786CC992C15C(iParam0, 2, unk_0x08BA6DD398CA197C(uParam1->f_77, 28));
		unk_0x8AF3786CC992C15C(iParam0, 3, unk_0x08BA6DD398CA197C(uParam1->f_77, 29));
		unk_0x8AF3786CC992C15C(iParam0, 0, unk_0x08BA6DD398CA197C(uParam1->f_77, 30));
		unk_0x8AF3786CC992C15C(iParam0, 1, unk_0x08BA6DD398CA197C(uParam1->f_77, 31));
		unk_0x4BA36C8825F6A05D(iParam0, unk_0x08BA6DD398CA197C(uParam1->f_77, 10));
		if (unk_0x642E829F9613672E(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xB9C9103C26C01C4F(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xC388189407833D70(unk_0x705BC1BB91F530B5(iParam0)))
			{
				if (unk_0xBFD32C1D4D54E09B(unk_0x705BC1BB91F530B5(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_292(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_292(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xE7D026C4E15E6E7F(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x298721A98288CE92(iParam0, 1);
			}
			else
			{
				unk_0x8F3C1071FC8AD5C7(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_288(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xFC4346F9DE2AB4AE(uParam1->f_66) && !unk_0xE3C6E31B7236489F(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x08BA6DD398CA197C(uParam1->f_77, func_33(iVar2 + 1)))
				{
					if (!unk_0xDC21CA8351C75F1F(iParam0, iVar2 + 1))
					{
						unk_0x175E22227AEEF4D9(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0xDC21CA8351C75F1F(iParam0, iVar2 + 1))
				{
					unk_0x175E22227AEEF4D9(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x705BC1BB91F530B5(iParam0) == joaat("sheava") || unk_0x705BC1BB91F530B5(iParam0) == joaat("omnis")) || unk_0x705BC1BB91F530B5(iParam0) == joaat("le7b"))
		{
			if (unk_0xADEACD5FDE0D1FDE(iParam0, 0) == -1)
			{
				unk_0x175E22227AEEF4D9(iParam0, 1, false);
			}
		}
		if (unk_0x1E3C80E7C4B8041B(uParam1->f_66))
		{
			if (!unk_0x08BA6DD398CA197C(uParam1->f_77, 23))
			{
				if (unk_0x08BA6DD398CA197C(uParam1->f_77, 22))
				{
					unk_0x1682BCC816B3B035(iParam0, 2);
				}
				else
				{
					unk_0x1682BCC816B3B035(iParam0, 3);
				}
			}
			else
			{
				unk_0x1682BCC816B3B035(iParam0, 4);
			}
		}
		if (unk_0x08BA6DD398CA197C(uParam1->f_77, 27))
		{
			unk_0x6E48FDB1A085F319(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x6E48FDB1A085F319(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_288(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x1F1B2B6E500380C5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x141913B932CAECD6(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xE1A095B0BA3A0EA3(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x6D0141CBE6B3B145(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xADEACD5FDE0D1FDE(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xA9C332BE77BC05F4(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xF55EA971ECC0BCE5(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xF55EA971ECC0BCE5(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xF55EA971ECC0BCE5(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_291(unk_0x705BC1BB91F530B5(*iParam0), 1) && unk_0xADEACD5FDE0D1FDE(*iParam0, 24) != func_290(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xF55EA971ECC0BCE5(*iParam0, 24, func_290(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_289(*iParam0))
	{
		unk_0x30AACBA8A7A124E3(*iParam0, 1);
		unk_0x6783F2971949E5C2(*iParam0, 1);
	}
	return 1;
}

int func_289(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xD3FACCDA4D66AEAD(uParam0) && unk_0x1F1B2B6E500380C5(iParam0, 0)) && unk_0x141913B932CAECD6(iParam0) > 0)
	{
		unk_0xE1A095B0BA3A0EA3(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xADEACD5FDE0D1FDE(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x1600BD20ACC91AF6(iParam0, iVar1, unk_0xADEACD5FDE0D1FDE(iParam0, iVar1)), 16);
				iVar2 = unk_0x3BB8D1C5FAAB25B3(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x3BB8D1C5FAAB25B3("MNU_CAGE") || iVar2 == unk_0x3BB8D1C5FAAB25B3("SABRE_CAG"))
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

int func_290(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0) && unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		switch (unk_0x705BC1BB91F530B5(iParam0))
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
		iVar0 = unk_0x952B48FDCC7BFAAC(iParam0, 38);
		iVar1 = unk_0x952B48FDCC7BFAAC(iParam0, 24);
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

int func_291(int iParam0, int iParam1)
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
			if (!Global_262145.f_12151)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_12152)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_12150)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_12153)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_12155)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_12154)
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

void func_292(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x141913B932CAECD6(iParam0) > 0)
	{
		unk_0xE1A095B0BA3A0EA3(iParam0, 0);
		iVar0 = unk_0xADEACD5FDE0D1FDE(iParam0, 24);
		iVar1 = unk_0xA5E33613E078F35F(iParam0, 24);
		unk_0xA54551115DE6D858(iParam0, iParam1);
		if (unk_0x705BC1BB91F530B5(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xA9C332BE77BC05F4(iParam0, 24);
		}
		else
		{
			unk_0xF55EA971ECC0BCE5(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_293()
{
	return unk_0x6E373DDF41F95D44(joaat("mpindependence"));
}

int func_294(int iParam0)
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (unk_0x1F1B2B6E500380C5(iParam0, 0))
		{
			if (unk_0x71F81D3603710A43("MPBitset", 3))
			{
				if (unk_0x4184E6D274FCBFF1(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x96FB4818617F93B9(iParam0, "MPBitset");
				}
				return unk_0x08BA6DD398CA197C(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_295()
{
	unk_0xB5E011E673BCDF2D(0);
	unk_0xFF61FA1A24898079(0, 188, 1);
	unk_0xFF61FA1A24898079(0, 187, 1);
	unk_0xFF61FA1A24898079(0, 201, 1);
	unk_0xFF61FA1A24898079(0, 202, 1);
	unk_0xFF61FA1A24898079(0, 1, 1);
	unk_0xFF61FA1A24898079(0, 2, 1);
	unk_0xFF61FA1A24898079(0, 239, 1);
	unk_0xFF61FA1A24898079(0, 240, 1);
}

var func_296(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x52CE8C31DD5898E7(Param0);
	unk_0xC40118229E47A3D7(uVar0, func_297(unk_0xA86CA03D9749EEB3(), 1f, 1f));
	unk_0x71E206F83114C3D2(uVar0, iParam3);
	return uVar0;
}

float func_297(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_298(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_192(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_299(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_89();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x19A1C45894374F65((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x19A1C45894374F65((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x19A1C45894374F65((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x19A1C45894374F65((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x19A1C45894374F65((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x19A1C45894374F65((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x19A1C45894374F65((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x19A1C45894374F65((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x19A1C45894374F65((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x19A1C45894374F65((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x19A1C45894374F65((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x19A1C45894374F65((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x19A1C45894374F65((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x19A1C45894374F65((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD0BD93DA65E5EE25(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_300(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_301(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_301(int iParam0)
{
	if (func_25(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_302(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (!unk_0x08BA6DD398CA197C(Global_101553.f_8871.f_25, 7))
	{
		if (!unk_0x08BA6DD398CA197C(*uParam0, 6))
		{
			if (func_27(13) && func_14(func_16()))
			{
				unk_0x88B0F0DC270164B7(uParam0, 6);
				iVar0 = func_9();
				uParam0->f_6 = { func_333(iVar0) };
				if (Global_25457 == iVar0 || Global_25457 == 0)
				{
					func_3(1);
					Var1 = { func_332("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					unk_0xC94C39C53546E775(&Var1);
					iVar0 = (Global_25457 + 1 % 8);
					func_330(uParam0, iVar0);
					uParam0->f_2 = (unk_0xDF658EB6CA91DFBC() + unk_0xB5BF1B58C833F7A9(8000, 12000));
					unk_0x88B0F0DC270164B7(uParam0, 12);
					if (iVar0 == 7)
					{
						unk_0x88B0F0DC270164B7(&(Global_101553.f_8871.f_25), 7);
						func_329(255, 0);
					}
				}
				else
				{
					func_330(uParam0, 0);
					unk_0x09C86C0C5CA26B1E(&(Global_101553.f_8871.f_25), 12);
				}
			}
		}
		else
		{
			func_328();
			if (!unk_0x08BA6DD398CA197C(*uParam0, 31))
			{
				if (!unk_0x08BA6DD398CA197C(*uParam0, 25))
				{
					func_327(uParam0);
				}
				else if (func_326())
				{
					func_310(uParam0);
					uParam0->f_3 = unk_0xDF658EB6CA91DFBC() + 2000;
				}
				if (!func_309(0))
				{
					func_329(255, 0);
				}
			}
			else if (func_309(0))
			{
				if (unk_0xDF658EB6CA91DFBC() > uParam0->f_3)
				{
					func_329(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16()))
			{
				func_303(uParam0);
			}
		}
	}
}

void func_303(var uParam0)
{
	struct<8> Var0;
	
	if (unk_0x08BA6DD398CA197C(*uParam0, 31))
	{
		func_308(uParam0);
	}
	if (unk_0x08BA6DD398CA197C(*uParam0, 25))
	{
		func_304(uParam0);
	}
	Var0 = { func_332("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (unk_0x6DEB8F88FFE09057(&Var0))
	{
		unk_0x7C1793252FA472B6(&Var0);
	}
	unk_0x09C86C0C5CA26B1E(uParam0, 6);
	unk_0x09C86C0C5CA26B1E(uParam0, 30);
	unk_0x09C86C0C5CA26B1E(uParam0, 8);
}

void func_304(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_307(iVar0);
	iVar2 = func_306(iVar1);
	iVar3 = func_305(iVar1);
	if (iVar2 != 0)
	{
		unk_0x2C07692AA3545079(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x2C07692AA3545079(iVar3);
	}
	unk_0x09C86C0C5CA26B1E(uParam0, 25);
}

int func_305(int iParam0)
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

int func_306(int iParam0)
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

int func_307(int iParam0)
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

void func_308(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_4))
	{
		unk_0xCB45A4A2C96B5917(unk_0xC59DF10B4FC39DF8(uParam0->f_4, 0), 10f);
		unk_0xEFA1F34A28EE763C(&(uParam0->f_4));
	}
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_5))
	{
		unk_0xCB45A4A2C96B5917(unk_0xC59DF10B4FC39DF8(uParam0->f_5, 0), 10f);
		unk_0x4E82D83B086B5C93(&(uParam0->f_5));
	}
	unk_0x09C86C0C5CA26B1E(uParam0, 31);
}

bool func_309(bool bParam0)
{
	if (bParam0)
	{
		return Global_98513.f_2 > 0.5f;
	}
	return Global_98513.f_2 >= 255f;
}

void func_310(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_307(iVar0);
	func_311(iVar1, &(uParam0->f_5), &(uParam0->f_4), func_325(iVar0), func_324(iVar0), 1);
	unk_0x88B0F0DC270164B7(uParam0, 31);
}

void func_311(int iParam0, var uParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 12:
			func_323(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 109:
			func_322(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 43:
			func_321(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 35:
			func_320(uParam2, Param3, uParam6, bParam7);
			break;
		
		case 28:
			func_319(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 17:
			func_318(uParam1, uParam2, Param3, uParam6, bParam7);
			break;
		
		case 49:
			func_316(uParam1, uParam2, Param3, uParam6);
			break;
		
		case 25:
			func_315(uParam1, Param3, uParam6);
			break;
		
		case 14:
			func_314(uParam1, Param3, uParam6);
			break;
		
		case 86:
			func_312(uParam1, Param3, uParam6);
			break;
	}
}

void func_312(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_306(86);
	if (unk_0x2C1B5A0D3E233FC3(iVar0))
	{
		*uParam0 = unk_0xF8418B3B87CFCCBF(5, iVar0, Param1, uParam4, 1, 1);
		unk_0xD40823AFB0472B1C(*uParam0, 1);
		unk_0x705E4255B39314A7(*uParam0, 227, 1);
		unk_0x2C07692AA3545079(iVar0);
		unk_0xA082D4AC00BC651A(*uParam0, 0);
		unk_0x64EB89F75844C12B(*uParam0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_313(*uParam0);
		return;
	}
}

void func_313(var uParam0)
{
	unk_0x1BECB532D62605C2(uParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	unk_0x1BECB532D62605C2(uParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	unk_0x1BECB532D62605C2(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	unk_0x1BECB532D62605C2(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	unk_0x1BECB532D62605C2(uParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	unk_0x1BECB532D62605C2(uParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	unk_0x1BECB532D62605C2(uParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	unk_0x1BECB532D62605C2(uParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	unk_0x1BECB532D62605C2(uParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	unk_0x1BECB532D62605C2(uParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	unk_0x1BECB532D62605C2(uParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	unk_0x1BECB532D62605C2(uParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x1BECB532D62605C2(uParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_314(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_306(14);
	if (unk_0x2C1B5A0D3E233FC3(iVar0))
	{
		*uParam0 = unk_0xF8418B3B87CFCCBF(5, iVar0, Param1, uParam4, 1, 1);
		unk_0xD40823AFB0472B1C(*uParam0, 1);
		unk_0x705E4255B39314A7(*uParam0, 227, 1);
		unk_0x2C07692AA3545079(iVar0);
		unk_0xA082D4AC00BC651A(*uParam0, 0);
		unk_0x64EB89F75844C12B(*uParam0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_313(*uParam0);
		return;
	}
}

void func_315(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_306(25);
	if (unk_0x2C1B5A0D3E233FC3(iVar0))
	{
		*uParam0 = unk_0xF8418B3B87CFCCBF(4, iVar0, Param1, uParam4, 1, 1);
		unk_0xD40823AFB0472B1C(*uParam0, 1);
		unk_0x705E4255B39314A7(*uParam0, 227, 1);
		unk_0x2C07692AA3545079(iVar0);
		unk_0xA082D4AC00BC651A(*uParam0, 0);
		unk_0x64EB89F75844C12B(*uParam0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 + 0.02f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 - 0.23f), (Param1.f_1 + 0.04f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.11f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, (Param1.f_0 + 0.09f), (Param1.f_1 - 0.06f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_313(*uParam0);
		return;
	}
}

void func_316(var uParam0, var uParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_306(49);
	iVar1 = func_305(49);
	if (unk_0x2C1B5A0D3E233FC3(iVar0) && unk_0x2C1B5A0D3E233FC3(iVar1))
	{
		*uParam0 = unk_0xF8418B3B87CFCCBF(4, iVar0, Param2, uParam5, 1, 1);
		unk_0xD40823AFB0472B1C(*uParam0, 1);
		unk_0x705E4255B39314A7(*uParam0, 227, 1);
		unk_0x2C07692AA3545079(iVar0);
		unk_0xA082D4AC00BC651A(*uParam0, 0);
		unk_0x64EB89F75844C12B(*uParam0);
		unk_0xDDCD96747E437A72(1110, ((Param2.f_0 + 0.12f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, ((Param2.f_0 - 0.03f) - 0.3f), ((Param2.f_1 + 0.04f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, ((Param2.f_0 - 0.2f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, ((Param2.f_0 - 0.05f) - 0.3f), ((Param2.f_1 - 0.15f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xDDCD96747E437A72(1110, ((Param2.f_0 + 0.01f) - 0.3f), ((Param2.f_1 - 0.06f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_313(*uParam0);
		Var2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = unk_0xE044C77D0FC9DB66(iVar1, Param2 + Var2, uParam5, 1, 1);
		unk_0x2C07692AA3545079(iVar1);
		unk_0xA0BCF2878D04DC73(*uParam1, 2f);
		unk_0x74207974B5483203(*uParam1);
		unk_0x63CAEF48CD3CA460(*uParam1, 2f);
		unk_0xA97EDBE602ECDFF3(*uParam1, 1f);
		unk_0xCDB4F9F6E01571C2(*uParam1, 0, func_317());
		unk_0xCDB4F9F6E01571C2(*uParam1, 1, func_317());
		unk_0xCDB4F9F6E01571C2(*uParam1, 2, func_317());
		unk_0xCDB4F9F6E01571C2(*uParam1, 3, func_317());
		unk_0xCDB4F9F6E01571C2(*uParam1, 4, func_317());
		unk_0xCDB4F9F6E01571C2(*uParam1, 5, func_317());
		unk_0xA353FBC64C96C09F(*uParam1, 15f);
		unk_0x6046267C19B35C71(*uParam1, 3);
		unk_0x028D0662CAA67D4F(*uParam1, 2);
		unk_0x23210FECFBD7B39A(*uParam1, 1);
		unk_0x64EB89F75844C12B(*uParam1);
		return;
	}
}

int func_317()
{
	if (unk_0x08BA6DD398CA197C(unk_0xB5BF1B58C833F7A9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_318(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_306(17);
	iVar1 = func_305(17);
	if (unk_0x2C1B5A0D3E233FC3(iVar0) && unk_0x2C1B5A0D3E233FC3(iVar1))
	{
		*uParam0 = unk_0xF8418B3B87CFCCBF(4, iVar1, Param2, uParam5, 1, 1);
		unk_0xD40823AFB0472B1C(*uParam0, 1);
		unk_0x705E4255B39314A7(*uParam0, 227, 1);
		unk_0x2C07692AA3545079(iVar1);
		unk_0xA082D4AC00BC651A(*uParam0, 0);
		unk_0x64EB89F75844C12B(*uParam0);
		Var2 = { 0.02f, -0.01f, 0f };
		unk_0xDDCD96747E437A72(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.23f, 0.04f, 0f };
		unk_0xDDCD96747E437A72(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.01f, 0f };
		unk_0xDDCD96747E437A72(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.11f, 0f };
		unk_0xDDCD96747E437A72(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.09f, -0.06f, 0f };
		unk_0xDDCD96747E437A72(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam6)
		{
			Var2 = { 0.5783f, 0.1357f, -0.0683f };
			unk_0xDDCD96747E437A72(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.0477f, 0.1103f, -0.1388f };
			unk_0xDDCD96747E437A72(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.5048f, 0.4595f, -0.1953f };
			unk_0xDDCD96747E437A72(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_313(*uParam0);
		*uParam1 = unk_0xE044C77D0FC9DB66(iVar0, (Param2.f_0 - 0.4f), (Param2.f_1 - 0.5f), Param2.f_2, uParam5, 1, 1);
		unk_0x2C07692AA3545079(iVar0);
		unk_0x4A1ACDDF793F9777(*uParam1, 0f, 85f, 0f, 2, 1);
		unk_0x63CAEF48CD3CA460(*uParam1, 20.5f);
		unk_0xA353FBC64C96C09F(*uParam1, 15f);
		unk_0x64EB89F75844C12B(*uParam1);
		return;
	}
}

void func_319(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_306(28);
	if (unk_0x2C1B5A0D3E233FC3(iVar0))
	{
		*uParam0 = unk_0xF8418B3B87CFCCBF(28, iVar0, Param1, uParam4, 1, 1);
		unk_0xD40823AFB0472B1C(*uParam0, 1);
		unk_0x705E4255B39314A7(*uParam0, 227, 1);
		unk_0x2C07692AA3545079(iVar0);
		unk_0xA082D4AC00BC651A(*uParam0, 0);
		unk_0x64EB89F75844C12B(*uParam0);
		Var1 = { 0.02f, -0.01f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.01f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.5206f, 0f, 0.003f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.1258f, 0.0362f, -0.0837f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6107f, 0.4678f, -0.0815f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_320(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_306(35);
	if (unk_0x2C1B5A0D3E233FC3(iVar0))
	{
		*uParam0 = unk_0xE044C77D0FC9DB66(iVar0, Param1, uParam4, 1, 1);
		unk_0x2C07692AA3545079(iVar0);
		unk_0x4A1ACDDF793F9777(*uParam0, 0f, 170f, 0f, 2, 1);
		unk_0xA0BCF2878D04DC73(*uParam0, 1f);
		unk_0x63CAEF48CD3CA460(*uParam0, 1f);
		unk_0xA353FBC64C96C09F(*uParam0, 15f);
		unk_0xCDB4F9F6E01571C2(*uParam0, 0, func_317());
		unk_0xCDB4F9F6E01571C2(*uParam0, 1, func_317());
		unk_0xCDB4F9F6E01571C2(*uParam0, 2, func_317());
		unk_0xCDB4F9F6E01571C2(*uParam0, 3, func_317());
		unk_0xCDB4F9F6E01571C2(*uParam0, 4, func_317());
		unk_0xCDB4F9F6E01571C2(*uParam0, 5, func_317());
		unk_0x6046267C19B35C71(*uParam0, 3);
		unk_0x028D0662CAA67D4F(*uParam0, 2);
		unk_0x23210FECFBD7B39A(*uParam0, 1);
		unk_0x64EB89F75844C12B(*uParam0);
		if (bParam5)
		{
			Var1 = { 0.4947f, 2.3632f, 0.1294f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
			Var1 = { 0.9243f, 2.6606f, 0.1951f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
			Var1 = { 1.5467f, 2.5044f, 0.2418f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
			Var1 = { 1.357f, 3.8779f, 0.3259f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_321(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_306(43);
	if (unk_0x2C1B5A0D3E233FC3(iVar0))
	{
		*uParam0 = unk_0xF8418B3B87CFCCBF(28, iVar0, Param1, uParam4, 1, 1);
		unk_0xD40823AFB0472B1C(*uParam0, 1);
		unk_0x705E4255B39314A7(*uParam0, 227, 1);
		unk_0x2C07692AA3545079(iVar0);
		unk_0xA082D4AC00BC651A(*uParam0, 0);
		unk_0x64EB89F75844C12B(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.4125f, -0.5815f, -0.2056f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
			Var1 = { 0.6332f, -1.1758f, -0.7106f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_322(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_306(109);
	if (unk_0x2C1B5A0D3E233FC3(iVar0))
	{
		*uParam0 = unk_0xF8418B3B87CFCCBF(28, iVar0, Param1, uParam4, 1, 1);
		unk_0xD40823AFB0472B1C(*uParam0, 1);
		unk_0x2C07692AA3545079(iVar0);
		unk_0xA082D4AC00BC651A(*uParam0, 0);
		unk_0x64EB89F75844C12B(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.4936f, -0.1763f, -0.0522f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.0645f, 0.0483f, -0.0698f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6011f, -0.1704f, -0.1473f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
		}
		func_313(*uParam0);
		return;
	}
}

void func_323(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_306(12);
	if (unk_0x2C1B5A0D3E233FC3(iVar0))
	{
		*uParam0 = unk_0xF8418B3B87CFCCBF(28, iVar0, Param1, uParam4, 1, 1);
		unk_0xD40823AFB0472B1C(*uParam0, 1);
		unk_0x2C07692AA3545079(iVar0);
		unk_0xA082D4AC00BC651A(*uParam0, 0);
		unk_0x64EB89F75844C12B(*uParam0);
		Var1 = { 0.04f, 0.02f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.01f, 0.05f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, -0.01f, 0f };
		unk_0xDDCD96747E437A72(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.2417f, -0.3975f, -0.2282f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.0747f, -0.8188f, -0.2576f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.4322f, -1.1548f, -0.4902f };
			unk_0xDDCD96747E437A72(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
		}
		func_313(*uParam0);
		return;
	}
}

float func_324(int iParam0)
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

Vector3 func_325(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_98490[0 /*3*/];
		
		case 2:
			return Global_98490[1 /*3*/];
		
		case 3:
			return Global_98490[2 /*3*/];
		
		case 4:
			return Global_98490[3 /*3*/];
		
		case 5:
			return Global_98490[4 /*3*/];
		
		case 6:
			return Global_98490[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_326()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_307(iVar0);
	iVar2 = func_306(iVar1);
	iVar3 = func_305(iVar1);
	if (iVar2 != 0)
	{
		if (!unk_0x2C1B5A0D3E233FC3(iVar2))
		{
			return 0;
		}
	}
	if (iVar3 != 0)
	{
		if (!unk_0x2C1B5A0D3E233FC3(iVar3))
		{
			return 0;
		}
	}
	return 1;
}

void func_327(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_307(iVar0);
	iVar2 = func_306(iVar1);
	iVar3 = func_305(iVar1);
	if (iVar2 != 0)
	{
		unk_0x491067A8E906F22D(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x491067A8E906F22D(iVar3);
	}
	unk_0x88B0F0DC270164B7(uParam0, 25);
}

void func_328()
{
	if (Global_98513.f_3 == unk_0xFDE3C5D948890F7C())
	{
		return;
	}
	Global_98513.f_3 = unk_0xFDE3C5D948890F7C();
	if (Global_98513.f_2 == 0f && Global_98513.f_1 == 0f)
	{
		return;
	}
	if (Global_98513.f_2 != Global_98513.f_1)
	{
		Global_98513.f_2 = (Global_98513.f_2 + Global_98513);
		if (Global_98513 <= 0f)
		{
			if (Global_98513.f_2 < Global_98513.f_1)
			{
				Global_98513.f_2 = Global_98513.f_1;
			}
		}
		else if (Global_98513.f_2 > Global_98513.f_1)
		{
			Global_98513.f_2 = Global_98513.f_1;
		}
	}
	unk_0x676A3D7F15838EEA(0.5f, 0.5f, 1f, 1f, 255, 255, 255, unk_0xF2DB717A73826179(Global_98513.f_2), 0);
}

void func_329(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	if (iParam1 <= 0)
	{
		Global_98513 = 0f;
		Global_98513.f_1 = fVar0;
		Global_98513.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_98513.f_2);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1) / (unk_0x62E2FDDFDA7A731D() * 1000f));
		Global_98513 = (fVar1 / fVar2);
		Global_98513.f_1 = fVar0;
	}
}

void func_330(var uParam0, int iParam1)
{
	func_331(&(Global_101553.f_8871.f_25), iParam1, 14336, 11);
}

void func_331(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, iParam3));
}

struct<8> func_332(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_333(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_98468[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_334()
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_392)
			{
				unk_0x491067A8E906F22D(joaat("v_ilev_uvline"));
				iLocal_391 = 1;
				if (unk_0x2C1B5A0D3E233FC3(joaat("v_ilev_uvline")))
				{
					if (func_335(8))
					{
						uLocal_393[4] = unk_0xE1C25770C2FB7AE3(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, 1, 0);
						unk_0x27327EB62D93CDBA(uLocal_393[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
						unk_0x4A1ACDDF793F9777(uLocal_393[4], 0f, 0f, 116.9f, 2, 1);
						uLocal_393[1] = unk_0xE1C25770C2FB7AE3(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, 1, 0);
						unk_0x27327EB62D93CDBA(uLocal_393[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
						unk_0x4A1ACDDF793F9777(uLocal_393[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_335(9))
					{
						uLocal_393[5] = unk_0xE1C25770C2FB7AE3(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, 1, 0);
						unk_0x27327EB62D93CDBA(uLocal_393[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
						unk_0x4A1ACDDF793F9777(uLocal_393[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_335(10))
					{
						uLocal_393[3] = unk_0xE1C25770C2FB7AE3(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 1, 1, 0);
						unk_0x27327EB62D93CDBA(uLocal_393[3], 471.48f, fVar0, 29.82f, 1, 0, 0, 1);
						unk_0x4A1ACDDF793F9777(uLocal_393[3], 0f, 0f, 116.9f, 2, 1);
					}
					uVar1 = unk_0x07BE5BF18FEF759E(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (unk_0xD3FACCDA4D66AEAD(uLocal_393[iVar2]))
						{
							unk_0xEDBE0CD7C81FA37E(uLocal_393[iVar2], 1, 0);
							unk_0x1A3D669FD1E4223C(uLocal_393[iVar2], 1);
							unk_0xC442297E8EEF1642(uLocal_393[iVar2], uVar1);
						}
						iVar2++;
					}
					unk_0x2C07692AA3545079(joaat("v_ilev_uvline"));
					iLocal_392 = 1;
				}
			}
		}
		else
		{
			if (iLocal_391)
			{
				unk_0x2C07692AA3545079(joaat("v_ilev_uvline"));
				iLocal_391 = 0;
			}
			if (iLocal_392)
			{
				func_378();
				iLocal_392 = 0;
			}
		}
	}
}

int func_335(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101553.f_7940.f_330[iParam0 /*6*/];
}

void func_336()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68446.f_553)
	{
		if (!iLocal_400)
		{
			Global_68446.f_554 = 0;
			iLocal_400 = 1;
		}
		else if (Global_68446.f_554 >= 68)
		{
			Global_68446.f_553 = 0;
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
		if (func_58(&Local_674, iVar1))
		{
			func_374(&Local_695, iVar1);
			if ((Local_695.f_69 && Local_402.f_3 == 0) || iVar1 == 14)
			{
				uLocal_941[iVar1] = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Local_695.f_55, 0);
			}
			else
			{
				uLocal_941[iVar1] = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Local_674, 0);
			}
			if (func_373())
			{
				func_372(iVar1);
				func_370(iVar1);
				func_369(iVar1);
				func_368(iVar1);
				func_366(iVar1);
				func_365(iVar1);
				func_364(iVar1);
				func_338(iVar1);
				if (unk_0x08BA6DD398CA197C(uLocal_48[iVar1], 2))
				{
					if (Global_68446.f_553)
					{
						iLocal_400 = 0;
					}
					func_379(iVar1);
				}
			}
			else
			{
				func_337(iVar1);
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
		if (unk_0x08BA6DD398CA197C(uLocal_48[iLocal_867[iVar0]], 2))
		{
			func_379(iLocal_867[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_940 != -1)
	{
		func_379(iLocal_940);
		iLocal_940 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_379(iLocal_47);
	if (iLocal_1014)
	{
		func_379(21);
		func_379(22);
		func_379(23);
		iLocal_1014 = 0;
		bLocal_1015 = true;
	}
	else if (bLocal_1015)
	{
		bLocal_1015 = false;
	}
	if (Global_68446.f_553)
	{
		Global_68446.f_554++;
	}
}

void func_337(int iParam0)
{
	if (iLocal_117[iParam0] != 0)
	{
		unk_0x2C07692AA3545079(iLocal_117[iParam0]);
		iLocal_117[iParam0] = 0;
	}
}

void func_338(int iParam0)
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
	if (!unk_0x08BA6DD398CA197C(uLocal_48[iParam0], 2))
	{
		func_337(iParam0);
	}
	unk_0x09C86C0C5CA26B1E(&(uLocal_48[iParam0]), 2);
	if (unk_0x08BA6DD398CA197C(uLocal_48[iParam0], 1))
	{
		fVar2 = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Local_186[iParam0 /*3*/], 1);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (unk_0x08BA6DD398CA197C(Local_674.f_9, 23))
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
	else if (unk_0x08BA6DD398CA197C(Local_674.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0x08BA6DD398CA197C(Local_674.f_9, 19) || unk_0x08BA6DD398CA197C(Local_674.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0x08BA6DD398CA197C(Local_674.f_9, 25) && (((iLocal_672 == 0 && Local_402.f_0 == 21) || (iLocal_672 == 0 && Local_402.f_0 == 22)) || (iLocal_672 == 0 && Local_402.f_0 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_139[iParam0]))
	{
		if (unk_0x1F1B2B6E500380C5(Global_68446.f_139[iParam0], 0))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (iParam0 == 24)
				{
					uVar3 = unk_0x8FD32443A080784B(Global_68446.f_139[iParam0], -1, 0);
					if (!unk_0xD3FACCDA4D66AEAD(uVar3))
					{
						iVar3 = unk_0xA89799E38057BB0B(Global_68446.f_139[iParam0], -1);
					}
					iVar4 = func_300(iVar3);
					if (iVar4 != Global_101553.f_18972.f_5591)
					{
						if (func_25(iVar4))
						{
							func_363("Updating last character to use vehicle gen", iVar4);
							Global_101553.f_18972.f_5591 = iVar4;
						}
					}
				}
				if (!unk_0x687CB62D355FD7FD(Global_68446.f_139[iParam0], 1))
				{
					func_362("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_60(Global_68446.f_139[iParam0])) && !func_59(Global_68446.f_139[iParam0])) && unk_0x705BC1BB91F530B5(Global_68446.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xB6EC3F3CD188EFCE(Global_68446.f_139[iParam0], true);
					}
					Global_68446.f_139[iParam0] = 0;
					Global_68446[iParam0] = 1;
					func_361(iParam0);
					return;
				}
				if (((unk_0x08BA6DD398CA197C(uLocal_48[iParam0], 0) && !unk_0x08BA6DD398CA197C(Local_674.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_362("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_60(Global_68446.f_139[iParam0])) && !func_59(Global_68446.f_139[iParam0])) && unk_0x705BC1BB91F530B5(Global_68446.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xB6EC3F3CD188EFCE(Global_68446.f_139[iParam0], true);
					}
					unk_0x615DE34FC732CF11(&(Global_68446.f_139[iParam0]));
					Global_68446.f_139[iParam0] = 0;
					Global_68446[iParam0] = 1;
					func_361(iParam0);
					return;
				}
				if ((!unk_0x08BA6DD398CA197C(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (unk_0x4AEC0F4FC7FE62C7(Global_68446.f_139[iParam0], unk_0xA0081090911D13E5(), 1))
					{
						func_362("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_60(Global_68446.f_139[iParam0])) && !func_59(Global_68446.f_139[iParam0])) && unk_0x705BC1BB91F530B5(Global_68446.f_139[iParam0]) != joaat("monster"))
						{
							unk_0xB6EC3F3CD188EFCE(Global_68446.f_139[iParam0], true);
						}
						unk_0x615DE34FC732CF11(&(Global_68446.f_139[iParam0]));
						Global_68446.f_139[iParam0] = 0;
						Global_68446[iParam0] = 1;
						func_361(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((unk_0x08BA6DD398CA197C(uLocal_48[iParam0], 1) && unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(Global_68446.f_139[iParam0], 1), Local_186[iParam0 /*3*/], 1) > fVar5) || (!unk_0x08BA6DD398CA197C(uLocal_48[iParam0], 1) && unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(Global_68446.f_139[iParam0], 1), Local_674, 1) > fVar5))
				{
					func_362("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_60(Global_68446.f_139[iParam0])) && !func_59(Global_68446.f_139[iParam0])) && unk_0x705BC1BB91F530B5(Global_68446.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xB6EC3F3CD188EFCE(Global_68446.f_139[iParam0], true);
					}
					unk_0x615DE34FC732CF11(&(Global_68446.f_139[iParam0]));
					Global_68446.f_139[iParam0] = 0;
					Global_68446[iParam0] = 1;
					func_361(iParam0);
					return;
				}
				if (!func_64(iParam0, 0))
				{
					func_362("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_60(Global_68446.f_139[iParam0])) && !func_59(Global_68446.f_139[iParam0])) && unk_0x705BC1BB91F530B5(Global_68446.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xB6EC3F3CD188EFCE(Global_68446.f_139[iParam0], true);
					}
					unk_0x615DE34FC732CF11(&(Global_68446.f_139[iParam0]));
					Global_68446.f_139[iParam0] = 0;
					Global_68446[iParam0] = 1;
					func_361(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_44(Global_68446.f_139[iParam0], iLocal_672, 1) && !func_60(Global_68446.f_139[iParam0])) && !func_59(Global_68446.f_139[iParam0]))
					{
						func_362("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0x705BC1BB91F530B5(Global_68446.f_139[iParam0]) != joaat("monster"))
						{
							unk_0xB6EC3F3CD188EFCE(Global_68446.f_139[iParam0], true);
						}
						Global_68446.f_139[iParam0] = 0;
						Global_68446[iParam0] = 1;
						func_361(iParam0);
						return;
					}
				}
				if (uLocal_941[iParam0] > fVar0 && (!unk_0x08BA6DD398CA197C(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_47();
						iVar7 = Global_101553.f_18972.f_4801;
						func_359(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_274(iVar6, iVar7))
						{
							if ((!func_60(Global_68446.f_139[iParam0]) && !func_59(Global_68446.f_139[iParam0])) && unk_0x705BC1BB91F530B5(Global_68446.f_139[iParam0]) != joaat("monster"))
							{
								unk_0xB6EC3F3CD188EFCE(Global_68446.f_139[iParam0], true);
							}
							func_31(Global_68446.f_139[iParam0], Global_101553.f_18972.f_5591);
							Global_68446[iParam0] = 1;
							func_361(iParam0);
						}
						else if (func_36(Global_68446.f_139[iParam0]))
						{
							func_32(Global_68446.f_139[iParam0], &Global_2453170);
							Global_2453169 = Global_101553.f_18972.f_5591;
							iLocal_1029 = Global_68446.f_139[iParam0];
						}
					}
					func_362("No longer needed: Player out for range");
					unk_0x615DE34FC732CF11(&(Global_68446.f_139[iParam0]));
					unk_0x0B17BC5D018E224B(Local_674, 3f, 0, 0, 0, 0);
					unk_0xD74B8343DB9FEFD5(Local_674, 3f, 0, 0, 0, 0, 0);
					Global_68446.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
					{
						Global_68446.f_584 = { Local_674 };
						Global_68446.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0x08BA6DD398CA197C(Local_674.f_9, 30))
				{
					if (!unk_0x08BA6DD398CA197C(Local_674.f_9, 31))
					{
						if (!unk_0x55D9E756AFC7AF1D(Global_68446.f_139[iParam0]) && !unk_0x884626CDE60D6728(Global_68446.f_139[iParam0]))
						{
							Var8 = { unk_0xC59DF10B4FC39DF8(Global_68446.f_139[iParam0], 1) };
							if (Var8.f_2 >= func_358(iParam0))
							{
								unk_0xCB50578868A841C2(Global_68446.f_139[iParam0], 1);
								unk_0x88B0F0DC270164B7(&(Local_674.f_9), 31);
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
		Global_68446.f_139[iParam0] = 0;
	}
	if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_139[iParam0]))
	{
		func_362("No longer needed: Vehicle not driveable");
		unk_0x615DE34FC732CF11(&(Global_68446.f_139[iParam0]));
		Global_68446.f_139[iParam0] = 0;
		Global_68446[iParam0] = 1;
		func_361(iParam0);
		return;
	}
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return;
	}
	if (Global_69353 == iParam0)
	{
		func_362("Processing a vehgen vehicle handover request.");
		if (unk_0xD3FACCDA4D66AEAD(Global_69352) && unk_0x1F1B2B6E500380C5(Global_69352, 0))
		{
			if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_139[iParam0]) && unk_0x1F1B2B6E500380C5(Global_68446.f_139[iParam0], 0))
			{
				if (Global_68446.f_139[iParam0] == Global_69352)
				{
					func_362("Vehicle to be handed over is the same vehicle.");
					Global_69353 = -1;
					Global_69352 = 0;
					return;
				}
				else
				{
					func_362("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_60(Global_68446.f_139[iParam0])) && !func_59(Global_68446.f_139[iParam0])) && unk_0x705BC1BB91F530B5(Global_68446.f_139[iParam0]) != joaat("monster"))
					{
						unk_0xB6EC3F3CD188EFCE(Global_68446.f_139[iParam0], true);
					}
					unk_0x615DE34FC732CF11(&(Global_68446.f_139[iParam0]));
					Global_68446.f_139[iParam0] = 0;
				}
			}
			Global_68446.f_139[iParam0] = Global_69352;
			Global_68446[iParam0] = 1;
			unk_0x09C86C0C5CA26B1E(&(uLocal_48[iParam0]), 0);
			unk_0x88B0F0DC270164B7(&(uLocal_48[iParam0]), 1);
			unk_0x09C86C0C5CA26B1E(&(uLocal_48[iParam0]), 3);
			Local_186[iParam0 /*3*/] = { unk_0xC59DF10B4FC39DF8(Global_69352, 1) };
			Global_69353 = -1;
			if (unk_0x08BA6DD398CA197C(Local_674.f_9, 10))
			{
				Var11.f_9 = 49;
				Var11.f_59 = 2;
				func_32(Global_69352, &Var11);
				if (Global_69354)
				{
					func_109(iParam0, &Var11, unk_0xC59DF10B4FC39DF8(Global_69352, 1), unk_0x5E6FDC4F3A8C8EDE(Global_69352), func_43(Global_69352));
				}
				else
				{
					func_109(iParam0, &Var11, Global_101553.f_18972.f_1864[Local_674.f_14 /*3*/], Global_101553.f_18972.f_1934[Local_674.f_14], func_43(Global_69352));
				}
				Global_68446.f_139[iParam0] = Global_69352;
				Global_68446.f_484[iParam0] = Global_68446.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar89 = func_375();
				if (func_25(iVar89))
				{
					func_362("Players stored switch vehicle cleared for prep getaway.");
					Global_91174[iVar89] = 0;
				}
			}
			unk_0x7B17650F15A8876D(Global_68446.f_139[iParam0], 1, 1);
			if (iParam0 == 24)
			{
				unk_0xB6EC3F3CD188EFCE(Global_68446.f_139[iParam0], false);
			}
			Global_69352 = 0;
			if (Global_2453170.f_66 != 0)
			{
				func_196(&Global_2453170, Global_2453169);
				Global_2453170.f_66 = 0;
			}
			return;
		}
		if (Global_2453170.f_66 != 0)
		{
			func_196(&Global_2453170, Global_2453169);
			Global_2453170.f_66 = 0;
		}
		func_362("Vehicle to be handed over doesn't exist.");
		Global_69353 = -1;
		Global_69352 = 0;
	}
	if (Global_68446[iParam0])
	{
		if (uLocal_941[iParam0] >= fVar0)
		{
			Global_68446[iParam0] = 0;
			func_362("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_68446.f_584 = { 0f, 0f, 0f };
			Global_68446.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar90 = false;
	if (uLocal_941[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_101553.f_18972.f_1958[Local_674.f_14] != 0) && Global_101553.f_18972.f_1958[Local_674.f_14] > 3) && Local_674.f_4 != 0) && func_64(iParam0, 0)) && func_38(Local_674.f_4, 0))
		{
			iVar91 = func_47();
			iVar92 = Global_101553.f_18972.f_4801;
			func_359(&iVar92, 0, 0, 17, 0, 0, 0);
			if (func_274(iVar91, iVar92))
			{
				func_196(&(Global_101553.f_18972.f_69[Local_674.f_14 /*78*/]), Global_101553.f_18972.f_5591);
				func_361(iParam0);
				Global_68446[iParam0] = 1;
				func_362("Cannot be created: Vehicle ready for impound");
				Global_2453170.f_66 = 0;
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
		Global_68446.f_584 = { 0f, 0f, 0f };
		Global_68446.f_587 = { 0f, 0f, 0f };
	}
	if (Local_674.f_4 == 0)
	{
		Global_68446[iParam0] = 1;
		func_362("Cannot be created: Dummy model");
		return;
	}
	if (!func_38(Local_674.f_4, 0))
	{
		Global_68446[iParam0] = 1;
		func_362("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_64(iParam0, 0))
	{
		Global_68446[iParam0] = 1;
		func_362("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0x08BA6DD398CA197C(Local_674.f_9, 14) && !func_64(iParam0, 5))
	{
		Global_68446[iParam0] = 1;
		func_362("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_357() && func_356(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_68446[iParam0] = 1;
		func_362("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_673)
	{
		Global_68446[iParam0] = 1;
		func_362("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0x08BA6DD398CA197C(Local_674.f_9, 10))
	{
		if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[iParam0]))
		{
			Global_68446[iParam0] = 1;
			func_362("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_68446.f_484[iParam0] = 0;
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_674.f_9, 6))
	{
		if (func_355(Local_674.f_4, -1))
		{
			Global_68446[iParam0] = 1;
			func_362("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_354(Local_674.f_4, -1))
		{
			Global_68446[iParam0] = 1;
			func_362("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_674.f_9, 29))
	{
		if (Local_402.f_3 == 0)
		{
			return;
		}
	}
	if (func_353(iParam0))
	{
		Global_68446[iParam0] = 1;
		func_362("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0xC740F8182E7E9681() && unk_0x4067637E264DB8F1() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_68446[iParam0] = 1;
			func_362("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar93 = 0;
	if (unk_0x08BA6DD398CA197C(Local_674.f_9, 19))
	{
		iVar93 = 2;
	}
	else if (unk_0x08BA6DD398CA197C(Local_674.f_9, 20))
	{
		iVar93 = 1;
	}
	if ((iParam0 == 24 && Global_101553.f_18972.f_1958[Local_674.f_14] > 0) && Global_101553.f_18972.f_1958[Local_674.f_14] <= 3)
	{
		if (unk_0xBFD32C1D4D54E09B(Local_674.f_4))
		{
			iVar93 = 2;
			Local_674.f_12 = (Global_101553.f_18972.f_1958[Local_674.f_14] - 1);
		}
		else if (unk_0x0778B61C8A904D0B(Local_674.f_4))
		{
			iVar93 = 1;
			Local_674.f_12 = (Global_101553.f_18972.f_1958[Local_674.f_14] - 1);
		}
	}
	if (iVar93 != 0)
	{
		if (func_352(Local_674.f_12, iVar93, Local_674, -1f))
		{
			Global_68446[iParam0] = 1;
			func_362("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_381(iParam0, 0);
			}
			return;
		}
		if (unk_0x08BA6DD398CA197C(Local_674.f_9, 19) || unk_0x08BA6DD398CA197C(Local_674.f_9, 20))
		{
			if (iVar93 == 2)
			{
				if (Global_89118[Local_674.f_12 /*3*/][1] != -1 && (unk_0xDF658EB6CA91DFBC() - Global_89118[Local_674.f_12 /*3*/][1]) < unk_0x48DCBD1CC6671BDC() * 180)
				{
					Global_68446[iParam0] = 1;
					func_362("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var94, "...", 24);
					StringIntConCat(&Var94, ((unk_0x48DCBD1CC6671BDC() * 180 - (unk_0xDF658EB6CA91DFBC() - Global_89118[Local_674.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var94, " seconds", 24);
					func_362(&Var94);
					return;
				}
			}
			else if (iVar93 == 1)
			{
				if (Global_89118[Local_674.f_12 /*3*/][0] != -1 && (unk_0xDF658EB6CA91DFBC() - Global_89118[Local_674.f_12 /*3*/][0]) < unk_0x48DCBD1CC6671BDC() * 180)
				{
					Global_68446[iParam0] = 1;
					func_362("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var100, "...", 24);
					StringIntConCat(&Var100, ((unk_0x48DCBD1CC6671BDC() * 180 - (unk_0xDF658EB6CA91DFBC() - Global_89118[Local_674.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var100, " seconds", 24);
					func_362(&Var100);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
	{
		Global_68446.f_584 = { Local_674 };
	}
	if (bVar90)
	{
		return;
	}
	if (iVar93 != 0)
	{
		iLocal_117[iParam0] = func_23(Local_674.f_12, iVar93);
		unk_0x491067A8E906F22D(iLocal_117[iParam0]);
		unk_0x88B0F0DC270164B7(&(uLocal_48[iParam0]), 2);
		if (!unk_0x2C1B5A0D3E233FC3(iLocal_117[iParam0]))
		{
			func_362("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_351(iLocal_117[iParam0], Local_674, 1))
		{
			func_362("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0x0B17BC5D018E224B(Local_674, 3f, 0, 0, 0, 0);
		unk_0xD74B8343DB9FEFD5(Local_674, 3f, 0, 0, 0, 0, 0);
		if (iVar93 == 2)
		{
			func_346(&(Global_68446.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 2);
		}
		else if (iVar93 == 1)
		{
			func_346(&(Global_68446.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 1);
		}
		else
		{
			Global_68446[iParam0] = 1;
			func_362("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0x491067A8E906F22D(Local_674.f_4);
		iLocal_117[iParam0] = Local_674.f_4;
		unk_0x88B0F0DC270164B7(&(uLocal_48[iParam0]), 2);
		if (!unk_0x2C1B5A0D3E233FC3(Local_674.f_4))
		{
			func_362("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_351(Local_674.f_4, Local_674, 1))
		{
			func_362("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0x0B17BC5D018E224B(Local_674, 3f, 0, 0, 0, 0);
		unk_0xD74B8343DB9FEFD5(Local_674, 3f, 0, 0, 0, 0, 0);
		if (unk_0x08BA6DD398CA197C(Local_674.f_9, 23))
		{
			unk_0x55A8C3CD1FB16FC3(Local_674);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_674.f_4 == joaat("submersible2"))
			{
				Local_674.f_2 = -3f;
			}
		}
		Global_68446.f_139[iParam0] = unk_0xE044C77D0FC9DB66(Local_674.f_4, Local_674, Local_674.f_3, 1, 1);
		if (unk_0x08BA6DD398CA197C(Local_674.f_9, 10))
		{
			if (unk_0x1E3C80E7C4B8041B(Local_674.f_4))
			{
				unk_0x88B0F0DC270164B7(&(Global_101553.f_18972.f_69[Local_674.f_14 /*78*/].f_77), 22);
			}
			if (unk_0x08BA6DD398CA197C(Global_101553.f_18972.f_69[Local_674.f_14 /*78*/].f_77, 14))
			{
				func_32(Global_68446.f_139[iParam0], &Local_776);
				func_345(Local_776.f_77, &(Global_101553.f_18972.f_69[Local_674.f_14 /*78*/].f_77), Local_674.f_4);
				unk_0x09C86C0C5CA26B1E(&(Global_101553.f_18972.f_69[Local_674.f_14 /*78*/].f_77), 14);
			}
			func_287(Global_68446.f_139[iParam0], &(Global_101553.f_18972.f_69[Local_674.f_14 /*78*/]), 0, 1);
			Global_68446.f_484[iParam0] = Global_68446.f_139[iParam0];
		}
		else
		{
			if (unk_0x08BA6DD398CA197C(Local_674.f_9, 9))
			{
				unk_0x728045E0733945FD(Global_68446.f_139[iParam0], Local_674.f_10, Local_674.f_11);
			}
			if (unk_0x08BA6DD398CA197C(Local_674.f_9, 8))
			{
				unk_0xB032923150355520(Global_68446.f_139[iParam0], 2);
				unk_0xE5D4D5071B67B5E9(Global_68446.f_139[iParam0], 0);
				unk_0x18710E6BAF38BF55(Global_68446.f_139[iParam0], 0);
				unk_0x701669D40753A1F5(Global_68446.f_139[iParam0], 0);
				unk_0xF9E7970E0FD68AA7(Global_68446.f_139[iParam0], 0);
				unk_0x1B0BE87E0321C157(Global_68446.f_139[iParam0], 0);
				unk_0x0DD72E0CB1FCF511(Global_68446.f_139[iParam0], false);
				unk_0x39800A40136ECF37(Global_68446.f_139[iParam0], 1);
				unk_0xBB21B5C3111E5F85(Global_68446.f_139[iParam0], 1);
			}
		}
	}
	if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_139[iParam0]))
	{
		func_344("Created - Coords: ", Local_674);
		func_343("Created - Dist From Player:", uLocal_941[iParam0]);
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_68446.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_674.f_4)
		{
			case joaat("miljet"):
				unk_0x728045E0733945FD(Global_68446.f_139[iParam0], 121, 21);
				unk_0xE491F8C2C2A96483(Global_68446.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				unk_0x728045E0733945FD(Global_68446.f_139[iParam0], 122, 89);
				unk_0xE491F8C2C2A96483(Global_68446.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0x728045E0733945FD(Global_68446.f_139[iParam0], 0, 0);
				unk_0xE491F8C2C2A96483(Global_68446.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				unk_0x728045E0733945FD(Global_68446.f_139[iParam0], 131, 132);
				unk_0xE491F8C2C2A96483(Global_68446.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0x728045E0733945FD(Global_68446.f_139[iParam0], 159, 0);
				unk_0xE491F8C2C2A96483(Global_68446.f_139[iParam0], 160, 156);
				break;
		}
		if (unk_0x08BA6DD398CA197C(Local_674.f_9, 22))
		{
			unk_0xCB50578868A841C2(Global_68446.f_139[iParam0], 1);
		}
		if (unk_0x08BA6DD398CA197C(Local_674.f_9, 30))
		{
			unk_0x09C86C0C5CA26B1E(&(Local_674.f_9), 31);
		}
		if (unk_0x08BA6DD398CA197C(Local_674.f_9, 26))
		{
			unk_0xB032923150355520(Global_68446.f_139[iParam0], 7);
			unk_0xBFC46C57DBA70B99(Global_68446.f_139[iParam0], 1);
		}
		func_342(Global_68446.f_139[iParam0], iParam0);
		if (!unk_0x08BA6DD398CA197C(Local_674.f_9, 29) && !unk_0x08BA6DD398CA197C(Local_674.f_9, 30))
		{
			unk_0x74207974B5483203(Global_68446.f_139[iParam0]);
		}
		unk_0xA353FBC64C96C09F(Global_68446.f_139[iParam0], 0f);
		unk_0xB16B53F6FE1ADDB6(Global_68446.f_139[iParam0], 1);
		unk_0xB6EC3F3CD188EFCE(Global_68446.f_139[iParam0], unk_0x08BA6DD398CA197C(Local_674.f_9, 5));
	}
	unk_0x09C86C0C5CA26B1E(&(uLocal_48[iParam0]), 0);
	unk_0x09C86C0C5CA26B1E(&(uLocal_48[iParam0]), 1);
	Global_68446[iParam0] = 1;
	if (iVar93 != 0)
	{
		Global_68446.f_69[iParam0] = 1;
	}
	iVar106 = func_339(458, -1, -1);
	if (iVar106 != 0 && iVar106 == iParam0)
	{
		iLocal_1028 = Global_68446.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2453170.f_66 = 0;
	}
}

int func_339(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_89();
	}
	iVar0 = 0;
	iVar1 = func_341(iParam0, iParam1);
	uVar2 = func_340(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x43577EDB73960877(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_340(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x19A1C45894374F65((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x19A1C45894374F65((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x19A1C45894374F65((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x19A1C45894374F65((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x19A1C45894374F65((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x19A1C45894374F65((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x19A1C45894374F65((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x19A1C45894374F65((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x19A1C45894374F65((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x19A1C45894374F65((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x19A1C45894374F65((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x19A1C45894374F65((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x19A1C45894374F65((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x19A1C45894374F65((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_341(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_89();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

void func_342(int iParam0, int iParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0) && unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				unk_0x4DCDF96D8AD36447(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				unk_0x4DCDF96D8AD36447(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				unk_0x4DCDF96D8AD36447(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				unk_0x175E22227AEEF4D9(iParam0, 6, false);
				unk_0x175E22227AEEF4D9(iParam0, 1, true);
				break;
			}
	}
}

void func_343(char* sParam0, float fParam1)
{
	if (!unk_0x509383441597090D(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_344(char* sParam0, float fParam1, var uParam2, var uParam3)
{
	if (!unk_0x509383441597090D(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_345(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0x09C86C0C5CA26B1E(&iVar0, 0);
			unk_0x09C86C0C5CA26B1E(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			unk_0x09C86C0C5CA26B1E(&iVar0, 0);
			unk_0x09C86C0C5CA26B1E(&iVar0, 1);
			unk_0x09C86C0C5CA26B1E(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			unk_0x09C86C0C5CA26B1E(&iVar0, 0);
			unk_0x09C86C0C5CA26B1E(&iVar0, 1);
			unk_0x09C86C0C5CA26B1E(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			unk_0x09C86C0C5CA26B1E(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			unk_0x09C86C0C5CA26B1E(&iVar0, 0);
			unk_0x09C86C0C5CA26B1E(&iVar0, 1);
			unk_0x09C86C0C5CA26B1E(&iVar0, 2);
			break;
		
		case joaat("chino"):
			unk_0x09C86C0C5CA26B1E(&iVar0, 0);
			unk_0x09C86C0C5CA26B1E(&iVar0, 1);
			unk_0x09C86C0C5CA26B1E(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_346(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
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
		if (unk_0xD3FACCDA4D66AEAD(*iParam0))
		{
			if (unk_0x705BC1BB91F530B5(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_101553.f_1991.f_539.f_3544) && Global_101553.f_7940.f_99.f_58[131])
		{
			Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x491067A8E906F22D(Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x2C1B5A0D3E233FC3(Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xE044C77D0FC9DB66(Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/], Param2, uParam5, 0, 0);
				unk_0x74207974B5483203(*iParam0);
				unk_0x62F8A663774DA6EA(*iParam0, 0);
				unk_0xB6EC3F3CD188EFCE(*iParam0, false);
				unk_0x6783F2971949E5C2(*iParam0, 1);
				unk_0xA082D4AC00BC651A(*iParam0, 1250);
				unk_0xA0BCF2878D04DC73(*iParam0, 1250f);
				unk_0xFE9791BE61B48751(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x728045E0733945FD(*iParam0, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_5, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0xE491F8C2C2A96483(*iParam0, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_7, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0xA353FBC64C96C09F(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0x175E22227AEEF4D9(*iParam0, iVar103 + 1, !Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x4F638E3F459D634F(*iParam0, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_350(&uVar1, &uVar0))
				{
					unk_0x58398448C0A1FC69(*iParam0, &uVar1);
					unk_0xC3F98B670A143BDD(*iParam0, uVar0);
				}
				else
				{
					unk_0x58398448C0A1FC69(*iParam0, &(Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 < unk_0xE4FB82B76B7E1C67())
					{
						unk_0xC3F98B670A143BDD(*iParam0, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x3A9188D7AA55A522(*iParam0, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_84, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_85, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x0DD72E0CB1FCF511(*iParam0, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x5B5BB9221E7FD2F8(*iParam0, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x1C73C3411F2D84F5(*iParam0, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_93, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_94, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x8AF3786CC992C15C(*iParam0, 2, unk_0x08BA6DD398CA197C(Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x8AF3786CC992C15C(*iParam0, 3, unk_0x08BA6DD398CA197C(Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x8AF3786CC992C15C(*iParam0, 0, unk_0x08BA6DD398CA197C(Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x8AF3786CC992C15C(*iParam0, 1, unk_0x08BA6DD398CA197C(Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x642E829F9613672E(*iParam0) > 1 && Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xB9C9103C26C01C4F(*iParam0, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xC388189407833D70(unk_0x705BC1BB91F530B5(*iParam0)))
					{
						if (unk_0xBFD32C1D4D54E09B(unk_0x705BC1BB91F530B5(*iParam0)))
						{
							if (Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xA54551115DE6D858(*iParam0, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xA54551115DE6D858(*iParam0, Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_288(iParam0, &(Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_31), &(Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x8CB54EEC86076312(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x705BC1BB91F530B5(*iParam0) == joaat("bodhi2"))
					{
						func_348(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x2C07692AA3545079(Global_101553.f_1991.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
				}
				func_347(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x491067A8E906F22D(Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x2C1B5A0D3E233FC3(Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xE044C77D0FC9DB66(Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0);
				unk_0x74207974B5483203(*iParam0);
				unk_0x62F8A663774DA6EA(*iParam0, 0);
				unk_0xB6EC3F3CD188EFCE(*iParam0, false);
				unk_0x6783F2971949E5C2(*iParam0, 1);
				unk_0xA082D4AC00BC651A(*iParam0, 1250);
				unk_0xA0BCF2878D04DC73(*iParam0, 1250f);
				unk_0xFE9791BE61B48751(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x728045E0733945FD(*iParam0, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_5, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0xE491F8C2C2A96483(*iParam0, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_7, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0xA353FBC64C96C09F(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0x175E22227AEEF4D9(*iParam0, iVar104 + 1, !Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x4F638E3F459D634F(*iParam0, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_350(&uVar1, &uVar0))
				{
					unk_0x58398448C0A1FC69(*iParam0, &uVar1);
					unk_0xC3F98B670A143BDD(*iParam0, uVar0);
				}
				else
				{
					unk_0x58398448C0A1FC69(*iParam0, &(Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 < unk_0xE4FB82B76B7E1C67())
					{
						unk_0xC3F98B670A143BDD(*iParam0, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x3A9188D7AA55A522(*iParam0, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_84, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_85, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x0DD72E0CB1FCF511(*iParam0, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x5B5BB9221E7FD2F8(*iParam0, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x1C73C3411F2D84F5(*iParam0, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_93, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_94, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x8AF3786CC992C15C(*iParam0, 2, unk_0x08BA6DD398CA197C(Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x8AF3786CC992C15C(*iParam0, 3, unk_0x08BA6DD398CA197C(Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x8AF3786CC992C15C(*iParam0, 0, unk_0x08BA6DD398CA197C(Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x8AF3786CC992C15C(*iParam0, 1, unk_0x08BA6DD398CA197C(Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x642E829F9613672E(*iParam0) > 1 && Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xB9C9103C26C01C4F(*iParam0, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xC388189407833D70(unk_0x705BC1BB91F530B5(*iParam0)))
					{
						if (unk_0xBFD32C1D4D54E09B(unk_0x705BC1BB91F530B5(*iParam0)))
						{
							if (Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xA54551115DE6D858(*iParam0, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xA54551115DE6D858(*iParam0, Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_288(iParam0, &(Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_31), &(Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x8CB54EEC86076312(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x705BC1BB91F530B5(*iParam0) == joaat("bodhi2"))
					{
						func_348(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x2C07692AA3545079(Global_101553.f_1991.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
				}
				func_347(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x491067A8E906F22D(Var5.f_0);
			if (unk_0x2C1B5A0D3E233FC3(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0xE044C77D0FC9DB66(Var5.f_0, Param2, fParam5, 1, 1);
				unk_0x74207974B5483203(*iParam0);
				unk_0x62F8A663774DA6EA(*iParam0, 0);
				unk_0xB6EC3F3CD188EFCE(*iParam0, false);
				unk_0x6783F2971949E5C2(*iParam0, 1);
				StringCopy(&cVar106, unk_0x65FDE11354F074FF(*iParam0), 16);
				unk_0xA082D4AC00BC651A(*iParam0, 1250);
				unk_0xA0BCF2878D04DC73(*iParam0, 1250f);
				unk_0xFE9791BE61B48751(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x728045E0733945FD(*iParam0, Var5.f_5, Var5.f_6);
				unk_0xE491F8C2C2A96483(*iParam0, Var5.f_7, Var5.f_8);
				unk_0xA353FBC64C96C09F(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0x175E22227AEEF4D9(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x4F638E3F459D634F(*iParam0, Var5.f_24);
				}
				if (func_350(&uVar1, &uVar0))
				{
					unk_0x58398448C0A1FC69(*iParam0, &uVar1);
					unk_0xC3F98B670A143BDD(*iParam0, uVar0);
				}
				else
				{
					unk_0x58398448C0A1FC69(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0xE4FB82B76B7E1C67())
					{
						unk_0xC3F98B670A143BDD(*iParam0, Var5.f_26);
					}
				}
				unk_0x3A9188D7AA55A522(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0x0DD72E0CB1FCF511(*iParam0, Var5.f_88);
				unk_0x5B5BB9221E7FD2F8(*iParam0, Var5.f_87);
				unk_0x1C73C3411F2D84F5(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0x8AF3786CC992C15C(*iParam0, 2, unk_0x08BA6DD398CA197C(Var5.f_92, 28));
				unk_0x8AF3786CC992C15C(*iParam0, 3, unk_0x08BA6DD398CA197C(Var5.f_92, 29));
				unk_0x8AF3786CC992C15C(*iParam0, 0, unk_0x08BA6DD398CA197C(Var5.f_92, 30));
				unk_0x8AF3786CC992C15C(*iParam0, 1, unk_0x08BA6DD398CA197C(Var5.f_92, 31));
				if (unk_0x642E829F9613672E(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0xB9C9103C26C01C4F(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0xC388189407833D70(unk_0x705BC1BB91F530B5(*iParam0)))
					{
						if (unk_0xBFD32C1D4D54E09B(unk_0x705BC1BB91F530B5(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0xA54551115DE6D858(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0xA54551115DE6D858(*iParam0, Var5.f_90);
						}
					}
				}
				func_288(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x8CB54EEC86076312(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x705BC1BB91F530B5(*iParam0) == joaat("bagger") && !Global_101553.f_7940.f_99.f_58[118])
					{
						unk_0x58398448C0A1FC69(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x705BC1BB91F530B5(*iParam0) == joaat("bodhi2"))
					{
						func_348(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_101553.f_1991.f_539.f_3544) && Global_101553.f_7940.f_99.f_58[131]) && unk_0x705BC1BB91F530B5(*iParam0) == joaat("tailgater"))
				{
					unk_0xF55EA971ECC0BCE5(*iParam0, 6, 1, false);
					unk_0xF55EA971ECC0BCE5(*iParam0, 14, 7, false);
					unk_0xF55EA971ECC0BCE5(*iParam0, 11, 2, false);
					unk_0xF55EA971ECC0BCE5(*iParam0, 2, 3, false);
					unk_0xF55EA971ECC0BCE5(*iParam0, 7, 5, false);
					unk_0xF55EA971ECC0BCE5(*iParam0, 0, 0, false);
					unk_0xF55EA971ECC0BCE5(*iParam0, 3, 3, false);
					unk_0xF55EA971ECC0BCE5(*iParam0, 13, 1, false);
					unk_0xF55EA971ECC0BCE5(*iParam0, 4, 3, false);
					unk_0xF55EA971ECC0BCE5(*iParam0, 12, 2, false);
					unk_0x6D0141CBE6B3B145(*iParam0, 22, true);
					unk_0xA54551115DE6D858(*iParam0, 2);
					unk_0xF55EA971ECC0BCE5(*iParam0, 23, 11, false);
					unk_0x5B5BB9221E7FD2F8(*iParam0, 2);
					Global_101553.f_1991.f_539.f_3544 = 1;
					func_170(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x2C07692AA3545079(Var5.f_0);
				}
				if (bVar105)
				{
					func_347(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_347(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xD3FACCDA4D66AEAD(Global_89070[iVar0]))
		{
			Global_89070[iVar0] = iParam0;
			Global_89080[iVar0] = iParam1;
			Global_89090[iVar0] = unk_0x705BC1BB91F530B5(iParam0);
			if (unk_0x0778B61C8A904D0B(Global_89090[iVar0]))
			{
				Global_89118[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_89118[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_348(var uParam0)
{
	if (!func_349(*uParam0))
	{
		unk_0x175E22227AEEF4D9(*uParam0, 5, !Global_101553.f_7940.f_99.f_58[119]);
	}
}

bool func_349(int iParam0)
{
	return unk_0xDC21CA8351C75F1F(iParam0, 5);
}

int func_350(var uParam0, var uParam1)
{
	if (unk_0xA86CA03D9749EEB3())
	{
	}
	else if (Global_101553.f_24808.f_261)
	{
		*uParam0 = { Global_101553.f_24808.f_267 };
		*uParam1 = Global_101553.f_24808.f_271;
		return 1;
	}
	return 0;
}

int func_351(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if ((iParam4 && unk_0x2C22E7D1C80A53EF()) && unk_0xA96867DD0A63C62C(joaat("startup_positioning")) > 0)
	{
		func_362("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	unk_0xA27A0E75635DD922(uParam0, &Var0, &Var3);
	fVar6 = unk_0x999A157665D69393(Var3, Var0, 1);
	if (unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Param1, 1) < (fVar6 * 0.5f))
	{
		func_343("player is in vehicle bounds - fLength: ", fVar6);
		func_343("player is in vehicle bounds - fDistance: ", unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Param1, 1));
		return 1;
	}
	return 0;
}

int func_352(int iParam0, int iParam1, struct<3> Param2, float fParam5)
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
			if (unk_0xD3FACCDA4D66AEAD(Global_89070[iVar0]) && unk_0x1F1B2B6E500380C5(Global_89070[iVar0], 0))
			{
				if (unk_0x705BC1BB91F530B5(Global_89070[iVar0]) == iVar99 && Global_89080[iVar0] == iParam0)
				{
					if (fParam5 == -1f || unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(Global_89070[iVar0], 0), Param2, 1) <= fParam5)
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

int func_353(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_674.f_4 == joaat("frogger2"))
		{
			if (((func_355(Local_674.f_4, -1) || func_354(Local_674.f_4, -1)) || unk_0xA96867DD0A63C62C(joaat("exile2")) > 0) || !func_335(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[20]) && !unk_0x912AD5A10E7633F0(Global_68446.f_484[20], 0)) && unk_0x1F1B2B6E500380C5(Global_68446.f_484[20], 0))
		{
			if (Local_674.f_4 == unk_0x705BC1BB91F530B5(Global_68446.f_484[20]))
			{
				unk_0xCAD2F245E2AC499C(Global_68446.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_674.f_10 && iVar1 == Local_674.f_11)
				{
					func_191(20);
				}
			}
		}
	}
	return 0;
}

int func_354(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = unk_0xC9A2776428760D9D(Local_674, 200f, iParam0, iVar0);
	if ((unk_0xD3FACCDA4D66AEAD(iVar1) && unk_0x1F1B2B6E500380C5(iVar1, 0)) && unk_0x705BC1BB91F530B5(iVar1) == iParam0)
	{
		if (iParam1 == -1 || unk_0xB7F7AFF78B9F9EF6(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_355(int iParam0, int iParam1)
{
	var uVar0[50];
	int iVar51;
	int iVar52;
	
	iVar52 = unk_0xDAD0A73A45610B74(unk_0xA0081090911D13E5(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52)
	{
		if ((unk_0xD3FACCDA4D66AEAD(uVar0[iVar51]) && unk_0x1F1B2B6E500380C5(uVar0[iVar51], 0)) && unk_0x705BC1BB91F530B5(uVar0[iVar51]) == iParam0)
		{
			if (iParam1 == -1 || unk_0xB7F7AFF78B9F9EF6(uVar0[iVar51]) == iParam1)
			{
				return 1;
			}
		}
		iVar51++;
	}
	return 0;
}

int func_356(int iParam0)
{
	if (Global_35775 == 15)
	{
		return 0;
	}
	if (func_270(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_357()
{
	return Global_68446.f_138;
}

float func_358(int iParam0)
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

void func_359(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_52(*uParam0);
	iVar1 = func_54(*uParam0);
	iVar2 = func_278(*uParam0);
	iVar3 = func_277(*uParam0);
	iVar4 = func_276(*uParam0);
	iVar5 = func_275(*uParam0);
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
	iVar6 = func_51(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_51(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_360(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_360(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_57(uParam0, iParam1);
	func_56(uParam0, iParam2);
	func_55(uParam0, iParam3);
	func_49(uParam0, iParam5);
	func_50(uParam0, iParam4);
	func_48(uParam0, iParam6);
}

void func_361(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Local_674.f_9, 13))
	{
		func_381(iParam0, 0);
	}
}

void func_362(char* sParam0)
{
	if (!unk_0x509383441597090D(sParam0))
	{
	}
}

void func_363(char* sParam0, int iParam1)
{
	if (!unk_0x509383441597090D(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_364(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
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
			bVar0 = !func_64(iParam0, 5);
			Var1 = { -961.42f, -2794.47f, 12.96f };
			fVar4 = -209.22f;
			iVar5 = 0;
			iVar6 = joaat("prop_airport_sale_sign");
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_64(iParam0, 5);
			Var1 = { -827.93f, -1368.14f, 3.9982f };
			fVar4 = -68.75f;
			iVar5 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_64(iParam0, 5);
			bVar0 = true;
			Var1 = { -710.07f, -1414.31f, 4f };
			fVar4 = -41.25f;
			iVar5 = 2;
			break;
		
		case 21:
			bVar0 = !func_64(iParam0, 5);
			Var1 = { -66.21f, 77.76f, 70.51f };
			fVar4 = -27f;
			iVar5 = 3;
			break;
		
		case 22:
			bVar0 = !func_64(iParam0, 5);
			Var1 = { -76.02f, -1825.61f, 25.88f };
			fVar4 = -129.67f;
			iVar5 = 4;
			break;
		
		case 23:
			bVar0 = !func_64(iParam0, 5);
			Var1 = { -218.68f, -1165.76f, 21.99f };
			fVar4 = 89.95f;
			iVar5 = 5;
			break;
	}
	if (bVar0 && unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Var1, 1) < 250f)
	{
		if (!unk_0xD3FACCDA4D66AEAD(uLocal_858[iVar5]))
		{
			unk_0x491067A8E906F22D(iVar6);
			iLocal_865 = 1;
			if (unk_0x2C1B5A0D3E233FC3(iVar6))
			{
				if (iLocal_865)
				{
					uLocal_858[iVar5] = unk_0xF7753FE89C776300(iVar6, Var1, 0, 1, 0);
					unk_0x4A1ACDDF793F9777(uLocal_858[iVar5], 0f, 0f, fVar4, 2, 1);
					unk_0xDE0EDC55CA40EFE9(uLocal_858[iVar5], 0);
					unk_0xBB21B5C3111E5F85(uLocal_858[iVar5], 1);
					unk_0x2C07692AA3545079(iVar6);
					iLocal_865 = 0;
				}
			}
		}
	}
	else if (iVar5 != -1)
	{
		if ((unk_0xD3FACCDA4D66AEAD(uLocal_858[iVar5]) && !unk_0x7DB334F5F834726A(uLocal_858[iVar5])) && unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Var1, 1) > 255f)
		{
			unk_0xE9755D24C3BFFBED(&(uLocal_858[iVar5]));
			if (iLocal_865)
			{
				unk_0x2C07692AA3545079(iVar6);
				iLocal_865 = 0;
			}
		}
	}
}

void func_365(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (func_64(iParam0, 0) && (!unk_0x08BA6DD398CA197C(Local_674.f_9, 14) || func_64(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_68446.f_346[iParam0] != bVar0)
	{
		if (!func_21(Local_674.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_68446.f_346[iParam0])
				{
					unk_0x322323456FCFAB4D(Global_68446.f_415[iParam0], 0);
				}
			}
			else if (!Global_68446.f_346[iParam0])
			{
				Global_68446.f_415[iParam0] = unk_0x6A173E5A316F6DE8(Local_674.f_15, Local_674.f_18, 0, 1, 1, 1);
			}
		}
		Global_68446.f_346[iParam0] = bVar0;
	}
}

void func_366(int iParam0)
{
	int iVar0;
	
	if (unk_0x08BA6DD398CA197C(Local_674.f_9, 15))
	{
		if (func_64(iParam0, 0) && !func_64(iParam0, 5))
		{
			iVar0 = 145;
			if (unk_0x08BA6DD398CA197C(Local_674.f_9, 16))
			{
				iVar0 = func_367(9);
			}
			else if (unk_0x08BA6DD398CA197C(Local_674.f_9, 18))
			{
				iVar0 = func_367(4);
			}
			if (iVar0 == Local_674.f_12)
			{
				func_239(iParam0, 5, 1);
			}
		}
	}
}

int func_367(int iParam0)
{
	return Global_101553.f_29594[iParam0 /*4*/];
}

void func_368(int iParam0)
{
	if (func_64(iParam0, 0) && !func_64(iParam0, 3))
	{
		if (unk_0x08BA6DD398CA197C(Local_674.f_9, 4))
		{
			func_239(iParam0, 3, 1);
		}
		else
		{
			func_239(iParam0, 3, 1);
		}
	}
}

void func_369(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_64(iParam0, 0) && bLocal_673)
	{
		if (unk_0x08BA6DD398CA197C(Local_674.f_9, 0) || (unk_0x08BA6DD398CA197C(Local_674.f_9, 2) && !func_64(iParam0, 2)))
		{
			if ((!unk_0x08BA6DD398CA197C(Local_674.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 0 || func_64(iParam0, 5)) || !unk_0x08BA6DD398CA197C(Local_674.f_9, 28)))
			{
				bVar0 = false;
				if (!unk_0x16833EFAA58E63DB(Global_68446.f_208[iParam0]))
				{
					if (func_335(0))
					{
						if (unk_0x08BA6DD398CA197C(Local_674.f_9, 14) && !func_64(iParam0, 5))
						{
							Global_68446.f_208[iParam0] = unk_0x52CE8C31DD5898E7(Local_695.f_55);
							if (Local_695.f_58 != -1)
							{
								unk_0x32479C670EB9962F(Global_68446.f_208[iParam0], Local_695.f_58);
								if (!unk_0x509383441597090D(&(Local_695.f_59)))
								{
									unk_0x6F18BFEFE84565FF(Global_68446.f_208[iParam0], &(Local_695.f_59));
								}
							}
						}
						else if (func_64(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_68446.f_208[iParam0] = unk_0x52CE8C31DD5898E7(Local_695.f_55);
							if (Local_674.f_13 != -1)
							{
								unk_0x32479C670EB9962F(Global_68446.f_208[iParam0], Local_674.f_13);
								if (!unk_0x509383441597090D(&(Local_695.f_59)))
								{
									unk_0x6F18BFEFE84565FF(Global_68446.f_208[iParam0], &(Local_695.f_59));
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
								unk_0x77804F3DCBA01DB5(Global_68446.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_68446.f_208[iParam0] = unk_0x52CE8C31DD5898E7(Local_674);
							if (Local_674.f_13 != -1)
							{
								unk_0x32479C670EB9962F(Global_68446.f_208[iParam0], Local_674.f_13);
								if (!unk_0x509383441597090D(&(Local_695.f_59)))
								{
									unk_0x6F18BFEFE84565FF(Global_68446.f_208[iParam0], &(Local_695.f_59));
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
									unk_0x77804F3DCBA01DB5(Global_68446.f_208[iParam0], iVar2);
								}
							}
						}
						unk_0x9ABFD60B4E082992(Global_68446.f_208[iParam0], !unk_0x08BA6DD398CA197C(Local_674.f_9, 1));
						unk_0x3AE9C8E8575D2576(Global_68446.f_208[iParam0], 0);
						unk_0x420759DE4A6A9555(Global_68446.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0x16833EFAA58E63DB(Global_68446.f_208[iParam0]))
		{
			unk_0x0B57C567D698C373(&(Global_68446.f_208[iParam0]));
		}
	}
}

void func_370(int iParam0)
{
	if (func_64(iParam0, 0) && !func_64(iParam0, 1))
	{
		if (func_64(iParam0, 4))
		{
			if (unk_0x08BA6DD398CA197C(Local_674.f_9, 3))
			{
				func_371(&(Local_674.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_239(iParam0, 1, 1);
			}
			else
			{
				func_239(iParam0, 1, 1);
			}
		}
	}
}

void func_371(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_199(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_372(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x08BA6DD398CA197C(Local_674.f_9, 7) || Local_674.f_12 == iLocal_672)
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
	if ((bLocal_673 && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5())) && unk_0x08BA6DD398CA197C(Local_674.f_9, 14))
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
					while (iVar0 < Global_68446.f_592)
					{
						Global_68446.f_592[iVar0] = -1;
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
						iVar2 = func_126(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_68446.f_592)
							{
								switch (Local_402.f_6)
								{
									case 3:
										if (func_62(iVar2))
										{
											Global_68446.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (unk_0xFC4346F9DE2AB4AE(iVar2))
										{
											Global_68446.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((unk_0xE3C6E31B7236489F(iVar2) || unk_0x63A9F8DD89623B7D(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_68446.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_63(iVar2))
										{
											Global_68446.f_592[iVar1] = iVar0;
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
	if (!unk_0x08BA6DD398CA197C(uLocal_48[iParam0], 0))
	{
		if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_139[iParam0]))
		{
			if (unk_0x1F1B2B6E500380C5(Global_68446.f_139[iParam0], 0))
			{
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), Global_68446.f_139[iParam0], 0))
					{
						if (!unk_0x08BA6DD398CA197C(uLocal_48[iParam0], 1) || unk_0x08BA6DD398CA197C(uLocal_48[iParam0], 3))
						{
							unk_0x88B0F0DC270164B7(&(uLocal_48[iParam0]), 0);
							func_239(iParam0, 4, 1);
							func_239(iParam0, 2, 1);
						}
					}
					else
					{
						unk_0x88B0F0DC270164B7(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[iParam0]) && unk_0x1F1B2B6E500380C5(Global_68446.f_484[iParam0], 0)) && unk_0x705BC1BB91F530B5(Global_68446.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_1030)
			{
				if (unk_0xFD4DDA3E1EF89C67(Global_68446.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
				{
					unk_0xD7B4A1AC9C8BC6EB(Global_68446.f_484[iParam0], 0f);
					iLocal_1030 = 1;
				}
			}
			else if (!unk_0xFD4DDA3E1EF89C67(Global_68446.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
			{
				unk_0xD7B4A1AC9C8BC6EB(Global_68446.f_484[iParam0], 1f);
				iLocal_1030 = 0;
			}
		}
		else
		{
			iLocal_1030 = 0;
		}
	}
}

int func_373()
{
	return 1;
}

var func_374(var uParam0, int iParam1)
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

int func_375()
{
	func_376();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_376()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_301(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_300(unk_0xA0081090911D13E5());
			if (func_25(iVar0) && (!func_27(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_25(Global_101553.f_1991.f_539.f_3549))
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

void func_377()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x16833EFAA58E63DB(Global_68446.f_208[iVar0]))
		{
			unk_0x0B57C567D698C373(&(Global_68446.f_208[iVar0]));
		}
		if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_139[iVar0]))
		{
			if (unk_0x1F1B2B6E500380C5(Global_68446.f_139[iVar0], 0))
			{
				unk_0x615DE34FC732CF11(&(Global_68446.f_139[iVar0]));
				Global_68446.f_139[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (unk_0x0D2E3F017CBCB8A8(Local_402.f_110))
	{
		unk_0x07553DAC96600443(Local_402.f_110, 0);
		unk_0x50C86ABC13A071F8(Local_402.f_110, 0);
	}
	if (unk_0x0D2E3F017CBCB8A8(Local_402.f_111))
	{
		unk_0x07553DAC96600443(Local_402.f_111, 0);
		unk_0x50C86ABC13A071F8(Local_402.f_111, 0);
	}
	if (Local_402.f_3 != 0)
	{
		func_187();
		unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), 0);
	}
	if (unk_0x16833EFAA58E63DB(Global_68446.f_583))
	{
		unk_0x0B57C567D698C373(&(Global_68446.f_583));
	}
	if (iLocal_656 != -1)
	{
		func_66(&iLocal_656);
	}
	if (iLocal_655 != -1)
	{
		func_66(&iLocal_655);
	}
	if (Local_402.f_5 != -1)
	{
		func_66(&(Local_402.f_5));
	}
	if (iLocal_668 != -1)
	{
		func_66(&iLocal_668);
	}
	if (Local_402.f_3 > 0)
	{
		if (Global_68446.f_577)
		{
			func_168(47, 1);
			func_166(47, 1);
			Global_68446.f_577 = 0;
			Local_402.f_3 = 0;
		}
	}
	Global_68446.f_553 = 0;
	unk_0x78C587487CD40B92();
}

void func_378()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0xD3FACCDA4D66AEAD(uLocal_393[iVar0]))
		{
			unk_0xE9755D24C3BFFBED(&(uLocal_393[iVar0]));
		}
		iVar0++;
	}
}

void func_379(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0x08BA6DD398CA197C(iLocal_936[iVar0], iVar1))
	{
		unk_0x88B0F0DC270164B7(&(iLocal_936[iVar0]), iVar1);
		iLocal_867[iLocal_866] = iParam0;
		iLocal_866++;
	}
}

void func_380()
{
	int iVar0;
	
	if (func_210(25))
	{
		if (Global_101553.f_18972.f_69[22 /*78*/].f_66 != 0 && !func_38(Global_101553.f_18972.f_69[22 /*78*/].f_66, 0))
		{
			Global_101553.f_18972.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_101553.f_18972.f_69[22 /*78*/].f_77 = 0;
			Global_101553.f_18972.f_69[22 /*78*/].f_65 = 0;
			Global_101553.f_18972.f_69[22 /*78*/].f_62 = 255;
			Global_101553.f_18972.f_69[22 /*78*/].f_63 = 255;
			Global_101553.f_18972.f_69[22 /*78*/].f_64 = 255;
			Global_101553.f_18972.f_69[22 /*78*/].f_5 = 0;
			Global_101553.f_18972.f_69[22 /*78*/].f_6 = 0;
			Global_101553.f_18972.f_69[22 /*78*/].f_7 = 0;
			Global_101553.f_18972.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_101553.f_18972.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_101553.f_18972.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_210(21) && Global_101553.f_18972.f_69[9 /*78*/].f_66 != 0) && !func_38(Global_101553.f_18972.f_69[9 /*78*/].f_66, 0))
	{
		Global_101553.f_18972.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_210(22) && Global_101553.f_18972.f_69[10 /*78*/].f_66 != 0) && !func_38(Global_101553.f_18972.f_69[10 /*78*/].f_66, 0))
	{
		Global_101553.f_18972.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_210(23) && Global_101553.f_18972.f_69[11 /*78*/].f_66 != 0) && !func_38(Global_101553.f_18972.f_69[11 /*78*/].f_66, 0))
	{
		Global_101553.f_18972.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_210(26) && !func_38(Global_101553.f_18972.f_69[12 /*78*/].f_66, 0))
	{
		func_381(26, 0);
	}
	if (func_210(27) && !func_38(Global_101553.f_18972.f_69[13 /*78*/].f_66, 0))
	{
		func_381(27, 0);
	}
	if (func_210(28) && !func_38(Global_101553.f_18972.f_69[14 /*78*/].f_66, 0))
	{
		func_381(28, 0);
	}
	if (func_210(29) && !func_38(Global_101553.f_18972.f_69[15 /*78*/].f_66, 0))
	{
		func_381(29, 0);
	}
	if (func_210(30) && !func_38(Global_101553.f_18972.f_69[16 /*78*/].f_66, 0))
	{
		func_381(30, 0);
	}
	if (func_210(31) && !func_38(Global_101553.f_18972.f_69[17 /*78*/].f_66, 0))
	{
		func_381(31, 0);
	}
	if (func_210(32) && !func_38(Global_101553.f_18972.f_69[18 /*78*/].f_66, 0))
	{
		func_381(32, 0);
	}
	if (func_210(33) && !func_38(Global_101553.f_18972.f_69[19 /*78*/].f_66, 0))
	{
		func_381(33, 0);
	}
	if (func_210(34) && !func_38(Global_101553.f_18972.f_69[20 /*78*/].f_66, 0))
	{
		func_381(34, 0);
	}
}

void func_381(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_64(iParam0, 0))
		{
			func_239(iParam0, 1, 0);
			func_239(iParam0, 2, 0);
			func_239(iParam0, 3, 0);
			func_239(iParam0, 4, 0);
			func_239(iParam0, 0, 1);
			Global_68446[iParam0] = 1;
		}
	}
	else
	{
		func_239(iParam0, 0, 0);
	}
}

int func_382()
{
	return 0;
}

int func_383()
{
	return 1;
}

int func_384()
{
	return 1;
}

int func_385()
{
	if (unk_0x6E373DDF41F95D44(-1226939934))
	{
		return 1;
	}
	return 0;
}

void func_386(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_390();
	func_389();
	func_387();
}

void func_387()
{
	Global_100143 = 2405.849f;
	Global_100146 = 2408.22f;
	Global_100149 = 2386.096f;
	Global_100152 = 69.1875f;
	Global_100155[0 /*3*/] = 2417.105f;
	Global_100155[1 /*3*/] = 2407.058f;
	Global_100155[2 /*3*/] = 2371.92f;
	Global_100155[3 /*3*/] = 2399.583f;
	Global_100155[4 /*3*/] = 2416.519f;
	Global_100155[5 /*3*/] = 2430.345f;
	Global_100155[6 /*3*/] = 2385.819f;
	Global_100177[0] = 157.8636f;
	Global_100177[1] = 174.7226f;
	Global_100177[2] = 270.7562f;
	Global_100177[3] = 190.7495f;
	Global_100177[4] = 27.6506f;
	Global_100177[5] = 358.1218f;
	Global_100177[6] = 339.4363f;
	Global_100185 = 2399.82f;
	Global_100188 = 2414.7f;
	func_388(&Global_98512, 64);
}

void func_388(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_389()
{
	Global_98517[0 /*3*/].f_1 = 5141.01f;
	Global_98517[1 /*3*/].f_1 = 6048.71f;
	Global_98517[2 /*3*/].f_1 = 6185.32f;
	Global_98517[3 /*3*/].f_1 = 5180.99f;
	Global_98517[4 /*3*/].f_1 = 4582.72f;
	Global_98517[5 /*3*/].f_1 = 4831.82f;
	Global_98517[6 /*3*/].f_1 = 4322.66f;
	Global_98517[7 /*3*/].f_1 = 3503.92f;
	Global_98517[8 /*3*/].f_1 = 3777.54f;
	Global_98517[9 /*3*/].f_1 = 3810.8f;
	Global_98517[10 /*3*/].f_1 = 3095.88f;
	Global_98551[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_98551[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_98551[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_98551[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_98551[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_98551[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_98551[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_98551[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_98551[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_98551[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_98551[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_98551[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_98551[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_98551[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_98551[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_98551[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_98551[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_98551[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_98551[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_98551[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_98551[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_98551[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_98551[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_98551[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_98551[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_98551[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_98551[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_98551[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_98551[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_98551[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_98551[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_98551[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_98551[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_98551[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_98551[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_98551[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_98551[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_98551[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_98551[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_98551[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_98551[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_98551[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_98551[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_98551[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_98551[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_98551[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_98551[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_98551[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_98551[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_98551[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_98551[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_98551[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_98551[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_98551[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_98551[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_98551[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_98551[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_98551[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_98551[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_98551[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_98551[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_98551[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_98551[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_388(&Global_98512, 16);
}

void func_390()
{
	Global_98468[0 /*3*/] = -1567.382f;
	Global_98468[1 /*3*/] = -1436.305f;
	Global_98468[2 /*3*/] = 31.2408f;
	Global_98468[3 /*3*/] = 278.1924f;
	Global_98468[4 /*3*/] = 1116.002f;
	Global_98468[5 /*3*/] = 1676.193f;
	Global_98490[0 /*3*/] = -1592.642f;
	Global_98490[1 /*3*/] = -1573.501f;
	Global_98490[2 /*3*/] = -1459.359f;
	Global_98490[3 /*3*/] = 21.1005f;
	Global_98490[4 /*3*/] = 262.9409f;
	Global_98490[5 /*3*/] = 1091.07f;
	func_388(&Global_98512, 1);
}

