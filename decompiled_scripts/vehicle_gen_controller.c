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
	unk_0x6C87EFD58B261C6F(0);
	Local_402.f_5 = -1;
	Local_402.f_0 = -1;
	Local_402.f_1 = 99999.99f;
	func_468(&uLocal_521);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_90479[iVar0 /*3*/][0] = -1;
		Global_90479[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_105220.f_32546.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_105220.f_32546.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_105220.f_32546.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_105220.f_32546.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_105220.f_32546.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_105220.f_32546.f_4801 = -15;
		Global_105220.f_32546.f_4802 = 1;
	}
	if (((!func_467() && !func_466()) && !func_465()) && !func_464())
	{
		func_463(60, 0);
		func_463(61, 0);
	}
	func_462();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_461(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_401)
		{
			iLocal_401 = 1;
			if (unk_0xE8A79675302ED812(98))
			{
				if (unk_0x663171D6F90FBA5A() == 64)
				{
					if (!Global_70789)
					{
						iLocal_401 = 0;
					}
					else
					{
						func_460();
						func_459();
					}
					Global_70789 = 0;
				}
				else
				{
					func_460();
					func_459();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xB6469267B091EAAA() != 5)
		{
			iLocal_672 = func_457();
			func_421();
			func_419();
			func_387(&uLocal_521);
			func_358();
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
	
	if (!unk_0xFA30DFD0084E92FE(Global_105220.f_9987.f_25, 7))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && func_14(func_16()))
		{
			bVar0 = false;
			if (unk_0xFA30DFD0084E92FE(*uParam0, 6) && unk_0xFA30DFD0084E92FE(*uParam0, 12))
			{
				fVar1 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), uParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (uParam0->f_2 == -1)
					{
						uParam0->f_2 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(10000, 15000));
					}
					else
					{
						if (func_13())
						{
							uParam0->f_2 = func_12(uParam0->f_2, (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(2000, 4000)));
						}
						if (!unk_0xFA30DFD0084E92FE(*uParam0, 23))
						{
							func_11(uParam0, &(uParam0->f_9));
						}
						else if (!unk_0xFA30DFD0084E92FE(*uParam0, 30))
						{
							if (unk_0x284F2ACE6839D3C0(&(uParam0->f_9), 0, -1))
							{
								if (unk_0x105601648511CC64() > uParam0->f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(uParam0, func_6(uParam0));
										func_3(0);
										unk_0xF0059F27F7BB6680(uParam0, 30);
									}
								}
							}
						}
						else if (unk_0x1BD5EE88F32433CD(uParam0->f_1))
						{
							unk_0x7CB6FD92BE491AD9(uParam0, 30);
							unk_0x26D344275839A25E(uParam0->f_1);
							uParam0->f_1 = -1;
							uParam0->f_2 = -1;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (unk_0xFA30DFD0084E92FE(*uParam0, 23))
				{
					func_2(uParam0);
				}
				unk_0x7CB6FD92BE491AD9(uParam0, 30);
				uParam0->f_2 = -1;
			}
		}
	}
}

void func_2(var uParam0)
{
	unk_0xC32C243942383443();
	unk_0x7CB6FD92BE491AD9(uParam0, 23);
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF0059F27F7BB6680(&(Global_105220.f_9987.f_25), 22);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_9987.f_25), 22);
	}
}

void func_4(var uParam0, struct<3> Param1)
{
	struct<16> Var0;
	struct<16> Var16;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var16 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	uParam0->f_1 = unk_0x2F079D1FC5F6CB99();
	unk_0x10B5C0C7337B8420(uParam0->f_1, &Var0, Param1, &Var16, 0, 0, 0);
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
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
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
	
	if (unk_0xF7DDAAF0EFDAFA22(0, 36))
	{
		unk_0xF0059F27F7BB6680(&(Global_105220.f_9987.f_25), 22);
	}
	bVar0 = unk_0xFA30DFD0084E92FE(Global_105220.f_9987.f_25, 22);
	if (iParam0 && bVar0)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_9987.f_25), 22);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_9()
{
	var uVar0;
	
	uVar0 = func_10(Global_105220.f_9987.f_25, 14336, 11);
	return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)
{
	return unk_0x97EF1E5BCE9DC075((uParam0 && iParam1), iParam2);
}

void func_11(var uParam0, var uParam1)
{
	unk_0x284F2ACE6839D3C0(uParam1, 0, -1);
	unk_0xF0059F27F7BB6680(uParam0, 23);
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
	
	bVar0 = unk_0xFA30DFD0084E92FE(Global_105220.f_9987.f_25, 22);
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
	return unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA());
}

void func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1319866.f_21)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1319866.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_1319866[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1319866[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = unk_0x73C2EB7ECF914A26(iVar0);
			if (Global_1319866[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1319866[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = unk_0x01236477A4C3D5CA(iVar0);
			}
			else
			{
				fVar2 = unk_0x24A6F9237A2F3687(iVar0);
			}
			if (Global_1319866[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1319866[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = unk_0x248C04B40CA8EF97(iVar0);
			if (Global_1319866[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1319866[*uParam0 /*5*/][2] = fVar2;
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
	return unk_0x7E2BBA85D425B9F8(iParam0);
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
	
	if (unk_0x2DA8CA50A72528FB(Global_69800.f_583))
	{
		bVar0 = false;
		if (iLocal_672 != Global_69800.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14))
		{
			bVar0 = true;
		}
		else if (Global_69800.f_590)
		{
			if (!func_26(Global_69800.f_584, unk_0x5DC00ADB7E2FD7C2(Global_69800.f_583), 1056964608, 0) || func_22(Global_69800.f_582, func_23(Global_69800.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_69800.f_591)
		{
			if (!func_26(Global_69800.f_587, unk_0x5DC00ADB7E2FD7C2(Global_69800.f_583), 1056964608, 0) || func_22(Global_69800.f_582, func_23(Global_69800.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!unk_0x724D816EA203A79E(Global_69800.f_581) || !unk_0xE59B7F5A03335350(Global_69800.f_581, 0)) || (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_69800.f_581, 0)))
		{
			if (unk_0x724D816EA203A79E(Global_69800.f_581) && !unk_0xE59B7F5A03335350(Global_69800.f_581, 0))
			{
				Global_69800.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (unk_0x724D816EA203A79E(Global_69800.f_581))
		{
			if (unk_0xE59B7F5A03335350(Global_69800.f_581, 0))
			{
				Global_69800.f_587 = { unk_0x541C2AEF053615BC(Global_69800.f_581, 1) };
			}
			else
			{
				Global_69800.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0x07B8ECB35A4ED3AC(&(Global_69800.f_583));
			Global_69800.f_590 = 0;
			Global_69800.f_591 = 0;
			Global_69800.f_581 = 0;
		}
	}
	else
	{
		Global_69800.f_590 = 0;
		Global_69800.f_591 = 0;
		Global_69800.f_581 = 0;
	}
	if ((((((!unk_0x2DA8CA50A72528FB(Global_69800.f_583) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_90441[iVar2] != 145 && Global_90451[iVar2] != 0) && unk_0x724D816EA203A79E(Global_90431[iVar2])) && unk_0xE59B7F5A03335350(Global_90431[iVar2], 0)) && !unk_0x2DA8CA50A72528FB(unk_0x6D01571F8E6286B4(Global_90431[iVar2]))) && Global_90441[iVar2] == iLocal_672) && unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(Global_90431[iVar2])))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_90431[iVar2], 0))
				{
					Global_69800.f_581 = Global_90431[iVar2];
					Global_69800.f_582 = iLocal_672;
					Global_69800.f_590 = 0;
					Global_69800.f_583 = unk_0x511FE22BCF5353CD(Global_69800.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0x2DA8CA50A72528FB(Global_69800.f_583) && !func_21(Global_69800.f_584, 0f, 0f, 0f, 0))
			{
				Global_69800.f_581 = 0;
				Global_69800.f_582 = iLocal_672;
				Global_69800.f_590 = 1;
				Global_69800.f_583 = unk_0x390CF6C8AD6903B7(Global_69800.f_584);
			}
			if (!unk_0x2DA8CA50A72528FB(Global_69800.f_583) && !func_21(Global_69800.f_587, 0f, 0f, 0f, 0))
			{
				Global_69800.f_581 = 0;
				Global_69800.f_582 = iLocal_672;
				Global_69800.f_591 = 1;
				Global_69800.f_583 = unk_0x390CF6C8AD6903B7(Global_69800.f_587);
			}
		}
		else
		{
			Global_69800.f_590 = 0;
			Global_69800.f_591 = 0;
		}
		if (unk_0x2DA8CA50A72528FB(Global_69800.f_583))
		{
			unk_0xBF0E22F3E083C33D(Global_69800.f_583, 225);
			unk_0x436D0272182E484D(Global_69800.f_583, "PVEHICLE");
			unk_0x4909873A6873A6C3(Global_69800.f_583, false);
			unk_0x12DB69036F6569F7(Global_69800.f_583, 3);
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
			unk_0x0D5352939CC40C16(Global_69800.f_583, iVar3);
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
		if (unk_0x724D816EA203A79E(Global_90431[iVar1]) && unk_0xE59B7F5A03335350(Global_90431[iVar1], 0))
		{
			if (Global_90441[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0x6F79ECA8C83E4357(Global_90431[iVar1]))
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
			if (Global_105220.f_9056.f_99.f_58[128] && !Global_105220.f_9056.f_99.f_58[131])
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
					if (Global_105220.f_9056.f_99.f_58[119])
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
			else if (Global_105220.f_9056.f_99.f_58[118])
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
		if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x357058E632979E65((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_28()
{
	func_300();
	func_219();
	func_68();
	func_29();
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (((((Local_402.f_29.f_80 && !Local_402.f_29.f_69) && Local_402.f_0 != -1) && func_67(Local_402.f_0, 0)) && func_67(Local_402.f_0, 5)) && unk_0xB731B8C5BCE89836(joaat("michael1")) == 0)
		{
			if (!unk_0x724D816EA203A79E(Local_402.f_113))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0))
					{
						iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
						if (func_64(iVar1))
						{
							Local_402.f_113 = iVar0;
						}
					}
				}
			}
			else if (unk_0xE59B7F5A03335350(Local_402.f_113, 0) && func_64(unk_0x6F79ECA8C83E4357(Local_402.f_113)))
			{
				if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_402.f_113, 0))
				{
					if (unk_0x0C265B3C448E6954(Local_402.f_113, Local_402.f_29.f_48, Local_402.f_29.f_51, Local_402.f_29.f_54, 0, 1, 0))
					{
						if ((!func_63(Local_402.f_113) && !func_62(Local_402.f_113)) && Local_402.f_113 != Global_69800.f_484[Local_402.f_0])
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
	if (!func_61(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 12) && !unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69800.f_555[0 /*21*/].f_4 != unk_0x6F79ECA8C83E4357(iParam1))
		{
			return;
		}
	}
	if (Global_70707 != -1 && Global_70707 != iParam0)
	{
		return;
	}
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			if (!unk_0x5CAE759AE8219D20(iParam1))
			{
				unk_0x77815D3407C6700D(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_105220.f_32546.f_4801 = func_50();
			}
			if (iParam1 != Global_69800.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_49(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_31(iVar0, 145);
					}
				}
				Global_70706 = iParam1;
				Global_70707 = iParam0;
				Global_70708 = iParam2;
			}
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_37(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
		if (!unk_0x724D816EA203A79E(iVar0))
		{
			iVar0 = unk_0xE293D7F16E1815E8(iParam0, -1);
		}
		if (unk_0x724D816EA203A79E(iVar0) && !unk_0x36CEFBE9B745A58D(iVar0))
		{
			if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_105220.f_2354.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6F79ECA8C83E4357(iParam0) == Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xF1734B55490E9045(&(Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_105220.f_32546.f_5592[iVar1] = iVar2;
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
		if (unk_0x6F79ECA8C83E4357(iParam0) == Global_105220.f_32546.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xF1734B55490E9045(&(Global_105220.f_32546.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_105220.f_32546.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_105220.f_32546.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_105220.f_32546.f_5590 = iParam1;
	Global_70705 = iParam0;
	Global_105220.f_32546.f_5588 = 1;
	func_32(iParam0, &(Global_105220.f_32546.f_5510));
}

void func_32(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_36(uParam1);
		uParam1->f_66 = unk_0x6F79ECA8C83E4357(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2232934AD664DD49(iParam0), 16);
		*uParam1 = unk_0x89FC8F09D6647DEC(iParam0);
		unk_0x87F182D2DA225F0D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x375E42DA279E7FED(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5F73107BDF663316(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x2629793241883F74(iParam0);
		uParam1->f_67 = unk_0x0FF608FD384AF8FA(iParam0);
		uParam1->f_69 = unk_0xC2587DF549B15BB6(iParam0);
		uParam1->f_70 = unk_0xA3E58143095D5828(iParam0);
		unk_0x715BE0BE8D01B21C(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x2774857472EBCE0F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xFF7612EE8C5F1E19(iParam0, 2))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 3))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_35(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			uParam1->f_68 = unk_0xAA1A0B747CDFC807(iParam0);
		}
		if (unk_0xA19D269B4B5A1532(uParam1->f_66))
		{
			if (unk_0x9741AF87EDFF311C(iParam0))
			{
				switch (unk_0xBCD69B76B3E60BF5(iParam0))
				{
					case 3:
					case 0:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 23);
						unk_0xF0059F27F7BB6680(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 23);
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xF0059F27F7BB6680(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xB830044A99FABAAF(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 9);
		}
		if (unk_0xA37E9F4E2795A88A(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 10);
		}
		if (unk_0xFD22243DAFAFE349(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 13);
			unk_0x103992E73728DA90(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x1EE004ED283345A0(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 12);
		}
		func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x97413DC2A72A11B3(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 11);
		}
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "IgnoredByQuickSave") && unk_0x75236BEC3BDDE069(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 27);
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
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
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
			if (unk_0x0ABA73B9B2E2F838(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x3EB14CBD49DA0017(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)
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

void func_36(var uParam0)
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

int func_37(int iParam0)
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_47(iParam0, 0, 0)) || func_47(iParam0, 1, 0)) || func_47(iParam0, 2, 0)) || func_46(iParam0) != 145) || func_45(iParam0)) || func_63(iParam0)) || func_62(iParam0)) || func_44(iParam0)) || !func_38(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_63(iParam0))
		{
		}
		if (func_63(iParam0))
		{
		}
		if (func_47(iParam0, 0, 0))
		{
		}
		if (func_47(iParam0, 1, 0))
		{
		}
		if (func_47(iParam0, 2, 0))
		{
		}
		if (func_46(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_38(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_39(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0))
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

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x7AF0088ABFA713B6()) || (iParam0 == joaat("buffalo3") && !unk_0x7AF0088ABFA713B6())) || (iParam0 == joaat("gauntlet2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blista3"))
	{
		if (!func_43())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xDF84CF7530FA6525())
		{
			if (unk_0x62A638D88F7B7D88(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD90F58A58682ED2F(Var1.f_0))
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
		if ((((!func_467() && !func_466()) && !func_465()) && !func_464()) && !func_43())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_465())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_42(iParam0))
		{
			return 0;
		}
	}
	if (!func_40(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_41())
	{
		return 1;
	}
	unk_0xC4F4FCDFF2D3ABE9(&iVar0, &uVar1);
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
	if (!unk_0xD541643C038E7321(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_41()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2498869)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xB99C193A32DE341D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12299) && iVar1 < Global_262145.f_12300)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13597 && iVar1 < Global_262145.f_13609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13593 && iVar1 < Global_262145.f_13605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13594 && iVar1 < Global_262145.f_13606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13595 && iVar1 < Global_262145.f_13607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13596 && iVar1 < Global_262145.f_13608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13598 && iVar1 < Global_262145.f_13610)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13599 && iVar1 < Global_262145.f_13602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13600 && iVar1 < Global_262145.f_13603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13601 && iVar1 < Global_262145.f_13604)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16228 && iVar1 < Global_262145.f_16193)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16223 && iVar1 < Global_262145.f_16188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16227 && iVar1 < Global_262145.f_16192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16226 && iVar1 < Global_262145.f_16191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16220 && iVar1 < Global_262145.f_16185)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16221 && iVar1 < Global_262145.f_16186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16224 && iVar1 < Global_262145.f_16189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16225 && iVar1 < Global_262145.f_16190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16222 && iVar1 < Global_262145.f_16187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16230 && iVar1 < Global_262145.f_16195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16231 && iVar1 < Global_262145.f_16196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16219 && iVar1 < Global_262145.f_16184)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16218 && iVar1 < Global_262145.f_16183)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16217 && iVar1 < Global_262145.f_16182)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16229 && iVar1 < Global_262145.f_16194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16232 && iVar1 < Global_262145.f_16197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16233 && iVar1 < Global_262145.f_16198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16234 && iVar1 < Global_262145.f_16199)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16235 && iVar1 < Global_262145.f_16200)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16380 && iVar1 < Global_262145.f_16402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16381 && iVar1 < Global_262145.f_16403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16382 && iVar1 < Global_262145.f_16404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16383 && iVar1 < Global_262145.f_16405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16384 && iVar1 < Global_262145.f_16406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16385 && iVar1 < Global_262145.f_16407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16387 && iVar1 < Global_262145.f_16408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16388 && iVar1 < Global_262145.f_16409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16389 && iVar1 < Global_262145.f_16410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16390 && iVar1 < Global_262145.f_16411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16391 && iVar1 < Global_262145.f_16412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16392 && iVar1 < Global_262145.f_16413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16393 && iVar1 < Global_262145.f_16414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16399 && iVar1 < Global_262145.f_16421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16396 && iVar1 < Global_262145.f_16417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16397 && iVar1 < Global_262145.f_16418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16398 && iVar1 < Global_262145.f_16419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16386 && iVar1 < Global_262145.f_16420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16400 && iVar1 < Global_262145.f_16422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16394 && iVar1 < Global_262145.f_16415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16395 && iVar1 < Global_262145.f_16416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16401 && iVar1 < Global_262145.f_16423)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18029 && iVar1 < Global_262145.f_18127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18030 && iVar1 < Global_262145.f_18128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18031 && iVar1 < Global_262145.f_18129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18032 && iVar1 < Global_262145.f_18130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18033 && iVar1 < Global_262145.f_18131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18034 && iVar1 < Global_262145.f_18132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18035 && iVar1 < Global_262145.f_18133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18036 && iVar1 < Global_262145.f_18134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18037 && iVar1 < Global_262145.f_18135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18038 && iVar1 < Global_262145.f_18136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18039 && iVar1 < Global_262145.f_18137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18040 && iVar1 < Global_262145.f_18138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18041 && iVar1 < Global_262145.f_18139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18042 && iVar1 < Global_262145.f_18140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18043 && iVar1 < Global_262145.f_18141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18044 && iVar1 < Global_262145.f_18142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18045 && iVar1 < Global_262145.f_18143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18046 && iVar1 < Global_262145.f_18144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18047 && iVar1 < Global_262145.f_18145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18048 && iVar1 < Global_262145.f_18146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18049 && iVar1 < Global_262145.f_18147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18050 && iVar1 < Global_262145.f_18148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18051 && iVar1 < Global_262145.f_18149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18052 && iVar1 < Global_262145.f_18150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18053 && iVar1 < Global_262145.f_18151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19110 && iVar1 < Global_262145.f_19106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19111 && iVar1 < Global_262145.f_19107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19112 && iVar1 < Global_262145.f_19108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19113 && iVar1 < Global_262145.f_19109)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19989 && iVar1 < Global_262145.f_19997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19990 && iVar1 < Global_262145.f_19998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19991 && iVar1 < Global_262145.f_19999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19992 && iVar1 < Global_262145.f_20000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19993 && iVar1 < Global_262145.f_20001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19994 && iVar1 < Global_262145.f_20002)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20766 && iVar1 < Global_262145.f_20786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20778 && iVar1 < Global_262145.f_20798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20769 && iVar1 < Global_262145.f_20789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20779 && iVar1 < Global_262145.f_20799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20767 && iVar1 < Global_262145.f_20787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20783 && iVar1 < Global_262145.f_20803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20781 && iVar1 < Global_262145.f_20801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20782 && iVar1 < Global_262145.f_20802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20777 && iVar1 < Global_262145.f_20797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20784 && iVar1 < Global_262145.f_20804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20780 && iVar1 < Global_262145.f_20800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20776 && iVar1 < Global_262145.f_20796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20768 && iVar1 < Global_262145.f_20788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20770 && iVar1 < Global_262145.f_20790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20771 && iVar1 < Global_262145.f_20791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20772 && iVar1 < Global_262145.f_20792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20773 && iVar1 < Global_262145.f_20793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20774 && iVar1 < Global_262145.f_20794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20775 && iVar1 < Global_262145.f_20795)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21727 && iVar1 < Global_262145.f_21755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21728 && iVar1 < Global_262145.f_21756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21729 && iVar1 < Global_262145.f_21757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21730 && iVar1 < Global_262145.f_21758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21731 && iVar1 < Global_262145.f_21759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21732 && iVar1 < Global_262145.f_21760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21733 && iVar1 < Global_262145.f_21761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21734 && iVar1 < Global_262145.f_21762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21735 && iVar1 < Global_262145.f_21763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21736 && iVar1 < Global_262145.f_21764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21737 && iVar1 < Global_262145.f_21765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21738 && iVar1 < Global_262145.f_21766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21739 && iVar1 < Global_262145.f_21767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21740 && iVar1 < Global_262145.f_21768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21741 && iVar1 < Global_262145.f_21769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21742 && iVar1 < Global_262145.f_21770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21743 && iVar1 < Global_262145.f_21771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21744 && iVar1 < Global_262145.f_21772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21745 && iVar1 < Global_262145.f_21773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21746 && iVar1 < Global_262145.f_21774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21747 && iVar1 < Global_262145.f_21775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21748 && iVar1 < Global_262145.f_21776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21749 && iVar1 < Global_262145.f_21777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21750 && iVar1 < Global_262145.f_21778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21751 && iVar1 < Global_262145.f_21779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21752 && iVar1 < Global_262145.f_21780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21753 && iVar1 < Global_262145.f_21781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21754 && iVar1 < Global_262145.f_21782)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_22920 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_22919 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_22918 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_22921 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_22917 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_22997 && iVar1 < Global_262145.f_22984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_22998 && iVar1 < Global_262145.f_22985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23003 && iVar1 < Global_262145.f_22990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23002 && iVar1 < Global_262145.f_22989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23000 && iVar1 < Global_262145.f_22987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23006 && iVar1 < Global_262145.f_22993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23008 && iVar1 < Global_262145.f_22995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23009 && iVar1 < Global_262145.f_22996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23007 && iVar1 < Global_262145.f_22994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_22999 && iVar1 < Global_262145.f_22986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23001 && iVar1 < Global_262145.f_22988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23005 && iVar1 < Global_262145.f_22992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23004 && iVar1 < Global_262145.f_22991)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_43()
{
	var uVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF0059F27F7BB6680(&uVar0, 2);
				unk_0xF0059F27F7BB6680(&uVar0, 4);
				unk_0xF0059F27F7BB6680(&uVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_25, 2);
				unk_0xF0059F27F7BB6680(&Global_25, 4);
				unk_0xF0059F27F7BB6680(&Global_25, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar0, 0);
					unk_0x973C4C95367920C1(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143856 == 2)
	{
		return 1;
	}
	else if (Global_143856 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	uVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_39(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(Global_69800.f_484[24]))
	{
		if (iParam0 == Global_69800.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69800.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 145;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			if (Global_90431[iVar0] == iParam0)
			{
				return Global_90441[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_47(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_48(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xFA30DFD0084E92FE(Global_105220.f_7200[iVar9], 0))
		{
			if (unk_0x9945EE67AEC122F7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_49(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69800.f_139[iParam0];
}

int func_50()
{
	var uVar0;
	
	func_60(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_59(&uVar0, unk_0x7E09057438B9D216());
	func_58(&uVar0, unk_0x6E06C0DB9B43570D());
	func_53(&uVar0, unk_0xBE14F159908E4EE5());
	func_52(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_51(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_51(var uParam0, int iParam1)
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

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_57(*uParam0);
	iVar1 = func_55(*uParam0);
	if (iParam1 < 1 || iParam1 > func_54(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_54(int iParam0, int iParam1)
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

var func_55(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_56(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_56(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_57(int iParam0)
{
	return iParam0 & 15;
}

void func_58(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_61(var uParam0, int iParam1)
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
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
			if (func_43())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_43())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_105220.f_32546.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_21(Global_105220.f_32546.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_32546.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_105220.f_32546.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_105220.f_32546.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 19))
	{
		if (!func_21(Global_105220.f_2354.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_2354.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_105220.f_2354.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_21(Global_105220.f_2354.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_2354.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_105220.f_2354.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(Global_90461[iVar0]))
		{
			if (Global_90461[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x724D816EA203A79E(Global_90431[iVar0]) && unk_0xE59B7F5A03335350(Global_90431[iVar0], 0))
			{
				if (Global_90431[iVar0] == iParam0 && unk_0x6F79ECA8C83E4357(Global_90431[iVar0]) == unk_0x6F79ECA8C83E4357(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	switch (Local_402.f_6)
	{
		case 0:
			return func_66(iParam0);
			break;
		
		case 1:
			if (((unk_0xE7B3A320107C1379(iParam0) || unk_0x7974165A9BC75283(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_65(iParam0);
			break;
		
		case 2:
			return (unk_0x8C1A6E7D5F410F4A(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_65(int iParam0)
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!unk_0x7C28D15641461C68(iParam0) && !unk_0x7512ED01F3F46714(iParam0)) && !unk_0x2B4DE5C0D509B0F9(iParam0)) && !unk_0x89B9572166100905(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_66(int iParam0)
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!unk_0xA19D269B4B5A1532(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

bool func_67(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_105220.f_32546[iParam0], iParam1);
}

void func_68()
{
	struct<101> Var0;
	struct<78> Var102;
	bool bVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	int iVar185;
	struct<4> Var186;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	int iVar194;
	int iVar195;
	int iVar196;
	bool bVar197;
	int iVar198;
	bool bVar199;
	bool bVar200;
	int iVar201;
	int iVar202;
	int iVar203;
	int iVar204;
	struct<2> Var205;
	int iVar209;
	bool bVar210;
	int iVar211;
	bool bVar212;
	var uVar213;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var102.f_9 = 49;
	Var102.f_59 = 2;
	bVar180 = false;
	iVar181 = 0;
	if (iLocal_654 > 0 && iLocal_654 != 99)
	{
		if (((((((((((((((Local_402.f_0 == -1 || unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0)) || ((unk_0x724D816EA203A79E(Global_69800.f_484[Local_402.f_0]) && unk_0xE59B7F5A03335350(Global_69800.f_484[Local_402.f_0], 0)) && (unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), Global_69800.f_484[Local_402.f_0]) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_69800.f_484[Local_402.f_0], 1)))) || ((unk_0x724D816EA203A79E(Global_69800.f_484[Local_402.f_0]) && unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA())) && ((unk_0xDB5C848CD9F1133E(unk_0xBC25C936A095B5BA()) - 1f) > 0.15f && unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Global_69800.f_484[Local_402.f_0])))) || ((unk_0x724D816EA203A79E(Global_69800.f_484[Local_402.f_0]) && unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA())) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_69800.f_484[Local_402.f_0], 1))) || (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_218(0) != bLocal_1018) || bLocal_854) || func_217(-1082130432))
		{
			iLocal_654 = 99;
		}
	}
	switch (iLocal_654)
	{
		case 0:
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) && !Global_68280) && !bLocal_854) && !unk_0x17FAADF9916EF741())
			{
				if ((((((((((Local_402.f_29.f_80 && Local_402.f_2 == 0) && (Global_69800.f_592[0] != -1 || func_216() != 0)) && Local_402.f_0 != -1) && !iLocal_1016) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_217(-1082130432))
				{
					if (iLocal_656 != -1)
					{
					}
					else if (func_67(Local_402.f_0, 0) && func_67(Local_402.f_0, 5))
					{
						if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_402.f_29.f_7, Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0) && !unk_0x3BFD283B5133A140(unk_0xBC25C936A095B5BA())) && !unk_0xE7E55F7532DEE345(unk_0xBC25C936A095B5BA()))
						{
							if ((!unk_0x724D816EA203A79E(Global_69800.f_484[Local_402.f_0]) || !unk_0xE59B7F5A03335350(Global_69800.f_484[Local_402.f_0], 0)) || (!unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), Global_69800.f_484[Local_402.f_0]) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_69800.f_484[Local_402.f_0], 1)))
							{
								iVar184 = func_216();
								iVar185 = 0;
								while (iVar185 < iVar184)
								{
									if (func_64(func_212(iVar185)))
									{
										iVar183++;
									}
									iVar185++;
								}
								iVar182 = 0;
								while (iVar182 < Global_69800.f_592)
								{
									if (Global_69800.f_592[iVar182] != -1)
									{
										if ((func_211(Global_69800.f_592[iVar182], iLocal_672) && Global_105220.f_32546.f_1982[iLocal_672 /*939*/].f_626[Global_69800.f_592[iVar182]] == -15) && (Global_69800.f_592[iVar182] != 200 || !Global_105220.f_25044.f_7))
										{
											iVar183++;
										}
									}
									iVar182++;
								}
								if (iVar183 > 0)
								{
									if (!unk_0xF16DAFF595E80F7C())
									{
										iLocal_856 = 1;
										if (Local_402.f_6 == 3)
										{
											func_210(&iLocal_655, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_210(&iLocal_655, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										bLocal_1018 = func_218(0);
										iLocal_654++;
									}
								}
								else if (!iLocal_856)
								{
									if (Local_402.f_6 == 0)
									{
										if (!unk_0xF16DAFF595E80F7C() || func_209("HANGAR_NO"))
										{
											func_208("HANGAR_NO", -1);
											StringCopy(&cLocal_1019, "HANGAR_NO", 16);
										}
										bVar180 = true;
									}
									else if (Local_402.f_6 == 1)
									{
										if (!unk_0xF16DAFF595E80F7C() || func_209("MARINA_NO"))
										{
											func_208("MARINA_NO", -1);
											StringCopy(&cLocal_1019, "MARINA_NO", 16);
										}
										bVar180 = true;
									}
									else if (Local_402.f_6 == 2)
									{
										if (!unk_0xF16DAFF595E80F7C() || func_209("HELIPAD_NO"))
										{
											func_208("HELIPAD_NO", -1);
											StringCopy(&cLocal_1019, "HELIPAD_NO", 16);
										}
										bVar180 = true;
									}
									else if (Local_402.f_6 == 3)
									{
										StringCopy(&Var186, "CAR_GAR_NO", 16);
										if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
										{
											StringConCat(&Var186, "_1", 16);
										}
										else if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
										{
											StringConCat(&Var186, "_2", 16);
										}
										if (!unk_0xF16DAFF595E80F7C() || func_209(&Var186))
										{
											func_208(&Var186, -1);
											cLocal_1019 = { Var186 };
										}
										bVar180 = true;
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
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && func_206(0, -1, 0))
			{
				if (iLocal_656 != -1)
				{
					iLocal_654 = 0;
					return;
				}
				if (func_205(iLocal_655, 1))
				{
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
					{
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
					}
					else
					{
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 256);
					}
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
						{
							unk_0x4E87F356DA56EB3F(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0);
						}
					}
					func_204();
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
				func_203(0, 0);
				func_202(1, 4, 0, 0, 0);
				func_201(1, 2, 1, 1, 1);
				func_200("WEB_VEH_TITLE");
				iVar190 = 0;
				while (iVar190 < iLocal_646)
				{
					iLocal_646[iVar190] = 0;
					iVar190++;
				}
				iVar191 = -1;
				iVar192 = 0;
				func_61(&(Local_402.f_8), Local_402.f_0);
				iVar194 = 0;
				iVar195 = func_216();
				iVar193 = 0;
				while (iVar193 < iVar195)
				{
					if (func_64(func_212(iVar193)))
					{
						if (iVar191 == -1)
						{
							iVar191 = iVar194;
						}
						if (Local_402.f_8.f_4 == func_212(iVar193))
						{
							iLocal_645 = iVar194;
							iVar192 = 1;
						}
						iVar194++;
					}
					iVar193++;
				}
				iVar193 = 0;
				while (iVar193 < Global_69800.f_592)
				{
					if (Global_69800.f_592[iVar193] != -1)
					{
						if ((func_211(Global_69800.f_592[iVar193], iLocal_672) && Global_105220.f_32546.f_1982[iLocal_672 /*939*/].f_626[Global_69800.f_592[iVar193]] == -15) && (Global_69800.f_592[iVar193] != 200 || !Global_105220.f_25044.f_7))
						{
							func_136(Global_69800.f_592[iVar193], &Var0, 0, iLocal_672, -1);
							if (iVar191 == -1)
							{
								iVar191 = iVar194;
							}
							if (Local_402.f_8.f_4 == Var0.f_66)
							{
								iLocal_645 = iVar194;
								iVar192 = 1;
							}
							iVar194++;
						}
					}
					iVar193++;
				}
				if (iLocal_645 == -1)
				{
					iLocal_645 = iVar191;
				}
				iVar194 = 0;
				iVar195 = func_216();
				iVar193 = 0;
				while (iVar193 < iVar195)
				{
					if (func_64(func_212(iVar193)))
					{
						unk_0xF0059F27F7BB6680(&(iLocal_646[(iVar194 / 32)]), (iVar194 % 32));
						func_132(iVar194, unk_0xD8D56586882095EE(func_212(iVar193)), 0, 1, 0, 0);
						if ((iLocal_645 == iVar194 && iVar192) && Local_402.f_6 != 3)
						{
							func_131(iVar194, 4, 0);
						}
						else
						{
							func_131(iVar194, 0, 0);
						}
						iVar194++;
					}
					iVar193++;
				}
				iVar193 = 0;
				while (iVar193 < Global_69800.f_592)
				{
					if (Global_69800.f_592[iVar193] != -1)
					{
						if ((func_211(Global_69800.f_592[iVar193], iLocal_672) && Global_105220.f_32546.f_1982[iLocal_672 /*939*/].f_626[Global_69800.f_592[iVar193]] == -15) && (Global_69800.f_592[iVar193] != 200 || !Global_105220.f_25044.f_7))
						{
							unk_0xF0059F27F7BB6680(&(iLocal_646[(iVar194 / 32)]), (iVar194 % 32));
							func_136(Global_69800.f_592[iVar193], &Var0, 0, iLocal_672, -1);
							if (Global_69800.f_592[iVar193] != 164)
							{
								func_132(iVar194, func_129(Global_69800.f_592[iVar193]), 0, 1, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_132(iVar194, "TWOSTRINGS", 2, 1, 0, 0);
								func_126(func_129(Global_69800.f_592[iVar193]), 0);
								func_126("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_132(iVar194, "TWOSTRINGS", 2, 1, 0, 0);
								func_126(func_129(Global_69800.f_592[iVar193]), 0);
								func_126("VNX_SWFTB", 0);
							}
							else
							{
								func_132(iVar194, func_129(Global_69800.f_592[iVar193]), 0, 1, 0, 0);
							}
							if (iLocal_645 == iVar194 && iVar192)
							{
								func_131(iVar194, 4, 0);
							}
							else
							{
								func_131(iVar194, 0, 0);
							}
							iVar194++;
						}
					}
					iVar193++;
				}
				func_125(iLocal_645, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar181 = 0;
				if (unk_0x8ACB0C3FACC09467())
				{
					if (unk_0x0738078C96634C59(2))
					{
						unk_0xBBC4195AD74D153D(0, 1, 1);
						unk_0xBBC4195AD74D153D(0, 2, 1);
						unk_0xBBC4195AD74D153D(2, 200, 1);
						unk_0x5EFA245B45A49778(0, 237, 1);
						unk_0x5EFA245B45A49778(0, 238, 1);
						unk_0x5EFA245B45A49778(0, 241, 1);
						unk_0x5EFA245B45A49778(0, 242, 1);
						func_122(0, 0, 0, 1);
						func_121(0, -1, 1);
						if (func_120())
						{
							if (Global_4266198 != iLocal_645)
							{
								unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_645 = Global_4266198;
								func_125(iLocal_645, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar181 = 1;
							}
						}
					}
				}
				if (unk_0x694514BD37EC4E94(2, 188) || unk_0x694514BD37EC4E94(2, 241))
				{
					iLocal_660 = 1;
					unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar196 = (iLocal_645 - 1);
					while (iVar196 >= 0)
					{
						if (unk_0xFA30DFD0084E92FE(iLocal_646[(iVar196 / 32)], (iVar196 % 32)))
						{
							iLocal_645 = iVar196;
							bVar197 = true;
							iVar196 = 0;
						}
						iVar196 = (iVar196 + -1);
					}
					if (!bVar197)
					{
						iVar196 = (iLocal_646 * 32 - 1);
						while (iVar196 >= iLocal_645 + 1)
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_646[(iVar196 / 32)], (iVar196 % 32)))
							{
								iLocal_645 = iVar196;
								bVar197 = true;
								iVar196 = 0;
							}
							iVar196 = (iVar196 + -1);
						}
					}
					if (bVar197)
					{
						func_125(iLocal_645, 1, 1);
					}
				}
				else if (unk_0x694514BD37EC4E94(2, 187) || unk_0x694514BD37EC4E94(2, 242))
				{
					iLocal_660 = 1;
					unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar198 = iLocal_645 + 1;
					while (iVar198 <= (iLocal_646 * 32 - 1))
					{
						if (unk_0xFA30DFD0084E92FE(iLocal_646[(iVar198 / 32)], (iVar198 % 32)))
						{
							iLocal_645 = iVar198;
							bVar199 = true;
							iVar198 = iLocal_646 * 32 + 1;
						}
						iVar198++;
					}
					if (!bVar199)
					{
						iVar198 = 0;
						while (iVar198 <= (iLocal_645 - 1))
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_646[(iVar198 / 32)], (iVar198 % 32)))
							{
								iLocal_645 = iVar198;
								bVar199 = true;
								iVar198 = iLocal_646 * 32 + 1;
							}
							iVar198++;
						}
					}
					if (bVar199)
					{
						func_125(iLocal_645, 1, 1);
					}
				}
				else if (unk_0x093484B35A948BFC(2, 201) || iVar181 == 1)
				{
					bVar200 = false;
					iVar181 = 0;
					unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar202 = 0;
					iVar203 = func_216();
					iVar201 = 0;
					while (iVar201 < iVar203)
					{
						if (func_64(func_212(iVar201)))
						{
							if (iLocal_645 == iVar202 && (((((Local_402.f_8.f_4 != func_212(iVar201) || !unk_0x724D816EA203A79E(Global_69800.f_484[Local_402.f_0])) || !unk_0xE59B7F5A03335350(Global_69800.f_484[Local_402.f_0], 0)) || Local_402.f_0 == 21) || Local_402.f_0 == 22) || Local_402.f_0 == 23))
							{
								bVar200 = true;
								if ((((!iLocal_659 && Local_402.f_8.f_4 != func_212(iVar201)) || (!iLocal_659 && Local_402.f_0 == 21)) || (!iLocal_659 && Local_402.f_0 == 22)) || (!iLocal_659 && Local_402.f_0 == 23))
								{
									func_119("VEH_SELECT_CNFA", 0, 0);
									func_118(-1);
									func_117(201, "ITEM_YES", -1);
									func_117(202, "ITEM_NO", -1);
									iLocal_659 = 1;
									iVar201 = func_216() + 1;
								}
								else if (Local_402.f_6 == 3)
								{
									if (func_116(func_212(iVar201)))
									{
										iLocal_1017 = func_212(iVar201);
										iLocal_657 = 0;
										iLocal_658 = 0;
										iLocal_651 = 0;
										iLocal_654++;
									}
									else
									{
										iLocal_1016 = 1;
										iLocal_1017 = func_212(iVar201);
										iLocal_654 = 99;
									}
								}
								else if (Local_402.f_6 == 0 && func_116(func_212(iVar201)))
								{
									iLocal_1017 = func_212(iVar201);
									iLocal_657 = 0;
									iLocal_658 = 0;
									iLocal_651 = 0;
									iLocal_654++;
								}
								else
								{
									if (unk_0x724D816EA203A79E(Global_69800.f_484[Local_402.f_0]))
									{
										unk_0x77815D3407C6700D(Global_69800.f_484[Local_402.f_0], 0, 1);
										unk_0xCF6040807CC0E4A5(&(Global_69800.f_484[Local_402.f_0]));
									}
									Var102.f_66 = func_212(iVar201);
									unk_0xF0059F27F7BB6680(&(Var102.f_77), 14);
									func_113(Local_402.f_0, &Var102, 0f, 0f, 0f, -1f, 145);
									func_112(Local_402.f_0);
									func_61(&(Local_402.f_8), Local_402.f_0);
									iVar201 = func_216() + 1;
									iLocal_658 = 1;
								}
							}
							iVar202++;
						}
						iVar201++;
					}
					if (!bVar200)
					{
						iVar201 = 0;
						while (iVar201 < Global_69800.f_592)
						{
							if (Global_69800.f_592[iVar201] != -1)
							{
								if ((func_211(Global_69800.f_592[iVar201], iLocal_672) && Global_105220.f_32546.f_1982[iLocal_672 /*939*/].f_626[Global_69800.f_592[iVar201]] == -15) && (Global_69800.f_592[iVar201] != 200 || !Global_105220.f_25044.f_7))
								{
									func_136(Global_69800.f_592[iVar201], &Var0, 0, iLocal_672, -1);
									if (iLocal_645 == iVar202 && ((Local_402.f_8.f_4 != Var0.f_66 || !unk_0x724D816EA203A79E(Global_69800.f_484[Local_402.f_0])) || !unk_0xE59B7F5A03335350(Global_69800.f_484[Local_402.f_0], 0)))
									{
										bVar200 = true;
										if (!iLocal_659)
										{
											if (Local_402.f_6 == 3)
											{
												func_119("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_119("VEH_SELECT_CNFA", 0, 0);
											}
											func_118(-1);
											func_117(201, "ITEM_YES", -1);
											func_117(202, "ITEM_NO", -1);
											iLocal_659 = 1;
											iVar201 = Global_69800.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_654 = 3;
											iLocal_658 = 1;
											iVar201 = Global_69800.f_592 + 1;
										}
										else
										{
											if (unk_0x724D816EA203A79E(Global_69800.f_484[Local_402.f_0]))
											{
												unk_0x77815D3407C6700D(Global_69800.f_484[Local_402.f_0], 0, 1);
												unk_0xCF6040807CC0E4A5(&(Global_69800.f_484[Local_402.f_0]));
											}
											func_136(Global_69800.f_592[iVar201], &Var0, 0, iLocal_672, -1);
											unk_0xF0059F27F7BB6680(&(Var0.f_77), 14);
											if (unk_0xA19D269B4B5A1532(Var0.f_66))
											{
												unk_0xF0059F27F7BB6680(&(Var0.f_77), 22);
											}
											func_113(Local_402.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
											func_112(Local_402.f_0);
											func_61(&(Local_402.f_8), Local_402.f_0);
											iVar201 = Global_69800.f_592 + 1;
											iLocal_658 = 1;
										}
									}
									iVar202++;
								}
							}
							iVar201++;
						}
					}
				}
				else if (unk_0x093484B35A948BFC(2, 202) || unk_0x093484B35A948BFC(2, 238))
				{
					unk_0xC4BA30B532FE260F(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			unk_0xDE7B9CB38D019BF0();
			if (iLocal_660)
			{
				func_119("", 0, 0);
				func_118(-1);
				func_117(201, "ITEM_SELECT", -1);
				func_117(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			func_74(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 3:
			if (!iLocal_657 || iLocal_658)
			{
				func_203(0, 0);
				func_202(1, 0, 0, 0, 0);
				func_201(1, 1, 1, 1, 1);
				iVar204 = 0;
				while (iVar204 < iLocal_652)
				{
					iLocal_652[iVar204] = 0;
					iVar204++;
				}
				func_200("WEB_VEH_TITLE2");
				iVar204 = 0;
				while (iVar204 < 25)
				{
					StringCopy(&Var205, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var205, iVar204, 16);
					func_132(iVar204, &Var205, 0, 1, 0, 0);
					unk_0xF0059F27F7BB6680(&(iLocal_652[(iVar204 / 32)]), (iVar204 % 32));
					iVar204++;
				}
				if (Local_674.f_12 == 0)
				{
					iLocal_651 = Global_105220.f_25153.f_313[200];
				}
				else if (Local_674.f_12 == 1)
				{
					iLocal_651 = Global_105220.f_25153.f_626[200];
				}
				else
				{
					iLocal_651 = Global_105220.f_25153.f_939[200];
				}
				func_125(iLocal_651, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar181 = 0;
				if (unk_0x8ACB0C3FACC09467())
				{
					if (unk_0x0738078C96634C59(2))
					{
						unk_0xBBC4195AD74D153D(0, 1, 1);
						unk_0xBBC4195AD74D153D(0, 2, 1);
						unk_0x5EFA245B45A49778(0, 237, 1);
						unk_0x5EFA245B45A49778(0, 238, 1);
						unk_0x5EFA245B45A49778(0, 241, 1);
						unk_0x5EFA245B45A49778(0, 242, 1);
						func_122(0, 0, 0, 1);
						func_121(0, -1, 1);
						if (func_120())
						{
							if (Global_4266198 != iLocal_651)
							{
								unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_651 = Global_4266198;
								func_125(iLocal_651, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar181 = 1;
							}
						}
					}
				}
				if (unk_0x694514BD37EC4E94(2, 188) || unk_0x694514BD37EC4E94(2, 241))
				{
					iLocal_660 = 1;
					unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar209 = (iLocal_651 - 1);
					while (iVar209 >= 0)
					{
						if (unk_0xFA30DFD0084E92FE(iLocal_652[(iVar209 / 32)], (iVar209 % 32)))
						{
							iLocal_651 = iVar209;
							bVar210 = true;
							iVar209 = 0;
						}
						iVar209 = (iVar209 + -1);
					}
					if (!bVar210)
					{
						iVar209 = 31;
						while (iVar209 >= iLocal_651 + 1)
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_652[(iVar209 / 32)], (iVar209 % 32)))
							{
								iLocal_651 = iVar209;
								bVar210 = true;
								iVar209 = iLocal_651;
							}
							iVar209 = (iVar209 + -1);
						}
					}
					if (bVar210)
					{
						func_125(iLocal_651, 1, 1);
					}
				}
				else if (unk_0x694514BD37EC4E94(2, 187) || unk_0x694514BD37EC4E94(2, 242))
				{
					iLocal_660 = 1;
					unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar211 = iLocal_651 + 1;
					while (iVar211 <= 31)
					{
						if (unk_0xFA30DFD0084E92FE(iLocal_652[(iVar211 / 32)], (iVar211 % 32)))
						{
							iLocal_651 = iVar211;
							bVar212 = true;
							iVar211 = 31;
						}
						iVar211++;
					}
					if (!bVar212)
					{
						iVar211 = 0;
						while (iVar211 <= (iLocal_651 - 1))
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_652[(iVar211 / 32)], (iVar211 % 32)))
							{
								iLocal_651 = iVar211;
								bVar212 = true;
								iVar211 = iLocal_651;
							}
							iVar211++;
						}
					}
					if (bVar212)
					{
						func_125(iLocal_651, 1, 1);
					}
				}
				else if (unk_0x093484B35A948BFC(2, 201) || iVar181 == 1)
				{
					iVar181 = 0;
					unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (unk_0x724D816EA203A79E(Global_69800.f_484[Local_402.f_0]))
					{
						unk_0x77815D3407C6700D(Global_69800.f_484[Local_402.f_0], 0, 1);
						unk_0xCF6040807CC0E4A5(&(Global_69800.f_484[Local_402.f_0]));
					}
					uVar213 = iLocal_651 + 1;
					if (iLocal_672 == 0)
					{
						Global_105220.f_25153.f_313[200] = uVar213;
					}
					else if (iLocal_672 == 1)
					{
						Global_105220.f_25153.f_626[200] = uVar213;
					}
					else if (iLocal_672 == 2)
					{
						Global_105220.f_25153.f_939[200] = uVar213;
					}
					func_136(200, &Var0, 0, iLocal_672, -1);
					unk_0xF0059F27F7BB6680(&(Var0.f_77), 14);
					if (unk_0xA19D269B4B5A1532(Var0.f_66))
					{
						unk_0xF0059F27F7BB6680(&(Var0.f_77), 22);
					}
					func_113(Local_402.f_0, &Var0, 0f, 0f, 0f, -1f, 145);
					func_112(Local_402.f_0);
					func_61(&(Local_402.f_8), Local_402.f_0);
					iLocal_658 = 1;
					iLocal_654 = 2;
				}
				else if (unk_0x093484B35A948BFC(2, 202) || unk_0x093484B35A948BFC(2, 238))
				{
					unk_0xC4BA30B532FE260F(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iLocal_657 = 0;
					iLocal_658 = 0;
					iLocal_654 = (iLocal_654 - 1);
				}
			}
			unk_0xDE7B9CB38D019BF0();
			if (iLocal_660)
			{
				func_119("", 0, 0);
				func_118(-1);
				func_117(201, "ITEM_SELECT", -1);
				func_117(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			func_74(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
				{
					if (!unk_0x000432662FEA65B1())
					{
						unk_0x4E87F356DA56EB3F(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
					}
				}
			}
			func_71(1, -1);
			iLocal_654 = 0;
			func_69(&iLocal_655);
			iLocal_655 = -1;
			break;
	}
	if (!bVar180 && unk_0xF16DAFF595E80F7C())
	{
		if (!unk_0xF1734B55490E9045(&cLocal_1019))
		{
			if ((((func_209("HANGAR_NO") || func_209("MARINA_NO")) || func_209("HELIPAD_NO")) || func_209("CAR_GAR_NO_1")) || func_209("CAR_GAR_NO_2"))
			{
				unk_0x7456702622C62EA0(1);
			}
			StringCopy(&cLocal_1019, "", 16);
		}
	}
}

void func_69(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_70(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36613[iVar0 /*32*/])
		{
			Global_36613[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_70(int iParam0)
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
		if (Global_36613[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_71(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17345.f_7931)
	{
		unk_0xC0404835F30391BB(15);
		Global_17345.f_7931 = 0;
	}
	unk_0xE7918A3D05166D98(0f);
	if (Global_17345.f_5498[iVar0])
	{
		unk_0x841D233D3CE81152(9, 0);
		Global_17345.f_5498[iVar0] = 0;
	}
	if (Global_17345.f_5484[iVar0])
	{
		unk_0x786556581D95BCB2("CommonMenu");
		Global_17345.f_5484[iVar0] = 0;
	}
	if (Global_17345.f_5491[iVar0])
	{
		unk_0x786556581D95BCB2("MPShopSale");
		Global_17345.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_72(&(Global_17345.f_5530[iVar0 /*10*/]));
		Global_17345.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17345.f_5591[iVar0] = 0;
	}
}

void func_72(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xA7F138B5B1AB2CF6(*uParam0))
		{
			unk_0xB0B0FE33F4F22679(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_73(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x7AF0088ABFA713B6() && unk_0x32405B7614E36453())
		{
			iParam2 = unk_0x115A5CB728B7997D();
		}
	}
	StringCopy(&cVar0, unk_0x1377080E9B0BD993(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x56BEECB328B6D29D(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17345.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17345.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17345.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_74(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_109(0, bParam6))
	{
		return;
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar58 = 0f;
	fVar59 = 0f;
	if (Global_17345)
	{
		if (func_107(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = fVar37;
			fVar59 = fVar36;
			fVar58 = (fVar58 + 0f);
		}
		else
		{
			Global_17345 = 0;
		}
	}
	if (unk_0x56BEECB328B6D29D(&(Global_17345.f_1)) == unk_0x56BEECB328B6D29D("HIDE"))
	{
		fVar60 = Global_17343;
	}
	else
	{
		fVar60 = (((Global_17343 + fVar58) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17344;
	}
	fVar63 = 1f;
	if (bParam7)
	{
		unk_0x1BBB0A5225346008(&iVar61, &iVar62);
		fVar64 = unk_0x3771EE4CB542D71E(0);
		if (func_106())
		{
			iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar62) * fVar64));
		}
		fVar65 = (unk_0xBBDA792448DB5A89(iVar61) / unk_0xBBDA792448DB5A89(iVar62));
		fVar63 = (fVar65 / fVar64);
		if (func_106())
		{
			fVar63 = 1f;
		}
		iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) / fVar63));
		iVar62 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar62) / fVar63));
	}
	else
	{
		unk_0x7A569F3885B2E08A(&iVar61, &iVar62);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17345.f_5598)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_1)) == unk_0x56BEECB328B6D29D("HIDE"))
			{
				fVar51 = Global_17343;
			}
			else
			{
				if (Global_17345)
				{
					StringCopy(&cVar66, func_105(29), 64);
					StringCopy(&cVar82, func_102(29, 1), 64);
					if (unk_0x56BEECB328B6D29D(&(Global_17345.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_101(Global_17342, Global_17343, fParam5, (fVar58 - 0f), 0, 0, 0, 255);
						unk_0x51DA985AC0B70E2E(&cVar66, &cVar82, (Global_17342 + (fParam5 * 0.5f)), (Global_17343 + ((fVar58 - 0f) * 0.5f)), fVar59, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x51DA985AC0B70E2E(&cVar66, &cVar82, (Global_17342 + (fParam5 * 0.5f)), (Global_17343 + ((fVar58 - 0f) * 0.5f)), fParam5, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17345.f_7901)
				{
					iVar1 = Global_17345.f_7897;
					iVar2 = Global_17345.f_7898;
					iVar3 = Global_17345.f_7899;
					iVar4 = Global_17345.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_101(Global_17342, (Global_17343 + fVar58), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_17343 + fVar58) + 0.034722f) + 0f);
				if (unk_0x56BEECB328B6D29D(&(Global_17345.f_1)) != 0)
				{
					func_100();
					unk_0x8B371195127AACF2(&(Global_17345.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17345.f_68)
					{
						if (Global_17345.f_5[iVar14] == 2)
						{
							unk_0xAA5C5BF0489E5553(Global_17345.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17345.f_5[iVar14] == 3)
						{
							unk_0x3AE7CB4034BE212F(Global_17345.f_14[iVar16], Global_17345.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17345.f_5[iVar14] == 1)
						{
							unk_0xC9C304D0AABE1335(&(Global_17345.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17345.f_5[iVar14] == 8)
						{
							unk_0xC9C304D0AABE1335(&(Global_17345.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17345.f_5[iVar14] == 5)
						{
							unk_0x607C19B90D297FE2(&(Global_17345.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17345.f_5[iVar14] == 6)
						{
							unk_0xC9C304D0AABE1335(&(Global_17345.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17345.f_5[iVar14] == 7)
						{
							unk_0x607C19B90D297FE2(&(Global_17345.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17345.f_5[iVar14] == 9)
						{
							unk_0x607C19B90D297FE2(&(Global_17345.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x3A8B9C7B1C825123((Global_17342 + 0.00390625f), ((Global_17343 + fVar58) + 0.00416664f), 0);
				}
				if (Global_17345.f_5601 > Global_17345.f_5095)
				{
					if (Global_17345.f_5604 != 0)
					{
						func_100();
						func_98((((Global_17342 + fParam5) - 0.00390625f) - func_99("CM_ITEM_COUNT", Global_17345.f_5604, Global_17345.f_5603)), ((Global_17343 + fVar58) + 0.00416664f), "CM_ITEM_COUNT", Global_17345.f_5604, Global_17345.f_5603);
					}
				}
			}
			iVar6 = Global_17345.f_5605;
			iVar9 = 0;
			fVar98 = fVar51;
			if (Global_17345.f_7911)
			{
				iVar1 = Global_17345.f_7907;
				iVar2 = Global_17345.f_7908;
				iVar3 = Global_17345.f_7909;
				iVar4 = Global_17345.f_7910;
			}
			else
			{
				unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17345.f_5095 && iVar6 <= Global_17345.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17345.f_5355[iVar6])
					{
						if (Global_17345.f_5226[iVar6] && iVar6 != Global_17345.f_5605)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar57 = 0.034722f;
						if (Global_17345.f_5612[iVar6] != 0f)
						{
							fVar57 = Global_17345.f_5612[iVar6];
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
					if (Global_17345.f_5088 <= 1)
					{
						Global_17345.f_5088++;
					}
					iVar55 = 1;
				}
			}
			unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_17342 + (fParam5 * 0.5f)), ((fVar98 + ((fVar51 - fVar98) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar98), 0f, 255, 255, 255, 255, 0);
			if (Global_17345.f_5601 > Global_17345.f_5095)
			{
				if (Global_17345.f_7916)
				{
					iVar1 = Global_17345.f_7912;
					iVar2 = Global_17345.f_7913;
					iVar3 = Global_17345.f_7914;
					iVar4 = Global_17345.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_101(Global_17342, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x9893E000F1F078E7("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar63));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar63));
				if (Global_17345.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xE45648BDBF3441F5(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "shop_arrows_upANDdown", (Global_17342 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar63), ((Var38.f_1 / 720f) * fVar63), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_4562)) != 0 && Global_17345.f_4636 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17342 + 0.0046875f);
				if (Global_17345.f_4638 != 0)
				{
					func_107(Global_17345.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17342 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_97(fVar42);
				unk_0xD8C1258D4AB3DD08(&(Global_17345.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17345.f_4632)
				{
					if (Global_17345.f_4566[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_17345.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17345.f_4566[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_17345.f_4575[iVar16], Global_17345.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17345.f_4566[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD7347ECB614BEFFC(fVar42, (fVar51 + 0.00277776f));
				unk_0xE45648BDBF3441F5(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_101(Global_17342, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17345.f_7921)
				{
					iVar1 = Global_17345.f_7917;
					iVar2 = Global_17345.f_7918;
					iVar3 = Global_17345.f_7919;
					iVar4 = Global_17345.f_7920;
				}
				else
				{
					unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_17342 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_97(fVar42);
				unk_0x8B371195127AACF2(&(Global_17345.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17345.f_4632)
				{
					if (Global_17345.f_4566[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_17345.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17345.f_4566[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_17345.f_4575[iVar16], Global_17345.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17345.f_4566[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x3A8B9C7B1C825123(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_17345.f_4638 != 0)
				{
					func_107(Global_17345.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_96(Global_17345.f_4638, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x51DA985AC0B70E2E(func_105(Global_17345.f_4638), func_102(Global_17345.f_4638, 1), ((Global_17342 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17345.f_4636 > 0)
				{
					if ((unk_0x105601648511CC64() - Global_17345.f_4637) > Global_17345.f_4636)
					{
						StringCopy(&(Global_17345.f_4562), "", 16);
						Global_17345.f_4636 = -1;
					}
				}
			}
			if (unk_0x56BEECB328B6D29D(&(Global_4266122.f_21)) != 0 && Global_4266122.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17342 + 0.0046875f);
				if (Global_4266122.f_67 != 0)
				{
					func_107(Global_4266122.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17342 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_97(fVar42);
				unk_0xD8C1258D4AB3DD08(&(Global_4266122.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4266122.f_61)
				{
					if (Global_4266122.f_25[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_4266122.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4266122.f_25[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_4266122.f_34[iVar16], Global_4266122.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4266122.f_25[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD7347ECB614BEFFC(fVar42, (fVar51 + 0.00277776f));
				unk_0xE45648BDBF3441F5(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_101(Global_17342, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17345.f_7921)
				{
					iVar1 = Global_17345.f_7917;
					iVar2 = Global_17345.f_7918;
					iVar3 = Global_17345.f_7919;
					iVar4 = Global_17345.f_7920;
				}
				else
				{
					unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_17342 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_97(fVar42);
				unk_0x8B371195127AACF2(&(Global_4266122.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4266122.f_61)
				{
					if (Global_4266122.f_25[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_4266122.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4266122.f_25[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_4266122.f_34[iVar16], Global_4266122.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4266122.f_25[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x3A8B9C7B1C825123(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4266122.f_67 != 0)
				{
					func_107(Global_4266122.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_96(Global_4266122.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x51DA985AC0B70E2E(func_105(Global_4266122.f_67), func_102(Global_4266122.f_67, 1), ((Global_17342 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4266122.f_65 > 0)
				{
					if ((unk_0x105601648511CC64() - Global_4266122.f_66) > Global_4266122.f_65)
					{
						StringCopy(&(Global_4266122.f_21), "", 16);
						Global_4266122.f_65 = -1;
					}
				}
			}
			func_88(iVar61, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xC2EAD30963BDAA47(76, 84);
			unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17345.f_5598)
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
			iVar99 = Global_17345.f_5088;
			if (Global_17345.f_5599)
			{
				iVar99 = (Global_17345.f_5602 - 1);
			}
			fVar100 = 0f;
			fVar101 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar99)
			{
				fVar57 = 0.034722f;
				if (Global_17345.f_5612[iVar6] != 0f)
				{
					fVar57 = Global_17345.f_5612[iVar6];
				}
				if (Global_17345.f_5599)
				{
					iVar6 = Global_17345.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17345.f_5605 && iVar9 < Global_17345.f_5095)
				{
					bVar33 = true;
					if (Global_17345.f_5606 == iVar6)
					{
						fVar101 = fVar100;
					}
					if (Global_17345.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17345.f_5746[iVar6] = fVar35;
				fVar34 = (Global_17342 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_17345.f_5606 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_17345.f_7923)
					{
						unk_0xE45648BDBF3441F5(Global_17345.f_7922, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						unk_0xE45648BDBF3441F5(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Nav", (Global_17342 + (fParam5 * 0.5f)), (((fVar60 + fVar101) + (0.00277776f * IntToFloat(iVar12))) + (fVar57 * 0.5f)), fParam5, fVar57, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_17345.f_5744 = fVar35;
				}
				if (iVar55 && iVar7 == iVar99)
				{
					func_86(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0x8B371195127AACF2("DFLT_MNU_OPT");
					unk_0x3A8B9C7B1C825123(fVar34, fVar35, 0);
					bVar41 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17345.f_5096)
					{
						if (unk_0xFA30DFD0084E92FE(Global_17345.f_4959[iVar6], iVar8) || Global_17345.f_4926[iVar8] == 5)
						{
							if (Global_17345.f_5599)
							{
								iVar19 = Global_17345.f_7568[((iVar9 * Global_17345.f_5096) + iVar8)];
								iVar20 = Global_17345.f_7609[((iVar9 * Global_17345.f_5096) + iVar8)];
								iVar21 = Global_17345.f_7650[((iVar9 * Global_17345.f_5096) + iVar8)];
								iVar22 = Global_17345.f_7691[((iVar9 * Global_17345.f_5096) + iVar8)];
								iVar23 = Global_17345.f_7732[((iVar9 * Global_17345.f_5096) + iVar8)];
							}
							else
							{
								Global_17345.f_7568[((iVar9 * Global_17345.f_5096) + iVar8)] = iVar19;
								Global_17345.f_7609[((iVar9 * Global_17345.f_5096) + iVar8)] = iVar20;
								Global_17345.f_7650[((iVar9 * Global_17345.f_5096) + iVar8)] = iVar21;
								Global_17345.f_7691[((iVar9 * Global_17345.f_5096) + iVar8)] = iVar22;
								Global_17345.f_7732[((iVar9 * Global_17345.f_5096) + iVar8)] = iVar23;
							}
							iVar106 = 0;
							bVar56 = false;
							if (Global_17345.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17345.f_5875[0])
								{
									bVar56 = true;
									iVar106 = 0;
								}
							}
							if (Global_17345.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17345.f_5875[1])
								{
									bVar56 = true;
									iVar106 = 1;
								}
							}
							if (Global_17345.f_4932[iVar8] != -1f)
							{
								fVar34 = ((Global_17342 + 0.0046875f) + Global_17345.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17345.f_4932[iVar8 + 1] != -1f) && fVar34 < Global_17345.f_4932[iVar8 + 1])
							{
								fVar46 = (Global_17345.f_4932[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar46 = (((Global_17342 + Global_17344) - 0.0046875f) - fVar34);
							}
							if ((Global_17345.f_4945[iVar8] && Global_17345.f_5741) && bVar32)
							{
								bVar54 = true;
							}
							else
							{
								bVar54 = false;
							}
							switch (Global_17345.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17345.f_5599)
										{
											fVar43 = 0f;
											fVar44 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
											{
												bVar52 = false;
												bVar53 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17345.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar53 = true;
													}
													else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar52 = true;
													}
													iVar14++;
												}
												func_86(bVar32, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, iVar106, bVar53, bVar52);
												unk_0xE746379C2AF24EF6(&(Global_17345.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_17345.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_17345.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xAA5C5BF0489E5553(Global_17345.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x3AE7CB4034BE212F(Global_17345.f_4175[(iVar21 + iVar27)], Global_17345.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
											{
												fVar43 = unk_0x2207C0EA517B975D(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_107(Global_17345.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar44 = (fVar44 + fVar36);
														if (iVar14 > 0)
														{
															fVar44 = (fVar44 - (0.00078125f * 4f));
														}
														if (Global_17345.f_4433[(iVar22 + iVar14)] == 2 || Global_17345.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar44 = (fVar44 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar42 = 0f;
											if (Global_17345.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
											}
											else if (Global_17345.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
											}
											Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar42;
											Global_17345.f_7814[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar43;
											Global_17345.f_7855[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)];
											fVar43 = Global_17345.f_7814[((iVar9 * Global_17345.f_5096) + iVar8)];
											fVar44 = Global_17345.f_7855[((iVar9 * Global_17345.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_107(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17345.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x51DA985AC0B70E2E(func_105(26), func_102(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_107(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_107(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x51DA985AC0B70E2E(func_105(27), func_102(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17345.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_86(bVar32, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
											if (Global_17345.f_7927 && Global_17345.f_7928 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0x8B371195127AACF2(&(Global_17345.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_17345.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_17345.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xAA5C5BF0489E5553(Global_17345.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x3AE7CB4034BE212F(Global_17345.f_4175[(iVar21 + iVar27)], Global_17345.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17345.f_4433[(iVar22 + iVar28)] == 2 || Global_17345.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_107(Global_17345.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_107(Global_17345.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_96(Global_17345.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_17345.f_4953[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_105(Global_17345.f_4433[(iVar22 + iVar28)]), func_102(Global_17345.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_105(Global_17345.f_4433[(iVar22 + iVar28)]), func_102(Global_17345.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
										if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_17345.f_4953[iVar8] == 2)
											{
												unk_0x3A8B9C7B1C825123(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0x3A8B9C7B1C825123((fVar34 + fVar42), fVar35, 0);
												if (func_84() && unk_0xB731B8C5BCE89836(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_86(0, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
														StringCopy(&cVar107, "TEST_LABEL", 16);
														fVar111 = 0f;
														fVar112 = 55f;
														fVar113 = 0.0185f;
														fVar114 = 0.004f;
														fVar115 = 0.02f;
														unk_0xB8F3C51875F7BEA3(0f, (0.35f * 0.7f));
														unk_0xCC4FE6A016BA0765(255, 255, 255, 150);
														unk_0xF7EBEC3FF57AEC65((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar112), 0);
														unk_0x8B371195127AACF2(&cVar107);
														unk_0xAA5C5BF0489E5553((Global_17345.f_5605 + iVar30));
														unk_0x3A8B9C7B1C825123((fVar34 - fVar115), (fVar35 + fVar114), 0);
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
												if (Global_17345.f_4433[(iVar22 + iVar14)] != 2 && Global_17345.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_107(Global_17345.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_107(Global_17345.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_96(Global_17345.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_17345.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x51DA985AC0B70E2E(func_105(Global_17345.f_4433[(iVar22 + iVar14)]), func_102(Global_17345.f_4433[(iVar22 + iVar14)], bVar32), (Global_17342 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_17345.f_4953[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_105(Global_17345.f_4433[(iVar22 + iVar14)]), func_102(Global_17345.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_105(Global_17345.f_4433[(iVar22 + iVar14)]), func_102(Global_17345.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
										if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17345.f_5599)
										{
											func_86(bVar32, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17345.f_7927 && Global_17345.f_7928 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0xE746379C2AF24EF6("NUMBER");
											unk_0xAA5C5BF0489E5553(Global_17345.f_3918[iVar20]);
											fVar43 = unk_0x2207C0EA517B975D(1);
											fVar42 = 0f;
											if (Global_17345.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17345.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar42;
											Global_17345.f_7814[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)];
											fVar43 = Global_17345.f_7814[((iVar9 * Global_17345.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_107(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17345.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x51DA985AC0B70E2E(func_105(26), func_102(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_107(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_107(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x51DA985AC0B70E2E(func_105(27), func_102(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										func_86(bVar32, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, 0, 0, 0);
										func_83((fVar34 + fVar42), fVar35, "NUMBER", Global_17345.f_3918[iVar20], 0);
									}
									bVar41 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17345.f_5599)
										{
											func_86(bVar32, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17345.f_7927 && Global_17345.f_7928 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0xE746379C2AF24EF6("NUMBER");
											unk_0x3AE7CB4034BE212F(Global_17345.f_4175[iVar21], Global_17345.f_4304[iVar21]);
											fVar43 = unk_0x2207C0EA517B975D(1);
											fVar42 = 0f;
											if (Global_17345.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17345.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar42;
											Global_17345.f_7814[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)];
											fVar43 = Global_17345.f_7814[((iVar9 * Global_17345.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_107(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17345.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x51DA985AC0B70E2E(func_105(26), func_102(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_107(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_107(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x51DA985AC0B70E2E(func_105(27), func_102(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										func_86(bVar32, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, 0, 0, 0);
										func_82((fVar34 + fVar42), fVar35, "NUMBER", Global_17345.f_4175[iVar21], Global_17345.f_4304[iVar21]);
									}
									bVar41 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_107(Global_17345.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_17345.f_5599)
											{
												fVar44 = fVar36;
												fVar42 = 0f;
												if (Global_17345.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
												}
												else if (Global_17345.f_4953[iVar8] == 0)
												{
													fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
												}
												Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar42;
												Global_17345.f_7855[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar44;
											}
											else
											{
												fVar42 = Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)];
												fVar44 = Global_17345.f_7855[((iVar9 * Global_17345.f_5096) + iVar8)];
											}
											if (bVar54)
											{
												if (func_107(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17345.f_4953[iVar8] == 2)
													{
														fVar42 = (fVar42 - (fVar36 * 2f));
													}
													fVar45 = (fVar36 * 0.5f);
													if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_96(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
														unk_0x51DA985AC0B70E2E(func_105(26), func_102(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
												if (func_107(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													fVar45 = (fVar36 * 0.5f);
													if (func_107(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_96(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
														unk_0x51DA985AC0B70E2E(func_105(27), func_102(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_107(Global_17345.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_96(Global_17345.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0x51DA985AC0B70E2E(func_105(Global_17345.f_4433[iVar22]), func_102(Global_17345.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), (fVar36 * func_81(Global_17345.f_4433[iVar22])), (fVar37 * func_81(Global_17345.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
							if (Global_17345.f_4926[iVar8] == 5)
							{
								if (Global_17345.f_4938[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_17345.f_4938[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_17345.f_4938[iVar8]);
								if (Global_17345.f_4945[iVar8])
								{
									if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17345.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_17345.f_7552[iVar9] = iVar6;
						Global_17345.f_5607 = iVar6;
						iVar9++;
						if (Global_17345.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17345.f_5612[iVar6] != 0f)
						{
							fVar100 = (fVar100 + Global_17345.f_5612[iVar6]);
						}
						else
						{
							fVar100 = (fVar100 + 0.034722f);
						}
					}
					if (!Global_17345.f_5598)
					{
						Global_17345.f_5355[iVar6] = 1;
						if (Global_17345.f_5097[iVar6])
						{
							if (bVar32)
							{
								Global_17345.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17345.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17345.f_5598)
			{
				Global_17345.f_5600 = ((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12)));
				Global_17345.f_5603 = iVar11;
				Global_17345.f_5601 = iVar10;
				Global_17345.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17345.f_5599)
	{
		Global_17345.f_5602 = iVar9;
		Global_17345.f_5599 = 1;
	}
	Global_17345.f_5743 = fVar51;
	Global_17345.f_5745 = unk_0x105601648511CC64();
	unk_0xE7918A3D05166D98(Global_17345.f_5743);
	if (!Global_17345.f_7896)
	{
		func_76(0);
	}
	Global_17345.f_7896 = 0;
	if (bParam2)
	{
		unk_0x4E0EC60D119222B1(10);
	}
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(8);
	if (bParam0)
	{
		func_75(1);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_75(int iParam0)
{
	Global_1364578.f_1079 = iParam0;
}

void func_76(int iParam0)
{
	if (!Global_14493.f_1 == 1)
	{
		if (func_80(0))
		{
			func_77(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_2364, 2);
	}
}

void func_77(int iParam0)
{
	if (Global_14659)
	{
		func_79(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(0);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 30);
	}
	if (!func_78())
	{
		Global_14493.f_1 = 3;
	}
}

int func_78()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_79(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_80(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_14430);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
}

int func_80(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

float func_81(int iParam0)
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

void func_82(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3AE7CB4034BE212F(uParam3, uParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

void func_83(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam4);
}

bool func_84()
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

void func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xE45648BDBF3441F5(Global_17345.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xE45648BDBF3441F5(Global_17345.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
}

void func_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_87(Global_17345.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xE45648BDBF3441F5(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xE45648BDBF3441F5(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
		}
		else
		{
			unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xCC4FE6A016BA0765(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
	}
	else
	{
		unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
	}
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0x567A3300A78B3D65(1);
	if (bParam5)
	{
		unk_0xB8F3C51875F7BEA3(0f, 0.425f);
		unk_0xC8793973D4960AC4(4);
	}
	else if (bParam6)
	{
		unk_0xB8F3C51875F7BEA3(0f, 0.425f);
		unk_0xC8793973D4960AC4(6);
	}
	else
	{
		unk_0xC8793973D4960AC4(0);
	}
	unk_0x666751E43D377EAA(0f, 1f);
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_87(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_88(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_109(bParam4, bParam8))
	{
		return;
	}
	if (func_94())
	{
		return;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_91(unk_0xB5CEFD608600A09F(), 0))
		{
			return;
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x0F8865E539C1FCE8() == 0 || unk_0xF32BA80A2DED1FC6())
		{
			return;
		}
	}
	if (Global_17345.f_4639 != 0)
	{
		if (unk_0x8A0D8839261BAEEF(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17345.f_4639)
			{
				if (Global_17345.f_4896[iVar1] != 358)
				{
					StringCopy(&(Global_17345.f_4641[iVar1 /*16*/]), unk_0xE57EAD1FEA2A6FAF(2, Global_17345.f_4896[iVar1], 1), 64);
				}
				else if (Global_17345.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17345.f_4641[iVar1 /*16*/]), unk_0xC7CF72D26EA6A227(2, Global_17345.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17345.f_4640 = 0;
		}
		if (!Global_17345.f_4640)
		{
			unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD44E04EBBDC4CE88((1f - (Global_17345.f_4951 / 100f)));
			unk_0xF9FBC2F3F73D94C9();
			if (unk_0x8ACB0C3FACC09467())
			{
				unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x5E5DBD0A6623969E(1);
				unk_0xF9FBC2F3F73D94C9();
			}
			iVar1 = 0;
			while (iVar1 < Global_17345.f_4639)
			{
				if (unk_0x56BEECB328B6D29D(&(Global_17345.f_4834[iVar1 /*4*/])) != unk_0x56BEECB328B6D29D("PREV"))
				{
					unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(iVar1);
					func_90(&(Global_17345.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x56BEECB328B6D29D(&(Global_17345.f_4834[iVar2 /*4*/])) == unk_0x56BEECB328B6D29D("PREV"))
					{
						func_90(&(Global_17345.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17345.f_4883[iVar1] == -1)
					{
						func_89(&(Global_17345.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x57016C44F10111F0(&(Global_17345.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x4C36886AAFD04CF8(iParam2, 70);
						}
						else
						{
							unk_0xAA5C5BF0489E5553(iParam2);
						}
						unk_0x64989E60CF560CA1();
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (Global_17345.f_4896[iVar1] != 358 && unk_0xFA30DFD0084E92FE(Global_17345.f_4922, iVar1))
						{
							unk_0x5E5DBD0A6623969E(1);
							unk_0x1E1FB49121565EB6(Global_17345.f_4896[iVar1]);
						}
						else
						{
							unk_0x5E5DBD0A6623969E(0);
							unk_0x1E1FB49121565EB6(358);
						}
					}
					unk_0xF9FBC2F3F73D94C9();
				}
				iVar1++;
			}
			if (unk_0x56BEECB328B6D29D(&(Global_4266122.f_16)) != unk_0x56BEECB328B6D29D(""))
			{
				unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(Global_17345.f_4639);
				func_90(&Global_4266122);
				if (Global_4266122.f_20 == -1)
				{
					func_89(&(Global_4266122.f_16));
				}
				else
				{
					unk_0x57016C44F10111F0(&(Global_4266122.f_16));
					if (bParam5)
					{
						unk_0x4C36886AAFD04CF8(iParam2, 70);
					}
					else
					{
						unk_0xAA5C5BF0489E5553(iParam2);
					}
					unk_0x64989E60CF560CA1();
				}
				unk_0xF9FBC2F3F73D94C9();
			}
			unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(80);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17345.f_4952)
			{
				unk_0x1E1FB49121565EB6(1);
			}
			else
			{
				unk_0x1E1FB49121565EB6(0);
			}
			unk_0xF9FBC2F3F73D94C9();
			Global_17345.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17345.f_4639)
		{
			if (Global_17345.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x1E1FB49121565EB6(iVar1);
					unk_0x57016C44F10111F0(&(Global_17345.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x4C36886AAFD04CF8(iParam2, 70);
					}
					else
					{
						unk_0xAA5C5BF0489E5553(iParam2);
					}
					unk_0x64989E60CF560CA1();
					unk_0xF9FBC2F3F73D94C9();
				}
			}
			iVar1++;
		}
		if (Global_4266122.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x1E1FB49121565EB6(iVar1);
				unk_0x57016C44F10111F0(&(Global_4266122.f_16));
				if (bParam5)
				{
					unk_0x4C36886AAFD04CF8(iParam2, 70);
				}
				else
				{
					unk_0xAA5C5BF0489E5553(iParam2);
				}
				unk_0x64989E60CF560CA1();
				unk_0xF9FBC2F3F73D94C9();
			}
		}
		unk_0xC2EAD30963BDAA47(76, 66);
		unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17345.f_7931)
			{
				unk_0x6DB77F071B43C870(15, 0f, -0.0375f);
				Global_17345.f_7931 = 1;
			}
		}
		else if (Global_17345.f_7931)
		{
			unk_0xC0404835F30391BB(15);
			Global_17345.f_7931 = 0;
		}
		unk_0x2A025E7CEBB76D14();
		if (Global_17345.f_4925)
		{
			unk_0xC2EAD30963BDAA47(82, 66);
			unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
			unk_0x65E432C782E7E702(Global_17345.f_5530[iVar0 /*10*/], Global_17345.f_4923, Global_17345.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x2A025E7CEBB76D14();
		}
		else
		{
			unk_0x4B6031094354FED6(Global_17345.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_89(char[4] cParam0)
{
	unk_0x57016C44F10111F0(cParam0);
	unk_0x64989E60CF560CA1();
}

void func_90(var uParam0)
{
	unk_0xCB30200B8055CA57(uParam0);
}

bool func_91(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_92(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_92(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_93();
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

int func_93()
{
	return Global_1312736;
}

int func_94()
{
	struct<3> Var0;
	
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	if (func_95())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x652515566BB40BA9(&Var0);
		if (Global_14438 == 0)
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

int func_95()
{
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_96(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xE45648BDBF3441F5(1, iParam2, iParam3, iParam4, iParam5);
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

void func_97(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xC8793973D4960AC4(0);
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0xB1B2D2C9D47D1278(2);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
	unk_0x666751E43D377EAA(fParam0, ((Global_17342 + Global_17344) - 0.0046875f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_98(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(uParam3);
	unk_0xAA5C5BF0489E5553(uParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

float func_99(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (unk_0x56BEECB328B6D29D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_100();
	unk_0xE746379C2AF24EF6(sParam0);
	unk_0xAA5C5BF0489E5553(uParam1);
	unk_0xAA5C5BF0489E5553(uParam2);
	return unk_0x2207C0EA517B975D(1);
}

void func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17345.f_7906)
	{
		iVar0 = Global_17345.f_7902;
		iVar1 = Global_17345.f_7903;
		iVar2 = Global_17345.f_7904;
		iVar3 = Global_17345.f_7905;
	}
	unk_0xC8793973D4960AC4(0);
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
	unk_0x666751E43D377EAA((Global_17342 + 0.0046875f), ((Global_17342 + Global_17344) - 0.0046875f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_101(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xF7EBEC3FF57AEC65((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_102(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xF1734B55490E9045(&(Global_17345.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_17345.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_104(unk_0xB5CEFD608600A09F()) };
			if (unk_0xB5AD4F878C27B0F4(&Var19, &uVar3))
			{
				return func_103(&uVar3);
			}
		}
		else
		{
			return func_103(&(Global_17345.f_6719[iParam0 /*16*/]));
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

var func_103(var uParam0)
{
	return uParam0;
}

struct<13> func_104(int iParam0)
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

char* func_105(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xF1734B55490E9045(&(Global_17345.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_17345.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_104(unk_0xB5CEFD608600A09F()) };
			unk_0xB5AD4F878C27B0F4(&Var16, &uVar0);
			return func_103(&uVar0);
		}
		else
		{
			return func_103(&(Global_17345.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_106()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x1BBB0A5225346008(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_105(iParam0), 64);
	StringCopy(&cVar16, func_102(iParam0, bParam1), 64);
	if (unk_0x56BEECB328B6D29D(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0x1BBB0A5225346008(&iVar32, &iVar33);
			fVar35 = unk_0x3771EE4CB542D71E(0);
			if (func_106())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_106())
			{
				fVar34 = 1f;
			}
			if (unk_0xB731B8C5BCE89836(joaat("director_mode")) > 0)
			{
				unk_0x7A569F3885B2E08A(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x7A569F3885B2E08A(&iVar32, &iVar33);
		}
		Var37 = { unk_0x9893E000F1F078E7(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_108(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_108(iParam0) / fVar34));
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
		if (iParam0 == 29 && unk_0x56BEECB328B6D29D(&(Global_17345.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x877E3741B282A35F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17344)
			{
				*fParam4 = (*fParam4 * (Global_17344 / *fParam3));
				*fParam3 = Global_17344;
			}
		}
		return 1;
	}
	return 0;
}

float func_108(int iParam0)
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

int func_109(bool bParam0, bool bParam1)
{
	if (Global_2436641.f_1888.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x726D9204B160D23E() || (func_111(8, -1) && func_110() != 64)) || (unk_0x0352C1B6B66A87AC() != 0 && !bParam1)) || (unk_0x7930B3E9C919E90F() && !bParam0)) || unk_0x4F2BFB7C2A730EC7()) || Global_71238) || Global_17345.f_7930) || unk_0x18158A50125911B6()) || Global_93007.f_1385)
	{
		return 0;
	}
	return 1;
}

int func_110()
{
	return Global_1312789;
}

bool func_111(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_112(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_69800[iParam0] = 0;
	Global_69800.f_69[iParam0] = 0;
}

void func_113(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_61(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 10))
		{
			func_115(iParam0);
			func_114(uParam1, &(Global_105220.f_32546.f_69[Global_69800.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 11))
			{
				Global_105220.f_32546.f_1864[Global_69800.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_105220.f_32546.f_1934[Global_69800.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_105220.f_32546.f_1864[Global_69800.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_105220.f_32546.f_1934[Global_69800.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_105220.f_32546.f_1958[Global_69800.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_463(iParam0, 1);
		}
	}
}

void func_114(var uParam0, var uParam1)
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

void func_115(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_61(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_139[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_69800.f_139[iParam0], 1, 1);
			unk_0x1E7A09C1710FB071(&(Global_69800.f_139[iParam0]));
			Global_69800.f_139[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 13))
		{
			func_463(iParam0, 0);
		}
	}
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_117(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xE57EAD1FEA2A6FAF(2, iParam0, 1);
	if (Global_17345.f_4639 >= 12)
	{
		StringCopy(&Global_4266122, sVar0, 64);
		StringCopy(&(Global_4266122.f_16), sParam1, 16);
		Global_4266122.f_20 = iParam2;
		return;
		return;
	}
	unk_0x7CB6FD92BE491AD9(&(Global_17345.f_4922), Global_17345.f_4639);
	StringCopy(&(Global_17345.f_4641[Global_17345.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17345.f_4834[Global_17345.f_4639 /*4*/]), sParam1, 16);
	Global_17345.f_4883[Global_17345.f_4639] = iParam2;
	Global_17345.f_4896[Global_17345.f_4639] = iParam0;
	Global_17345.f_4909[Global_17345.f_4639] = 32;
	Global_17345.f_4639++;
}

void func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17345.f_4639 = 0;
	Global_17345.f_4640 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17345.f_4834[iVar0 /*4*/]), "", 16);
		Global_17345.f_4883[iVar0] = -1;
		Global_17345.f_4896[iVar0] = 358;
		Global_17345.f_4909[iVar0] = 32;
		iVar0++;
	}
	Global_17345.f_4922 = 0;
	StringCopy(&(Global_4266122.f_16), "", 16);
	Global_4266122.f_20 = -1;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (!func_73(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0x29CD142125FE177B(Global_17345.f_5530[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x5E5DBD0A6623969E(0);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_119(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17345.f_4562), sParam0, 16);
	Global_17345.f_4632 = 0;
	Global_17345.f_4633 = 0;
	Global_17345.f_4634 = 0;
	Global_17345.f_4635 = 0;
	Global_17345.f_4636 = iParam1;
	Global_17345.f_4637 = unk_0x105601648511CC64();
	Global_17345.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17345.f_4566[iVar0] = 0;
		iVar0++;
	}
}

int func_120()
{
	if (unk_0x50465D2C022B9E04(2))
	{
		if (Global_4266198 > -1)
		{
			if (unk_0x093484B35A948BFC(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x50465D2C022B9E04(2))
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x08009E53F6E7E15C();
	}
	if (Global_4266198 == -6)
	{
		unk_0x5C26A2F0EACA52AB(4);
		if (iParam0 && unk_0x8FCEEB789599BD9B(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4266198 = -1;
			return 0;
		}
	}
	if (((Global_4266198 > -1 || Global_4266198 == -3) || Global_4266198 == -2) || unk_0x1753B0F1C41FE93F())
	{
		unk_0x5C26A2F0EACA52AB(1);
		return 0;
	}
	if (Global_4266198 == -1 && iParam0)
	{
		if (unk_0x8FCEEB789599BD9B(2, 237))
		{
			unk_0x5C26A2F0EACA52AB(4);
			Global_4266198 = -6;
			return 1;
		}
		else
		{
			unk_0x5C26A2F0EACA52AB(3);
			return 0;
		}
	}
	unk_0x5C26A2F0EACA52AB(1);
	return 0;
}

void func_122(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0x50465D2C022B9E04(2))
	{
		Global_4266198 = -1;
		return;
	}
	unk_0xA561536D61421F90(1);
	fVar0 = Global_17342;
	fVar2 = (fVar0 + Global_17344);
	fVar3 = Global_17345.f_5600;
	fVar1 = (Global_17345.f_5600 - (IntToFloat(Global_17345.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17345.f_5602 < 1)
	{
		fVar1 = (Global_17345.f_5600 - 0.034722f);
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xC498840061F88232(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xC498840061F88232(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x2A025E7CEBB76D14();
	func_124();
	if (Global_4266198 == -6)
	{
		return;
	}
	Global_4266198 = -1;
	fVar7 = Global_4266192;
	fVar8 = Global_4266193;
	if (Global_17345.f_5603 > Global_17345.f_5602)
	{
		if (((Global_4266192 >= fVar0 && Global_4266192 <= fVar2) && Global_4266193 >= fVar3) && Global_4266193 < (fVar3 + fVar6))
		{
			Global_4266198 = -2;
			if (bParam3)
			{
				func_123(0);
			}
			return;
		}
		if (((Global_4266192 >= fVar0 && Global_4266192 <= fVar2) && Global_4266193 >= (fVar3 + fVar6)) && Global_4266193 < (fVar3 + 0.034722f))
		{
			Global_4266198 = -3;
			if (bParam3)
			{
				func_123(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17345.f_5603 == -1)
		{
			Global_4266198 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17345.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xC2EAD30963BDAA47(76, 84);
				unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
				func_101(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17344, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x2A025E7CEBB76D14();
			}
		}
		Global_4266198 = Global_17345.f_7552[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4266198 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4266198 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4266198 = -4;
		return;
	}
	Global_4266198 = -1;
}

void func_123(bool bParam0)
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
	fVar0 = Global_17342;
	fVar1 = Global_17345.f_5600;
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	if (Global_4266198 == -2)
	{
		func_101(fVar0, fVar1, Global_17344, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4266198 == -3)
	{
		func_101(fVar0, (fVar1 + fVar2), Global_17344, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_124()
{
	Global_4266194 = Global_4266192;
	Global_4266195 = Global_4266193;
	Global_4266192 = unk_0xBCEB785249D7E5BE(2, 239);
	Global_4266193 = unk_0xBCEB785249D7E5BE(2, 240);
	Global_4266196 = (Global_4266192 - Global_4266194);
	Global_4266197 = (Global_4266193 - Global_4266195);
}

void func_125(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17345.f_5606 = iParam0;
	Global_17345.f_5741 = iParam2;
	if (Global_17345.f_5606 < Global_17345.f_5605)
	{
		Global_17345.f_5605 = Global_17345.f_5606;
	}
	else if ((Global_17345.f_5599 && Global_17345.f_5606 > Global_17345.f_5607) || (!Global_17345.f_5599 && Global_17345.f_5606 >= (Global_17345.f_5605 + Global_17345.f_5095)))
	{
		iVar0 = Global_17345.f_5605;
		while (iVar0 <= Global_17345.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17345.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17345.f_5095 && Global_17345.f_5605 < 128)
		{
			Global_17345.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17345.f_5605;
			while (iVar0 <= Global_17345.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17345.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17345.f_5598 = 0;
	Global_17345.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17345.f_4562), "", 16);
		StringCopy(&(Global_4266122.f_21), "", 16);
	}
}

void func_126(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17345.f_5090 >= 256)
	{
		return;
	}
	if (Global_17345.f_5610 >= 4)
	{
		return;
	}
	if (Global_17345.f_5611 != 1)
	{
		return;
	}
	if (Global_17345.f_5610 >= Global_17345.f_5608)
	{
		return;
	}
	StringCopy(&(Global_17345.f_73[Global_17345.f_5090 /*6*/]), sParam0, 24);
	Global_17345.f_5090++;
	Global_17345.f_2124[Global_17345.f_5609 /*5*/][Global_17345.f_5610] = 1;
	Global_17345.f_5610++;
	if (Global_17345.f_5610 >= Global_17345.f_5608)
	{
		fVar0 = func_128();
		if (Global_17345.f_4945[Global_17345.f_5089] && Global_17345.f_5610 == Global_17345.f_5608)
		{
			func_107(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17345.f_4938[(Global_17345.f_5089 - 1)])
		{
			Global_17345.f_4938[(Global_17345.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17345.f_5610 >= Global_17345.f_5608)
		{
			fVar3 = func_127();
			if (fVar3 > Global_17345.f_5612[Global_17345.f_5088])
			{
				Global_17345.f_5612[Global_17345.f_5088] = fVar3;
			}
		}
	}
}

float func_127()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17345.f_5610)
	{
		if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17345.f_4433[((Global_17345.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_107(Global_17345.f_4433[((Global_17345.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x60F548525BE58E47(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_128()
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
	while (iVar7 < Global_17345.f_5610)
	{
		if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_86(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
	{
		unk_0xE746379C2AF24EF6(&(Global_17345.f_73[Global_17345.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17345.f_5610)
	{
		if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_17345.f_73[(Global_17345.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_17345.f_73[(Global_17345.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0xAA5C5BF0489E5553(Global_17345.f_3918[((Global_17345.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0x3AE7CB4034BE212F(Global_17345.f_4175[((Global_17345.f_5093 - iVar4) + iVar10)], Global_17345.f_4304[((Global_17345.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_2458236[((Global_17345.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_2458236[((Global_17345.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_2458236[((Global_17345.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 9)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_2458236[((Global_17345.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0x2207C0EA517B975D(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17345.f_4433[((Global_17345.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_107(Global_17345.f_4433[((Global_17345.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_129(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_130(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		default:
	}
	return unk_0xD8D56586882095EE(iVar0);
}

int func_130(int iParam0, int iParam1)
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
			return Global_68259;
		
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
			return Global_68260;
		
		case 324:
			return Global_68261;
		
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
			return Global_68262;
		
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
		
		case 386:
			return joaat("gb200");
		
		case 387:
			return joaat("fagaloa");
		
		case 388:
			return joaat("ellie");
		
		case 389:
			return joaat("issi3");
		
		case 390:
			return joaat("michelli");
		
		case 391:
			return joaat("flashgt");
		
		case 392:
			return joaat("hotring");
		
		case 393:
			return joaat("tezeract");
		
		case 394:
			return joaat("tyrant");
		
		case 395:
			return joaat("dominator3");
		
		case 396:
			return joaat("taipan");
		
		case 397:
			return joaat("entity2");
		
		case 398:
			return joaat("jester3");
		
		case 399:
			return joaat("cheburek");
		
		case 400:
			return joaat("caracara");
		
		case 401:
			return joaat("seasparrow");
		
		case 402:
			return Global_68263;
		
		case 403:
			return joaat("mule4");
		
		case 404:
			return joaat("pounder2");
		
		case 405:
			return joaat("swinger");
		
		case 406:
			return joaat("menacer");
		
		case 407:
			return joaat("scramjet");
		
		case 408:
			return joaat("strikeforce");
		
		case 409:
			return joaat("oppressor2");
		
		case 410:
			return joaat("patriot2");
		
		case 411:
			return joaat("stafford");
		
		case 412:
			return joaat("freecrawler");
		
		case 415:
			return joaat("futo");
		
		case 416:
			return joaat("ruiner");
		
		case 417:
			return joaat("romero");
		
		case 418:
			return joaat("prairie");
		
		case 419:
			return joaat("baller");
		
		case 420:
			return joaat("serrano");
		
		case 421:
			return joaat("bjxl");
		
		case 422:
			return joaat("habanero");
		
		case 423:
			return joaat("fq2");
		
		case 424:
			return joaat("patriot");
		
		case 413:
			return joaat("blimp3");
		
		case 414:
			return joaat("pbus2");
		
		default:
	}
	return 0;
}

void func_131(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_17345.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17345.f_5088 >= 128)
	{
		return;
	}
	if (Global_17345.f_5094 >= 128)
	{
		return;
	}
	if (Global_17345.f_5610 < Global_17345.f_5608)
	{
		return;
	}
	if (Global_17345.f_5088 != iParam0)
	{
		Global_17345.f_5088 = iParam0;
		Global_17345.f_5089 = 0;
	}
	iVar0 = Global_17345.f_4926[Global_17345.f_5089];
	if (iVar0 != 4)
	{
		while (Global_17345.f_5089 < 4 && iVar0 != 4)
		{
			Global_17345.f_5089++;
			iVar0 = Global_17345.f_4926[Global_17345.f_5089];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_17345.f_4433[Global_17345.f_5094] = iParam1;
	Global_17345.f_5094++;
	if (iParam1 != 0)
	{
		func_107(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17345.f_4945[Global_17345.f_5089])
		{
			func_107(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_17345.f_4938[Global_17345.f_5089])
		{
			Global_17345.f_4938[Global_17345.f_5089] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_17345.f_5612[iParam0])
			{
				Global_17345.f_5612[iParam0] = fVar2;
			}
		}
	}
	unk_0xF0059F27F7BB6680(&(Global_17345.f_4959[iParam0]), Global_17345.f_5089);
	Global_17345.f_5089++;
	Global_17345.f_5611 = 4;
}

void func_132(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17345.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17345.f_5088 >= 128)
	{
		return;
	}
	if (Global_17345.f_5090 >= 256)
	{
		return;
	}
	if (Global_17345.f_5610 < Global_17345.f_5608)
	{
		return;
	}
	if (Global_17345.f_5088 != iParam0)
	{
		Global_17345.f_5088 = iParam0;
		Global_17345.f_5089 = 0;
	}
	iVar0 = Global_17345.f_4926[Global_17345.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17345.f_5089 < 4 && iVar0 != 1)
		{
			Global_17345.f_5089++;
			iVar0 = Global_17345.f_4926[Global_17345.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17345.f_73[Global_17345.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0xF1734B55490E9045(sParam1) && !unk_0x0F6F4C227FB5DD52(sParam1))
	{
	}
	Global_17345.f_1610[Global_17345.f_5090] = bParam3;
	Global_17345.f_1867[Global_17345.f_5090] = iParam4;
	Global_17345.f_5090++;
	if (!bParam3)
	{
		func_135(Global_17345.f_5088, 1);
	}
	else
	{
		func_135(Global_17345.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_134(&(Global_17345.f_73[Global_17345.f_5090 /*6*/]));
		if (Global_17345.f_4945[Global_17345.f_5089])
		{
			func_107(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17345.f_4938[Global_17345.f_5089])
		{
			Global_17345.f_4938[Global_17345.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_133(&(Global_17345.f_73[Global_17345.f_5090 /*6*/]));
			if (fVar4 > Global_17345.f_5612[iParam0])
			{
				Global_17345.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xF0059F27F7BB6680(&(Global_17345.f_4959[iParam0]), Global_17345.f_5089);
	Global_17345.f_5089++;
	Global_17345.f_5611 = 1;
	Global_17345.f_5609 = (Global_17345.f_5090 - 1);
	Global_17345.f_5610 = 0;
	Global_17345.f_5608 = iParam2;
}

float func_133(char* sParam0)
{
	if (!unk_0x0F6F4C227FB5DD52(sParam0))
	{
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_134(char* sParam0)
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (unk_0x56BEECB328B6D29D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_86(0, 1, 0, 0, 0, 0, 0);
	unk_0xE746379C2AF24EF6(sParam0);
	return unk_0x2207C0EA517B975D(1);
}

void func_135(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_17345.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_17345.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_136(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
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
	
	uParam1->f_66 = func_130(iParam0, iParam4);
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
	func_199(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_198(iParam0))
	{
		if (Global_69773)
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
	uParam1->f_99 = 0;
	if (iParam0 == 251)
	{
		uParam1->f_99 = 4;
	}
	uParam1->f_65 = 0;
	if (iParam0 == 263)
	{
		if (Global_69773)
		{
			uParam1->f_65 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (((((iParam0 == 320 || iParam0 == 321) || iParam0 == 322) || iParam0 == 327) || iParam0 == 382) || iParam0 == 391)
	{
		uParam1->f_9[0] = 1;
	}
	if (((((iParam0 == 329 || iParam0 == 330) || iParam0 == 331) || iParam0 == 334) || iParam0 == 332) || iParam0 == 333)
	{
		uParam1->f_9[10] = 0;
	}
	if (func_197(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
	{
		uParam1->f_80 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_69772;
	}
	else if (iParam3 == 0)
	{
		iVar1 = Global_105220.f_25153.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar1 = Global_105220.f_25153.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar1 = Global_105220.f_25153.f_939[iParam0];
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
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 2:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 3:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 4:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 5:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 6:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 7:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 8:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 9:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 10:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 11:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 12:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 13:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 14:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 15:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 16:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 17:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 18:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 19:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 20:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 21:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 22:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 23:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 24:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 25:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_146(func_160(iParam0, iVar1));
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
				if (func_145(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_144(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else if (func_143(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
						{
							uParam1->f_5 = uVar3;
							uParam1->f_6 = uVar4;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
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
						uParam1->f_67 = func_146(func_160(iParam0, iVar1));
					}
				}
				else if (func_198(iParam0))
				{
					if (!Global_69773)
					{
						uParam1->f_5 = 143;
						uParam1->f_6 = 34;
						uParam1->f_7 = 31;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 40;
						uParam1->f_6 = 40;
						uParam1->f_97 = 93;
						uParam1->f_67 = -1;
					}
				}
				else if (func_142(iParam0))
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
					uParam1->f_97 = 8;
					uParam1->f_99 = 89;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else if (func_141(iParam0))
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
				if (func_145(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_144(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[48] = uVar5;
						}
						else if (func_143(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
						{
							uParam1->f_5 = uVar6;
							uParam1->f_6 = uVar7;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
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
						uParam1->f_67 = func_146(func_160(iParam0, iVar1));
					}
				}
				else if (func_198(iParam0))
				{
					if (!Global_69773)
					{
						uParam1->f_5 = 8;
						uParam1->f_6 = 8;
						uParam1->f_7 = 5;
						uParam1->f_97 = 106;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 14;
						uParam1->f_6 = 14;
						uParam1->f_97 = 108;
						uParam1->f_67 = -1;
					}
				}
				else if (func_142(iParam0))
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
					uParam1->f_97 = 8;
					uParam1->f_99 = 67;
					uParam1->f_67 = -1;
				}
				else if (func_141(iParam0))
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
				if (func_145(iParam0))
				{
					if (func_144(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[48] = uVar8;
					}
					else if (func_143(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
					{
						uParam1->f_5 = uVar9;
						uParam1->f_6 = uVar10;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar8;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (func_198(iParam0))
				{
					if (!Global_69773)
					{
						uParam1->f_5 = 100;
						uParam1->f_6 = 100;
						uParam1->f_7 = 100;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 152;
						uParam1->f_6 = 152;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
				}
				else if (func_142(iParam0))
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
					uParam1->f_97 = 8;
					uParam1->f_99 = 28;
					uParam1->f_67 = -1;
				}
				else if (func_141(iParam0))
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
				if (func_145(iParam0))
				{
					if (func_144(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[48] = uVar11;
					}
					else if (func_143(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
					{
						uParam1->f_5 = uVar12;
						uParam1->f_6 = uVar13;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar11;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (func_198(iParam0))
				{
					if (!Global_69773)
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_7 = 106;
						uParam1->f_97 = 101;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_97 = 48;
						uParam1->f_67 = -1;
					}
				}
				else if (func_142(iParam0))
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
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_140(iVar14, &sVar15, &iVar19, &uVar20, &uVar21))
					{
						if (unk_0x3362CDE8460ED38B(&sVar15, "ORANGE") && iVar19 == 1)
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
				if (func_198(iParam0))
				{
					if (!Global_69773)
					{
						uParam1->f_5 = 49;
						uParam1->f_6 = 49;
						uParam1->f_7 = 52;
						uParam1->f_97 = 98;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 128;
						uParam1->f_6 = 128;
						uParam1->f_97 = 99;
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
				else if (func_142(iParam0))
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
					uParam1->f_97 = 8;
					uParam1->f_99 = 41;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 55;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_140(iVar22, &sVar23, &iVar27, &uVar28, &uVar29))
					{
						if (unk_0x3362CDE8460ED38B(&sVar23, "LIME_GREEN") && iVar27 == 1)
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
				if (func_198(iParam0))
				{
					if (!Global_69773)
					{
						uParam1->f_5 = 141;
						uParam1->f_6 = 141;
						uParam1->f_7 = 73;
						uParam1->f_97 = 5;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 84;
						uParam1->f_6 = 84;
						uParam1->f_97 = 24;
						uParam1->f_67 = -1;
					}
				}
				else if (func_142(iParam0))
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
					uParam1->f_97 = 8;
					uParam1->f_99 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else if (func_141(iParam0))
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
				else if (func_198(iParam0))
				{
					if (!Global_69773)
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 0;
						uParam1->f_7 = 10;
						uParam1->f_97 = 1;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 12;
						uParam1->f_6 = 12;
						uParam1->f_97 = 0;
						uParam1->f_67 = -1;
					}
				}
				else if (func_142(iParam0))
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
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 333)
				{
					uParam1->f_5 = 154;
					uParam1->f_6 = 3;
					uParam1->f_97 = 0;
					uParam1->f_67 = -1;
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 0;
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
				if (func_198(iParam0))
				{
					if (!Global_69773)
					{
						uParam1->f_5 = 112;
						uParam1->f_6 = 112;
						uParam1->f_7 = 0;
						uParam1->f_97 = 7;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 131;
						uParam1->f_6 = 131;
						uParam1->f_97 = 78;
						uParam1->f_67 = -1;
					}
				}
				else if (func_142(iParam0))
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
					uParam1->f_97 = 8;
					uParam1->f_99 = 27;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (func_141(iParam0))
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
				uParam1->f_97 = 0;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 339:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 340:
				uParam1->f_5 = 24;
				uParam1->f_6 = 29;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 341:
				uParam1->f_5 = 3;
				uParam1->f_6 = 4;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 342:
				uParam1->f_5 = 111;
				uParam1->f_6 = 89;
				uParam1->f_7 = 111;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 343:
				uParam1->f_5 = 14;
				uParam1->f_6 = 121;
				uParam1->f_7 = 121;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 344:
				uParam1->f_5 = 50;
				uParam1->f_6 = 91;
				uParam1->f_7 = 0;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 345:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 346:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
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
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 349:
				uParam1->f_5 = 27;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 350:
				uParam1->f_5 = 119;
				uParam1->f_6 = 73;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 351:
				uParam1->f_5 = 67;
				uParam1->f_6 = 1;
				uParam1->f_7 = 5;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
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
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 361:
				uParam1->f_5 = 154;
				uParam1->f_6 = 13;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 358:
				uParam1->f_5 = 117;
				uParam1->f_6 = 118;
				uParam1->f_7 = 18;
				uParam1->f_8 = 0;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 362:
				uParam1->f_5 = 13;
				uParam1->f_6 = 8;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 360:
				uParam1->f_5 = 9;
				uParam1->f_6 = 9;
				uParam1->f_7 = 7;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 359:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 364:
				uParam1->f_5 = 8;
				uParam1->f_6 = 14;
				uParam1->f_7 = 5;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
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
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 305)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 306)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 307)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 308)
	{
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 309)
	{
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 310)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 311)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 329)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 330)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 331)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 0;
		uParam1->f_8 = 154;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 332)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 120;
		uParam1->f_7 = 35;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 334)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
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
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_66 = joaat("hauler2");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
	}
	if (func_139(uParam1->f_66))
	{
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 357)
	{
		uParam1->f_66 = func_138();
		uParam1->f_5 = 14;
		uParam1->f_6 = 131;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 365)
	{
		uParam1->f_5 = 128;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
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
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 366)
	{
		uParam1->f_5 = 65;
		uParam1->f_6 = 65;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 387)
	{
		uParam1->f_6 = 120;
	}
	if (iParam0 == 400)
	{
		uParam1->f_5 = 64;
		uParam1->f_6 = 2;
		uParam1->f_7 = 68;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 401)
	{
		uParam1->f_5 = 5;
		uParam1->f_6 = 106;
		uParam1->f_7 = 5;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 402)
	{
		uParam1->f_66 = func_137();
		uParam1->f_5 = 9;
		uParam1->f_7 = 7;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 409)
	{
		uParam1->f_5 = 141;
		uParam1->f_7 = 73;
		uParam1->f_8 = 112;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_69 = 6;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 408)
	{
		uParam1->f_5 = 119;
		uParam1->f_6 = 119;
		uParam1->f_7 = 1;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 407)
	{
		uParam1->f_5 = 111;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 406)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 12;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 404)
	{
		uParam1->f_5 = 112;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 403)
	{
		uParam1->f_5 = 8;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

int func_137()
{
	return joaat("terbyte");
}

int func_138()
{
	return joaat("avenger");
}

int func_139(int iParam0)
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
		case joaat("seasparrow"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("strikeforce"))
	{
		return 1;
	}
	return 0;
}

bool func_140(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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

int func_141(int iParam0)
{
	if ((((((((((((((((((((((((iParam0 == 398 || iParam0 == 386) || iParam0 == 391) || iParam0 == 394) || iParam0 == 393) || iParam0 == 397) || iParam0 == 396) || iParam0 == 390) || iParam0 == 395) || iParam0 == 389) || iParam0 == 388) || iParam0 == 392) || iParam0 == 399) || iParam0 == 410) || iParam0 == 411) || iParam0 == 412) || iParam0 == 405) || iParam0 == 415) || iParam0 == 417) || iParam0 == 418) || iParam0 == 424) || iParam0 == 420) || iParam0 == 421) || iParam0 == 423) || iParam0 == 422)
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0)
{
	if (((((iParam0 == 286 || iParam0 == 289) || iParam0 == 290) || iParam0 == 301) || iParam0 == 287) || iParam0 == 288)
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
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
				func_159(func_160(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				func_159(func_160(iParam0, iParam1), uParam2, uParam3);
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

int func_144(int iParam0, int iParam1, var uParam2)
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

int func_145(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279) || iParam0 == 413) || iParam0 == 414)
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)
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
		
		case 97:
			return 0;
		
		case 98:
			return 1;
		
		case 99:
			return 2;
		
		case 100:
			return 3;
		
		case 101:
			return 4;
		
		case 102:
			return 5;
		
		case 103:
			return 6;
		
		case 104:
			if (func_158(unk_0xB5CEFD608600A09F(), 0))
			{
				return 14;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 1))
			{
				return 13;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 2))
			{
				return 8;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 3))
			{
				return 12;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 4))
			{
				return 11;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 5))
			{
				return 10;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 6))
			{
				return 9;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 7))
			{
				return 7;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 8))
			{
				return 15;
			}
			if (func_147(unk_0xB5CEFD608600A09F()))
			{
			}
			return -1;
			break;
		
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		case 109:
			return 4;
		
		case 110:
			return 5;
		
		case 111:
			return 6;
		
		case 112:
			return 7;
		
		case 113:
			return 8;
		
		case 114:
			return 9;
	}
	return -1;
}

int func_147(int iParam0)
{
	if ((((((((func_157(iParam0) || func_156(iParam0)) || func_155(iParam0)) || func_154(iParam0)) || func_153(iParam0)) || func_152(iParam0)) || func_151(iParam0)) || func_150(iParam0)) || func_148(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_148(int iParam0)
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_307.f_2, 0);
}

int func_149()
{
	return -1;
}

bool func_150(int iParam0)
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_307.f_1, 31);
}

bool func_151(int iParam0)
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_307.f_1, 30);
}

bool func_152(int iParam0)
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_307.f_1, 29);
}

bool func_153(int iParam0)
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_307.f_1, 28);
}

bool func_154(int iParam0)
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_307.f_1, 27);
}

bool func_155(int iParam0)
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_307.f_1, 26);
}

bool func_156(int iParam0)
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_307.f_1, 25);
}

bool func_157(int iParam0)
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_307.f_1, 24);
}

int func_158(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			return func_157(iParam0);
		
		case 3:
			return func_156(iParam0);
		
		case 6:
			return func_155(iParam0);
		
		case 1:
			return func_154(iParam0);
		
		case 0:
			return func_153(iParam0);
		
		case 7:
			return func_152(iParam0);
		
		case 2:
			return func_151(iParam0);
		
		case 5:
			return func_150(iParam0);
		
		case 8:
			return func_148(iParam0);
		
		default:
	}
	return 0;
}

int func_159(int iParam0, var uParam1, var uParam2)
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
		
		default:
	}
	return 0;
}

int func_160(int iParam0, int iParam1)
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
			if (func_161(iParam0, 11, iParam1))
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
			if (func_161(iParam0, 16, iParam1))
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
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		default:
	}
	return -1;
}

int func_161(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_130(iParam0, -1);
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
		if (unk_0xBAF5BEF76386574D())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_43() && func_196())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0x7AF0088ABFA713B6()) || (iParam0 == 207 && unk_0x7AF0088ABFA713B6())) || (iParam0 == 208 && unk_0x7AF0088ABFA713B6())) || (iParam0 == 209 && unk_0x7AF0088ABFA713B6()))
	{
		if (func_43())
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
	if (func_198(iParam0))
	{
		if (Global_69773)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_195(iVar0);
	if (iVar1 != -1)
	{
		if (func_193(func_194(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_192(iParam0))
	{
		if (func_43())
		{
			if ((iParam0 == 205 && Global_262145.f_19121) || (iParam0 != 205 && Global_262145.f_19120))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_191(iParam0))
	{
		if (func_182(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_181(iVar0);
	if (iVar2 != -1)
	{
		if (func_179(func_180(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_178(iVar0);
	if (iVar3 > 0)
	{
		if (func_176(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_175(iVar0);
	if (iVar4 != -1)
	{
		if (func_173(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_172(iVar0);
	if (iVar5 != -1)
	{
		if (func_162(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			if (func_170(7226, -1, 0) >= func_169(iParam0) || Global_262145.f_23495)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pounder2"):
			if (func_170(7226, -1, 0) >= func_169(iParam0) || Global_262145.f_23496)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("oppressor2"):
			if (func_166(22050, -1, -1) >= func_169(iParam0) || Global_262145.f_23497)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pbus2"):
			if (unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_266.f_7, 1) || Global_262145.f_23499)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("patriot2"):
			if (func_170(7224, -1, 0) >= func_169(iParam0) || Global_262145.f_23500)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("blimp3"):
			if (func_170(7224, -1, 0) >= func_169(iParam0) || Global_262145.f_23501)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("scramjet"):
			if (func_163(22123, -1, -1) || Global_262145.f_23498)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_93();
	}
	iVar1 = func_165(iParam0, iParam1);
	uVar2 = func_164(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_164(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_165(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_93();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_93();
	}
	iVar0 = 0;
	iVar1 = func_168(iParam0, iParam1);
	uVar2 = func_167(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6AEE934BCCBCAA0E(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x86C669CF285C5AAD((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x86C669CF285C5AAD((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x86C669CF285C5AAD((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x86C669CF285C5AAD((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x86C669CF285C5AAD((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x86C669CF285C5AAD((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x86C669CF285C5AAD((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x86C669CF285C5AAD((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x86C669CF285C5AAD((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x86C669CF285C5AAD((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x86C669CF285C5AAD((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x86C669CF285C5AAD((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x86C669CF285C5AAD((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x86C669CF285C5AAD((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x86C669CF285C5AAD((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x86C669CF285C5AAD((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x86C669CF285C5AAD((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x86C669CF285C5AAD((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x86C669CF285C5AAD((iParam0 - 19018)) * 8) * 8;
	}
	return iVar0;
}

int func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_93();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	return iVar0;
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return Global_262145.f_23502;
			break;
		
		case joaat("pounder2"):
			return Global_262145.f_23503;
			break;
		
		case joaat("oppressor2"):
			return Global_262145.f_23504;
			break;
		
		case joaat("patriot2"):
			return Global_262145.f_23505;
			break;
		
		case joaat("blimp3"):
			return Global_262145.f_23506;
			break;
	}
	return 0;
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_171(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_171(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_93();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return 0;
			break;
		
		case joaat("pounder2"):
			return 1;
			break;
		
		case joaat("oppressor2"):
			return 2;
			break;
		
		case joaat("scramjet"):
			return 3;
			break;
		
		case joaat("pbus2"):
			return 4;
			break;
		
		case joaat("patriot2"):
			return 5;
			break;
		
		case joaat("blimp3"):
			return 6;
			break;
	}
	return -1;
}

int func_173(int iParam0)
{
	int iVar0;
	
	if (!Global_70978)
	{
		return 0;
	}
	iVar0 = func_170(5657, -1, 0);
	switch (iParam0)
	{
		case joaat("deluxo"):
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(1));
		
		case joaat("akula"):
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(2));
		
		case joaat("riot2"):
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(6));
		
		case joaat("stromberg"):
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(7));
		
		case joaat("chernobog"):
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(10));
		
		case joaat("barrage"):
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(11));
		
		case joaat("khanjali"):
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(12));
		
		case joaat("volatol"):
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(13));
		
		case joaat("thruster"):
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(15));
		
		default:
	}
	return 0;
}

int func_174(int iParam0)
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

int func_175(int iParam0)
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

int func_176(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_70978)
	{
		return 0;
	}
	iVar0 = func_178(iParam0);
	iVar1 = func_177();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_177()
{
	return func_170(6109, -1, 0);
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return Global_262145.f_21580;
		
		case joaat("rogue"):
			return Global_262145.f_21581;
		
		case joaat("alphaz1"):
			return Global_262145.f_21582;
		
		case joaat("havok"):
			return Global_262145.f_21583;
		
		case joaat("starling"):
			return Global_262145.f_21584;
		
		case joaat("molotok"):
			return Global_262145.f_21585;
		
		case joaat("tula"):
			return Global_262145.f_21586;
		
		case joaat("bombushka"):
			return Global_262145.f_21587;
		
		case joaat("howard"):
			return Global_262145.f_21588;
		
		case joaat("mogul"):
			return Global_262145.f_21589;
		
		case joaat("pyro"):
			return Global_262145.f_21590;
		
		case joaat("seabreeze"):
			return Global_262145.f_21591;
		
		case joaat("nokota"):
			return Global_262145.f_21592;
		
		case joaat("hunter"):
			return Global_262145.f_21593;
		
		default:
	}
	return 0;
}

bool func_179(int iParam0)
{
	if (!Global_70978)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(func_170(5459, -1, 0), iParam0);
}

int func_180(int iParam0)
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

int func_181(int iParam0)
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

int func_182(int iParam0)
{
	int iVar0;
	
	if (!Global_70978)
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
	return func_183(iVar0);
}

bool func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_190())
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	iVar1 = iParam0;
	return unk_0xFA30DFD0084E92FE(iVar0, func_184(iVar1));
}

int func_184(int iParam0)
{
	return (iParam0 % 32);
}

var func_185(var uParam0)
{
	var uVar0;
	
	uVar0 = func_170(func_186(uParam0), -1, 0);
	return uVar0;
}

int func_186(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_189(iVar0);
	if ((func_188() == 0 || func_187() == 0) || (func_188() == 999 && func_187() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 738;
				break;
			
			case 1:
				return 739;
				break;
			}
	}
	return 8804;
}

int func_187()
{
	return Global_25278;
}

int func_188()
{
	return Global_25277;
}

int func_189(int iParam0)
{
	return (iParam0 / 32);
}

bool func_190()
{
	return Global_1312833;
}

int func_191(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_192(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

bool func_193(int iParam0)
{
	if (!Global_70978)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(func_170(5322, -1, 0), iParam0);
}

int func_194(int iParam0)
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

int func_195(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
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

int func_196()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xFA30DFD0084E92FE(Global_25, 5))
	{
		if (unk_0xFA30DFD0084E92FE(Global_25, 1) || unk_0xFA30DFD0084E92FE(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0xFA30DFD0084E92FE(iVar0, 5))
		{
			if (unk_0xFA30DFD0084E92FE(iVar0, 1) || unk_0xFA30DFD0084E92FE(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x3C47C07E0231858C(0))
	{
		if (Global_143857.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x6CB99B97664C3727(iVar2, &iVar1, -1))
			{
				if (unk_0xFA30DFD0084E92FE(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		iVar3 = unk_0x2DC92D46FC48E795(866);
		if (unk_0xFA30DFD0084E92FE(iVar3, 1) || unk_0xFA30DFD0084E92FE(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0xBD27C05334738D84())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				unk_0xF0059F27F7BB6680(&iVar4, 1);
				unk_0xF0059F27F7BB6680(&iVar4, 3);
				unk_0xF0059F27F7BB6680(&iVar4, 5);
				unk_0xF0059F27F7BB6680(&Global_25, 1);
				unk_0xF0059F27F7BB6680(&Global_25, 3);
				unk_0xF0059F27F7BB6680(&Global_25, 5);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar4 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar4, 1);
					unk_0xF0059F27F7BB6680(&iVar4, 3);
					unk_0x973C4C95367920C1(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_197(int iParam0, var uParam1)
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

int func_198(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

void func_199(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 64:
			unk_0xF0059F27F7BB6680(uParam1, 4);
			break;
		
		case 67:
			unk_0xF0059F27F7BB6680(uParam1, 4);
			break;
		
		case 72:
			unk_0xF0059F27F7BB6680(uParam1, 1);
			break;
		
		case 117:
			unk_0x7CB6FD92BE491AD9(uParam1, 1);
			break;
		
		case 49:
			unk_0x7CB6FD92BE491AD9(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			break;
		
		case 118:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			unk_0x7CB6FD92BE491AD9(uParam1, 1);
			break;
		
		case 1:
			unk_0xF0059F27F7BB6680(uParam1, 1);
			break;
		
		case 119:
			unk_0x7CB6FD92BE491AD9(uParam1, 1);
			break;
		
		case 77:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			unk_0x7CB6FD92BE491AD9(uParam1, 1);
			unk_0x7CB6FD92BE491AD9(uParam1, 2);
			break;
		
		case 120:
			unk_0x7CB6FD92BE491AD9(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			unk_0x7CB6FD92BE491AD9(uParam1, 2);
			break;
		
		case 130:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			break;
		
		case 132:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			break;
		
		case 135:
			unk_0x7CB6FD92BE491AD9(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			break;
		
		case 137:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			break;
		
		case 141:
			unk_0xF0059F27F7BB6680(uParam1, 1);
			unk_0x7CB6FD92BE491AD9(uParam1, 6);
			break;
		
		case 147:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			unk_0xF0059F27F7BB6680(uParam1, 2);
			unk_0xF0059F27F7BB6680(uParam1, 3);
			unk_0xF0059F27F7BB6680(uParam1, 4);
			unk_0xF0059F27F7BB6680(uParam1, 5);
			unk_0xF0059F27F7BB6680(uParam1, 6);
			unk_0xF0059F27F7BB6680(uParam1, 7);
			unk_0xF0059F27F7BB6680(uParam1, 8);
			break;
		
		case 203:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			unk_0x7CB6FD92BE491AD9(uParam1, 1);
			unk_0x7CB6FD92BE491AD9(uParam1, 2);
			break;
		
		case 100:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			unk_0xF0059F27F7BB6680(uParam1, 2);
			break;
		
		case 170:
			unk_0x7CB6FD92BE491AD9(uParam1, 0);
			unk_0x7CB6FD92BE491AD9(uParam1, 1);
			unk_0x7CB6FD92BE491AD9(uParam1, 2);
			break;
		
		case 160:
			unk_0xF0059F27F7BB6680(uParam1, 15);
			break;
		
		case 161:
			unk_0xF0059F27F7BB6680(uParam1, 15);
			break;
		
		case 192:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			unk_0x7CB6FD92BE491AD9(uParam1, 2);
			break;
		
		case 221:
			unk_0x7CB6FD92BE491AD9(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			unk_0x7CB6FD92BE491AD9(uParam1, 2);
			break;
		
		case 222:
			unk_0xF0059F27F7BB6680(uParam1, 1);
			break;
		
		case 172:
			unk_0xF0059F27F7BB6680(uParam1, 1);
			break;
		
		case 165:
			unk_0x7CB6FD92BE491AD9(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			break;
		
		case 166:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			unk_0x7CB6FD92BE491AD9(uParam1, 1);
			break;
		
		case 139:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			break;
		
		case 104:
			unk_0xF0059F27F7BB6680(uParam1, 1);
			break;
		
		case 109:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			unk_0xF0059F27F7BB6680(uParam1, 2);
			break;
		
		case 227:
		case 252:
			unk_0xF0059F27F7BB6680(uParam1, 1);
			unk_0x7CB6FD92BE491AD9(uParam1, 2);
			unk_0x7CB6FD92BE491AD9(uParam1, 4);
			break;
		
		case 97:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			break;
		
		case 52:
			unk_0xF0059F27F7BB6680(uParam1, 1);
			break;
		
		case 108:
			unk_0xF0059F27F7BB6680(uParam1, 1);
			break;
		
		case 237:
			unk_0xF0059F27F7BB6680(uParam1, 9);
			break;
		
		case 238:
			unk_0x7CB6FD92BE491AD9(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			unk_0xF0059F27F7BB6680(uParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_69773)
			{
				unk_0xF0059F27F7BB6680(uParam1, 9);
			}
			break;
		
		case 271:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			unk_0xF0059F27F7BB6680(uParam1, 2);
			unk_0xF0059F27F7BB6680(uParam1, 3);
			unk_0xF0059F27F7BB6680(uParam1, 4);
			break;
		
		case 272:
			unk_0xF0059F27F7BB6680(uParam1, 3);
			unk_0xF0059F27F7BB6680(uParam1, 4);
			break;
		
		case 273:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			break;
		
		case 281:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			break;
		
		case 267:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			break;
		
		case 268:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			break;
		
		case 292:
			unk_0xF0059F27F7BB6680(uParam1, 9);
			break;
		
		case 309:
			unk_0xF0059F27F7BB6680(uParam1, 9);
			break;
		
		case 329:
			unk_0xF0059F27F7BB6680(uParam1, 9);
			break;
		
		case 364:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			unk_0xF0059F27F7BB6680(uParam1, 9);
			break;
		
		case 360:
			unk_0xF0059F27F7BB6680(uParam1, 9);
			break;
		
		case 401:
			unk_0xF0059F27F7BB6680(uParam1, 0);
			unk_0xF0059F27F7BB6680(uParam1, 1);
			unk_0xF0059F27F7BB6680(uParam1, 6);
			unk_0xF0059F27F7BB6680(uParam1, 9);
			break;
		
		case 406:
			unk_0xF0059F27F7BB6680(uParam1, 9);
			break;
		
		case 404:
			unk_0xF0059F27F7BB6680(uParam1, 9);
			break;
		
		default:
			return;
			break;
	}
}

void func_200(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17345.f_1), sParam0, 16);
	Global_17345.f_68 = 0;
	Global_17345.f_69 = 0;
	Global_17345.f_70 = 0;
	Global_17345.f_71 = 0;
	Global_17345.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17345.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_201(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17345.f_4953[0] = iParam0;
	Global_17345.f_4953[1] = iParam1;
	Global_17345.f_4953[2] = iParam2;
	Global_17345.f_4953[3] = iParam3;
	Global_17345.f_4953[4] = iParam4;
}

void func_202(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17345.f_4926[0] = iParam0;
	Global_17345.f_4926[1] = iParam1;
	Global_17345.f_4926[2] = iParam2;
	Global_17345.f_4926[3] = iParam3;
	Global_17345.f_4926[4] = iParam4;
	Global_17345.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17345.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17345.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17345.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17345.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17345.f_5096++;
	}
}

void func_203(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17345.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17345.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2458236[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17345.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17345.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17345.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17345.f_4959[iVar0] = 0;
		Global_17345.f_5097[iVar0] = 0;
		Global_17345.f_5226[iVar0] = 0;
		Global_17345.f_5746[iVar0] = 0f;
		Global_17345.f_5355[iVar0] = 0;
		Global_17345.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17345.f_4926[iVar0] = 0;
		Global_17345.f_4938[iVar0] = 0f;
		Global_17345.f_4932[iVar0] = -1f;
		Global_17345.f_4945[iVar0] = 0;
		Global_17345.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17345.f_4834[iVar0 /*4*/]), "", 16);
		Global_17345.f_4883[iVar0] = -1;
		Global_17345.f_4896[iVar0] = 358;
		Global_17345.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17345.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17345.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_17345.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4266122.f_16), "", 16);
	Global_4266122.f_20 = -1;
	Global_17345 = 0;
	Global_17345.f_5088 = 0;
	Global_17345.f_5089 = 0;
	Global_17345.f_5090 = 0;
	Global_17345.f_5092 = 0;
	Global_17345.f_5093 = 0;
	Global_17345.f_5094 = 0;
	Global_17345.f_5091 = 0;
	Global_17345.f_5741 = 0;
	Global_17345.f_5606 = 0;
	Global_17345.f_5605 = 0;
	Global_17345.f_5607 = 0;
	StringCopy(&(Global_17345.f_4562), "", 16);
	Global_17345.f_4632 = 0;
	Global_17345.f_4633 = 0;
	Global_17345.f_4634 = 0;
	Global_17345.f_4635 = 0;
	Global_17345.f_4636 = 0;
	Global_17345.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17345.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17345.f_4638 = 0;
	StringCopy(&(Global_4266122.f_21), "", 16);
	Global_4266122.f_61 = 0;
	Global_4266122.f_62 = 0;
	Global_4266122.f_63 = 0;
	Global_4266122.f_64 = 0;
	Global_4266122.f_65 = 0;
	Global_4266122.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4266122.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4266122.f_67 = 0;
	StringCopy(&(Global_17345.f_1), "", 16);
	Global_17345.f_4944 = 0f;
	Global_17345.f_68 = 0;
	Global_17345.f_69 = 0;
	Global_17345.f_70 = 0;
	Global_17345.f_71 = 0;
	Global_17345.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17345.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17345.f_5611 = 0;
	Global_17345.f_5610 = 0;
	Global_17345.f_5608 = 0;
	Global_17345.f_5609 = 0;
	Global_17345.f_4639 = 0;
	Global_17345.f_4640 = 0;
	Global_17345.f_5095 = 10;
	Global_17345.f_5096 = 0;
	Global_17345.f_5743 = 0f;
	Global_17345.f_5744 = 0f;
	Global_17345.f_5598 = 0;
	Global_17345.f_5599 = 0;
	Global_17345.f_5600 = 0f;
	Global_17345.f_5601 = 0;
	Global_17345.f_5603 = 0;
	Global_17345.f_5602 = 0;
	Global_17345.f_5604 = 0;
	Global_17345.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17345.f_5875[iVar0] = -1;
		Global_17345.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17345.f_4951 = 0f;
	Global_17345.f_4922 = 0;
	Global_17345.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17345.f_5881)
	{
		Global_17345.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17345.f_7906 = 0;
	Global_17345.f_7901 = 0;
	Global_17345.f_7911 = 0;
	Global_17345.f_7916 = 0;
	Global_17345.f_7921 = 0;
	Global_17345.f_7923 = 0;
	Global_17345.f_7929 = 0;
	Global_17342 = 0.05f;
	Global_17343 = 0.05f;
	Global_17344 = 0.225f;
	fVar2 = unk_0x3771EE4CB542D71E(0);
	if (bParam0)
	{
		Global_17344 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17344 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17344 = 0.225f;
	}
}

void func_204()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0xFCEBCC3D5D7DB96E(0.325f, 0.3f);
	}
}

int func_205(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_80(0))
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36613[iVar0 /*32*/] == 1 && Global_36613[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36613[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36613[iVar0 /*32*/].f_5 = 1;
			Global_36613[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36613[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36613[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_206(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_73(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17345.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xF1734B55490E9045(&(Global_17345.f_5505[iVar0 /*4*/])))
	{
		unk_0x900CF084251DED26(&(Global_17345.f_5505[iVar0 /*4*/]), 9);
		Global_17345.f_5498[iVar0] = 1;
		if (!unk_0x4C7022A83B41D888(&(Global_17345.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x8AA3F48A15444B98("CommonMenu", 0);
	Global_17345.f_5484[iVar0] = 1;
	if (!unk_0x499783D01578C2D2("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x8AA3F48A15444B98("MPShopSale", 0);
		Global_17345.f_5491[iVar0] = 1;
		if (!unk_0x499783D01578C2D2("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17345.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_207(&(Global_17345.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_207(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				*uParam0 = unk_0x9934FEFB3B8C6DB8(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA7F138B5B1AB2CF6(*uParam0))
					{
						uParam0->f_8 = unk_0x105601648511CC64();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x105601648511CC64();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				uParam0->f_8 = unk_0x105601648511CC64();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_208(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

var func_209(char* sParam0)
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_210(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*iParam0 == -1)
		{
			func_69(iParam0);
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
		if (!Global_36613[iVar0 /*32*/])
		{
			Global_36613[iVar0 /*32*/] = 1;
			Global_36613[iVar0 /*32*/].f_1 = Global_36814;
			Global_36814++;
			Global_36613[iVar0 /*32*/].f_4 = 0;
			Global_36613[iVar0 /*32*/].f_29 = 0;
			Global_36613[iVar0 /*32*/].f_5 = 0;
			Global_36613[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36613[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36613[iVar0 /*32*/].f_6 = iParam3;
			Global_36613[iVar0 /*32*/].f_31 = unk_0x8A55B15F4133C912();
			Global_36613[iVar0 /*32*/].f_7 = 0;
			Global_36613[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xF1734B55490E9045(sParam4))
			{
				Global_36613[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36613[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36613[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36613[iVar0 /*32*/].f_12 = 0;
				Global_36613[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36613[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_211(int iParam0, int iParam1)
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
	return unk_0xFA30DFD0084E92FE(Global_105220.f_25153[iParam0], iVar0);
}

int func_212(int iParam0)
{
	int iVar0;
	int iVar1[128];
	
	if (func_215(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_105220.f_18545[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_43() && !unk_0x7AF0088ABFA713B6())
	{
		if (func_214(33, 0) && !func_213(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_105220.f_25044.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_105220.f_25044.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_105220.f_25044.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_105220.f_25044.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_105220.f_25044.f_7)
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

int func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_105220.f_7659.f_764)
	{
		if (Global_105220.f_7659.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_214(int iParam0, int iParam1)
{
	if (unk_0xFA30DFD0084E92FE(Global_105220.f_24966.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_215(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_668.f_1308, 2))
		{
			return 1;
		}
	}
	if (unk_0xBAF5BEF76386574D())
	{
		if (!bParam1 || unk_0x57D316754A262B34())
		{
			if (!unk_0x3E9993F328985CCB() && !unk_0xF7E138CFA19B55E7())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0x11F704A1BA7AC122())
		{
			return 0;
		}
	}
	if (unk_0xBAF5BEF76386574D())
	{
		return 1;
	}
	return 0;
}

int func_216()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_215(1, 1))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0++;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_105220.f_18545[45 /*6*/], 3))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0++;
		}
	}
	if (func_43() && !unk_0x7AF0088ABFA713B6())
	{
		if (func_214(33, 0) && !func_213(1751306471))
		{
			iVar0++;
		}
		if (Global_105220.f_25044.f_3)
		{
			iVar0++;
		}
		if (Global_105220.f_25044.f_4)
		{
			iVar0++;
		}
		if (Global_105220.f_25044.f_5)
		{
			iVar0++;
		}
		if (Global_105220.f_25044.f_6)
		{
			iVar0++;
		}
		if (Global_105220.f_25044.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_217(float fParam0)
{
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x31E5D759D5CB9546(unk_0xBC25C936A095B5BA()) > 0;
		}
		else
		{
			return unk_0xEA85590434A67895(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), fParam0) > 0;
		}
	}
	return 0;
}

bool func_218(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

void func_219()
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
	if ((((((((((((((((Local_402.f_29.f_80 && Local_402.f_29.f_69) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && Local_402.f_2 == 0) && Local_402.f_0 != -1) && func_67(Local_402.f_0, 0)) && func_67(Local_402.f_0, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_68280) && !func_218(1)) && !func_299()) || (((Local_402.f_3 > 1 && !func_218(0)) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && !func_299()))
	{
		func_298(Local_402.f_0, &Local_546);
		fVar13 = 0f;
		sVar14 = "ANIM@APT_TRANS@GARAGE";
		Var15 = { 198.3659f, -1020.273f, -100f };
		Var18 = { Var15 };
		Var21 = { 198.9538f, -1026.13f, -100f };
		iVar24 = func_297(Local_402.f_0);
		switch (Local_402.f_3)
		{
			case 0:
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && !unk_0x7930B3E9C919E90F())
				{
					Local_402.f_3 = 10;
					return;
				}
				if ((((((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && (func_296(unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()), Local_402.f_29.f_68, 90f) || unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))) && unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) && !unk_0xA4813477CC5DD00F(unk_0xBC25C936A095B5BA())) && !unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) && !unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2)) && (iVar24 == iLocal_672 || iVar24 == 145))
				{
					if (func_295())
					{
						bVar25 = true;
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
						{
							iVar12 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 1);
							if (unk_0x724D816EA203A79E(iVar12))
							{
								if (unk_0xE59B7F5A03335350(iVar12, 0))
								{
									iVar26 = unk_0x6F79ECA8C83E4357(iVar12);
									if (((((((((!func_64(iVar26) || func_63(iVar12)) || func_62(iVar12)) || !func_39(iVar26, 0)) || unk_0x10A01B0B02B273EF(iVar12)) || ((!unk_0x7C28D15641461C68(iVar26) && !unk_0x7512ED01F3F46714(iVar26)) && !unk_0x89B9572166100905(iVar26))) || iVar26 == joaat("monster")) || unk_0x7544D2465B934445(iVar12)) || unk_0x6E80E5225F67328D(iVar12)) || (unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()) && unk_0xB731B8C5BCE89836(joaat("taxi_procedural")) > 0))
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
						else if (unk_0x5E5457547BDEF354(sVar14))
						{
							unk_0x522053D86D6E1C7A(sVar14);
							if (!unk_0xF9E082857622D91E(sVar14))
							{
								bVar25 = false;
							}
						}
						if (bVar25)
						{
							func_210(&iLocal_656, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							iLocal_1034 = 0;
							Local_402.f_3 = 1;
						}
						else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
						{
							if (!unk_0xF16DAFF595E80F7C() || func_209("WEB_VEH_INV"))
							{
								func_208("WEB_VEH_INV", -1);
								StringCopy(&cLocal_1023, "WEB_VEH_INV", 16);
								bVar11 = true;
							}
						}
					}
					else if (!unk_0xF16DAFF595E80F7C() || func_209("WEB_VEH_FULL"))
					{
						func_208("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_1023, "WEB_VEH_FULL", 16);
						bVar11 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_1032)
				{
					if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
					{
						iLocal_1032 = 0;
						unk_0x522053D86D6E1C7A(sVar14);
						if (unk_0xF9E082857622D91E(sVar14))
						{
							iLocal_1032 = 1;
						}
					}
					else
					{
						unk_0x4EA570997E107F35(sVar14);
						iLocal_1032 = 1;
					}
				}
				iVar27 = 1;
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					iVar12 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 1);
					if (unk_0x724D816EA203A79E(iVar12))
					{
						if (unk_0xE59B7F5A03335350(iVar12, 0))
						{
							iVar28 = unk_0x6F79ECA8C83E4357(iVar12);
							if ((((((((!func_64(iVar28) || func_63(iVar12)) || func_62(iVar12)) || unk_0x10A01B0B02B273EF(iVar12)) || ((!unk_0x7C28D15641461C68(iVar28) && !unk_0x7512ED01F3F46714(iVar28)) && !unk_0x89B9572166100905(iVar28))) || iVar28 == joaat("monster")) || unk_0x7544D2465B934445(iVar12)) || unk_0x6E80E5225F67328D(iVar12)) || (unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()) && unk_0xB731B8C5BCE89836(joaat("taxi_procedural")) > 0))
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
				if (((((((((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && (func_296(unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()), Local_402.f_29.f_68, 90f) || unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))) && unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) && func_295()) && !unk_0xA4813477CC5DD00F(unk_0xBC25C936A095B5BA())) && !unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) && !unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2)) && !func_299()) && (iVar24 == iLocal_672 || iVar24 == 145)) && iVar27)
				{
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) || (unk_0xF9E082857622D91E(sVar14) || !unk_0x5E5457547BDEF354(sVar14)))
					{
						if (func_205(iLocal_656, 1))
						{
							func_69(&iLocal_656);
							iLocal_1032 = 0;
							Local_402.f_3 = 2;
						}
						func_293(47, 0);
						func_288(47, 0);
						Local_402.f_112 = unk_0x5E29F9399E0829A3(Var15, "v_garagem_sp");
						if (unk_0xBF697FA7422C0621(Local_402.f_112))
						{
							if (!unk_0x18487DB48DC3A046(Local_402.f_112))
							{
								if ((unk_0xC87A57742F7D3C06() % 10) == 0)
								{
									unk_0x184188AF06D2A771(Local_402.f_112);
								}
							}
							StringCopy(&Global_32627, "v_garagem_sp", 32);
						}
						if (!iLocal_1031 && !unk_0x719413B40BB63D86())
						{
							if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
							{
								iVar29 = func_286(Local_402.f_0);
								func_61(&Var30, iVar29);
								Var18 = { Var30 };
								unk_0x1732A8A5D2D39430(Var18, 20f, 0);
							}
							else
							{
								unk_0x1732A8A5D2D39430(Var21 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_1031 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1031 && unk_0x719413B40BB63D86())
					{
						unk_0x13D5880CBA449AA9();
						iLocal_1031 = 0;
					}
					iLocal_1032 = 0;
					func_69(&iLocal_656);
					unk_0x4EA570997E107F35(sVar14);
					Local_402.f_3 = 0;
				}
				break;
			
			case 2:
				func_293(47, 0);
				func_288(47, 0);
				unk_0x27CBA62D1F6DF074(8);
				Global_69800.f_577 = 1;
				Global_69800.f_578 = { Local_402.f_29.f_55 };
				iLocal_1012 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
				unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
				unk_0x4060A19D5551068A(unk_0xBC25C936A095B5BA(), 0, 0);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
				unk_0x59B038076F830627(0);
				unk_0x43F06392C4EF25E0(0);
				unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iVar12 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0x724D816EA203A79E(iVar12) && unk_0xE59B7F5A03335350(iVar12, 0))
					{
						if (func_296(unk_0x349C94FFF43E2979(iVar12), Local_402.f_29.f_68, 90f))
						{
							iLocal_1034 = 0;
						}
						else
						{
							iLocal_1034 = 1;
						}
						unk_0x06D93FD5E4D394CF(iVar12, 1, 1, 1, 1, 1, 1, 0, 0);
						unk_0x4516EDD0A096FB5B(Local_546.f_86[0 /*6*/], 20f, 0);
						unk_0xADC7E88690E324EB(Local_546.f_86[0 /*6*/], 20f, 0);
						unk_0x5DEC86EE2E34A59D(Local_546.f_86[0 /*6*/], 7f);
						unk_0x641B19E156645A92(iVar12, Local_546.f_86[0 /*6*/], 1, 0, 0, 1);
						if (iLocal_1034 && !unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
						{
							unk_0x019CE76D5286C95C(iVar12, (Local_546.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0x019CE76D5286C95C(iVar12, Local_546.f_86[0 /*6*/].f_3.f_2);
						}
						if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
						{
							unk_0x92C13E9A4A1DA028(unk_0xBC25C936A095B5BA(), 0, 0, -1);
							unk_0xC3D5C68D28907D90(unk_0xBC25C936A095B5BA(), 1);
						}
						unk_0xF0A40F19AAB79E88(iVar12, 1084227584);
					}
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
					func_280(1, 1, 1, 0, 0);
					func_279(&(Local_546[1 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 3;
				}
				else
				{
					if (unk_0x724D816EA203A79E(iLocal_1027) && !unk_0x1D403DFADBC2DE3C(iLocal_1027, 0))
					{
						if (unk_0x5CAE759AE8219D20(iLocal_1027) && unk_0xB248FAA35ED47DB9(iLocal_1027, 1))
						{
							unk_0x1E7A09C1710FB071(&iLocal_1027);
						}
					}
					iLocal_1027 = unk_0x3E12B546F3F2597A();
					if ((((unk_0x724D816EA203A79E(iLocal_1027) && unk_0xE59B7F5A03335350(iLocal_1027, 0)) && !unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iLocal_1027))) && !unk_0xA19D269B4B5A1532(unk_0x6F79ECA8C83E4357(iLocal_1027))) && !unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(iLocal_1027)))
					{
						if (!unk_0x5CAE759AE8219D20(iLocal_1027))
						{
							unk_0x77815D3407C6700D(iLocal_1027, 0, 0);
						}
						if (unk_0x724D816EA203A79E(iLocal_1027) && unk_0xE59B7F5A03335350(iLocal_1027, 0))
						{
							if (!bVar51)
							{
								if (unk_0x0C265B3C448E6954(iLocal_1027, Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0))
								{
									bVar51 = true;
								}
							}
							if (!bVar51)
							{
								fVar52 = unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_1027, 1), Local_546[0 /*15*/]);
								if (fVar52 < (5f * 5f))
								{
									bVar51 = true;
								}
							}
							if (bVar51)
							{
								iVar53 = func_49(24);
								if (func_278(&Local_776, 24))
								{
									func_273(&Local_776, func_457());
									if (unk_0x724D816EA203A79E(iVar53))
									{
										unk_0xCF6040807CC0E4A5(&iVar53);
									}
								}
								if (Local_402.f_0 == 21)
								{
									unk_0x6C5F5B5F6894CCE3(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
									func_271(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_402.f_0 == 22)
								{
									unk_0x6C5F5B5F6894CCE3(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
									func_271(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_402.f_0 == 23)
								{
									unk_0x6C5F5B5F6894CCE3(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
									func_271(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								unk_0xF0A40F19AAB79E88(iLocal_1027, 1084227584);
							}
						}
					}
					else
					{
						iLocal_1027 = 0;
					}
					Var54 = { Local_402.f_29 * Vector(2f, 2f, 2f) + Local_402.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var57 = { Local_402.f_29 * Vector(1f, 1f, 1f) + Local_402.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_402.f_29, Var54.f_0, Var54.f_1, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0x491B2241281A03B7(0, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var54.f_0, Var54.f_1, Local_402.f_29.f_2, Var57.f_0, Var57.f_1, Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0x491B2241281A03B7(0, 2))
						{
							case 0:
								sLocal_1035 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_1035 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var57.f_0, Var57.f_1, Local_402.f_29.f_2, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0))
					{
						sLocal_1035 = "";
						switch (unk_0x491B2241281A03B7(0, 2))
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
						switch (unk_0x491B2241281A03B7(0, 6))
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
					unk_0x4516EDD0A096FB5B(Local_546.f_73[0 /*4*/], 20f, 0);
					unk_0xADC7E88690E324EB(Local_546.f_86[0 /*6*/], 20f, 0);
					unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_546.f_73[0 /*4*/], 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), Local_546.f_73[0 /*4*/].f_3);
					iLocal_661 = unk_0xD0D858E538FD01C3(Local_546.f_73[0 /*4*/], 0f, 0f, Local_546.f_73[0 /*4*/].f_3, 2);
					unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0, 1148846080, 0);
					func_280(1, 1, 1, 0, 0);
					func_279(&(Local_546[0 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
					Local_402.f_3 = 4;
				}
				Local_402.f_112 = unk_0x5E29F9399E0829A3(Var15, "v_garagem_sp");
				if (unk_0xBF697FA7422C0621(Local_402.f_112))
				{
					if (!unk_0x18487DB48DC3A046(Local_402.f_112))
					{
						unk_0x184188AF06D2A771(Local_402.f_112);
					}
					StringCopy(&Global_32627, "v_garagem_sp", 32);
				}
				if (!iLocal_1031)
				{
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
					{
						iVar60 = func_286(Local_402.f_0);
						func_61(&Var61, iVar60);
						Var18 = { Var61 };
						unk_0x1732A8A5D2D39430(Var18, 20f, 0);
					}
					else
					{
						unk_0x1732A8A5D2D39430(Var21, 20f, 0);
					}
				}
				unk_0xF0059F27F7BB6680(&(Local_674.f_9), 25);
				func_267(198.0043f, -999.7775f, -100f, 50f, 0);
				func_112(Local_402.f_0);
				func_112(26);
				func_112(29);
				func_112(32);
				func_112(28);
				func_112(31);
				func_112(34);
				func_112(27);
				func_112(30);
				func_112(33);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1033 = 0;
				break;
			
			case 4:
				bVar82 = true;
				if (!unk_0x719413B40BB63D86())
				{
				}
				else if (unk_0xF220370B0C08EC20())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0xBF697FA7422C0621(Local_402.f_112))
				{
					if (!unk_0x18487DB48DC3A046(Local_402.f_112))
					{
						unk_0x184188AF06D2A771(Local_402.f_112);
					}
					StringCopy(&Global_32627, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = unk_0x5E29F9399E0829A3(Var15, "v_garagem_sp");
				}
				if (func_266())
				{
				}
				else
				{
					bVar82 = false;
				}
				if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110) && unk_0xF448AA2D7E08A675(Local_402.f_110))
				{
					if (unk_0x16BE1286447174A9(Local_402.f_110))
					{
						bVar82 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[0 /*15*/].f_14 * 1000f))
					{
						bVar82 = false;
					}
				}
				else if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_111) && unk_0xF448AA2D7E08A675(Local_402.f_111))
				{
					if (unk_0x16BE1286447174A9(Local_402.f_111))
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
				if (unk_0x77FC50899603581D(iLocal_661))
				{
					fVar83 = unk_0x8FD30584EB38411B(iLocal_661);
					if (fVar83 < 0.4f)
					{
						bVar82 = false;
					}
				}
				if (bVar82)
				{
					unk_0x7A41D32A383895D8(800);
					Local_402.f_3 = 5;
				}
				break;
			
			case 5:
				if (unk_0x17FAADF9916EF741())
				{
					iVar84 = unk_0x2F079D1FC5F6CB99();
					unk_0xC4BA30B532FE260F(iVar84, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0x8B34879B92B3B225(iVar84, "hold", (2250f / 1000f));
					func_280(0, 1, 1, 0, 0);
					unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
					if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110))
					{
						unk_0x348665177DBFB93B(Local_402.f_110, 0);
						unk_0x4EC087603E1DEF9C(Local_402.f_110, 0);
					}
					if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_111))
					{
						unk_0x348665177DBFB93B(Local_402.f_111, 0);
						unk_0x4EC087603E1DEF9C(Local_402.f_111, 0);
					}
					if (unk_0x724D816EA203A79E(iLocal_1037))
					{
						unk_0xD434A01DEA38A939(iLocal_1037, 1, 0);
						unk_0x346478B12F69D4E3(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
					unk_0x27CBA62D1F6DF074(8);
					if (unk_0x77FC50899603581D(iLocal_661))
					{
						unk_0x2A7E436A4653E829(iLocal_661);
					}
					iLocal_661 = -1;
					unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
					unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 194.5394f, -1026.32f, -100f, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 334.1665f);
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 1);
					unk_0xF3F01A78937DC905(0f);
					unk_0x2B9AEC08E469E384(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 6;
				}
				break;
			
			case 6:
				func_265(Local_402.f_0);
				if (unk_0x17FAADF9916EF741() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					unk_0x4EA570997E107F35(sVar14);
					func_264();
					if (unk_0x719413B40BB63D86())
					{
						unk_0x13D5880CBA449AA9();
					}
					unk_0x829FA4611BD56B44(800);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 0);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					Local_402.f_3 = 10;
				}
				break;
			
			case 3:
				func_265(Local_402.f_0);
				bVar85 = true;
				if (!unk_0x719413B40BB63D86())
				{
				}
				else if (unk_0xF220370B0C08EC20())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0xBF697FA7422C0621(Local_402.f_112))
				{
					if (!unk_0x18487DB48DC3A046(Local_402.f_112))
					{
						unk_0x184188AF06D2A771(Local_402.f_112);
					}
					StringCopy(&Global_32627, "v_garagem_sp", 32);
				}
				else
				{
					Local_402.f_112 = unk_0x5E29F9399E0829A3(Var15, "v_garagem_sp");
				}
				if (func_266())
				{
				}
				else
				{
					bVar85 = false;
				}
				if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110) && unk_0xF448AA2D7E08A675(Local_402.f_110))
				{
					if (unk_0x16BE1286447174A9(Local_402.f_110))
					{
						bVar85 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[1 /*15*/].f_14 * 1000f))
					{
						bVar85 = false;
					}
				}
				else if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_111) && unk_0xF448AA2D7E08A675(Local_402.f_111))
				{
					if (unk_0x16BE1286447174A9(Local_402.f_111))
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					Var86 = { 0f, 0f, 0f };
					Var86.f_3 = 0f;
					func_256(unk_0xBC25C936A095B5BA(), Local_546.f_86[0 /*6*/], Local_546.f_66[0 /*3*/], ((Local_546[1 /*15*/].f_14 * 1000f) - 500f), Var86, 2, &fVar13);
				}
				if (bVar85)
				{
					func_264();
					unk_0xC1B1E9A034A63A62(0);
					unk_0x7A41D32A383895D8(800);
					Local_402.f_3 = 35;
				}
				break;
			
			case 35:
				bVar90 = true;
				func_265(Local_402.f_0);
				if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546.f_61[1] * 1000f))
				{
					bVar90 = false;
				}
				if (bVar90)
				{
					func_264();
					func_280(0, 1, 1, 0, 0);
					unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
					if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110))
					{
						unk_0x348665177DBFB93B(Local_402.f_110, 0);
						unk_0x4EC087603E1DEF9C(Local_402.f_110, 0);
					}
					if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_111))
					{
						unk_0x348665177DBFB93B(Local_402.f_111, 0);
						unk_0x4EC087603E1DEF9C(Local_402.f_111, 0);
					}
					if (unk_0x724D816EA203A79E(iLocal_1037))
					{
						unk_0xD434A01DEA38A939(iLocal_1037, 1, 0);
						unk_0x346478B12F69D4E3(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
					unk_0x27CBA62D1F6DF074(8);
					if (unk_0x719413B40BB63D86())
					{
						unk_0x13D5880CBA449AA9();
					}
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						iVar12 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						if (unk_0x724D816EA203A79E(iVar12) && unk_0xE59B7F5A03335350(iVar12, 0))
						{
							iVar91 = func_286(Local_402.f_0);
							func_61(&Var92, iVar91);
							unk_0x641B19E156645A92(iVar12, Var92, 1, 0, 0, 1);
							unk_0x019CE76D5286C95C(iVar12, Var92.f_3);
							unk_0x127F627F30266DD9(iVar12, 1);
							unk_0x2D655AA68FA1736B(iVar12, 0, 1, 0);
							unk_0x93D3868AE0D83B7C(iVar12, 4);
							unk_0x89BE70A336BD3497(iVar12, 1, 0);
							unk_0x89BE70A336BD3497(iVar12, 0, 0);
							unk_0x4E87F356DA56EB3F(iVar12, 0);
							unk_0x06D93FD5E4D394CF(iVar12, 0, 0, 0, 0, 0, 0, 0, 0);
							unk_0x932E201A82D2EDB8(unk_0xBC25C936A095B5BA(), iVar12, 0);
							unk_0x346478B12F69D4E3(iVar12, 0);
							Var113.f_9 = 49;
							Var113.f_59 = 2;
							func_32(iVar12, &Var113);
							func_113(iVar91, &Var113, 0f, 0f, 0f, -1f, 145);
							func_30(iVar91, iVar12, 1);
							func_255(iVar12);
						}
						unk_0xF3F01A78937DC905(0f);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
					}
					iVar191 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar0, -1);
					iVar192 = 0;
					while (iVar192 < iVar191)
					{
						if ((unk_0x724D816EA203A79E(uVar0[iVar192]) && !unk_0x36CEFBE9B745A58D(uVar0[iVar192])) && unk_0x9488E18994C5C83D(uVar0[iVar192], unk_0x705BBFE5A8ADE4A9(unk_0xB5CEFD608600A09F())))
						{
							unk_0xD5874E4A4BF782FC(uVar0[iVar192], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar192++;
					}
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					unk_0x829FA4611BD56B44(800);
					Local_402.f_3 = 10;
				}
				break;
			
			case 10:
				if (unk_0x83666F9FB8FEBD4B() < 7000 || !Global_105220.f_32546.f_4800)
				{
					if (!Global_105220.f_32546.f_4800)
					{
						if (iLocal_1013 == 0)
						{
							func_208("CAR_GAR_05", -1);
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
							func_208("CAR_GAR_06", -1);
							StringCopy(&cLocal_1023, "CAR_GAR_06", 16);
							bVar11 = true;
							if (unk_0x83666F9FB8FEBD4B() >= 7000)
							{
								unk_0xC1B1E9A034A63A62(0);
								Global_105220.f_32546.f_4800 = 1;
							}
						}
					}
					else
					{
						func_208("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_1023, "CAR_GAR_EXIT", 16);
						bVar11 = true;
					}
				}
				else
				{
					Global_105220.f_32546.f_4800 = 1;
				}
				iVar193 = 0;
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (iLocal_656 != -1)
					{
						func_69(&iLocal_656);
					}
					iVar12 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0x724D816EA203A79E(iVar12) && unk_0xE59B7F5A03335350(iVar12, 0))
					{
						if (unk_0x8ADE344330B6F916(iVar12) || unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
						{
							if (!(unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA())))
							{
								if ((((unk_0xE56557A1B607909F(0, 71) != 0f || unk_0x694514BD37EC4E94(0, 71)) || unk_0x8FCEEB789599BD9B(0, 71)) || unk_0xF7DDAAF0EFDAFA22(0, 71)) || unk_0xD3C4A010282C31F2(0, 71))
								{
									iVar193 = 1;
								}
								if ((((unk_0xE56557A1B607909F(0, 72) != 0f || unk_0x694514BD37EC4E94(0, 72)) || unk_0x8FCEEB789599BD9B(0, 72)) || unk_0xF7DDAAF0EFDAFA22(0, 72)) || unk_0xD3C4A010282C31F2(0, 72))
								{
									iVar193 = 1;
								}
							}
						}
					}
				}
				else
				{
					unk_0x522053D86D6E1C7A(sVar14);
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, 1, 0) && func_296(unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()), 180f, 90f))
					{
						if (iLocal_655 != -1)
						{
							func_69(&iLocal_655);
						}
						if (iLocal_656 == -1)
						{
							func_210(&iLocal_656, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_655 != -1 && !iLocal_656 == -1)
						{
							if (func_205(iLocal_656, 1))
							{
								func_69(&iLocal_656);
								iVar193 = 1;
							}
						}
					}
					else if (iLocal_656 != -1)
					{
						func_69(&iLocal_656);
					}
				}
				if (iLocal_1016)
				{
					iVar193 = 1;
				}
				if (iVar193 && !func_254())
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || iLocal_1016)
					{
						unk_0xC1B1E9A034A63A62(0);
						unk_0x1732A8A5D2D39430(Local_546.f_73[2 /*4*/], 20f, 0);
						if (iLocal_656 != -1)
						{
							func_69(&iLocal_656);
						}
						Local_402.f_3 = 12;
					}
					else if (unk_0xF9E082857622D91E(sVar14))
					{
						sLocal_1035 = "";
						switch (unk_0x491B2241281A03B7(0, 6))
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
						iLocal_661 = unk_0xD0D858E538FD01C3(Local_546.f_73[1 /*4*/], 0f, 0f, Local_546.f_73[1 /*4*/].f_3, 2);
						unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0, 1148846080, 0);
						func_280(1, 1, 1, 0, 0);
						func_279(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
						unk_0x1732A8A5D2D39430(Local_546.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_656 != -1)
						{
							func_69(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
					else if (!unk_0x5E5457547BDEF354(sVar14))
					{
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_546.f_73[1 /*4*/], 1, 0, 0, 1);
						unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), Local_546.f_73[1 /*4*/].f_3);
						func_280(1, 1, 1, 0, 0);
						func_279(&(Local_546[2 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
						unk_0x1732A8A5D2D39430(Local_546.f_73[2 /*4*/], 20f, 0);
						unk_0xC1B1E9A034A63A62(0);
						if (iLocal_656 != -1)
						{
							func_69(&iLocal_656);
						}
						Local_402.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar194 = true;
				if (!unk_0x719413B40BB63D86())
				{
				}
				else if (unk_0xF220370B0C08EC20())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (func_266())
				{
				}
				else
				{
					bVar194 = false;
				}
				if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110) && unk_0xF448AA2D7E08A675(Local_402.f_110))
				{
					if (unk_0x16BE1286447174A9(Local_402.f_110))
					{
						bVar194 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[2 /*15*/].f_14 * 1000f))
					{
						bVar194 = false;
					}
				}
				else if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_111) && unk_0xF448AA2D7E08A675(Local_402.f_111))
				{
					if (unk_0x16BE1286447174A9(Local_402.f_111))
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
				if (unk_0x77FC50899603581D(iLocal_661))
				{
					fVar195 = unk_0x8FD30584EB38411B(iLocal_661);
					if (fVar195 < 0.4f)
					{
						bVar194 = false;
					}
				}
				if (bVar194)
				{
					iLocal_1013 = 0;
					iLocal_1031 = 0;
					unk_0x7A41D32A383895D8(800);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 13;
				}
				break;
			
			case 12:
				unk_0xBBC4195AD74D153D(0, 75, 1);
				if (unk_0x83666F9FB8FEBD4B() > 500)
				{
					iVar196 = func_253();
					if ((iVar196 == 21 || iVar196 == 22) || iVar196 == 23)
					{
						Var197.f_9 = 49;
						Var197.f_59 = 2;
						func_113(iVar196, &Var197, 0f, 0f, 0f, -1f, 145);
						func_115(iVar196);
					}
					else if (iVar196 != -1)
					{
						if (!iLocal_1016)
						{
							func_463(iVar196, 0);
							func_115(iVar196);
						}
					}
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					unk_0x4060A19D5551068A(unk_0xBC25C936A095B5BA(), 0, 0);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
					unk_0x4EA570997E107F35(sVar14);
					unk_0x7A41D32A383895D8(800);
					Local_402.f_3 = 13;
				}
				break;
			
			case 13:
				if (unk_0x17FAADF9916EF741())
				{
					iVar275 = unk_0x2F079D1FC5F6CB99();
					unk_0xC4BA30B532FE260F(iVar275, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					unk_0x8B34879B92B3B225(iVar275, "hold", (2250f / 1000f));
					unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
					if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110))
					{
						unk_0x348665177DBFB93B(Local_402.f_110, 0);
						unk_0x4EC087603E1DEF9C(Local_402.f_110, 0);
					}
					if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_111))
					{
						unk_0x348665177DBFB93B(Local_402.f_111, 0);
						unk_0x4EC087603E1DEF9C(Local_402.f_111, 0);
					}
					if (unk_0x724D816EA203A79E(iLocal_1037))
					{
						unk_0xD434A01DEA38A939(iLocal_1037, 1, 0);
						unk_0x346478B12F69D4E3(iLocal_1037, 0);
						iLocal_1037 = 0;
					}
					unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
					unk_0x27CBA62D1F6DF074(8);
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (!iLocal_1016)
						{
							iVar12 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
							if (unk_0x724D816EA203A79E(iVar12) && unk_0xE59B7F5A03335350(iVar12, 0))
							{
								unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
								unk_0x641B19E156645A92(iVar12, Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
								unk_0x019CE76D5286C95C(iVar12, Local_402.f_29.f_77[1]);
								unk_0xF0A40F19AAB79E88(iVar12, 1084227584);
							}
						}
					}
					else
					{
						if (unk_0x77FC50899603581D(iLocal_661))
						{
							unk_0x2A7E436A4653E829(iLocal_661);
						}
						iLocal_661 = -1;
						unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
						unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), Local_402.f_29.f_77[1]);
					}
					unk_0xF3F01A78937DC905(0f);
					unk_0x2B9AEC08E469E384(0f, 1065353216);
					unk_0xC1B1E9A034A63A62(0);
					Local_402.f_3 = 14;
				}
				break;
			
			case 14:
				if (unk_0x17FAADF9916EF741() && unk_0x83666F9FB8FEBD4B() > 2250)
				{
					bVar276 = true;
					if (iLocal_1016)
					{
						unk_0xF243B7A14FCFD0F4(iLocal_1017);
						if (unk_0xD6513D668481290A(iLocal_1017))
						{
							iVar277 = unk_0x61C05BF08A1E0EFE(iLocal_1017, Local_402.f_29.f_70[0 /*3*/], Local_402.f_29.f_77[0], 1, 1, 0);
							if (iLocal_1017 == joaat("windsor"))
							{
								unk_0x7170EF3CEB4D0224(iVar277, 0);
							}
							if (unk_0x724D816EA203A79E(iVar277) && unk_0xE59B7F5A03335350(iVar277, 0))
							{
								unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iVar277, -1);
								unk_0x55AFEE10B3CE5C2C(iVar277, 0f);
								unk_0x2CA123B0622F495C(iLocal_1017);
								if (func_116(iLocal_1017))
								{
									switch (iLocal_1017)
									{
										case joaat("marshall"):
											unk_0x7170EF3CEB4D0224(iVar277, iLocal_651);
											break;
										}
								}
								unk_0x1E7A09C1710FB071(&iVar277);
							}
							iLocal_1016 = 0;
						}
						else
						{
							bVar276 = false;
						}
					}
					if (!unk_0x719413B40BB63D86())
					{
					}
					else if (unk_0xF220370B0C08EC20())
					{
					}
					else
					{
						bVar276 = false;
					}
					if (bVar276)
					{
						if (unk_0x724D816EA203A79E(iLocal_1027) && unk_0xE59B7F5A03335350(iLocal_1027, 0))
						{
							iVar278 = func_49(24);
							if (func_278(&Local_776, 24))
							{
								func_273(&Local_776, func_457());
								if (unk_0x724D816EA203A79E(iVar278))
								{
									unk_0xCF6040807CC0E4A5(&iVar278);
								}
							}
							if (Local_402.f_0 == 21)
							{
								unk_0x6C5F5B5F6894CCE3(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
								unk_0x641B19E156645A92(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
								unk_0x019CE76D5286C95C(iLocal_1027, 154.4846f);
								func_271(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_402.f_0 == 22)
							{
								unk_0x6C5F5B5F6894CCE3(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
								unk_0x641B19E156645A92(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
								unk_0x019CE76D5286C95C(iLocal_1027, 319.6985f);
								func_271(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_402.f_0 == 23)
							{
								unk_0x6C5F5B5F6894CCE3(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
								unk_0x641B19E156645A92(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
								unk_0x019CE76D5286C95C(iLocal_1027, 270.8741f);
								func_271(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							unk_0xF0A40F19AAB79E88(iLocal_1027, 1084227584);
						}
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							iVar12 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
							if (unk_0x724D816EA203A79E(iVar12) && unk_0xE59B7F5A03335350(iVar12, 0))
							{
								unk_0x641B19E156645A92(iVar12, Local_546.f_66[1 /*3*/], 1, 0, 0, 1);
								unk_0x019CE76D5286C95C(iVar12, Local_402.f_29.f_77[0]);
								unk_0xF0A40F19AAB79E88(iVar12, 1084227584);
								if ((iLocal_1017 == joaat("monster") || iLocal_1017 == joaat("marshall")) || iLocal_1017 == joaat("rhino"))
								{
									unk_0x2487C8A04B65E2BD(iVar12, false);
								}
								else
								{
									unk_0x2487C8A04B65E2BD(iVar12, true);
								}
								if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
								{
									unk_0x92C13E9A4A1DA028(unk_0xBC25C936A095B5BA(), 0, 0, -1);
									unk_0xC3D5C68D28907D90(unk_0xBC25C936A095B5BA(), 1);
								}
								unk_0x4E87F356DA56EB3F(iVar12, 1);
								func_225(func_457(), &iVar12, 3, 1);
							}
							unk_0x829FA4611BD56B44(800);
							func_280(1, 1, 1, 0, 0);
							func_279(&(Local_546[3 /*15*/]), &(Local_402.f_110), &(Local_402.f_111));
							iLocal_1034 = 0;
							iLocal_1036 = -1;
							Local_402.f_3 = 15;
						}
						else
						{
							unk_0x4EA570997E107F35(sVar14);
							func_264();
							unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
							if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110))
							{
								unk_0x348665177DBFB93B(Local_402.f_110, 0);
								unk_0x4EC087603E1DEF9C(Local_402.f_110, 0);
							}
							if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_111))
							{
								unk_0x348665177DBFB93B(Local_402.f_111, 0);
								unk_0x4EC087603E1DEF9C(Local_402.f_111, 0);
							}
							if (unk_0x724D816EA203A79E(iLocal_1037))
							{
								unk_0xD434A01DEA38A939(iLocal_1037, 1, 0);
								unk_0x346478B12F69D4E3(iLocal_1037, 0);
								iLocal_1037 = 0;
							}
							unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
							unk_0x27CBA62D1F6DF074(8);
							unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
							unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
							unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), Local_402.f_29.f_77[1]);
							unk_0x829FA4611BD56B44(800);
							unk_0xC1B1E9A034A63A62(0);
							func_267(198.0043f, -999.7775f, -100f, 50f, 0);
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
							Local_402.f_3 = 16;
						}
						if (Local_402.f_3 != 16)
						{
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
						}
						unk_0x59B038076F830627(0);
						unk_0x43F06392C4EF25E0(0);
						unk_0xC1B1E9A034A63A62(0);
						unk_0xF3F01A78937DC905(0f);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
						iVar279 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar0, -1);
						iVar280 = 0;
						while (iVar280 < iVar279)
						{
							if ((unk_0x724D816EA203A79E(uVar0[iVar280]) && !unk_0x36CEFBE9B745A58D(uVar0[iVar280])) && unk_0x9488E18994C5C83D(uVar0[iVar280], unk_0x705BBFE5A8ADE4A9(unk_0xB5CEFD608600A09F())))
							{
								if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
								{
									iVar12 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
									if ((unk_0x724D816EA203A79E(iVar12) && unk_0xE59B7F5A03335350(iVar12, 0)) && unk_0x524ABB0435146845(iVar12) > iVar280)
									{
										unk_0xBD53A029D0155A42(uVar0[iVar280], iVar12, iVar280);
									}
								}
								else
								{
									unk_0xD5874E4A4BF782FC(uVar0[iVar280], Local_402.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar280++;
						}
						unk_0x27CBA62D1F6DF074(8);
						iLocal_1033 = 0;
					}
				}
				break;
			
			case 15:
				bVar281 = true;
				if (!unk_0x719413B40BB63D86())
				{
				}
				else if (unk_0xF220370B0C08EC20())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (func_266())
				{
				}
				else
				{
					bVar281 = false;
				}
				if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110) && unk_0xF448AA2D7E08A675(Local_402.f_110))
				{
					if (unk_0x16BE1286447174A9(Local_402.f_110))
					{
						bVar281 = false;
					}
					if (IntToFloat(unk_0x83666F9FB8FEBD4B()) <= (Local_546[3 /*15*/].f_14 * 1000f))
					{
						bVar281 = false;
					}
				}
				else if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_111) && unk_0xF448AA2D7E08A675(Local_402.f_111))
				{
					if (unk_0x16BE1286447174A9(Local_402.f_111))
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					func_256(unk_0xBC25C936A095B5BA(), Local_546.f_86[1 /*6*/], Local_546.f_66[1 /*3*/], ((Local_546[3 /*15*/].f_14 * 1000f) - 500f), Local_546.f_73[2 /*4*/], 3, &fVar13);
				}
				if (iLocal_1036 < 1 && func_224(unk_0xBC25C936A095B5BA(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_1036 == 0)
					{
						func_267(198.0043f, -999.7775f, -100f, 50f, 0);
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
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
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
				if (unk_0xBF697FA7422C0621(Local_402.f_112))
				{
					unk_0xB165D6ED2E977354(Local_402.f_112);
				}
				StringCopy(&Global_32627, "", 32);
				if (unk_0x719413B40BB63D86())
				{
					unk_0x13D5880CBA449AA9();
				}
				func_223(47, 1);
				func_221(47, 1);
				Global_69800.f_577 = 0;
				if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
				{
					unk_0x829FA4611BD56B44(250);
				}
				unk_0xC1B1E9A034A63A62(0);
				unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
				if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110))
				{
					unk_0x348665177DBFB93B(Local_402.f_110, 0);
					unk_0x4EC087603E1DEF9C(Local_402.f_110, 0);
				}
				if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_111))
				{
					unk_0x348665177DBFB93B(Local_402.f_111, 0);
					unk_0x4EC087603E1DEF9C(Local_402.f_111, 0);
				}
				if (unk_0x724D816EA203A79E(iLocal_1037))
				{
					unk_0xD434A01DEA38A939(iLocal_1037, 1, 0);
					unk_0x346478B12F69D4E3(iLocal_1037, 0);
					iLocal_1037 = 0;
				}
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iVar12 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0x724D816EA203A79E(iVar12) && unk_0xE59B7F5A03335350(iVar12, 0))
					{
						unk_0x641B19E156645A92(iVar12, Local_546.f_73[2 /*4*/], 1, 0, 0, 1);
						unk_0x019CE76D5286C95C(iVar12, Local_546.f_73[2 /*4*/].f_3);
						unk_0xF0A40F19AAB79E88(iVar12, 1084227584);
						unk_0xF3F01A78937DC905(0f);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
					}
				}
				unk_0x59B038076F830627(1);
				unk_0x43F06392C4EF25E0(1);
				func_280(0, 1, 1, 0, 0);
				unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
				if (iLocal_1012 > 0)
				{
					unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), iLocal_1012, 0);
					unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
				}
				if (((unk_0x724D816EA203A79E(iLocal_1027) && unk_0x5CAE759AE8219D20(iLocal_1027)) && unk_0xB248FAA35ED47DB9(iLocal_1027, 0)) && iLocal_1027 != func_49(24))
				{
					unk_0x1E7A09C1710FB071(&iLocal_1027);
				}
				unk_0x7CB6FD92BE491AD9(&(Local_674.f_9), 25);
				iLocal_1031 = 0;
				Local_402.f_3 = 18;
				break;
			
			case 18:
				if (unk_0x726D9204B160D23E())
				{
					Local_402.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_69800.f_577)
		{
			func_223(47, 1);
			func_221(47, 1);
			Global_69800.f_577 = 0;
		}
		Local_402.f_3 = 0;
		if (iLocal_656 != -1)
		{
			func_69(&iLocal_656);
		}
	}
	if (Global_69800.f_577)
	{
		unk_0xD74FE6777694F41E();
		func_220();
		func_76(0);
		unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), 1);
		unk_0xD55638CE45B2B948(2, 202);
		unk_0xBBC4195AD74D153D(0, 37, 1);
		unk_0xBBC4195AD74D153D(0, 157, 1);
		unk_0xBBC4195AD74D153D(0, 158, 1);
		unk_0xBBC4195AD74D153D(0, 159, 1);
		unk_0xBBC4195AD74D153D(0, 160, 1);
		unk_0xBBC4195AD74D153D(0, 161, 1);
		unk_0xBBC4195AD74D153D(0, 162, 1);
		unk_0xBBC4195AD74D153D(0, 163, 1);
		unk_0xBBC4195AD74D153D(0, 164, 1);
		unk_0xBBC4195AD74D153D(0, 165, 1);
		unk_0xBBC4195AD74D153D(0, 14, 1);
		unk_0xBBC4195AD74D153D(0, 15, 1);
		unk_0xBBC4195AD74D153D(0, 53, 1);
		unk_0xBBC4195AD74D153D(0, 54, 1);
		unk_0xBBC4195AD74D153D(0, 140, 1);
		unk_0xBBC4195AD74D153D(0, 141, 1);
		unk_0xBBC4195AD74D153D(0, 142, 1);
		unk_0xBBC4195AD74D153D(0, 143, 1);
		unk_0xBBC4195AD74D153D(0, 143, 1);
		unk_0xBBC4195AD74D153D(0, 47, 1);
		unk_0xBBC4195AD74D153D(0, 38, 1);
		unk_0xBBC4195AD74D153D(0, 22, 1);
		unk_0xBBC4195AD74D153D(0, 102, 1);
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
		unk_0xBBC4195AD74D153D(0, 92, 1);
		unk_0xBBC4195AD74D153D(0, 99, 1);
		unk_0xBBC4195AD74D153D(0, 115, 1);
		unk_0xBBC4195AD74D153D(0, 46, 1);
		unk_0xBBC4195AD74D153D(0, 25, 1);
	}
	if (!bVar11 && Local_402.f_2 == 0)
	{
		if (unk_0xF16DAFF595E80F7C())
		{
			if (!unk_0xF1734B55490E9045(&cLocal_1023))
			{
				if ((((func_209("WEB_VEH_INV") || func_209("WEB_VEH_FULL")) || func_209("CAR_GAR_05")) || func_209("CAR_GAR_06")) || func_209("CAR_GAR_EXIT"))
				{
					unk_0x7456702622C62EA0(1);
				}
				StringCopy(&cLocal_1023, "", 16);
			}
		}
	}
}

void func_220()
{
	Global_17206.f_6 = 1;
}

void func_221(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_222(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_31683[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_31683[Var0.f_1]), Var0.f_0);
	}
}

struct<2> func_222(var uParam0)
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

void func_223(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_222(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_31676[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_31676[Var0.f_1]), Var0.f_0);
	}
}

float func_224(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Param1, iParam4);
}

void func_225(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_25(iParam0) && unk_0x724D816EA203A79E(*iParam1)) && unk_0xE59B7F5A03335350(*iParam1, 0))
	{
		if (iParam2 > Global_105220.f_2354.f_539.f_2387)
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
		if (unk_0xA6BE0954FC6BAA16(*iParam1) != 0)
		{
			unk_0x1345B3BF11EDB0CF(*iParam1, 0);
		}
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/] = unk_0x6F79ECA8C83E4357(*iParam1);
		if (unk_0xA6705B5DA0B723DE(*iParam1, &iVar1))
		{
			Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x6F79ECA8C83E4357(iVar1);
		}
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x49C9CB91F370BC53(*iParam1);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x8D66276473ABD7CC(*iParam1);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0xFC8A228C62614C5C(*iParam1, 1);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0xFC8A228C62614C5C(*iParam1, 2);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0xFC8A228C62614C5C(*iParam1, 3);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0xFC8A228C62614C5C(*iParam1, 4);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0xFC8A228C62614C5C(*iParam1, 5);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0xFC8A228C62614C5C(*iParam1, 6);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0xFC8A228C62614C5C(*iParam1, 7);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0xFC8A228C62614C5C(*iParam1, 8);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0xFC8A228C62614C5C(*iParam1, 9);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0xFC8A228C62614C5C(*iParam1, 10);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0xFC8A228C62614C5C(*iParam1, 11);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0xFC8A228C62614C5C(*iParam1, 12);
		if (unk_0x6DB86B1ADD81CED4(*iParam1, 0))
		{
			iVar2 = unk_0xAA1A0B747CDFC807(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x93DD0CE3F3963C56();
		StringCopy(&(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x2232934AD664DD49(*iParam1), 16);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x89FC8F09D6647DEC(*iParam1);
		unk_0x87F182D2DA225F0D(*iParam1, &(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x375E42DA279E7FED(*iParam1, &(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x5F73107BDF663316(*iParam1, &(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0xB830044A99FABAAF(*iParam1);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x2629793241883F74(*iParam1);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x0FF608FD384AF8FA(*iParam1);
		Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0xC2587DF549B15BB6(*iParam1);
		unk_0x2774857472EBCE0F(*iParam1, &(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0xFF7612EE8C5F1E19(*iParam1, 2))
		{
			unk_0xF0059F27F7BB6680(&(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(*iParam1, 3))
		{
			unk_0xF0059F27F7BB6680(&(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(*iParam1, 0))
		{
			unk_0xF0059F27F7BB6680(&(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(*iParam1, 1))
		{
			unk_0xF0059F27F7BB6680(&(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_105220.f_2354.f_539.f_4297[iParam0] = 10;
		if (unk_0x1092AA16A9506AA1(*iParam1) >= 0 && func_228(*iParam1, 0, &uVar0))
		{
			func_34(iParam1, &(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_105220.f_20089[iParam0 /*43*/].f_40 = 1;
				Global_105220.f_20089[iParam0 /*43*/] = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/];
				Global_105220.f_20089[iParam0 /*43*/].f_3 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_105220.f_20089[iParam0 /*43*/].f_4 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_105220.f_20089[iParam0 /*43*/].f_5 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_105220.f_20089[iParam0 /*43*/].f_6 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_105220.f_20089[iParam0 /*43*/].f_10 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_105220.f_20089[iParam0 /*43*/].f_16 = !Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_105220.f_20089[iParam0 /*43*/].f_19 = { Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_105220.f_20089[iParam0 /*43*/].f_23 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_105220.f_20089[iParam0 /*43*/].f_7 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_105220.f_20089[iParam0 /*43*/].f_8 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_105220.f_20089[iParam0 /*43*/].f_9 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_105220.f_20089[iParam0 /*43*/].f_11 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_105220.f_20089[iParam0 /*43*/].f_12 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_105220.f_20089[iParam0 /*43*/].f_13 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_105220.f_20089[iParam0 /*43*/].f_14 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_105220.f_20089[iParam0 /*43*/].f_15 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_105220.f_20089[iParam0 /*43*/].f_18 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_105220.f_20089[iParam0 /*43*/].f_17 = Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_105220.f_20089[iParam0 /*43*/].f_24 = unk_0x34374BDFA570F489(*iParam1, 11) + 1;
				Global_105220.f_20089[iParam0 /*43*/].f_25 = unk_0x34374BDFA570F489(*iParam1, 12) + 1;
				Global_105220.f_20089[iParam0 /*43*/].f_26 = unk_0x34374BDFA570F489(*iParam1, 4) + 1;
				Global_105220.f_20089[iParam0 /*43*/].f_27 = unk_0x34374BDFA570F489(*iParam1, 23) + 1;
				Global_105220.f_20089[iParam0 /*43*/].f_28 = unk_0x34374BDFA570F489(*iParam1, 14) + 1;
				Global_105220.f_20089[iParam0 /*43*/].f_29 = unk_0x34374BDFA570F489(*iParam1, 16) + 1;
				Global_105220.f_20089[iParam0 /*43*/].f_30 = unk_0x34374BDFA570F489(*iParam1, 15) + 1;
				Global_105220.f_20089[iParam0 /*43*/].f_32 = unk_0xE0ED9CF8FA3974E1(*iParam1);
				Global_105220.f_20089[iParam0 /*43*/].f_33[0] = unk_0xC28362974F1C5F02(*iParam1);
				Global_105220.f_20089[iParam0 /*43*/].f_33[1] = unk_0x9CC28989969C6738(*iParam1, 14, 0);
				Global_105220.f_20089[iParam0 /*43*/].f_33[2] = unk_0x9CC28989969C6738(*iParam1, 14, 1);
				Global_105220.f_20089[iParam0 /*43*/].f_33[3] = unk_0x9CC28989969C6738(*iParam1, 14, 2);
				Global_105220.f_20089[iParam0 /*43*/].f_33[4] = unk_0x9CC28989969C6738(*iParam1, 14, 3);
				Global_105220.f_20089[iParam0 /*43*/].f_39 = unk_0x9F1E01FDF55720DC(*iParam1);
				Global_105220.f_20089[iParam0 /*43*/].f_31 = func_227(*iParam1);
				Global_105220.f_20089[iParam0 /*43*/].f_33[0] = unk_0x46223EA23DD520FE(*iParam1);
				unk_0x2FE0800842DB5EF4(*iParam1, &iVar4, &uVar5, &uVar6);
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
				func_226(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_105220.f_20089[iParam0 /*43*/].f_1));
				unk_0x033614E4CFF449DB(*iParam1, &iVar4, &uVar5);
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
				func_226(Global_105220.f_2354.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_105220.f_20089[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_226(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_140(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
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

float func_227(int iParam0)
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
	if ((unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0x1092AA16A9506AA1(iParam0) >= 0)
	{
		if (unk_0x9F1E01FDF55720DC(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x9F1E01FDF55720DC(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x9F1E01FDF55720DC(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x9F1E01FDF55720DC(iParam0) == 0)
		{
			if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iParam0)))
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

int func_228(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	if ((!func_251(iVar0, bParam1, uParam2) && !func_250(unk_0xB5CEFD608600A09F())) && !func_235(iParam0))
	{
		return 0;
	}
	if (func_250(unk_0xB5CEFD608600A09F()))
	{
		if (func_234(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_233(unk_0xB5CEFD608600A09F()) && (unk_0x8C1A6E7D5F410F4A(iVar0) || unk_0xA19D269B4B5A1532(iVar0)))
	{
		bVar1 = true;
	}
	if (((((((unk_0x10A01B0B02B273EF(iParam0) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("halftrack")) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("phantom3")) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("hauler2")) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("trailerlarge")) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("trailersmall2")) && !bVar1) && !(func_232(unk_0x6F79ECA8C83E4357(iParam0)) && func_229(unk_0xB5CEFD608600A09F())))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		if ((func_62(iParam0) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("sentinel2")) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_229(int iParam0)
{
	if (iParam0 != func_149())
	{
		if (func_231(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_230(Global_2423644[iParam0 /*406*/].f_305.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_230(int iParam0)
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
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
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
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
	}
	return -1;
}

int func_231(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_232(int iParam0)
{
	if (((iParam0 == joaat("mule4") || iParam0 == joaat("pounder2")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)
{
	if (iParam0 != func_149())
	{
		if (func_231(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_230(Global_2423644[iParam0 /*406*/].f_305.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_234(int iParam0)
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

int func_235(int iParam0)
{
	if (func_249(unk_0xB5CEFD608600A09F()) || func_248(unk_0xB5CEFD608600A09F()))
	{
		if (func_236(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0)
{
	if ((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return 0;
	}
	if (func_239(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x3C03CFD5DD1E2D97(iParam0, "Player_Vehicle"))
	{
		if (unk_0x67CFC62D543B19EF(iParam0, "Player_Vehicle") == unk_0x6985F05381EF147F(unk_0xB5CEFD608600A09F()))
		{
			if (func_237(iParam0))
			{
				return 1;
			}
			switch (unk_0x6F79ECA8C83E4357(iParam0))
			{
				case joaat("ardent"):
				case joaat("nightshark"):
				case joaat("deluxo"):
				case joaat("stromberg"):
				case joaat("comet4"):
				case joaat("revolter"):
				case joaat("savestra"):
				case joaat("viseris"):
				case joaat("caracara"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_237(int iParam0)
{
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	if (func_238(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)
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
		case joaat("menacer"):
		case joaat("scramjet"):
			return 1;
			break;
	}
	return 0;
}

int func_239(int iParam0, bool bParam1)
{
	switch (unk_0x6F79ECA8C83E4357(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_241(unk_0x6F79ECA8C83E4357(iParam0), 0))
			{
				if (Global_2519572.f_290 == iParam0)
				{
					return 1;
				}
				else if (func_240(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_240(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2436641.f_623[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_241(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_247(iParam0, 0))
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
			return func_246();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_13594)
			{
				return func_245();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_13595)
			{
				return func_245();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_13593)
			{
				return func_245();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_13596)
			{
				return func_245();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_13598)
			{
				return func_245();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_244();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18039)
			{
				return func_243();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18041)
			{
				return func_243();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18045)
			{
				return func_243();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18042)
			{
				return func_243();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18049)
			{
				return func_243();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18047)
			{
				return func_243();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18052)
			{
				return func_243();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_19995)
			{
				return func_242();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_19996)
			{
				return func_242();
			}
			break;
	}
	return 0;
}

bool func_242()
{
	return unk_0x7B2F21BFE86AEB61(joaat("mpgunrunning"));
}

bool func_243()
{
	return unk_0x7B2F21BFE86AEB61(joaat("mpimportexport"));
}

bool func_244()
{
	return unk_0x7B2F21BFE86AEB61(joaat("mpjanuary2016"));
}

bool func_245()
{
	return unk_0x7B2F21BFE86AEB61(joaat("mplowrider2"));
}

bool func_246()
{
	return unk_0x7B2F21BFE86AEB61(joaat("mplowrider"));
}

int func_247(int iParam0, int iParam1)
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
			if (!Global_262145.f_13594)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13595)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13593)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13596)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13598)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13597)
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
			if (Global_262145.f_18039)
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
			if (Global_262145.f_18041)
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
			if (Global_262145.f_18045)
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
			if (Global_262145.f_18042)
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
			if (Global_262145.f_18049)
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
			if (Global_262145.f_18047)
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
			if (Global_262145.f_18052)
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
			if (Global_262145.f_19995)
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
			if (Global_262145.f_19996)
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

int func_248(int iParam0)
{
	if (iParam0 != func_149())
	{
		if (func_231(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_149())
			{
				return func_230(Global_2423644[iParam0 /*406*/].f_305.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_249(int iParam0)
{
	if (iParam0 != func_149())
	{
		if (func_231(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_149())
			{
				return func_230(Global_2423644[iParam0 /*406*/].f_305.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_250(int iParam0)
{
	if (iParam0 != func_149())
	{
		if (func_231(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_230(Global_2423644[iParam0 /*406*/].f_305.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_251(int iParam0, bool bParam1, var uParam2)
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
	if (func_233(unk_0xB5CEFD608600A09F()) && (unk_0x8C1A6E7D5F410F4A(iParam0) || unk_0xA19D269B4B5A1532(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!unk_0x7C28D15641461C68(iParam0) && !unk_0x7512ED01F3F46714(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && !bVar0)
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
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_252(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_252(int iParam0)
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

int func_253()
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (iVar0 == Global_69800.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_69800.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_69800.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_69800.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_69800.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_69800.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_69800.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_69800.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_69800.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_69800.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_69800.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_69800.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_254()
{
	return unk_0x105601648511CC64() <= Global_17345.f_5745 + 100;
}

void func_255(int iParam0)
{
	if ((unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0)) && iParam0 == Global_70705)
	{
		Global_105220.f_32546.f_5588 = 0;
		Global_70705 = 0;
	}
}

int func_256(int iParam0, struct<4> Param1, var uParam5, var uParam6, struct<3> Param7, float fParam10, struct<4> Param11, int iParam15, float fParam16)
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
		iVar12 = unk_0x9FE9D386222EEE47(iParam0, 0);
		iLocal_1037 = iVar12;
		unk_0x127F627F30266DD9(iLocal_1037, 1);
		unk_0xD421BC740C5340C3(iLocal_1037, 1);
		unk_0xF0A40F19AAB79E88(iLocal_1037, 1084227584);
		unk_0x2D655AA68FA1736B(iLocal_1037, 1, 1, 0);
		if (unk_0x5CFC8E6CC224744A(iParam0))
		{
			unk_0x92C13E9A4A1DA028(iParam0, 0, 0, -1);
			unk_0xC3D5C68D28907D90(iParam0, 1);
		}
		Var13 = { unk_0x541C2AEF053615BC(iLocal_1037, 1) };
		fLocal_1038 = (Var13.f_2 - Var0.f_2);
		unk_0x641B19E156645A92(iLocal_1037, Var0 + Vector(-10f, 0f, 0f), 1, 0, 0, 1);
		if (unk_0xE59B7F5A03335350(iLocal_1037, 0))
		{
			unk_0x93D3868AE0D83B7C(iLocal_1037, 3);
		}
		iLocal_1039 = unk_0x105601648511CC64();
		iLocal_1033 = 1;
	}
	if (iLocal_1033 == 1)
	{
		if (unk_0x724D816EA203A79E(iLocal_1037) && unk_0xE59B7F5A03335350(iLocal_1037, 0))
		{
			fVar16 = unk_0xBBDA792448DB5A89(iLocal_1039);
			fVar17 = (fVar16 + fParam10);
			fVar18 = func_263(unk_0xBBDA792448DB5A89(unk_0x105601648511CC64()), fVar16, fVar17);
			fVar18 = (fVar18 - fVar16);
			fVar18 = (fVar18 / fParam10);
			if (iParam15 == 1)
			{
				fVar18 = func_262(fVar18);
			}
			else if (iParam15 == 2)
			{
				fVar18 = func_261(fVar18);
			}
			else if (iParam15 == 3)
			{
				fVar18 = func_259(fVar18);
			}
			fVar18 = (fVar18 * fParam10);
			fVar18 = (fVar18 + fVar16);
			unk_0xBBC4195AD74D153D(0, 72, 1);
			unk_0xD5874E4A4BF782FC(iLocal_1037, func_257(Var0 + Vector(fLocal_1038, 0f, 0f), Var6 + Vector(fLocal_1038, 0f, 0f), fVar16, fVar17, fVar18), 0, 0, 1);
			if (iLocal_1034 && !unk_0x5CFC8E6CC224744A(iParam0))
			{
				unk_0x784C605D172817C8(iLocal_1037, func_257((0f - Var3.f_0), (0f - Var3.f_1), (Var3.f_2 + 180f), (0f - Var9.f_0), (0f - Var9.f_1), (Var9.f_2 + 180f), fVar16, fVar17, fVar18), 2, 1);
			}
			else
			{
				if (!unk_0x36CEFBE9B745A58D(iParam0))
				{
					if (unk_0x5CFC8E6CC224744A(iParam0))
					{
						unk_0x2E9860A2B72187F5(iParam0, 236, 1);
						unk_0x2E9860A2B72187F5(iParam0, 309, 1);
					}
				}
				unk_0x784C605D172817C8(iLocal_1037, func_257(Var3, Var9, fVar16, fVar17, fVar18), 2, 1);
			}
			unk_0xD434A01DEA38A939(iLocal_1037, 0, 0);
			unk_0x346478B12F69D4E3(iLocal_1037, 1);
		}
		else
		{
			iLocal_1033 = 2;
			return 0;
		}
		if (unk_0xBBDA792448DB5A89(unk_0x105601648511CC64()) > (unk_0xBBDA792448DB5A89(iLocal_1039) + fParam10) && unk_0xBBDA792448DB5A89(unk_0x105601648511CC64()) > ((unk_0xBBDA792448DB5A89(iLocal_1039) + fParam10) + 2600f))
		{
			iLocal_1033 = 2;
			return 0;
		}
	}
	if (iLocal_1033 == 2)
	{
		unk_0x2E9860A2B72187F5(iParam0, 236, 0);
		unk_0x2E9860A2B72187F5(iParam0, 309, 0);
		if (unk_0x724D816EA203A79E(iLocal_1037))
		{
			if (!func_21(Param11, 0f, 0f, 0f, 0))
			{
				unk_0x641B19E156645A92(iLocal_1037, Param11, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(iLocal_1037, Param11.f_3);
				unk_0xF0A40F19AAB79E88(iLocal_1037, 1084227584);
			}
			unk_0xD434A01DEA38A939(iLocal_1037, 1, 0);
			unk_0x346478B12F69D4E3(iLocal_1037, 0);
			iLocal_1037 = 0;
		}
		if (unk_0x5CFC8E6CC224744A(iParam0))
		{
			unk_0x9965F1612928953B(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_257(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_258(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_258(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_258(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_258(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_259(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = unk_0x0BADBFA3B172435F(func_260(((fParam0 * 3.141593f) * 0.5f)));
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

float func_260(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_261(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - unk_0xD0FFB162F40A139C(func_260(((fParam0 * 3.141593f) * 0.5f))));
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

float func_262(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - unk_0xD0FFB162F40A139C(func_260((fParam0 * 3.141593f)))));
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

float func_263(float fParam0, float fParam1, float fParam2)
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

void func_264()
{
	Global_69800.f_553 = 1;
	Global_69800.f_554 = 0;
}

void func_265(var uParam0)
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
		iLocal_117[iVar2] = Global_105220.f_32546.f_69[iVar1 /*78*/].f_66;
		if (iLocal_117[iVar2] != 0)
		{
			if (!unk_0xFA30DFD0084E92FE(uLocal_48[iVar2], 2))
			{
				unk_0xF243B7A14FCFD0F4(iLocal_117[iVar2]);
				unk_0xF0059F27F7BB6680(&(uLocal_48[iVar2]), 2);
				func_461(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_266()
{
	return !Global_69800.f_553;
}

void func_267(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_61(&(Global_69800.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xF0F2FC9DE291567F(Param0, Global_69800.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_268(iVar0);
			}
		}
		iVar0++;
	}
}

void func_268(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_61(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0xE59B7F5A03335350(Global_69800.f_139[iParam0], 0))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_69800.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x77815D3407C6700D(Global_69800.f_139[iParam0], 1, 1);
				unk_0xCF6040807CC0E4A5(&(Global_69800.f_139[iParam0]));
			}
		}
		Global_69800[iParam0] = 1;
		if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_67(iParam0, 0)) && Global_70709.f_66 == 0) && Global_105220.f_32546.f_1958[Global_69800.f_555[0 /*21*/].f_14] != 0) && Global_105220.f_32546.f_1958[Global_69800.f_555[0 /*21*/].f_14] > 3) && (!func_269(0, Global_69800.f_555[0 /*21*/].f_12) || !func_269(1, Global_69800.f_555[0 /*21*/].f_12)))
			{
				func_114(&(Global_105220.f_32546.f_69[Global_69800.f_555[0 /*21*/].f_14 /*78*/]), &Global_70709);
				Global_70787 = Global_105220.f_32546.f_5591;
			}
			func_463(iParam0, 0);
		}
	}
}

int func_269(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_270(&(Global_105220.f_32546.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_39(Global_105220.f_32546.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_270(var uParam0)
{
	return *uParam0;
}

void func_271(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x724D816EA203A79E(Global_69800.f_484[25]) && unk_0xE59B7F5A03335350(Global_69800.f_484[25], 0))
			{
				if (Global_69800.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x10A01B0B02B273EF(iParam0) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("bus")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_272(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_32(iParam0, &Var0);
		if (func_21(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x541C2AEF053615BC(iParam0, 1) };
			fParam4 = unk_0x349C94FFF43E2979(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) != joaat("vehicle_gen_controller"))
			{
				Global_70788 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
			}
		}
		func_113(iParam5, &Var0, Param1, fParam4, func_46(iParam0));
		func_30(iParam5, iParam0, 0);
	}
}

void func_272(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_115(iParam0);
	func_463(iParam0, 0);
}

int func_273(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_38(uParam0->f_66))
	{
		return 0;
	}
	if (unk_0x724D816EA203A79E(Global_70706))
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
	if (!func_269(0, iParam1))
	{
		Global_105220.f_32546.f_5592[iVar0] = 0;
	}
	else if (!func_269(1, iParam1))
	{
		Global_105220.f_32546.f_5592[iVar0] = 1;
	}
	func_274(iParam1, unk_0xD8D56586882095EE(uParam0->f_66));
	func_114(uParam0, &(Global_105220.f_32546.f_5038[iVar0 /*157*/][Global_105220.f_32546.f_5592[iVar0] /*78*/]));
	Global_105220.f_32546.f_5592[iVar0]++;
	if (Global_105220.f_32546.f_5592[iVar0] >= func_270(&(Global_105220.f_32546.f_5038[iVar0 /*157*/])))
	{
		Global_105220.f_32546.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_92424[iVar0 /*98*/] == uParam0->f_66 && unk_0x3362CDE8460ED38B(&(Global_92424[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_92424[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_274(int iParam0, char* sParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_105220.f_32546.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_275("IMPOUND_HELPM", sParam1, 2, unk_0x491B2241281A03B7(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_275("IMPOUND_HELPF", sParam1, 2, unk_0x491B2241281A03B7(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_275("IMPOUND_HELPT", sParam1, 2, unk_0x491B2241281A03B7(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_105220.f_32546.f_5596[iParam0] = 1;
	}
}

void func_275(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_276(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_276(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3362CDE8460ED38B(sParam0, ""))
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
	while (iVar0 < Global_105220.f_20381.f_145)
	{
		if (unk_0x3362CDE8460ED38B(&(Global_105220.f_20381[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_105220.f_20381.f_145 < 9)
	{
		StringCopy(&(Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_4), sParam1, 16);
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_8 = (unk_0x105601648511CC64() + iParam3);
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_9 = iParam5;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_11 = iParam6;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_12 = uParam2;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_13 = iParam7;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_14 = iParam8;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_10 = ((unk_0x105601648511CC64() + iParam3) + iParam4);
		}
		else
		{
			Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_10 = -1;
		}
		Global_105220.f_20381.f_145++;
		func_277();
	}
}

void func_277()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_105220.f_20381.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_105220.f_20381.f_145)
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 0))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[0])
			{
				Global_105220.f_20381.f_146[0] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 1))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[1])
			{
				Global_105220.f_20381.f_146[1] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 2))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[2])
			{
				Global_105220.f_20381.f_146[2] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_278(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_61(&(Global_69800.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_114(&(Global_105220.f_32546.f_69[Global_69800.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

int func_279(var uParam0, var uParam1, var uParam2)
{
	if (unk_0xEF0E25DA0CB6E8FF(*uParam1))
	{
		unk_0x4EC087603E1DEF9C(*uParam1, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(*uParam2))
	{
		unk_0x4EC087603E1DEF9C(*uParam2, 0);
	}
	*uParam1 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", 0);
	*uParam2 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", 0);
	if (unk_0xEF0E25DA0CB6E8FF(*uParam1) && unk_0xEF0E25DA0CB6E8FF(*uParam2))
	{
		unk_0x6125108F6208C1F6(*uParam1, *uParam0);
		unk_0x3553F2A72957724E(*uParam1, uParam0->f_3, 2);
		unk_0x9DF315A9EFFF87AC(*uParam1, uParam0->f_12);
		unk_0x6125108F6208C1F6(*uParam2, uParam0->f_6);
		unk_0x3553F2A72957724E(*uParam2, uParam0->f_6.f_3, 2);
		unk_0x9DF315A9EFFF87AC(*uParam2, uParam0->f_12);
		unk_0x2FB83B8BD6C05FD2(*uParam1, "HAND_SHAKE", uParam0->f_13);
		unk_0x2FB83B8BD6C05FD2(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			unk_0xAE099C1ADC89C331(*uParam2, *uParam1, unk_0xF2DB717A73826179((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			unk_0x348665177DBFB93B(*uParam1, 1);
		}
		unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_280(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_285(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_14493.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(0);
			}
			if (!func_78())
			{
				Global_14493.f_1 = 3;
			}
			Global_15800 = 5;
		}
		func_284(1, iParam3, iParam2, 0);
		Global_55973 = 1;
		Global_68283 = 1;
		Global_70976 = 1;
	}
	else
	{
		func_285(0);
		unk_0xCB50D125C355ED9C();
		Global_55973 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_284(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_282(unk_0xB5CEFD608600A09F())) && !func_91(unk_0xB5CEFD608600A09F(), 0)) && !func_281()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_282(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
		}
		Global_70976 = 0;
	}
}

bool func_281()
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18, 14);
}

int func_282(int iParam0)
{
	if (func_91(iParam0, 0))
	{
		return 1;
	}
	if (func_283())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_191, 2))
	{
		return 1;
	}
	return 0;
}

bool func_283()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

int func_284(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && uParam2)
		{
			unk_0x22506029183A78EC(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_285(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 13);
	}
}

int func_286(int iParam0)
{
	func_61(&(Global_69800.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_69800.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_287(26))
			{
				return 26;
			}
			if (!func_287(29))
			{
				return 29;
			}
			if (!func_287(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_69800.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_287(27))
			{
				return 27;
			}
			if (!func_287(30))
			{
				return 30;
			}
			if (!func_287(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_69800.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_287(28))
			{
				return 28;
			}
			if (!func_287(31))
			{
				return 31;
			}
			if (!func_287(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_287(int iParam0)
{
	return func_67(iParam0, 0);
}

void func_288(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_290(iParam0, &iVar1);
	if (!unk_0x3362CDE8460ED38B("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x00BCFC51EF781989(iVar1))
			{
				return;
			}
			if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == iVar1)
			{
				func_221(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x00BCFC51EF781989(iVar1))
			{
				return;
			}
			if (func_289(iParam0))
			{
				func_221(iParam0, 0);
			}
		}
		unk_0xAA5EF3021E488A5D(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_289(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_222(iParam0) };
	if (Var0.f_1 != -1 && unk_0xFA30DFD0084E92FE(Global_31683[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

var func_290(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_291(iParam0) };
	*iParam1 = unk_0x5E29F9399E0829A3(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_291(int iParam0)
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
			Var5 = { func_292(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_292(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_292(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_292(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_292(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_292(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_292(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049673[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_292(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_292(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_292(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_292(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_292(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_292(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_292(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_292(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_292(43, 0) };
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
			Var5 = { func_292(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_292(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_292(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_292(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_292(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_292(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_292(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_292(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_292(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_292(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_292(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_292(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_292(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_292(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_292(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_292(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_292(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_292(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_292(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_292(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_292(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_292(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_292(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_292(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_292(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_292(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_292(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_292(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_292(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_292(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_292(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_292(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_292(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_292(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_292(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_292(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_292(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_292(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_292(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_292(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_292(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_292(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_292(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_292(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_292(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_292(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_292(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_292(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_292(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_292(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_292(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_292(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_292(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_292(112, 1) };
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
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_292(int iParam0, bool bParam1)
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

void func_293(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_290(iParam0, &iVar1);
	if (!unk_0x3362CDE8460ED38B("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0xA30B063D74E02747(iVar1))
		{
			if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == iVar1)
			{
				func_223(iParam0, 1);
				return;
			}
			unk_0xE9B3EA654865E5A7(iVar1, 1);
		}
		else if (!bParam1 && unk_0xA30B063D74E02747(iVar1))
		{
			if (func_294(iParam0))
			{
				func_223(iParam0, 0);
			}
			unk_0xE9B3EA654865E5A7(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_294(iParam0))
			{
				func_223(iParam0, 0);
			}
		}
	}
}

int func_294(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_222(iParam0) };
	if (Var0.f_1 != -1 && unk_0xFA30DFD0084E92FE(Global_31676[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

int func_295()
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || func_286(Local_402.f_0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_296(float fParam0, float fParam1, float fParam2)
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

int func_297(int iParam0)
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

int func_298(int iParam0, var uParam1)
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

int func_299()
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_90578.f_44 == 1;
	}
	return 0;
}

void func_300()
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
	
	if ((((((unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_672))
	{
		return;
	}
	if (!Global_68280)
	{
		if (Global_105220.f_32546.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] != -15)
		{
			if (!Global_69800[Global_105220.f_32546.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]])
			{
				if (func_352(func_50(), Global_105220.f_32546.f_1982[iLocal_672 /*939*/].f_626[iLocal_855]))
				{
					iVar0 = Global_105220.f_32546.f_1982[iLocal_672 /*939*/][iLocal_855];
					func_350(iVar0, iLocal_855, iLocal_672);
					func_61(&Var1, Global_105220.f_32546.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_463(Global_105220.f_32546.f_1982[iLocal_672 /*939*/].f_313[iLocal_855], 1);
					}
					Global_105220.f_32546.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] = -15;
				}
			}
		}
		iLocal_855++;
		if (iLocal_855 >= 312)
		{
			iLocal_855 = 0;
		}
	}
	if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) != Local_402.f_7 || Local_402.f_2 == 99)
	{
		if (Local_402.f_5 != -1)
		{
			func_69(&(Local_402.f_5));
		}
		if (Local_402.f_2 > 0)
		{
			unk_0x7456702622C62EA0(1);
		}
		Local_402.f_7 = unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA());
		Local_402.f_5 = -1;
		Local_402.f_2 = 0;
		Local_402.f_4 = 0;
		if (bLocal_854)
		{
			if (unk_0xF16DAFF595E80F7C())
			{
				unk_0x7456702622C62EA0(1);
			}
			unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
			if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110))
			{
				unk_0x348665177DBFB93B(Local_402.f_110, 0);
				unk_0x4EC087603E1DEF9C(Local_402.f_110, 0);
			}
			if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_111))
			{
				unk_0x348665177DBFB93B(Local_402.f_111, 0);
				unk_0x4EC087603E1DEF9C(Local_402.f_111, 0);
			}
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), 1, 0);
			unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 0);
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
				unk_0x0B55204F721A7EA1(unk_0xB5CEFD608600A09F(), 0);
			}
			iVar22 = unk_0x3E12B546F3F2597A();
			if (unk_0x724D816EA203A79E(iVar22) && unk_0xE59B7F5A03335350(iVar22, 0))
			{
				unk_0xDC078F87049ECECE(iVar22, 1, 0);
				unk_0x346478B12F69D4E3(iVar22, 0);
				if (unk_0xB248FAA35ED47DB9(iVar22, 1))
				{
					unk_0x1E7A09C1710FB071(&iVar22);
				}
			}
			iVar23 = 5000;
			iVar24 = unk_0x105601648511CC64();
			while (!unk_0xAE9335ADE2B33DFC() && (unk_0x105601648511CC64() - iVar24) < iVar23)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (unk_0xBF697FA7422C0621(Local_402.f_112))
			{
				unk_0xB165D6ED2E977354(Local_402.f_112);
			}
			StringCopy(&Global_32627, "", 32);
			if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
			{
				func_293(47, 1);
				func_288(47, 1);
			}
			unk_0x13D5880CBA449AA9();
			unk_0x7A89E6B582BCD8C2();
			unk_0x59B038076F830627(1);
			unk_0x43F06392C4EF25E0(1);
			func_280(0, 1, 1, 0, 0);
			bLocal_854 = false;
			Global_25531 = 0;
		}
	}
	bVar25 = false;
	if ((((((((((((!bLocal_854 && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0)) || (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && !Local_402.f_29.f_69)) || (!unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))) || (!bLocal_854 && func_67(Local_402.f_0, 5))) || (!bLocal_854 && unk_0x694514BD37EC4E94(2, 199))) || (!bLocal_854 && unk_0xE186ACC7BE9B244E())) || !func_348(0)) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x3BFD283B5133A140(unk_0xBC25C936A095B5BA())) || unk_0x6C02DCF0A777D97F(unk_0xBC25C936A095B5BA())) || Global_25427) || (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0xA4813477CC5DD00F(unk_0xBC25C936A095B5BA())))
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
			if ((((Local_402.f_0 != -1 && func_67(Local_402.f_0, 0)) && !func_67(Local_402.f_0, 5)) && !bLocal_1015) && !bVar25)
			{
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_402.f_29, Local_402.f_29.f_3, Local_402.f_29.f_6, 0, 1, 0) && !unk_0xF16DAFF595E80F7C())
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_01", 16);
					func_210(&(Local_402.f_5), 3, &cVar26, 0, 0, 0, 0);
					Local_402.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_205(Local_402.f_5, 1))
			{
				if (func_347(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = unk_0x105601648511CC64();
					func_69(&(Local_402.f_5));
					iLocal_669 = 0;
					Local_402.f_2 = 90;
				}
				else
				{
					iLocal_669 = 0;
					Local_402.f_4 = unk_0x105601648511CC64();
					func_69(&(Local_402.f_5));
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
				func_210(&(Local_402.f_5), 3, &cVar26, 0, 0, 0, 0);
				Local_402.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_205(Local_402.f_5, 1))
			{
				if (func_347(iLocal_672) < Local_402.f_29.f_67)
				{
					Local_402.f_4 = unk_0x105601648511CC64();
					Local_402.f_2 = 90;
				}
				else
				{
					unk_0xC4BA30B532FE260F(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
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
					Local_516.f_0 = unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
					Local_516.f_1 = 0;
					Local_516.f_3 = 0;
					Local_516.f_2 = 0;
					iLocal_856 = 1;
					Global_25531 = 1;
					if (bLocal_854)
					{
						if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
						{
							func_293(47, 0);
							func_288(47, 0);
							Local_402.f_112 = unk_0x5E29F9399E0829A3(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (unk_0xBF697FA7422C0621(Local_402.f_112))
							{
								if (!unk_0x18487DB48DC3A046(Local_402.f_112))
								{
									unk_0x184188AF06D2A771(Local_402.f_112);
								}
								StringCopy(&Global_32627, "v_garagem_sp", 32);
							}
						}
						unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 1);
						unk_0x13D5880CBA449AA9();
						Local_402.f_4 = unk_0x105601648511CC64();
						Local_402.f_2 = 4;
					}
					else
					{
						Local_402.f_2 = 8;
					}
					func_69(&(Local_402.f_5));
				}
			}
			break;
		
		case 4:
			bVar35 = true;
			if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
			{
				Local_402.f_112 = unk_0x5E29F9399E0829A3(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!unk_0xBF697FA7422C0621(Local_402.f_112) || unk_0xA30B063D74E02747(Local_402.f_112)) || unk_0x00BCFC51EF781989(Local_402.f_112))
				{
					func_293(47, 0);
					func_288(47, 0);
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
					if (unk_0x1732A8A5D2D39430(200.4651f, -1020.631f, -100f, 50f, 0) || (unk_0x105601648511CC64() - Local_402.f_4) > 3500)
					{
						Local_402.f_4 = unk_0x105601648511CC64();
						Local_402.f_2 = 5;
					}
				}
				else if (unk_0x5C4048C4641BDB16(Local_402.f_29.f_14, Var32, fVar30, iVar31) || (unk_0x105601648511CC64() - Local_402.f_4) > 3500)
				{
					Local_402.f_4 = unk_0x105601648511CC64();
					Local_402.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((unk_0x719413B40BB63D86() && unk_0xF220370B0C08EC20()) && (!unk_0xBF697FA7422C0621(Local_402.f_112) || unk_0x18487DB48DC3A046(Local_402.f_112))) || (unk_0x105601648511CC64() - Local_402.f_4) > 10000)
			{
				Local_402.f_4 = unk_0x105601648511CC64();
				Local_402.f_2 = 6;
			}
			break;
		
		case 6:
			if ((unk_0x105601648511CC64() - Local_402.f_4) > 1000)
			{
				if ((unk_0x724D816EA203A79E(iLocal_1027) && unk_0x5CAE759AE8219D20(iLocal_1027)) && unk_0xB248FAA35ED47DB9(iLocal_1027, 1))
				{
					unk_0x1E7A09C1710FB071(&iLocal_1027);
				}
				iLocal_1027 = unk_0x3E12B546F3F2597A();
				if ((((unk_0x724D816EA203A79E(iLocal_1027) && unk_0xE59B7F5A03335350(iLocal_1027, 0)) && !unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iLocal_1027))) && !unk_0xA19D269B4B5A1532(unk_0x6F79ECA8C83E4357(iLocal_1027))) && !unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(iLocal_1027)))
				{
					if (!unk_0x5CAE759AE8219D20(iLocal_1027))
					{
						unk_0x77815D3407C6700D(iLocal_1027, 0, 0);
					}
				}
				else
				{
					iLocal_1027 = 0;
				}
				unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), 0, 0);
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 1);
				}
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 16);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 32);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 128);
					unk_0x0B55204F721A7EA1(unk_0xB5CEFD608600A09F(), 1);
				}
				func_280(1, 1, 1, 0, 0);
				unk_0xEB233A3B7635D2AC();
				unk_0x7456702622C62EA0(1);
				Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_14.f_3.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_402.f_29.f_69)
				{
					unk_0x220E291081F3885D(Local_402.f_29.f_14, Var32);
				}
				if (!unk_0xEF0E25DA0CB6E8FF(Local_402.f_110))
				{
					Local_402.f_110 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						unk_0x394EE83EEDDF9A95("GtaMloRoom001");
					}
					func_280(1, 1, 1, 0, 0);
					func_279(&(Local_402.f_29.f_14), &(Local_402.f_110), &(Local_402.f_111));
				}
				unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
				unk_0x59B038076F830627(0);
				unk_0x43F06392C4EF25E0(0);
				unk_0x13D5880CBA449AA9();
				Local_402.f_2 = 7;
				Local_402.f_4 = unk_0x105601648511CC64();
				func_69(&(Local_402.f_5));
			}
			break;
		
		case 7:
			if ((unk_0x105601648511CC64() - Local_402.f_4) < 7000 && !func_345(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_05", 16);
				func_208(&cVar26, -1);
				if (!unk_0x719413B40BB63D86())
				{
					if (Local_402.f_0 == 12 || Local_402.f_0 == 13)
					{
						fVar30 = 85f;
						iVar31 = 2;
					}
					Var32 = { unk_0xD0FFB162F40A139C((Local_402.f_29.f_29.f_2 + 90f)), unk_0x0BADBFA3B172435F((Local_402.f_29.f_29.f_2 + 90f)), 0f };
					unk_0x5C4048C4641BDB16(Local_402.f_29.f_29, Var32, fVar30, iVar31);
				}
			}
			else
			{
				if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110))
				{
					if (Local_402.f_29.f_69)
					{
						unk_0x394EE83EEDDF9A95("GtaMloRoom001");
					}
					func_280(1, 1, 1, 0, 0);
					func_279(&(Local_402.f_29.f_29), &(Local_402.f_110), &(Local_402.f_111));
				}
				unk_0x7A89E6B582BCD8C2();
				unk_0x7456702622C62EA0(1);
				Local_402.f_4 = unk_0x105601648511CC64();
				Local_402.f_2 = 8;
			}
			break;
		
		case 8:
			if ((unk_0x105601648511CC64() - Local_402.f_4) < 7000 && !func_345(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_06", 16);
				if (!unk_0xF16DAFF595E80F7C())
				{
					func_208(&cVar26, 7000);
				}
			}
			else
			{
				unk_0x7456702622C62EA0(1);
				Local_402.f_4 = unk_0x105601648511CC64();
				Local_402.f_2 = 9;
			}
			break;
		
		case 9:
			if ((unk_0x105601648511CC64() - Local_402.f_4) < 3500 && !func_345(1000))
			{
				cVar26 = { Local_402.f_29.f_63 };
				StringConCat(&cVar26, "_03", 16);
				if (unk_0xA7F138B5B1AB2CF6(Local_516.f_0))
				{
					if (Local_516.f_1)
					{
						if (!Local_516.f_3)
						{
							unk_0xC4BA30B532FE260F(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
							Local_516.f_3 = 1;
						}
						unk_0x4B6031094354FED6(Local_516.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x29CD142125FE177B(Local_516.f_0, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_89(&cVar26);
						unk_0xC27A95D32A8160C0();
						Local_516.f_1 = 1;
					}
				}
			}
			else if ((unk_0x105601648511CC64() - Local_402.f_4) < 4000 && !func_345(1000))
			{
				if (unk_0xA7F138B5B1AB2CF6(Local_516.f_0))
				{
					if (Local_516.f_2)
					{
						unk_0x4B6031094354FED6(Local_516.f_0, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x29CD142125FE177B(Local_516.f_0, "SHARD_ANIM_OUT");
						unk_0x1E1FB49121565EB6(1);
						unk_0xD44E04EBBDC4CE88(0.33f);
						unk_0xF9FBC2F3F73D94C9();
						Local_516.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_854)
				{
					unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
					if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110))
					{
						unk_0x348665177DBFB93B(Local_402.f_110, 0);
						unk_0x4EC087603E1DEF9C(Local_402.f_110, 0);
					}
					if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_111))
					{
						unk_0x348665177DBFB93B(Local_402.f_111, 0);
						unk_0x4EC087603E1DEF9C(Local_402.f_111, 0);
					}
					unk_0xF3F01A78937DC905(0f);
					unk_0x2B9AEC08E469E384(0f, 1065353216);
					unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), 1, 0);
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 0);
					iVar36 = unk_0x3E12B546F3F2597A();
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
						unk_0x0B55204F721A7EA1(unk_0xB5CEFD608600A09F(), 0);
						if ((unk_0x724D816EA203A79E(iVar36) && unk_0xE59B7F5A03335350(iVar36, 0)) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar36, 0))
						{
							unk_0x641B19E156645A92(iVar36, Local_402.f_29.f_44, 1, 1, 0, 1);
							unk_0x019CE76D5286C95C(iVar36, Local_402.f_29.f_47);
							unk_0xF0A40F19AAB79E88(iVar36, 1084227584);
						}
						else
						{
							unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_402.f_29.f_44, 1, 1, 0, 1);
							unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), Local_402.f_29.f_47);
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_1027) && unk_0xE59B7F5A03335350(iLocal_1027, 0))
					{
						iVar37 = func_49(24);
						if (func_278(&Local_776, 24))
						{
							func_273(&Local_776, func_457());
							if (unk_0x724D816EA203A79E(iVar37))
							{
								unk_0xCF6040807CC0E4A5(&iVar37);
							}
						}
						if (Local_402.f_0 == 21)
						{
							unk_0x6C5F5B5F6894CCE3(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
							unk_0x641B19E156645A92(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
							unk_0x019CE76D5286C95C(iLocal_1027, 154.4846f);
							func_271(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_402.f_0 == 22)
						{
							unk_0x6C5F5B5F6894CCE3(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
							unk_0x641B19E156645A92(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
							unk_0x019CE76D5286C95C(iLocal_1027, 319.6985f);
							func_271(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_402.f_0 == 23)
						{
							unk_0x6C5F5B5F6894CCE3(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
							unk_0x641B19E156645A92(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
							unk_0x019CE76D5286C95C(iLocal_1027, 270.8741f);
							func_271(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						unk_0xF0A40F19AAB79E88(iLocal_1027, 1084227584);
					}
					if (unk_0x724D816EA203A79E(iVar36) && unk_0xE59B7F5A03335350(iVar36, 0))
					{
						unk_0xDC078F87049ECECE(iVar36, 1, 0);
						unk_0x346478B12F69D4E3(iVar36, 0);
						if (unk_0xB248FAA35ED47DB9(iVar36, 1))
						{
							unk_0x1E7A09C1710FB071(&iVar36);
						}
					}
					iVar38 = 5000;
					iVar39 = unk_0x105601648511CC64();
					while (!unk_0xAE9335ADE2B33DFC() && (unk_0x105601648511CC64() - iVar39) < iVar38)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0xBF697FA7422C0621(Local_402.f_112))
					{
						unk_0xB165D6ED2E977354(Local_402.f_112);
					}
					StringCopy(&Global_32627, "", 32);
					if ((Local_402.f_0 == 21 || Local_402.f_0 == 22) || Local_402.f_0 == 23)
					{
						func_293(47, 1);
						func_288(47, 1);
						Global_105220.f_32546.f_4800 = 1;
					}
					unk_0x13D5880CBA449AA9();
					unk_0x7A89E6B582BCD8C2();
					unk_0x59B038076F830627(1);
					unk_0x43F06392C4EF25E0(1);
					func_280(0, 1, 1, 0, 0);
					bLocal_854 = false;
					Global_25531 = 0;
				}
				if (unk_0xA7F138B5B1AB2CF6(Local_516.f_0))
				{
					unk_0xB0B0FE33F4F22679(&Local_516);
				}
				func_317(iLocal_672, Local_516.f_4, Local_402.f_29.f_67);
				func_316(Local_402.f_0, 5, 1);
				func_303(Local_402.f_0);
				if (unk_0x2DA8CA50A72528FB(Global_69800.f_208[Local_402.f_0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(Global_69800.f_208[Local_402.f_0]));
				}
				iLocal_940 = Local_402.f_0;
				func_302();
				Local_402.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_669++;
			if (iLocal_669 >= 3)
			{
				if ((unk_0x105601648511CC64() - Local_402.f_4) < 4000)
				{
					cVar26 = { Local_402.f_29.f_63 };
					StringConCat(&cVar26, "_04", 16);
					func_301(&cVar26);
				}
				else
				{
					Local_402.f_2 = 99;
				}
			}
			break;
	}
}

void func_301(char[4] cParam0)
{
	unk_0x2F618BD43614DD0D(cParam0);
	unk_0x72F8FA06CC9EC899(0, 1, 1, -1);
}

int func_302()
{
	if (func_218(0))
	{
		return 0;
	}
	if (Global_92994.f_8)
	{
		if (Global_92994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92994.f_10 > 1)
	{
		return 0;
	}
	Global_92994.f_10++;
	return 1;
}

void func_303(int iParam0)
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
	func_315(iVar0, 0);
	iVar2 = func_314(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_313(iVar0);
		if (func_311(iVar0, iVar1, 1))
		{
			func_304(iVar0);
			func_313(iVar0);
		}
	}
}

void func_304(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_310(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46370[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46370[iVar0 /*203*/].f_10[(Global_46370[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_46370[iVar0 /*203*/].f_9 - 1);
	if (!Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_309(Global_37070[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
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
		func_305(1, Global_37070[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_37070[iVar1 /*12*/].f_3)
		{
			case 0:
				func_305(0, Global_37070[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_305(1, Global_37070[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_305(2, Global_37070[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46370[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_305(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x866EAD7E27D8D0F8())
	{
		return;
	}
	iVar0 = func_457();
	bVar1 = false;
	StringCopy(&cVar2, func_308(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x2E94302CFF011F2E("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x2E94302CFF011F2E("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x2E94302CFF011F2E("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x2E94302CFF011F2E(sParam3);
				if (!unk_0xF1734B55490E9045(sParam4))
				{
					unk_0xC9C304D0AABE1335(sParam4);
				}
				if (!unk_0xF1734B55490E9045(sParam5))
				{
					unk_0xC9C304D0AABE1335(sParam5);
				}
				if (!unk_0xF1734B55490E9045(sParam6))
				{
					unk_0xC9C304D0AABE1335(sParam6);
				}
				if (!unk_0xF1734B55490E9045(sParam7))
				{
					unk_0xC9C304D0AABE1335(sParam7);
				}
				if (!unk_0xF1734B55490E9045(sParam8))
				{
					unk_0xC9C304D0AABE1335(sParam8);
				}
				if (!unk_0xF1734B55490E9045(sParam9))
				{
					unk_0xC9C304D0AABE1335(sParam9);
				}
				if (!unk_0xF1734B55490E9045(sParam10))
				{
					unk_0xC9C304D0AABE1335(sParam10);
				}
				if (!unk_0xF1734B55490E9045(sParam11))
				{
					unk_0xC9C304D0AABE1335(sParam11);
				}
				if (!unk_0xF1734B55490E9045(sParam12))
				{
					unk_0xC9C304D0AABE1335(sParam12);
				}
				if (!unk_0xF1734B55490E9045(sParam13))
				{
					unk_0xC9C304D0AABE1335(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_306(unk_0x7BB0762D8C75A3C7(&cVar2, &cVar2, 0, 2, unk_0xFCB4C1AC11347344(func_307(iParam1)), 0));
		}
		else
		{
			func_306(unk_0x7BB0762D8C75A3C7("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xFCB4C1AC11347344(func_307(iParam1)), 0));
		}
		switch (Global_14493)
		{
			case 0:
				StringCopy(&Global_14482, "Phone_SoundSet_Michael", 24);
				Global_37062++;
				if (Global_37062 > 16)
				{
					Global_37062 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14482, "Phone_SoundSet_Trevor", 24);
				Global_37064++;
				if (Global_37064 > 16)
				{
					Global_37064 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14482, "Phone_SoundSet_Franklin", 24);
				Global_37063++;
				if (Global_37063 > 16)
				{
					Global_37063 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14482, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xC4BA30B532FE260F(-1, "Notification", &Global_14482, 1);
	}
}

void func_306(var uParam0)
{
	Global_37065[Global_37069] = uParam0;
	Global_16858 = 1;
	Global_16857 = uParam0;
	Global_37069++;
	if (Global_37069 == 3)
	{
		Global_37069 = 0;
	}
}

char* func_307(int iParam0)
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

char* func_308(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[0 /*29*/].f_7));
		
		case 1:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[1 /*29*/].f_7));
		
		case 2:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[2 /*29*/].f_7));
		
		case 7:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[12 /*29*/].f_7));
		
		case 4:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[60 /*29*/].f_7));
		
		case 6:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[62 /*29*/].f_7));
		
		case 3:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[14 /*29*/].f_7));
		
		case 16:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[97 /*29*/].f_7));
		
		case 19:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[99 /*29*/].f_7));
		
		case 15:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[96 /*29*/].f_7));
		
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
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[15 /*29*/].f_7));
		
		case 26:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[30 /*29*/].f_7));
		
		case 27:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[17 /*29*/].f_7));
		
		case 29:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[20 /*29*/].f_7));
		
		case 30:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[43 /*29*/].f_7));
		
		case 31:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[44 /*29*/].f_7));
		
		case 32:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[19 /*29*/].f_7));
		
		case 34:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[40 /*29*/].f_7));
		
		case 36:
			return unk_0xFCB4C1AC11347344("CELL_E_381");
		
		case 38:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[64 /*29*/].f_7));
		
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
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[122 /*29*/].f_7));
		
		case 40:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[125 /*29*/].f_7));
		
		case 41:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[113 /*29*/].f_7));
		
		case 42:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[126 /*29*/].f_7));
		
		case 43:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[127 /*29*/].f_7));
		
		case 44:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[124 /*29*/].f_7));
		
		case 45:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[114 /*29*/].f_7));
		
		case 46:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[115 /*29*/].f_7));
		
		case 47:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[116 /*29*/].f_7));
		
		case 48:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[123 /*29*/].f_7));
		
		case 49:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[117 /*29*/].f_7));
		
		case 50:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[118 /*29*/].f_7));
		
		case 51:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[119 /*29*/].f_7));
		
		case 52:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[120 /*29*/].f_7));
		
		case 53:
			return unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_309(int iParam0)
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

int func_310(int iParam0)
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
		if (Global_46370[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46370[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46370[iVar0 /*203*/].f_1;
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

int func_311(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_315(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_46370[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_46370[iVar0 /*203*/].f_2 = iParam0;
	Global_46370[iVar0 /*203*/].f_10[Global_46370[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46370[iVar0 /*203*/].f_10[Global_46370[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46370[iVar0 /*203*/].f_10[Global_46370[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46370[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46370[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46370[iVar0 /*203*/].f_4[iVar1] == Global_37070[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46370[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46370[iVar0 /*203*/].f_4[Global_46370[iVar0 /*203*/].f_3] = Global_37070[iParam1 /*12*/].f_3;
			Global_46370[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46370[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46370[iVar0 /*203*/].f_4[iVar1] == Global_37070[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46370[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46370[iVar0 /*203*/].f_4[Global_46370[iVar0 /*203*/].f_3] = Global_37070[iParam1 /*12*/].f_2;
			Global_46370[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46370[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46370[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_312(Global_46370[iVar0 /*203*/].f_4[iVar1], Global_46370[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_312(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar19 = (Global_40395[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_40395[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_309(Global_37070[iVar20 /*12*/].f_1) };
		if (Global_37070[iVar20 /*12*/].f_2 == iParam0 && !Global_37070[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_37070[iVar20 /*12*/].f_2;
		iVar0 = Global_46008[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_46008[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_37062 = (Global_37062 - 1);
						if (Global_37062 < 0)
						{
							Global_37062 = 0;
						}
						break;
					
					case 1:
						Global_37063 = (Global_37063 - 1);
						if (Global_37063 < 0)
						{
							Global_37063 = 0;
						}
						break;
					
					case 2:
						Global_37064 = (Global_37064 - 1);
						if (Global_37064 < 0)
						{
							Global_37064 = 0;
						}
						break;
					}
				}
		}
		Global_46008[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_46008[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_46008[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_46008[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_46008[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_46008[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_46008[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_46008[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_37062 = (Global_37062 - 1);
						if (Global_37062 < 0)
						{
							Global_37062 = 0;
						}
						break;
					
					case 1:
						Global_37063 = (Global_37063 - 1);
						if (Global_37063 < 0)
						{
							Global_37063 = 0;
						}
						break;
					
					case 2:
						Global_37064 = (Global_37064 - 1);
						if (Global_37064 < 0)
						{
							Global_37064 = 0;
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
			if (Global_46370[iVar24 /*203*/].f_1 == iParam1 && Global_46370[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_46008[iParam0 /*120*/].f_18[iVar0] = Global_46370[iVar23 /*203*/].f_1;
		Global_46008[iParam0 /*120*/].f_1[iVar0] = (Global_46370[iVar23 /*203*/].f_9 - 1);
		Global_46008[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_46008[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_46008[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_46008[iParam0 /*120*/]++;
		iVar25 = Global_46008[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_46370[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_37070[iVar26 /*12*/].f_2;
		if (Global_46370[iVar23 /*203*/].f_10[(Global_46370[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46370[iVar23 /*203*/].f_10[(Global_46370[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_309(Global_37070[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_46008[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_305(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_305(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_305(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_305(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_313(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_105220.f_24957, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_310(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46370[iVar0 /*203*/] = 0;
}

int func_314(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_47792 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46370[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_46370[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_46370[iVar1 /*203*/].f_1;
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
		if (Global_47793[iVar1 /*53*/].f_52 == 0)
		{
			Global_47793[iVar1 /*53*/].f_52 = iVar0;
			Global_47793[iVar1 /*53*/] = iParam0;
			Global_47793[iVar1 /*53*/].f_1 = iParam1;
			Global_47793[iVar1 /*53*/].f_2 = iParam2;
			Global_105220.f_21008.f_310++;
			if (Global_105220.f_21008.f_310 == 0)
			{
				Global_105220.f_21008.f_310 = 1;
			}
			Global_47793[iVar1 /*53*/].f_10 = 0;
			Global_47793[iVar1 /*53*/].f_3 = Global_105220.f_21008.f_310;
			Global_47793[iVar1 /*53*/].f_4 = 1;
			Global_47792++;
			return Global_47793[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_315(int iParam0, bool bParam1)
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
	
	iVar0 = func_310(iParam0);
	if (iVar0 > -1)
	{
		if (Global_46370[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46370[iVar1 /*203*/] == 0)
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
		if (Global_46370[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46370[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_46370[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46370[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46370[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46370[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_46008[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_46008[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_46008[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_46008[iVar6 /*120*/].f_18[iVar8] == Global_46370[iVar4 /*203*/].f_1)
							{
								if (Global_46008[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_37062 = (Global_37062 - 1);
											break;
										
										case 1:
											Global_37063 = (Global_37063 - 1);
											break;
										
										case 2:
											Global_37064 = (Global_37064 - 1);
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
	Global_46370[iVar4 /*203*/].f_2 = iParam0;
	Global_46370[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_46370[iVar4 /*203*/] = 1;
	}
	Global_105220.f_21008.f_310++;
	if (Global_105220.f_21008.f_310 == 0)
	{
		Global_105220.f_21008.f_310 = 1;
	}
	Global_46370[iVar4 /*203*/].f_1 = Global_105220.f_21008.f_310;
	Global_46370[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_316(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_105220.f_32546[iParam0]), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_32546[iParam0]), iParam1);
	}
}

int func_317(int iParam0, int iParam1, int iParam2)
{
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_318(Global_105220.f_28021[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_318(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_344();
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
					func_343(99, 1);
					func_342(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_342(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_342(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_327(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_326(5))
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
							func_342(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_342(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_342(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_326(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_342(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_342(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_342(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_342(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_342(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_342(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_342(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_342(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_342(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x2C087518F90303D5())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_342(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_342(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_342(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_342(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_342(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_342(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_326(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_342(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_342(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_342(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_342(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_342(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_342(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_325(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_343(95, iParam3);
					break;
				
				case 1:
					func_343(97, iParam3);
					break;
				
				case 2:
					func_343(96, iParam3);
					break;
			}
			func_343(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_321(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_321(iVar1);
	}
	iVar5 = (Global_53141[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53141[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53141[iVar2] = 2147483647;
				}
				else
				{
					Global_53141[iVar2] = (Global_53141[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_342(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_342(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_342(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53141[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53141[iVar2];
			Global_53141[iVar2] = (Global_53141[iVar2] - iParam3);
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
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_105220.f_20535.f_233[iVar2 /*69*/]++;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_1++;
		if (Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_320(iParam0);
	if (Global_35905 == 15)
	{
		func_319(0);
	}
	return 1;
}

void func_319(bool bParam0)
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
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53149[iVar0 /*3*/][0] = Global_105220.f_20535[iVar0];
		Global_53149.f_31[iVar0 /*3*/][0] = Global_105220.f_20535.f_11[iVar0];
		Global_53149.f_62[iVar0 /*3*/][0] = Global_105220.f_20535.f_22[iVar0];
		Global_53149.f_93[iVar0 /*3*/][0] = Global_105220.f_20535.f_33[iVar0];
		Global_53149.f_124[iVar0 /*3*/][0] = Global_105220.f_20535.f_44[iVar0];
		Global_53149.f_155[iVar0 /*3*/][0] = Global_105220.f_20535.f_55[iVar0];
		Global_53149.f_186[iVar0 /*3*/][0] = Global_105220.f_20535.f_66[iVar0];
		Global_53149.f_217[iVar0 /*3*/][0] = Global_105220.f_20535.f_77[iVar0];
		Global_53149.f_248[iVar0 /*3*/][0] = Global_105220.f_20535.f_88[iVar0];
		if (!bParam0)
		{
			Global_53149[iVar0 /*3*/][1] = Global_105220.f_20535[iVar0];
			Global_53149.f_31[iVar0 /*3*/][1] = Global_105220.f_20535.f_11[iVar0];
			Global_53149.f_62[iVar0 /*3*/][1] = Global_105220.f_20535.f_22[iVar0];
			Global_53149.f_93[iVar0 /*3*/][1] = Global_105220.f_20535.f_33[iVar0];
			Global_53149.f_124[iVar0 /*3*/][1] = Global_105220.f_20535.f_44[iVar0];
			Global_53149.f_155[iVar0 /*3*/][1] = Global_105220.f_20535.f_55[iVar0];
			Global_53149.f_186[iVar0 /*3*/][1] = Global_105220.f_20535.f_66[iVar0];
			Global_53149.f_217[iVar0 /*3*/][1] = Global_105220.f_20535.f_77[iVar0];
			Global_53149.f_248[iVar0 /*3*/][1] = Global_105220.f_20535.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_320(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53141[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_321(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_324(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0) || unk_0xFA30DFD0084E92FE(Global_2097152[func_323() /*12171*/].f_7688.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_2097152[func_323() /*12171*/].f_7688.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_322(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_322(int iParam0)
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

int func_323()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_324(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_93();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar18, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_325(int iParam0)
{
	func_343(93, iParam0);
	func_343(29, iParam0);
	func_343(30, iParam0);
}

bool func_326(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_163(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_2097152[func_323() /*12171*/].f_7688.f_10, iParam0);
}

int func_327(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x6D5CBCB6411EDE89(27))
	{
		return 0;
	}
	if (unk_0x6CB99B97664C3727(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6CB99B97664C3727(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3A57956BCE003880(joaat("num_cash_spent"), iVar1, 1);
		func_341(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_328(27, 1);
	return 1;
}

int func_328(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_329(iParam0, iParam1);
}

int func_329(int iParam0, int iParam1)
{
	if (func_27(14) && !func_340(iParam0))
	{
		return 0;
	}
	if (unk_0x6D5CBCB6411EDE89(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25524 != 0 && !Global_70978)
	{
		return 0;
	}
	if (func_339(&Global_4267702))
	{
		if (func_337(&Global_4267702, iParam0))
		{
			return 0;
		}
		if (func_330(&Global_4267702, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xE07F36ACFF1AA002(iParam0))
		{
			return 0;
		}
		if (unk_0x6D5CBCB6411EDE89(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_330(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_340(iParam1))
	{
		return 0;
	}
	if (func_337(uParam0, iParam1))
	{
		return 0;
	}
	if (func_336(uParam0) < 0f)
	{
		func_335(uParam0, 0);
	}
	func_333(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_331(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_331(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_340(iParam1))
	{
		return 0;
	}
	if (func_337(uParam0, iParam1))
	{
		return 0;
	}
	if (func_336(uParam0) < 0f)
	{
		func_335(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_332(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_332(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_333(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_334(uParam0, iVar0);
		iVar0++;
	}
	func_335(uParam0, (Global_4267701 - 0.5f));
}

void func_334(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_335(var uParam0, float fParam1)
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

float func_336(var uParam0)
{
	return uParam0->f_80;
}

bool func_337(var uParam0, int iParam1)
{
	return func_338(uParam0, iParam1) != -1;
}

int func_338(var uParam0, int iParam1)
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

bool func_339(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_340(int iParam0)
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

int func_341(int iParam0, int iParam1)
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
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
	}
	return 0;
}

void func_342(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_343(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_51709[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_51709[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_344()
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53141[0] == iVar0)
		{
			Global_53141[0] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53141[1] == iVar0)
		{
			Global_53141[1] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53141[2] == iVar0)
		{
			Global_53141[2] = iVar0;
		}
	}
}

int func_345(int iParam0)
{
	if (unk_0x726D9204B160D23E())
	{
		if ((unk_0x105601648511CC64() - Global_28) > iParam0)
		{
			Global_27 = unk_0x105601648511CC64();
		}
		Global_28 = unk_0x105601648511CC64();
		if ((unk_0x105601648511CC64() - Global_27) > iParam0)
		{
			if (func_346())
			{
				Global_27 = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_346()
{
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (unk_0x694514BD37EC4E94(0, 18) || unk_0x694514BD37EC4E94(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_348(int iParam0)
{
	return func_349(iParam0, Global_35905);
}

int func_349(int iParam0, int iParam1)
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

void func_350(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_457();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_129(iParam1);
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
	if (func_311(iVar0, iVar1, 1))
	{
		func_351(iVar0, sVar3);
		func_304(iVar0);
		func_313(iVar0);
	}
}

void func_351(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_310(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46370[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46370[iVar0 /*203*/].f_10[(Global_46370[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_46370[iVar0 /*203*/].f_10[(Global_46370[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_46370[iVar0 /*203*/].f_10[(Global_46370[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_46370[iVar0 /*203*/].f_10[(Global_46370[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_352(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_357(iParam1) || !func_357(iParam0))
	{
		return 1;
	}
	iVar0 = func_55(iParam0);
	iVar1 = func_55(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_57(iParam0);
	iVar1 = func_57(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_356(iParam0);
	iVar1 = func_356(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_355(iParam0);
	iVar1 = func_355(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_354(iParam0);
	iVar1 = func_354(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_353(iParam0);
	iVar1 = func_353(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_353(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_354(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_355(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_356(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_357(int iParam0)
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
	iVar0 = func_353(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_354(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_355(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_55(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_57(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_356(iParam0);
	if (iVar5 < 1 || iVar5 > func_54(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_358()
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
	if (unk_0xB731B8C5BCE89836(joaat("startup_positioning")) == 0)
	{
		if (Global_105220.f_32546.f_5588)
		{
			if (!unk_0x724D816EA203A79E(Global_70705))
			{
				func_273(&(Global_105220.f_32546.f_5510), Global_105220.f_32546.f_5590);
				Global_105220.f_32546.f_5588 = 0;
			}
			else if (!unk_0xE59B7F5A03335350(Global_70705, 0) || func_47(Global_70705, Global_105220.f_32546.f_5590, 1))
			{
				Global_105220.f_32546.f_5588 = 0;
			}
			else
			{
				if ((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) == Global_70705) && func_385(unk_0xBC25C936A095B5BA()) != Global_105220.f_32546.f_5590)
				{
					Global_105220.f_32546.f_5590 = func_385(unk_0xBC25C936A095B5BA());
				}
				if (Global_70705 != iLocal_671)
				{
					sVar2 = unk_0x0B00D4CDDAB33814(Global_70705, &uVar1);
					if (!unk_0xF1734B55490E9045(sVar2))
					{
						if (unk_0x56BEECB328B6D29D(sVar2) == unk_0x56BEECB328B6D29D("vehicle_gen_controller"))
						{
							Global_105220.f_32546.f_5588 = 0;
							iLocal_1028 = Global_70705;
							if (Global_69800.f_139[24] == Global_70705 || (Global_70706 == Global_70705 && Global_70707 == 24))
							{
								func_384(458, 24, -1, 1);
							}
							else
							{
								func_384(458, 0, -1, 1);
							}
							Global_70705 = 0;
						}
					}
				}
				if (((Global_105220.f_32546.f_5590 != func_457() && Global_92424[Global_105220.f_32546.f_5590 /*98*/] == Global_105220.f_32546.f_5510.f_66) && unk_0x3362CDE8460ED38B(&(Global_92424[Global_105220.f_32546.f_5590 /*98*/].f_27), &(Global_105220.f_32546.f_5510.f_1))) && !unk_0x7930B3E9C919E90F())
				{
					func_114(&(Global_105220.f_32546.f_5510), &(Global_105220.f_32546.f_5600[Global_105220.f_32546.f_5590 /*78*/]));
					Global_105220.f_32546.f_5588 = 0;
					iLocal_1028 = 0;
					func_384(458, 0, -1, 1);
					Global_70705 = 0;
				}
			}
		}
		else if ((unk_0x724D816EA203A79E(Global_70705) && unk_0xE59B7F5A03335350(Global_70705, 0)) && !func_47(Global_70705, Global_105220.f_32546.f_5590, 1))
		{
			Global_105220.f_32546.f_5588 = 1;
		}
		if (unk_0x724D816EA203A79E(iLocal_1028) && unk_0xE59B7F5A03335350(iLocal_1028, 0))
		{
			if (((!Global_105220.f_32546.f_5588 && iLocal_1028 != Global_70705) && iLocal_1028 != iLocal_1029) && !unk_0xB248FAA35ED47DB9(iLocal_1028, 1))
			{
				func_31(iLocal_1028, 145);
				iLocal_1028 = 0;
				func_384(458, 0, -1, 1);
			}
		}
		else if (iLocal_1028 != 0)
		{
			iLocal_1028 = 0;
			func_384(458, 0, -1, 1);
		}
		if (unk_0x724D816EA203A79E(iLocal_1029) && unk_0xE59B7F5A03335350(iLocal_1029, 0))
		{
		}
		else if (iLocal_1029 != 0)
		{
			iLocal_1029 = 0;
		}
	}
	if (Global_70709.f_66 != 0 && Global_70706 == 0)
	{
		func_273(&Global_70709, Global_70787);
		Global_70709.f_66 = 0;
	}
	Var3 = { 433.6721f, -1006.538f, 25.96351f };
	Var6 = { 433.6578f, -1017.5f, 32.09895f };
	fVar9 = 11.25f;
	if (iLocal_667 > 0 && iLocal_667 < 99)
	{
		if (iLocal_667 != 3)
		{
			if (((((unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) || !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var3, Var6, fVar9, 0, 1, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14))
			{
				iLocal_667 = 99;
			}
		}
	}
	if (func_383(iLocal_672))
	{
		if (!unk_0x2DA8CA50A72528FB(uLocal_857))
		{
			if (((func_27(15) || func_27(12)) && iLocal_667 != 3) && !unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				uLocal_857 = func_381(428.37f, -1013.5f, 27.93f, 0);
				unk_0xBF0E22F3E083C33D(uLocal_857, 225);
				unk_0x436D0272182E484D(uLocal_857, "IMPOUND_BLIPNAME");
				unk_0x4909873A6873A6C3(uLocal_857, true);
			}
		}
		else if ((!(func_27(15) || func_27(12)) || iLocal_667 == 3) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
		{
			unk_0x07B8ECB35A4ED3AC(&uLocal_857);
		}
	}
	else if (unk_0x2DA8CA50A72528FB(uLocal_857))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_857);
	}
	switch (iLocal_667)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if ((Local_402.f_2 == 0 && (func_27(15) || func_27(12))) && !unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					if (func_383(iLocal_672))
					{
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var3, Var6, fVar9, 0, 1, 0))
						{
							if (func_347(iLocal_672) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (func_269(iVar11, iLocal_672))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									func_210(&iLocal_668, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_210(&iLocal_668, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_667 = 1;
							}
							else
							{
								func_208("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && func_206(0, -1, 0))
			{
				if (func_205(iLocal_668, 1))
				{
					func_69(&iLocal_668);
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					func_380();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (func_269(iVar13, iLocal_672))
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
							if (func_269(iVar14, iLocal_672))
							{
								if (iVar14 == 0)
								{
									Var15 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var15 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_364(&iLocal_671, iVar14, Var15, 179.24f, 1))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
								if (unk_0x724D816EA203A79E(iLocal_671))
								{
									if (iVar14 == 0)
									{
										func_363(18, 1, 0);
									}
									else
									{
										func_363(19, 1, 0);
									}
									if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
									{
										unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
									}
									func_317(iLocal_672, 118, 250);
									func_362(iVar14);
									func_31(iLocal_671, func_457());
									func_71(1, -1);
									iLocal_667 = 3;
									func_69(&iLocal_668);
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
			switch (func_457())
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
			func_380();
			if (!iLocal_657 || iLocal_658)
			{
				func_203(0, 0);
				func_202(1, 1, 0, 0, 0);
				func_201(1, 2, 1, 1, 1);
				func_200("IMPOUND_TITLE");
				iLocal_663 = 0;
				iVar19 = -1;
				iVar21 = 0;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (func_269(iVar20, iLocal_672))
					{
						func_132(iVar21, unk_0xD8D56586882095EE(Global_105220.f_32546.f_5038[iVar18 /*157*/][iVar20 /*78*/].f_66), 0, 1, 0, 0);
						if (iVar19 == -1)
						{
							iVar19 = iVar21;
							iLocal_662 = iVar21;
						}
						unk_0xF0059F27F7BB6680(&iLocal_663, iVar21);
						iLocal_664[iVar21] = iVar20;
						func_132(iVar21, "IMPOUND_COST", 1, 1, 0, 0);
						func_361(250, 0);
						iVar21++;
					}
					iVar20++;
				}
				iVar21 = 0;
				func_125(iLocal_662, 1, 1);
				iLocal_660 = 1;
				iLocal_658 = 0;
				iLocal_657 = 1;
			}
			else
			{
				iVar0 = 0;
				if (unk_0x8ACB0C3FACC09467())
				{
					if (unk_0x0738078C96634C59(2))
					{
						unk_0xBBC4195AD74D153D(0, 1, 1);
						unk_0xBBC4195AD74D153D(0, 2, 1);
						unk_0x5EFA245B45A49778(0, 237, 1);
						unk_0x5EFA245B45A49778(0, 238, 1);
						unk_0x5EFA245B45A49778(0, 241, 1);
						unk_0x5EFA245B45A49778(0, 242, 1);
						func_122(0, 0, 0, 1);
						func_121(0, -1, 1);
						if (func_120())
						{
							if (Global_4266198 != iLocal_662)
							{
								unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_662 = Global_4266198;
								func_125(iLocal_662, 1, 1);
								iLocal_660 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (unk_0x694514BD37EC4E94(2, 188) || unk_0x694514BD37EC4E94(2, 241))
				{
					if (!iLocal_659)
					{
						iLocal_660 = 1;
						unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar22 = (iLocal_662 - 1);
						while (iVar22 >= 0)
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_663, iVar22))
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
								if (unk_0xFA30DFD0084E92FE(iLocal_663, iVar22))
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
							func_125(iLocal_662, 1, 1);
						}
					}
				}
				else if (unk_0x694514BD37EC4E94(2, 187) || unk_0x694514BD37EC4E94(2, 242))
				{
					if (!iLocal_659)
					{
						iLocal_660 = 1;
						unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar24 = iLocal_662 + 1;
						while (iVar24 <= 31)
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_663, iVar24))
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
								if (unk_0xFA30DFD0084E92FE(iLocal_663, iVar24))
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
							func_125(iLocal_662, 1, 1);
						}
					}
				}
				else if (unk_0x093484B35A948BFC(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!iLocal_659)
					{
						func_119("IMPOUND_CNF", 0, 0);
						func_118(-1);
						func_117(201, "ITEM_YES", -1);
						func_117(202, "ITEM_NO", -1);
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
						if (func_269(iLocal_664[iLocal_662], iLocal_672))
						{
							while (!func_364(&iLocal_671, iLocal_664[iLocal_662], Var26, 179.24f, 1))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							if (unk_0x724D816EA203A79E(iLocal_671))
							{
								if (iLocal_662 == 0)
								{
									func_363(18, 1, 0);
								}
								else
								{
									func_363(19, 1, 0);
								}
								if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
								{
									unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
								}
								func_317(iLocal_672, 118, 250);
								func_362(iLocal_664[iLocal_662]);
								func_31(iLocal_671, func_457());
								func_71(1, -1);
								iLocal_667++;
								func_69(&iLocal_668);
								iLocal_668 = -1;
								iLocal_659 = 0;
							}
						}
						iLocal_658 = 1;
					}
				}
				else if (unk_0x093484B35A948BFC(2, 202) || unk_0x093484B35A948BFC(2, 238))
				{
					unk_0xC4BA30B532FE260F(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
			unk_0xDE7B9CB38D019BF0();
			if (iLocal_660)
			{
				func_119("", 0, 0);
				func_118(-1);
				func_117(201, "ITEM_SELECT", -1);
				func_117(202, "ITEM_EXIT", -1);
				iLocal_659 = 0;
				iLocal_660 = 0;
			}
			if (func_206(0, -1, 0))
			{
				func_74(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_360())
			{
				func_31(iLocal_671, func_457());
				iLocal_667 = 99;
			}
			else if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 431.4f, -997.33f, 24.76f, 1) > 100f)
			{
				if (unk_0x724D816EA203A79E(iLocal_671))
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_671, 0))
					{
						if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_671, 0) && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iLocal_671, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 1) > 100f)
						{
							if (!unk_0xD1DC4B08247A4317(iLocal_671))
							{
								func_359(iLocal_671, 1, 145);
								unk_0xCF6040807CC0E4A5(&iLocal_671);
								unk_0xEDAD35A0D81ED3FB(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0);
								iLocal_667 = 99;
							}
						}
						else if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_671, 0))
						{
							unk_0xEDAD35A0D81ED3FB(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0);
							func_31(iLocal_671, func_457());
							iLocal_667 = 99;
						}
					}
					else
					{
						unk_0xEDAD35A0D81ED3FB(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0);
						iLocal_667 = 99;
					}
				}
				else
				{
					unk_0xEDAD35A0D81ED3FB(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0, 0);
					iLocal_667 = 99;
				}
			}
			break;
		
		case 99:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
			}
			func_69(&iLocal_668);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_664[iVar29] = -1;
				iVar29++;
			}
			func_363(18, 0, 0);
			func_363(19, 0, 0);
			if (unk_0x724D816EA203A79E(iLocal_671))
			{
				unk_0x1E7A09C1710FB071(&iLocal_671);
			}
			iLocal_667 = 0;
			break;
	}
	if (iLocal_667 == 0)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, 1, 0))
		{
			if (!iLocal_670)
			{
				func_363(18, 1, 0);
				iLocal_670 = 1;
			}
		}
		else if (iLocal_670 && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, 1, 0))
		{
			func_363(18, 0, 0);
			iLocal_670 = 0;
		}
	}
}

int func_359(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x0B00D4CDDAB33814(iParam0, &uVar0);
		if (!unk_0xF1734B55490E9045(sVar1))
		{
			if (unk_0x56BEECB328B6D29D(sVar1) == unk_0x56BEECB328B6D29D("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_31(iParam0, iParam2);
	return 1;
}

int func_360()
{
	if (unk_0x6606151474838BB7(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x6606151474838BB7(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x6606151474838BB7(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x6606151474838BB7(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_361(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17345.f_5092 >= 256)
	{
		return;
	}
	if (Global_17345.f_5610 >= 4)
	{
		return;
	}
	if (Global_17345.f_5611 != 1)
	{
		return;
	}
	if (Global_17345.f_5610 >= Global_17345.f_5608)
	{
		return;
	}
	Global_17345.f_3918[Global_17345.f_5092] = iParam0;
	Global_17345.f_5092++;
	Global_17345.f_2124[Global_17345.f_5609 /*5*/][Global_17345.f_5610] = 2;
	Global_17345.f_5610++;
	if (Global_17345.f_5610 >= Global_17345.f_5608)
	{
		fVar0 = func_128();
		if (Global_17345.f_4945[Global_17345.f_5089] && Global_17345.f_5610 == Global_17345.f_5608)
		{
			func_107(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17345.f_4938[(Global_17345.f_5089 - 1)])
		{
			Global_17345.f_4938[(Global_17345.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17345.f_5610 >= Global_17345.f_5608)
		{
			fVar3 = func_127();
			if (fVar3 > Global_17345.f_5612[Global_17345.f_5088])
			{
				Global_17345.f_5612[Global_17345.f_5088] = fVar3;
			}
		}
	}
}

void func_362(int iParam0)
{
	int iVar0;
	
	switch (func_457())
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
	if (iParam0 < 0 || iParam0 >= func_270(&(Global_105220.f_32546.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_105220.f_32546.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_363(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_35028[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (unk_0xFA30DFD0084E92FE(Global_35028[iParam0 /*31*/].f_1, 1))
			{
				Global_35028[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_35028[iParam0 /*31*/].f_22 = 1f;
			}
			unk_0xC0D8311F0A9723A0(Global_35028[iParam0 /*31*/], Global_35028[iParam0 /*31*/].f_22, 0, 0);
			unk_0xF72F6BB050622804(Global_35028[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_35028[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_35028[iParam0 /*31*/].f_22 = 0f;
			unk_0xC0D8311F0A9723A0(Global_35028[iParam0 /*31*/], Global_35028[iParam0 /*31*/].f_22, 0, 0);
			unk_0xF72F6BB050622804(Global_35028[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_364(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_269(iParam1, func_457()) || unk_0x724D816EA203A79E(*iParam0))
	{
		return 0;
	}
	switch (func_457())
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
	unk_0xF243B7A14FCFD0F4(Global_105220.f_32546.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (unk_0xD6513D668481290A(Global_105220.f_32546.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = unk_0x61C05BF08A1E0EFE(Global_105220.f_32546.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, Param2, fParam5, 0, 0, 0);
		func_365(*iParam0, &(Global_105220.f_32546.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
		unk_0x551DF575AE9A2969(*iParam0, 0);
		unk_0xA73D1278857991A2(*iParam0, 1);
		if (bParam6)
		{
			unk_0x2CA123B0622F495C(Global_105220.f_32546.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_365(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (!func_373(iParam0))
		{
			if (unk_0x56BEECB328B6D29D(&(uParam1->f_1)) != 0)
			{
				unk_0xEA0AB6C644C58C1D(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xECE72A06BBAC88B0())
			{
				unk_0x5EDEB04A454C1C0C(iParam0, *uParam1);
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
			if (unk_0xFA30DFD0084E92FE(uParam1->f_77, func_33(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_77, func_33(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), func_33(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x3621427A534C7FA0(iParam0, 0);
			if (unk_0x3EB14CBD49DA0017(iParam0, 5) != -1)
			{
				unk_0x3621427A534C7FA0(iParam0, 1);
			}
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_77, 13))
		{
			unk_0x1A45B6F1C5FA21FC(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xF07FAC3A3C7FE9ED(iParam0);
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_77, 12))
		{
			unk_0x28CD156B832945DC(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC90D824D356A7AF3(iParam0);
		}
		unk_0x914C5DE0B15B8B59(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x4C59702AC1076A88(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xFA30DFD0084E92FE(uParam1->f_77, 15) || func_372(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_371())
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
		unk_0x05D05A0BAA6CA8B1(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_35(uParam1->f_66))
		{
			unk_0x84A3F4F29630A320(iParam0, 0);
		}
		else
		{
			unk_0x84A3F4F29630A320(iParam0, 0);
			unk_0x84A3F4F29630A320(iParam0, uParam1->f_65);
		}
		unk_0xE82050D41B744FF3(iParam0, !unk_0xFA30DFD0084E92FE(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xD421BC740C5340C3(iParam0, uParam1->f_70);
		}
		unk_0x13CA55A989DEB72C(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x200ACC5C718FF287(iParam0, 2, unk_0xFA30DFD0084E92FE(uParam1->f_77, 28));
		unk_0x200ACC5C718FF287(iParam0, 3, unk_0xFA30DFD0084E92FE(uParam1->f_77, 29));
		unk_0x200ACC5C718FF287(iParam0, 0, unk_0xFA30DFD0084E92FE(uParam1->f_77, 30));
		unk_0x200ACC5C718FF287(iParam0, 1, unk_0xFA30DFD0084E92FE(uParam1->f_77, 31));
		unk_0x8D8F52BBEE186D6D(iParam0, unk_0xFA30DFD0084E92FE(uParam1->f_77, 10));
		if (unk_0x294CD98C461C2594(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x7170EF3CEB4D0224(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iParam0)))
			{
				if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_370(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_370(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x53A9885CA864BB82(iParam0, 1);
			}
			else
			{
				unk_0x7868CAB0703DB40F(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_366(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x8C1A6E7D5F410F4A(uParam1->f_66) && !unk_0xE7B3A320107C1379(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_77, func_33(iVar2 + 1)))
				{
					if (!unk_0xFC8A228C62614C5C(iParam0, iVar2 + 1))
					{
						unk_0xE54F7105CEA81918(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0xFC8A228C62614C5C(iParam0, iVar2 + 1))
				{
					unk_0xE54F7105CEA81918(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x6F79ECA8C83E4357(iParam0) == joaat("sheava") || unk_0x6F79ECA8C83E4357(iParam0) == joaat("omnis")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("le7b"))
		{
			if (unk_0x3EB14CBD49DA0017(iParam0, 0) == -1)
			{
				unk_0xE54F7105CEA81918(iParam0, 1, false);
			}
		}
		if (((unk_0xA19D269B4B5A1532(uParam1->f_66) && unk_0x86AFA41F8E0E6D36(iParam0)) && !unk_0x5E87CB0495C97732(iParam0, joaat("avenger"))) && !((((Global_4456448.f_51118 == 6 || Global_4456448.f_51118 == 7) || Global_4456448.f_51118 == 18) || Global_4456448.f_51118 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_77, 23))
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_77, 22))
				{
					unk_0xA1EE8501940C1D3E(iParam0, 2);
				}
				else
				{
					unk_0xA1EE8501940C1D3E(iParam0, 3);
				}
			}
			else
			{
				unk_0xA1EE8501940C1D3E(iParam0, 4);
			}
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_77, 27))
		{
			unk_0xE9A905ADFD5BC8A0(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xE9A905ADFD5BC8A0(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_366(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x1345B3BF11EDB0CF(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xB25E25030D61B529(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x3EB14CBD49DA0017(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xD2AB1F868ED95E27(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_247(unk_0x6F79ECA8C83E4357(*iParam0), 1) && unk_0x3EB14CBD49DA0017(*iParam0, 24) != func_369(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5C9F67BE33A5A3EE(*iParam0, 24, func_369(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_368(iParam0);
	if (func_367(*iParam0))
	{
		unk_0xDB35A2F9333ABEC5(*iParam0, 1);
		unk_0xA73D1278857991A2(*iParam0, 1);
	}
	return 1;
}

int func_367(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x724D816EA203A79E(uParam0) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xA6BE0954FC6BAA16(iParam0) > 0)
	{
		unk_0x1345B3BF11EDB0CF(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x3EB14CBD49DA0017(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x0E4EDFA1D564AF9D(iParam0, iVar1, unk_0x3EB14CBD49DA0017(iParam0, iVar1)), 16);
				iVar2 = unk_0x56BEECB328B6D29D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x56BEECB328B6D29D("MNU_CAGE") || iVar2 == unk_0x56BEECB328B6D29D("SABRE_CAG"))
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

void func_368(var uParam0)
{
	switch (unk_0x6F79ECA8C83E4357(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x3EB14CBD49DA0017(*uParam0, 4) == 0)
			{
				unk_0x5C9F67BE33A5A3EE(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xD2AB1F868ED95E27(*uParam0, 13);
			}
			break;
	}
}

int func_369(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x6F79ECA8C83E4357(iParam0))
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
		iVar0 = unk_0x34374BDFA570F489(iParam0, 38);
		iVar1 = unk_0x34374BDFA570F489(iParam0, 24);
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

void func_370(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
	{
		unk_0x1345B3BF11EDB0CF(iParam0, 0);
		iVar0 = unk_0x3EB14CBD49DA0017(iParam0, 24);
		iVar1 = unk_0xC8B123E980199685(iParam0, 24);
		unk_0xD2F70373DBF15801(iParam0, iParam1);
		if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xD2AB1F868ED95E27(iParam0, 24);
		}
		else
		{
			unk_0x5C9F67BE33A5A3EE(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_371()
{
	return unk_0x7B2F21BFE86AEB61(joaat("mpindependence"));
}

int func_372(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x46032D09AA009EC4("MPBitset", 3))
			{
				if (unk_0x3C03CFD5DD1E2D97(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x67CFC62D543B19EF(iParam0, "MPBitset");
				}
				return unk_0xFA30DFD0084E92FE(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_373(int iParam0)
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!func_379(unk_0xB5CEFD608600A09F(), -1))
		{
			iParam0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	if (func_375(unk_0xB5CEFD608600A09F()) == 3)
	{
		if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (func_374(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_374(int iParam0)
{
	if (unk_0x46032D09AA009EC4("FMDeliverableID", 3))
	{
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "FMDeliverableID"))
		{
			return unk_0x67CFC62D543B19EF(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_375(int iParam0)
{
	if (func_378(iParam0) == 233)
	{
		return func_376(iParam0);
	}
	return -1;
}

int func_376(int iParam0)
{
	if (func_377(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_176;
	}
	return -1;
}

int func_377(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 || (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_378(int iParam0)
{
	if (func_377(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_33;
	}
	return -1;
}

int func_379(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_231(iParam0, 1, 1))
	{
		if (unk_0x5237AF95232D78C5(unk_0xA95CF30C72EB526E(iParam0), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iParam0), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0xBC25C936A095B5BA() == unk_0x3187EF5798B5D209(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_380()
{
	unk_0xE93D261B305E994A(0);
	unk_0x5EFA245B45A49778(0, 188, 1);
	unk_0x5EFA245B45A49778(0, 187, 1);
	unk_0x5EFA245B45A49778(0, 201, 1);
	unk_0x5EFA245B45A49778(0, 202, 1);
	unk_0x5EFA245B45A49778(0, 1, 1);
	unk_0x5EFA245B45A49778(0, 2, 1);
	unk_0x5EFA245B45A49778(0, 239, 1);
	unk_0x5EFA245B45A49778(0, 240, 1);
}

var func_381(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x390CF6C8AD6903B7(Param0);
	unk_0x3F5F1772D71D5EC4(uVar0, func_382(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(uVar0, iParam3);
	return uVar0;
}

float func_382(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_383(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_269(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_384(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_93();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x86C669CF285C5AAD((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x86C669CF285C5AAD((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x86C669CF285C5AAD((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x86C669CF285C5AAD((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x86C669CF285C5AAD((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x86C669CF285C5AAD((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x86C669CF285C5AAD((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x86C669CF285C5AAD((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x86C669CF285C5AAD((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x86C669CF285C5AAD((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x86C669CF285C5AAD((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x86C669CF285C5AAD((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x86C669CF285C5AAD((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x86C669CF285C5AAD((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x86C669CF285C5AAD((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x86C669CF285C5AAD((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x86C669CF285C5AAD((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x86C669CF285C5AAD((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x86C669CF285C5AAD((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x787266E3704350D7(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_385(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_386(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_386(int iParam0)
{
	if (func_25(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_387(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (!unk_0xFA30DFD0084E92FE(Global_105220.f_9987.f_25, 7))
	{
		if (!unk_0xFA30DFD0084E92FE(*uParam0, 6))
		{
			if (func_27(13) && func_14(func_16()))
			{
				unk_0xF0059F27F7BB6680(uParam0, 6);
				iVar0 = func_9();
				uParam0->f_6 = { func_418(iVar0) };
				if (Global_25550 == iVar0 || Global_25550 == 0)
				{
					func_3(1);
					Var1 = { func_417("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					unk_0xD6423910AAD8A379(&Var1);
					iVar0 = (Global_25550 + 1 % 8);
					func_415(uParam0, iVar0);
					uParam0->f_2 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(8000, 12000));
					unk_0xF0059F27F7BB6680(uParam0, 12);
					if (iVar0 == 7)
					{
						unk_0xF0059F27F7BB6680(&(Global_105220.f_9987.f_25), 7);
						func_414(255, 0);
					}
				}
				else
				{
					func_415(uParam0, 0);
					unk_0x7CB6FD92BE491AD9(&(Global_105220.f_9987.f_25), 12);
				}
			}
		}
		else
		{
			func_413();
			if (!unk_0xFA30DFD0084E92FE(*uParam0, 31))
			{
				if (!unk_0xFA30DFD0084E92FE(*uParam0, 25))
				{
					func_412(uParam0);
				}
				else if (func_411())
				{
					func_395(uParam0);
					uParam0->f_3 = unk_0x105601648511CC64() + 2000;
				}
				if (!func_394(0))
				{
					func_414(255, 0);
				}
			}
			else if (func_394(0))
			{
				if (unk_0x105601648511CC64() > uParam0->f_3)
				{
					func_414(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16()))
			{
				func_388(uParam0);
			}
		}
	}
}

void func_388(var uParam0)
{
	struct<8> Var0;
	
	if (unk_0xFA30DFD0084E92FE(*uParam0, 31))
	{
		func_393(uParam0);
	}
	if (unk_0xFA30DFD0084E92FE(*uParam0, 25))
	{
		func_389(uParam0);
	}
	Var0 = { func_417("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (unk_0x144E80F5C46A6B75(&Var0))
	{
		unk_0xC1300D0F3A74E20B(&Var0);
	}
	unk_0x7CB6FD92BE491AD9(uParam0, 6);
	unk_0x7CB6FD92BE491AD9(uParam0, 30);
	unk_0x7CB6FD92BE491AD9(uParam0, 8);
}

void func_389(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_392(iVar0);
	iVar2 = func_391(iVar1);
	iVar3 = func_390(iVar1);
	if (iVar2 != 0)
	{
		unk_0x2CA123B0622F495C(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x2CA123B0622F495C(iVar3);
	}
	unk_0x7CB6FD92BE491AD9(uParam0, 25);
}

int func_390(int iParam0)
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

int func_391(int iParam0)
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

int func_392(int iParam0)
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

void func_393(var uParam0)
{
	if (unk_0x724D816EA203A79E(uParam0->f_4))
	{
		unk_0x6A54FD861D871600(unk_0x541C2AEF053615BC(uParam0->f_4, 0), 10f);
		unk_0xCF6040807CC0E4A5(&(uParam0->f_4));
	}
	if (unk_0x724D816EA203A79E(uParam0->f_5))
	{
		unk_0x6A54FD861D871600(unk_0x541C2AEF053615BC(uParam0->f_5, 0), 10f);
		unk_0xF845620A03C7425B(&(uParam0->f_5));
	}
	unk_0x7CB6FD92BE491AD9(uParam0, 31);
}

bool func_394(bool bParam0)
{
	if (bParam0)
	{
		return Global_101968.f_2 > 0.5f;
	}
	return Global_101968.f_2 >= 255f;
}

void func_395(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_392(iVar0);
	func_396(iVar1, &(uParam0->f_5), &(uParam0->f_4), func_410(iVar0), func_409(iVar0), 1);
	unk_0xF0059F27F7BB6680(uParam0, 31);
}

void func_396(int iParam0, var uParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 12:
			func_408(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 109:
			func_407(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 43:
			func_406(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 35:
			func_405(uParam2, Param3, uParam6, bParam7);
			break;
		
		case 28:
			func_404(uParam1, Param3, uParam6, bParam7);
			break;
		
		case 17:
			func_403(uParam1, uParam2, Param3, uParam6, bParam7);
			break;
		
		case 49:
			func_401(uParam1, uParam2, Param3, uParam6);
			break;
		
		case 25:
			func_400(uParam1, Param3, uParam6);
			break;
		
		case 14:
			func_399(uParam1, Param3, uParam6);
			break;
		
		case 86:
			func_397(uParam1, Param3, uParam6);
			break;
	}
}

void func_397(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_391(86);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(5, iVar0, Param1, uParam4, 1, 1);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, 1);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_398(*uParam0);
		return;
	}
}

void func_398(var uParam0)
{
	unk_0x17F107392C2BF056(uParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(uParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	unk_0x17F107392C2BF056(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	unk_0x17F107392C2BF056(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(uParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(uParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(uParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(uParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(uParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(uParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(uParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(uParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(uParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_399(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_391(14);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(5, iVar0, Param1, uParam4, 1, 1);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, 1);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_398(*uParam0);
		return;
	}
}

void func_400(var uParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	
	iVar0 = func_391(25);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(4, iVar0, Param1, uParam4, 1, 1);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, 1);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 + 0.02f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 - 0.23f), (Param1.f_1 + 0.04f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 - 0.05f), (Param1.f_1 - 0.11f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (Param1.f_0 + 0.09f), (Param1.f_1 - 0.06f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_398(*uParam0);
		return;
	}
}

void func_401(var uParam0, var uParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_391(49);
	iVar1 = func_390(49);
	if (unk_0xD6513D668481290A(iVar0) && unk_0xD6513D668481290A(iVar1))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(4, iVar0, Param2, uParam5, 1, 1);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, 1);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		unk_0x86901CB45E45CCB8(1110, ((Param2.f_0 + 0.12f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, ((Param2.f_0 - 0.03f) - 0.3f), ((Param2.f_1 + 0.04f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, ((Param2.f_0 - 0.2f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, ((Param2.f_0 - 0.05f) - 0.3f), ((Param2.f_1 - 0.15f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, ((Param2.f_0 + 0.01f) - 0.3f), ((Param2.f_1 - 0.06f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_398(*uParam0);
		Var2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = unk_0x61C05BF08A1E0EFE(iVar1, Param2 + Var2, uParam5, 1, 1, 0);
		unk_0x2CA123B0622F495C(iVar1);
		unk_0xE6E403909F4BF47F(*uParam1, 2f);
		unk_0xF0A40F19AAB79E88(*uParam1, 1084227584);
		unk_0xE9186F12AE391AD2(*uParam1, 2f);
		unk_0xC0078C1F63760E5D(*uParam1, 1f);
		unk_0xF162EEE556542AB7(*uParam1, 0, func_402());
		unk_0xF162EEE556542AB7(*uParam1, 1, func_402());
		unk_0xF162EEE556542AB7(*uParam1, 2, func_402());
		unk_0xF162EEE556542AB7(*uParam1, 3, func_402());
		unk_0xF162EEE556542AB7(*uParam1, 4, func_402());
		unk_0xF162EEE556542AB7(*uParam1, 5, func_402());
		unk_0x55AFEE10B3CE5C2C(*uParam1, 15f);
		unk_0xF45E798D22D5EB3A(*uParam1, 3);
		unk_0x93D3868AE0D83B7C(*uParam1, 2);
		unk_0x0BD7089C3E314AEA(*uParam1, 1);
		unk_0x46913653D1C7E82E(*uParam1);
		return;
	}
}

int func_402()
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_403(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_391(17);
	iVar1 = func_390(17);
	if (unk_0xD6513D668481290A(iVar0) && unk_0xD6513D668481290A(iVar1))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(4, iVar1, Param2, uParam5, 1, 1);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, 1);
		unk_0x2CA123B0622F495C(iVar1);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		Var2 = { 0.02f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.23f, 0.04f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.11f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.09f, -0.06f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam6)
		{
			Var2 = { 0.5783f, 0.1357f, -0.0683f };
			unk_0x86901CB45E45CCB8(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.0477f, 0.1103f, -0.1388f };
			unk_0x86901CB45E45CCB8(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.5048f, 0.4595f, -0.1953f };
			unk_0x86901CB45E45CCB8(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_398(*uParam0);
		*uParam1 = unk_0x61C05BF08A1E0EFE(iVar0, (Param2.f_0 - 0.4f), (Param2.f_1 - 0.5f), Param2.f_2, uParam5, 1, 1, 0);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x784C605D172817C8(*uParam1, 0f, 85f, 0f, 2, 1);
		unk_0xE9186F12AE391AD2(*uParam1, 20.5f);
		unk_0x55AFEE10B3CE5C2C(*uParam1, 15f);
		unk_0x46913653D1C7E82E(*uParam1);
		return;
	}
}

void func_404(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_391(28);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(28, iVar0, Param1, uParam4, 1, 1);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, 1);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		Var1 = { 0.02f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.5206f, 0f, 0.003f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.1258f, 0.0362f, -0.0837f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6107f, 0.4678f, -0.0815f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_405(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_391(35);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x61C05BF08A1E0EFE(iVar0, Param1, uParam4, 1, 1, 0);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x784C605D172817C8(*uParam0, 0f, 170f, 0f, 2, 1);
		unk_0xE6E403909F4BF47F(*uParam0, 1f);
		unk_0xE9186F12AE391AD2(*uParam0, 1f);
		unk_0x55AFEE10B3CE5C2C(*uParam0, 15f);
		unk_0xF162EEE556542AB7(*uParam0, 0, func_402());
		unk_0xF162EEE556542AB7(*uParam0, 1, func_402());
		unk_0xF162EEE556542AB7(*uParam0, 2, func_402());
		unk_0xF162EEE556542AB7(*uParam0, 3, func_402());
		unk_0xF162EEE556542AB7(*uParam0, 4, func_402());
		unk_0xF162EEE556542AB7(*uParam0, 5, func_402());
		unk_0xF45E798D22D5EB3A(*uParam0, 3);
		unk_0x93D3868AE0D83B7C(*uParam0, 2);
		unk_0x0BD7089C3E314AEA(*uParam0, 1);
		unk_0x46913653D1C7E82E(*uParam0);
		if (bParam5)
		{
			Var1 = { 0.4947f, 2.3632f, 0.1294f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
			Var1 = { 0.9243f, 2.6606f, 0.1951f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
			Var1 = { 1.5467f, 2.5044f, 0.2418f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
			Var1 = { 1.357f, 3.8779f, 0.3259f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_406(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_391(43);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(28, iVar0, Param1, uParam4, 1, 1);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, 1);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.4125f, -0.5815f, -0.2056f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
			Var1 = { 0.6332f, -1.1758f, -0.7106f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_407(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_391(109);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(28, iVar0, Param1, uParam4, 1, 1);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.4936f, -0.1763f, -0.0522f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.0645f, 0.0483f, -0.0698f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6011f, -0.1704f, -0.1473f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
		}
		func_398(*uParam0);
		return;
	}
}

void func_408(var uParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_391(12);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(28, iVar0, Param1, uParam4, 1, 1);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		Var1 = { 0.04f, 0.02f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.01f, 0.05f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam5)
		{
			Var1 = { 0.2417f, -0.3975f, -0.2282f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.0747f, -0.8188f, -0.2576f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.4322f, -1.1548f, -0.4902f };
			unk_0x86901CB45E45CCB8(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
		}
		func_398(*uParam0);
		return;
	}
}

float func_409(int iParam0)
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

Vector3 func_410(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_101945[0 /*3*/];
		
		case 2:
			return Global_101945[1 /*3*/];
		
		case 3:
			return Global_101945[2 /*3*/];
		
		case 4:
			return Global_101945[3 /*3*/];
		
		case 5:
			return Global_101945[4 /*3*/];
		
		case 6:
			return Global_101945[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_411()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_392(iVar0);
	iVar2 = func_391(iVar1);
	iVar3 = func_390(iVar1);
	if (iVar2 != 0)
	{
		if (!unk_0xD6513D668481290A(iVar2))
		{
			return 0;
		}
	}
	if (iVar3 != 0)
	{
		if (!unk_0xD6513D668481290A(iVar3))
		{
			return 0;
		}
	}
	return 1;
}

void func_412(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_392(iVar0);
	iVar2 = func_391(iVar1);
	iVar3 = func_390(iVar1);
	if (iVar2 != 0)
	{
		unk_0xF243B7A14FCFD0F4(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0xF243B7A14FCFD0F4(iVar3);
	}
	unk_0xF0059F27F7BB6680(uParam0, 25);
}

void func_413()
{
	if (Global_101968.f_3 == unk_0xC87A57742F7D3C06())
	{
		return;
	}
	Global_101968.f_3 = unk_0xC87A57742F7D3C06();
	if (Global_101968.f_2 == 0f && Global_101968.f_1 == 0f)
	{
		return;
	}
	if (Global_101968.f_2 != Global_101968.f_1)
	{
		Global_101968.f_2 = (Global_101968.f_2 + Global_101968);
		if (Global_101968 <= 0f)
		{
			if (Global_101968.f_2 < Global_101968.f_1)
			{
				Global_101968.f_2 = Global_101968.f_1;
			}
		}
		else if (Global_101968.f_2 > Global_101968.f_1)
		{
			Global_101968.f_2 = Global_101968.f_1;
		}
	}
	unk_0xF7EBEC3FF57AEC65(0.5f, 0.5f, 1f, 1f, 255, 255, 255, unk_0xF2DB717A73826179(Global_101968.f_2), 0);
}

void func_414(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	if (iParam1 <= 0)
	{
		Global_101968 = 0f;
		Global_101968.f_1 = fVar0;
		Global_101968.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_101968.f_2);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1) / (unk_0x11F9F9006143871A() * 1000f));
		Global_101968 = (fVar1 / fVar2);
		Global_101968.f_1 = fVar0;
	}
}

void func_415(var uParam0, int iParam1)
{
	func_416(&(Global_105220.f_9987.f_25), iParam1, 14336, 11);
}

void func_416(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, iParam3));
}

struct<8> func_417(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_418(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_101923[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_419()
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_392)
			{
				unk_0xF243B7A14FCFD0F4(joaat("v_ilev_uvline"));
				iLocal_391 = 1;
				if (unk_0xD6513D668481290A(joaat("v_ilev_uvline")))
				{
					if (func_420(8))
					{
						uLocal_393[4] = unk_0xB6896943DA475493(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, 1, 0);
						unk_0x641B19E156645A92(uLocal_393[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
						unk_0x784C605D172817C8(uLocal_393[4], 0f, 0f, 116.9f, 2, 1);
						uLocal_393[1] = unk_0xB6896943DA475493(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, 1, 0);
						unk_0x641B19E156645A92(uLocal_393[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
						unk_0x784C605D172817C8(uLocal_393[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_420(9))
					{
						uLocal_393[5] = unk_0xB6896943DA475493(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, 1, 0);
						unk_0x641B19E156645A92(uLocal_393[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
						unk_0x784C605D172817C8(uLocal_393[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_420(10))
					{
						uLocal_393[3] = unk_0xB6896943DA475493(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 1, 1, 0);
						unk_0x641B19E156645A92(uLocal_393[3], 471.48f, fVar0, 29.82f, 1, 0, 0, 1);
						unk_0x784C605D172817C8(uLocal_393[3], 0f, 0f, 116.9f, 2, 1);
					}
					uVar1 = unk_0x5E29F9399E0829A3(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (unk_0x724D816EA203A79E(uLocal_393[iVar2]))
						{
							unk_0xDC078F87049ECECE(uLocal_393[iVar2], 1, 0);
							unk_0x2C2ABC380DB95938(uLocal_393[iVar2], 1);
							unk_0x7FDC51451428DF70(uLocal_393[iVar2], uVar1);
						}
						iVar2++;
					}
					unk_0x2CA123B0622F495C(joaat("v_ilev_uvline"));
					iLocal_392 = 1;
				}
			}
		}
		else
		{
			if (iLocal_391)
			{
				unk_0x2CA123B0622F495C(joaat("v_ilev_uvline"));
				iLocal_391 = 0;
			}
			if (iLocal_392)
			{
				func_460();
				iLocal_392 = 0;
			}
		}
	}
}

int func_420(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_105220.f_9056.f_330[iParam0 /*6*/];
}

void func_421()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800.f_553)
	{
		if (!iLocal_400)
		{
			Global_69800.f_554 = 0;
			iLocal_400 = 1;
		}
		else if (Global_69800.f_554 >= 68)
		{
			Global_69800.f_553 = 0;
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
		if (func_61(&Local_674, iVar1))
		{
			func_456(&Local_695, iVar1);
			if ((Local_695.f_69 && Local_402.f_3 == 0) || iVar1 == 14)
			{
				uLocal_941[iVar1] = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Local_695.f_55, 0);
			}
			else
			{
				uLocal_941[iVar1] = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Local_674, 0);
			}
			if (func_455())
			{
				func_454(iVar1);
				func_452(iVar1);
				func_451(iVar1);
				func_450(iVar1);
				func_448(iVar1);
				func_447(iVar1);
				func_446(iVar1);
				func_423(iVar1);
				if (unk_0xFA30DFD0084E92FE(uLocal_48[iVar1], 2))
				{
					if (Global_69800.f_553)
					{
						iLocal_400 = 0;
					}
					func_461(iVar1);
				}
			}
			else
			{
				func_422(iVar1);
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
		if (unk_0xFA30DFD0084E92FE(uLocal_48[iLocal_867[iVar0]], 2))
		{
			func_461(iLocal_867[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_940 != -1)
	{
		func_461(iLocal_940);
		iLocal_940 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_461(iLocal_47);
	if (iLocal_1014)
	{
		func_461(21);
		func_461(22);
		func_461(23);
		iLocal_1014 = 0;
		bLocal_1015 = true;
	}
	else if (bLocal_1015)
	{
		bLocal_1015 = false;
	}
	if (Global_69800.f_553)
	{
		Global_69800.f_554++;
	}
}

void func_422(int iParam0)
{
	if (iLocal_117[iParam0] != 0)
	{
		unk_0x2CA123B0622F495C(iLocal_117[iParam0]);
		iLocal_117[iParam0] = 0;
	}
}

void func_423(int iParam0)
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
	if (!unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 2))
	{
		func_422(iParam0);
	}
	unk_0x7CB6FD92BE491AD9(&(uLocal_48[iParam0]), 2);
	if (unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 1))
	{
		fVar2 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Local_186[iParam0 /*3*/], 1);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 23))
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
	else if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0xFA30DFD0084E92FE(Local_674.f_9, 19) || unk_0xFA30DFD0084E92FE(Local_674.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 25) && (((iLocal_672 == 0 && Local_402.f_0 == 21) || (iLocal_672 == 0 && Local_402.f_0 == 22)) || (iLocal_672 == 0 && Local_402.f_0 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0x724D816EA203A79E(Global_69800.f_139[iParam0]))
	{
		if (unk_0xE59B7F5A03335350(Global_69800.f_139[iParam0], 0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (iParam0 == 24)
				{
					uVar3 = unk_0x3187EF5798B5D209(Global_69800.f_139[iParam0], -1, 0);
					if (!unk_0x724D816EA203A79E(uVar3))
					{
						iVar3 = unk_0xE293D7F16E1815E8(Global_69800.f_139[iParam0], -1);
					}
					iVar4 = func_385(iVar3);
					if (iVar4 != Global_105220.f_32546.f_5591)
					{
						if (func_25(iVar4))
						{
							func_445("Updating last character to use vehicle gen", iVar4);
							Global_105220.f_32546.f_5591 = iVar4;
						}
					}
				}
				if (!unk_0xB248FAA35ED47DB9(Global_69800.f_139[iParam0], 1))
				{
					func_444("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_63(Global_69800.f_139[iParam0])) && !func_62(Global_69800.f_139[iParam0])) && unk_0x6F79ECA8C83E4357(Global_69800.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x2487C8A04B65E2BD(Global_69800.f_139[iParam0], true);
					}
					Global_69800.f_139[iParam0] = 0;
					Global_69800[iParam0] = 1;
					func_443(iParam0);
					return;
				}
				if (((unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 0) && !unk_0xFA30DFD0084E92FE(Local_674.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_444("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_63(Global_69800.f_139[iParam0])) && !func_62(Global_69800.f_139[iParam0])) && unk_0x6F79ECA8C83E4357(Global_69800.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x2487C8A04B65E2BD(Global_69800.f_139[iParam0], true);
					}
					unk_0x1E7A09C1710FB071(&(Global_69800.f_139[iParam0]));
					Global_69800.f_139[iParam0] = 0;
					Global_69800[iParam0] = 1;
					func_443(iParam0);
					return;
				}
				if ((!unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (unk_0xD9C1758D86688CEA(Global_69800.f_139[iParam0], unk_0xBC25C936A095B5BA(), 1))
					{
						func_444("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_63(Global_69800.f_139[iParam0])) && !func_62(Global_69800.f_139[iParam0])) && unk_0x6F79ECA8C83E4357(Global_69800.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x2487C8A04B65E2BD(Global_69800.f_139[iParam0], true);
						}
						unk_0x1E7A09C1710FB071(&(Global_69800.f_139[iParam0]));
						Global_69800.f_139[iParam0] = 0;
						Global_69800[iParam0] = 1;
						func_443(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 1) && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Global_69800.f_139[iParam0], 1), Local_186[iParam0 /*3*/], 1) > fVar5) || (!unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 1) && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Global_69800.f_139[iParam0], 1), Local_674, 1) > fVar5))
				{
					func_444("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_63(Global_69800.f_139[iParam0])) && !func_62(Global_69800.f_139[iParam0])) && unk_0x6F79ECA8C83E4357(Global_69800.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x2487C8A04B65E2BD(Global_69800.f_139[iParam0], true);
					}
					unk_0x1E7A09C1710FB071(&(Global_69800.f_139[iParam0]));
					Global_69800.f_139[iParam0] = 0;
					Global_69800[iParam0] = 1;
					func_443(iParam0);
					return;
				}
				if (!func_67(iParam0, 0))
				{
					func_444("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_63(Global_69800.f_139[iParam0])) && !func_62(Global_69800.f_139[iParam0])) && unk_0x6F79ECA8C83E4357(Global_69800.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x2487C8A04B65E2BD(Global_69800.f_139[iParam0], true);
					}
					unk_0x1E7A09C1710FB071(&(Global_69800.f_139[iParam0]));
					Global_69800.f_139[iParam0] = 0;
					Global_69800[iParam0] = 1;
					func_443(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_47(Global_69800.f_139[iParam0], iLocal_672, 1) && !func_63(Global_69800.f_139[iParam0])) && !func_62(Global_69800.f_139[iParam0]))
					{
						func_444("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0x6F79ECA8C83E4357(Global_69800.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x2487C8A04B65E2BD(Global_69800.f_139[iParam0], true);
						}
						Global_69800.f_139[iParam0] = 0;
						Global_69800[iParam0] = 1;
						func_443(iParam0);
						return;
					}
				}
				if (uLocal_941[iParam0] > fVar0 && (!unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_50();
						iVar7 = Global_105220.f_32546.f_4801;
						func_441(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_352(iVar6, iVar7))
						{
							if ((!func_63(Global_69800.f_139[iParam0]) && !func_62(Global_69800.f_139[iParam0])) && unk_0x6F79ECA8C83E4357(Global_69800.f_139[iParam0]) != joaat("monster"))
							{
								unk_0x2487C8A04B65E2BD(Global_69800.f_139[iParam0], true);
							}
							func_31(Global_69800.f_139[iParam0], Global_105220.f_32546.f_5591);
							Global_69800[iParam0] = 1;
							func_443(iParam0);
						}
						else if (func_37(Global_69800.f_139[iParam0]))
						{
							func_32(Global_69800.f_139[iParam0], &Global_2459133);
							Global_2459132 = Global_105220.f_32546.f_5591;
							iLocal_1029 = Global_69800.f_139[iParam0];
						}
					}
					func_444("No longer needed: Player out for range");
					unk_0x1E7A09C1710FB071(&(Global_69800.f_139[iParam0]));
					unk_0x6C5F5B5F6894CCE3(Local_674, 3f, 0, 0, 0, 0);
					unk_0xEDAD35A0D81ED3FB(Local_674, 3f, 0, 0, 0, 0, 0, 0);
					Global_69800.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
					{
						Global_69800.f_584 = { Local_674 };
						Global_69800.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 30))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_674.f_9, 31))
					{
						if (!unk_0x8B2EFFDCF3FE7E80(Global_69800.f_139[iParam0]) && !unk_0xE7E55F7532DEE345(Global_69800.f_139[iParam0]))
						{
							Var8 = { unk_0x541C2AEF053615BC(Global_69800.f_139[iParam0], 1) };
							if (Var8.f_2 >= func_440(iParam0))
							{
								unk_0x625842570605740F(Global_69800.f_139[iParam0], 1);
								unk_0xF0059F27F7BB6680(&(Local_674.f_9), 31);
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
		Global_69800.f_139[iParam0] = 0;
	}
	if (unk_0x724D816EA203A79E(Global_69800.f_139[iParam0]))
	{
		func_444("No longer needed: Vehicle not driveable");
		unk_0x1E7A09C1710FB071(&(Global_69800.f_139[iParam0]));
		Global_69800.f_139[iParam0] = 0;
		Global_69800[iParam0] = 1;
		func_443(iParam0);
		return;
	}
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	if (Global_70707 == iParam0)
	{
		func_444("Processing a vehgen vehicle handover request.");
		if (unk_0x724D816EA203A79E(Global_70706) && unk_0xE59B7F5A03335350(Global_70706, 0))
		{
			if (unk_0x724D816EA203A79E(Global_69800.f_139[iParam0]) && unk_0xE59B7F5A03335350(Global_69800.f_139[iParam0], 0))
			{
				if (Global_69800.f_139[iParam0] == Global_70706)
				{
					func_444("Vehicle to be handed over is the same vehicle.");
					Global_70707 = -1;
					Global_70706 = 0;
					return;
				}
				else
				{
					func_444("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_63(Global_69800.f_139[iParam0])) && !func_62(Global_69800.f_139[iParam0])) && unk_0x6F79ECA8C83E4357(Global_69800.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x2487C8A04B65E2BD(Global_69800.f_139[iParam0], true);
					}
					unk_0x1E7A09C1710FB071(&(Global_69800.f_139[iParam0]));
					Global_69800.f_139[iParam0] = 0;
				}
			}
			Global_69800.f_139[iParam0] = Global_70706;
			Global_69800[iParam0] = 1;
			unk_0x7CB6FD92BE491AD9(&(uLocal_48[iParam0]), 0);
			unk_0xF0059F27F7BB6680(&(uLocal_48[iParam0]), 1);
			unk_0x7CB6FD92BE491AD9(&(uLocal_48[iParam0]), 3);
			Local_186[iParam0 /*3*/] = { unk_0x541C2AEF053615BC(Global_70706, 1) };
			Global_70707 = -1;
			if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 10))
			{
				Var11.f_9 = 49;
				Var11.f_59 = 2;
				func_32(Global_70706, &Var11);
				if (Global_70708)
				{
					func_113(iParam0, &Var11, unk_0x541C2AEF053615BC(Global_70706, 1), unk_0x349C94FFF43E2979(Global_70706), func_46(Global_70706));
				}
				else
				{
					func_113(iParam0, &Var11, Global_105220.f_32546.f_1864[Local_674.f_14 /*3*/], Global_105220.f_32546.f_1934[Local_674.f_14], func_46(Global_70706));
				}
				Global_69800.f_139[iParam0] = Global_70706;
				Global_69800.f_484[iParam0] = Global_69800.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar89 = func_457();
				if (func_25(iVar89))
				{
					func_444("Players stored switch vehicle cleared for prep getaway.");
					Global_92723[iVar89] = 0;
				}
			}
			unk_0x77815D3407C6700D(Global_69800.f_139[iParam0], 1, 1);
			if (iParam0 == 24)
			{
				unk_0x2487C8A04B65E2BD(Global_69800.f_139[iParam0], false);
			}
			Global_70706 = 0;
			if (Global_2459133.f_66 != 0)
			{
				func_273(&Global_2459133, Global_2459132);
				Global_2459133.f_66 = 0;
			}
			return;
		}
		if (Global_2459133.f_66 != 0)
		{
			func_273(&Global_2459133, Global_2459132);
			Global_2459133.f_66 = 0;
		}
		func_444("Vehicle to be handed over doesn't exist.");
		Global_70707 = -1;
		Global_70706 = 0;
	}
	if (Global_69800[iParam0])
	{
		if (uLocal_941[iParam0] >= fVar0)
		{
			Global_69800[iParam0] = 0;
			func_444("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_69800.f_584 = { 0f, 0f, 0f };
			Global_69800.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar90 = false;
	if (uLocal_941[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_105220.f_32546.f_1958[Local_674.f_14] != 0) && Global_105220.f_32546.f_1958[Local_674.f_14] > 3) && Local_674.f_4 != 0) && func_67(iParam0, 0)) && func_39(Local_674.f_4, 0))
		{
			iVar91 = func_50();
			iVar92 = Global_105220.f_32546.f_4801;
			func_441(&iVar92, 0, 0, 17, 0, 0, 0);
			if (func_352(iVar91, iVar92))
			{
				func_273(&(Global_105220.f_32546.f_69[Local_674.f_14 /*78*/]), Global_105220.f_32546.f_5591);
				func_443(iParam0);
				Global_69800[iParam0] = 1;
				func_444("Cannot be created: Vehicle ready for impound");
				Global_2459133.f_66 = 0;
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
		Global_69800.f_584 = { 0f, 0f, 0f };
		Global_69800.f_587 = { 0f, 0f, 0f };
	}
	if (Local_674.f_4 == 0)
	{
		Global_69800[iParam0] = 1;
		func_444("Cannot be created: Dummy model");
		return;
	}
	if (!func_39(Local_674.f_4, 0))
	{
		Global_69800[iParam0] = 1;
		func_444("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_67(iParam0, 0))
	{
		Global_69800[iParam0] = 1;
		func_444("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 14) && !func_67(iParam0, 5))
	{
		Global_69800[iParam0] = 1;
		func_444("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_439() && func_438(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_69800[iParam0] = 1;
		func_444("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_673)
	{
		Global_69800[iParam0] = 1;
		func_444("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 10))
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_484[iParam0]))
		{
			Global_69800[iParam0] = 1;
			func_444("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_69800.f_484[iParam0] = 0;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 6))
	{
		if (func_437(Local_674.f_4, -1))
		{
			Global_69800[iParam0] = 1;
			func_444("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_436(Local_674.f_4, -1))
		{
			Global_69800[iParam0] = 1;
			func_444("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 29))
	{
		if (Local_402.f_3 == 0)
		{
			return;
		}
	}
	if (func_435(iParam0))
	{
		Global_69800[iParam0] = 1;
		func_444("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0x7930B3E9C919E90F() && unk_0xFAB96FF5BAB29092() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_69800[iParam0] = 1;
			func_444("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar93 = 0;
	if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 19))
	{
		iVar93 = 2;
	}
	else if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 20))
	{
		iVar93 = 1;
	}
	if ((iParam0 == 24 && Global_105220.f_32546.f_1958[Local_674.f_14] > 0) && Global_105220.f_32546.f_1958[Local_674.f_14] <= 3)
	{
		if (unk_0x7512ED01F3F46714(Local_674.f_4))
		{
			iVar93 = 2;
			Local_674.f_12 = (Global_105220.f_32546.f_1958[Local_674.f_14] - 1);
		}
		else if (unk_0x7C28D15641461C68(Local_674.f_4))
		{
			iVar93 = 1;
			Local_674.f_12 = (Global_105220.f_32546.f_1958[Local_674.f_14] - 1);
		}
	}
	if (iVar93 != 0)
	{
		if (func_434(Local_674.f_12, iVar93, Local_674, -1f))
		{
			Global_69800[iParam0] = 1;
			func_444("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_463(iParam0, 0);
			}
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 19) || unk_0xFA30DFD0084E92FE(Local_674.f_9, 20))
		{
			if (iVar93 == 2)
			{
				if (Global_90479[Local_674.f_12 /*3*/][1] != -1 && (unk_0x105601648511CC64() - Global_90479[Local_674.f_12 /*3*/][1]) < unk_0x5BEE008DE1E4AA67() * 180)
				{
					Global_69800[iParam0] = 1;
					func_444("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var94, "...", 24);
					StringIntConCat(&Var94, ((unk_0x5BEE008DE1E4AA67() * 180 - (unk_0x105601648511CC64() - Global_90479[Local_674.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var94, " seconds", 24);
					func_444(&Var94);
					return;
				}
			}
			else if (iVar93 == 1)
			{
				if (Global_90479[Local_674.f_12 /*3*/][0] != -1 && (unk_0x105601648511CC64() - Global_90479[Local_674.f_12 /*3*/][0]) < unk_0x5BEE008DE1E4AA67() * 180)
				{
					Global_69800[iParam0] = 1;
					func_444("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var100, "...", 24);
					StringIntConCat(&Var100, ((unk_0x5BEE008DE1E4AA67() * 180 - (unk_0x105601648511CC64() - Global_90479[Local_674.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var100, " seconds", 24);
					func_444(&Var100);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
	{
		Global_69800.f_584 = { Local_674 };
	}
	if (bVar90)
	{
		return;
	}
	if (iVar93 != 0)
	{
		iLocal_117[iParam0] = func_23(Local_674.f_12, iVar93);
		unk_0xF243B7A14FCFD0F4(iLocal_117[iParam0]);
		unk_0xF0059F27F7BB6680(&(uLocal_48[iParam0]), 2);
		if (!unk_0xD6513D668481290A(iLocal_117[iParam0]))
		{
			func_444("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_433(iLocal_117[iParam0], Local_674, 1))
		{
			func_444("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0x6C5F5B5F6894CCE3(Local_674, 3f, 0, 0, 0, 0);
		unk_0xEDAD35A0D81ED3FB(Local_674, 3f, 0, 0, 0, 0, 0, 0);
		if (iVar93 == 2)
		{
			func_428(&(Global_69800.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 2);
		}
		else if (iVar93 == 1)
		{
			func_428(&(Global_69800.f_139[iParam0]), Local_674.f_12, Local_674, Local_674.f_3, 0, 1);
		}
		else
		{
			Global_69800[iParam0] = 1;
			func_444("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0xF243B7A14FCFD0F4(Local_674.f_4);
		iLocal_117[iParam0] = Local_674.f_4;
		unk_0xF0059F27F7BB6680(&(uLocal_48[iParam0]), 2);
		if (!unk_0xD6513D668481290A(Local_674.f_4))
		{
			func_444("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_433(Local_674.f_4, Local_674, 1))
		{
			func_444("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0x6C5F5B5F6894CCE3(Local_674, 3f, 0, 0, 0, 0);
		unk_0xEDAD35A0D81ED3FB(Local_674, 3f, 0, 0, 0, 0, 0, 0);
		if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 23))
		{
			unk_0xAEF1F12C42859E39(Local_674);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_674.f_4 == joaat("submersible2"))
			{
				Local_674.f_2 = -3f;
			}
		}
		Global_69800.f_139[iParam0] = unk_0x61C05BF08A1E0EFE(Local_674.f_4, Local_674, Local_674.f_3, 1, 1, 0);
		if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 10))
		{
			if (unk_0xA19D269B4B5A1532(Local_674.f_4))
			{
				unk_0xF0059F27F7BB6680(&(Global_105220.f_32546.f_69[Local_674.f_14 /*78*/].f_77), 22);
			}
			if (unk_0xFA30DFD0084E92FE(Global_105220.f_32546.f_69[Local_674.f_14 /*78*/].f_77, 14))
			{
				func_32(Global_69800.f_139[iParam0], &Local_776);
				func_427(Local_776.f_77, &(Global_105220.f_32546.f_69[Local_674.f_14 /*78*/].f_77), Local_674.f_4);
				unk_0x7CB6FD92BE491AD9(&(Global_105220.f_32546.f_69[Local_674.f_14 /*78*/].f_77), 14);
			}
			func_365(Global_69800.f_139[iParam0], &(Global_105220.f_32546.f_69[Local_674.f_14 /*78*/]), 0, 1);
			Global_69800.f_484[iParam0] = Global_69800.f_139[iParam0];
		}
		else
		{
			if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 9))
			{
				unk_0x914C5DE0B15B8B59(Global_69800.f_139[iParam0], Local_674.f_10, Local_674.f_11);
			}
			if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 8))
			{
				unk_0xD421BC740C5340C3(Global_69800.f_139[iParam0], 2);
				unk_0xA9B952D290D440DC(Global_69800.f_139[iParam0], 0);
				unk_0xE4F4552195F606F3(Global_69800.f_139[iParam0], 0);
				unk_0x156B8835BE8B6B6C(Global_69800.f_139[iParam0], 0);
				unk_0xE365C09E06B55C51(Global_69800.f_139[iParam0], 0);
				unk_0x7387EA04915F201E(Global_69800.f_139[iParam0], 0);
				unk_0xE82050D41B744FF3(Global_69800.f_139[iParam0], false);
				unk_0x1E5C2A1EAB944289(Global_69800.f_139[iParam0], 1);
				unk_0x346478B12F69D4E3(Global_69800.f_139[iParam0], 1);
			}
		}
	}
	if (unk_0x724D816EA203A79E(Global_69800.f_139[iParam0]))
	{
		func_426("Created - Coords: ", Local_674);
		func_425("Created - Dist From Player:", uLocal_941[iParam0]);
		if (((iParam0 == 0 && iLocal_672 == 0) || (iParam0 == 6 && iLocal_672 == 2)) || (iParam0 == 2 && iLocal_672 == 1))
		{
			Global_69800.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_674.f_4)
		{
			case joaat("miljet"):
				unk_0x914C5DE0B15B8B59(Global_69800.f_139[iParam0], 121, 21);
				unk_0x4C59702AC1076A88(Global_69800.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				unk_0x914C5DE0B15B8B59(Global_69800.f_139[iParam0], 122, 89);
				unk_0x4C59702AC1076A88(Global_69800.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0x914C5DE0B15B8B59(Global_69800.f_139[iParam0], 0, 0);
				unk_0x4C59702AC1076A88(Global_69800.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				unk_0x914C5DE0B15B8B59(Global_69800.f_139[iParam0], 131, 132);
				unk_0x4C59702AC1076A88(Global_69800.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0x914C5DE0B15B8B59(Global_69800.f_139[iParam0], 159, 0);
				unk_0x4C59702AC1076A88(Global_69800.f_139[iParam0], 160, 156);
				break;
		}
		if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 22))
		{
			unk_0x625842570605740F(Global_69800.f_139[iParam0], 1);
		}
		if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 30))
		{
			unk_0x7CB6FD92BE491AD9(&(Local_674.f_9), 31);
		}
		if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 26))
		{
			unk_0xD421BC740C5340C3(Global_69800.f_139[iParam0], 7);
			unk_0xEC6E535291C98050(Global_69800.f_139[iParam0], 1);
		}
		func_424(Global_69800.f_139[iParam0], iParam0);
		if (!unk_0xFA30DFD0084E92FE(Local_674.f_9, 29) && !unk_0xFA30DFD0084E92FE(Local_674.f_9, 30))
		{
			unk_0xF0A40F19AAB79E88(Global_69800.f_139[iParam0], 1084227584);
		}
		unk_0x55AFEE10B3CE5C2C(Global_69800.f_139[iParam0], 0f);
		unk_0x656194E145691D3E(Global_69800.f_139[iParam0], 1);
		unk_0x2487C8A04B65E2BD(Global_69800.f_139[iParam0], unk_0xFA30DFD0084E92FE(Local_674.f_9, 5));
	}
	unk_0x7CB6FD92BE491AD9(&(uLocal_48[iParam0]), 0);
	unk_0x7CB6FD92BE491AD9(&(uLocal_48[iParam0]), 1);
	Global_69800[iParam0] = 1;
	if (iVar93 != 0)
	{
		Global_69800.f_69[iParam0] = 1;
	}
	iVar106 = func_166(458, -1, -1);
	if (iVar106 != 0 && iVar106 == iParam0)
	{
		iLocal_1028 = Global_69800.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2459133.f_66 = 0;
	}
}

void func_424(int iParam0, int iParam1)
{
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				unk_0xD75C62D3076EC399(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				unk_0xD75C62D3076EC399(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				unk_0xD75C62D3076EC399(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				unk_0xE54F7105CEA81918(iParam0, 6, false);
				unk_0xE54F7105CEA81918(iParam0, 1, true);
				break;
			}
	}
}

void func_425(char* sParam0, float fParam1)
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_426(char* sParam0, float fParam1, var uParam2, var uParam3)
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_427(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0x7CB6FD92BE491AD9(&iVar0, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			unk_0x7CB6FD92BE491AD9(&iVar0, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, 1);
			unk_0x7CB6FD92BE491AD9(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			unk_0x7CB6FD92BE491AD9(&iVar0, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, 1);
			unk_0x7CB6FD92BE491AD9(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			unk_0x7CB6FD92BE491AD9(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			unk_0x7CB6FD92BE491AD9(&iVar0, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, 1);
			unk_0x7CB6FD92BE491AD9(&iVar0, 2);
			break;
		
		case joaat("chino"):
			unk_0x7CB6FD92BE491AD9(&iVar0, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, 1);
			unk_0x7CB6FD92BE491AD9(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_428(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
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
		if (unk_0x724D816EA203A79E(*iParam0))
		{
			if (unk_0x6F79ECA8C83E4357(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_105220.f_2354.f_539.f_4296) && Global_105220.f_9056.f_99.f_58[131])
		{
			Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0xF243B7A14FCFD0F4(Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
			if (unk_0xD6513D668481290A(Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x61C05BF08A1E0EFE(Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/], Param2, uParam5, 0, 0, 0);
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				unk_0x551DF575AE9A2969(*iParam0, 0);
				unk_0x2487C8A04B65E2BD(*iParam0, false);
				unk_0xA73D1278857991A2(*iParam0, 1);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				unk_0xE6E403909F4BF47F(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x914C5DE0B15B8B59(*iParam0, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_5, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x4C59702AC1076A88(*iParam0, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_7, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x55AFEE10B3CE5C2C(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0xE54F7105CEA81918(*iParam0, iVar103 + 1, !Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x761268F52DF5D5D9(*iParam0, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_432(&uVar1, &uVar0))
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &uVar1);
					unk_0x5EDEB04A454C1C0C(*iParam0, uVar0);
				}
				else
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &(Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 < unk_0xECE72A06BBAC88B0())
					{
						unk_0x5EDEB04A454C1C0C(*iParam0, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x05D05A0BAA6CA8B1(*iParam0, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_84, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_85, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0xE82050D41B744FF3(*iParam0, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x84A3F4F29630A320(*iParam0, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x13CA55A989DEB72C(*iParam0, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_93, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_94, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x200ACC5C718FF287(*iParam0, 2, unk_0xFA30DFD0084E92FE(Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x200ACC5C718FF287(*iParam0, 3, unk_0xFA30DFD0084E92FE(Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x200ACC5C718FF287(*iParam0, 0, unk_0xFA30DFD0084E92FE(Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x200ACC5C718FF287(*iParam0, 1, unk_0xFA30DFD0084E92FE(Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x7170EF3CEB4D0224(*iParam0, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(*iParam0)))
					{
						if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(*iParam0)))
						{
							if (Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xD2F70373DBF15801(*iParam0, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xD2F70373DBF15801(*iParam0, Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_366(iParam0, &(Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_31), &(Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x0C95DC9BB0F56943(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bodhi2"))
					{
						func_430(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x2CA123B0622F495C(Global_105220.f_2354.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
				}
				func_429(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0xF243B7A14FCFD0F4(Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
			if (unk_0xD6513D668481290A(Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x61C05BF08A1E0EFE(Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0, 0);
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				unk_0x551DF575AE9A2969(*iParam0, 0);
				unk_0x2487C8A04B65E2BD(*iParam0, false);
				unk_0xA73D1278857991A2(*iParam0, 1);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				unk_0xE6E403909F4BF47F(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x914C5DE0B15B8B59(*iParam0, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_5, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x4C59702AC1076A88(*iParam0, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_7, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x55AFEE10B3CE5C2C(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0xE54F7105CEA81918(*iParam0, iVar104 + 1, !Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x761268F52DF5D5D9(*iParam0, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_432(&uVar1, &uVar0))
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &uVar1);
					unk_0x5EDEB04A454C1C0C(*iParam0, uVar0);
				}
				else
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &(Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 < unk_0xECE72A06BBAC88B0())
					{
						unk_0x5EDEB04A454C1C0C(*iParam0, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x05D05A0BAA6CA8B1(*iParam0, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_84, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_85, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0xE82050D41B744FF3(*iParam0, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x84A3F4F29630A320(*iParam0, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x13CA55A989DEB72C(*iParam0, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_93, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_94, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x200ACC5C718FF287(*iParam0, 2, unk_0xFA30DFD0084E92FE(Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x200ACC5C718FF287(*iParam0, 3, unk_0xFA30DFD0084E92FE(Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x200ACC5C718FF287(*iParam0, 0, unk_0xFA30DFD0084E92FE(Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x200ACC5C718FF287(*iParam0, 1, unk_0xFA30DFD0084E92FE(Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x7170EF3CEB4D0224(*iParam0, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(*iParam0)))
					{
						if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(*iParam0)))
						{
							if (Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xD2F70373DBF15801(*iParam0, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xD2F70373DBF15801(*iParam0, Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_366(iParam0, &(Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_31), &(Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x0C95DC9BB0F56943(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bodhi2"))
					{
						func_430(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x2CA123B0622F495C(Global_105220.f_2354.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
				}
				func_429(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0xF243B7A14FCFD0F4(Var5.f_0);
			if (unk_0xD6513D668481290A(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0x61C05BF08A1E0EFE(Var5.f_0, Param2, fParam5, 1, 1, 0);
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				unk_0x551DF575AE9A2969(*iParam0, 0);
				unk_0x2487C8A04B65E2BD(*iParam0, false);
				unk_0xA73D1278857991A2(*iParam0, 1);
				StringCopy(&cVar106, unk_0x2232934AD664DD49(*iParam0), 16);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				unk_0xE6E403909F4BF47F(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x914C5DE0B15B8B59(*iParam0, Var5.f_5, Var5.f_6);
				unk_0x4C59702AC1076A88(*iParam0, Var5.f_7, Var5.f_8);
				unk_0x55AFEE10B3CE5C2C(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0xE54F7105CEA81918(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x761268F52DF5D5D9(*iParam0, Var5.f_24);
				}
				if (func_432(&uVar1, &uVar0))
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &uVar1);
					unk_0x5EDEB04A454C1C0C(*iParam0, uVar0);
				}
				else
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0xECE72A06BBAC88B0())
					{
						unk_0x5EDEB04A454C1C0C(*iParam0, Var5.f_26);
					}
				}
				unk_0x05D05A0BAA6CA8B1(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0xE82050D41B744FF3(*iParam0, Var5.f_88);
				unk_0x84A3F4F29630A320(*iParam0, Var5.f_87);
				unk_0x13CA55A989DEB72C(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0x200ACC5C718FF287(*iParam0, 2, unk_0xFA30DFD0084E92FE(Var5.f_92, 28));
				unk_0x200ACC5C718FF287(*iParam0, 3, unk_0xFA30DFD0084E92FE(Var5.f_92, 29));
				unk_0x200ACC5C718FF287(*iParam0, 0, unk_0xFA30DFD0084E92FE(Var5.f_92, 30));
				unk_0x200ACC5C718FF287(*iParam0, 1, unk_0xFA30DFD0084E92FE(Var5.f_92, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0x7170EF3CEB4D0224(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(*iParam0)))
					{
						if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0xD2F70373DBF15801(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0xD2F70373DBF15801(*iParam0, Var5.f_90);
						}
					}
				}
				func_366(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x0C95DC9BB0F56943(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bagger") && !Global_105220.f_9056.f_99.f_58[118])
					{
						unk_0xEA0AB6C644C58C1D(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bodhi2"))
					{
						func_430(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_105220.f_2354.f_539.f_4296) && Global_105220.f_9056.f_99.f_58[131]) && unk_0x6F79ECA8C83E4357(*iParam0) == joaat("tailgater"))
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, 6, 1, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 14, 7, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 11, 2, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 2, 3, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 7, 5, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 0, 0, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 3, 3, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 13, 1, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 4, 3, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 12, 2, false);
					unk_0xB25E25030D61B529(*iParam0, 22, true);
					unk_0xD2F70373DBF15801(*iParam0, 2);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 23, 11, false);
					unk_0x84A3F4F29630A320(*iParam0, 2);
					Global_105220.f_2354.f_539.f_4296 = 1;
					func_225(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x2CA123B0622F495C(Var5.f_0);
				}
				if (bVar105)
				{
					func_429(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_429(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			Global_90431[iVar0] = iParam0;
			Global_90441[iVar0] = iParam1;
			Global_90451[iVar0] = unk_0x6F79ECA8C83E4357(iParam0);
			if (unk_0x7C28D15641461C68(Global_90451[iVar0]))
			{
				Global_90479[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90479[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_430(var uParam0)
{
	if (!func_431(*uParam0))
	{
		unk_0xE54F7105CEA81918(*uParam0, 5, !Global_105220.f_9056.f_99.f_58[119]);
	}
}

bool func_431(int iParam0)
{
	return unk_0xFC8A228C62614C5C(iParam0, 5);
}

int func_432(var uParam0, var uParam1)
{
	if (unk_0x7AF0088ABFA713B6())
	{
	}
	else if (Global_105220.f_20089.f_261)
	{
		*uParam0 = { Global_105220.f_20089.f_267 };
		*uParam1 = Global_105220.f_20089.f_271;
		return 1;
	}
	return 0;
}

int func_433(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if ((iParam4 && unk_0x17FAADF9916EF741()) && unk_0xB731B8C5BCE89836(joaat("startup_positioning")) > 0)
	{
		func_444("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	unk_0x2B3953EE61953843(uParam0, &Var0, &Var3);
	fVar6 = unk_0xF0F2FC9DE291567F(Var3, Var0, 1);
	if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Param1, 1) < (fVar6 * 0.5f))
	{
		func_425("player is in vehicle bounds - fLength: ", fVar6);
		func_425("player is in vehicle bounds - fDistance: ", unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Param1, 1));
		return 1;
	}
	return 0;
}

int func_434(int iParam0, int iParam1, struct<3> Param2, float fParam5)
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
			if (unk_0x724D816EA203A79E(Global_90431[iVar0]) && unk_0xE59B7F5A03335350(Global_90431[iVar0], 0))
			{
				if (unk_0x6F79ECA8C83E4357(Global_90431[iVar0]) == iVar99 && Global_90441[iVar0] == iParam0)
				{
					if (fParam5 == -1f || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Global_90431[iVar0], 0), Param2, 1) <= fParam5)
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

int func_435(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_674.f_4 == joaat("frogger2"))
		{
			if (((func_437(Local_674.f_4, -1) || func_436(Local_674.f_4, -1)) || unk_0xB731B8C5BCE89836(joaat("exile2")) > 0) || !func_420(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((unk_0x724D816EA203A79E(Global_69800.f_484[20]) && !unk_0x1D403DFADBC2DE3C(Global_69800.f_484[20], 0)) && unk_0xE59B7F5A03335350(Global_69800.f_484[20], 0))
		{
			if (Local_674.f_4 == unk_0x6F79ECA8C83E4357(Global_69800.f_484[20]))
			{
				unk_0x87F182D2DA225F0D(Global_69800.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_674.f_10 && iVar1 == Local_674.f_11)
				{
					func_268(20);
				}
			}
		}
	}
	return 0;
}

int func_436(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = unk_0x39827CF9BEAB804C(Local_674, 200f, iParam0, iVar0);
	if ((unk_0x724D816EA203A79E(iVar1) && unk_0xE59B7F5A03335350(iVar1, 0)) && unk_0x6F79ECA8C83E4357(iVar1) == iParam0)
	{
		if (iParam1 == -1 || unk_0x0FF608FD384AF8FA(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_437(int iParam0, int iParam1)
{
	var uVar0[50];
	int iVar51;
	int iVar52;
	
	iVar52 = unk_0xD7F48BFEBC0E3FB2(unk_0xBC25C936A095B5BA(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52)
	{
		if ((unk_0x724D816EA203A79E(uVar0[iVar51]) && unk_0xE59B7F5A03335350(uVar0[iVar51], 0)) && unk_0x6F79ECA8C83E4357(uVar0[iVar51]) == iParam0)
		{
			if (iParam1 == -1 || unk_0x0FF608FD384AF8FA(uVar0[iVar51]) == iParam1)
			{
				return 1;
			}
		}
		iVar51++;
	}
	return 0;
}

int func_438(int iParam0)
{
	if (Global_35905 == 15)
	{
		return 0;
	}
	if (func_348(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_439()
{
	return Global_69800.f_138;
}

float func_440(int iParam0)
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

void func_441(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_55(*uParam0);
	iVar1 = func_57(*uParam0);
	iVar2 = func_356(*uParam0);
	iVar3 = func_355(*uParam0);
	iVar4 = func_354(*uParam0);
	iVar5 = func_353(*uParam0);
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
	iVar6 = func_54(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_54(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_442(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_442(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_60(uParam0, iParam1);
	func_59(uParam0, iParam2);
	func_58(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_53(uParam0, iParam4);
	func_51(uParam0, iParam6);
}

void func_443(int iParam0)
{
	if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 13))
	{
		func_463(iParam0, 0);
	}
}

void func_444(char* sParam0)
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
	}
}

void func_445(char* sParam0, int iParam1)
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_446(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
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
			bVar0 = !func_67(iParam0, 5);
			Var1 = { -961.42f, -2794.47f, 12.96f };
			fVar4 = -209.22f;
			iVar5 = 0;
			iVar6 = joaat("prop_airport_sale_sign");
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_67(iParam0, 5);
			Var1 = { -827.93f, -1368.14f, 3.9982f };
			fVar4 = -68.75f;
			iVar5 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_67(iParam0, 5);
			bVar0 = true;
			Var1 = { -710.07f, -1414.31f, 4f };
			fVar4 = -41.25f;
			iVar5 = 2;
			break;
		
		case 21:
			bVar0 = !func_67(iParam0, 5);
			Var1 = { -66.21f, 77.76f, 70.51f };
			fVar4 = -27f;
			iVar5 = 3;
			break;
		
		case 22:
			bVar0 = !func_67(iParam0, 5);
			Var1 = { -76.02f, -1825.61f, 25.88f };
			fVar4 = -129.67f;
			iVar5 = 4;
			break;
		
		case 23:
			bVar0 = !func_67(iParam0, 5);
			Var1 = { -218.68f, -1165.76f, 21.99f };
			fVar4 = 89.95f;
			iVar5 = 5;
			break;
	}
	if (bVar0 && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Var1, 1) < 250f)
	{
		if (!unk_0x724D816EA203A79E(uLocal_858[iVar5]))
		{
			unk_0xF243B7A14FCFD0F4(iVar6);
			iLocal_865 = 1;
			if (unk_0xD6513D668481290A(iVar6))
			{
				if (iLocal_865)
				{
					uLocal_858[iVar5] = unk_0x1E0CB5BD6231AB3D(iVar6, Var1, 0, 1, 0);
					unk_0x784C605D172817C8(uLocal_858[iVar5], 0f, 0f, fVar4, 2, 1);
					unk_0x30034548191398D0(uLocal_858[iVar5], 0);
					unk_0x346478B12F69D4E3(uLocal_858[iVar5], 1);
					unk_0x2CA123B0622F495C(iVar6);
					iLocal_865 = 0;
				}
			}
		}
	}
	else if (iVar5 != -1)
	{
		if ((unk_0x724D816EA203A79E(uLocal_858[iVar5]) && !unk_0xD1DC4B08247A4317(uLocal_858[iVar5])) && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Var1, 1) > 255f)
		{
			unk_0xA35241BCE4C1A24B(&(uLocal_858[iVar5]));
			if (iLocal_865)
			{
				unk_0x2CA123B0622F495C(iVar6);
				iLocal_865 = 0;
			}
		}
	}
}

void func_447(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (func_67(iParam0, 0) && (!unk_0xFA30DFD0084E92FE(Local_674.f_9, 14) || func_67(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_69800.f_346[iParam0] != bVar0)
	{
		if (!func_21(Local_674.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_69800.f_346[iParam0])
				{
					unk_0x483687B0FCA5415A(Global_69800.f_415[iParam0], 0);
				}
			}
			else if (!Global_69800.f_346[iParam0])
			{
				Global_69800.f_415[iParam0] = unk_0x1DAA351326EA3537(Local_674.f_15, Local_674.f_18, 0, 1, 1, 1);
			}
		}
		Global_69800.f_346[iParam0] = bVar0;
	}
}

void func_448(int iParam0)
{
	int iVar0;
	
	if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 15))
	{
		if (func_67(iParam0, 0) && !func_67(iParam0, 5))
		{
			iVar0 = 145;
			if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 16))
			{
				iVar0 = func_449(9);
			}
			else if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 18))
			{
				iVar0 = func_449(4);
			}
			if (iVar0 == Local_674.f_12)
			{
				func_316(iParam0, 5, 1);
			}
		}
	}
}

int func_449(int iParam0)
{
	return Global_105220.f_24875[iParam0 /*4*/];
}

void func_450(int iParam0)
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 3))
	{
		if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 4))
		{
			func_316(iParam0, 3, 1);
		}
		else
		{
			func_316(iParam0, 3, 1);
		}
	}
}

void func_451(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_67(iParam0, 0) && bLocal_673)
	{
		if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 0) || (unk_0xFA30DFD0084E92FE(Local_674.f_9, 2) && !func_67(iParam0, 2)))
		{
			if ((!unk_0xFA30DFD0084E92FE(Local_674.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0 || func_67(iParam0, 5)) || !unk_0xFA30DFD0084E92FE(Local_674.f_9, 28)))
			{
				bVar0 = false;
				if (!unk_0x2DA8CA50A72528FB(Global_69800.f_208[iParam0]))
				{
					if (func_420(0))
					{
						if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 14) && !func_67(iParam0, 5))
						{
							Global_69800.f_208[iParam0] = unk_0x390CF6C8AD6903B7(Local_695.f_55);
							if (Local_695.f_58 != -1)
							{
								unk_0xBF0E22F3E083C33D(Global_69800.f_208[iParam0], Local_695.f_58);
								if (!unk_0xF1734B55490E9045(&(Local_695.f_59)))
								{
									unk_0x436D0272182E484D(Global_69800.f_208[iParam0], &(Local_695.f_59));
								}
							}
						}
						else if (func_67(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_69800.f_208[iParam0] = unk_0x390CF6C8AD6903B7(Local_695.f_55);
							if (Local_674.f_13 != -1)
							{
								unk_0xBF0E22F3E083C33D(Global_69800.f_208[iParam0], Local_674.f_13);
								if (!unk_0xF1734B55490E9045(&(Local_695.f_59)))
								{
									unk_0x436D0272182E484D(Global_69800.f_208[iParam0], &(Local_695.f_59));
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
								unk_0x0D5352939CC40C16(Global_69800.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_69800.f_208[iParam0] = unk_0x390CF6C8AD6903B7(Local_674);
							if (Local_674.f_13 != -1)
							{
								unk_0xBF0E22F3E083C33D(Global_69800.f_208[iParam0], Local_674.f_13);
								if (!unk_0xF1734B55490E9045(&(Local_695.f_59)))
								{
									unk_0x436D0272182E484D(Global_69800.f_208[iParam0], &(Local_695.f_59));
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
									unk_0x0D5352939CC40C16(Global_69800.f_208[iParam0], iVar2);
								}
							}
						}
						unk_0x4909873A6873A6C3(Global_69800.f_208[iParam0], !unk_0xFA30DFD0084E92FE(Local_674.f_9, 1));
						unk_0x7A6BBF86FCBBCF7E(Global_69800.f_208[iParam0], 0);
						unk_0x12DB69036F6569F7(Global_69800.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0x2DA8CA50A72528FB(Global_69800.f_208[iParam0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(Global_69800.f_208[iParam0]));
		}
	}
}

void func_452(int iParam0)
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 1))
	{
		if (func_67(iParam0, 4))
		{
			if (unk_0xFA30DFD0084E92FE(Local_674.f_9, 3))
			{
				func_453(&(Local_674.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_316(iParam0, 1, 1);
			}
			else
			{
				func_316(iParam0, 1, 1);
			}
		}
	}
}

void func_453(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_276(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_454(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xFA30DFD0084E92FE(Local_674.f_9, 7) || Local_674.f_12 == iLocal_672)
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
	if ((bLocal_673 && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && unk_0xFA30DFD0084E92FE(Local_674.f_9, 14))
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
					while (iVar0 < Global_69800.f_592)
					{
						Global_69800.f_592[iVar0] = -1;
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
						iVar2 = func_130(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_69800.f_592)
							{
								switch (Local_402.f_6)
								{
									case 3:
										if (func_65(iVar2))
										{
											Global_69800.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (unk_0x8C1A6E7D5F410F4A(iVar2))
										{
											Global_69800.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((unk_0xE7B3A320107C1379(iVar2) || unk_0x7974165A9BC75283(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_69800.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_66(iVar2))
										{
											Global_69800.f_592[iVar1] = iVar0;
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
	if (!unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 0))
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_139[iParam0]))
		{
			if (unk_0xE59B7F5A03335350(Global_69800.f_139[iParam0], 0))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_69800.f_139[iParam0], 0))
					{
						if (!unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 1) || unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 3))
						{
							unk_0xF0059F27F7BB6680(&(uLocal_48[iParam0]), 0);
							func_316(iParam0, 4, 1);
							func_316(iParam0, 2, 1);
						}
					}
					else
					{
						unk_0xF0059F27F7BB6680(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((unk_0x724D816EA203A79E(Global_69800.f_484[iParam0]) && unk_0xE59B7F5A03335350(Global_69800.f_484[iParam0], 0)) && unk_0x6F79ECA8C83E4357(Global_69800.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_1030)
			{
				if (unk_0x0C265B3C448E6954(Global_69800.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
				{
					unk_0x4E47CBCAA9BEC572(Global_69800.f_484[iParam0], 0f);
					iLocal_1030 = 1;
				}
			}
			else if (!unk_0x0C265B3C448E6954(Global_69800.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
			{
				unk_0x4E47CBCAA9BEC572(Global_69800.f_484[iParam0], 1f);
				iLocal_1030 = 0;
			}
		}
		else
		{
			iLocal_1030 = 0;
		}
	}
}

int func_455()
{
	return 1;
}

var func_456(var uParam0, int iParam1)
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

int func_457()
{
	func_458();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_458()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_386(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_385(unk_0xBC25C936A095B5BA());
			if (func_25(iVar0) && (!func_27(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_25(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

void func_459()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x2DA8CA50A72528FB(Global_69800.f_208[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(Global_69800.f_208[iVar0]));
		}
		if (unk_0x724D816EA203A79E(Global_69800.f_139[iVar0]))
		{
			if (unk_0xE59B7F5A03335350(Global_69800.f_139[iVar0], 0))
			{
				unk_0x1E7A09C1710FB071(&(Global_69800.f_139[iVar0]));
				Global_69800.f_139[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_110))
	{
		unk_0x348665177DBFB93B(Local_402.f_110, 0);
		unk_0x4EC087603E1DEF9C(Local_402.f_110, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(Local_402.f_111))
	{
		unk_0x348665177DBFB93B(Local_402.f_111, 0);
		unk_0x4EC087603E1DEF9C(Local_402.f_111, 0);
	}
	if (Local_402.f_3 != 0)
	{
		func_264();
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 0);
	}
	if (unk_0x2DA8CA50A72528FB(Global_69800.f_583))
	{
		unk_0x07B8ECB35A4ED3AC(&(Global_69800.f_583));
	}
	if (iLocal_656 != -1)
	{
		func_69(&iLocal_656);
	}
	if (iLocal_655 != -1)
	{
		func_69(&iLocal_655);
	}
	if (Local_402.f_5 != -1)
	{
		func_69(&(Local_402.f_5));
	}
	if (iLocal_668 != -1)
	{
		func_69(&iLocal_668);
	}
	if (Local_402.f_3 > 0)
	{
		if (Global_69800.f_577)
		{
			func_223(47, 1);
			func_221(47, 1);
			Global_69800.f_577 = 0;
			Local_402.f_3 = 0;
		}
	}
	Global_69800.f_553 = 0;
	unk_0x95E4B6F3ED223F5A();
}

void func_460()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0x724D816EA203A79E(uLocal_393[iVar0]))
		{
			unk_0xA35241BCE4C1A24B(&(uLocal_393[iVar0]));
		}
		iVar0++;
	}
}

void func_461(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0xFA30DFD0084E92FE(iLocal_936[iVar0], iVar1))
	{
		unk_0xF0059F27F7BB6680(&(iLocal_936[iVar0]), iVar1);
		iLocal_867[iLocal_866] = iParam0;
		iLocal_866++;
	}
}

void func_462()
{
	int iVar0;
	
	if (func_287(25))
	{
		if (Global_105220.f_32546.f_69[22 /*78*/].f_66 != 0 && !func_39(Global_105220.f_32546.f_69[22 /*78*/].f_66, 0))
		{
			Global_105220.f_32546.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_105220.f_32546.f_69[22 /*78*/].f_77 = 0;
			Global_105220.f_32546.f_69[22 /*78*/].f_65 = 0;
			Global_105220.f_32546.f_69[22 /*78*/].f_62 = 255;
			Global_105220.f_32546.f_69[22 /*78*/].f_63 = 255;
			Global_105220.f_32546.f_69[22 /*78*/].f_64 = 255;
			Global_105220.f_32546.f_69[22 /*78*/].f_5 = 0;
			Global_105220.f_32546.f_69[22 /*78*/].f_6 = 0;
			Global_105220.f_32546.f_69[22 /*78*/].f_7 = 0;
			Global_105220.f_32546.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_105220.f_32546.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_105220.f_32546.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_287(21) && Global_105220.f_32546.f_69[9 /*78*/].f_66 != 0) && !func_39(Global_105220.f_32546.f_69[9 /*78*/].f_66, 0))
	{
		Global_105220.f_32546.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_287(22) && Global_105220.f_32546.f_69[10 /*78*/].f_66 != 0) && !func_39(Global_105220.f_32546.f_69[10 /*78*/].f_66, 0))
	{
		Global_105220.f_32546.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_287(23) && Global_105220.f_32546.f_69[11 /*78*/].f_66 != 0) && !func_39(Global_105220.f_32546.f_69[11 /*78*/].f_66, 0))
	{
		Global_105220.f_32546.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_287(26) && !func_39(Global_105220.f_32546.f_69[12 /*78*/].f_66, 0))
	{
		func_463(26, 0);
	}
	if (func_287(27) && !func_39(Global_105220.f_32546.f_69[13 /*78*/].f_66, 0))
	{
		func_463(27, 0);
	}
	if (func_287(28) && !func_39(Global_105220.f_32546.f_69[14 /*78*/].f_66, 0))
	{
		func_463(28, 0);
	}
	if (func_287(29) && !func_39(Global_105220.f_32546.f_69[15 /*78*/].f_66, 0))
	{
		func_463(29, 0);
	}
	if (func_287(30) && !func_39(Global_105220.f_32546.f_69[16 /*78*/].f_66, 0))
	{
		func_463(30, 0);
	}
	if (func_287(31) && !func_39(Global_105220.f_32546.f_69[17 /*78*/].f_66, 0))
	{
		func_463(31, 0);
	}
	if (func_287(32) && !func_39(Global_105220.f_32546.f_69[18 /*78*/].f_66, 0))
	{
		func_463(32, 0);
	}
	if (func_287(33) && !func_39(Global_105220.f_32546.f_69[19 /*78*/].f_66, 0))
	{
		func_463(33, 0);
	}
	if (func_287(34) && !func_39(Global_105220.f_32546.f_69[20 /*78*/].f_66, 0))
	{
		func_463(34, 0);
	}
}

void func_463(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_67(iParam0, 0))
		{
			func_316(iParam0, 1, 0);
			func_316(iParam0, 2, 0);
			func_316(iParam0, 3, 0);
			func_316(iParam0, 4, 0);
			func_316(iParam0, 0, 1);
			Global_69800[iParam0] = 1;
		}
	}
	else
	{
		func_316(iParam0, 0, 0);
	}
}

int func_464()
{
	return 0;
}

int func_465()
{
	return 1;
}

int func_466()
{
	return 1;
}

int func_467()
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

void func_468(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_472();
	func_471();
	func_469();
}

void func_469()
{
	Global_103598 = 2405.849f;
	Global_103601 = 2408.22f;
	Global_103604 = 2386.096f;
	Global_103607 = 69.1875f;
	Global_103610[0 /*3*/] = 2417.105f;
	Global_103610[1 /*3*/] = 2407.058f;
	Global_103610[2 /*3*/] = 2371.92f;
	Global_103610[3 /*3*/] = 2399.583f;
	Global_103610[4 /*3*/] = 2416.519f;
	Global_103610[5 /*3*/] = 2430.345f;
	Global_103610[6 /*3*/] = 2385.819f;
	Global_103632[0] = 157.8636f;
	Global_103632[1] = 174.7226f;
	Global_103632[2] = 270.7562f;
	Global_103632[3] = 190.7495f;
	Global_103632[4] = 27.6506f;
	Global_103632[5] = 358.1218f;
	Global_103632[6] = 339.4363f;
	Global_103640 = 2399.82f;
	Global_103643 = 2414.7f;
	func_470(&Global_101967, 64);
}

void func_470(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_471()
{
	Global_101972[0 /*3*/].f_1 = 5141.01f;
	Global_101972[1 /*3*/].f_1 = 6048.71f;
	Global_101972[2 /*3*/].f_1 = 6185.32f;
	Global_101972[3 /*3*/].f_1 = 5180.99f;
	Global_101972[4 /*3*/].f_1 = 4582.72f;
	Global_101972[5 /*3*/].f_1 = 4831.82f;
	Global_101972[6 /*3*/].f_1 = 4322.66f;
	Global_101972[7 /*3*/].f_1 = 3503.92f;
	Global_101972[8 /*3*/].f_1 = 3777.54f;
	Global_101972[9 /*3*/].f_1 = 3810.8f;
	Global_101972[10 /*3*/].f_1 = 3095.88f;
	Global_102006[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_102006[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_102006[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_102006[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_102006[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_102006[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_102006[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_102006[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_102006[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_102006[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_102006[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_102006[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_102006[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_102006[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_102006[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_102006[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_102006[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_102006[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_102006[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_102006[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_102006[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_102006[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_102006[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_102006[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_102006[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_102006[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_102006[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_102006[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_102006[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_102006[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_102006[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_102006[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_102006[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_102006[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_102006[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_102006[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_102006[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_102006[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_102006[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_102006[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_102006[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_102006[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_102006[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_102006[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_102006[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_102006[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_102006[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_102006[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_102006[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_102006[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_102006[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_102006[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_102006[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_102006[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_102006[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_102006[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_102006[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_102006[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_102006[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_102006[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_102006[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_102006[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_102006[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_470(&Global_101967, 16);
}

void func_472()
{
	Global_101923[0 /*3*/] = -1567.382f;
	Global_101923[1 /*3*/] = -1436.305f;
	Global_101923[2 /*3*/] = 31.2408f;
	Global_101923[3 /*3*/] = 278.1924f;
	Global_101923[4 /*3*/] = 1116.002f;
	Global_101923[5 /*3*/] = 1676.193f;
	Global_101945[0 /*3*/] = -1592.642f;
	Global_101945[1 /*3*/] = -1573.501f;
	Global_101945[2 /*3*/] = -1459.359f;
	Global_101945[3 /*3*/] = 21.1005f;
	Global_101945[4 /*3*/] = 262.9409f;
	Global_101945[5 /*3*/] = 1091.07f;
	func_470(&Global_101967, 1);
}

