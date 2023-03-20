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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	struct<872> Local_96 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_968[32];
	int iLocal_1417 = 0;
	int iLocal_1418 = 0;
	int iLocal_1419 = 0;
	int iLocal_1420 = 0;
	int iLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432[4] = { 0, 0, 0, 0 };
	struct<8> Local_1437[30];
	var uLocal_1678[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1709 = 0;
	var uLocal_1710 = 0;
	int iLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_18 = "NULL";
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
	fLocal_87 = ((0.05f + 0.275f) - 0.01f);
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	iLocal_1424 = -1;
	if (unk_0x17CC0D5008835470() && func_619(unk_0xE0BDAFA1A39552D6(), 0, 1))
	{
		func_606(ScriptParam_0);
	}
	else
	{
		func_588();
	}
	while (true)
	{
		func_587();
		if (func_579())
		{
			func_588();
		}
		Global_1734817.f_2 = Local_96.f_863;
		Global_1734817.f_3 = Local_96.f_864;
		switch (func_578(unk_0x490BA5FDD7EE47A9()))
		{
			case 0:
				if (func_577() == 1)
				{
					if (func_576())
					{
						func_575();
						if (func_574())
						{
							func_561(166, 1, -1);
							unk_0x23C09ED6B6466E40(3);
							func_560(0f);
							iLocal_1423 = unk_0xD53C8BCD41123EE6(unk_0x06736567F820A39E());
							unk_0xDEA5F99894469373(unk_0x06736567F820A39E(), iLocal_1422);
						}
						else
						{
							func_561(166, 0, -1);
						}
						func_559();
						func_558();
						func_557();
						Local_968[unk_0x490BA5FDD7EE47A9() /*14*/] = 1;
					}
				}
				else if (func_577() == 4)
				{
					Local_968[unk_0x490BA5FDD7EE47A9() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_554())
				{
					Local_968[unk_0x490BA5FDD7EE47A9() /*14*/] = 2;
				}
				if (func_577() == 1)
				{
					func_553();
					func_533();
					func_510();
					func_261();
					func_252();
					if (func_574() || func_250())
					{
						func_128(&(Global_1330244.f_527), &Global_1330244, 24, &(Global_1330244.f_1), &(Global_1330244.f_110), -1, 0);
					}
					func_73();
				}
				else if (func_577() == 4)
				{
					Local_968[unk_0x490BA5FDD7EE47A9() /*14*/] = 3;
					func_70();
				}
				func_69();
				break;
			
			case 3:
				func_68(&(Local_96.f_845));
				if (func_67(&(Local_96.f_845)))
				{
					Local_968[unk_0x490BA5FDD7EE47A9() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_968[unk_0x490BA5FDD7EE47A9() /*14*/] = 4;
			
			case 4:
				func_588();
				break;
		}
		if (unk_0x587E5997B76F47FE())
		{
			switch (func_577())
			{
				case 0:
					func_65();
					func_64();
					if (func_25())
					{
						unk_0x5F55B369FD8D3271(&(Local_96.f_863), &(Local_96.f_864));
						Local_96.f_0 = 1;
						Local_96.f_118 = unk_0x490BA5FDD7EE47A9();
						Local_96.f_119 = unk_0xE0BDAFA1A39552D6();
						func_561(166, 1, -1);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_96.f_0 = 4;
					}
					else if (func_1())
					{
						Local_96.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2464975.f_4685.f_13)
	{
		Global_2464975.f_4685.f_13 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_96.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 1))
			{
				Local_96.f_117 = 2;
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 3))
			{
				Local_96.f_117 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 6))
	{
		if (!func_8(&(Local_96.f_849)))
		{
			func_7(&(Local_96.f_849), 0, 0);
		}
		else if (func_6(&(Local_96.f_849), 500, 0))
		{
			unk_0xE27C8E42A97895CF(&(Local_96.f_1), 6);
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
	if (unk_0x17CC0D5008835470() && !bParam2)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x17CC0D5008835470() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
			}
			else
			{
				*uParam0 = unk_0xED6DF4F701311AF8();
			}
		}
		else
		{
			*uParam0 = unk_0x1ADBAAC322D61F73();
		}
		uParam0->f_1 = 1;
	}
}

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9()
{
	if (!func_8(&(Local_96.f_847)))
	{
		func_7(&(Local_96.f_847), 0, 0);
	}
	else if (func_6(&(Local_96.f_847), func_10(), 0))
	{
		unk_0xE27C8E42A97895CF(&(Local_96.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_12644;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x587E5997B76F47FE())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_96.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_96.f_2[iVar0 /*26*/] == 0)
						{
							if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_2))
							{
								Local_96.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_96.f_2[iVar0 /*26*/] == 1)
						{
							Local_96.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_96.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_96.f_2[iVar0 /*26*/].f_2))
								{
									if (unk_0x954A6C5EBD942B9E(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), unk_0xA9B72300DA155F92(Local_96.f_2[iVar0 /*26*/].f_2)))
									{
										if (unk_0x7DA173D4FD42F36B(Local_96.f_109, iVar0))
										{
											unk_0xE27C8E42A97895CF(&(Local_96.f_108), iVar0);
											Local_96.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0x7DA173D4FD42F36B(Local_96.f_110, iVar0))
										{
											unk_0xE27C8E42A97895CF(&(Local_96.f_108), iVar0);
											Local_96.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0x7DA173D4FD42F36B(Local_96.f_111, iVar0))
										{
											unk_0xE27C8E42A97895CF(&(Local_96.f_108), iVar0);
											Local_96.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0x7DA173D4FD42F36B(Local_96.f_112, iVar0))
										{
											Local_96.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_96.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_96.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x7A6749CADAC50206(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1)))
							{
								Local_96.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_96.f_2[iVar0 /*26*/].f_2))
								{
									Local_96.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (unk_0x7DA173D4FD42F36B(Local_96.f_112, iVar0))
								{
									Local_96.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_96.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0x7DA173D4FD42F36B(Local_96.f_110, iVar0))
							{
								Local_96.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0x7DA173D4FD42F36B(Local_96.f_111, iVar0))
							{
								Local_96.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_96.f_2[iVar0 /*26*/].f_24)
						{
							Local_96.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_96.f_2[iVar0 /*26*/].f_25)
						{
							Local_96.f_2[iVar0 /*26*/].f_17 = 6;
						}
					}
					break;
				
				case 4:
					break;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				switch (Local_96.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_96.f_2[iVar0 /*26*/] == 0)
							{
								Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_96.f_2[iVar0 /*26*/] == 2)
							{
								Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_96.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_96.f_2[iVar0 /*26*/].f_17 == 3 || Local_96.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_96.f_2[iVar0 /*26*/].f_24)
							{
								Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_96.f_2[iVar0 /*26*/].f_17 == 3 || Local_96.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_96.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
								}
							}
						}
						break;
					
					case 6:
						break;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_12(var uParam0)
{
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		return !func_13(unk_0xA9B72300DA155F92(uParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (unk_0xBDA1F5E8A36BFA07(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1B6292EA51632C25(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_14(var uParam0)
{
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		return unk_0xCFC04A38F256EE06(unk_0x220B3465A4B1FBA5(uParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_2))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_96.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						unk_0xE27C8E42A97895CF(&(Local_96.f_116), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar0)))
		{
			iVar1 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar0));
			if (!func_17(iVar1, 0))
			{
				unk_0xD81261A54FF973C2(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312747;
}

int func_20(int iParam0)
{
	int iVar0;
	
	if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_96.f_2[iParam0 /*26*/].f_3[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_21()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (Local_96.f_0 != 4)
	{
		iLocal_1419 = 0;
		while (iLocal_1419 < unk_0xC4A9F8E5EC59EB4F())
		{
			if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iLocal_1419)))
			{
				iVar3 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iLocal_1419));
				if (!func_17(iVar3, 0))
				{
					if (func_619(iVar3, 1, 1))
					{
					}
					func_24(iLocal_1419);
					func_23(iLocal_1419);
					if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 2))
					{
						if (!bVar2)
						{
							if ((unk_0x7DA173D4FD42F36B(Local_96.f_1, 1) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 3)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 5))
							{
								if (!unk_0x7DA173D4FD42F36B(Local_968[iLocal_1419 /*14*/].f_1, 4))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
			}
			else if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 5))
			{
				if (Local_96.f_118 > -1)
				{
					if (iLocal_1419 == Local_96.f_118)
					{
						unk_0xE27C8E42A97895CF(&(Local_96.f_1), 5);
					}
				}
			}
			iLocal_1419++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_96.f_115 != iVar0)
		{
			Local_96.f_115 = iVar0;
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_1), 1);
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 2))
		{
			if (!bVar2)
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_1), 2);
			}
		}
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_113, iVar0))
			{
				if (!func_8(&(Local_96.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_96.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_96.f_853[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_113), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_109, iVar0))
		{
			if (unk_0x7DA173D4FD42F36B(Local_968[iParam0 /*14*/].f_5, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_109), iVar0);
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_110, iVar0))
		{
			if (unk_0x7DA173D4FD42F36B(Local_968[iParam0 /*14*/].f_2, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_110), iVar0);
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_112, iVar0))
		{
			if (unk_0x7DA173D4FD42F36B(Local_968[iParam0 /*14*/].f_3, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_112), iVar0);
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_111, iVar0))
		{
			if (unk_0x7DA173D4FD42F36B(Local_968[iParam0 /*14*/].f_4, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_111), iVar0);
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_113, iVar0))
		{
			if (unk_0x7DA173D4FD42F36B(Local_968[iParam0 /*14*/].f_6, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_113), iVar0);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_968[iParam0 /*14*/].f_7, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_113), iVar0);
			}
		}
		if (Local_96.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_96.f_2[iVar0 /*26*/].f_24)
			{
				if (unk_0x7DA173D4FD42F36B(Local_968[iParam0 /*14*/].f_12, iVar0))
				{
					Local_96.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_96.f_2[iVar0 /*26*/].f_25)
			{
				if (unk_0x7DA173D4FD42F36B(Local_968[iParam0 /*14*/].f_13, iVar0))
				{
					Local_96.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_2))
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_96.f_2[iVar0 /*26*/].f_2))
						{
							unk_0xD81261A54FF973C2(unk_0xA9B72300DA155F92(Local_96.f_2[iVar0 /*26*/].f_2), unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iParam0)), 1);
							unk_0xE27C8E42A97895CF(&(Local_96.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_114), iParam0);
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (!func_44())
	{
		return 0;
	}
	if (!func_33())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = Local_96.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Var2 = { Local_96.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(Var2, 0f, 0f, 0f, 0))
		{
			if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

bool func_28(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6;
	
	iVar0 = Local_96.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			Var3 = { Local_96.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			uVar6 = Local_96.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(Var3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_96.f_123[iVar0 /*36*/].f_32[iVar1];
				if (unk_0x432BC9C0928AEEC4(1))
				{
					if (func_31(iVar2))
					{
						if (!unk_0x7DA173D4FD42F36B(Local_96.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							unk_0x79D9EC458879E8B8(Var3, 10f, 1, 0, 0, 1);
							unk_0xE27C8E42A97895CF(&(Local_96.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, Var3, uVar6, 1, 1, 1, 0, 1, 1))
						{
							unk_0xD53D4444E2EE35FA(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0xAFD185F8D087942A(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x9F5B8A7088748C7A(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_1422);
							unk_0x02AA51E28DECDB1B(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_7[iVar1]), 0, 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_30(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x432BC9C0928AEEC4(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x6C4DEE9BDB093DC6(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x75409DE1FC985A9D(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xECD7D746642249EB(uVar0);
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		unk_0xE2098C4F0BF55A98(uVar0, iParam10);
		if (unk_0x9CE530DAF9F58C77(iVar0))
		{
			if (bParam8)
			{
				unk_0x578505FDD63EC643(*uParam0, 1);
			}
			else
			{
				unk_0x578505FDD63EC643(*uParam0, 0);
			}
		}
		unk_0x194FCE8D467C221F(iVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_31(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xBECC89ACB4E5D4ED(iParam0);
	return unk_0x5C9FE32E2FF37989(iParam0);
}

bool func_32(int iParam0)
{
	int iVar0;
	
	if (Local_96.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_96.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_96.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			func_35(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			if (!func_34(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar1 = Local_96.f_2[iParam0 /*26*/];
	iVar2 = Local_96.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				Var3 = { Local_96.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
				if (!func_28(Var3, 0f, 0f, 0f, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	var uVar8;
	
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_96.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_42(Local_96.f_2[iParam0 /*26*/].f_2))
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_41();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (unk_0x98C9563B38ACD6D9(1))
								{
									if (func_31(iVar0))
									{
										if (func_40(&(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), Local_96.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											unk_0x1BBC7C4B775BFAAD(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x7D86F9C4E675434D(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0xDEA5F99894469373(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574259);
											unk_0x9F5B8A7088748C7A(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1422);
											unk_0x38DB61894D88F955(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0xF0683EF788D4342B(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, 0, 1);
											unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 3, 0);
											unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 5, 1);
											unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 2, 1);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				break;
			
			case 2:
				iVar0 = func_41();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (unk_0x98C9563B38ACD6D9(1))
						{
							if (func_31(iVar0))
							{
								iVar2 = Local_96.f_2[iParam0 /*26*/].f_22;
								Var5 = { Local_96.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								uVar8 = Local_96.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(Var5, 0f, 0f, 0f, 0))
								{
									if (func_39(&(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, Var5, uVar8, 1, 1, 1))
									{
										unk_0x1BBC7C4B775BFAAD(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x7D86F9C4E675434D(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xDEA5F99894469373(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574259);
										unk_0x9F5B8A7088748C7A(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1422);
										unk_0xF0683EF788D4342B(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, 0, 1);
										unk_0x2FD7042D8FE731D1(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 42, 1);
										unk_0x76C1E6E8DA089C11(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 43, 1);
										unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 44, 1);
										unk_0x61D7C8D2DB2887AA(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x7BCBC6B8F89A88C1(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, 0, 0);
										unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 132, 1);
										iVar3 = func_38();
										unk_0xF4CB4D4221C2D77E(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										unk_0xEC337F42DFBAD859(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										uVar4 = func_37();
										unk_0x58145D659542F3EC(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), uVar4);
										unk_0x49BD4C1B5817C978(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), func_36());
										unk_0xB8EAAC44A393EDB5(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar1]), 281, 1);
									}
								}
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
	return 0;
}

int func_36()
{
	return unk_0xF2DB717A73826179(Global_262145.f_12652);
}

int func_37()
{
	return 200;
}

var func_38()
{
	return Global_262145.f_12651;
}

int func_39(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x98C9563B38ACD6D9(1))
	{
		return 0;
	}
	iVar0 = unk_0xB500796AAD639F82(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x6943A7C6646EF9D3(iVar0);
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		unk_0xE2098C4F0BF55A98(iVar0, iParam9);
		if (unk_0x9CE530DAF9F58C77(iVar0))
		{
			if (bParam7)
			{
				unk_0x578505FDD63EC643(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_40(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x98C9563B38ACD6D9(1))
	{
		return 0;
	}
	if (!unk_0xC7A68C5C107A1253(uParam1))
	{
		return 0;
	}
	if (!unk_0x1B6292EA51632C25(unk_0xA9B72300DA155F92(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x6943A7C6646EF9D3(unk_0x064835636E49C34D(unk_0xA9B72300DA155F92(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		unk_0xE2098C4F0BF55A98(unk_0x220B3465A4B1FBA5(*uParam0), iParam7);
		if (unk_0x9CE530DAF9F58C77(unk_0x220B3465A4B1FBA5(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x578505FDD63EC643(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_41()
{
	return joaat("s_m_m_chemsec_01");
}

int func_42(var uParam0)
{
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		unk_0x05482B0CE9645411(uParam0);
		return unk_0x40B3668D7226E0DF(uParam0);
	}
	return 0;
}

bool func_43(int iParam0)
{
	return (Local_96.f_2[iParam0 /*26*/] == 0 || Local_96.f_2[iParam0 /*26*/] == 2);
}

int func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_46(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_45(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_45(int iParam0)
{
	switch (Local_96.f_2[iParam0 /*26*/])
	{
		case 0:
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	
	switch (Local_96.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_96.f_2[iParam0 /*26*/].f_11;
				if (unk_0x432BC9C0928AEEC4(1))
				{
					if (func_31(iVar0))
					{
						if (func_28(Local_96.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_96.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_96.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_96.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_96.f_2[iParam0 /*26*/].f_2), iVar0, Local_96.f_2[iParam0 /*26*/].f_13, Local_96.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1))
							{
								unk_0xAFD185F8D087942A(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xD53D4444E2EE35FA(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x68018E1A807B2CF1(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_2), 1, 1, 0);
								unk_0x9F5B8A7088748C7A(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_2), 1, iLocal_1422);
								unk_0x3013DF83C9A8EBF2(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x02AA51E28DECDB1B(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_2), 0, 0);
								unk_0x215FFA3EE011BA3C(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x494152A30775AD1B(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x7B570EAEAEE84C9E(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xD7757C8C366A0BD9(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_2))
			{
				if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_1))
				{
					if (unk_0x98C9563B38ACD6D9(1))
					{
						iVar1 = Local_96.f_2[iParam0 /*26*/].f_12;
						if (func_31(iVar1))
						{
							if (func_40(&(Local_96.f_2[iParam0 /*26*/].f_1), Local_96.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								unk_0x1BBC7C4B775BFAAD(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x7D86F9C4E675434D(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xDEA5F99894469373(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), Global_1574259);
								unk_0x9F5B8A7088748C7A(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1, iLocal_1422);
								unk_0x38DB61894D88F955(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xE27C8E42A97895CF(&(Local_96.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x98C9563B38ACD6D9(1))
				{
					iVar1 = Local_96.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_96.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_96.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_96.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_96.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_96.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_96.f_2[iParam0 /*26*/].f_13, Local_96.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0x1BBC7C4B775BFAAD(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x7D86F9C4E675434D(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xDEA5F99894469373(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), Global_1574259);
								unk_0x9F5B8A7088748C7A(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1, iLocal_1422);
								unk_0x38DB61894D88F955(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xE27C8E42A97895CF(&(Local_96.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x98C9563B38ACD6D9(1))
				{
					iVar1 = Local_96.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_96.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_96.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_96.f_2[iParam0 /*26*/].f_16 = uVar5;
								Local_96.f_2[iParam0 /*26*/].f_22 = uVar6;
								func_51(Var2);
							}
						}
						if (!func_28(Local_96.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_96.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_96.f_2[iParam0 /*26*/].f_13, Local_96.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0x1BBC7C4B775BFAAD(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x7D86F9C4E675434D(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xDEA5F99894469373(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), Global_1574259);
								unk_0x9F5B8A7088748C7A(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1, iLocal_1422);
								unk_0x38DB61894D88F955(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x2FD7042D8FE731D1(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 42, 1);
								unk_0x76C1E6E8DA089C11(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 11, 1);
								unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 44, 1);
								unk_0x61D7C8D2DB2887AA(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xF0683EF788D4342B(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, 0, 1);
								uVar9 = func_50(iParam0);
								unk_0x7BCBC6B8F89A88C1(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), Local_96.f_2[iParam0 /*26*/].f_13, uVar9, 0, 0);
								unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 132, 1);
								unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 281, 1);
								iVar7 = func_49();
								unk_0xF4CB4D4221C2D77E(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), iVar7);
								unk_0xEC337F42DFBAD859(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), iVar7);
								uVar8 = func_48();
								unk_0x58145D659542F3EC(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), uVar8);
								unk_0x49BD4C1B5817C978(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), func_47());
								unk_0x215FFA3EE011BA3C(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xE27C8E42A97895CF(&(Local_96.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_47()
{
	return unk_0xF2DB717A73826179(Global_262145.f_12650);
}

int func_48()
{
	return 100;
}

var func_49()
{
	return Global_262145.f_12649;
}

float func_50(int iParam0)
{
	if (func_28(Local_96.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_51(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 == -1)
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_871, iVar1))
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (func_28(Param0, -1596.399f, 3058.814f, 31.5661f, 0))
	{
		Local_96.f_865[iVar0] = unk_0x33189531E55C7E33(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		unk_0xE27C8E42A97895CF(&(Local_96.f_871), iVar0);
	}
	if (func_28(Param0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_96.f_865[iVar0] = unk_0x33189531E55C7E33(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		unk_0xE27C8E42A97895CF(&(Local_96.f_871), iVar0);
	}
	if (func_28(Param0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_96.f_865[iVar0] = unk_0x33189531E55C7E33(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		unk_0xE27C8E42A97895CF(&(Local_96.f_871), iVar0);
	}
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_96.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = unk_0xA6055C735E3DD877(0, Local_96.f_122);
			if (!func_28(Local_96.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_96.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_96.f_123[iVar0 /*36*/] };
					*uParam2 = Local_96.f_123[iVar0 /*36*/].f_3;
					Local_96.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = unk_0xA6055C735E3DD877(0, Local_96.f_122);
			if (!func_28(Local_96.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_96.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_96.f_123[iVar0 /*36*/] };
					*uParam2 = Local_96.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_96.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = unk_0xA6055C735E3DD877(0, 10);
			if (!func_28(Local_96.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_96.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_96.f_484[iVar0 /*36*/] };
					*uParam2 = Local_96.f_484[iVar0 /*36*/].f_3;
					Local_96.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_53(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x7D7A247EA1176EFA(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x6B1F3F8F6B7B5B2C(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x6B1F3F8F6B7B5B2C(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xE8689F4DBC5D8E1B(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993++;
	if (bParam13)
	{
		if (unk_0xFED7CD2BD3B9B1DB(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993++;
	if (fParam14 > 0f)
	{
		if (func_57(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_54(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404993++;
	return 1;
}

int func_54(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_619(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			if (!unk_0x4FF34B5B023875E1())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xA1F52EC3ECE1D42E(func_56(unk_0xE0BDAFA1A39552D6()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x7515D29C901C4E76(Param0, fParam3))
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
		if (func_619(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xE0BDAFA1A39552D6()))
				{
					if ((func_55(iVar1) || !bParam10) && !Global_2418529[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0xF749B19A9F9B3DBF(iVar1) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xF749B19A9F9B3DBF(iVar1) != unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))) || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0xA1F52EC3ECE1D42E(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xF749B19A9F9B3DBF(iVar1) != iParam8 || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
						{
							if (unk_0xA1F52EC3ECE1D42E(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
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

int func_55(int iParam0)
{
	if (unk_0xD1BDCACEB9BCE7A2(unk_0x44A9253132E1DDE0(iParam0)) || Global_2418529[iParam0 /*313*/].f_241)
	{
		return 1;
	}
	return 0;
}

Vector3 func_56(int iParam0)
{
	return unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iParam0), 0);
}

int func_57(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xE0BDAFA1A39552D6() != iVar1) || iParam8 == 0)
		{
			if (func_619(iVar1, bParam4, bParam5))
			{
				if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
				{
					if (!bParam7 || (!unk_0xCFC04A38F256EE06(unk_0x44A9253132E1DDE0(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) != unk_0xF749B19A9F9B3DBF(iVar1))) || unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
						{
							if (((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && uParam9) && bParam6) && func_58(iVar1))
							{
							}
							else if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
							{
								if (unk_0xA1F52EC3ECE1D42E(func_56(iVar1), Param0, 1) < fParam3)
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

int func_58(int iParam0)
{
	if (func_63(unk_0xE0BDAFA1A39552D6(), iParam0))
	{
		return 1;
	}
	Global_2460474 = { func_62(iParam0) };
	if (unk_0xC1CBB5CA861EE944(&Global_2460474))
	{
		return 1;
	}
	if (func_59(unk_0xE0BDAFA1A39552D6(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_61(iParam0);
	if (!iVar0 == func_60())
	{
		if (iVar0 == func_61(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_60()
{
	return -1;
}

int func_61(int iParam0)
{
	if (iParam0 != func_60())
	{
		return Global_1610705[iParam0 /*178*/].f_10;
	}
	return func_60();
}

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3C903E672223AE0B(iParam0, &Var0, 13);
	return Var0;
}

int func_63(int iParam0, int iParam1)
{
	if (unk_0x3D340893CA28EFFC())
	{
		Global_2460474 = { func_62(iParam0) };
		Global_2460487 = { func_62(iParam1) };
		if (unk_0x781D726C27D122E2(&Global_2460474))
		{
			if (unk_0x781D726C27D122E2(&Global_2460487))
			{
				unk_0xAFAED23A75339868(&Global_2460404, 35, &Global_2460474);
				unk_0xAFAED23A75339868(&Global_2460439, 35, &Global_2460487);
				if (Global_2460404 == Global_2460439)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_64()
{
	Local_96.f_2[0 /*26*/] = 2;
	Local_96.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_96.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_96.f_2[1 /*26*/] = 2;
	Local_96.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_96.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_96.f_2[2 /*26*/] = 0;
	Local_96.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_96.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_96.f_2[3 /*26*/] = 0;
	Local_96.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_96.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_65()
{
	func_66();
	if (Local_96.f_122 == 0)
	{
		if (Local_96.f_121 == 0)
		{
			Local_96.f_122 = 10;
		}
		else
		{
			Local_96.f_122 = 9;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 4))
	{
		return;
	}
	switch (Local_96.f_121)
	{
		case 0:
			Local_96.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_96.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_96.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_96.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_96.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_96.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_96.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_96.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_96.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_96.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_96.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_96.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_96.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_96.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_96.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_96.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_96.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_96.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_96.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_96.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_96.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_96.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_96.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_96.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_96.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_96.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_96.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_96.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_96.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_96.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_96.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_96.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_96.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_96.f_123[6 /*36*/].f_14[2] = 180f;
			Local_96.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_96.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_96.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_96.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_96.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_96.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_96.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_96.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_96.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_96.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_96.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_96.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_96.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_96.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_96.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_96.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_96.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_96.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_96.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_96.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_96.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_96.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_96.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_96.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_96.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_96.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_96.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_96.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_96.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_96.f_484[0 /*36*/].f_3 = 179.583f;
			Local_96.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_96.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_96.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_96.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_96.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_96.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_96.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_96.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_96.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_96.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_96.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_96.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_96.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_96.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_96.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_96.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_96.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_96.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_96.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_96.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_96.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_96.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_96.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_96.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_96.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_96.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_96.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_96.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_96.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_96.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_96.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_96.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_96.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_96.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_96.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_96.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_96.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_96.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_96.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_96.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_96.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_96.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_96.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_96.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_96.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_96.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_96.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_96.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_96.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_96.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_96.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_96.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_96.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_96.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_96.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_96.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_96.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_96.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_96.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_96.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_96.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_96.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_96.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_96.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_96.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_96.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_96.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_96.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_96.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_96.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_96.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_96.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_96.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_96.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_96.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_96.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_96.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_96.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_96.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_96.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_96.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_96.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_96.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_96.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_96.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_96.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_96.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_96.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_96.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	unk_0xE27C8E42A97895CF(&(Local_96.f_1), 4);
}

var func_66()
{
	if (Local_96.f_121 != -1)
	{
		return Local_96.f_121;
	}
	if (Local_96.f_121 == -1)
	{
		if (unk_0xF61A0EB317E8C923(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0)) == joaat("City"))
		{
			Local_96.f_121 = 0;
		}
		else
		{
			Local_96.f_121 = 1;
		}
	}
	return Local_96.f_121;
}

int func_67(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_68(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x587E5997B76F47FE())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_69()
{
}

void func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_96.f_119 != -1)
	{
		iVar0 = unk_0x801C03D92F1C6755(Local_96.f_119);
	}
	iVar1 = 0;
	while (iVar1 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar1)))
		{
			iVar2 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_60())
				{
					if (iVar2 == iVar0 || func_71(iVar2, iVar0, 1))
					{
						unk_0x054CBFE90FAA6840(5, Global_1574218[iVar1], Global_1574259);
						unk_0x054CBFE90FAA6840(5, Global_1574259, Global_1574218[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_71(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_60())
	{
		if (!bParam2)
		{
			if (func_72(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1610705[iParam0 /*178*/].f_10 != func_60())
		{
			return iParam1 == Global_1610705[iParam0 /*178*/].f_10;
		}
	}
	return 0;
}

int func_72(int iParam0, int iParam1)
{
	if (iParam1 != func_60())
	{
		if (iParam0 != func_60())
		{
			if (Global_1610705[iParam0 /*178*/].f_10 != func_60())
			{
				if (Global_1610705[iParam0 /*178*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_73()
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	
	if (func_574())
	{
		return;
	}
	iVar3 = -1;
	fVar4 = func_127(&iVar3, 0);
	if (fVar4 <= 1600f)
	{
		if (!func_126(unk_0xE0BDAFA1A39552D6()))
		{
			func_116(0);
			unk_0x4C48684974B45ED5(0);
			unk_0xE27C8E42A97895CF(&uLocal_1417, 18);
		}
	}
	if (Local_96.f_119 > -1)
	{
		if (iVar3 > -1)
		{
			Var0 = { unk_0xF4745590D18D14B8(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*26*/].f_1), 0) };
		}
	}
	if (!func_28(Var0, 0f, 0f, 0f, 0))
	{
		func_74(166, Var0, &uLocal_1710, 1140457472, 1144750080, 0);
	}
}

void func_74(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_115(unk_0xE0BDAFA1A39552D6()) && !func_114(unk_0xE0BDAFA1A39552D6())) && !unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1, 8)) && (func_113(unk_0xE0BDAFA1A39552D6()) || func_112(unk_0xE0BDAFA1A39552D6())))
	{
		return;
	}
	Global_1734808 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Param1);
	func_108(iParam0, fVar0);
	if (unk_0x3DC360442A11BB38() && unk_0x0FDDFFBD775C7598() == 15)
	{
		if (func_107(unk_0xE0BDAFA1A39552D6()) || func_105(unk_0xE0BDAFA1A39552D6()))
		{
			if (!unk_0x86AA79952D0B526D(1344549371))
			{
				unk_0x084681BC25D24FCC(1344549371);
			}
		}
		else if (unk_0x86AA79952D0B526D(1344549371))
		{
			unk_0x310F4E81C7574224(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_104(unk_0xE0BDAFA1A39552D6(), 21))
		{
			func_103(Param1, 1, 0);
		}
		if (!*uParam4 && func_619(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			*uParam4 = 1;
			if (func_102(iParam0))
			{
				unk_0x71543B3C24188223(func_101(iParam0));
				if (func_100(iParam0, -1))
				{
					unk_0x23C09ED6B6466E40(0);
					if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
					{
						unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 1);
						unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 1);
					}
					unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 0);
				}
			}
			if (func_99(iParam0))
			{
				fVar1 = func_98(iParam0);
				if (fVar1 != 1f)
				{
					func_560(fVar1);
					unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_97(iParam0) && func_107(unk_0xE0BDAFA1A39552D6()))
				{
					func_95(1);
					func_94(2);
				}
			}
			func_93(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_92(unk_0xE0BDAFA1A39552D6(), 19))
			{
				func_91(19);
			}
		}
		if (*uParam4 && func_619(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			*uParam4 = 0;
			if (func_102(iParam0))
			{
				if (unk_0x7DA173D4FD42F36B(Global_1734808.f_3, 0))
				{
					unk_0x71543B3C24188223(1f);
					unk_0x23C09ED6B6466E40(5);
					unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 0);
				}
			}
			if (func_99(iParam0))
			{
				func_90();
				unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 1);
			}
			if (iParam7 && !func_115(unk_0xE0BDAFA1A39552D6()))
			{
				if (func_88(unk_0xE0BDAFA1A39552D6()) != 152)
				{
					func_77();
				}
			}
			if (func_76(2))
			{
				func_95(0);
				func_75(2);
			}
		}
	}
}

void func_75(int iParam0)
{
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4685.f_18), iParam0);
}

bool func_76(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_2464975.f_4685.f_18, iParam0);
}

void func_77()
{
	Global_2404993.f_20 = { Global_2406822 };
	Global_2404993.f_22 = { Global_2406824 };
	func_86();
	func_78(1, 1);
}

void func_78(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404993.f_39 = { Global_2406841 };
	}
	else
	{
		Global_2404993.f_39 = { Global_2406841 };
		Global_2404993.f_39.f_49 = { Global_2406841.f_49 };
		Global_2404993.f_39.f_52 = Global_2406841.f_52;
		Global_2404993.f_39.f_53 = Global_2406841.f_53;
	}
	if (bParam0)
	{
		func_85();
	}
	func_81(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_80(0);
	func_79();
}

void func_79()
{
	struct<4> Var0;
	
	if (Global_2404993.f_469.f_1 == unk_0xAE832DCCE9CD3242())
	{
		Global_2404993.f_469 = { Var0 };
	}
}

void func_80(bool bParam0)
{
	if (bParam0)
	{
		Global_2404993.f_638 = 0;
	}
	else
	{
		Global_2404993.f_638 = 1;
	}
}

void func_81(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		Global_2404993.f_1144 = iParam1;
		Global_2404993.f_1145 = iParam2;
		Global_2404993.f_1146 = iParam10;
		func_83();
		func_82(8, 0, 0);
		Global_2404993.f_639 = 1;
		Global_2404993.f_1147 = iParam11;
		Global_2404993.f_1150 = iParam3;
		Global_2404993.f_1151 = iParam4;
		Global_2404993.f_1148 = iParam5;
		Global_2404993.f_1149 = iParam6;
		Global_2404993.f_1152 = iParam7;
		Global_2404993.f_1153 = iParam8;
		Global_2404993.f_1154 = iParam9;
	}
	else
	{
		func_83();
		func_82(0, 0, 0);
		Global_2404993.f_639 = 0;
	}
}

void func_82(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409586 = 0;
	}
	Global_2404993.f_469 = iParam0;
	Global_2404993.f_469.f_1 = unk_0xAE832DCCE9CD3242();
	Global_2404993.f_469.f_2 = iParam1;
	Global_2404993.f_469.f_3 = iParam2;
}

void func_83()
{
	func_84();
	Global_2404993.f_640 = 0;
}

void func_84()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404993.f_641[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_85()
{
	Global_2404993.f_347 = { Global_2407149 };
}

void func_86()
{
	func_87();
	Global_2404993.f_1285 = 0;
}

void func_87()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404993.f_1286[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_88(int iParam0)
{
	if (func_89(iParam0, 0))
	{
		return Global_1610705[iParam0 /*178*/].f_10.f_28;
	}
	return -1;
}

int func_89(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

void func_90()
{
	if (unk_0xDF49ABF9204CC801(Global_2464975.f_4681))
	{
		if (!Global_2464975.f_4681 == unk_0xAE832DCCE9CD3242() && Global_2464975.f_4680 < 1f)
		{
			return;
		}
	}
	Global_2464975.f_4681 = -1;
	Global_2464975.f_4680 = 1f;
}

void func_91(int iParam0)
{
	unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_4), iParam0);
}

bool func_92(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_10.f_4, iParam1);
}

void func_93(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_4), iParam0);
}

void func_94(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Global_2464975.f_4685.f_18), iParam0);
}

void func_95(int iParam0)
{
	if (func_96() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391043)
	{
		return;
	}
	Global_2391043 = iParam0;
	Global_2391045 = 0;
	Global_2391046 = 0;
}

int func_96()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
			return 1;
		
		default:
	}
	return 0;
}

float func_98(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
			return 1;
		
		default:
	}
	return 0;
}

int func_100(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
	}
	return 0;
}

float func_101(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
			return 1;
		
		default:
	}
	return 0;
}

void func_103(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404993.f_39.f_49 = { Param0 };
	Global_2404993.f_39.f_52 = iParam3;
	Global_2404993.f_39.f_53 = iParam4;
}

bool func_104(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_206, iParam1);
}

int func_105(int iParam0)
{
	if (func_106(iParam0))
	{
		if (func_107(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (Global_1610705[iParam0 /*178*/].f_10 != func_60())
		{
			return Global_1610705[iParam0 /*178*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_107(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_92(iParam0, 9);
	}
	return 0;
}

void func_108(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_111(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_109();
	}
}

void func_109()
{
	if (!func_110(unk_0xE0BDAFA1A39552D6()))
	{
		func_93(25);
	}
}

bool func_110(int iParam0)
{
	return func_92(iParam0, 25);
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10709;
		
		case 142:
			return Global_262145.f_10697;
		
		case 157:
			return Global_262145.f_10664;
		
		case 159:
			return Global_262145.f_10647;
		
		case 162:
			return Global_262145.f_10758;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_112(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 0);
	}
	return 0;
}

int func_113(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 7);
	}
	return 0;
}

bool func_114(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 2);
}

int func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610705[iVar0 /*178*/] != -1;
	}
	return 0;
}

void func_116(int iParam0)
{
	if (!func_126(unk_0xE0BDAFA1A39552D6()))
	{
		if (iParam0 || func_117(unk_0xE0BDAFA1A39552D6()) != 0)
		{
			func_93(20);
			if (func_115(unk_0xE0BDAFA1A39552D6()))
			{
				if (!unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1, 8))
				{
					unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 8);
				}
			}
		}
	}
}

int func_117(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_115(iParam0) && !func_114(iParam0)) && !unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 8));
	bVar2 = func_126(iParam0);
	uVar3 = func_125();
	uVar4 = func_119();
	if ((bVar1 && (func_113(iParam0) || func_112(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_107(iParam0)) && !func_118(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2464975.f_4685.f_22 != iVar0)
	{
		Global_2464975.f_4685.f_22 = iVar0;
	}
	return iVar0;
}

bool func_118(int iParam0)
{
	return func_92(iParam0, 19);
}

int func_119()
{
	if ((func_92(unk_0xE0BDAFA1A39552D6(), 21) || func_92(unk_0xE0BDAFA1A39552D6(), 22)) || func_122())
	{
		return 1;
	}
	if (func_120())
	{
		func_93(22);
		return 1;
	}
	return 0;
}

int func_120()
{
	if (func_89(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if ((func_125() && !func_121()) || func_104(unk_0xE0BDAFA1A39552D6(), 21))
		{
			if (!func_92(unk_0xE0BDAFA1A39552D6(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_91(27);
		}
	}
	return 0;
}

bool func_121()
{
	return Global_1312416.f_1;
}

bool func_122()
{
	return func_123(284, -1);
}

int func_123(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2494881[iParam0 /*5*/][func_124(iParam1)];
	if (unk_0x4E4F28F5B7A7C06C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

bool func_125()
{
	return Global_1312416;
}

bool func_126(int iParam0)
{
	return func_92(iParam0, 20);
}

float func_127(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	Var3 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_96.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_96.f_2[iVar2 /*26*/].f_1))
				{
					Var6 = { unk_0xF4745590D18D14B8(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar2 /*26*/].f_1), 1) };
					fVar1 = unk_0xB7A628320EFF8E47(Var3, Var6);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*iParam0 = iVar2;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

void func_128(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_249(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_247() || iParam2 == 24)
	{
		if (func_198(uParam1, iParam2, uParam3, Global_1573685, 0, func_245()))
		{
			func_197(1);
			if ((!func_195() && !func_193()) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 1))
			{
				if (func_192())
				{
					func_189();
				}
				else
				{
					unk_0xF2C2AA10F5F1DDB2(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_188(1);
						Global_1573685 = 0;
						iVar54 = -1;
						if (Global_1573833 != 1)
						{
							func_187(uParam1);
							if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 7))
							{
								unk_0x99BCB15F954AF579(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 24)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_619(unk_0x801C03D92F1C6755(iVar52), 0, 1))
								{
									iVar35 = unk_0x801C03D92F1C6755(iVar52);
									if (!func_17(iVar35, 0))
									{
										if ((unk_0x296D7F88818B62E7(iVar35, unk_0xE0BDAFA1A39552D6()) || Global_2418529[iVar35 /*313*/].f_232 != -1) || func_186(iVar35))
										{
											iVar44 = iVar35;
											if (func_106(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_185(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_183(unk_0xE0BDAFA1A39552D6(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_181())
							{
								if (func_619(unk_0x801C03D92F1C6755(iVar52), 0, 1))
								{
									iVar35 = unk_0x801C03D92F1C6755(iVar52);
								}
								else
								{
									iVar35 = func_60();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*47*/])->f_1;
							}
							if ((func_180(iVar35) && func_175(iVar35, iParam2)) && func_619(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587816[iVar44 /*444*/].f_195.f_6;
								Var38 = { func_170(iVar35) };
								if (iVar35 == unk_0xE0BDAFA1A39552D6())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x3DB24415831CBC43(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
								iVar37 = func_164(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xA7ABBEE53A1DE38B(iVar37);
								}
								Global_1573685++;
								if ((uParam0[iVar52 /*47*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*47*/])->f_22;
								}
								if ((uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									iVar46 = (uParam0[iVar52 /*47*/])->f_30;
								}
								if ((uParam0[iVar52 /*47*/])->f_46 != -1)
								{
									iVar47 = (uParam0[iVar52 /*47*/])->f_46;
								}
								iVar43 = (uParam0[iVar52 /*47*/])->f_9;
								if (((uParam0[iVar52 /*47*/])->f_9 != -1 || (uParam0[iVar52 /*47*/])->f_22 != -1f) || (uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									if (!func_181())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_159(&iVar43, &fVar45, (uParam0[iVar52 /*47*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_158(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*47*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_153(iVar35, 0);
								if (bVar34)
								{
									if (func_152(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if (func_151(iParam5))
								{
									func_150(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								else
								{
									func_150(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								unk_0xE27C8E42A97895CF(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x801C03D92F1C6755(iVar52);
							if (func_619(iVar35, 0, 1) && !unk_0x7DA173D4FD42F36B(iVar49, iVar35))
							{
								iVar35 = unk_0x801C03D92F1C6755(iVar52);
							}
							else
							{
								iVar35 = func_60();
							}
							if (func_180(iVar35))
							{
								if (func_619(unk_0x801C03D92F1C6755(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587816[iVar44 /*444*/].f_195.f_6;
									Var38 = { func_170(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
									iVar37 = func_164(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xA7ABBEE53A1DE38B(iVar37);
									}
									Global_1573685++;
									iVar51 = func_153(iVar35, 1);
									if (bVar34)
									{
										if (func_152(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_142(unk_0x3DB24415831CBC43(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 11))
						{
							func_139(uParam3, uParam1);
						}
						func_138(&(uParam3->f_21));
						func_137();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x7DA173D4FD42F36B(uParam3->f_33, 7))
						{
							func_136(uParam3, uParam1);
							func_135(uParam1, 0, 1);
							unk_0xE27C8E42A97895CF(&(uParam3->f_33), 7);
						}
						func_136(uParam3, uParam1);
						if (!unk_0x7DA173D4FD42F36B(uParam3->f_33, 11))
						{
							unk_0xE27C8E42A97895CF(&(uParam3->f_33), 11);
						}
						if (func_131(uParam3))
						{
							Global_1573833 = 1;
						}
						func_129(uParam3);
						if (Global_1573833 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573833 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x6A87921801178186(*uParam1))
					{
						unk_0xA53AA6798EF8BAB3(7);
						unk_0x85DC3CB6F30C7FE7(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xA53AA6798EF8BAB3(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_137();
			func_188(0);
			if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 7))
			{
				unk_0x99BCB15F954AF579(&(uParam3->f_33), 7);
			}
			if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 10))
			{
				unk_0x99BCB15F954AF579(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x50E2186E0E0244C6();
}

void func_129(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_7(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_138(&(uParam0->f_21));
		func_130(0);
	}
}

void func_130(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573833 != 2)
		{
			Global_1573833 = 2;
		}
	}
	else
	{
		switch (Global_1573833)
		{
			case 0:
				Global_1573833 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_131(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x801C03D92F1C6755(uParam0->f_37);
	if (iVar15 != func_60() && func_619(iVar15, 0, 1))
	{
		Var2 = { func_62(iVar15) };
		iVar1 = func_134(uParam0, uParam0->f_37);
		if (func_133(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x7B3E90AFB94DE6A4(&Var2))
					{
						if (unk_0xCAA113034DC9272C(&Var2))
						{
							iVar16 = 1;
							func_132(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x88BD5F6528137EC3(&Var2))
					{
						iVar16 = 1;
						func_132(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x7B3E90AFB94DE6A4(&Var2))
					{
						if (!unk_0xCAA113034DC9272C(&Var2))
						{
							iVar16 = 1;
							func_132(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_132(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x7B3E90AFB94DE6A4(&Var2))
					{
						if (!unk_0x88BD5F6528137EC3(&Var2))
						{
							iVar16 = 1;
							func_132(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x88BD5F6528137EC3(&Var2))
					{
						iVar16 = 1;
						func_132(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_132(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_133(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD6F48B026382A9AD(&uParam0, 13);
}

var func_134(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_135(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x2B859AD680983623(*uParam0, "COLLAPSE"))
	{
		unk_0x504EDFAAB39BF764(iParam1);
		unk_0xE97F1B22C5E8989F();
	}
	if (iParam2 == 1)
	{
		if (unk_0x2B859AD680983623(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE97F1B22C5E8989F();
		}
	}
}

void func_136(var uParam0, var uParam1)
{
	if (!unk_0x7DA173D4FD42F36B(uParam0->f_33, 10))
	{
		unk_0x2B859AD680983623(*uParam1, "SET_HIGHLIGHT");
		unk_0x7AF283DA3BA078CD(uParam0->f_35);
		unk_0xE97F1B22C5E8989F();
		unk_0xE27C8E42A97895CF(&(uParam0->f_33), 10);
	}
}

void func_137()
{
	if (Global_1573833 != 0)
	{
		Global_1573833 = 0;
	}
}

void func_138(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_139(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x801C03D92F1C6755(iVar0);
		if (iVar2 != func_60())
		{
			if (func_619(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_141(uParam0->f_38[iVar0 /*2*/], 0);
					func_140(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1587816[iVar0 /*444*/].f_195.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_140(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		if (unk_0x2B859AD680983623(*uParam0, "SET_ICON"))
		{
			unk_0x7AF283DA3BA078CD(iParam1);
			unk_0x7AF283DA3BA078CD(iParam2);
			if (iParam2 == 65)
			{
				unk_0x7AF283DA3BA078CD(iParam3);
			}
			unk_0xE97F1B22C5E8989F();
		}
	}
}

int func_141(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_142(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_149() && iParam3 < func_148())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x2B859AD680983623(*uParam1, sVar1))
		{
			unk_0x7AF283DA3BA078CD(iParam3);
			if (unk_0x7DA173D4FD42F36B(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_147("");
			}
			else
			{
				unk_0x7AF283DA3BA078CD(iParam9);
			}
			func_147(sParam0);
			unk_0x7AF283DA3BA078CD(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_147("");
			}
			else
			{
				unk_0x7AF283DA3BA078CD(65);
			}
			unk_0x7AF283DA3BA078CD(-1);
			func_147("");
			if (uParam2->f_108 == 6)
			{
				func_147("");
			}
			else
			{
				func_147(&sParam4);
			}
			unk_0x504EDFAAB39BF764(uParam2->f_36);
			unk_0xD700C94ACCCAC57A(sParam8);
			unk_0xD700C94ACCCAC57A(sParam8);
			if (func_146(uParam2))
			{
				func_145("DPAD_FRIEND");
			}
			else if (func_144(uParam2))
			{
				func_145("DPAD_FRIEND");
			}
			else if (func_143(uParam2))
			{
				func_145("DPAD_CREW");
			}
			else
			{
				func_145("");
			}
			unk_0xE97F1B22C5E8989F();
		}
	}
}

bool func_143(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(uParam0->f_33, 6);
}

bool func_144(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(uParam0->f_33, 5);
}

void func_145(char* sParam0)
{
	unk_0x7291E2F821FCFC04(sParam0);
	unk_0xD6360E18957BCDD3();
}

int func_146(var uParam0)
{
	if (func_144(uParam0) && func_143(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_147(char* sParam0)
{
	unk_0x8C64B9C850F2EFB2(sParam0);
}

int func_148()
{
	int iVar0;
	
	if (Global_1573687)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_149()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573687)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_150(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_149() && iParam2 < func_148())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam9 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x6A87921801178186(*uParam0))
		{
			if (unk_0x2B859AD680983623(*uParam0, sVar1))
			{
				unk_0x7AF283DA3BA078CD(iParam2);
				if (unk_0x7DA173D4FD42F36B(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_147("");
				}
				else
				{
					unk_0x7AF283DA3BA078CD(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0x226FA58470A21AEF(sParam15))
				{
					func_145(sParam15);
				}
				else
				{
					func_147(&(uParam1->f_1));
				}
				unk_0x7AF283DA3BA078CD(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_147("");
				}
				else
				{
					unk_0x7AF283DA3BA078CD(65);
				}
				if (iParam11 == 1)
				{
					unk_0x7AF283DA3BA078CD(iVar0);
				}
				else
				{
					unk_0x7AF283DA3BA078CD(-1);
				}
				if (func_181())
				{
					func_147("");
				}
				else if (uParam1->f_108 == 6 && !unk_0x226FA58470A21AEF(sParam15))
				{
					unk_0x7291E2F821FCFC04("FM_AE_ONE_INT");
					unk_0x4C5D86B5B659C953(sParam15);
					unk_0xD92C45283BCDA624(iParam17);
					unk_0xD6360E18957BCDD3();
				}
				else if (uParam1->f_108 == 5 && !unk_0x226FA58470A21AEF(sParam15))
				{
					unk_0x7291E2F821FCFC04("FM_AE_ONE_INT");
					unk_0x4C5D86B5B659C953(sParam15);
					unk_0xD92C45283BCDA624(iParam17);
					unk_0xD6360E18957BCDD3();
				}
				else if ((uParam1->f_108 == 7 && !unk_0x226FA58470A21AEF(sParam15)) && !unk_0x226FA58470A21AEF(sParam16))
				{
					unk_0x7291E2F821FCFC04("FM_AE_TWO_INT");
					unk_0x4C5D86B5B659C953(sParam15);
					unk_0x4C5D86B5B659C953(sParam16);
					unk_0xD92C45283BCDA624(iParam17);
					unk_0xD6360E18957BCDD3();
				}
				else if (uParam1->f_108 == 8 && !unk_0x226FA58470A21AEF(&(uParam1->f_104)))
				{
					unk_0x7291E2F821FCFC04("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0xCB4A32D75D69162C(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0xD92C45283BCDA624(iParam9);
					}
					unk_0x4C5D86B5B659C953(&(uParam1->f_104));
					unk_0xD6360E18957BCDD3();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0x7291E2F821FCFC04("FM_AE_CASH");
					unk_0x87E13A04CCA58668(iParam9, 1);
					unk_0xD6360E18957BCDD3();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0x226FA58470A21AEF(&(uParam1->f_104)))
					{
						func_145(&(uParam1->f_104));
					}
					else
					{
						func_147("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x7291E2F821FCFC04("STRING");
					unk_0x474EBA999C39492E(iParam13, 6);
					unk_0xD6360E18957BCDD3();
				}
				else if (fParam12 != -1f)
				{
					unk_0x7291E2F821FCFC04("NUMBER");
					unk_0xCB4A32D75D69162C(fParam12, 1);
					unk_0xD6360E18957BCDD3();
				}
				else if (iParam9 != -1)
				{
					unk_0x7AF283DA3BA078CD(iParam9);
				}
				else
				{
					func_147("");
				}
				if (uParam1->f_108 == 6)
				{
					func_147("");
				}
				else
				{
					func_147(&sParam3);
				}
				unk_0x504EDFAAB39BF764(uParam1->f_36);
				if (iParam11 == 1 || unk_0x226FA58470A21AEF(sParam7))
				{
					func_147("");
					func_147("");
				}
				else
				{
					unk_0xD700C94ACCCAC57A(sParam7);
					unk_0xD700C94ACCCAC57A(sParam7);
				}
				if (func_146(uParam1))
				{
					func_145("DPAD_FRIEND");
				}
				else if (func_144(uParam1))
				{
					func_145("DPAD_FRIEND");
				}
				else if (func_143(uParam1))
				{
					func_145("DPAD_CREW");
				}
				else
				{
					func_145("");
				}
				unk_0xE97F1B22C5E8989F();
			}
		}
	}
}

int func_151(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_152(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_106(iParam0))
		{
			return 0;
		}
	}
	return Global_1610705[iParam0 /*178*/].f_10 != func_60();
}

int func_153(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_115(iParam0)) && !func_126(iParam0))
	{
		iVar0 = func_157();
	}
	iVar1 = func_156(iParam0);
	if (!iVar1 == -1)
	{
		return func_154(iVar1);
	}
	return iVar0;
}

int func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = func_155(iParam0);
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
		
		default:
	}
	return 1;
}

var func_155(int iParam0)
{
	return Global_2413817.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_156(int iParam0)
{
	if (!iParam0 == func_60())
	{
		if (func_152(iParam0, 1))
		{
			return Global_2413817.f_1946.f_11[func_61(iParam0)];
		}
	}
	return -1;
}

int func_157()
{
	return 21;
}

char* func_158(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xF35BDD4618A4A0F0())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0xF35BDD4618A4A0F0())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_159(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_163(iParam3))
	{
		*fParam1 = (func_160(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_151(iParam3))
	{
		*fParam1 = (func_160(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_160(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xF35BDD4618A4A0F0())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_162(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xF35BDD4618A4A0F0())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_161(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_161(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_162(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_164(int iParam0)
{
	int iVar0;
	
	iVar0 = func_167(iParam0);
	if (iVar0 == -1)
	{
		func_165(iParam0, 1);
		return 0;
	}
	Global_1348612[iVar0 /*5*/].f_4 = 1;
	return Global_1348612[iVar0 /*5*/].f_2;
}

void func_165(int iParam0, bool bParam1)
{
	if (!func_619(iParam0, 0, 1))
	{
		return;
	}
	if (func_167(iParam0) != -1)
	{
		return;
	}
	if (Global_1348775)
	{
		if (iParam0 == Global_1348775.f_1)
		{
			return;
		}
	}
	if (func_166(iParam0))
	{
		return;
	}
	if (Global_1348813 >= 32)
	{
		return;
	}
	Global_1348780[Global_1348813] = iParam0;
	Global_1348813++;
	if (bParam1)
	{
	}
}

int func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348813)
	{
		if (Global_1348780[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_167(int iParam0)
{
	int iVar0;
	
	if (!func_619(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348773 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348773)
	{
		if (Global_1348612[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x7BEEB9D9904F3BAD(Global_1348612[iVar0 /*5*/].f_2) && unk_0x512211B77C9DF624(Global_1348612[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_168(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_168(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348773)
	{
		return;
	}
	if (unk_0x7BEEB9D9904F3BAD(Global_1348612[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348612[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xA7ABBEE53A1DE38B(Global_1348612[iParam0 /*5*/].f_2), 64);
			unk_0xCB1D1677ABBD32DC(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x48F723C28E5556E7(Global_1348612[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348773)
	{
		Global_1348612[iVar32 /*5*/] = { Global_1348612[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_169(&(Global_1348612[iVar32 /*5*/]));
	Global_1348773 = (Global_1348773 - 1);
}

void func_169(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_60();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x17CC0D5008835470())
	{
		uParam0->f_3 = unk_0x201D90648B2AE3CE();
	}
}

struct<4> func_170(int iParam0)
{
	struct<4> Var0;
	
	if (func_619(iParam0, 0, 1))
	{
		Global_2460474 = { func_62(iParam0) };
		if (unk_0xB6FEE919E18FF45B())
		{
			if (func_133(Global_2460474))
			{
				if (!unk_0x8BA2944C243C370E(&Global_2460474))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x4F07450559D0D1D1(0))
		{
			return Var0;
		}
		if (func_174(&Global_2460474))
		{
			Global_2460404 = { func_172(iParam0) };
			func_171(&Global_2460404, &Var0);
		}
	}
	return Var0;
}

void func_171(var uParam0, var uParam1)
{
	unk_0x86199F6DDB9773B7(uParam0, 35, uParam1);
}

struct<35> func_172(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_173(iParam0))
	{
		return Global_1315947[unk_0xE0BDAFA1A39552D6() /*35*/];
	}
	Var0 = { func_62(iParam0) };
	unk_0xAFAED23A75339868(&Var13, 35, &Var0);
	return Var13;
}

int func_173(int iParam0)
{
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		return 1;
	}
	return 0;
}

int func_174(var uParam0)
{
	if (unk_0x80D93820C5262668())
	{
		if (unk_0x3D340893CA28EFFC() && unk_0x781D726C27D122E2(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_175(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_114(iParam0) || func_179(iParam0)) || func_178(iParam0))
		{
			return 0;
		}
	}
	if (!func_177(iParam0))
	{
		return 0;
	}
	if ((!func_176(iParam0) && Global_2418529[iParam0 /*313*/].f_232 == -1) && !func_186(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_176(int iParam0)
{
	if (func_619(iParam0, 0, 1))
	{
		if (func_619(unk_0xE0BDAFA1A39552D6(), 0, 1))
		{
			if (unk_0x296D7F88818B62E7(iParam0, unk_0xE0BDAFA1A39552D6()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_177(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_131, 22);
}

bool func_178(int iParam0)
{
	if (func_114(iParam0))
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 8);
}

int func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 10) || unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 9));
	}
	return 0;
}

int func_180(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_17(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_131, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_181()
{
	switch (func_182(unk_0xE0BDAFA1A39552D6()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_126(unk_0xE0BDAFA1A39552D6()))
	{
		switch (func_88(unk_0xE0BDAFA1A39552D6()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_182(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610705[iVar0 /*178*/];
	}
	return -1;
}

int func_183(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 && func_184(Global_1610705[iParam0 /*178*/].f_10.f_28))
	{
		return 1;
	}
	if (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1)
	{
		if (func_184(Global_1610705[iParam0 /*178*/].f_10.f_27))
		{
			return 1;
		}
	}
	return 0;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_185(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_619(unk_0x801C03D92F1C6755(iVar0), 0, 1))
		{
			iVar1 = unk_0x801C03D92F1C6755(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((unk_0x296D7F88818B62E7(iVar1, unk_0xE0BDAFA1A39552D6()) || Global_2418529[iVar1 /*313*/].f_232 != -1) || func_186(iVar1))
				{
					if (func_71(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_186(int iParam0)
{
	return Global_1587816[iParam0 /*444*/].f_180 != 0;
}

void func_187(var uParam0)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7AF283DA3BA078CD(0);
		unk_0xE97F1B22C5E8989F();
	}
}

void func_188(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1338619.f_2 == 0)
		{
			Global_1338619.f_2 = 1;
		}
	}
	else if (Global_1338619.f_2 == 1)
	{
		Global_1338619.f_2 = 0;
	}
}

void func_189()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 1))
	{
		if (func_191())
		{
			func_190();
		}
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428549.f_2191[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
			unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_191()
{
	return Global_2428549.f_2191[0 /*72*/].f_1 != 0;
}

int func_192()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 0) && func_191())
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 1) && func_191())
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if (func_191())
	{
		if (func_194(Global_2428549.f_2191[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 86:
		case 89:
		case 90:
		case 85:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 88:
		case 98:
			return 1;
		
		default:
	}
	return 0;
}

int func_195()
{
	if (func_191())
	{
		if (func_196(Global_2428549.f_2191[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
			return 1;
		
		default:
	}
	return 0;
}

void func_197(int iParam0)
{
	Global_1338619.f_1 = Global_1338619;
	Global_1338619 = iParam0;
}

int func_198(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_244(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_243();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_242())
		{
			if (func_241() > 0 && Global_1573687)
			{
				unk_0x1DA4744DA0C4552C();
				unk_0x681D62E6F663F7E0(fVar7);
				unk_0x9AD5FF38501E64A6(18);
				if (unk_0x6146EFE5BC2DD8DC())
				{
					unk_0xBC86BA2C01CE2035();
				}
				unk_0x9AD5FF38501E64A6(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_224())
		{
			func_223(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4429, 26))
	{
		func_223(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_241() == 1)
		{
			func_222(bVar6, uParam0, 0);
			func_7(&(uParam2->f_19), 0, 0);
			func_223(uParam0, uParam2, 0);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x6146EFE5BC2DD8DC())
		{
			unk_0xBC86BA2C01CE2035();
		}
		unk_0x9AD5FF38501E64A6(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_241() == 0 && !bParam5))
		{
			func_223(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_221();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x1DA4744DA0C4552C();
				}
				unk_0x9AD5FF38501E64A6(18);
			}
			if (unk_0x7DA173D4FD42F36B(uParam2->f_33, 0))
			{
				Global_1573685 = uParam3;
				Global_1573684 = 1;
				unk_0x681D62E6F663F7E0(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573686)
					{
						unk_0x99BCB15F954AF579(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_221();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x1DA4744DA0C4552C();
					}
					unk_0x9AD5FF38501E64A6(18);
				}
				unk_0x681D62E6F663F7E0(fVar7);
				if (func_222(bVar6, uParam0, 0))
				{
					func_187(uParam0);
					uVar4 = func_219(iParam1, &(Global_1617902.f_76925), bParam4);
					if (bParam4)
					{
						func_216(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_209(uParam0, func_213(uParam2), func_210(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_206(uParam0, func_208(), func_207(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573686;
						func_216(uParam0, uVar4, "", 0, -1, Global_1573686, 1);
					}
					else
					{
						Var0 = { func_204(iParam1) };
						iVar8 = func_199(iParam1);
						func_216(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xE27C8E42A97895CF(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_203())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_202(unk_0xE0BDAFA1A39552D6()))
			{
				iVar0 = 20;
			}
			if (func_201(unk_0xE0BDAFA1A39552D6()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_200(unk_0xE0BDAFA1A39552D6()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_200(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 4;
}

bool func_201(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 7;
}

bool func_202(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 2;
}

bool func_203()
{
	return Global_1617902.f_1 == 0;
}

struct<4> func_204(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_205(unk_0xE0BDAFA1A39552D6()) || func_200(unk_0xE0BDAFA1A39552D6()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1617902.f_23, 16);
			break;
	}
	return Var0;
}

bool func_205(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 5;
}

void func_206(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_TITLE");
		if (unk_0x226FA58470A21AEF(sParam2))
		{
			func_145(sParam1);
		}
		else
		{
			unk_0x7291E2F821FCFC04("FM_AE_BRACKT");
			unk_0x4C5D86B5B659C953(sParam1);
			unk_0x4C5D86B5B659C953(sParam2);
			unk_0xD6360E18957BCDD3();
		}
		func_145("");
		if (iParam3 != -1)
		{
			unk_0x7AF283DA3BA078CD(iParam3);
		}
		unk_0xE97F1B22C5E8989F();
	}
}

char* func_207()
{
	switch (func_88(unk_0xE0BDAFA1A39552D6()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_208()
{
	switch (func_88(unk_0xE0BDAFA1A39552D6()))
	{
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			return "PIM_MAGM201";
			break;
		
		case 151:
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
	}
	return "";
}

void func_209(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_TITLE");
		if (unk_0x226FA58470A21AEF(uParam2))
		{
			func_145(uParam1);
		}
		else if (func_182(unk_0xE0BDAFA1A39552D6()) == 133)
		{
			unk_0x7291E2F821FCFC04("FM_AE_BRACKT_C");
			unk_0x4C5D86B5B659C953(uParam1);
			unk_0x4C5D86B5B659C953(sParam2);
			unk_0xD6360E18957BCDD3();
		}
		else
		{
			unk_0x7291E2F821FCFC04("FM_AE_BRACKT");
			unk_0x4C5D86B5B659C953(sParam1);
			unk_0x4C5D86B5B659C953(sParam2);
			unk_0xD6360E18957BCDD3();
		}
		func_145("");
		if (iParam3 != -1)
		{
			unk_0x7AF283DA3BA078CD(iParam3);
		}
		unk_0xE97F1B22C5E8989F();
	}
}

char* func_210(var uParam0)
{
	int iVar0;
	
	iVar0 = func_182(unk_0xE0BDAFA1A39552D6());
	if (func_212())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_211())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_211()
{
	if (func_182(unk_0xE0BDAFA1A39552D6()) == 133)
	{
		return Global_2464975.f_4672;
	}
	return -1;
}

bool func_212()
{
	return Global_1587815;
}

char* func_213(var uParam0)
{
	int iVar0;
	
	iVar0 = func_182(unk_0xE0BDAFA1A39552D6());
	if (func_212())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_215() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_215() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_211())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_214() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_214()
{
	return Global_2464975.f_4675;
}

int func_215()
{
	if (func_182(unk_0xE0BDAFA1A39552D6()) == 132)
	{
		return Global_2464975.f_4670;
	}
	return -1;
}

void func_216(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_147(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7291E2F821FCFC04(uParam1);
			unk_0xD92C45283BCDA624(iParam5);
			unk_0xD6360E18957BCDD3();
		}
		else
		{
			func_145(sParam1);
		}
		if (func_242() && iParam6)
		{
			if (func_218())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7291E2F821FCFC04("LBD_DPD_CNT");
			unk_0xD92C45283BCDA624(iVar0);
			unk_0xD92C45283BCDA624(iVar1);
			unk_0xD6360E18957BCDD3();
		}
		else
		{
			func_145(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x7AF283DA3BA078CD(iParam4);
			if (func_217(unk_0xE0BDAFA1A39552D6()))
			{
				unk_0x7AF283DA3BA078CD(166);
			}
		}
		unk_0xE97F1B22C5E8989F();
	}
}

int func_217(int iParam0)
{
	if (func_202(iParam0) || func_201(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_218()
{
	return Global_1573687;
}

char* func_219(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_220();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x226FA58470A21AEF(uParam1))
	{
		if (Global_1573851 == 1)
		{
			Global_1573851 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 6:
			case 22:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_220()
{
	if (unk_0x6CEB82F05DCED56D())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x80BCEDDB598B6BA5())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x8683BD7E2B2607B8())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x2E1D5B997B3CEA7A())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_221()
{
	Global_36642 = 1;
}

bool func_222(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xDDEDAA5105426019("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xDDEDAA5105426019("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xDDEDAA5105426019("mp_matchmaking_card");
	}
	return unk_0x6A87921801178186(*uParam1);
}

void func_223(var uParam0, var uParam1, bool bParam2)
{
	unk_0x99BCB15F954AF579(&(uParam1->f_33), 7);
	Global_1573685 = 0;
	func_137();
	Global_1573684 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_138(&(uParam1->f_19));
		}
	}
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x0E4537BE1D04DAC7(uParam0);
	}
	if (unk_0x7DA173D4FD42F36B(uParam1->f_33, 0))
	{
		unk_0x99BCB15F954AF579(&(uParam1->f_33), 0);
	}
	unk_0x681D62E6F663F7E0(0f);
}

int func_224()
{
	if (func_240())
	{
		return 0;
	}
	if (func_239())
	{
		return 0;
	}
	if (!func_237())
	{
		return 0;
	}
	if (!func_235())
	{
		return 0;
	}
	if (func_234(8, -1))
	{
		return 0;
	}
	if (func_241() == 2)
	{
		return 0;
	}
	if (Global_2464975.f_4404)
	{
		return 0;
	}
	if (func_233())
	{
		return 0;
	}
	else if (!func_230(unk_0xE0BDAFA1A39552D6(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_229(1) || func_227(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (func_225(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (Global_1722816)
	{
		return 0;
	}
	if (Global_1722819)
	{
		return 0;
	}
	if (func_76(0))
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 4))
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_226())
	{
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			return 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_226()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

int func_227(bool bParam0)
{
	if (unk_0xA72B7766889EBB86())
	{
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (func_228(unk_0x06736567F820A39E()))
			{
				if (unk_0xE9F7E89BC2352535(0, 25) || unk_0xE9F7E89BC2352535(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17118.f_130)
	{
		return 0;
	}
	if (unk_0xE9F7E89BC2352535(0, 19) || (!bParam0 && unk_0x7A4571218C06A722(0, 19)))
	{
		return 1;
	}
	if (unk_0x55812CD5A331E1F8())
	{
		if (((unk_0xE9F7E89BC2352535(0, 166) || unk_0xE9F7E89BC2352535(0, 167)) || unk_0xE9F7E89BC2352535(0, 168)) || unk_0xE9F7E89BC2352535(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x7A4571218C06A722(0, 166) || unk_0x7A4571218C06A722(0, 167)) || unk_0x7A4571218C06A722(0, 168)) || unk_0x7A4571218C06A722(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_228(int iParam0)
{
	int iVar0;
	
	if (unk_0x8B2DC483C96C65F6())
	{
		if (!unk_0xCFC04A38F256EE06(iParam0))
		{
			unk_0x47BF380FF078FA9F(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_229(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_230(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_231(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587816[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_231(int iParam0)
{
	return func_232(iParam0);
}

bool func_232(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

bool func_233()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_180 != 0;
}

bool func_234(int iParam0, int iParam1)
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
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
}

int func_235()
{
	if (func_236() == 0)
	{
		return 1;
	}
	return 0;
}

int func_236()
{
	return Global_1312466.f_18;
}

int func_237()
{
	if (func_238())
	{
		return 1;
	}
	if (unk_0x4FF34B5B023875E1())
	{
		return 0;
	}
	if (unk_0x58CFBE8B8644D59B() || unk_0xEC708A793EB17979())
	{
		return 0;
	}
	if (unk_0xE80DFF2CE01EA7DA())
	{
		return 0;
	}
	return 1;
}

bool func_238()
{
	return Global_1312438;
}

bool func_239()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 5;
}

bool func_240()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

int func_241()
{
	return Global_1338622.f_68;
}

int func_242()
{
	if (Global_1573686 > 16)
	{
		return 1;
	}
	return 0;
}

float func_243()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x3F3FC0D85C84A6CE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return 1;
			break;
	}
	return 0;
}

int func_245()
{
	if (func_246(unk_0xE0BDAFA1A39552D6()))
	{
		return Global_1318849;
	}
	return 0;
}

int func_246(int iParam0)
{
	if (unk_0x17CC0D5008835470())
	{
		if (func_17(iParam0, 0))
		{
			return unk_0x7FE82332EF233898(iParam0);
		}
	}
	return 0;
}

int func_247()
{
	if (func_245())
	{
		return 1;
	}
	if (func_178(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_212())
	{
		return 1;
	}
	if (func_115(unk_0xE0BDAFA1A39552D6()))
	{
		switch (func_182(unk_0xE0BDAFA1A39552D6()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_248(unk_0xE0BDAFA1A39552D6()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_248(unk_0xE0BDAFA1A39552D6()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_248(unk_0xE0BDAFA1A39552D6()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_248(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 4);
}

int func_249(int iParam0)
{
	if ((iParam0 == 24 && func_115(unk_0xE0BDAFA1A39552D6())) && !func_126(unk_0xE0BDAFA1A39552D6()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_89(unk_0xE0BDAFA1A39552D6(), 0) && func_126(unk_0xE0BDAFA1A39552D6()))
		{
			return 1;
		}
		if (func_117(unk_0xE0BDAFA1A39552D6()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_250()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar0 = unk_0x490BA5FDD7EE47A9();
	}
	else
	{
		iVar0 = func_251();
	}
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Local_968[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_251()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	if (unk_0xA27C9E8196C79D22(iVar1))
	{
		if (unk_0x605885F0A8AC6672(iVar1))
		{
			iVar2 = unk_0xBD1E178ABA0E03F1(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_252()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_253(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_253(int iParam0)
{
	struct<4> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<14> Var15;
	int iVar29;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 10))
	{
		iVar29 = 0;
		while (iVar29 < 4)
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_113, iVar29))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_6, iVar29))
				{
					if (unk_0xC1EDB61CE0A4B94E(Var0.f_0))
					{
						if (unk_0xFCBEC4C2079B0872(Var0.f_0))
						{
							if (!unk_0x7DA173D4FD42F36B(Local_96.f_109, iVar29))
							{
								if (!unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_5, iVar29))
								{
									if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar29 /*26*/].f_2))
									{
										if (unk_0xC1EDB61CE0A4B94E(unk_0xA9B72300DA155F92(Local_96.f_2[iVar29 /*26*/].f_2)))
										{
											if (unk_0x43AB2E726FCE3BF7(Var0.f_0) == unk_0xA9B72300DA155F92(Local_96.f_2[iVar29 /*26*/].f_2))
											{
												if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
												{
													if (unk_0x77CB3F400804EDD1(Var0.f_1))
													{
														if (unk_0x406B8F450D0105AB(Var0.f_1) == unk_0x06736567F820A39E())
														{
															if (func_575() == Local_96.f_118)
															{
																unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_5), iVar29);
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
						else if (unk_0x77CB3F400804EDD1(Var0.f_0))
						{
							iVar11 = unk_0x406B8F450D0105AB(Var0.f_0);
							if (iVar11 == unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar29 /*26*/].f_1))
							{
								if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
								{
									if (unk_0x77CB3F400804EDD1(Var0.f_1))
									{
										iVar10 = unk_0x406B8F450D0105AB(Var0.f_1);
										if (unk_0x4E75E5867592AC01(iVar10))
										{
											iVar13 = unk_0x90CB634380C802C7(iVar10);
											if (unk_0x605885F0A8AC6672(iVar13))
											{
												if (Var0.f_3)
												{
													if (iVar13 == unk_0xE0BDAFA1A39552D6())
													{
														Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_11++;
														unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_6), iVar29);
														Var15.f_2 = 144;
														Var15.f_10 = unk_0xE0BDAFA1A39552D6();
														func_259(Var15, func_260(0));
														func_254("HUNT_TCKP", 1);
													}
												}
											}
											else if (!unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_7, iVar29))
											{
												if (Var0.f_3)
												{
													iVar13 = unk_0x90CB634380C802C7(iVar10);
													unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_7), iVar29);
												}
											}
										}
										else if (!unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_7, iVar29))
										{
											if (Var0.f_3)
											{
												unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_7), iVar29);
											}
										}
									}
									else if (!unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_7, iVar29))
									{
										if (Var0.f_3)
										{
											unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_7), iVar29);
										}
									}
								}
								else if (!unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_7, iVar29))
								{
									if (Var0.f_3)
									{
										unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_7), iVar29);
									}
								}
							}
						}
					}
				}
			}
			iVar29++;
		}
	}
	if (func_250())
	{
		if (!func_92(unk_0xE0BDAFA1A39552D6(), 20))
		{
			if (unk_0xC1EDB61CE0A4B94E(Var0.f_0))
			{
				if (unk_0x77CB3F400804EDD1(Var0.f_0))
				{
					iVar11 = unk_0x406B8F450D0105AB(Var0.f_0);
					if (unk_0x4E75E5867592AC01(iVar11))
					{
						iVar12 = unk_0x90CB634380C802C7(iVar11);
						if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
						{
							if (unk_0x77CB3F400804EDD1(Var0.f_1))
							{
								iVar10 = unk_0x406B8F450D0105AB(Var0.f_1);
								if (unk_0x4E75E5867592AC01(iVar10))
								{
									iVar13 = unk_0x90CB634380C802C7(iVar10);
									if (iVar13 == unk_0xE0BDAFA1A39552D6())
									{
										if (unk_0x605885F0A8AC6672(iVar12))
										{
											if (func_152(iVar12, 1))
											{
												if (Local_96.f_118 > -1)
												{
													iVar14 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(Local_96.f_118));
													if (func_71(iVar12, iVar14, 1))
													{
														func_116(0);
														func_109();
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
			}
		}
	}
}

int func_254(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x999E5F6D1B49D87B(sParam0);
	iVar0 = unk_0xB452F88B6A7B058D(0, 1);
	func_255(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_255(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_258() || !unk_0x21A36E2323FEA4B1()) || !func_17(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	iVar0 = func_256(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1731647.f_5[iVar0 /*53*/] = iParam0;
		Global_1731647.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1731647.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1731647.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1731647.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1731647.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1731647.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1731647 - 1))
	{
		if (iParam0 > Global_1731647.f_5[iVar0 /*53*/].f_1)
		{
			func_257(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1731647++;
	if (Global_1731647 > 5)
	{
		Global_1731647 = 5;
		return Global_1731647;
	}
	return (Global_1731647 - 1);
}

void func_257(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1731647.f_5[iVar0 /*53*/] = { Global_1731647.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_258()
{
	return unk_0xAACC697A3792B3EF(-1762644250);
}

void func_259(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xE0BDAFA1A39552D6();
	if (!iParam14 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Param0, 14, iParam14);
	}
}

int func_260(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar1)))
		{
			iVar2 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar1));
			if (func_619(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xE0BDAFA1A39552D6() || iParam0)
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_261()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if (unk_0x7DA173D4FD42F36B(uLocal_1417, 14))
		{
			unk_0x99BCB15F954AF579(&iLocal_1417, 14);
		}
		return;
	}
	iVar0 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 14))
	{
		if (Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_1 != 0)
		{
			Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_1 = 0;
		}
		unk_0xE27C8E42A97895CF(&iLocal_1417, 14);
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 15))
	{
		unk_0xE27C8E42A97895CF(&iLocal_1417, 15);
		func_509();
	}
	if (unk_0xA27C9E8196C79D22(iVar0))
	{
		if (unk_0x605885F0A8AC6672(iVar0))
		{
			uVar1 = unk_0xBD1E178ABA0E03F1(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_968[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_486();
					func_468();
					func_453();
					break;
				
				case 2:
					func_262();
					break;
				
				case 3:
					func_588();
					break;
				}
			}
	}
}

void func_262()
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	char* sVar12;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar10 = unk_0x490BA5FDD7EE47A9();
	iVar11 = unk_0xE0BDAFA1A39552D6();
	if (func_17(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar10 = func_251();
		iVar11 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	}
	if (!unk_0x7DA173D4FD42F36B(Local_968[iVar10 /*14*/].f_1, 4))
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 9))
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 1))
			{
				if (iVar10 == Local_96.f_118 || func_575() == Local_96.f_118)
				{
					if (func_117(iVar11) >= 2)
					{
						sVar12 = func_452(iVar11);
						iVar13 = func_451(iVar11);
						func_449(86, "GB_WINNER", "BIGM_HUNTD", sVar12, iVar13, 0, -1, -1, -1, 2, -1);
					}
					if (iVar11 == unk_0xE0BDAFA1A39552D6())
					{
						if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 6))
						{
							func_448(1, 1);
							unk_0xE27C8E42A97895CF(&iLocal_1417, 6);
						}
						Var0.f_0 = func_447();
						Var0.f_1 = func_446();
						func_329(166, 1, &Var0);
						unk_0xF746C048B9686846(iVar11);
						iLocal_1711 = unk_0x16B4666C6E139F11();
						unk_0x23C09ED6B6466E40(0);
						unk_0xE27C8E42A97895CF(&iLocal_1417, 17);
						func_7(&uLocal_1712, 0, 0);
					}
				}
				else if (func_250())
				{
					if (func_152(iVar11, 1))
					{
						if (func_117(iVar11) >= 2)
						{
							sVar12 = func_452(unk_0x801C03D92F1C6755(Local_96.f_119));
							iVar13 = func_451(unk_0x801C03D92F1C6755(Local_96.f_119));
							func_449(87, "GB_WORK_OVER", "BIGM_HUNTD", sVar12, iVar13, 0, -1, -1, -1, 2, -1);
						}
						if (iVar11 == unk_0xE0BDAFA1A39552D6())
						{
							if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 6))
							{
								func_448(0, 2);
								unk_0xE27C8E42A97895CF(&iLocal_1417, 6);
							}
							if (func_110(iVar11))
							{
								Var0.f_0 = func_328();
								Var0.f_1 = func_327();
							}
							func_329(166, 0, &Var0);
						}
					}
					else
					{
						if (func_117(iVar11) >= 2)
						{
							sVar12 = func_452(unk_0x801C03D92F1C6755(Local_96.f_119));
							iVar13 = func_451(unk_0x801C03D92F1C6755(Local_96.f_119));
							func_449(87, "GB_WORK_OVER", "BIGM_HUNTD", sVar12, iVar13, 0, -1, -1, -1, 2, -1);
						}
						if (iVar11 == unk_0xE0BDAFA1A39552D6())
						{
							if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 6))
							{
								func_448(0, 2);
								unk_0xE27C8E42A97895CF(&iLocal_1417, 6);
							}
							if (func_110(iVar11))
							{
								Var0.f_0 = func_328();
								Var0.f_1 = func_327();
							}
							func_329(166, 0, &Var0);
						}
					}
				}
				unk_0xE27C8E42A97895CF(&iLocal_1417, 9);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 3))
			{
				iVar14 = (4 - Local_96.f_115);
				if (iVar10 == Local_96.f_118 || func_575() == Local_96.f_118)
				{
					if (func_117(iVar11) >= 2)
					{
						sVar12 = func_323();
						iVar13 = func_451(iVar11);
						func_449(87, "GB_WORK_OVER", "BIGM_HUNFD", sVar12, iVar13, 0, -1, -1, -1, 2, -1);
					}
					if (iVar11 == unk_0xE0BDAFA1A39552D6())
					{
						if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 6))
						{
							func_448(0, 2);
							unk_0xE27C8E42A97895CF(&iLocal_1417, 6);
						}
						Var0.f_0 = func_447();
						Var0.f_1 = func_446();
						func_329(166, 0, &Var0);
					}
				}
				else
				{
					if (func_117(iVar11) >= 2)
					{
						sVar12 = func_452(unk_0x801C03D92F1C6755(Local_96.f_119));
						iVar13 = func_451(unk_0x801C03D92F1C6755(Local_96.f_119));
						if (iVar14 == 1)
						{
							func_449(86, "GB_WINNER", "BIGM_HUN1S", sVar12, iVar13, 0, iVar14, -1, -1, 2, -1);
						}
						else if (iVar14 > 1)
						{
							func_449(86, "GB_WINNER", "BIGM_HUNRS", sVar12, iVar13, 0, iVar14, -1, -1, 2, -1);
						}
					}
					if (iVar11 == unk_0xE0BDAFA1A39552D6())
					{
						if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 6))
						{
							func_448(1, 1);
							unk_0xE27C8E42A97895CF(&iLocal_1417, 6);
						}
						if (func_110(iVar11))
						{
							Var0.f_0 = func_328();
							Var0.f_1 = func_327();
						}
						func_329(166, 1, &Var0);
						unk_0xF746C048B9686846(unk_0xE0BDAFA1A39552D6());
					}
				}
				unk_0xE27C8E42A97895CF(&iLocal_1417, 9);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 5))
			{
				if (func_309())
				{
					if (func_574())
					{
						if (func_117(iVar11) >= 2)
						{
						}
					}
					else if (func_117(iVar11) >= 2)
					{
						func_288(87, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar11 == unk_0xE0BDAFA1A39552D6())
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 6))
					{
						func_448(0, 8);
						unk_0xE27C8E42A97895CF(&iLocal_1417, 6);
					}
					func_329(166, 0, &Var0);
				}
				unk_0xE27C8E42A97895CF(&iLocal_1417, 9);
			}
		}
		if (unk_0x7DA173D4FD42F36B(iLocal_1417, 9))
		{
			func_509();
			if (!unk_0x7DA173D4FD42F36B(uLocal_1418, 8))
			{
				func_275();
				func_70();
				unk_0xE27C8E42A97895CF(&iLocal_1418, 8);
			}
			if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 10))
			{
			}
			if (func_263(&uLocal_1425, 0))
			{
				if (iVar10 == unk_0x490BA5FDD7EE47A9())
				{
					unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_1), 4);
				}
			}
			else if (unk_0x7DA173D4FD42F36B(iLocal_1417, 17))
			{
				if (func_6(&uLocal_1712, 10000, 0))
				{
					unk_0x23C09ED6B6466E40(iLocal_1711);
					unk_0x99BCB15F954AF579(&iLocal_1417, 17);
				}
			}
		}
	}
}

int func_263(var uParam0, bool bParam1)
{
	bool bVar0;
	
	func_93(29);
	if ((*uParam0 > 0 && !func_191()) && func_117(unk_0xE0BDAFA1A39552D6()) != 0)
	{
		if (!func_274())
		{
			func_273();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_8(&(uParam0->f_3)))
			{
				func_7(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 2);
				if (bParam1)
				{
					unk_0xE27C8E42A97895CF(&(Global_2464975.f_4426), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_272(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_8(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_267();
				func_272(uParam0, 2);
			}
			break;
		
		case 2:
			func_267();
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_264(func_265()))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
				func_272(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 1);
				unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 2);
				func_272(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 1);
			unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_264(char* sParam0)
{
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

char* func_265()
{
	if (func_184(func_266()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_266()
{
	return Global_1616402;
}

void func_267()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 0))
	{
		if ((((((((!unk_0xCA914B57A3600215() && !unk_0x7DA173D4FD42F36B(Global_2464975.f_743, 2)) && func_619(unk_0xE0BDAFA1A39552D6(), 1, 1)) && !Global_68089) && !Global_52961) && !unk_0x4FF34B5B023875E1()) && !func_92(unk_0xE0BDAFA1A39552D6(), 22)) && func_117(unk_0xE0BDAFA1A39552D6()) != 0) && !func_270(func_271()))
		{
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_4426), 1);
			func_269(func_265(), -1);
			func_268(1);
			unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 0);
		}
	}
}

void func_268(int iParam0)
{
	if (iParam0 && !func_191())
	{
		unk_0x962E604CCA53388F(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_269(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam1);
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_271()
{
	var uVar0;
	
	uVar0 = unk_0x47B34031F915C179();
	if (unk_0x2F6869889D97DFED(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	return 0;
}

void func_272(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_273()
{
	Global_2445584 = 1;
}

int func_274()
{
	if (func_88(unk_0xE0BDAFA1A39552D6()) == 170)
	{
		return 1;
	}
	return 0;
}

void func_275()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xCDB4C4200A9B478A(uLocal_1432[iVar0]))
		{
			unk_0x2239ED27B231AE2E(&(uLocal_1432[iVar0]));
		}
		iVar0++;
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_1417, 18))
	{
		func_287();
		unk_0x99BCB15F954AF579(&iLocal_1417, 18);
	}
	func_284();
	func_276();
}

void func_276()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 7))
	{
		unk_0xE27C8E42A97895CF(&iLocal_1417, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x801C03D92F1C6755(iVar0);
			if (unk_0xA27C9E8196C79D22(iVar1))
			{
				if (iVar1 != unk_0xE0BDAFA1A39552D6())
				{
					if (unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_8, iVar0))
					{
						func_282(iVar1, 432, 0);
						func_277(iVar1, func_281(iLocal_1709), 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_277(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return;
	}
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_279())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_278(iParam0))
	{
		if (bParam2)
		{
			unk_0xE27C8E42A97895CF(&(Global_2412936.f_386), iVar0);
			Global_2412936.f_559[iParam0] = unk_0xAE832DCCE9CD3242();
			Global_2412936.f_427[iVar0] = uParam1;
		}
		else
		{
			unk_0x99BCB15F954AF579(&(Global_2412936.f_386), iVar0);
			Global_2412936.f_559[iParam0] = -1;
		}
	}
}

int func_278(int iParam0)
{
	if (!unk_0xDF49ABF9204CC801(Global_2412936.f_559[iParam0]) || Global_2412936.f_559[iParam0] == unk_0xAE832DCCE9CD3242())
	{
		return 1;
	}
	return 0;
}

int func_279()
{
	switch (func_280())
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

int func_280()
{
	return Global_25152;
}

int func_281(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xD06A5371300291A8(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_282(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_60())
	{
		return;
	}
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_279())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xDF49ABF9204CC801(Global_2412936.f_526[iParam0]) || Global_2412936.f_526[iParam0] == unk_0xAE832DCCE9CD3242())
	{
		if (bParam2)
		{
			if (!unk_0x7DA173D4FD42F36B(Global_2412936.f_385, iVar0))
			{
				func_283();
			}
			unk_0xE27C8E42A97895CF(&(Global_2412936.f_385), iVar0);
			Global_2412936.f_394[iVar0] = uVar1;
			Global_2412936.f_526[iParam0] = unk_0xAE832DCCE9CD3242();
		}
		else
		{
			if (unk_0x7DA173D4FD42F36B(Global_2412936.f_385, iVar0))
			{
				func_283();
			}
			unk_0x99BCB15F954AF579(&(Global_2412936.f_385), iVar0);
			Global_2412936.f_526[iParam0] = -1;
		}
	}
}

void func_283()
{
	Global_2412936.f_880 = 1;
}

void func_284()
{
	if (unk_0x7DA173D4FD42F36B(iLocal_1417, 16))
	{
		func_79();
		func_285();
		unk_0x99BCB15F954AF579(&iLocal_1417, 16);
	}
}

void func_285()
{
	if (Global_2410759.f_6 == unk_0xAE832DCCE9CD3242())
	{
		func_286();
	}
}

void func_286()
{
	struct<25> Var0;
	
	if (unk_0xDF49ABF9204CC801(Global_2410759.f_6))
	{
		if (!Global_2410759.f_6 == unk_0xAE832DCCE9CD3242())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2410759 = { Var0 };
	Global_2410759.f_6 = -1;
}

void func_287()
{
	if (unk_0x17CC0D5008835470())
	{
		if (!func_125())
		{
			if (func_619(unk_0xE0BDAFA1A39552D6(), 1, 0))
			{
				unk_0xB4BF8D10E8B22242(unk_0x06736567F820A39E(), 1);
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 342, 0);
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 122, 0);
			}
			unk_0xAC5CD08D2C6F2E74(unk_0xE0BDAFA1A39552D6(), 1f);
			unk_0x2339DE868E879B53(0);
			unk_0x4C48684974B45ED5(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0x8EE5B578170FE8FC(0, 0);
			}
		}
		else
		{
			if (func_619(unk_0xE0BDAFA1A39552D6(), 1, 1))
			{
				unk_0xB4BF8D10E8B22242(unk_0x06736567F820A39E(), 0);
				unk_0xDC8345A5D9F4B348(unk_0x06736567F820A39E(), joaat("weapon_unarmed"), 1);
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 342, 1);
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 122, 1);
				unk_0xAC5CD08D2C6F2E74(unk_0xE0BDAFA1A39552D6(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0x8EE5B578170FE8FC(1, 0);
				}
			}
			unk_0x2339DE868E879B53(1);
			unk_0x4C48684974B45ED5(0);
		}
	}
}

int func_288(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_308(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_289(&Var0);
}

int func_289(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2428549.f_2481)
		{
			return 0;
		}
	}
	func_292(uParam0, uParam0->f_16);
	func_291(uParam0);
	if (func_290(uParam0->f_1))
	{
		if (Global_2428549.f_2191[0 /*72*/].f_2 == 0)
		{
			Global_2428549.f_2191[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2428549.f_2191[0 /*72*/].f_1 == 13 || Global_2428549.f_2191[0 /*72*/].f_1 == 52) || Global_2428549.f_2191[0 /*72*/].f_1 == 53) || Global_2428549.f_2191[0 /*72*/].f_1 == 57)
		{
			Global_2428549.f_2191[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2428549.f_2191[iVar0 + 1 /*72*/] = { Global_2428549.f_2191[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2428549.f_2191[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2428549.f_2191[iVar0 /*72*/].f_2 == 0)
		{
			Global_2428549.f_2191[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 1);
				Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_194(Global_2428549.f_2191[iVar0 /*72*/].f_1))
				{
					Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
					unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_290(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_291(var uParam0)
{
	if (func_196(uParam0->f_1))
	{
		uParam0->f_66 = func_157();
	}
}

void func_292(var uParam0, int iParam1)
{
	if (func_196(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_60())
	{
		return;
	}
	if (func_194(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_293(iParam1, -2, 0, 0);
		}
	}
}

int func_293(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_225(iParam0))
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
	if (func_225(unk_0xE0BDAFA1A39552D6()) || (func_307() && func_306()))
	{
		uVar0 = func_305();
		if (unk_0xC1EDB61CE0A4B94E(uVar0))
		{
			if (unk_0x4E75E5867592AC01(iVar0))
			{
				if (unk_0x90CB634380C802C7(iVar0) != -1)
				{
					if (func_619(unk_0x90CB634380C802C7(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
						{
							if (Global_1617902.f_73330[iParam1] != -1)
							{
								return func_304(iParam1, iParam0, 0);
							}
							else
							{
								return func_301(iParam0, unk_0x90CB634380C802C7(iVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_301(iParam0, unk_0x90CB634380C802C7(iVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
			{
				if (Global_1617902.f_73330[iParam1] != -1)
				{
					return func_304(iParam1, iParam0, 0);
				}
				else
				{
					return func_294(0, -1, 0);
				}
			}
			else
			{
				return func_294(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
	{
		if (Global_1617902.f_73330[iParam1] != -1)
		{
			return func_304(iParam1, iParam0, 0);
		}
		else
		{
			return func_301(iParam0, unk_0xE0BDAFA1A39552D6(), iParam1, bParam2, bParam3);
		}
	}
	return func_301(iParam0, unk_0xE0BDAFA1A39552D6(), iParam1, bParam2, bParam3);
}

int func_294(bool bParam0, int iParam1, bool bParam2)
{
	return func_295(unk_0xE0BDAFA1A39552D6(), bParam0, iParam1, bParam2);
}

int func_295(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xF749B19A9F9B3DBF(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_300(iVar0, iParam2, 0) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_299(1);
				}
				else
				{
					return func_299(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x7DA173D4FD42F36B(Global_1617902.f_4, 20))
			{
				return func_296(iVar0, iParam2, 1);
			}
			else
			{
				return func_296(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_299(1);
	}
	return func_299(0);
}

int func_296(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_298(iParam0, iParam1);
	if (func_297(Global_1617902.f_76918))
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

int func_297(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7549[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_298(int iParam0, int iParam1)
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
			if (!func_300(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_299(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_300(int iParam0, int iParam1, int iParam2)
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
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 0);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 1);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 2);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 4);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 5);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 6);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 8);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 9);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 10);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 12);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 13);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 14);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_301(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xF749B19A9F9B3DBF(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587816[iVar2 /*444*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_303(iParam1, iParam0, iVar0, 0) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18)) || ((func_300(unk_0xF749B19A9F9B3DBF(iParam1), unk_0xF749B19A9F9B3DBF(iParam0), 0) && unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 23)) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18)))
			{
				return func_299(1);
			}
			else if (unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 26))
			{
				return func_302(1);
			}
			else
			{
				return func_295(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587816[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_299(1);
			}
			else
			{
				return func_295(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_156(iParam0);
	if (!iVar3 == -1)
	{
		return func_154(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_302(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_303(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && unk_0xF749B19A9F9B3DBF(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xF749B19A9F9B3DBF(iParam0) == unk_0xF749B19A9F9B3DBF(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xF749B19A9F9B3DBF(iParam0) == iParam2;
	}
	return unk_0xF749B19A9F9B3DBF(iParam0) == iParam2;
}

int func_304(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1617902.f_73330[iParam0] != -1 && Global_1617902.f_73330[iParam0] <= 4)
	{
		if (Global_1617902.f_73330[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617902.f_73330[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617902.f_73330[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617902.f_73330[iParam0] == 4)
		{
			if (unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 29))
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
			iVar0 = Global_1617902.f_73330[iParam0];
		}
	}
	else
	{
		iVar0 = func_295(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_305()
{
	return Global_2359301.f_2;
}

bool func_306()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 4);
}

bool func_307()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 14);
}

void func_308(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_60();
	uParam1->f_17 = func_60();
	uParam1->f_18 = func_60();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_68 = 1;
	uParam1->f_69 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_309()
{
	int iVar0;
	
	if (!func_17(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if (!func_310(1))
		{
			if (unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_1, 6))
			{
				unk_0x99BCB15F954AF579(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_119())
		{
			if (unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_1, 6))
			{
				unk_0x99BCB15F954AF579(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_1, 6))
		{
			unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_251();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0x7DA173D4FD42F36B(Local_968[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_310(bool bParam0)
{
	if (func_104(unk_0xE0BDAFA1A39552D6(), 21))
	{
		return 0;
	}
	if (unk_0x51857BE3D081B03F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x8122B656FB23F1C7())
		{
			return 0;
		}
	}
	if (func_322(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_321())
	{
		return 0;
	}
	if (func_239())
	{
		return 0;
	}
	if (func_320())
	{
		return 0;
	}
	if (func_233())
	{
		return 0;
	}
	if (unk_0x21A36E2323FEA4B1())
	{
		return 0;
	}
	if (func_231(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (!func_235())
	{
		return 0;
	}
	if (func_104(unk_0xE0BDAFA1A39552D6(), 0) || func_104(unk_0xE0BDAFA1A39552D6(), 3))
	{
		return 0;
	}
	if ((func_104(unk_0xE0BDAFA1A39552D6(), 12) || func_104(unk_0xE0BDAFA1A39552D6(), 14)) || func_104(unk_0xE0BDAFA1A39552D6(), 13))
	{
		return 0;
	}
	if (func_319(unk_0xE0BDAFA1A39552D6(), 0, 0))
	{
		if ((!func_318(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_9) && !func_316(unk_0xE0BDAFA1A39552D6())) || (func_88(unk_0xE0BDAFA1A39552D6()) != 167 && func_88(unk_0xE0BDAFA1A39552D6()) != 168))
		{
			return 0;
		}
	}
	if (func_315())
	{
		return 0;
	}
	if (Global_1722816)
	{
		return 0;
	}
	if (func_314(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_313())
	{
		return 0;
	}
	if (func_312(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_311(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	return 1;
}

int func_311(int iParam0)
{
	if (Global_2418529[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418529[iParam0 /*313*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

int func_312(int iParam0)
{
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 14))
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 11))
	{
		return 1;
	}
	return 0;
}

int func_313()
{
	if (Global_2557205.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_314(int iParam0)
{
	if (!func_619(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587816[iParam0 /*444*/].f_35;
}

bool func_315()
{
	return Global_91362.f_297 > 0;
}

int func_316(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_619(iParam0, 1, 1))
		{
			if (Global_2418529[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_317(Global_2418529[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_317(int iParam0)
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
	}
	return -1;
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_319(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1587816[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (bParam1)
		{
			if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_316(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_320()
{
	return Global_1315913;
}

bool func_321()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 0);
}

int func_322(int iParam0)
{
	if (func_230(iParam0, 1))
	{
		if (Global_1587816[iParam0 /*444*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

char* func_323()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_61(unk_0xE0BDAFA1A39552D6());
	if (iVar0 != func_60())
	{
		if (iVar0 != unk_0xE0BDAFA1A39552D6())
		{
			if (((func_92(iVar0, 28) || func_92(unk_0xE0BDAFA1A39552D6(), 28)) || func_326(iVar0)) && !func_325(iVar0))
			{
				return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
			}
			if (!unk_0xC9B6CD4E82C594D0(0, -1, 1))
			{
				return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
			}
		}
		uVar1 = func_324(&(Global_1610705[iVar0 /*178*/].f_10.f_77));
		if (unk_0x226FA58470A21AEF(uVar1))
		{
			return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_324(var uParam0)
{
	return uParam0;
}

int func_325(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0xB6FEE919E18FF45B() && unk_0x8BA2944C243C370E(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_326(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x8B003E1580113906() || unk_0x55812CD5A331E1F8())
	{
		if (unk_0x4F07450559D0D1D1(0))
		{
			return 0;
		}
	}
	else if (unk_0xB6FEE919E18FF45B())
	{
		if (unk_0x8BA2944C243C370E(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

int func_327()
{
	return ((4 - Local_96.f_115) * Global_262145.f_13148);
}

int func_328()
{
	return ((4 - Local_96.f_115) * Global_262145.f_13147);
}

void func_329(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
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
	var uVar18;
	var uVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	
	func_444(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_443(iParam0));
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_442(iParam0));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_88(unk_0xE0BDAFA1A39552D6()) == 167 || func_88(unk_0xE0BDAFA1A39552D6()) == 168)
	{
		if (bParam1)
		{
			if (func_441(unk_0xE0BDAFA1A39552D6()) > 0)
			{
				func_440();
			}
			else
			{
				func_439();
			}
		}
		else
		{
			func_438();
		}
	}
	if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_106(unk_0xE0BDAFA1A39552D6()))
			{
				if (uParam2->f_5)
				{
					iVar0 = (iVar0 + func_430(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_122));
				}
				else
				{
					iVar4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						iVar4 = (iVar4 + uParam2->f_8);
					}
					iVar5 = func_429(iVar4);
					iVar6 = (iVar5 * iVar4);
					iVar0 = (iVar0 + iVar6);
					iVar8 = func_428(&uVar7);
					iVar9 = Global_262145.f_13770;
					if (iVar8 > iVar9)
					{
						iVar8 = iVar9;
					}
					iVar10 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar8) * Global_262145.f_12980));
					iVar11 = ((iVar0 / 100) * iVar10);
					iVar0 = (iVar0 + iVar11);
					if (uParam2->f_6)
					{
						iVar0 = (iVar0 + *uParam2);
					}
					if (iVar8 > 0 && uParam2->f_9 != 4)
					{
						func_427(44);
					}
				}
				func_421(iVar0);
				func_420();
				Global_2464975.f_4685.f_169 = iVar0;
				iVar12 = 0;
				while (iVar12 < unk_0xC4A9F8E5EC59EB4F())
				{
					iVar13 = iVar12;
					if (unk_0x6B90EB073E0E641F(iVar13))
					{
						iVar14 = unk_0x1886D89D5D557CB4(iVar13);
						if (func_419(iVar14))
						{
							func_411(iVar14, 1);
						}
					}
					iVar12++;
				}
			}
		}
		if (func_106(unk_0xE0BDAFA1A39552D6()))
		{
			func_410();
		}
	}
	else if (iParam0 == 167)
	{
		if (func_106(unk_0xE0BDAFA1A39552D6()))
		{
			if (bParam1)
			{
				func_409();
			}
			func_408();
		}
	}
	iVar15 = func_407();
	if (iVar15 != func_60() && iParam0 != 148)
	{
		if (func_152(unk_0xE0BDAFA1A39552D6(), 0))
		{
			if (!func_71(unk_0xE0BDAFA1A39552D6(), iVar15, 1))
			{
				func_397(&iVar0, 1);
			}
		}
	}
	func_394(iParam0, &iVar16, &iVar17);
	iVar1 = (iVar1 + iVar16);
	iVar0 = (iVar0 + iVar17);
	if (iVar1 > 0)
	{
		Global_1734817.f_10 = iVar1;
		func_393();
		func_347(0, unk_0x06736567F820A39E(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1734817.f_9 = iVar0;
		iVar20 = func_346();
		if (iVar20 != func_60())
		{
			func_345(iVar20, &uVar18, &uVar19);
		}
		bVar21 = !func_344(1);
		if (iParam0 == 168)
		{
			if (!func_343())
			{
				unk_0x3C4FC10A27FC59C0(iVar0, iVar4);
			}
		}
		else if (func_343())
		{
			func_334(-856006867, iVar0, &iVar22, 0, 1, 0);
			Global_2562803[iVar22 /*73*/].f_8.f_54 = uVar18;
			Global_2562803[iVar22 /*73*/].f_8.f_55 = uVar19;
			Global_2562803[iVar22 /*73*/].f_8.f_56 = bVar21;
		}
		else
		{
			unk_0x2622A5EF3329E2D6(uVar18, uVar19, iVar0, bVar21);
		}
		if (func_333(iParam0))
		{
			if (func_332(iParam0) > -1)
			{
				func_331(func_332(iParam0), iVar0);
			}
		}
		Global_2446413 = iVar0;
		func_330(&Global_2444522, 0, 0);
	}
}

void func_330(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x17CC0D5008835470() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x201D90648B2AE3CE();
		}
		else
		{
			*uParam0 = unk_0xED6DF4F701311AF8();
		}
	}
	else
	{
		*uParam0 = unk_0x1ADBAAC322D61F73();
	}
	uParam0->f_1 = 1;
}

void func_331(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2464975.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5198)
		{
			iParam1 = Global_262145.f_5198;
		}
		Global_2464975.f_270 = iParam1;
		Global_2464975.f_271 = 0;
	}
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		default:
	}
	return 0;
}

int func_333(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_334(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_343())
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
			if (iParam1 > 0)
			{
				func_335(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_335(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_335(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_343())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5A041CC4F10FF856(func_19()) || unk_0x8E2645554EC732F0())
		{
			Global_2563294 = 1;
			return 0;
		}
		if (Global_2445217)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2563295 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2562803[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x1CFE5997DD1709D1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x535D3302CA34FAFF(iVar3))
		{
			*uParam0 = func_342(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2562803[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2563285 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2563293 = 1;
			Global_2563296 = iParam4;
			Global_2563298 = iParam3;
			Global_2563299 = 1;
			Global_2563297 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2563296 = iParam4;
			Global_2563298 = iParam3;
			Global_2563299 = 1;
			Global_2563297 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_341(1, iParam4);
			Global_2563293 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_336(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_336(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xE27C8E42A97895CF(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_337(iParam0);
	}
}

void func_337(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_343())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_340(iParam0))
		{
			if (!bVar0)
			{
				unk_0x8FFE442E1A39D51A();
			}
		}
		else if (!bVar0)
		{
			unk_0x00C69F802173480C(Global_2562803[iParam0 /*73*/]);
		}
		func_338(&(Global_2562803[iParam0 /*73*/]));
	}
}

void func_338(var uParam0)
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
	func_339(&(uParam0->f_8.f_3));
	func_339(&(uParam0->f_8.f_16));
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

void func_339(var uParam0)
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

int func_340(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_341(int iParam0, var uParam1)
{
	Global_2446544 = uParam1;
	Global_2446543 = iParam0;
}

int func_342(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2562803[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_343())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2562803[iVar0 /*73*/].f_2 = 1;
			Global_2562803[iVar0 /*73*/].f_1 = uParam5;
			Global_2562803[iVar0 /*73*/].f_3 = uParam1;
			Global_2562803[iVar0 /*73*/].f_4 = uParam2;
			Global_2562803[iVar0 /*73*/].f_7 = uParam3;
			Global_2562803[iVar0 /*73*/].f_5 = 0;
			Global_2562803[iVar0 /*73*/] = iParam0;
			Global_2562803[iVar0 /*73*/].f_6 = iParam4;
			Global_2562803[iVar0 /*73*/].f_69 = uParam8;
			Global_2562803[iVar0 /*73*/].f_68 = uParam7;
			Global_2562803[iVar0 /*73*/].f_72 = 0;
			Global_2563285 = 0;
			if (bParam6)
			{
				Global_2562803[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_343()
{
	if (unk_0x55812CD5A331E1F8())
	{
		return 1;
	}
	return 0;
}

bool func_344(bool bParam0)
{
	return func_152(unk_0xE0BDAFA1A39552D6(), bParam0);
}

void func_345(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1610705[iParam0 /*178*/].f_10.f_7[0];
	*uParam2 = Global_1610705[iParam0 /*178*/].f_10.f_7[1];
}

int func_346()
{
	return Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10;
}

int func_347(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_348(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_348(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_358(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xC1EDB61CE0A4B94E(iParam1))
		{
			if (unk_0x77CB3F400804EDD1(iParam1))
			{
				uVar1 = unk_0x406B8F450D0105AB(iParam1);
				func_354(unk_0xB90C4C04BACF96A1(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_349(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_349(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_352(iParam0, 1) };
	if (iParam0 == func_351(unk_0x06736567F820A39E()))
	{
		func_350(1);
	}
	func_354(Var0, iParam1, 0, sParam2, iParam3);
}

void func_350(int iParam0)
{
	Global_2428549.f_1375 = iParam0;
}

int func_351(var uParam0)
{
	return uParam0;
}

Vector3 func_352(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x611B1E292F714CAD())
	{
		Var3 = { unk_0xE361DCEC3CCB65F0(2) };
	}
	if (iParam0 == func_353(unk_0x06736567F820A39E()) && unk_0x20EC647BB13B981D(unk_0x132F78245A5DBB0A()) == 4)
	{
		Var0 = { unk_0xF42E2289B33D5C38(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		fVar6 = unk_0x3CAD22C2D36A7F14(iParam0);
		if (unk_0x20EC647BB13B981D(unk_0x132F78245A5DBB0A()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x9CFA23DC65790425(unk_0x79469DA5833EACA8(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x90B89006901451E8(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_353(var uParam0)
{
	return uParam0;
}

void func_354(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2428549.f_774[iVar0 /*30*/].f_6 == 0 || Global_2428549.f_774[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2428549.f_774[iVar1 /*30*/] = { Param0 };
			Global_2428549.f_774[iVar1 /*30*/].f_6 = 1;
			Global_2428549.f_774[iVar1 /*30*/].f_4 = func_357(Global_2428549.f_774[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2428549.f_774[iVar1 /*30*/].f_7 = unk_0x201D90648B2AE3CE();
			Global_2428549.f_774[iVar1 /*30*/].f_3 = iParam3;
			Global_2428549.f_774[iVar1 /*30*/].f_8 = iParam4;
			Global_2428549.f_774[iVar1 /*30*/].f_9 = func_356();
			Global_2428549.f_774[iVar1 /*30*/].f_10 = func_355();
			StringCopy(&(Global_2428549.f_774[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2428549.f_774[iVar1 /*30*/].f_26 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), iParam6);
		}
	}
}

int func_355()
{
	if (Global_2428549.f_1375)
	{
		Global_2428549.f_1375 = 0;
		return 1;
	}
	Global_2428549.f_1375 = 0;
	return 0;
}

var func_356()
{
	var uVar0;
	
	uVar0 = Global_2428549.f_1377;
	Global_2428549.f_1377 = 1;
	return uVar0;
}

float func_357(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xA1F52EC3ECE1D42E(unk_0x1ADD718B7E9360A5(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_358(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_359(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_359(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_392(unk_0xE0BDAFA1A39552D6()) || func_391(unk_0xE0BDAFA1A39552D6()))
	{
		if (Global_262145.f_7844 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7844;
		}
	}
	else if (Global_262145.f_5249 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5249;
	}
	if (func_390(uParam2))
	{
	}
	if (func_389())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_387(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_386(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_384(0, &iVar1);
					break;
				
				case 3:
					func_384(1, &iVar1);
					break;
				
				case 1:
					func_382(&iVar1);
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
			func_379(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_369((func_378(unk_0xE0BDAFA1A39552D6()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xADECF862874B38F9(iVar1, iParam8, iParam9);
				if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_2 != -1)
				{
					func_379(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_364(iVar1);
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
				func_360((func_362(unk_0xE0BDAFA1A39552D6()) + iVar1));
			}
			else
			{
				func_360((func_362(unk_0xE0BDAFA1A39552D6()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_360(int iParam0)
{
	if (func_389())
	{
		Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_5 = iParam0;
		func_361(joaat("mpply_globalxp"), iParam0);
	}
}

void func_361(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, uParam1, 1);
	}
}

int func_362(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_619(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xE0BDAFA1A39552D6())
			{
				return func_363(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587816[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_363(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_363(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_364(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_62(unk_0xE0BDAFA1A39552D6()) };
	if (unk_0x3D340893CA28EFFC())
	{
		if (unk_0x781D726C27D122E2(&Var0))
		{
			iVar13 = func_367(func_368(&Var0));
			if (iVar13 == 0)
			{
				func_366(&Global_1347700, iParam0);
				func_365(joaat("mpply_crew_local_xp_0"), Global_1347700);
			}
			else if (iVar13 == 1)
			{
				func_366(&Global_1347701, iParam0);
				func_365(joaat("mpply_crew_local_xp_1"), Global_1347701);
			}
			else if (iVar13 == 2)
			{
				func_366(&Global_1347702, iParam0);
				func_365(joaat("mpply_crew_local_xp_2"), Global_1347702);
			}
			else if (iVar13 == 3)
			{
				func_366(&Global_1347703, iParam0);
				func_365(joaat("mpply_crew_local_xp_3"), Global_1347703);
			}
			else if (iVar13 == 4)
			{
				func_366(&Global_1347704, iParam0);
				func_365(joaat("mpply_crew_local_xp_4"), Global_1347704);
			}
		}
	}
}

void func_365(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347695 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347697 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347697 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347698 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347699 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347700 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347701 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347702 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347703 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347704 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347705 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347706 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347707 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347708 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347709 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347710 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347711 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_366(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_367(int iParam0)
{
	if (iParam0 == Global_1347695)
	{
		return 0;
	}
	else if (iParam0 == Global_1347696)
	{
		return 1;
	}
	else if (iParam0 == Global_1347697)
	{
		return 2;
	}
	else if (iParam0 == Global_1347698)
	{
		return 3;
	}
	else if (iParam0 == Global_1347699)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_368(var uParam0)
{
	if (unk_0x3D340893CA28EFFC())
	{
		if (unk_0x781D726C27D122E2(uParam0))
		{
			return Global_2444023;
		}
	}
	return Global_2444023;
}

void func_369(int iParam0, int iParam1, int iParam2)
{
	if (func_389())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7814 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347815[func_124(-1)])
				{
					unk_0xADECF862874B38F9(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347815[func_124(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7813 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xADECF862874B38F9(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7813 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xADECF862874B38F9(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_377(unk_0xE0BDAFA1A39552D6()))
		{
			Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_1 = iParam0;
			Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_6 = func_375(iParam0, 1);
		}
		func_374(632, iParam0, -1, 1);
		func_373(633, func_375(iParam0, 1), -1, 1);
		Global_1347815[func_124(-1)] = iParam0;
		func_370(7, 0);
	}
}

void func_370(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_372(iParam0, iParam1))
	{
		iVar0 = func_371();
		Global_2444000[iVar0] = iParam0;
	}
}

int func_371()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2444000[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_372(int iParam0, var uParam1)
{
	if (Global_1315901)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_373(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_124(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
}

void func_374(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_124(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347761[func_124(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347767[func_124(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347773[func_124(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347779[func_124(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347737[func_124(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347743[func_124(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347749[func_124(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347755[func_124(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347713[func_124(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347719[func_124(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347725[func_124(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347731[func_124(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347785[func_124(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347791[func_124(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347797[func_124(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347803[func_124(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347809[func_124(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347815[func_124(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347821[func_124(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2497579[0 /*6*/][func_124(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2497579[1 /*6*/][func_124(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2497579[2 /*6*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2497579[3 /*6*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3918:
			Global_2497641[func_124(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347827[func_124(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347833[func_124(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347839[func_124(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347845[func_124(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2497610[0 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2497610[1 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2497610[2 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2497610[3 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2497610[4 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2497646[0 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2497646[1 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2497646[2 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2497646[3 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2497646[4 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2497672[0 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2497672[1 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2497672[2 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2497672[3 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2497672[4 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2497610[5 /*5*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2497579[4 /*6*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2497698[func_124(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2497713[func_124(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2497703[func_124(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2497718[func_124(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2497708[func_124(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2497723[func_124(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2497728[func_124(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_375(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_376(iParam0, 0);
}

int func_376(int iParam0, int iParam1)
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
		if (Global_276766[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_276766[iVar3] < iParam0)
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

int func_377(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x7DA173D4FD42F36B(Global_2428549.f_1, iParam0);
	}
	return 1;
}

int func_378(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xE0BDAFA1A39552D6())
			{
				return Global_1347815[func_124(-1)];
			}
			else if (func_377(iParam0))
			{
				return Global_1587816[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347815[func_124(-1)];
	}
	return 0;
}

void func_379(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_381(iParam0, func_124(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_380(iParam0))
	{
		func_373(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_374(iParam0, iVar0, iParam2, 1);
	}
}

int func_380(int iParam0)
{
	if (Global_1347694)
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
			case 2907:
			case 3036:
			case 3918:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return 1;
				break;
			}
	}
	return 0;
}

int func_381(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2473854[iParam0 /*5*/][func_124(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_382(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6());
	iVar0 = 0;
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		iVar4 = unk_0x3FA2D2B4F501B725(iVar0);
		if (unk_0x6B90EB073E0E641F(iVar4))
		{
			iVar5 = unk_0x1886D89D5D557CB4(iVar4);
			if (unk_0xF749B19A9F9B3DBF(iVar5) != -1)
			{
				if (unk_0xF749B19A9F9B3DBF(iVar5) == iVar1 || func_300(unk_0xF749B19A9F9B3DBF(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xE0BDAFA1A39552D6())
					{
						if (func_63(unk_0xE0BDAFA1A39552D6(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_383(*iParam0, 100) * (10f * Global_262145.f_4213)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_383(*iParam0, 100) * (20f * Global_262145.f_4206)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_383(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_384(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
		{
			iVar3 = iVar0;
			if (unk_0x6B90EB073E0E641F(iVar3))
			{
				iVar4 = unk_0x1886D89D5D557CB4(iVar3);
				if (func_619(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xE0BDAFA1A39552D6())
					{
						iVar1++;
						if (func_63(unk_0xE0BDAFA1A39552D6(), iVar4))
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
			if (func_619(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xE0BDAFA1A39552D6())
				{
					if (func_385(unk_0xE0BDAFA1A39552D6(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_63(unk_0xE0BDAFA1A39552D6(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_383(*iParam1, 100) * (10f * Global_262145.f_4213)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_383(*iParam1, 100) * (20f * Global_262145.f_4206)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_385(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_56(iParam0), func_56(iParam1));
	return 0f;
}

int func_386(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC66ACBB5C8ECB07() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_383(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_387(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xED165ADF51B05913(iParam0) > func_378(unk_0xE0BDAFA1A39552D6()))
		{
			iParam0 = -func_378(unk_0xE0BDAFA1A39552D6());
		}
	}
	if (func_388(8000, 0, 0) > 0)
	{
		if (func_388(8000, 0, 0) < (iParam0 + func_378(unk_0xE0BDAFA1A39552D6())))
		{
			iParam0 = (func_388(8000, 0, 0) - func_378(unk_0xE0BDAFA1A39552D6()));
		}
	}
	return iParam0;
}

int func_388(int iParam0, bool bParam1, int iParam2)
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
	return Global_276766[iParam0];
}

int func_389()
{
	return 1;
}

int func_390(var uParam0)
{
	if (unk_0x60D87DA27F70EBBC(uParam0))
	{
		return 1;
	}
	else if (unk_0x2F6869889D97DFED(uParam0, "") || unk_0x2F6869889D97DFED(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_391(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 2;
}

bool func_392(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 7;
}

void func_393()
{
	Global_2445583 = 1;
}

void func_394(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_76(7))
	{
		return;
	}
	iVar0 = func_396(iParam0);
	iVar1 = func_395(iParam0);
	iVar2 = unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(Global_2464975.f_4685.f_67, unk_0x201D90648B2AE3CE()));
	if (iVar2 > Global_262145.f_10582)
	{
		iVar2 = Global_262145.f_10582;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10673;
		
		case 152:
			return Global_262145.f_10708;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10696;
		
		case 157:
			return Global_262145.f_10663;
		
		case 159:
			return Global_262145.f_10646;
		
		case 164:
			return Global_262145.f_10686;
		
		case 160:
			return Global_262145.f_10736;
		
		case 162:
			return Global_262145.f_10756;
		
		case 163:
			return Global_262145.f_10721;
		
		case 154:
			return Global_262145.f_10791;
		
		case 155:
			return Global_262145.f_10781;
		
		case 153:
			return Global_262145.f_10745;
		
		case 170:
			return Global_262145.f_12625;
		
		case 171:
			return Global_262145.f_12684;
		
		case 172:
			return Global_262145.f_12702;
		
		case 173:
			return Global_262145.f_12643;
		
		case 166:
			return Global_262145.f_12658;
		
		case 167:
			return Global_262145.f_12749;
		
		case 169:
			return Global_262145.f_12721;
		
		case 168:
			return Global_262145.f_12714;
		
		default:
	}
	return 0;
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10672;
		
		case 152:
			return Global_262145.f_10707;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10695;
		
		case 157:
			return Global_262145.f_10662;
		
		case 159:
			return Global_262145.f_10645;
		
		case 164:
			return Global_262145.f_10685;
		
		case 160:
			return Global_262145.f_10735;
		
		case 162:
			return Global_262145.f_10755;
		
		case 163:
			return Global_262145.f_10720;
		
		case 154:
			return Global_262145.f_10790;
		
		case 155:
			return Global_262145.f_10780;
		
		case 153:
			return Global_262145.f_10744;
		
		case 170:
			return Global_262145.f_12624;
		
		case 171:
			return Global_262145.f_12683;
		
		case 172:
			return Global_262145.f_12701;
		
		case 173:
			return Global_262145.f_12642;
		
		case 166:
			return Global_262145.f_12657;
		
		default:
	}
	return 0;
}

void func_397(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_406())
		{
			if (func_344(0))
			{
				if (unk_0xA27C9E8196C79D22(func_346()))
				{
					if (func_405() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_405());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_403(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_400("GB_BCUT_TICK1", func_346(), iVar0, 0, 0, 1, 1);
					}
					func_427(20);
					func_398(func_346(), iVar0, 1);
				}
			}
		}
	}
}

void func_398(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_619(iParam0, 0, 1))
	{
		Var0.f_0 = 456;
		Var0.f_1 = unk_0xE0BDAFA1A39552D6();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xCCAB9843EFA5C08A(1, &Var0, 5, func_399(iParam0));
	}
}

var func_399(int iParam0)
{
	var uVar0;
	
	unk_0xE27C8E42A97895CF(&uVar0, iParam0);
	return uVar0;
}

int func_400(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		unk_0x999E5F6D1B49D87B(sParam0);
		unk_0xD5EA844E0F1947AF(func_293(iParam1, -2, 1, 0));
		unk_0x9C174A0D56FFB64A(func_401(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xD5EA844E0F1947AF(iParam3);
		}
		unk_0xD92C45283BCDA624(iParam2);
		iVar0 = unk_0xB452F88B6A7B058D(0, 1);
		func_255(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_401(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_402(&cVar0);
}

var func_402(char[4] cParam0)
{
	return cParam0;
}

void func_403(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_404(1);
	}
	else
	{
		iVar1 = func_404(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_404(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10577;
}

int func_405()
{
	return Global_262145.f_10576;
}

bool func_406()
{
	return func_106(unk_0xE0BDAFA1A39552D6());
}

int func_407()
{
	return Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_30;
}

void func_408()
{
	int iVar0;
	
	iVar0 = Global_2497703[func_19()];
	iVar0++;
	Global_2497703[func_19()] = iVar0;
	func_374(3245, iVar0, -1, 1);
}

void func_409()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2497698[func_19()];
	iVar1 = Global_2497713[func_19()];
	iVar0++;
	iVar1++;
	Global_2497698[func_19()] = iVar0;
	Global_2497713[func_19()] = iVar1;
	Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_85 = iVar1;
	func_374(3243, iVar0, -1, 1);
	func_374(3244, iVar1, -1, 1);
}

void func_410()
{
	int iVar0;
	
	iVar0 = Global_2497708[func_19()];
	iVar0++;
	func_374(3247, iVar0, -1, 1);
}

void func_411(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_413(iParam0);
	func_412(iParam0, uVar0, iParam1);
}

void func_412(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 453;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_60())
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			unk_0xCCAB9843EFA5C08A(1, &Var0, 4, func_399(iParam0));
		}
	}
}

int func_413(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_418();
	iVar0 = func_416(iParam0, iVar0);
	iVar1 = Global_1610705[func_346() /*178*/].f_10.f_155;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12585));
	if (iVar0 < func_415())
	{
		iVar0 = func_415();
	}
	if (iVar0 > func_414())
	{
		iVar0 = func_414();
	}
	return iVar0;
}

int func_414()
{
	return Global_262145.f_12586;
}

int func_415()
{
	return Global_262145.f_13760;
}

int func_416(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_441(iParam0) * func_417());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_417()
{
	return Global_262145.f_13759;
}

var func_418()
{
	return Global_262145.f_10568;
}

int func_419(int iParam0)
{
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (iParam0 != unk_0xE0BDAFA1A39552D6())
		{
			if (func_71(iParam0, unk_0xE0BDAFA1A39552D6(), 0))
			{
				if (!func_92(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_420()
{
	int iVar0;
	
	iVar0 = Global_2497718[func_19()];
	iVar0++;
	func_374(3246, iVar0, -1, 1);
}

void func_421(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2497723[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_374(3248, iVar0, -1, 1);
	if (func_424(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_423(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_422(7666, iVar2, -1, 1);
	}
}

var func_422(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xF1BE098FFCB3A8F1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xF1BE098FFCB3A8F1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x78343BC601F0B283((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x78343BC601F0B283((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xF1BE098FFCB3A8F1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xF1BE098FFCB3A8F1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xF1BE098FFCB3A8F1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xF1BE098FFCB3A8F1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xC60DF3F40775C421(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_13903;
			break;
		
		case 2:
			return Global_262145.f_13904;
			break;
		
		case 3:
			return Global_262145.f_13905;
			break;
		
		case 4:
			return Global_262145.f_13906;
			break;
		
		case 5:
			return Global_262145.f_13907;
			break;
		
		case 6:
			return Global_262145.f_13908;
			break;
		
		case 7:
			return Global_262145.f_13909;
			break;
		
		case 8:
			return Global_262145.f_13910;
			break;
		
		case 9:
			return Global_262145.f_13911;
			break;
		
		case 10:
			return Global_262145.f_13912;
			break;
		
		case 11:
			return Global_262145.f_13913;
			break;
		
		case 12:
			return Global_262145.f_13914;
			break;
		
		case 13:
			return Global_262145.f_13915;
			break;
		
		case 14:
			return Global_262145.f_13916;
			break;
		
		case 15:
			return Global_262145.f_13917;
			break;
		
		case 16:
			return Global_262145.f_13918;
			break;
		
		case 17:
			return Global_262145.f_13919;
			break;
		
		case 18:
			return Global_262145.f_13920;
			break;
		
		case 19:
			return Global_262145.f_13921;
			break;
		
		case 20:
			return Global_262145.f_13922;
			break;
		
		case 21:
			return Global_262145.f_13923;
			break;
		
		case 22:
			return Global_262145.f_13924;
			break;
		
		case 23:
			return Global_262145.f_13925;
			break;
		
		case 24:
			return Global_262145.f_13926;
			break;
	}
	return 0;
}

int func_424(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_426(iParam0, iParam1);
	uVar2 = func_425(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xC4D41F5AA8205814(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_425(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xF1BE098FFCB3A8F1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xF1BE098FFCB3A8F1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xF1BE098FFCB3A8F1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xF1BE098FFCB3A8F1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xF1BE098FFCB3A8F1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xF1BE098FFCB3A8F1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_426(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x78343BC601F0B283((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x78343BC601F0B283((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

void func_427(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xE27C8E42A97895CF(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
}

int func_428(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(iVar0)))
		{
			iVar2 = unk_0x801C03D92F1C6755(iVar0);
			if (!func_17(iVar2, 0) && !func_71(iVar2, unk_0xE0BDAFA1A39552D6(), 1))
			{
				iVar1++;
			}
			else if (func_17(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

var func_429(int iParam0)
{
	if (iParam0 >= Global_262145.f_12958)
	{
		return Global_262145.f_12979;
	}
	else if (iParam0 >= Global_262145.f_12957)
	{
		return Global_262145.f_12978;
	}
	else if (iParam0 >= Global_262145.f_12956)
	{
		return Global_262145.f_12977;
	}
	else if (iParam0 >= Global_262145.f_12955)
	{
		return Global_262145.f_12976;
	}
	else if (iParam0 >= Global_262145.f_12954)
	{
		return Global_262145.f_12975;
	}
	else if (iParam0 >= Global_262145.f_12953)
	{
		return Global_262145.f_12974;
	}
	else if (iParam0 >= Global_262145.f_12952)
	{
		return Global_262145.f_12973;
	}
	else if (iParam0 >= Global_262145.f_12951)
	{
		return Global_262145.f_12972;
	}
	else if (iParam0 >= Global_262145.f_12950)
	{
		return Global_262145.f_12971;
	}
	else if (iParam0 >= Global_262145.f_12949)
	{
		return Global_262145.f_12970;
	}
	else if (iParam0 >= Global_262145.f_12948)
	{
		return Global_262145.f_12969;
	}
	else if (iParam0 >= Global_262145.f_12947)
	{
		return Global_262145.f_12968;
	}
	else if (iParam0 >= Global_262145.f_12946)
	{
		return Global_262145.f_12967;
	}
	else if (iParam0 >= Global_262145.f_12945)
	{
		return Global_262145.f_12966;
	}
	else if (iParam0 >= Global_262145.f_12944)
	{
		return Global_262145.f_12965;
	}
	else if (iParam0 >= Global_262145.f_12943)
	{
		return Global_262145.f_12964;
	}
	else if (iParam0 >= Global_262145.f_12942)
	{
		return Global_262145.f_12963;
	}
	else if (iParam0 >= Global_262145.f_12941)
	{
		return Global_262145.f_12962;
	}
	else if (iParam0 >= Global_262145.f_12940)
	{
		return Global_262145.f_12961;
	}
	else if (iParam0 >= Global_262145.f_12939)
	{
		return Global_262145.f_12960;
	}
	return Global_262145.f_12959;
}

int func_430(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_437(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_436(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_435(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_431(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_431(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_435(unk_0xA6055C735E3DD877(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_431(int iParam0)
{
	int iVar0;
	
	if (func_434(iParam0))
	{
		iVar0 = func_432(func_433(iParam0));
		return func_381(iVar0, -1, 0);
	}
	return 0;
}

int func_432(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3226;
	}
	else if (iParam0 == 1)
	{
		return 3227;
	}
	else if (iParam0 == 2)
	{
		return 3228;
	}
	else if (iParam0 == 3)
	{
		return 3229;
	}
	else if (iParam0 == 4)
	{
		return 3230;
	}
	return 3226;
}

int func_433(int iParam0)
{
	int iVar0;
	
	if (func_434(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_434(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_435(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_13158;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_13156;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_13160;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_13154;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_13152;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_13162;
	}
	return 0;
}

int func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_434(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1736106[iVar0] == iParam1 && Global_1736113[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_437(int iParam0)
{
	int iVar0;
	
	if (func_434(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_438()
{
	if (func_406())
	{
		Global_2435608.f_3065.f_70 = 0;
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_155 = Global_2435608.f_3065.f_70;
	}
}

void func_439()
{
	if (func_406())
	{
		if (Global_2435608.f_3065.f_70 < 10)
		{
			Global_2435608.f_3065.f_70++;
			Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_155 = Global_2435608.f_3065.f_70;
		}
	}
}

void func_440()
{
	if (func_406())
	{
		if (Global_2435608.f_3065.f_70 > 0)
		{
			Global_2435608.f_3065.f_70 = (Global_2435608.f_3065.f_70 - 1);
			Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_155 = Global_2435608.f_3065.f_70;
		}
	}
}

int func_441(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_23;
}

int func_442(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10693) * Global_262145.f_10698));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10643) * Global_262145.f_10648));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10670) * Global_262145.f_10674));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10683) * Global_262145.f_10687));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10705) * Global_262145.f_10710));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10867) * Global_262145.f_10868));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10873) * Global_262145.f_10874));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10871) * Global_262145.f_10872));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10865) * Global_262145.f_10866));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10869) * Global_262145.f_10870));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10863) * Global_262145.f_10864));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_12681;
		
		case 172:
			return Global_262145.f_12697;
		
		case 173:
			return Global_262145.f_12640;
		
		case 166:
			return 0;
		
		default:
	}
	return 0;
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10694) * Global_262145.f_10699));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10644) * Global_262145.f_10649));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10671) * Global_262145.f_10675));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10684) * Global_262145.f_10688));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10706) * Global_262145.f_10711));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10743) * Global_262145.f_10746));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10789) * Global_262145.f_10792));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10779) * Global_262145.f_10782));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10734) * Global_262145.f_10737));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10754) * Global_262145.f_10759));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10719) * Global_262145.f_10722));
		
		case 170:
			return Global_262145.f_12623;
		
		case 171:
			return Global_262145.f_12682;
		
		case 172:
			return Global_262145.f_12698;
		
		case 173:
			return Global_262145.f_12641;
		
		case 166:
			return 0;
		
		case 167:
			return 2000;
		
		case 168:
			return 5000;
		
		default:
	}
	return 0;
}

void func_444(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_445(iParam0))
	{
		if (!func_406())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10587;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	*uParam1 = Global_262145.f_10586;
	*uParam2 = Global_262145.f_10585;
	if (func_152(unk_0xE0BDAFA1A39552D6(), 1))
	{
		*uParam1 = Global_262145.f_10584;
		*uParam2 = Global_262145.f_10583;
	}
	iVar0 = func_407();
	if (iVar0 != func_60())
	{
		if (func_71(unk_0xE0BDAFA1A39552D6(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

int func_446()
{
	return (Local_96.f_115 * Global_262145.f_12656);
}

int func_447()
{
	return (Local_96.f_115 * Global_262145.f_12655);
}

void func_448(bool bParam0, int iParam1)
{
	Global_1734817.f_6 = unk_0x40077EDF3FF70C39();
	if (bParam0)
	{
		Global_1734817.f_7 = 1;
	}
	else
	{
		Global_1734817.f_7 = 0;
	}
	Global_1734817.f_8 = iParam1;
	if (Global_1734817.f_4 == 0)
	{
		if ((func_107(unk_0xE0BDAFA1A39552D6()) || func_118(unk_0xE0BDAFA1A39552D6())) || func_126(unk_0xE0BDAFA1A39552D6()))
		{
			Global_1734817.f_4 = 1;
		}
	}
}

int func_449(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_60();
	iVar1 = func_60();
	iVar2 = func_60();
	return func_450(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_450(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_308(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_65 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_66 = uParam12;
	unk_0xE27C8E42A97895CF(&(Var0.f_63), 2);
	return func_289(&Var0);
}

int func_451(int iParam0)
{
	int iVar0;
	
	iVar0 = func_156(iParam0);
	if (iVar0 != -1)
	{
		return func_154(iVar0);
	}
	return 1;
}

char* func_452(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		uVar0 = func_324(&(Global_1610705[iParam0 /*178*/].f_10.f_77));
		return uVar0;
	}
	if (((func_92(iParam0, 28) || func_92(unk_0xE0BDAFA1A39552D6(), 28)) || func_326(iParam0)) && !func_325(iParam0))
	{
		return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
	}
	iVar1 = func_61(iParam0);
	if (iVar1 != func_60())
	{
		if (iVar1 != unk_0xE0BDAFA1A39552D6())
		{
			if (!unk_0xC9B6CD4E82C594D0(0, -1, 1))
			{
				return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
			}
		}
	}
	if (iVar1 != func_60())
	{
		uVar0 = func_324(&(Global_1610705[iVar1 /*178*/].f_10.f_77));
		if (unk_0x226FA58470A21AEF(uVar0))
		{
			return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_453()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_574() && !func_250())
	{
		return;
	}
	if (!func_309())
	{
		return;
	}
	iVar0 = unk_0xE0BDAFA1A39552D6();
	if (func_17(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar0 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	}
	iVar1 = func_117(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_96.f_847)))
	{
		iVar2 = (func_10() - func_467(&(Local_96.f_847), 0, 0));
		iVar3 = (func_466() - Local_96.f_115);
		func_464(iVar2);
		if (iVar2 > 30000)
		{
			func_454(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_454(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_454(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_454(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_462(0) == 0)
	{
		return;
	}
	func_461();
	func_458(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_390(sParam4))
	{
		sVar0 = sParam4;
	}
	func_455(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0);
}

void func_455(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_457(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339962.f_1 = 1;
		func_456(7, iVar0);
		Global_1339962.f_4109[iVar0] = uParam0;
		StringCopy(&(Global_1339962.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339962.f_4109.f_172[iVar0] = iParam2;
		Global_1339962.f_4109.f_216[iVar0] = iParam3;
		Global_1339962.f_4109.f_183[iVar0] = iParam4;
		Global_1339962.f_4109.f_194[iVar0] = iParam5;
		Global_1339962.f_4109.f_249[iVar0] = iParam6;
		Global_1339962.f_4109.f_260[iVar0] = iParam7;
		Global_1339962.f_4109.f_205[iVar0] = uParam8;
		Global_1339962.f_4109.f_314[iVar0] = iParam9;
		Global_1339962.f_4109.f_325[iVar0] = iParam10;
		Global_1339962.f_4109.f_357[iVar0] = iParam11;
		Global_1339962.f_4109.f_238[iVar0] = uParam12;
		Global_1339962.f_4109.f_271[iVar0] = iParam13;
		Global_1339962.f_4109.f_368[iVar0] = iParam14;
		Global_1339962.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_456(int iParam0, int iParam1)
{
	unk_0xE27C8E42A97895CF(&(Global_1339962.f_4759[iParam0]), iParam1);
}

bool func_457(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1339962.f_4759[iParam0], iParam1);
}

void func_458(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_457(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339962.f_1 = 1;
		func_456(6, iVar0);
		Global_1339962.f_3557[iVar0] = iParam0;
		StringCopy(&(Global_1339962.f_3557.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339962.f_3557.f_183[iVar0] = iParam3;
		Global_1339962.f_3557.f_172[iVar0] = iParam2;
		Global_1339962.f_3557.f_260[iVar0] = iParam4;
		Global_1339962.f_3557.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339962.f_3557.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339962.f_3557.f_443[iVar0] = iParam7;
		Global_1339962.f_3557.f_454[iVar0] = iParam8;
		Global_1339962.f_3557.f_497[iVar0] = iParam9;
		Global_1339962.f_3557.f_508[iVar0] = iParam10;
		Global_1339962.f_3557.f_205[iVar0] = iParam11;
		Global_1339962.f_3557.f_216[iVar0] = iParam12;
		Global_1339962.f_3557.f_227[iVar0] = iParam13;
		Global_1339962.f_3557.f_238[iVar0] = iParam14;
		Global_1339962.f_3557.f_249[iVar0] = iParam15;
		Global_1339962.f_3557.f_519[iVar0] = iParam16;
		Global_1339962.f_3557.f_530[iVar0] = iParam17;
		Global_1339962.f_3557.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_460())
		{
			Global_1339962.f_941 = 1;
		}
		if (unk_0x55812CD5A331E1F8())
		{
			iVar2 = 0;
			unk_0x4C6D647F0AAA9B5B(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339962.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339962.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339962.f_941 = 1;
			}
			if (func_459())
			{
				Global_1339962.f_945 = 1;
			}
		}
	}
}

int func_459()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x55812CD5A331E1F8())
	{
		unk_0x4C6D647F0AAA9B5B(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_460()
{
	if ((unk_0x852598C027636D43() == 8 || unk_0x852598C027636D43() == 9) || unk_0x852598C027636D43() == 10)
	{
		return 1;
	}
	return 0;
}

void func_461()
{
	unk_0x9AD5FF38501E64A6(8);
	unk_0x9AD5FF38501E64A6(9);
	unk_0x9AD5FF38501E64A6(6);
	unk_0x9AD5FF38501E64A6(7);
	Global_2445587 = 1;
}

int func_462(bool bParam0)
{
	if (func_463())
	{
		return 0;
	}
	if (func_233())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_619(unk_0xE0BDAFA1A39552D6(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_463()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 12);
}

void func_464(int iParam0)
{
	if (unk_0x7DA173D4FD42F36B(iLocal_1418, 8))
	{
		func_465();
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_1418, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x25B97FB8615971D6("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xE27C8E42A97895CF(&iLocal_1418, 15);
				unk_0xE27C8E42A97895CF(&iLocal_1418, 9);
				unk_0xC8601D5221312A4A("AllowScoreAndRadio", 1);
				unk_0x5BC661D1FF0D731E(0);
				unk_0xC8601D5221312A4A("WantedMusicDisabled", 1);
			}
		}
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_1418, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_1418, 11))
			{
				if (unk_0xAA821ECDF67A2A25("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xE27C8E42A97895CF(&iLocal_1418, 11);
				}
			}
			else
			{
				unk_0x7DA173D4FD42F36B(iLocal_1418, 11);
				if (!unk_0x7DA173D4FD42F36B(iLocal_1418, 14))
				{
					if (unk_0x25B97FB8615971D6("APT_COUNTDOWN_30S"))
					{
						unk_0xE27C8E42A97895CF(&iLocal_1418, 14);
					}
				}
			}
			if (unk_0x7DA173D4FD42F36B(iLocal_1418, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_1418, 12))
					{
						unk_0x5BC661D1FF0D731E(1);
						unk_0xC8601D5221312A4A("AllowScoreAndRadio", 0);
						unk_0xE27C8E42A97895CF(&iLocal_1418, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x25B97FB8615971D6("APT_FADE_IN_RADIO"))
						{
							unk_0x6555D0270D9BE11C("APT_COUNTDOWN_30S_KILL");
							unk_0x99BCB15F954AF579(&iLocal_1418, 9);
						}
					}
				}
			}
		}
	}
}

void func_465()
{
	if (unk_0x7DA173D4FD42F36B(iLocal_1418, 8))
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_1418, 9))
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_1418, 10))
			{
				if (unk_0x7DA173D4FD42F36B(iLocal_1418, 11))
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_1418, 12))
					{
						unk_0x5BC661D1FF0D731E(1);
						unk_0xC8601D5221312A4A("AllowScoreAndRadio", 0);
						unk_0xC8601D5221312A4A("WantedMusicDisabled", 0);
					}
				}
				if (!unk_0x7DA173D4FD42F36B(iLocal_1418, 16))
				{
					if (unk_0x25B97FB8615971D6("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xE27C8E42A97895CF(&iLocal_1418, 16);
					}
				}
				if (unk_0x7DA173D4FD42F36B(iLocal_1418, 16))
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_1418, 13))
					{
						if (unk_0x25B97FB8615971D6("APT_FADE_IN_RADIO"))
						{
							unk_0xE27C8E42A97895CF(&iLocal_1418, 13);
						}
					}
					if (unk_0x7DA173D4FD42F36B(iLocal_1418, 13))
					{
						unk_0xE27C8E42A97895CF(&iLocal_1418, 10);
					}
				}
			}
		}
	}
}

int func_466()
{
	return 4;
}

int func_467(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x17CC0D5008835470() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0);
		}
		else
		{
			return unk_0x1F0E2DBE53276B95(unk_0xED6DF4F701311AF8(), *uParam0);
		}
	}
	return unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0);
}

void func_468()
{
	int iVar0;
	struct<8> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar17 = unk_0xE0BDAFA1A39552D6();
	iVar18 = unk_0x490BA5FDD7EE47A9();
	if (func_17(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar18 = func_251();
		iVar17 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	}
	iVar19 = func_117(iVar17);
	if (!func_17(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if (!func_309())
		{
			if (func_485("HUNT_OBJ"))
			{
				func_509();
			}
			if (func_485("HUNT_OBJ1L"))
			{
				func_509();
			}
			if (func_485("HUNT_TOBJ"))
			{
				func_509();
			}
			if (func_485("HUNT_DOBJ"))
			{
				func_509();
			}
			if (func_485("HUNT_DOBJ1L"))
			{
				func_509();
			}
			return;
		}
	}
	else if (!unk_0x7DA173D4FD42F36B(Local_968[iVar18 /*14*/].f_1, 6))
	{
		func_509();
		return;
	}
	if (iVar19 < 3)
	{
		if (func_485("HUNT_OBJ"))
		{
			func_509();
		}
		if (func_485("HUNT_OBJ1L"))
		{
			func_509();
		}
		if (func_485("HUNT_TOBJ"))
		{
			func_509();
		}
		if (func_485("HUNT_DOBJ"))
		{
			func_509();
		}
		if (func_485("HUNT_DOBJ1L"))
		{
			func_509();
		}
		return;
	}
	bVar20 = func_484() == true;
	if (iVar18 == Local_96.f_118)
	{
		if (!bVar20)
		{
			if (!func_485("HUNT_OBJ"))
			{
				func_481("HUNT_OBJ", 0);
			}
		}
		else if (!func_485("HUNT_OBJ1L"))
		{
			func_481("HUNT_OBJ1L", 0);
		}
	}
	else if (func_575() == Local_96.f_118)
	{
		if (!bVar20)
		{
			if (!func_485("HUNT_OBJ"))
			{
				func_481("HUNT_OBJ", 0);
			}
		}
		else if (!func_485("HUNT_OBJ1L"))
		{
			func_481("HUNT_OBJ1L", 0);
		}
	}
	else if (func_250())
	{
		if (Local_96.f_119 > -1)
		{
			if (!bVar20)
			{
				if (!func_485("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_452(unk_0x801C03D92F1C6755(Local_96.f_119)), 64);
					iVar0 = func_451(unk_0x801C03D92F1C6755(Local_96.f_119));
					func_469("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_485("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_452(unk_0x801C03D92F1C6755(Local_96.f_119)), 64);
				iVar0 = func_451(unk_0x801C03D92F1C6755(Local_96.f_119));
				func_469("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_469(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_470(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312577 = 15;
		Global_1312577.f_54 = iParam2;
	}
}

int func_470(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam1))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam1) > 23)
	{
		return 0;
	}
	if (func_480(sParam0, sParam1) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return 0;
	}
	func_474();
	Global_1312577 = 3;
	StringCopy(&(Global_1312577.f_1), unk_0x47B34031F915C179(), 24);
	Global_1312577.f_7 = unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	Global_1312577.f_56 = uParam3;
	func_473();
	func_472(bParam2);
	func_471();
	return 1;
}

void func_471()
{
	unk_0xE27C8E42A97895CF(&(Global_1312577.f_57), 1);
}

void func_472(bool bParam0)
{
	if (bParam0)
	{
		unk_0xE27C8E42A97895CF(&(Global_1312577.f_57), 0);
		return;
	}
	unk_0x99BCB15F954AF579(&(Global_1312577.f_57), 0);
}

void func_473()
{
	Global_1312577.f_8 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), 86400000);
	Global_1312577.f_9 = unk_0x201D90648B2AE3CE();
}

void func_474()
{
	func_476();
	func_475(0);
}

void func_475(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x17CC0D5008835470();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x201D90648B2AE3CE();
		Global_1312577.f_9 = unk_0x201D90648B2AE3CE();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_57 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_476()
{
	if (!func_479())
	{
	}
	if (func_478())
	{
		unk_0xDC3C901EF33A999B(&(Global_1312577.f_10));
		func_477();
		unk_0x50E6AB5DBF4F6633();
	}
}

void func_477()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xD92C45283BCDA624(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0xD92C45283BCDA624(Global_1312577.f_50);
			unk_0xD92C45283BCDA624(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x31D14A3385CE358B(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x31D14A3385CE358B(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_55);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_46));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_478()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

int func_479()
{
	if (!func_478())
	{
		return 0;
	}
	unk_0xD6574ACDB39AA1DE(&(Global_1312577.f_10));
	func_477();
	return unk_0xAB0007E3E71F28E1();
}

bool func_480(char* sParam0, char* sParam1)
{
	if (!func_478())
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(uParam0))
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(uParam1))
	{
		return 0;
	}
	if (!unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam1) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_14));
}

void func_481(char* sParam0, bool bParam1)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return;
	}
	if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return;
	}
	if (func_482(sParam0))
	{
		return;
	}
	func_474();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x47B34031F915C179(), 24);
	Global_1312577.f_7 = unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_473();
	func_472(bParam1);
	func_471();
}

bool func_482(char* sParam0)
{
	if (!func_478())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_483(uParam0);
	}
	if (unk_0x226FA58470A21AEF(uParam0))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_10));
}

bool func_483(char* sParam0)
{
	if (!func_478())
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(uParam0))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_14));
}

int func_484()
{
	return (4 - Local_96.f_115);
}

int func_485(char* sParam0)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	if (!func_478())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0x2673375C0C31BF99(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return 0;
	}
	return func_482(sParam0);
}

void func_486()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_574() && !func_250())
	{
		return;
	}
	if (!func_309())
	{
		return;
	}
	iVar1 = func_60();
	iVar2 = -1;
	if (!func_17(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar1 = unk_0xE0BDAFA1A39552D6();
		iVar2 = unk_0x490BA5FDD7EE47A9();
	}
	else
	{
		iVar2 = func_251();
		iVar1 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 1))
	{
		iVar0 = func_117(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_96.f_118 || func_575() == Local_96.f_118)
			{
				if (func_492(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_288(85, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2);
					if (iVar2 == unk_0x490BA5FDD7EE47A9())
					{
						func_491(1);
						func_487();
					}
				}
			}
			else
			{
				if (iVar2 == unk_0x490BA5FDD7EE47A9())
				{
					func_487();
				}
				func_288(85, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2);
			}
		}
		unk_0xE27C8E42A97895CF(&iLocal_1417, 1);
	}
}

void func_487()
{
	if (func_346() != func_60())
	{
		Global_1734817 = func_490(func_346());
		Global_1734817.f_1 = func_489(func_346());
	}
	Global_1734817.f_5 = unk_0x40077EDF3FF70C39();
	Global_1734817.f_13 = func_488();
	Global_1734817.f_15 = 0;
	if (func_344(1))
	{
		if (func_407() == func_346())
		{
			Global_1734817.f_15 = 1;
		}
	}
}

int func_488()
{
	int iVar0;
	
	iVar0 = func_346();
	if (iVar0 != func_60())
	{
		return Global_1610705[iVar0 /*178*/].f_10.f_71;
	}
	return 0;
}

var func_489(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_7[1];
}

var func_490(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_7[0];
}

void func_491(bool bParam0)
{
	if (bParam0)
	{
		if (!func_92(unk_0xE0BDAFA1A39552D6(), 9))
		{
			if (func_117(unk_0xE0BDAFA1A39552D6()) != 0)
			{
				func_93(9);
			}
		}
	}
	else if (func_92(unk_0xE0BDAFA1A39552D6(), 9))
	{
		func_91(9);
	}
}

int func_492(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x99BCB15F954AF579(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_493(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
			Global_2970 = iParam0;
			unk_0xE27C8E42A97895CF(&Global_2283, 1);
			unk_0xE27C8E42A97895CF(&Global_2283, 7);
		}
		return 1;
	}
	return 0;
}

int func_493(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x2F6869889D97DFED(sParam14, sParam15))
	{
	}
	func_503();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
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
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if (unk_0x0B755A8FB5904621(unk_0x06736567F820A39E()))
			{
				return 0;
			}
		}
		if (Global_101186.f_12817[Global_14413 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_502() == 0)
	{
		func_500();
		return 0;
	}
	func_499(Global_16779);
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/]), sParam1, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101186.f_12907[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_25 = iParam7;
	Global_101186.f_12907[Global_16779 /*104*/].f_26 = uParam8;
	Global_101186.f_12907[Global_16779 /*104*/].f_29 = uParam9;
	Global_101186.f_12907[Global_16779 /*104*/].f_30 = uParam12;
	Global_101186.f_12907[Global_16779 /*104*/].f_31 = uParam11;
	Global_101186.f_12907[Global_16779 /*104*/].f_28 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_83), sParam15, 64);
	if (unk_0x7DA173D4FD42F36B(Global_2283, 10))
	{
		Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 1;
		Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 1;
		Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_498(0);
		func_498(2);
		func_498(1);
	}
	else
	{
		func_503();
		switch (iParam16)
		{
			case 3:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_498(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_498(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_498(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_498(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x7DA173D4FD42F36B(Global_2283, 10))
		{
			Global_101186.f_12817[0 /*20*/].f_17 = 1;
			Global_101186.f_12817[1 /*20*/].f_17 = 1;
			Global_101186.f_12817[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101186.f_12817[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101186.f_12817[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101186.f_12817[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101186.f_12817[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (bParam10)
	{
		func_503();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_320())
			{
				unk_0x962E604CCA53388F(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_497(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_494(1);
			func_497(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_494(int iParam0)
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
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_496(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_145(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar2);
								unk_0xE97F1B22C5E8989F();
							}
							if (Global_2444091)
							{
								if (iVar1 == 14)
								{
									func_495(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
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
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101186.f_12907[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101186.f_12907[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101186.f_12907[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_495(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69521)
								{
									iVar4 = 0;
									iVar4 = Global_2566789;
									func_495(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36875;
											break;
										
										case 1:
											iVar5 = Global_36876;
											break;
										
										case 2:
											iVar5 = Global_36877;
											break;
										
										default:
											break;
									}
									func_495(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_495(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_145(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(Global_2289);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_145(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar6);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_145(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar7);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 8)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_145(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if ((iVar1 == 23 && unk_0x2F6869889D97DFED(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x7DA173D4FD42F36B(Global_2284, 6))
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_145(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1609456.f_1;
								func_495(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_495(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_495(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x226FA58470A21AEF(uParam7))
	{
		func_145(sParam7);
	}
	if (!unk_0x226FA58470A21AEF(iParam8))
	{
		func_145(iParam8);
	}
	if (!unk_0x226FA58470A21AEF(iParam9))
	{
		func_145(iParam9);
	}
	if (!unk_0x226FA58470A21AEF(iParam10))
	{
		func_145(iParam10);
	}
	if (!unk_0x226FA58470A21AEF(iParam11))
	{
		func_145(iParam11);
	}
	unk_0xE97F1B22C5E8989F();
}

bool func_496(int iParam0)
{
	return Global_35742 == iParam0;
}

void func_497(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE97F1B22C5E8989F();
}

void func_498(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101186.f_12817[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_499(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xF14A94DD5AC25E5A();
	uVar1 = unk_0x4DD90C24B73F9042();
	uVar2 = unk_0xEC5C0F25A9A364A0();
	uVar3 = unk_0xED13857F967C0912();
	uVar4 = unk_0x39BDC971C31BA81C() + 1;
	uVar5 = unk_0x6EBF2ECA5972D1E7();
	Global_101186.f_12907[iParam0 /*104*/].f_18 = uVar0;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_500()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69521)
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
	Global_16779 = 34;
	Global_101186.f_12907[Global_16779 /*104*/].f_18 = -1;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_501(Global_101186.f_12907[iVar2 /*104*/].f_18, Global_101186.f_12907[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_24 = 1;
}

int func_501(struct<6> Param0, struct<6> Param6)
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

int func_502()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69521)
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
		if (Global_101186.f_12907[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101186.f_12907[Global_16779 /*104*/].f_18 = -1;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101186.f_12907[iVar2 /*104*/].f_24 == 0 || Global_101186.f_12907[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_501(Global_101186.f_12907[iVar2 /*104*/].f_18, Global_101186.f_12907[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return 0;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 0;
	return 1;
}

void func_503()
{
	if (func_496(14))
	{
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_504();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69521)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_504()
{
	func_505();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_505()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_508(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_507(unk_0x06736567F820A39E());
			if (func_506(iVar0) && (!func_496(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_506(Global_101186.f_1902.f_539.f_3549))
				{
					Global_101186.f_1902.f_539.f_3550 = Global_101186.f_1902.f_539.f_3549;
				}
				Global_101186.f_1902.f_539.f_3551 = iVar0;
				Global_101186.f_1902.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101186.f_1902.f_539.f_3549 != 145)
			{
				Global_101186.f_1902.f_539.f_3551 = Global_101186.f_1902.f_539.f_3549;
			}
			return;
		}
	}
	Global_101186.f_1902.f_539.f_3549 = 145;
}

bool func_506(int iParam0)
{
	return iParam0 < 3;
}

int func_507(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_508(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_508(int iParam0)
{
	if (func_506(iParam0))
	{
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_509()
{
	if (!func_478())
	{
		return;
	}
	if (!unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == Global_1312577.f_7)
	{
		return;
	}
	func_474();
}

void func_510()
{
	if (func_17(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	switch (Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_9)
	{
		case 0:
			func_512();
			func_262();
			if (Local_96.f_117 == 2)
			{
				Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_9 = 2;
			}
			else if (Local_96.f_117 == 3)
			{
				Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_262();
			if (func_511())
			{
				func_465();
			}
			if (Local_96.f_117 == 3)
			{
				Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_588();
			break;
	}
}

bool func_511()
{
	return ((unk_0x7DA173D4FD42F36B(Local_96.f_1, 1) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 3)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 5));
}

void func_512()
{
	func_532();
	func_531();
	func_486();
	func_468();
	func_521();
	func_520();
	func_515();
	func_514();
	func_453();
	func_513();
}

void func_513()
{
}

void func_514()
{
	if (func_511())
	{
		return;
	}
	if (!func_574())
	{
		return;
	}
	if (!Global_262145.f_12648)
	{
		return;
	}
	if (Local_96.f_115 == 0)
	{
		return;
	}
}

void func_515()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_574())
	{
		return;
	}
	if (func_511())
	{
		return;
	}
	fVar4 = func_127(&iVar0, 1);
	if (fVar4 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_1424 != iVar0)
			{
				Var1 = { unk_0xF4745590D18D14B8(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 0) };
				func_82(10, 0, 0);
				func_516(Var1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
				iLocal_1424 = iVar0;
				unk_0xE27C8E42A97895CF(&iLocal_1417, 16);
			}
		}
	}
	else if (fVar4 > 250000f)
	{
		func_284();
	}
}

void func_516(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0xDF49ABF9204CC801(Global_2410759.f_6))
	{
		if (!Global_2410759.f_6 == unk_0xAE832DCCE9CD3242())
		{
			return;
		}
	}
	else
	{
		Global_2410759.f_6 = unk_0xAE832DCCE9CD3242();
	}
	Var0.f_6 = Global_2410759.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_517(unk_0xE0BDAFA1A39552D6()))
	{
		Var0.f_23 = 1;
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Global_2410759 = { Var0 };
}

int func_517(int iParam0)
{
	if ((func_518(iParam0, 1) || func_115(iParam0)) || func_89(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_518(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_519(iParam0) != 0;
	}
	return func_230(iParam0, bParam1);
}

int func_519(int iParam0)
{
	if (func_619(iParam0, 0, 1))
	{
		return Global_2418529[iParam0 /*313*/].f_1;
	}
	return 0;
}

void func_520()
{
	int iVar0;
	
	if (iLocal_1421 != Local_96.f_115)
	{
		if (func_574())
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				if (unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
				{
					if (!unk_0x8122B656FB23F1C7())
					{
						iVar0 = unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6());
						switch (Local_96.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_12645)
								{
									unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), Global_262145.f_12645, 0);
									unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_12646)
								{
									unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), Global_262145.f_12646, 0);
									unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_12647)
								{
									unk_0x23C09ED6B6466E40(Global_262145.f_12647);
									unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), Global_262145.f_12647, 0);
									unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 0);
								}
								break;
						}
						iLocal_1421 = Local_96.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_1421 = Local_96.f_115;
		}
	}
}

void func_521()
{
	int iVar0;
	
	if (!func_309())
	{
		if (func_530("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		return;
	}
	iVar0 = func_117(unk_0xE0BDAFA1A39552D6());
	if (iVar0 < 2)
	{
		if (func_530("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 2))
	{
		if (!func_529(85))
		{
			if (func_523(0, 1, 1, 1))
			{
				if (unk_0x490BA5FDD7EE47A9() == Local_96.f_118)
				{
					func_522("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_268(1);
					unk_0xE27C8E42A97895CF(&iLocal_1417, 2);
				}
				else if (func_575() == Local_96.f_118)
				{
					func_522("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_268(1);
					unk_0xE27C8E42A97895CF(&iLocal_1417, 2);
				}
				else if (func_250())
				{
					func_522("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_268(1);
					unk_0xE27C8E42A97895CF(&iLocal_1417, 2);
				}
			}
		}
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_1417, 2))
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 3))
		{
			if (func_523(0, 1, 1, 1))
			{
				if (!func_530("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (unk_0x490BA5FDD7EE47A9() == Local_96.f_118 || func_575() == Local_96.f_118)
					{
						func_269("HUNT_HELPB", -1);
						func_268(1);
						unk_0xE27C8E42A97895CF(&iLocal_1417, 3);
					}
				}
			}
		}
	}
}

void func_522(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x15835437CE85AEA4(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xD5EA844E0F1947AF(iParam2);
	}
	unk_0x4C5D86B5B659C953(sParam1);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam3);
}

int func_523(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6146EFE5BC2DD8DC())
	{
		return 0;
	}
	if (func_528())
	{
		return 0;
	}
	if (!unk_0xDF916BCF4D39E8C2())
	{
		return 0;
	}
	if (func_240())
	{
		return 0;
	}
	if (func_321())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_230(unk_0xE0BDAFA1A39552D6(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_527(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (func_526())
	{
		return 0;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (Global_1573684)
	{
		return 0;
	}
	if (func_525())
	{
		return 0;
	}
	if (func_524())
	{
		return 0;
	}
	if (func_233())
	{
		return 0;
	}
	if (Global_68089)
	{
		return 0;
	}
	if (Global_2472483)
	{
		return 0;
	}
	return 1;
}

bool func_524()
{
	return Global_2434839.f_568;
}

bool func_525()
{
	return Global_2434839.f_720;
}

bool func_526()
{
	return Global_2428549.f_2482.f_585;
}

int func_527(int iParam0)
{
	if (Global_2418529[iParam0 /*313*/].f_206 == 0)
	{
		return 0;
	}
	return 1;
}

int func_528()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
	{
		return 1;
	}
	return 0;
}

bool func_529(int iParam0)
{
	return Global_2428549.f_2191[0 /*72*/].f_1 == iParam0;
}

bool func_530(char* sParam0, char* sParam1)
{
	unk_0xC11856C04AAC5813(sParam0);
	unk_0x4C5D86B5B659C953(sParam1);
	return unk_0xBA2B1F42B35E6698(0);
}

void func_531()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_127(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_110(unk_0xE0BDAFA1A39552D6()))
		{
			func_109();
		}
	}
}

void func_532()
{
	if (func_119())
	{
		return;
	}
	if (func_117(unk_0xE0BDAFA1A39552D6()) == 0)
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_1, 1))
	{
		if (!func_574())
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 6))
			{
				func_95(1);
				unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_1), 1);
			}
		}
	}
}

void func_533()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	iVar4 = func_60();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_2, iVar0))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_110, iVar0))
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
						{
							if (func_575() == Local_96.f_118)
							{
								if (func_551(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1)))
								{
									unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_3, iVar0))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_112, iVar0))
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_2))
				{
					if (func_550(iVar0))
					{
						unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_4, iVar0))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_111, iVar0))
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xDECA6CE314913AC1(unk_0xF4745590D18D14B8(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 1), 10f, 1))
						{
							unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_549(iVar0);
		if (func_309())
		{
			if (!unk_0xCDB4C4200A9B478A(uLocal_1432[iVar0]))
			{
				if (!func_511())
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							uLocal_1432[iVar0] = unk_0xDB8B533098769F4F(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1));
							if (func_575() == Local_96.f_118)
							{
								unk_0xA4E8F868373B09C0(uLocal_1432[iVar0], 12);
								unk_0x3A46FF82408A2709(uLocal_1432[iVar0], 432);
								func_548(&(uLocal_1432[iVar0]), 6);
							}
							else
							{
								unk_0x3A46FF82408A2709(uLocal_1432[iVar0], 480);
								func_548(&(uLocal_1432[iVar0]), 9);
							}
							unk_0xC450F6DE1A06C309(uLocal_1432[iVar0], 1);
							unk_0xF86EC7784DA1CB68(uLocal_1432[iVar0], 7000);
							unk_0xC5B281EF0EBC2AA6(uLocal_1432[iVar0], 1.1f);
							unk_0x4BFEA7590F203BDF(uLocal_1432[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					unk_0x2239ED27B231AE2E(&(uLocal_1432[iVar0]));
				}
				else if (func_511())
				{
					unk_0x2239ED27B231AE2E(&(uLocal_1432[iVar0]));
				}
			}
		}
		else if (unk_0xCDB4C4200A9B478A(uLocal_1432[iVar0]))
		{
			unk_0x2239ED27B231AE2E(&(uLocal_1432[iVar0]));
		}
		func_547(iVar0);
		func_546(iVar0);
		func_544(iVar0);
		switch (Local_96.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (unk_0x587E5997B76F47FE())
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_96.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x954A6C5EBD942B9E(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), unk_0xA9B72300DA155F92(Local_96.f_2[iVar0 /*26*/].f_2)))
								{
									if (unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										unk_0x2AF5979C8A445B16(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), unk_0xA9B72300DA155F92(Local_96.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x587E5997B76F47FE())
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_2))
					{
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_96.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x954A6C5EBD942B9E(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), unk_0xA9B72300DA155F92(Local_96.f_2[iVar0 /*26*/].f_2)))
									{
										if ((unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || unk_0x7DA173D4FD42F36B(Local_96.f_108, iVar0))
										{
											unk_0x2AF5979C8A445B16(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), unk_0xA9B72300DA155F92(Local_96.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (unk_0x7DA173D4FD42F36B(Local_96.f_108, iVar0))
											{
												unk_0x99BCB15F954AF579(&(Local_96.f_108), iVar0);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_542(Local_96.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x748A759556B70724(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
						{
							if (unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_542(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar0 /*26*/].f_1))
									{
										unk_0x841E84F12BA2CFC5(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
						{
							if (unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_542(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar0 /*26*/].f_1))
									{
										uVar2 = func_540(iVar0);
										if (!unk_0xCFC04A38F256EE06(uVar2))
										{
											unk_0xFEDD46326A41DB46(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							unk_0xE736C729727B547E(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_542(Local_96.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 0);
									unk_0xE7E3395C59F02C4A(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar0 /*26*/].f_1))
						{
							unk_0xE736C729727B547E(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_542(Local_96.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x571B16865290E9DD(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 1);
									iVar4 = func_539(iVar0, &uVar5);
									if (iVar4 != func_60())
									{
										unk_0x8F13F92D6A0C7DB6(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), unk_0x44A9253132E1DDE0(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_96.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_542(Local_96.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar0 /*26*/].f_1))
								{
									unk_0xD5FDD0DED35FFF91(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
								}
							}
						}
					}
				}
				break;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			switch (Local_96.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_542(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xD5FDD0DED35FFF91(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_542(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0xE7E3395C59F02C4A(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_542(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0xE7E3395C59F02C4A(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (unk_0x7A6749CADAC50206(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_542(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 1);
											unk_0x748A759556B70724(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), 3, 1);
										}
									}
								}
							}
						}
					}
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_574())
	{
		func_534();
	}
}

void func_534()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_535(uLocal_1678[iVar0], &(Local_1437[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1);
		iVar0++;
	}
}

void func_535(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		if (func_538())
		{
			Global_2428549 = unk_0xE0BDAFA1A39552D6();
		}
		if (bParam3)
		{
			func_537(unk_0x220B3465A4B1FBA5(uParam0), uParam1, 1, Global_2428549, iParam4, iParam5, fParam2, iParam6, iParam7);
		}
		else
		{
			func_537(unk_0x220B3465A4B1FBA5(uParam0), uParam1, -1, Global_2428549, iParam4, iParam5, fParam2, iParam6, iParam7);
		}
	}
	else if (unk_0xCDB4C4200A9B478A(*uParam1))
	{
		func_536(uParam1);
	}
}

void func_536(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xCDB4C4200A9B478A(*uParam0))
	{
		unk_0x2239ED27B231AE2E(uParam0);
		bVar0 = true;
	}
	if (unk_0xCDB4C4200A9B478A(uParam0->f_1))
	{
		unk_0x2239ED27B231AE2E(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xC1EDB61CE0A4B94E(uParam0->f_7))
	{
		if (!unk_0xCFC04A38F256EE06(uParam0->f_7))
		{
			if (unk_0xE60A28942E3AC2F4(uParam0->f_7))
			{
				unk_0x02301F37BFDE4853(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_537(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xBC628C78D8ECD5F1();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xCFC04A38F256EE06(uParam0))
	{
		if (!unk_0xE60A28942E3AC2F4(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x02301F37BFDE4853(iParam0, 1);
			}
			else
			{
				unk_0x1BFD1B2D060B4D7B(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x64C4679AB573D014(iParam0, iParam2);
			unk_0x8071A84CFEF9473E(iParam0, fParam6);
			if (unk_0xCDB4C4200A9B478A(*uParam1))
			{
				unk_0xA4E8F868373B09C0(*uParam1, 7);
			}
		}
		unk_0x4E4EE0053F5CC360(iParam0, uParam4);
		unk_0xD8980636C77E9E15(iParam0, uParam5);
		*uParam1 = unk_0x02474D0091F9C4C7(iParam0);
		if (!unk_0x7DA173D4FD42F36B(uParam1->f_6, 2))
		{
			if (unk_0xCDB4C4200A9B478A(*uParam1))
			{
				if (!unk_0x226FA58470A21AEF(uParam7))
				{
					unk_0x029684F77EB71B8F("MCUSTBLIP");
					unk_0x9C174A0D56FFB64A(sParam7);
					unk_0xA16AF6FEBF65A3F0(*uParam1);
				}
				unk_0xE27C8E42A97895CF(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x0FDFEC0DD29106EE(iParam0, 0))
		{
			uParam1->f_1 = unk_0xC449C2B2F01617A0(iParam0);
			if (!unk_0x7DA173D4FD42F36B(uParam1->f_6, 3))
			{
				if (unk_0xCDB4C4200A9B478A(uParam1->f_1))
				{
					unk_0xA4E8F868373B09C0(uParam1->f_1, 7);
					unk_0xE27C8E42A97895CF(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xCDB4C4200A9B478A(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x99BCB15F954AF579(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_538()
{
	return Global_1315888;
}

int func_539(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	var uVar8;
	
	iVar0 = func_60();
	fVar1 = 1E+08f;
	Var3 = { unk_0xF4745590D18D14B8(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1) };
	iVar6 = 0;
	while (iVar6 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar6)))
		{
			iVar7 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar6));
			if (!func_17(iVar7, 0))
			{
				uVar8 = unk_0x44A9253132E1DDE0(iVar7);
				if (iVar6 == Local_96.f_118 || Local_968[iVar6 /*14*/].f_10 == Local_96.f_118)
				{
					if (!unk_0xCFC04A38F256EE06(uVar8))
					{
						fVar2 = unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(iVar8, 1), Var3);
						if (fVar2 < fVar1)
						{
							fVar1 = fVar2;
							iVar0 = iVar7;
						}
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != func_60())
	{
		*uParam1 = fVar1;
	}
	return iVar0;
}

var func_540(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_541(iParam0);
	if (iVar1 != func_60())
	{
		uVar0 = unk_0x44A9253132E1DDE0(iVar1);
	}
	return uVar0;
}

int func_541(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	var uVar8;
	
	iVar0 = func_60();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	Var4 = { unk_0xF4745590D18D14B8(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 0) };
	iVar3 = 0;
	while (iVar3 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar3)))
		{
			iVar7 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar3));
			uVar8 = unk_0x44A9253132E1DDE0(iVar7);
			if (func_152(iVar7, 1))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_968[iVar3 /*14*/].f_1, 1))
				{
					if (func_61(iVar7) == unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(Local_96.f_118)))
					{
						if (!unk_0xCFC04A38F256EE06(uVar8))
						{
							fVar2 = unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(iVar8, 1), Var4);
							if (fVar2 < fVar1)
							{
								fVar1 = fVar2;
								iVar0 = iVar7;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_542(var uParam0)
{
	if (unk_0xED2E89495A3A119B(uParam0))
	{
		return 1;
	}
	if (func_543(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_543(var uParam0)
{
	if (!unk_0x587E5997B76F47FE())
	{
		return 0;
	}
	if (!unk_0xC3A7CFC6468E0BAE(uParam0))
	{
		return 0;
	}
	if (func_42(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_544(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	
	if (!func_309())
	{
		return;
	}
	if (func_117(unk_0xE0BDAFA1A39552D6()) < 1)
	{
		return;
	}
	if (!func_574() && !func_250())
	{
		return;
	}
	if (func_511())
	{
		return;
	}
	if (func_574())
	{
		unk_0xD06A5371300291A8(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xD06A5371300291A8(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_96.f_2[iParam0 /*26*/].f_1))
		{
			if (!unk_0x7A6749CADAC50206(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1)))
			{
				Var4 = { unk_0xF4745590D18D14B8(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1) };
				unk_0x1F60DF09D920D0B6(2, Var4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				uVar7 = unk_0x34E1EF1E8BCD1BFC(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 0);
				func_545(uVar7, uVar0, uVar1, uVar2);
			}
		}
	}
}

void func_545(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0x9CFA23DC65790425(unk_0x79469DA5833EACA8(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	unk_0x1F60DF09D920D0B6(2, unk_0xF4745590D18D14B8(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_546(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	bool bVar8;
	
	if (Local_96.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_96.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_575() != Local_96.f_118)
	{
		return;
	}
	if (unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0) };
	Var4 = { unk_0xF4745590D18D14B8(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 5625f)
	{
		unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_13), iParam0);
		return;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_3[iVar7]))
		{
			if (!func_14(Local_96.f_2[iParam0 /*26*/].f_3[iVar7]))
			{
				bVar8 = true;
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_13), iParam0);
	}
}

void func_547(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	if (Local_96.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_96.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_575() != Local_96.f_118)
	{
		return;
	}
	if (unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_96.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0) };
	Var4 = { unk_0xF4745590D18D14B8(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 62500f)
	{
		unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_12), iParam0);
		return;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_3[iVar8]))
		{
			if (func_14(Local_96.f_2[iParam0 /*26*/].f_3[iVar8]))
			{
				unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_12), iParam0);
			}
			else
			{
				uVar7 = unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_3[iVar8]);
				if (func_575() == Local_96.f_118)
				{
					if (unk_0xB7A628320EFF8E47(Var1, Var4) < 40000f)
					{
						unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_12), iParam0);
						return;
					}
					if (func_551(uVar7))
					{
						unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar8++;
	}
}

void func_548(var uParam0, int iParam1)
{
	if (unk_0xCDB4C4200A9B478A(*uParam0))
	{
		unk_0x8A6C20F61A3C4CFA(*uParam0, func_281(iParam1));
	}
}

void func_549(int iParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (Local_96.f_2[iParam0 /*26*/] == 0)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_1))
		{
			if (unk_0x40B3668D7226E0DF(Local_96.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_96.f_2[iParam0 /*26*/].f_1))
				{
					if (!unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = unk_0x137B8B7A1CAD742A(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							Var2 = { unk_0xF4745590D18D14B8(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 1) };
							Var5 = { Var2 };
							Var5.f_2 = (Var5.f_2 + 500f);
							if (unk_0x00FBAE9BB89D4FC2(Var5, &fVar1, 0))
							{
								if (unk_0xF87C669B882D93C0((Var2.f_2 - fVar1)) > 30f)
								{
									unk_0xEC337F42DFBAD859(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*26*/].f_1), 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_550(int iParam0)
{
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_96.f_2[iParam0 /*26*/].f_2))
		{
			if (unk_0x5B69019B28C95DD8(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_2), 0, 7000) || unk_0x5B69019B28C95DD8(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*26*/].f_2), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_551(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x225B26AE60B121A0(unk_0xE0BDAFA1A39552D6(), uParam0))
	{
		return 1;
	}
	if (unk_0x1D7CB59C357D17AB(unk_0xE0BDAFA1A39552D6(), uParam0))
	{
		return 1;
	}
	if (func_552())
	{
		if (unk_0xFD400CC34D5746B3(unk_0xE0BDAFA1A39552D6(), &uVar0))
		{
			if (unk_0x77CB3F400804EDD1(uVar0))
			{
				uVar1 = unk_0x406B8F450D0105AB(iVar0);
				if (unk_0xC1EDB61CE0A4B94E(uVar1))
				{
					if (!unk_0xBDA1F5E8A36BFA07(iVar1, 0))
					{
						if (unk_0x0FDFEC0DD29106EE(iVar1, 0))
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

bool func_552()
{
	return Global_1573831;
}

void func_553()
{
	int iVar0;
	int iVar1;
	
	if (Local_96.f_0 != 4)
	{
		iVar1 = unk_0x801C03D92F1C6755(iLocal_1420);
		if (unk_0xA27C9E8196C79D22(iVar1))
		{
			if (unk_0x605885F0A8AC6672(iVar1))
			{
				if (!func_511())
				{
					if (!func_574())
					{
						if (func_250())
						{
							if (func_152(iVar1, 1))
							{
								iVar0 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(Local_96.f_118));
								if (func_71(iVar1, iVar0, 1))
								{
									if (!unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_8, iLocal_1420))
									{
										func_282(iVar1, 432, 1);
										func_277(iVar1, func_281(iLocal_1709), 1);
										unk_0xE27C8E42A97895CF(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_8), iLocal_1420);
									}
								}
							}
						}
					}
				}
			}
			else if (unk_0x7DA173D4FD42F36B(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_8, iLocal_1420))
			{
				func_282(iVar1, 432, 0);
				func_277(iVar1, func_281(iLocal_1709), 0);
				unk_0x99BCB15F954AF579(&(Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_8), iLocal_1420);
			}
		}
	}
	iLocal_1420++;
	if (iLocal_1420 >= 32)
	{
		iLocal_1420 = 0;
	}
}

int func_554()
{
	if (func_555(1))
	{
		return 1;
	}
	if (Global_2464975.f_4685.f_14)
	{
		Global_2464975.f_4685.f_14 = 0;
		return 1;
	}
	return 0;
}

int func_555(bool bParam0)
{
	bool bVar0;
	
	if (!func_344(1))
	{
		bVar0 = false;
		if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51 != func_60())
		{
			if (func_619(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51, 0, 1) && Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_19 == 4)
			{
				bVar0 = true;
			}
		}
		else if (func_556(func_88(unk_0xE0BDAFA1A39552D6())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_427(31);
				if (unk_0xA27C9E8196C79D22(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51))
				{
					Global_1609371 = func_293(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51, -2, 0, 0);
				}
				else
				{
					Global_1609371 = 1;
				}
				Global_1609355 = { Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_77 };
			}
			return 1;
		}
	}
	return 0;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
			return 1;
		
		case 148:
			return 2;
		
		default:
	}
	return -1;
}

void func_557()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_96.f_2[iVar1 /*26*/] == 2)
			{
				if (func_43(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_1678[iVar0] = Local_96.f_2[iVar1 /*26*/].f_3[iVar2];
							iVar0++;
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_558()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (unk_0x490BA5FDD7EE47A9() == Local_96.f_118 || func_575() == Local_96.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
			{
				unk_0x657CAD7CE358D665(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_1), unk_0xE0BDAFA1A39552D6(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					unk_0x657CAD7CE358D665(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar0 /*26*/].f_3[iVar1]), unk_0xE0BDAFA1A39552D6(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_559()
{
	if (Local_96.f_118 > -1)
	{
		iLocal_1709 = func_451(unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(Local_96.f_118)));
	}
}

void func_560(float fParam0)
{
	float fVar0;
	
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_279())
	{
		return;
	}
	fVar0 = (Global_2464975.f_4680 - fParam0);
	if (unk_0xDF49ABF9204CC801(Global_2464975.f_4681))
	{
		if (!Global_2464975.f_4681 == unk_0xAE832DCCE9CD3242() && unk_0xF87C669B882D93C0(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2464975.f_4680 = fParam0;
	Global_2464975.f_4681 = unk_0xAE832DCCE9CD3242();
}

void func_561(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 != iParam0)
	{
		func_573(-1);
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 = iParam0;
		if (func_572() != -1)
		{
			func_571(-1);
		}
		if (func_570() != -1)
		{
			func_569(-1);
		}
		func_567(iParam2);
		func_565(iParam0);
		if (!func_99(iParam0))
		{
			fVar0 = func_98(iParam0);
			if (fVar0 != 1f)
			{
				func_560(fVar0);
				unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 1);
			}
		}
		if (!func_102(iParam0))
		{
			if (func_100(iParam0, iParam2))
			{
				unk_0x23C09ED6B6466E40(0);
				unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 0);
				unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 0);
				unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 0);
			}
			else if (unk_0x16B4666C6E139F11() < 5)
			{
				unk_0x71543B3C24188223(1f);
				unk_0x23C09ED6B6466E40(5);
			}
		}
		if (func_125())
		{
			func_93(27);
		}
		if (bParam1)
		{
			if (!func_119())
			{
				func_95(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 1) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 4)) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 0))
			{
				func_427(6);
			}
			func_564();
		}
		if (iParam0 == 164)
		{
			unk_0x6849F03027FD1813(3, 0);
			unk_0x6849F03027FD1813(5, 0);
		}
		if (func_115(unk_0xE0BDAFA1A39552D6()) && func_107(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 8);
		}
		func_562();
	}
}

void func_562()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_563();
	iVar2 = func_61(unk_0xE0BDAFA1A39552D6());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x801C03D92F1C6755(iVar0);
		if (unk_0xA27C9E8196C79D22(iVar1))
		{
			if (func_71(iVar1, iVar2, 1))
			{
				unk_0xFDB2AD78EE5E2EE4(unk_0xE0BDAFA1A39552D6(), iVar1, uVar3);
				unk_0xFDB2AD78EE5E2EE4(iVar1, unk_0xE0BDAFA1A39552D6(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_563()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_346();
	if (iVar0 != func_60())
	{
		if (func_619(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x7DA173D4FD42F36B(Global_1610705[iVar1 /*178*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_564()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 1))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 1);
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 4))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 4);
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 6))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 6);
	}
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 0);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 2);
	Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_365 = 0;
	if (Global_2464975.f_4416 > 0)
	{
		unk_0x23C09ED6B6466E40(Global_2464975.f_4416);
	}
	Global_2464975.f_4415 = 0;
}

void func_565(int iParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_381(3357, -1, 0);
	iVar1 = func_566(iParam0);
	if (iVar1 != -1)
	{
		unk_0xE27C8E42A97895CF(&uVar0, iVar1);
		func_373(3357, uVar0, -1, 1);
	}
}

int func_566(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		default:
	}
	return -1;
}

void func_567(int iParam0)
{
	func_568(unk_0xE0BDAFA1A39552D6(), iParam0);
}

void func_568(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_121 != iParam1)
	{
		Global_1610705[iParam0 /*178*/].f_10.f_121 = iParam1;
	}
}

void func_569(int iParam0)
{
	if (Global_2464975.f_4685.f_138 != iParam0)
	{
		Global_2464975.f_4685.f_138 = iParam0;
	}
}

int func_570()
{
	return Global_2464975.f_4685.f_138;
}

void func_571(int iParam0)
{
	if (Global_2464975.f_4685.f_137 != iParam0)
	{
		Global_2464975.f_4685.f_137 = iParam0;
	}
}

int func_572()
{
	return Global_2464975.f_4685.f_137;
}

void func_573(int iParam0)
{
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_27 = iParam0;
}

int func_574()
{
	int iVar0;
	
	iVar0 = func_575();
	if (iVar0 > -1)
	{
		if (Local_96.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_575()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_60();
	if (!func_17(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar0 = unk_0x490BA5FDD7EE47A9();
		iVar1 = unk_0xE0BDAFA1A39552D6();
	}
	else
	{
		iVar0 = func_251();
		iVar1 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_968[iVar0 /*14*/].f_10 != -1)
	{
		return Local_968[iVar0 /*14*/].f_10;
	}
	if (func_106(iVar1))
	{
		Local_968[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_96.f_118)
		{
			func_491(1);
		}
	}
	else if (func_152(iVar1, 1))
	{
		iVar2 = func_61(iVar1);
		if (iVar2 != func_60())
		{
			if (unk_0x605885F0A8AC6672(iVar2))
			{
				Local_968[iVar0 /*14*/].f_10 = unk_0xBD1E178ABA0E03F1(iVar2);
			}
		}
	}
	return Local_968[iVar0 /*14*/].f_10;
}

int func_576()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*26*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			if (!func_34(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_577()
{
	return Local_96.f_0;
}

int func_578(int iParam0)
{
	return Local_968[iParam0 /*14*/];
}

int func_579()
{
	bool bVar0;
	
	func_584(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			return 1;
		}
	}
	if (func_583())
	{
		return 1;
	}
	if (Global_2446452)
	{
		return 1;
	}
	if (func_582())
	{
		return 1;
	}
	if (func_581(157))
	{
		if (!func_580())
		{
			return 1;
		}
	}
	if (func_581(155))
	{
		return 1;
	}
	if (!unk_0x2CB436C59D8FC08B())
	{
		return 1;
	}
	if (func_279() != 0)
	{
		if (unk_0x98934607F8D0FB03(func_279()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_580()
{
	return Global_2434839.f_575;
}

int func_581(int iParam0)
{
	if (unk_0x1151827D6B6D09C7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_582()
{
	return Global_2444095;
}

bool func_583()
{
	return Global_2434839.f_570;
}

void func_584(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6E7EC37CC38579DB(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 347:
					func_585(iVar0);
					break;
				
				case 2:
					unk_0x6E7EC37CC38579DB(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_585(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (func_619(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x44A9253132E1DDE0(Var0.f_1);
			if (unk_0xC1EDB61CE0A4B94E(uVar3))
			{
				if (unk_0x0FDFEC0DD29106EE(iVar3, 0))
				{
					uVar4 = unk_0x34E1EF1E8BCD1BFC(iVar3, 0);
					if (unk_0xBBDEC099189867B6(uVar4, Var0.f_2) && unk_0x992E302DC36A4251())
					{
						if (func_586(uVar4, &bVar5))
						{
							unk_0x87332622AA717A1B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x768B37F1452D4834(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_586(int iParam0, var uParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xC9A01F9792B3D486(iParam0))
		{
			if (unk_0x2A3F30E37EB8FDD8(iParam0))
			{
				unk_0xB7E6C6AE18F1EDA6(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x7292AF41BC6C644F(iParam0, 0))
		{
			if (unk_0xA2C0F3D7469C0A0B(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_587()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_588()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_1417, 6))
		{
			if (unk_0x17CC0D5008835470())
			{
				if (func_574() || func_250())
				{
					func_448(0, 4);
					unk_0xE27C8E42A97895CF(&iLocal_1417, 6);
				}
			}
		}
		uVar0 = Local_96.f_115;
		uVar1 = Local_96.f_121;
		iVar2 = -1;
		if (unk_0x17CC0D5008835470())
		{
			iVar2 = Local_968[unk_0x490BA5FDD7EE47A9() /*14*/].f_11;
		}
		func_604(uVar0, uVar1, iVar2, -1082130432);
		if (unk_0x17CC0D5008835470())
		{
			if (unk_0xD53C8BCD41123EE6(unk_0x06736567F820A39E()) == iLocal_1422)
			{
				unk_0xDEA5F99894469373(unk_0x06736567F820A39E(), iLocal_1423);
			}
		}
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_1417, 18))
	{
		func_287();
		unk_0x99BCB15F954AF579(&iLocal_1417, 18);
	}
	func_603();
	if (Local_96.f_119 != -1)
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_1417, 5))
		{
			if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(Local_96.f_119)))
			{
			}
		}
	}
	if (func_76(0))
	{
		func_75(0);
	}
	if (unk_0x17CC0D5008835470())
	{
		if (unk_0x587E5997B76F47FE())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (unk_0x7DA173D4FD42F36B(Local_96.f_871, iVar3))
				{
					unk_0x8659A4920DA95096(Local_96.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_1417, 17))
	{
		unk_0x23C09ED6B6466E40(iLocal_1711);
		unk_0x99BCB15F954AF579(&iLocal_1417, 17);
	}
	func_284();
	unk_0xE27C8E42A97895CF(&iLocal_1418, 8);
	func_465();
	unk_0xDDC8F43C2CBC62A7(1);
	func_491(0);
	func_590(1);
	unk_0x23C09ED6B6466E40(5);
	func_276();
	func_589();
}

void func_589()
{
	unk_0xF5DF8F3392CDD07B();
}

void func_590(bool bParam0)
{
	int iVar0;
	
	if (Global_1330244.f_1.f_108 != 0)
	{
		Global_1330244.f_1.f_108 = 0;
	}
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 == 167 || Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 == 168)
	{
		func_601();
		unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 4);
	}
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 == 164)
	{
		unk_0x6849F03027FD1813(3, 1);
		unk_0x6849F03027FD1813(5, 1);
	}
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 != -1)
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 = -1;
		if (!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 14) && !func_115(unk_0xE0BDAFA1A39552D6()))
		{
			func_95(0);
		}
	}
	else if (func_599(unk_0xE0BDAFA1A39552D6()) != -1)
	{
		func_573(-1);
	}
	func_567(-1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_597(iVar0);
		iVar0++;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1734808.f_3, 0))
	{
		unk_0x71543B3C24188223(1f);
		unk_0x23C09ED6B6466E40(5);
		unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 0);
	}
	if (func_184(func_271()))
	{
		func_596(-1);
	}
	else if (func_270(func_271()))
	{
	}
	else
	{
		func_592(-1, 1);
	}
	func_91(19);
	func_91(20);
	func_91(21);
	func_91(22);
	func_91(27);
	func_75(3);
	func_75(4);
	func_75(7);
	func_591();
	if (func_107(unk_0xE0BDAFA1A39552D6()))
	{
		func_491(0);
	}
	func_91(29);
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51 = func_60();
	if (Global_2464975.f_4685.f_14 != 0)
	{
		Global_2464975.f_4685.f_14 = 0;
	}
	if (bParam0)
	{
		func_77();
	}
	if (!func_115(unk_0xE0BDAFA1A39552D6()))
	{
		func_90();
		unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 1);
	}
}

void func_591()
{
	if (func_110(unk_0xE0BDAFA1A39552D6()))
	{
		func_91(25);
	}
}

void func_592(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_271();
	}
	if (iParam0 > 0)
	{
		if (func_346() != func_60())
		{
			if (func_595(unk_0xE0BDAFA1A39552D6()) == unk_0xE0BDAFA1A39552D6())
			{
				Global_2460522.f_35[func_594(iParam0)] = 1;
			}
		}
		iVar0 = func_594(159);
		if (func_593(iVar0, Global_262145.f_10793, bParam1))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(157);
		if (func_593(iVar0, Global_262145.f_10793, bParam1))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(148);
		if (func_593(iVar0, Global_262145.f_10793, bParam1))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(164);
		if (func_593(iVar0, Global_262145.f_10793, bParam1))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(142);
		if (func_593(iVar0, Global_262145.f_10793, bParam1))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(152);
		if (func_593(iVar0, Global_262145.f_10793, bParam1))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(166);
		if (func_593(iVar0, Global_262145.f_10793, bParam1))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(170);
		if (func_593(iVar0, Global_262145.f_10793, bParam1))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(173);
		if (func_593(iVar0, Global_262145.f_10793, bParam1))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_593(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_92(unk_0xE0BDAFA1A39552D6(), 19) && !func_92(unk_0xE0BDAFA1A39552D6(), 20)) && !func_92(unk_0xE0BDAFA1A39552D6(), 9))
		{
			return 0;
		}
	}
	if (Global_2460522.f_35[iParam0] == 1 && func_8(&(Global_2460522[iParam0 /*2*/])))
	{
		if (func_467(&(Global_2460522[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2460522.f_35[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_594(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 3;
		
		case 157:
			return 4;
		
		case 148:
			return 5;
		
		case 164:
			return 6;
		
		case 142:
			return 7;
		
		case 152:
			return 8;
		
		case 163:
			return 9;
		
		case 155:
			return 10;
		
		case 160:
			return 11;
		
		case 153:
			return 12;
		
		case 162:
			return 13;
		
		case 154:
			return 14;
		
		case 166:
			return 0;
		
		case 170:
			return 1;
		
		case 173:
			return 2;
		
		case 171:
			return 15;
		
		case 172:
			return 16;
		
		default:
	}
	return -1;
}

int func_595(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_30;
}

void func_596(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_271();
	}
	if (iParam0 > 0)
	{
		if (func_346() != func_60())
		{
			Global_2460522.f_35[func_594(iParam0)] = 1;
		}
		iVar0 = func_594(155);
		if (func_593(iVar0, Global_262145.f_10794, 0))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(163);
		if (func_593(iVar0, Global_262145.f_10794, 0))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(160);
		if (func_593(iVar0, Global_262145.f_10794, 0))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(153);
		if (func_593(iVar0, Global_262145.f_10794, 0))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(162);
		if (func_593(iVar0, Global_262145.f_10794, 0))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(154);
		if (func_593(iVar0, Global_262145.f_10794, 0))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(171);
		if (func_593(iVar0, Global_262145.f_10794, 0))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_594(172);
		if (func_593(iVar0, Global_262145.f_10794, 0))
		{
			func_138(&(Global_2460522[iVar0 /*2*/]));
			func_7(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_597(int iParam0)
{
	if (!func_28(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_107[iParam0 /*3*/], func_598(), 0))
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_107[iParam0 /*3*/] = { func_598() };
	}
	if (!func_28(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_97[iParam0 /*3*/], func_598(), 0))
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_97[iParam0 /*3*/] = { func_598() };
	}
}

Vector3 func_598()
{
	struct<3> Var0;
	
	return Var0;
}

int func_599(int iParam0)
{
	if (func_600(iParam0, 0))
	{
		return Global_1610705[iParam0 /*178*/].f_10.f_27;
	}
	return -1;
}

int func_600(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_27 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_28 != -1))
	{
		return 1;
	}
	return 0;
}

void func_601()
{
	unk_0x99BCB15F954AF579(&(Global_2464975.f_1643), 28);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_1643), 29);
	func_602(24);
}

void func_602(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
}

void func_603()
{
	unk_0x50C99396AA9E5449(iLocal_1422);
}

void func_604(var uParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	uVar0 = unk_0x47B34031F915C179();
	Var1.f_0 = Global_1734817;
	Var1.f_1 = Global_1734817.f_1;
	Var1.f_2 = Global_1734817.f_2;
	Var1.f_3 = Global_1734817.f_3;
	Var1.f_4 = Global_1734817.f_4;
	Var1.f_5 = Global_1734817.f_5;
	Var1.f_6 = Global_1734817.f_6;
	Var1.f_7 = Global_1734817.f_7;
	Var1.f_8 = Global_1734817.f_8;
	Var1.f_9 = Global_1734817.f_9;
	Var1.f_10 = Global_1734817.f_10;
	Var1.f_11 = Global_1734817.f_11;
	Var1.f_12 = Global_1734817.f_12;
	Var1.f_13 = Global_1734817.f_14;
	if (unk_0x17CC0D5008835470())
	{
		if (unk_0x2F6869889D97DFED(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1734817.f_15;
			Var15.f_15 = Global_1734817.f_16;
			Var15.f_16 = Global_1734817.f_17;
			unk_0x41126D8182580084(&Var15);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1734817.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = uParam1;
			unk_0x6DA95F0B7C91CFBF(&Var32);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1734817.f_15;
			Var49.f_15 = uParam0;
			unk_0x239B303EFBBE8EDD(&Var49);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1734817.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = uParam1;
			unk_0x1E4F0F4739EF429E(&Var65);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1734817.f_15;
			Var82.f_15 = uParam0;
			unk_0x05DCC54A6FDEC61B(&Var82);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1734817.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = uParam1;
			Var98.f_17 = iParam2;
			unk_0xB70B47ADDC7F3C16(&Var98);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1734817.f_15;
			unk_0xDC089FE31BE29574(&Var116);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1734817.f_15;
			unk_0x4FACF158515EBCF1(&Var134);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1734817.f_15;
			unk_0x11EA7937D006E418(&Var153);
		}
	}
	func_605();
}

void func_605()
{
	struct<18> Var0;
	
	Global_1734817 = { Var0 };
}

void func_606(struct<20> Param0)
{
	func_617(func_618(Param0.f_0), Param0);
	unk_0xD9E25CCAEFD3B39A(16);
	unk_0xFABD8F29655099FA(8);
	func_616(0, -1, 0);
	unk_0x8C2CCD685DA243F6(&Local_96, 872);
	unk_0xE51AD091F27ECBFF(&Local_968, 449);
	if (!func_615())
	{
		func_588();
	}
	if (unk_0x17CC0D5008835470())
	{
		unk_0x8AAE4CDF72BA829A(0);
		if (unk_0x587E5997B76F47FE())
		{
		}
		func_612();
		func_607(0, 0);
		Local_968[unk_0x490BA5FDD7EE47A9() /*14*/] = 0;
	}
	else
	{
		func_588();
	}
}

void func_607(int iParam0, int iParam1)
{
	func_611();
	func_610();
	if ((iParam0 != 0 && unk_0xA27C9E8196C79D22(iParam1)) && func_609(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xE27C8E42A97895CF(&Global_1734803, 0);
				break;
			}
	}
	if (!func_406() && !func_152(unk_0xE0BDAFA1A39552D6(), 1))
	{
		if (func_122())
		{
			func_94(3);
		}
		func_94(4);
	}
	if (func_344(0))
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51 = func_346();
	}
	func_608();
}

void func_608()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330244.f_527[iVar0 /*47*/].f_1 = func_60();
		Global_1330244.f_527[iVar0 /*47*/].f_9 = 0;
		iVar0++;
	}
}

int func_609(int iParam0, bool bParam1)
{
	return func_71(unk_0xE0BDAFA1A39552D6(), iParam0, bParam1);
}

void func_610()
{
	func_602(33);
	func_602(34);
	func_602(35);
	func_602(36);
	func_602(37);
	func_602(38);
	func_602(39);
	func_602(40);
	func_602(43);
	func_602(41);
	func_602(42);
	func_602(47);
}

void func_611()
{
	struct<14> Var0;
	
	Global_1734817 = { Var0 };
	Global_1734817.f_14 = 0;
	Global_1734817.f_15 = 0;
}

void func_612()
{
	int iVar0;
	int iVar1;
	
	unk_0x3ECE0E645B1530B3("relHeadHunterPlayer", &iLocal_1422);
	iVar0 = unk_0x6144148FF32AED2F(unk_0xD53C8BCD41123EE6(unk_0x06736567F820A39E()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		unk_0x054CBFE90FAA6840(5, Global_1574218[iVar1], iLocal_1422);
		unk_0x054CBFE90FAA6840(5, iLocal_1422, Global_1574218[iVar1]);
		unk_0x054CBFE90FAA6840(1, Global_1574218[iVar1], Global_1574259);
		unk_0x054CBFE90FAA6840(1, Global_1574259, Global_1574218[iVar1]);
		unk_0x054CBFE90FAA6840(iVar0, iLocal_1422, joaat("COP"));
		unk_0x054CBFE90FAA6840(iVar0, joaat("COP"), iLocal_1422);
		unk_0x054CBFE90FAA6840(1, iLocal_1422, Global_1574260[5]);
		unk_0x054CBFE90FAA6840(1, Global_1574260[5], iLocal_1422);
		unk_0x054CBFE90FAA6840(1, iLocal_1422, Global_1574251);
		unk_0x054CBFE90FAA6840(1, Global_1574251, iLocal_1422);
		iVar1++;
	}
	unk_0x054CBFE90FAA6840(5, iLocal_1422, Global_1574259);
	unk_0x054CBFE90FAA6840(5, Global_1574259, iLocal_1422);
	unk_0x054CBFE90FAA6840(1, 2017343592, Global_1574259);
	unk_0x054CBFE90FAA6840(5, 2017343592, iLocal_1422);
	func_614(1, &Global_1574259);
	func_613(&Global_1574259);
	func_613(&iLocal_1422);
}

void func_613(int iParam0)
{
	unk_0x054CBFE90FAA6840(1, -1865950624, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, -1865950624);
	unk_0x054CBFE90FAA6840(1, 296331235, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 296331235);
	unk_0x054CBFE90FAA6840(1, 1166638144, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 1166638144);
	unk_0x054CBFE90FAA6840(1, 2037579709, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 2037579709);
	unk_0x054CBFE90FAA6840(1, 2017343592, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 2017343592);
	unk_0x054CBFE90FAA6840(1, -1821475077, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, -1821475077);
	unk_0x054CBFE90FAA6840(1, 1782292358, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 1782292358);
	unk_0x054CBFE90FAA6840(1, -1033021910, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, -1033021910);
	unk_0x054CBFE90FAA6840(1, -1285976420, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, -1285976420);
}

void func_614(int iParam0, var uParam1)
{
	unk_0x054CBFE90FAA6840(iParam0, joaat("COP"), *uParam1);
	unk_0x054CBFE90FAA6840(iParam0, *uParam1, joaat("COP"));
	unk_0x054CBFE90FAA6840(iParam0, joaat("army"), *uParam1);
	unk_0x054CBFE90FAA6840(iParam0, *uParam1, joaat("army"));
	unk_0x054CBFE90FAA6840(iParam0, -183807561, *uParam1);
	unk_0x054CBFE90FAA6840(iParam0, *uParam1, -183807561);
}

int func_615()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x17CC0D5008835470())
		{
			return 0;
		}
		if (unk_0x9D9BDEBCB8E7ADC5())
		{
			return 1;
		}
		if (func_583())
		{
			return 0;
		}
		if (func_581(155))
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

int func_616(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD225119541DF4E45();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_589();
			}
			else
			{
				return 0;
			}
		}
		if (!func_538())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x17CC0D5008835470())
				{
					if (!bParam2)
					{
						func_589();
					}
					else
					{
						return 0;
					}
				}
				if (func_583())
				{
					if (!bParam2)
					{
						func_589();
					}
					else
					{
						return 0;
					}
				}
				if (func_581(155))
				{
					if (!bParam2)
					{
						func_589();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE5302F426D0500D6())
			{
				if (!bParam2)
				{
					func_589();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD225119541DF4E45();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			if (!bParam2)
			{
				func_589();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE5302F426D0500D6())
	{
		if (!bParam2)
		{
			func_589();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_617(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x17CC0D5008835470())
	{
		func_589();
	}
	unk_0xEC43D0BC14815F9E(uParam0, 0, Param1.f_16);
}

int func_618(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

int func_619(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7868479D9B6694C0(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428549.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

