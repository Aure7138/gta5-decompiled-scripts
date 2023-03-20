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
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	struct<872> Local_99 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_971[32];
	int iLocal_1420 = 0;
	int iLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	int iLocal_1425 = 0;
	int iLocal_1426 = 0;
	int iLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435[4] = { 0, 0, 0, 0 };
	struct<8> Local_1440[30];
	var uLocal_1681[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1712 = 0;
	var uLocal_1713 = 0;
	int iLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	iLocal_1427 = -1;
	if (unk_0xA86CA03D9749EEB3() && func_706(unk_0x0C1D3C552325765B(), 0, 1))
	{
		func_690(ScriptParam_0);
	}
	else
	{
		func_650();
	}
	while (true)
	{
		func_649();
		if (func_641())
		{
			func_650();
		}
		Global_1750569.f_2 = Local_99.f_863;
		Global_1750569.f_3 = Local_99.f_864;
		switch (func_640(unk_0x848AF823A8EA3C62()))
		{
			case 0:
				if (func_639() == 1)
				{
					if (func_638())
					{
						func_637();
						if (func_636())
						{
							func_622(166, 1, -1, 1);
							unk_0xCF03D9C8A7F1577C(3);
							func_621(0f);
							iLocal_1426 = unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5());
							unk_0x65889F26F311FC55(unk_0xA0081090911D13E5(), iLocal_1425);
						}
						else
						{
							func_622(166, 0, -1, 1);
						}
						func_620();
						func_619();
						func_618();
						Local_971[unk_0x848AF823A8EA3C62() /*14*/] = 1;
					}
				}
				else if (func_639() == 4)
				{
					Local_971[unk_0x848AF823A8EA3C62() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_615())
				{
					Local_971[unk_0x848AF823A8EA3C62() /*14*/] = 2;
				}
				if (func_639() == 1)
				{
					func_614();
					func_594();
					func_571();
					func_283();
					func_274();
					if (func_636() || func_272())
					{
						func_135(&(Global_1332731.f_527), &Global_1332731, 24, &(Global_1332731.f_1), &(Global_1332731.f_110), -1, 0);
					}
					func_73();
				}
				else if (func_639() == 4)
				{
					Local_971[unk_0x848AF823A8EA3C62() /*14*/] = 3;
					func_70();
				}
				func_69();
				break;
			
			case 3:
				func_68(&(Local_99.f_845));
				if (func_67(&(Local_99.f_845)))
				{
					Local_971[unk_0x848AF823A8EA3C62() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_971[unk_0x848AF823A8EA3C62() /*14*/] = 4;
			
			case 4:
				func_650();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			switch (func_639())
			{
				case 0:
					func_65();
					func_64();
					if (func_25())
					{
						unk_0xB21EB307350F5CA1(&(Local_99.f_863), &(Local_99.f_864));
						Local_99.f_0 = 1;
						Local_99.f_118 = unk_0x848AF823A8EA3C62();
						Local_99.f_119 = unk_0x0C1D3C552325765B();
						func_622(166, 1, -1, 1);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_99.f_0 = 4;
					}
					else if (func_1())
					{
						Local_99.f_0 = 4;
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
	if (Global_2482149.f_4698.f_17)
	{
		Global_2482149.f_4698.f_17 = 0;
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
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 2))
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
	switch (Local_99.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
			{
				Local_99.f_117 = 2;
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 3))
			{
				Local_99.f_117 = 2;
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
	if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
	{
		if (!func_8(&(Local_99.f_849)))
		{
			func_7(&(Local_99.f_849), 0, 0);
		}
		else if (func_6(&(Local_99.f_849), 500, 0))
		{
			unk_0x88B0F0DC270164B7(&(Local_99.f_1), 6);
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

void func_7(var uParam0, bool bParam1, bool bParam2)
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

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9()
{
	if (!func_8(&(Local_99.f_847)))
	{
		func_7(&(Local_99.f_847), 0, 0);
	}
	else if (func_6(&(Local_99.f_847), func_10(), 0))
	{
		unk_0x88B0F0DC270164B7(&(Local_99.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_12896;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD9E8CA806A80203D())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_99.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_99.f_2[iVar0 /*26*/] == 0)
						{
							if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_2))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_99.f_2[iVar0 /*26*/] == 1)
						{
							Local_99.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_99.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
								{
									if (unk_0x72550A6F2BC0E12B(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar0 /*26*/].f_2)))
									{
										if (unk_0x08BA6DD398CA197C(Local_99.f_109, iVar0))
										{
											unk_0x88B0F0DC270164B7(&(Local_99.f_108), iVar0);
											Local_99.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0x08BA6DD398CA197C(Local_99.f_110, iVar0))
										{
											unk_0x88B0F0DC270164B7(&(Local_99.f_108), iVar0);
											Local_99.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0x08BA6DD398CA197C(Local_99.f_111, iVar0))
										{
											unk_0x88B0F0DC270164B7(&(Local_99.f_108), iVar0);
											Local_99.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0x08BA6DD398CA197C(Local_99.f_112, iVar0))
										{
											Local_99.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_99.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_99.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x4745637EEB85132D(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1)))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_99.f_2[iVar0 /*26*/].f_2))
								{
									Local_99.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (unk_0x08BA6DD398CA197C(Local_99.f_112, iVar0))
								{
									Local_99.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0x08BA6DD398CA197C(Local_99.f_110, iVar0))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0x08BA6DD398CA197C(Local_99.f_111, iVar0))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_99.f_2[iVar0 /*26*/].f_24)
						{
							Local_99.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_99.f_2[iVar0 /*26*/].f_25)
						{
							Local_99.f_2[iVar0 /*26*/].f_17 = 6;
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
				switch (Local_99.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_99.f_2[iVar0 /*26*/] == 0)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_99.f_2[iVar0 /*26*/] == 2)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_99.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_99.f_2[iVar0 /*26*/].f_17 == 3 || Local_99.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_99.f_2[iVar0 /*26*/].f_24)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_99.f_2[iVar0 /*26*/].f_17 == 3 || Local_99.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
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
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return !func_13(unk_0x15F0E6D5AC2852F1(uParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (unk_0x912AD5A10E7633F0(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1F1B2B6E500380C5(iParam0, 0))
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
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return unk_0xEB361B4BD195A4D3(unk_0x564EAE6038A81C07(uParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_2))
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						unk_0x88B0F0DC270164B7(&(Local_99.f_116), iVar0);
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
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
		{
			iVar1 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar0));
			if (!func_17(iVar1, 0))
			{
				unk_0x93456C539FCB41E2(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312731;
}

int func_20(int iParam0)
{
	int iVar0;
	
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_99.f_2[iParam0 /*26*/].f_3[iVar0]))
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
	if (Local_99.f_0 != 4)
	{
		iLocal_1422 = 0;
		while (iLocal_1422 < unk_0xE5697AB254094B0D())
		{
			if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iLocal_1422)))
			{
				iVar3 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iLocal_1422));
				if (!func_17(iVar3, 0))
				{
					if (func_706(iVar3, 1, 1))
					{
					}
					func_24(iLocal_1422);
					func_23(iLocal_1422);
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 2))
					{
						if (!bVar2)
						{
							if ((unk_0x08BA6DD398CA197C(Local_99.f_1, 1) || unk_0x08BA6DD398CA197C(Local_99.f_1, 3)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 5))
							{
								if (!unk_0x08BA6DD398CA197C(Local_971[iLocal_1422 /*14*/].f_1, 4))
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
			else if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 5))
			{
				if (Local_99.f_118 > -1)
				{
					if (iLocal_1422 == Local_99.f_118)
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_1), 5);
					}
				}
			}
			iLocal_1422++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_99.f_115 != iVar0)
		{
			Local_99.f_115 = iVar0;
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_1), 1);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 2))
		{
			if (!bVar2)
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_1), 2);
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
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_113, iVar0))
			{
				if (!func_8(&(Local_99.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_99.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_99.f_853[iVar0 /*2*/]), 10000, 0))
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_113), iVar0);
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
		if (!unk_0x08BA6DD398CA197C(Local_99.f_109, iVar0))
		{
			if (unk_0x08BA6DD398CA197C(Local_971[iParam0 /*14*/].f_5, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_109), iVar0);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_110, iVar0))
		{
			if (unk_0x08BA6DD398CA197C(Local_971[iParam0 /*14*/].f_2, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_110), iVar0);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_112, iVar0))
		{
			if (unk_0x08BA6DD398CA197C(Local_971[iParam0 /*14*/].f_3, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_112), iVar0);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_111, iVar0))
		{
			if (unk_0x08BA6DD398CA197C(Local_971[iParam0 /*14*/].f_4, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_111), iVar0);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_113, iVar0))
		{
			if (unk_0x08BA6DD398CA197C(Local_971[iParam0 /*14*/].f_6, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_113), iVar0);
			}
			else if (unk_0x08BA6DD398CA197C(Local_971[iParam0 /*14*/].f_7, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_113), iVar0);
			}
		}
		if (Local_99.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_99.f_2[iVar0 /*26*/].f_24)
			{
				if (unk_0x08BA6DD398CA197C(Local_971[iParam0 /*14*/].f_12, iVar0))
				{
					Local_99.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_99.f_2[iVar0 /*26*/].f_25)
			{
				if (unk_0x08BA6DD398CA197C(Local_971[iParam0 /*14*/].f_13, iVar0))
				{
					Local_99.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!unk_0x08BA6DD398CA197C(Local_99.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_2))
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
						{
							unk_0x93456C539FCB41E2(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar0 /*26*/].f_2), unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iParam0)), 1);
							unk_0x88B0F0DC270164B7(&(Local_99.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_114), iParam0);
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
	
	iVar0 = Local_99.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Var2 = { Local_99.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(Var2, 0f, 0f, 0f, 0))
		{
			if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]))
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
	
	iVar0 = Local_99.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			Var3 = { Local_99.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			uVar6 = Local_99.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(Var3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_99.f_123[iVar0 /*36*/].f_32[iVar1];
				if (unk_0xD28B39973EB5D6B4(1))
				{
					if (func_31(iVar2))
					{
						if (!unk_0x08BA6DD398CA197C(Local_99.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							unk_0x0B17BC5D018E224B(Var3, 10f, 1, 0, 0, 1);
							unk_0x88B0F0DC270164B7(&(Local_99.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, Var3, uVar6, 1, 1, 1, 0, 1, 1, 0))
						{
							unk_0x97F99A3B6E025DD2(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0xC00E0AC91B7F5055(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0xC5B26F8B749502D2(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_1425);
							unk_0x483A8C64905D06CC(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 0, 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_30(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0xD28B39973EB5D6B4(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xD74B8343DB9FEFD5(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xE044C77D0FC9DB66(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xDD3500FFBBCB3F3B(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam10);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam8)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
			else
			{
				unk_0x748B0DC6DACDF341(*uParam0, 0);
			}
		}
		unk_0x4BA36C8825F6A05D(iVar0, iParam9);
		if (bParam12)
		{
			unk_0xFC40CBF7B90CA77C(iVar0);
			unk_0xF463117DBF0348D6(iVar0, 5, 5, 1f);
		}
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
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
}

bool func_32(int iParam0)
{
	int iVar0;
	
	if (Local_99.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_99.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_99.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
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
	
	iVar1 = Local_99.f_2[iParam0 /*26*/];
	iVar2 = Local_99.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				Var3 = { Local_99.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
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
	
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_99.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_42(Local_99.f_2[iParam0 /*26*/].f_2))
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_41();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (unk_0x0C863D3ED919983C(1))
								{
									if (func_31(iVar0))
									{
										if (func_40(&(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), Local_99.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											unk_0xC5EFC3500CF4BE6F(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574282);
											unk_0xC5B26F8B749502D2(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1425);
											unk_0xC517014488E2DF36(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x8942ADC0DB9F81E4(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, 0, 1);
											unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 3, 0);
											unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 5, 1);
											unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 2, 1);
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
					if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (unk_0x0C863D3ED919983C(1))
						{
							if (func_31(iVar0))
							{
								iVar2 = Local_99.f_2[iParam0 /*26*/].f_22;
								Var5 = { Local_99.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								uVar8 = Local_99.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(Var5, 0f, 0f, 0f, 0))
								{
									if (func_39(&(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, Var5, uVar8, 1, 1, 1))
									{
										unk_0xC5EFC3500CF4BE6F(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574282);
										unk_0xC5B26F8B749502D2(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1425);
										unk_0x8942ADC0DB9F81E4(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, 0, 1);
										unk_0xECD905C06E682B6D(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 42, 1);
										unk_0xA951969D2E242071(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 43, 1);
										unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 44, 1);
										unk_0x5D68D7AA6F7D4144(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x728A92BBF4806518(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, 0, 0);
										unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 132, 1);
										iVar3 = func_38();
										unk_0x63F91492C8440A2E(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										uVar4 = func_37();
										unk_0x9C5803DED463887E(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), uVar4);
										unk_0x76A0FFACB5B58711(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), func_36());
										unk_0xDD4CB05DA9FC27C9(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 281, 1);
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
	return unk_0xF2DB717A73826179(Global_262145.f_12904);
}

int func_37()
{
	return 200;
}

var func_38()
{
	return Global_262145.f_12903;
}

int func_39(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x0C863D3ED919983C(1))
	{
		return 0;
	}
	iVar0 = unk_0xF8418B3B87CFCCBF(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x9ED2AEF3CEBC2436(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam9);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
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

int func_40(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x0C863D3ED919983C(1))
	{
		return 0;
	}
	if (!unk_0x0E091C9F3918F674(uParam1))
	{
		return 0;
	}
	if (!unk_0x1F1B2B6E500380C5(unk_0x15F0E6D5AC2852F1(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9ED2AEF3CEBC2436(unk_0x667A2CFA1914073C(unk_0x15F0E6D5AC2852F1(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(unk_0x564EAE6038A81C07(*uParam0), iParam7);
		if (unk_0x6B8DF4084A1CD2DC(unk_0x564EAE6038A81C07(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
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
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		unk_0xDC64FA270C733B30(uParam0);
		return unk_0xB480350E4250D92A(uParam0);
	}
	return 0;
}

bool func_43(int iParam0)
{
	return (Local_99.f_2[iParam0 /*26*/] == 0 || Local_99.f_2[iParam0 /*26*/] == 2);
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
	switch (Local_99.f_2[iParam0 /*26*/])
	{
		case 0:
			if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_1))
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
	
	switch (Local_99.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_99.f_2[iParam0 /*26*/].f_11;
				if (unk_0xD28B39973EB5D6B4(1))
				{
					if (func_31(iVar0))
					{
						if (func_28(Local_99.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_99.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_99.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_99.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_99.f_2[iParam0 /*26*/].f_2), iVar0, Local_99.f_2[iParam0 /*26*/].f_13, Local_99.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0))
							{
								unk_0xC00E0AC91B7F5055(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x97F99A3B6E025DD2(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x6F40E1EE32FE6A5E(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_2), 1, 1, 0);
								unk_0xC5B26F8B749502D2(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_2), 1, iLocal_1425);
								unk_0x0DD72E0CB1FCF511(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x483A8C64905D06CC(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_2), 0, 0);
								unk_0xEDA527A4943E849D(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x30AACBA8A7A124E3(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xD46040B5877E6862(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x39C4DA429D9174C5(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_2))
			{
				if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_1))
				{
					if (unk_0x0C863D3ED919983C(1))
					{
						iVar1 = Local_99.f_2[iParam0 /*26*/].f_12;
						if (func_31(iVar1))
						{
							if (func_40(&(Local_99.f_2[iParam0 /*26*/].f_1), Local_99.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								unk_0xC5EFC3500CF4BE6F(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), Global_1574282);
								unk_0xC5B26F8B749502D2(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1, iLocal_1425);
								unk_0xC517014488E2DF36(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x88B0F0DC270164B7(&(Local_99.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x0C863D3ED919983C(1))
				{
					iVar1 = Local_99.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_99.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_99.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_99.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_99.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_99.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_99.f_2[iParam0 /*26*/].f_13, Local_99.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0xC5EFC3500CF4BE6F(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), Global_1574282);
								unk_0xC5B26F8B749502D2(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1, iLocal_1425);
								unk_0xC517014488E2DF36(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x88B0F0DC270164B7(&(Local_99.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x0C863D3ED919983C(1))
				{
					iVar1 = Local_99.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_99.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_99.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_99.f_2[iParam0 /*26*/].f_16 = uVar5;
								Local_99.f_2[iParam0 /*26*/].f_22 = uVar6;
								func_51(Var2);
							}
						}
						if (!func_28(Local_99.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_99.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_99.f_2[iParam0 /*26*/].f_13, Local_99.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0xC5EFC3500CF4BE6F(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), Global_1574282);
								unk_0xC5B26F8B749502D2(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1, iLocal_1425);
								unk_0xC517014488E2DF36(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xECD905C06E682B6D(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 42, 1);
								unk_0xA951969D2E242071(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 11, 1);
								unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 44, 1);
								unk_0x5D68D7AA6F7D4144(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x8942ADC0DB9F81E4(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, 0, 1);
								uVar9 = func_50(iParam0);
								unk_0x728A92BBF4806518(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), Local_99.f_2[iParam0 /*26*/].f_13, uVar9, 0, 0);
								unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 132, 1);
								unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 281, 1);
								iVar7 = func_49();
								unk_0x63F91492C8440A2E(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), iVar7);
								unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), iVar7);
								uVar8 = func_48();
								unk_0x9C5803DED463887E(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), uVar8);
								unk_0x76A0FFACB5B58711(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), func_47());
								unk_0xEDA527A4943E849D(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x88B0F0DC270164B7(&(Local_99.f_107), iParam0);
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
	return unk_0xF2DB717A73826179(Global_262145.f_12902);
}

int func_48()
{
	return 100;
}

var func_49()
{
	return Global_262145.f_12901;
}

float func_50(int iParam0)
{
	if (func_28(Local_99.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
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
			if (!unk_0x08BA6DD398CA197C(Local_99.f_871, iVar1))
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
		Local_99.f_865[iVar0] = unk_0x6A173E5A316F6DE8(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		unk_0x88B0F0DC270164B7(&(Local_99.f_871), iVar0);
	}
	if (func_28(Param0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_99.f_865[iVar0] = unk_0x6A173E5A316F6DE8(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		unk_0x88B0F0DC270164B7(&(Local_99.f_871), iVar0);
	}
	if (func_28(Param0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_99.f_865[iVar0] = unk_0x6A173E5A316F6DE8(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		unk_0x88B0F0DC270164B7(&(Local_99.f_871), iVar0);
	}
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_99.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = unk_0xB5BF1B58C833F7A9(0, Local_99.f_122);
			if (!func_28(Local_99.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_99.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_99.f_123[iVar0 /*36*/] };
					*uParam2 = Local_99.f_123[iVar0 /*36*/].f_3;
					Local_99.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = unk_0xB5BF1B58C833F7A9(0, Local_99.f_122);
			if (!func_28(Local_99.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_99.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_99.f_123[iVar0 /*36*/] };
					*uParam2 = Local_99.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_99.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = unk_0xB5BF1B58C833F7A9(0, 10);
			if (!func_28(Local_99.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_99.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_99.f_484[iVar0 /*36*/] };
					*uParam2 = Local_99.f_484[iVar0 /*36*/].f_3;
					Local_99.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_53(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_57(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
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
	Global_2404993.f_2++;
	return 1;
}

int func_54(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_706(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x999A157665D69393(func_56(unk_0x0C1D3C552325765B()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_706(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if ((func_55(iVar1) || !bParam10) && !Global_2421327[iVar1 /*353*/].f_258)
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
								if (unk_0x999A157665D69393(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (unk_0x999A157665D69393(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_55(int iParam0)
{
	if (unk_0x9125ADC25E13C689(unk_0x21F191D9AFF98B5E(iParam0)) || Global_2421327[iParam0 /*353*/].f_244)
	{
		return 1;
	}
	return 0;
}

Vector3 func_56(int iParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

int func_57(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam8 == 0)
		{
			if (func_706(iVar1, bParam4, bParam5))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && uParam9) && bParam6) && func_58(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (unk_0x999A157665D69393(func_56(iVar1), Param0, 1) < fParam3)
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
	if (func_63(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	Global_2471194 = { func_62(iParam0) };
	if (unk_0x74A87F4BE7FE0199(&Global_2471194))
	{
		return 1;
	}
	if (func_59(unk_0x0C1D3C552325765B(), iParam0))
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
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_60();
}

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

int func_63(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_62(iParam0) };
		Global_2471207 = { func_62(iParam1) };
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

void func_64()
{
	Local_99.f_2[0 /*26*/] = 2;
	Local_99.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_99.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_99.f_2[1 /*26*/] = 2;
	Local_99.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_99.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_99.f_2[2 /*26*/] = 0;
	Local_99.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_99.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_99.f_2[3 /*26*/] = 0;
	Local_99.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_99.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_65()
{
	func_66();
	if (Local_99.f_122 == 0)
	{
		if (Local_99.f_121 == 0)
		{
			Local_99.f_122 = 10;
		}
		else
		{
			Local_99.f_122 = 9;
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
	{
		return;
	}
	switch (Local_99.f_121)
	{
		case 0:
			Local_99.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_99.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_99.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_99.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_99.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_99.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_99.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_99.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_99.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_99.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_99.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_99.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_99.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_99.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_99.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_99.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_99.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_99.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_99.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_99.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_99.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_99.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_99.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_99.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_99.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_99.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_99.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_99.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_99.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_99.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_99.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_99.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_99.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_99.f_123[6 /*36*/].f_14[2] = 180f;
			Local_99.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_99.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_99.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_99.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_99.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_99.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_99.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_99.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_99.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_99.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_99.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_99.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_99.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_99.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_99.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_99.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_99.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_99.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_99.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_99.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_99.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_99.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_99.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_99.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_99.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_99.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_99.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_99.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_99.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_99.f_484[0 /*36*/].f_3 = 179.583f;
			Local_99.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_99.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_99.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_99.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_99.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_99.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_99.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_99.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_99.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_99.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_99.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_99.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_99.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_99.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_99.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_99.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_99.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_99.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_99.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_99.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_99.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_99.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_99.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_99.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_99.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_99.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_99.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_99.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_99.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_99.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_99.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_99.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_99.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_99.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_99.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_99.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_99.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_99.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_99.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_99.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_99.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_99.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_99.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_99.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_99.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_99.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_99.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_99.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_99.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_99.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_99.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_99.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_99.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_99.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_99.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_99.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_99.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_99.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_99.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_99.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_99.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_99.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_99.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_99.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_99.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_99.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_99.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_99.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_99.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_99.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_99.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_99.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_99.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_99.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_99.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_99.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_99.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_99.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_99.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_99.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_99.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_99.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_99.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_99.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_99.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_99.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_99.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_99.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_99.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	unk_0x88B0F0DC270164B7(&(Local_99.f_1), 4);
}

var func_66()
{
	if (Local_99.f_121 != -1)
	{
		return Local_99.f_121;
	}
	if (Local_99.f_121 == -1)
	{
		if (unk_0x5B1A5C6975097B83(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0)) == joaat("City"))
		{
			Local_99.f_121 = 0;
		}
		else
		{
			Local_99.f_121 = 1;
		}
	}
	return Local_99.f_121;
}

int func_67(var uParam0)
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

void func_68(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xD9E8CA806A80203D())
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
	
	if (Local_99.f_119 != -1)
	{
		iVar0 = unk_0x81C85E54237F8A2E(Local_99.f_119);
	}
	iVar1 = 0;
	while (iVar1 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
		{
			iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_60())
				{
					if (iVar2 == iVar0 || func_71(iVar2, iVar0, 1))
					{
						unk_0xFDDE2C1A05E64390(5, Global_1574240[iVar1], Global_1574282);
						unk_0xFDDE2C1A05E64390(5, Global_1574282, Global_1574240[iVar1]);
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
		if (Global_1614576[iParam0 /*324*/].f_10 != func_60())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10;
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
			if (Global_1614576[iParam0 /*324*/].f_10 != func_60())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
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
	
	if (func_636())
	{
		return;
	}
	iVar3 = -1;
	fVar4 = func_134(&iVar3, 0);
	if (fVar4 <= 1600f)
	{
		if (!func_133(unk_0x0C1D3C552325765B()))
		{
			func_123(0);
			unk_0x83CDA1F1ADCD9582(0);
			unk_0x88B0F0DC270164B7(&uLocal_1420, 18);
		}
	}
	if (Local_99.f_119 > -1)
	{
		if (iVar3 > -1)
		{
			Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*26*/].f_1), 0) };
		}
	}
	if (!func_28(Var0, 0f, 0f, 0f, 0))
	{
		func_74(166, Var0, &uLocal_1713, 1140457472, 1144750080, 0);
	}
}

void func_74(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_122(unk_0x0C1D3C552325765B()) && !func_121(unk_0x0C1D3C552325765B())) && !unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 8)) && (func_120(unk_0x0C1D3C552325765B()) || func_119(unk_0x0C1D3C552325765B())))
	{
		return;
	}
	Global_1750560 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Param1);
	func_115(iParam0, fVar0);
	if (unk_0x84C71F36E7D97756() && unk_0xAD490CD811854704() == 15)
	{
		if (func_114(unk_0x0C1D3C552325765B()) || func_112(unk_0x0C1D3C552325765B()))
		{
			if (!unk_0x7645014AAA2B6DDF(1344549371))
			{
				unk_0xB3D65EB851744F28(1344549371);
			}
		}
		else if (unk_0x7645014AAA2B6DDF(1344549371))
		{
			unk_0x2099DD912801B1F4(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_111(unk_0x0C1D3C552325765B(), 21))
		{
			func_110(Param1, 1, 0);
		}
		if (!*uParam4 && func_706(unk_0x0C1D3C552325765B(), 1, 1))
		{
			*uParam4 = 1;
			if (func_109(iParam0))
			{
				unk_0xACD6D334FD769B0C(func_108(iParam0));
				if (func_107(iParam0, -1))
				{
					unk_0xCF03D9C8A7F1577C(0);
					if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
					{
						unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 1);
						unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 1);
					}
					unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 0);
				}
			}
			if (func_106(iParam0))
			{
				fVar1 = func_105(iParam0);
				if (fVar1 != 1f)
				{
					func_621(fVar1);
					unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_104(iParam0) && func_114(unk_0x0C1D3C552325765B()))
				{
					func_102(1);
					func_101(2);
				}
			}
			func_100(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_99(unk_0x0C1D3C552325765B(), 19))
			{
				func_98(19);
			}
		}
		if (*uParam4 && func_706(unk_0x0C1D3C552325765B(), 1, 1))
		{
			*uParam4 = 0;
			if (func_109(iParam0))
			{
				if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0))
				{
					unk_0xACD6D334FD769B0C(1f);
					unk_0xCF03D9C8A7F1577C(5);
					unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 0);
				}
			}
			if (func_106(iParam0))
			{
				func_97();
				unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 1);
			}
			if (iParam7 && !func_122(unk_0x0C1D3C552325765B()))
			{
				if (func_95(unk_0x0C1D3C552325765B()) != 152)
				{
					func_77();
				}
			}
			if (func_76(2))
			{
				func_102(0);
				func_75(2);
			}
		}
	}
}

void func_75(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_22), iParam0);
}

bool func_76(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_22, iParam0);
}

void func_77()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_24), &Global_2408520, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_26), &Global_2408522, 17);
	func_93();
	func_80(1, 1);
	func_78();
}

void func_78()
{
	func_79(0, 0);
}

void func_79(int iParam0, int iParam1)
{
	Global_2404993.f_22 = iParam0;
	Global_2404993.f_23 = iParam1;
}

void func_80(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_43), &Global_2408539, 310);
	}
	else
	{
		Global_2404993.f_43 = { Global_2408539 };
		Global_2404993.f_43.f_49 = { Global_2408539.f_49 };
		Global_2404993.f_43.f_52 = Global_2408539.f_52;
		Global_2404993.f_43.f_53 = Global_2408539.f_53;
	}
	if (bParam0)
	{
		func_92();
	}
	func_83(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_82(0);
	func_81();
}

void func_81()
{
	struct<4> Var0;
	
	if (Global_2404993.f_475.f_1 == unk_0xEAE20F1125B83888())
	{
		Global_2404993.f_475 = { Var0 };
	}
}

void func_82(bool bParam0)
{
	if (bParam0)
	{
		Global_2404993.f_648 = 0;
	}
	else
	{
		Global_2404993.f_648 = 1;
	}
}

void func_83(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_91())
		{
			func_90();
		}
		Global_2404993.f_649.f_504 = iParam1;
		Global_2404993.f_649.f_505 = iParam2;
		Global_2404993.f_649.f_506 = iParam10;
		func_88();
		func_87(8, 0, 0);
		Global_2404993.f_649.f_507 = iParam11;
		Global_2404993.f_649.f_510 = iParam3;
		Global_2404993.f_649.f_511 = iParam4;
		Global_2404993.f_649.f_508 = iParam5;
		Global_2404993.f_649.f_509 = iParam6;
		Global_2404993.f_649.f_512 = iParam7;
		Global_2404993.f_649.f_513 = iParam8;
		Global_2404993.f_649.f_514 = iParam9;
		Global_2404993.f_1682 = 1;
	}
	else
	{
		func_84();
	}
}

void func_84()
{
	if (func_91() && !func_86())
	{
		func_90();
	}
	if (func_86())
	{
		func_85();
	}
	else
	{
		func_88();
		func_87(0, 0, 0);
		Global_2404993.f_1682 = 0;
		Global_2404993.f_1681 = 0;
	}
}

void func_85()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_649), &(Global_2404993.f_1165), 516);
	Global_2404993.f_475 = { Global_2404993.f_479 };
	if (unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		Global_2404993.f_1681 = 0;
	}
}

int func_86()
{
	if ((Global_2404993.f_1681 && !unk_0xEAE20F1125B83888() == Global_2404993.f_1165.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_1165.f_515))
	{
		return 1;
	}
	return 0;
}

void func_87(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411307 = 0;
	}
	Global_2404993.f_475 = iParam0;
	Global_2404993.f_475.f_1 = unk_0xEAE20F1125B83888();
	Global_2404993.f_475.f_2 = iParam1;
	Global_2404993.f_475.f_3 = iParam2;
}

void func_88()
{
	if (func_91() && !func_86())
	{
		func_90();
	}
	func_89();
	Global_2404993.f_649 = 0;
}

void func_89()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404993.f_649.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_90()
{
	if (func_86())
	{
		if (Global_2404993.f_649.f_515 == Global_2404993.f_1165.f_515)
		{
			return;
		}
	}
	if (!unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_1165), &(Global_2404993.f_649), 516);
		Global_2404993.f_479 = { Global_2404993.f_475 };
		Global_2404993.f_1681 = 1;
	}
}

int func_91()
{
	if ((Global_2404993.f_1682 && !unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_649.f_515))
	{
		return 1;
	}
	return 0;
}

void func_92()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_353), &Global_2408849, 121);
}

void func_93()
{
	func_94();
	Global_2404993.f_1813 = 0;
}

void func_94()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404993.f_1814[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_95(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

int func_96(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

void func_97()
{
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && Global_2482149.f_4693 < 1f)
		{
			return;
		}
	}
	Global_2482149.f_4694 = -1;
	Global_2482149.f_4693 = 1f;
}

void func_98(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

bool func_99(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
}

void func_100(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

void func_101(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_22), iParam0);
}

void func_102(int iParam0)
{
	if (func_103() && iParam0)
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

int func_103()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

float func_105(int iParam0)
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
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
			return 1;
		
		default:
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	switch (iParam0)
	{
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
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_108(int iParam0)
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
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
			return 1;
		
		default:
	}
	return 0;
}

void func_110(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404993.f_43.f_49 = { Param0 };
	Global_2404993.f_43.f_52 = iParam3;
	Global_2404993.f_43.f_53 = iParam4;
}

bool func_111(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

int func_112(int iParam0)
{
	if (func_113(iParam0))
	{
		if (func_114(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_113(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_60())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_99(iParam0, 9);
	}
	return 0;
}

void func_115(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_118(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_116();
	}
}

void func_116()
{
	if (!func_117(unk_0x0C1D3C552325765B()))
	{
		func_100(25);
	}
}

bool func_117(int iParam0)
{
	return func_99(iParam0, 25);
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10954;
		
		case 142:
			return Global_262145.f_10942;
		
		case 157:
			return Global_262145.f_10909;
		
		case 159:
			return Global_262145.f_10892;
		
		case 162:
			return Global_262145.f_11003;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 7);
	}
	return 0;
}

bool func_121(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 2);
}

int func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/] != -1;
	}
	return 0;
}

void func_123(int iParam0)
{
	if (!func_133(unk_0x0C1D3C552325765B()))
	{
		if (iParam0 || func_124(unk_0x0C1D3C552325765B()) != 0)
		{
			func_100(20);
			if (func_122(unk_0x0C1D3C552325765B()))
			{
				if (!unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 8))
				{
					unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 8);
				}
			}
		}
	}
}

int func_124(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_122(iParam0) && !func_121(iParam0)) && !unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8));
	bVar2 = func_133(iParam0);
	uVar3 = func_132();
	uVar4 = func_126();
	if ((bVar1 && (func_120(iParam0) || func_119(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_114(iParam0)) && !func_125(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2482149.f_4698.f_26 != iVar0)
	{
		Global_2482149.f_4698.f_26 = iVar0;
	}
	return iVar0;
}

bool func_125(int iParam0)
{
	return func_99(iParam0, 19);
}

int func_126()
{
	if ((func_99(unk_0x0C1D3C552325765B(), 21) || func_99(unk_0x0C1D3C552325765B(), 22)) || func_129())
	{
		return 1;
	}
	if (func_127())
	{
		func_100(22);
		return 1;
	}
	return 0;
}

int func_127()
{
	if (func_96(unk_0x0C1D3C552325765B(), 0))
	{
		if ((func_132() && !func_128()) || func_111(unk_0x0C1D3C552325765B(), 21))
		{
			if (!func_99(unk_0x0C1D3C552325765B(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_98(27);
		}
	}
	return 0;
}

bool func_128()
{
	return Global_1312412.f_1;
}

bool func_129()
{
	return func_130(286, -1);
}

int func_130(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2506009[iParam0 /*3*/][func_131(iParam1)];
	if (unk_0x80FB5712A7C4B4B8(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

bool func_132()
{
	return Global_1312412;
}

bool func_133(int iParam0)
{
	return func_99(iParam0, 20);
}

float func_134(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	Var3 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_99.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_99.f_2[iVar2 /*26*/].f_1))
				{
					Var6 = { unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar2 /*26*/].f_1), 1) };
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

void func_135(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_271(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_269() || iParam2 == 24)
	{
		if (func_214(uParam1, iParam2, uParam3, Global_1573696, 0, func_267()))
		{
			func_213(1);
			if ((!func_211() && !func_209()) || unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
			{
				if (func_208())
				{
					func_205();
				}
				else
				{
					unk_0xCF4C2CE3511D92EA(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_204(1);
						Global_1573696 = 0;
						iVar54 = -1;
						if (Global_1573844 != 1)
						{
							func_203(uParam1);
							if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
							{
								unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
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
								if (func_706(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
									if (!func_17(iVar35, 0))
									{
										if ((unk_0x0C67E8DCA323B26C(iVar35, unk_0x0C1D3C552325765B()) || Global_2421327[iVar35 /*353*/].f_235 != -1) || func_202(iVar35))
										{
											iVar44 = iVar35;
											if (func_113(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_201(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_198(unk_0x0C1D3C552325765B(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_196())
							{
								if (func_706(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
								}
								else
								{
									iVar35 = func_60();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_195(iVar35) && func_190(iVar35, iParam2)) && func_706(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
								Var38 = { func_185(iVar35) };
								if (iVar35 == unk_0x0C1D3C552325765B())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xCF66111B26743875(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
								iVar37 = func_179(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
								}
								Global_1573696++;
								if ((uParam0[iVar52 /*49*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*49*/])->f_22;
								}
								if ((uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*49*/])->f_31;
								}
								if ((uParam0[iVar52 /*49*/])->f_48 != -1)
								{
									iVar47 = (uParam0[iVar52 /*49*/])->f_48;
								}
								iVar43 = (uParam0[iVar52 /*49*/])->f_9;
								if (((uParam0[iVar52 /*49*/])->f_9 != -1 || (uParam0[iVar52 /*49*/])->f_22 != -1f) || (uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									if (!func_196())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_174(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_173(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*49*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_168(iVar35, 0);
								if (bVar34)
								{
									if (func_167(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_166(iParam5))
								{
									func_165(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_165(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0x88B0F0DC270164B7(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							if (func_706(iVar35, 0, 1) && !unk_0x08BA6DD398CA197C(iVar49, iVar35))
							{
								iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							}
							else
							{
								iVar35 = func_60();
							}
							if (func_195(iVar35))
							{
								if (func_706(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
									Var38 = { func_185(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
									iVar37 = func_179(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
									}
									Global_1573696++;
									iVar51 = func_168(iVar35, 1);
									if (bVar34)
									{
										if (func_167(iVar35, 1))
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
									func_149(iVar35, unk_0xCF66111B26743875(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							func_146(uParam3, uParam1);
						}
						func_145(&(uParam3->f_21));
						func_144();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
						{
							func_143(uParam3, uParam1);
							func_142(uParam1, 0, 1);
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 7);
						}
						func_143(uParam3, uParam1);
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 11);
						}
						if (func_138(uParam3))
						{
							Global_1573844 = 1;
						}
						func_136(uParam3);
						if (Global_1573844 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573844 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x1E3F61C2C1E29520(*uParam1))
					{
						unk_0x1373E5003F76E429(7);
						unk_0x04F50370A3D0809C(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x1373E5003F76E429(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_144();
			func_204(0);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
			}
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 10))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x9AA8EEC80385B281();
}

void func_136(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_7(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_145(&(uParam0->f_21));
		func_137(0);
	}
}

void func_137(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573844 != 2)
		{
			Global_1573844 = 2;
		}
	}
	else
	{
		switch (Global_1573844)
		{
			case 0:
				Global_1573844 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_138(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x81C85E54237F8A2E(uParam0->f_37);
	if (iVar15 != func_60() && func_706(iVar15, 0, 1))
	{
		Var2 = { func_62(iVar15) };
		iVar1 = func_141(uParam0, uParam0->f_37);
		if (func_140(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_139(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_139(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_139(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_139(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0xBB824ACC814BB18A(&Var2))
						{
							iVar16 = 1;
							func_139(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_139(uParam0, iVar0, 0);
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

void func_139(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_140(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD478D67F6AAE84CA(&uParam0, 13);
}

var func_141(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_142(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xB9D4F4DE7E7EC038(*uParam0, "COLLAPSE"))
	{
		unk_0x5CC02BB872FEF340(iParam1);
		unk_0xE73340DA551C95E1();
	}
	if (iParam2 == 1)
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE73340DA551C95E1();
		}
	}
}

void func_143(var uParam0, var uParam1)
{
	if (!unk_0x08BA6DD398CA197C(uParam0->f_33, 10))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam1, "SET_HIGHLIGHT");
		unk_0x7CBFB9F4AF33C67E(uParam0->f_35);
		unk_0xE73340DA551C95E1();
		unk_0x88B0F0DC270164B7(&(uParam0->f_33), 10);
	}
}

void func_144()
{
	if (Global_1573844 != 0)
	{
		Global_1573844 = 0;
	}
}

void func_145(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_146(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar0);
		if (iVar2 != func_60())
		{
			if (func_706(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_148(uParam0->f_38[iVar0 /*2*/], 0);
					func_147(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1588660[iVar0 /*532*/].f_201.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_147(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_ICON"))
		{
			unk_0x7CBFB9F4AF33C67E(iParam1);
			unk_0x7CBFB9F4AF33C67E(iParam2);
			if (iParam2 == 65)
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

int func_148(int iParam0, bool bParam1)
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

void func_149(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_164() && iParam4 < func_163())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1573698)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xB9D4F4DE7E7EC038(*uParam2, sVar1))
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_162("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(iParam10);
			}
			func_162(sParam1);
			unk_0x7CBFB9F4AF33C67E(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_162("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(65);
			}
			unk_0x7CBFB9F4AF33C67E(-1);
			func_162("");
			if (uParam3->f_108 == 6)
			{
				func_162("");
			}
			else
			{
				func_162(&sParam5);
			}
			func_154(uParam3, iParam0);
			unk_0x256E5E9EBF5975E9(sParam9);
			unk_0x256E5E9EBF5975E9(sParam9);
			if (func_153(uParam3))
			{
				func_152("DPAD_FRIEND");
			}
			else if (func_151(uParam3))
			{
				func_152("DPAD_FRIEND");
			}
			else if (func_150(uParam3))
			{
				func_152("DPAD_CREW");
			}
			else
			{
				func_152("");
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

bool func_150(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 6);
}

bool func_151(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 5);
}

void func_152(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

int func_153(var uParam0)
{
	if (func_151(uParam0) && func_150(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_154(var uParam0, int iParam1)
{
	if (func_161(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(121);
	}
	else if (func_155(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(122);
	}
	else
	{
		unk_0x5CC02BB872FEF340(uParam0->f_36);
	}
}

int func_155(int iParam0)
{
	if ((func_706(iParam0, 0, 1) && func_159()) && func_156(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_156(int iParam0, bool bParam1)
{
	return func_157(iParam0, bParam1, 1);
}

int func_157(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_158(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_60() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0, int iParam1)
{
	if (iParam0 != func_60())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_60())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_159()
{
	if (func_122(unk_0x0C1D3C552325765B()) || func_160())
	{
		return 0;
	}
	return 1;
}

int func_160()
{
	switch (func_95(unk_0x0C1D3C552325765B()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
			return 1;
		
		default:
	}
	return 0;
}

int func_161(int iParam0)
{
	if ((func_706(iParam0, 0, 1) && func_159()) && func_158(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_162(char* sParam0)
{
	unk_0x481EA0389B099920(sParam0);
}

int func_163()
{
	int iVar0;
	
	if (Global_1573698)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_164()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573698)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_165(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_164() && iParam3 < func_163())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573698)
		{
			iVar0 += 16;
		}
		if (bParam20)
		{
			iVar0 = iParam19;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x1E3F61C2C1E29520(*uParam1))
		{
			if (unk_0xB9D4F4DE7E7EC038(*uParam1, sVar1))
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
				if (unk_0x08BA6DD398CA197C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_162("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					func_152(sParam16);
				}
				else
				{
					func_162(&(uParam2->f_1));
				}
				unk_0x7CBFB9F4AF33C67E(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_162("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(65);
				}
				if (iParam12 == 1)
				{
					unk_0x7CBFB9F4AF33C67E(iVar0);
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(-1);
				}
				if (func_196())
				{
					func_162("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 5 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x509383441597090D(sParam16)) && !unk_0x509383441597090D(sParam17))
				{
					unk_0x709662CF2BD061A4("FM_AE_TWO_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0xBDE6EEC5F6BDC060(sParam17);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 8 && !unk_0x509383441597090D(&(uParam2->f_104)))
				{
					unk_0x709662CF2BD061A4("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x63A04EB63F481124(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x3F9D1B882EC0B8AF(iParam10);
					}
					unk_0xBDE6EEC5F6BDC060(&(uParam2->f_104));
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x709662CF2BD061A4("FM_AE_CASH");
					unk_0xBEC4DE8C7D72AD8A(iParam10, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x509383441597090D(&(uParam2->f_104)))
					{
						func_152(&(uParam2->f_104));
					}
					else
					{
						func_162("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x709662CF2BD061A4("STRING");
					unk_0x37F0707A16E921F7(iParam14, 6);
					unk_0x1E77BE8F4283FA05();
				}
				else if (fParam13 != -1f)
				{
					unk_0x709662CF2BD061A4("NUMBER");
					unk_0x63A04EB63F481124(fParam13, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam10 != -1)
				{
					unk_0x7CBFB9F4AF33C67E(iParam10);
				}
				else
				{
					func_162("");
				}
				if (uParam2->f_108 == 6)
				{
					func_162("");
				}
				else
				{
					func_162(&sParam4);
				}
				func_154(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x509383441597090D(sParam8))
				{
					func_162("");
					func_162("");
				}
				else
				{
					unk_0x256E5E9EBF5975E9(sParam8);
					unk_0x256E5E9EBF5975E9(sParam8);
				}
				if (func_153(uParam2))
				{
					func_152("DPAD_FRIEND");
				}
				else if (func_151(uParam2))
				{
					func_152("DPAD_FRIEND");
				}
				else if (func_150(uParam2))
				{
					func_152("DPAD_CREW");
				}
				else
				{
					func_152("");
				}
				unk_0xE73340DA551C95E1();
			}
		}
	}
}

int func_166(int iParam0)
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

bool func_167(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_113(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_60();
}

int func_168(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_122(iParam0)) && !func_133(iParam0))
	{
		iVar0 = func_172();
	}
	iVar1 = func_171(iParam0);
	if (!iVar1 == -1)
	{
		return func_169(iVar1);
	}
	return iVar0;
}

int func_169(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_170(iParam0);
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

var func_170(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_171(int iParam0)
{
	if (!iParam0 == func_60())
	{
		if (func_167(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_61(iParam0)];
		}
	}
	return -1;
}

int func_172()
{
	return 21;
}

char* func_173(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xAE52C62FC0BBB14E())
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
			if (unk_0xAE52C62FC0BBB14E())
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

int func_174(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_178(iParam3))
	{
		*fParam1 = (func_175(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_166(iParam3))
	{
		*fParam1 = (func_175(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_175(int iParam0, int iParam1)
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
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_177(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_176(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_176(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_177(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_178(int iParam0)
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

int func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = func_182(iParam0);
	if (iVar0 == -1)
	{
		func_180(iParam0, 1);
		return 0;
	}
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
}

void func_180(int iParam0, bool bParam1)
{
	if (!func_706(iParam0, 0, 1))
	{
		return;
	}
	if (func_182(iParam0) != -1)
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
	if (func_181(iParam0))
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

int func_181(int iParam0)
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

int func_182(int iParam0)
{
	int iVar0;
	
	if (!func_706(iParam0, 0, 1))
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
			func_183(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_183(int iParam0)
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
	func_184(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_184(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_60();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

struct<4> func_185(int iParam0)
{
	struct<4> Var0;
	
	if (func_706(iParam0, 0, 1))
	{
		Global_2471194 = { func_62(iParam0) };
		if (unk_0x15B0CAB107CFCDE1())
		{
			if (func_140(Global_2471194))
			{
				if (!unk_0x6F4E1F8D329BC4EC(&Global_2471194))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xED4DB0F2EFE02B37(0))
		{
			return Var0;
		}
		if (func_189(&Global_2471194))
		{
			Global_2471124 = { func_187(iParam0) };
			func_186(&Global_2471124, &Var0);
		}
	}
	return Var0;
}

void func_186(var uParam0, var uParam1)
{
	unk_0x05F539CDDCE2A2C6(uParam0, 35, uParam1);
}

struct<35> func_187(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_188(iParam0))
	{
		return Global_1315261[unk_0x0C1D3C552325765B() /*35*/];
	}
	Var0 = { func_62(iParam0) };
	unk_0x0ADE2D0C6811DC70(&Var13, 35, &Var0);
	return Var13;
}

int func_188(int iParam0)
{
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		return 1;
	}
	return 0;
}

int func_189(var uParam0)
{
	if (unk_0xA264814CF83E3B89())
	{
		if (unk_0x46E4D0D0168391A1() && unk_0xC1B41A655437AD93(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_121(iParam0) || func_194(iParam0)) || func_193(iParam0))
		{
			return 0;
		}
	}
	if (!func_192(iParam0))
	{
		return 0;
	}
	if ((!func_191(iParam0) && Global_2421327[iParam0 /*353*/].f_235 == -1) && !func_202(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_191(int iParam0)
{
	if (func_706(iParam0, 0, 1))
	{
		if (func_706(unk_0x0C1D3C552325765B(), 0, 1))
		{
			if (unk_0x0C67E8DCA323B26C(iParam0, unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_192(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 22);
}

bool func_193(int iParam0)
{
	if (func_121(iParam0))
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8);
}

int func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10) || unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 9));
	}
	return 0;
}

int func_195(int iParam0)
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
		if (unk_0x08BA6DD398CA197C(Global_1588660[iVar0 /*532*/].f_137, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_196()
{
	switch (func_95(unk_0x0C1D3C552325765B()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_197(unk_0x0C1D3C552325765B()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_133(unk_0x0C1D3C552325765B()))
	{
		switch (func_95(unk_0x0C1D3C552325765B()))
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

int func_197(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/];
	}
	return -1;
}

int func_198(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 && func_199(Global_1614576[iParam0 /*324*/].f_10.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1)
	{
		if (func_199(Global_1614576[iParam0 /*324*/].f_10.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_199(int iParam0)
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
	return func_200(iParam0, 0);
	return 0;
}

int func_200(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_201(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_706(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((unk_0x0C67E8DCA323B26C(iVar1, unk_0x0C1D3C552325765B()) || Global_2421327[iVar1 /*353*/].f_235 != -1) || func_202(iVar1))
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

bool func_202(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_186 != 0;
}

void func_203(var uParam0)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7CBFB9F4AF33C67E(0);
		unk_0xE73340DA551C95E1();
	}
}

void func_204(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1342780.f_2 == 0)
		{
			Global_1342780.f_2 = 1;
		}
	}
	else if (Global_1342780.f_2 == 1)
	{
		Global_1342780.f_2 = 0;
	}
}

void func_205()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
	{
		if (func_207())
		{
			func_206();
		}
	}
}

void func_206()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 != 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_207()
{
	return Global_2432628.f_2198[0 /*72*/].f_1 != 0;
}

int func_208()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0) && func_207())
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1) && func_207())
	{
		return 1;
	}
	return 0;
}

int func_209()
{
	if (func_207())
	{
		if (func_210(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0)
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
		case 99:
			return 1;
		
		default:
	}
	return 0;
}

int func_211()
{
	if (func_207())
	{
		if (func_212(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(int iParam0)
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

void func_213(int iParam0)
{
	Global_1342780.f_1 = Global_1342780;
	Global_1342780 = iParam0;
}

int func_214(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_266(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_265();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_264())
		{
			if (func_263() > 0 && Global_1573698)
			{
				unk_0x6EDFAF353D332BBF();
				unk_0xDA81B130FA38800A(fVar7);
				unk_0x7ABD1B29E6C2963D(18);
				if (unk_0x598A9E990F05F82C())
				{
					unk_0x8D2BC9240C67A1F4();
				}
				unk_0x7ABD1B29E6C2963D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_246())
		{
			func_245(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 26))
	{
		func_245(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_263() == 1)
		{
			func_244(bVar6, uParam0, 0);
			func_7(&(uParam2->f_19), 0, 0);
			func_245(uParam0, uParam2, 0);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x598A9E990F05F82C())
		{
			unk_0x8D2BC9240C67A1F4();
		}
		unk_0x7ABD1B29E6C2963D(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_263() == 0 && !bParam5))
		{
			func_245(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_243();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x6EDFAF353D332BBF();
				}
				unk_0x7ABD1B29E6C2963D(18);
			}
			if (unk_0x08BA6DD398CA197C(uParam2->f_33, 0))
			{
				Global_1573696 = uParam3;
				Global_1573695 = 1;
				unk_0xDA81B130FA38800A(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573697)
					{
						unk_0x09C86C0C5CA26B1E(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_243();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x6EDFAF353D332BBF();
					}
					unk_0x7ABD1B29E6C2963D(18);
				}
				unk_0xDA81B130FA38800A(fVar7);
				if (func_244(bVar6, uParam0, 0))
				{
					func_203(uParam0);
					uVar4 = func_241(iParam1, &(Global_1626500.f_83874), bParam4);
					if (bParam4)
					{
						func_238(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_231(uParam0, func_235(uParam2), func_232(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_222(uParam0, func_224(), func_223(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573697;
						func_238(uParam0, uVar4, "", 0, -1, Global_1573697, 1);
					}
					else
					{
						Var0 = { func_220(iParam1) };
						iVar8 = func_215(iParam1);
						func_238(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x88B0F0DC270164B7(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_219())
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
			if (func_218(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 20;
			}
			if (func_217(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_216(unk_0x0C1D3C552325765B()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_216(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 4;
}

bool func_217(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

bool func_218(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_219()
{
	return Global_1626500.f_1 == 0;
}

struct<4> func_220(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_221(unk_0x0C1D3C552325765B()) || func_216(unk_0x0C1D3C552325765B()))
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
			StringIntConCat(&Var0, Global_1626500.f_25, 16);
			break;
	}
	return Var0;
}

bool func_221(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 5;
}

void func_222(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(sParam2))
		{
			func_152(sParam1);
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_152("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_223()
{
	switch (func_95(unk_0x0C1D3C552325765B()))
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

char* func_224()
{
	switch (func_95(unk_0x0C1D3C552325765B()))
	{
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
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
			if (func_227())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_226(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_226(1))
			{
				return "PI_BIK_3_2";
			}
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
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_225(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_172))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_226(bool bParam0)
{
	return func_156(unk_0x0C1D3C552325765B(), bParam0);
}

bool func_227()
{
	return (func_230() && func_228(func_229()));
}

bool func_228(int iParam0)
{
	return func_158(iParam0, 1);
}

int func_229()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_34;
}

bool func_230()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148;
}

void func_231(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(uParam2))
		{
			func_152(uParam1);
		}
		else if (func_197(unk_0x0C1D3C552325765B()) == 133)
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT_C");
			unk_0xBDE6EEC5F6BDC060(uParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_152("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_232(var uParam0)
{
	int iVar0;
	
	iVar0 = func_197(unk_0x0C1D3C552325765B());
	if (func_234())
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
			switch (func_233())
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

int func_233()
{
	if (func_197(unk_0x0C1D3C552325765B()) == 133)
	{
		return Global_2482149.f_4685;
	}
	return -1;
}

bool func_234()
{
	return Global_1588659;
}

char* func_235(var uParam0)
{
	int iVar0;
	
	iVar0 = func_197(unk_0x0C1D3C552325765B());
	if (func_234())
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
			if (func_237() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_237() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_233())
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
			if (func_236() == 1)
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

int func_236()
{
	return Global_2482149.f_4688;
}

int func_237()
{
	if (func_197(unk_0x0C1D3C552325765B()) == 132)
	{
		return Global_2482149.f_4683;
	}
	return -1;
}

void func_238(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_162(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x709662CF2BD061A4(uParam1);
			unk_0x3F9D1B882EC0B8AF(iParam5);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_152(sParam1);
		}
		if (func_264() && iParam6)
		{
			if (func_240())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x709662CF2BD061A4("LBD_DPD_CNT");
			unk_0x3F9D1B882EC0B8AF(iVar0);
			unk_0x3F9D1B882EC0B8AF(iVar1);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_152(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (func_239(unk_0x0C1D3C552325765B()))
			{
				unk_0x7CBFB9F4AF33C67E(166);
			}
		}
		unk_0xE73340DA551C95E1();
	}
}

int func_239(int iParam0)
{
	if (func_218(iParam0) || func_217(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_240()
{
	return Global_1573698;
}

char* func_241(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_242();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x509383441597090D(uParam1))
	{
		if (Global_1573862 == 1)
		{
			Global_1573862 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
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

char* func_242()
{
	if (unk_0x01F6BD16E5956BB1())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x779C4262BB31C063())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x364521DB2DFEAA2D())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x4E1E7050584F0E5B())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_243()
{
	Global_36678 = 1;
}

bool func_244(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x474309DF4921072A("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x474309DF4921072A("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x474309DF4921072A("mp_matchmaking_card");
	}
	return unk_0x1E3F61C2C1E29520(*uParam1);
}

void func_245(var uParam0, var uParam1, bool bParam2)
{
	unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 7);
	Global_1573696 = 0;
	func_144();
	Global_1573695 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_145(&(uParam1->f_19));
		}
	}
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xA12A0D38735CCBF2(uParam0);
	}
	if (unk_0x08BA6DD398CA197C(uParam1->f_33, 0))
	{
		unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 0);
	}
	unk_0xDA81B130FA38800A(0f);
}

int func_246()
{
	if (func_262())
	{
		return 0;
	}
	if (func_261())
	{
		return 0;
	}
	if (!func_259())
	{
		return 0;
	}
	if (!func_257())
	{
		return 0;
	}
	if (func_256(8, -1))
	{
		return 0;
	}
	if (func_263() == 2)
	{
		return 0;
	}
	if (Global_2482149.f_4405)
	{
		return 0;
	}
	if (func_255())
	{
		return 0;
	}
	else if (!func_252(unk_0x0C1D3C552325765B(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_251(1) || func_249(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (func_247(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (Global_1738547)
	{
		return 0;
	}
	if (func_76(0))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 4))
	{
		return 0;
	}
	return 1;
}

int func_247(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_248())
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

bool func_248()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

int func_249(bool bParam0)
{
	if (unk_0x4A315CB706AE736B())
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (func_250(unk_0xA0081090911D13E5()))
			{
				if (unk_0x7F6103BD34B839B0(0, 25) || unk_0x7F6103BD34B839B0(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17151.f_130)
	{
		return 0;
	}
	if (unk_0x7F6103BD34B839B0(0, 19) || (!bParam0 && unk_0xFEB2816B7220E998(0, 19)))
	{
		return 1;
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (((unk_0x7F6103BD34B839B0(0, 166) || unk_0x7F6103BD34B839B0(0, 167)) || unk_0x7F6103BD34B839B0(0, 168)) || unk_0x7F6103BD34B839B0(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xFEB2816B7220E998(0, 166) || unk_0xFEB2816B7220E998(0, 167)) || unk_0xFEB2816B7220E998(0, 168)) || unk_0xFEB2816B7220E998(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_250(int iParam0)
{
	int iVar0;
	
	if (unk_0xE228E561BF27BBD0())
	{
		if (!unk_0xEB361B4BD195A4D3(iParam0))
		{
			unk_0x79DEFA3570360EAF(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_251(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_252(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_253(iParam0))
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

bool func_253(int iParam0)
{
	return func_254(iParam0);
}

bool func_254(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

bool func_255()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

bool func_256(int iParam0, int iParam1)
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

int func_257()
{
	if (func_258() == 0)
	{
		return 1;
	}
	return 0;
}

int func_258()
{
	return Global_1312462.f_18;
}

int func_259()
{
	if (func_260())
	{
		return 1;
	}
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 0;
	}
	if (unk_0x44F90FBF2C1E8021() || unk_0x9AB98132476504BC())
	{
		return 0;
	}
	if (unk_0x72D1F5A29BD70129())
	{
		return 0;
	}
	return 1;
}

bool func_260()
{
	return Global_1312434;
}

bool func_261()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 5;
}

bool func_262()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_263()
{
	return Global_1342783.f_68;
}

int func_264()
{
	if (Global_1573697 > 16)
	{
		return 1;
	}
	return 0;
}

float func_265()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x005F4304A67F7593()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_266(int iParam0)
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

int func_267()
{
	if (func_268(unk_0x0C1D3C552325765B()))
	{
		return Global_1318162;
	}
	return 0;
}

int func_268(int iParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_17(iParam0, 0))
		{
			return unk_0x82A9B289A654EBFD(iParam0);
		}
	}
	return 0;
}

int func_269()
{
	if (func_267())
	{
		return 1;
	}
	if (func_193(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_234())
	{
		return 1;
	}
	if (func_122(unk_0x0C1D3C552325765B()))
	{
		switch (func_197(unk_0x0C1D3C552325765B()))
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
				if (!func_270(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_270(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_270(unk_0x0C1D3C552325765B()))
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

bool func_270(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 4);
}

int func_271(int iParam0)
{
	if ((iParam0 == 24 && func_122(unk_0x0C1D3C552325765B())) && !func_133(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_96(unk_0x0C1D3C552325765B(), 0) && func_133(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
		if (func_124(unk_0x0C1D3C552325765B()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_272()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = unk_0x848AF823A8EA3C62();
	}
	else
	{
		iVar0 = func_273();
	}
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Local_971[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_273()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	if (unk_0xCB129F9A01D14082(iVar1))
	{
		if (unk_0x3F3C7C3B52DD0ECA(iVar1))
		{
			iVar2 = unk_0x9259DE19D910276C(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_274()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_275(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_275(int iParam0)
{
	struct<4> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<14> Var15;
	int iVar29;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 10))
	{
		iVar29 = 0;
		while (iVar29 < 4)
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_113, iVar29))
			{
				if (!unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_6, iVar29))
				{
					if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
					{
						if (unk_0x264883409423C6C3(Var0.f_0))
						{
							if (!unk_0x08BA6DD398CA197C(Local_99.f_109, iVar29))
							{
								if (!unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_5, iVar29))
								{
									if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar29 /*26*/].f_2))
									{
										if (unk_0xD3FACCDA4D66AEAD(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar29 /*26*/].f_2)))
										{
											if (unk_0x5293F3C38E4842B3(Var0.f_0) == unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar29 /*26*/].f_2))
											{
												if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
												{
													if (unk_0x60F161681C368C4E(Var0.f_1))
													{
														if (unk_0x90897FA118314142(Var0.f_1) == unk_0xA0081090911D13E5())
														{
															if (func_637() == Local_99.f_118)
															{
																unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_5), iVar29);
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
						else if (unk_0x60F161681C368C4E(Var0.f_0))
						{
							iVar11 = unk_0x90897FA118314142(Var0.f_0);
							if (iVar11 == unk_0x564EAE6038A81C07(Local_99.f_2[iVar29 /*26*/].f_1))
							{
								if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
								{
									if (unk_0x60F161681C368C4E(Var0.f_1))
									{
										iVar10 = unk_0x90897FA118314142(Var0.f_1);
										if (unk_0x54F0AEFB11EA090A(iVar10))
										{
											iVar13 = unk_0xA43666ACD375E339(iVar10);
											if (unk_0x3F3C7C3B52DD0ECA(iVar13))
											{
												if (Var0.f_3)
												{
													if (iVar13 == unk_0x0C1D3C552325765B())
													{
														Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_11++;
														unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_6), iVar29);
														Var15.f_2 = 144;
														Var15.f_10 = unk_0x0C1D3C552325765B();
														func_281(Var15, func_282(0));
														func_276("HUNT_TCKP", 1);
													}
												}
											}
											else if (!unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_7, iVar29))
											{
												if (Var0.f_3)
												{
													iVar13 = unk_0xA43666ACD375E339(iVar10);
													unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_7), iVar29);
												}
											}
										}
										else if (!unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_7, iVar29))
										{
											if (Var0.f_3)
											{
												unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_7), iVar29);
											}
										}
									}
									else if (!unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_7, iVar29))
									{
										if (Var0.f_3)
										{
											unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_7), iVar29);
										}
									}
								}
								else if (!unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_7, iVar29))
								{
									if (Var0.f_3)
									{
										unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_7), iVar29);
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
	if (func_272())
	{
		if (!func_99(unk_0x0C1D3C552325765B(), 20))
		{
			if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
			{
				if (unk_0x60F161681C368C4E(Var0.f_0))
				{
					iVar11 = unk_0x90897FA118314142(Var0.f_0);
					if (unk_0x54F0AEFB11EA090A(iVar11))
					{
						iVar12 = unk_0xA43666ACD375E339(iVar11);
						if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
						{
							if (unk_0x60F161681C368C4E(Var0.f_1))
							{
								iVar10 = unk_0x90897FA118314142(Var0.f_1);
								if (unk_0x54F0AEFB11EA090A(iVar10))
								{
									iVar13 = unk_0xA43666ACD375E339(iVar10);
									if (iVar13 == unk_0x0C1D3C552325765B())
									{
										if (unk_0x3F3C7C3B52DD0ECA(iVar12))
										{
											if (func_167(iVar12, 1))
											{
												if (Local_99.f_118 > -1)
												{
													iVar14 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(Local_99.f_118));
													if (func_71(iVar12, iVar14, 1))
													{
														func_123(0);
														func_116();
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

int func_276(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x754E61FE98961B39(sParam0);
	iVar0 = unk_0xBCD67D962E393B66(0, 1);
	func_277(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_277(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_280() || !unk_0x1504F110F2576375()) || !func_17(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_278(iParam2);
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

int func_278(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_279(iVar0);
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

void func_279(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_280()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
}

void func_281(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x0C1D3C552325765B();
	if (!iParam14 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Param0, 14, iParam14);
	}
}

int func_282(int iParam0)
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
			if (func_706(iVar2, 0, 0))
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

void func_283()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0x0C1D3C552325765B(), 0))
	{
		if (unk_0x08BA6DD398CA197C(uLocal_1420, 14))
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_1420, 14);
		}
		return;
	}
	iVar0 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	if (!unk_0x08BA6DD398CA197C(iLocal_1420, 14))
	{
		if (Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1 != 0)
		{
			Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1 = 0;
		}
		unk_0x88B0F0DC270164B7(&iLocal_1420, 14);
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_1420, 15))
	{
		unk_0x88B0F0DC270164B7(&iLocal_1420, 15);
		func_570();
	}
	if (unk_0xCB129F9A01D14082(iVar0))
	{
		if (unk_0x3F3C7C3B52DD0ECA(iVar0))
		{
			uVar1 = unk_0x9259DE19D910276C(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_971[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_548();
					func_530();
					func_515();
					break;
				
				case 2:
					func_284();
					break;
				
				case 3:
					func_650();
					break;
				}
			}
	}
}

void func_284()
{
	struct<10> Var0;
	int iVar13;
	int iVar14;
	char* sVar15;
	int iVar16;
	int iVar17;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar13 = unk_0x848AF823A8EA3C62();
	iVar14 = unk_0x0C1D3C552325765B();
	if (func_17(unk_0x0C1D3C552325765B(), 0))
	{
		iVar13 = func_273();
		iVar14 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	}
	if (!unk_0x08BA6DD398CA197C(Local_971[iVar13 /*14*/].f_1, 4))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_1420, 9))
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
			{
				if (iVar13 == Local_99.f_118 || func_637() == Local_99.f_118)
				{
					if (func_124(iVar14) >= 2)
					{
						sVar15 = func_514(iVar14);
						iVar16 = func_513(iVar14);
						func_511(86, "GB_WINNER", "BIGM_HUNTD", sVar15, iVar16, 0, -1, -1, -1, 2, -1);
					}
					if (iVar14 == unk_0x0C1D3C552325765B())
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_1420, 6))
						{
							func_498(1, 1, 0, 0, -1, -1, -1, -1);
							unk_0x88B0F0DC270164B7(&iLocal_1420, 6);
						}
						Var0.f_0 = func_497();
						Var0.f_1 = func_496();
						func_362(166, 1, &Var0, 0);
						unk_0x1BD6EE6C1F72D17E(iVar14);
						iLocal_1714 = unk_0x34E98013CA352B7E();
						unk_0xCF03D9C8A7F1577C(0);
						unk_0x88B0F0DC270164B7(&iLocal_1420, 17);
						func_7(&uLocal_1715, 0, 0);
					}
				}
				else if (func_272())
				{
					if (func_167(iVar14, 1))
					{
						if (func_124(iVar14) >= 2)
						{
							sVar15 = func_514(unk_0x81C85E54237F8A2E(Local_99.f_119));
							iVar16 = func_513(unk_0x81C85E54237F8A2E(Local_99.f_119));
							func_511(87, "GB_WORK_OVER", "BIGM_HUNTD", sVar15, iVar16, 0, -1, -1, -1, 2, -1);
						}
						if (iVar14 == unk_0x0C1D3C552325765B())
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_1420, 6))
							{
								func_498(0, 2, 0, 0, -1, -1, -1, -1);
								unk_0x88B0F0DC270164B7(&iLocal_1420, 6);
							}
							if (func_117(iVar14))
							{
								Var0.f_0 = func_361();
								Var0.f_1 = func_360();
							}
							func_362(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_124(iVar14) >= 2)
						{
							sVar15 = func_514(unk_0x81C85E54237F8A2E(Local_99.f_119));
							iVar16 = func_513(unk_0x81C85E54237F8A2E(Local_99.f_119));
							func_511(87, "GB_WORK_OVER", "BIGM_HUNTD", sVar15, iVar16, 0, -1, -1, -1, 2, -1);
						}
						if (iVar14 == unk_0x0C1D3C552325765B())
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_1420, 6))
							{
								func_498(0, 2, 0, 0, -1, -1, -1, -1);
								unk_0x88B0F0DC270164B7(&iLocal_1420, 6);
							}
							if (func_117(iVar14))
							{
								Var0.f_0 = func_361();
								Var0.f_1 = func_360();
							}
							func_362(166, 0, &Var0, 0);
						}
					}
				}
				unk_0x88B0F0DC270164B7(&iLocal_1420, 9);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 3))
			{
				iVar17 = (4 - Local_99.f_115);
				if (iVar13 == Local_99.f_118 || func_637() == Local_99.f_118)
				{
					if (func_124(iVar14) >= 2)
					{
						sVar15 = func_354();
						iVar16 = func_513(iVar14);
						func_511(87, "GB_WORK_OVER", "BIGM_HUNFD", sVar15, iVar16, 0, -1, -1, -1, 2, -1);
					}
					if (iVar14 == unk_0x0C1D3C552325765B())
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_1420, 6))
						{
							func_498(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0x88B0F0DC270164B7(&iLocal_1420, 6);
						}
						Var0.f_0 = func_497();
						Var0.f_1 = func_496();
						func_362(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_124(iVar14) >= 2)
					{
						sVar15 = func_514(unk_0x81C85E54237F8A2E(Local_99.f_119));
						iVar16 = func_513(unk_0x81C85E54237F8A2E(Local_99.f_119));
						if (iVar17 == 1)
						{
							func_511(86, "GB_WINNER", "BIGM_HUN1S", sVar15, iVar16, 0, iVar17, -1, -1, 2, -1);
						}
						else if (iVar17 > 1)
						{
							func_511(86, "GB_WINNER", "BIGM_HUNRS", sVar15, iVar16, 0, iVar17, -1, -1, 2, -1);
						}
					}
					if (iVar14 == unk_0x0C1D3C552325765B())
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_1420, 6))
						{
							func_498(1, 1, 0, 0, -1, -1, -1, -1);
							unk_0x88B0F0DC270164B7(&iLocal_1420, 6);
						}
						if (func_117(iVar14))
						{
							Var0.f_0 = func_361();
							Var0.f_1 = func_360();
						}
						func_362(166, 1, &Var0, 0);
						unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
					}
				}
				unk_0x88B0F0DC270164B7(&iLocal_1420, 9);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 5))
			{
				if (func_336())
				{
					if (func_636())
					{
						if (func_124(iVar14) >= 2)
						{
						}
					}
					else if (func_124(iVar14) >= 2)
					{
						func_315(87, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar14 == unk_0x0C1D3C552325765B())
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_1420, 6))
					{
						func_498(0, 8, 0, 0, -1, -1, -1, -1);
						unk_0x88B0F0DC270164B7(&iLocal_1420, 6);
					}
					func_362(166, 0, &Var0, 0);
				}
				unk_0x88B0F0DC270164B7(&iLocal_1420, 9);
			}
		}
		if (unk_0x08BA6DD398CA197C(iLocal_1420, 9))
		{
			func_570();
			if (!unk_0x08BA6DD398CA197C(uLocal_1421, 8))
			{
				func_302();
				func_70();
				unk_0x88B0F0DC270164B7(&iLocal_1421, 8);
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_1420, 10))
			{
			}
			if (func_285(&uLocal_1428, 0, 0))
			{
				if (iVar13 == unk_0x848AF823A8EA3C62())
				{
					unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1), 4);
				}
			}
			else if (unk_0x08BA6DD398CA197C(iLocal_1420, 17))
			{
				if (func_6(&uLocal_1715, 10000, 0))
				{
					unk_0xCF03D9C8A7F1577C(iLocal_1714);
					unk_0x09C86C0C5CA26B1E(&iLocal_1420, 17);
				}
			}
		}
	}
}

int func_285(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_100(29);
	if ((*uParam0 > 0 && !func_207()) && func_124(unk_0x0C1D3C552325765B()) != 0)
	{
		if (!func_299())
		{
			func_298();
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
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 2);
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_297(uParam0, 1);
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
				func_292(iParam2);
				func_297(uParam0, 2);
			}
			break;
		
		case 2:
			func_292(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_286(func_287(0)))
				{
					unk_0x94724F7C938EBE34(1);
				}
				func_297(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
				unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 2);
				func_297(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
			unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_286(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

char* func_287(int iParam0)
{
	if (((func_290(unk_0x0C1D3C552325765B()) || func_289(unk_0x0C1D3C552325765B())) || func_227()) || iParam0)
	{
		if (func_289(unk_0x0C1D3C552325765B()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_199(func_288()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_288()
{
	return Global_1624945;
}

bool func_289(int iParam0)
{
	return func_200(func_95(iParam0), 0);
}

bool func_290(int iParam0)
{
	return func_291(func_95(iParam0));
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	return 0;
}

void func_292(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0))
	{
		if (((((((((!unk_0x0893ED56F523F729() && !unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2)) && func_706(unk_0x0C1D3C552325765B(), 1, 1)) && !Global_68125) && !Global_52997) && !unk_0x2C22E7D1C80A53EF()) && !func_99(unk_0x0C1D3C552325765B(), 22)) && func_124(unk_0x0C1D3C552325765B()) != 0) && !func_295(func_296())) && !func_290(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 1);
			func_294(func_287(iParam0), -1);
			func_293(1);
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 0);
		}
	}
}

void func_293(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_226(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_207())
	{
		unk_0xAB16AADE80707D47(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_294(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam1);
}

int func_295(int iParam0)
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

int func_296()
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	return 0;
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_298()
{
	Global_2453273 = 1;
}

int func_299()
{
	if (func_95(unk_0x0C1D3C552325765B()) == 170)
	{
		return 1;
	}
	if (func_300(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_300(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_706(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_301(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_301(int iParam0)
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
			return 3;
			break;
	}
	return -1;
}

void func_302()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x16833EFAA58E63DB(uLocal_1435[iVar0]))
		{
			unk_0x0B57C567D698C373(&(uLocal_1435[iVar0]));
		}
		iVar0++;
	}
	if (unk_0x08BA6DD398CA197C(iLocal_1420, 18))
	{
		func_314(1);
		unk_0x09C86C0C5CA26B1E(&iLocal_1420, 18);
	}
	func_311();
	func_303();
}

void func_303()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x08BA6DD398CA197C(iLocal_1420, 7))
	{
		unk_0x88B0F0DC270164B7(&iLocal_1420, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (unk_0xCB129F9A01D14082(iVar1))
			{
				if (iVar1 != unk_0x0C1D3C552325765B())
				{
					if (unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_8, iVar0))
					{
						func_309(iVar1, 432, 0);
						func_304(iVar1, func_308(iLocal_1712), 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_304(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_306())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_305(iParam0))
	{
		if (bParam2)
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = unk_0xEAE20F1125B83888();
			Global_2414657.f_436[iVar0] = uParam1;
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = -1;
		}
	}
}

int func_305(int iParam0)
{
	if (!unk_0x96549B1C2E196049(Global_2414657.f_568[iParam0]) || Global_2414657.f_568[iParam0] == unk_0xEAE20F1125B83888())
	{
		return 1;
	}
	return 0;
}

int func_306()
{
	switch (func_307())
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

int func_307()
{
	return Global_25185;
}

int func_308(int iParam0)
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
	unk_0x29F530EB20218AC0(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_309(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_60())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_306())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x96549B1C2E196049(Global_2414657.f_535[iParam0]) || Global_2414657.f_535[iParam0] == unk_0xEAE20F1125B83888())
	{
		if (bParam2)
		{
			if (!unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_310();
			}
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_403[iVar0] = uVar1;
			Global_2414657.f_535[iParam0] = unk_0xEAE20F1125B83888();
		}
		else
		{
			if (unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_310();
			}
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_535[iParam0] = -1;
		}
	}
}

void func_310()
{
	Global_2414657.f_923 = 1;
}

void func_311()
{
	if (unk_0x08BA6DD398CA197C(iLocal_1420, 16))
	{
		func_81();
		func_312();
		unk_0x09C86C0C5CA26B1E(&iLocal_1420, 16);
	}
}

void func_312()
{
	if (Global_2412480.f_6 == unk_0xEAE20F1125B83888())
	{
		func_313();
	}
}

void func_313()
{
	struct<25> Var0;
	
	if (unk_0x96549B1C2E196049(Global_2412480.f_6))
	{
		if (!Global_2412480.f_6 == unk_0xEAE20F1125B83888())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2412480 = { Var0 };
	Global_2412480.f_6 = -1;
}

void func_314(bool bParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (!func_132())
		{
			if (func_706(unk_0x0C1D3C552325765B(), 1, 0))
			{
				unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 342, 0);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 122, 0);
			}
			unk_0xA7DCADD61C4CB6AD(unk_0x0C1D3C552325765B(), 1f);
			unk_0x57FA95501E37763C(0);
			unk_0x83CDA1F1ADCD9582(1);
			if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
			{
				Global_1312412.f_2 = 0;
				if (bParam0)
				{
					unk_0x9066E5B82BC6B02C(0, 0);
				}
			}
		}
		else
		{
			if (func_706(unk_0x0C1D3C552325765B(), 1, 1))
			{
				unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 0);
				unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 342, 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 122, 1);
				unk_0xA7DCADD61C4CB6AD(unk_0x0C1D3C552325765B(), 0.5f);
				if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
				{
					unk_0x9066E5B82BC6B02C(1, 0);
				}
			}
			unk_0x57FA95501E37763C(1);
			unk_0x83CDA1F1ADCD9582(0);
		}
	}
}

int func_315(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_335(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_316(&Var0);
}

int func_316(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2432628.f_2488)
		{
			return 0;
		}
	}
	func_319(uParam0, uParam0->f_16);
	func_318(uParam0);
	if (func_317(uParam0->f_1))
	{
		if (Global_2432628.f_2198[0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2432628.f_2198[0 /*72*/].f_1 == 13 || Global_2432628.f_2198[0 /*72*/].f_1 == 52) || Global_2432628.f_2198[0 /*72*/].f_1 == 53) || Global_2432628.f_2198[0 /*72*/].f_1 == 57)
		{
			Global_2432628.f_2198[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2432628.f_2198[iVar0 + 1 /*72*/] = { Global_2432628.f_2198[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2432628.f_2198[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 1);
				Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_210(Global_2432628.f_2198[iVar0 /*72*/].f_1))
				{
					Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
					unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_317(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_318(var uParam0)
{
	if (func_212(uParam0->f_1))
	{
		uParam0->f_66 = func_172();
	}
}

void func_319(var uParam0, int iParam1)
{
	if (func_212(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_60())
	{
		return;
	}
	if (func_210(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_320(iParam1, -2, 0, 0);
		}
	}
}

int func_320(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_247(iParam0))
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
	if (func_247(unk_0x0C1D3C552325765B()) || (func_334() && func_333()))
	{
		uVar1 = func_332();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(iVar1))
			{
				if (unk_0xA43666ACD375E339(iVar1) != -1)
				{
					if (func_706(unk_0xA43666ACD375E339(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_331(iParam1, iParam0, 0);
							}
							else
							{
								return func_328(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_328(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_331(iParam1, iParam0, 0);
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
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_331(iParam1, iParam0, 0);
		}
		else
		{
			return func_328(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_328(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_321(bool bParam0, int iParam1, bool bParam2)
{
	return func_322(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_322(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_327(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
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
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
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
	if (func_324(Global_1626500.f_83867))
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
		if (iParam0 == Global_262145.f_7751[iVar0])
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
			if (!func_327(iParam0, iVar0, 0))
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

int func_327(int iParam0, int iParam1, int iParam2)
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

int func_328(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if ((func_330(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_327(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_326(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_329(1);
			}
			else
			{
				return func_322(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_326(1);
			}
			else
			{
				return func_322(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_171(iParam0);
	if (!iVar3 == -1)
	{
		return func_169(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_329(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_330(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_331(int iParam0, int iParam1, bool bParam2)
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
		iVar0 = func_322(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_332()
{
	return Global_2359301.f_2;
}

bool func_333()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_334()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

void func_335(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
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

int func_336()
{
	int iVar0;
	
	if (!func_17(unk_0x0C1D3C552325765B(), 0))
	{
		if (!func_337(1))
		{
			if (unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1, 6))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_126())
		{
			if (unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1, 6))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1, 6))
		{
			unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_273();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0x08BA6DD398CA197C(Local_971[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_337(bool bParam0)
{
	if (func_111(unk_0x0C1D3C552325765B(), 21))
	{
		return 0;
	}
	if (unk_0x8188FDE7090D3AF6())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA012E3A84A2B2F1A())
		{
			return 0;
		}
	}
	if (func_353(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_352())
	{
		return 0;
	}
	if (func_261())
	{
		return 0;
	}
	if (func_351())
	{
		return 0;
	}
	if (func_255())
	{
		return 0;
	}
	if (unk_0x1504F110F2576375())
	{
		return 0;
	}
	if (func_253(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!func_257())
	{
		return 0;
	}
	if (func_111(unk_0x0C1D3C552325765B(), 0) || func_111(unk_0x0C1D3C552325765B(), 3))
	{
		return 0;
	}
	if ((func_111(unk_0x0C1D3C552325765B(), 12) || func_111(unk_0x0C1D3C552325765B(), 14)) || func_111(unk_0x0C1D3C552325765B(), 13))
	{
		return 0;
	}
	if (func_350(unk_0x0C1D3C552325765B(), 0, 0, 0))
	{
		if (!func_343())
		{
			return 0;
		}
	}
	if (func_342())
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (func_341(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_340())
	{
		return 0;
	}
	if (func_339(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_338(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	return 1;
}

int func_338(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_260.f_4 != 0 || Global_2421327[iParam0 /*353*/].f_260.f_5)
	{
		return 1;
	}
	return 0;
}

int func_339(int iParam0)
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

int func_340()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_341(int iParam0)
{
	if (!func_706(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1588660[iParam0 /*532*/].f_35;
}

bool func_342()
{
	return Global_91458.f_304 > 0;
}

int func_343()
{
	int iVar0;
	
	iVar0 = func_95(unk_0x0C1D3C552325765B());
	if (func_349(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11) || func_348(unk_0x0C1D3C552325765B()))
	{
		if (iVar0 == 167 || iVar0 == 168)
		{
			return 1;
		}
	}
	if (func_346(unk_0x0C1D3C552325765B()))
	{
		if (func_345(iVar0) || func_344(iVar0))
		{
			return 1;
		}
	}
	if (func_300(unk_0x0C1D3C552325765B()))
	{
		if (func_344(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_346(int iParam0)
{
	if (func_347(Global_1588660[iParam0 /*532*/].f_256.f_11, -1))
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_348(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_706(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_301(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_349(int iParam0)
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

int func_350(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_1588660[iParam0 /*532*/].f_256.f_11 > 0)
	{
		if (bParam1)
		{
			if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
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
		if (func_348(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_300(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_351()
{
	return Global_1315229;
}

bool func_352()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

int func_353(int iParam0)
{
	if (func_252(iParam0, 1))
	{
		if (Global_1588660[iParam0 /*532*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

char* func_354()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_61(unk_0x0C1D3C552325765B());
	if (iVar0 != func_60())
	{
		if (iVar0 != unk_0x0C1D3C552325765B())
		{
			if (((func_99(iVar0, 28) || func_99(unk_0x0C1D3C552325765B(), 28)) || func_359(iVar0)) && !func_358(iVar0))
			{
				return func_356(iVar0, 0);
			}
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_356(iVar0, 0);
			}
		}
		uVar1 = func_355(&(Global_1614576[iVar0 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(uVar1))
		{
			return func_356(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_355(var uParam0)
{
	return uParam0;
}

var func_356(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_156(iParam0, 1))
		{
			return func_357();
		}
	}
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACC");
}

var func_357()
{
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACCM");
}

int func_358(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x15B0CAB107CFCDE1() && unk_0x6F4E1F8D329BC4EC(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_359(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0xD95D58B9AAC86D55() || unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xED4DB0F2EFE02B37(0))
		{
			return 0;
		}
	}
	else if (unk_0x15B0CAB107CFCDE1())
	{
		if (unk_0x6F4E1F8D329BC4EC(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

int func_360()
{
	return ((4 - Local_99.f_115) * Global_262145.f_13400);
}

int func_361()
{
	return ((4 - Local_99.f_115) * Global_262145.f_13399);
}

void func_362(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	func_494(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (iParam3 == 0)
		{
			iVar1 = (iVar1 + func_493(iParam0));
		}
		else
		{
			iVar1 = (iVar1 + Global_262145.f_16146);
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (iParam3 == 0)
		{
			iVar0 = (iVar0 + func_492(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16145);
		}
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if (iParam0 == 185)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_95(unk_0x0C1D3C552325765B()) == 167 || func_95(unk_0x0C1D3C552325765B()) == 168)
	{
		if (bParam1)
		{
			if (func_491(unk_0x0C1D3C552325765B()) > 0)
			{
				func_490();
			}
			else
			{
				func_489();
			}
		}
		else
		{
			func_488();
		}
	}
	func_459(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_448(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_229();
	if (iVar6 != func_60() && iParam0 != 148)
	{
		if (func_167(unk_0x0C1D3C552325765B(), 0))
		{
			if (!func_71(unk_0x0C1D3C552325765B(), iVar6, 1))
			{
				func_438(&iVar0, 1);
			}
		}
	}
	func_434(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1750569.f_10 = iVar1;
		func_433();
		func_391(0, unk_0xA0081090911D13E5(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1750569.f_9 = iVar0;
		iVar11 = func_390();
		if (iVar11 != func_60())
		{
			func_389(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_388(1);
		if (iParam0 == 168)
		{
			if (!func_387())
			{
				unk_0x68D326E42C98E875(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_386())
			{
				if (!func_387())
				{
					unk_0x68D326E42C98E875(iVar0, uVar5);
				}
			}
			else if (func_387())
			{
				func_377(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2572880[iVar13 /*73*/].f_8.f_54 = uVar9;
				Global_2572880[iVar13 /*73*/].f_8.f_55 = uVar10;
				Global_2572880[iVar13 /*73*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x68D326E42C98E875(iVar0, uVar5);
			}
		}
		else if (func_387())
		{
			func_377(-856006867, iVar0, &iVar14, 0, 1, 0);
			Global_2572880[iVar14 /*73*/].f_8.f_54 = uVar9;
			Global_2572880[iVar14 /*73*/].f_8.f_55 = uVar10;
			Global_2572880[iVar14 /*73*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0x2C88EFEEFFB32E94(uVar9, uVar10, iVar0, bVar12);
		}
		func_376(iParam0, iVar0);
		if (func_375(iParam0))
		{
			if (func_374(iParam0) > -1)
			{
				func_373(func_374(iParam0), iVar0);
			}
		}
		Global_2453923 = iVar0;
		func_372(&Global_2452207, 0, 0);
	}
	if (func_114(unk_0x0C1D3C552325765B()) || func_133(unk_0x0C1D3C552325765B()))
	{
		func_363(iParam0);
	}
	if (func_291(iParam0))
	{
		Global_1750587.f_13 = iVar0;
		Global_1750587.f_14 = iVar1;
	}
}

void func_363(int iParam0)
{
	if (func_371(unk_0x0C1D3C552325765B()) && func_386())
	{
		if (func_345(iParam0))
		{
			func_366(4611, -1);
		}
		else if (func_365(iParam0))
		{
			func_366(4613, -1);
		}
		else if (func_200(iParam0, 1))
		{
			func_366(4614, -1);
		}
		else if (func_364(iParam0))
		{
			func_366(4615, -1);
		}
	}
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_366(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_370(iParam0, func_131(iParam1), 0);
	iVar0++;
	if (!func_369(iParam0))
	{
		func_368(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_367(iParam0, iVar0, iParam1, 1);
	}
}

void func_367(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_131(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_131(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_131(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_131(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_131(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_131(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_131(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_131(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_131(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_131(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_131(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_131(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_131(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_131(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_131(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_131(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_131(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_131(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_131(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_131(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_131(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_131(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_131(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_131(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_131(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_131(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_131(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_131(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_131(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_131(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_131(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_131(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_368(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_131(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

int func_369(int iParam0)
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

int func_370(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_131(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_371(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_84, 14);
}

void func_372(var uParam0, bool bParam1, bool bParam2)
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

void func_373(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2482149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5400)
		{
			iParam1 = Global_262145.f_5400;
		}
		Global_2482149.f_270 = iParam1;
		Global_2482149.f_271 = 0;
	}
}

int func_374(int iParam0)
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
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_375(int iParam0)
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
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_376(int iParam0, int iParam1)
{
	if (func_371(unk_0x0C1D3C552325765B()) && func_386())
	{
		if (func_345(iParam0) && iParam1 > 0)
		{
			func_368(4612, (func_370(4612, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_377(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_387())
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
				func_378(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_378(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_378(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_387())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_19()) || unk_0x474B3F20E92EE4B9())
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
			*uParam0 = func_385(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_384(1, iParam4);
			Global_2573371 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_379(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_379(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_380(iParam0);
	}
}

void func_380(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_387())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_383(iParam0))
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
		func_381(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_381(var uParam0)
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
	func_382(&(uParam0->f_8.f_3));
	func_382(&(uParam0->f_8.f_16));
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

void func_382(var uParam0)
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

int func_383(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_384(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_385(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_387())
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

bool func_386()
{
	return func_228(unk_0x0C1D3C552325765B());
}

int func_387()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

bool func_388(bool bParam0)
{
	return func_167(unk_0x0C1D3C552325765B(), bParam0);
}

void func_389(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1614576[iParam0 /*324*/].f_10.f_7[0];
	*uParam2 = Global_1614576[iParam0 /*324*/].f_10.f_7[1];
}

int func_390()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

int func_391(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_392(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_392(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_402(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1))
		{
			if (unk_0x60F161681C368C4E(iParam1))
			{
				uVar1 = unk_0x90897FA118314142(iParam1);
				func_398(unk_0x7560B9B6FB83879C(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_393(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_393(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_396(iParam0, 1) };
	if (iParam0 == func_395(unk_0xA0081090911D13E5()))
	{
		func_394(1);
	}
	func_398(Var0, iParam1, 0, sParam2, iParam3);
}

void func_394(int iParam0)
{
	Global_2432628.f_1381 = iParam0;
}

int func_395(var uParam0)
{
	return uParam0;
}

Vector3 func_396(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x76E840F466FECF8E())
	{
		Var3 = { unk_0x6A24DA4D96755021(2) };
	}
	if (iParam0 == func_397(unk_0xA0081090911D13E5()) && unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
	{
		Var0 = { unk_0x2E01486DB8218E16(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		fVar6 = unk_0x5E6FDC4F3A8C8EDE(iParam0);
		if (unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x8461D93FE2207D3A(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_397(var uParam0)
{
	return uParam0;
}

void func_398(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2432628.f_780[iVar0 /*30*/].f_6 == 0 || Global_2432628.f_780[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2432628.f_780[iVar1 /*30*/] = { Param0 };
			Global_2432628.f_780[iVar1 /*30*/].f_6 = 1;
			Global_2432628.f_780[iVar1 /*30*/].f_4 = func_401(Global_2432628.f_780[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2432628.f_780[iVar1 /*30*/].f_7 = unk_0x4B50AAB32FBE0483();
			Global_2432628.f_780[iVar1 /*30*/].f_3 = iParam3;
			Global_2432628.f_780[iVar1 /*30*/].f_8 = iParam4;
			Global_2432628.f_780[iVar1 /*30*/].f_9 = func_400();
			Global_2432628.f_780[iVar1 /*30*/].f_10 = func_399();
			StringCopy(&(Global_2432628.f_780[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2432628.f_780[iVar1 /*30*/].f_26 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam6);
		}
	}
}

int func_399()
{
	if (Global_2432628.f_1381)
	{
		Global_2432628.f_1381 = 0;
		return 1;
	}
	Global_2432628.f_1381 = 0;
	return 0;
}

var func_400()
{
	var uVar0;
	
	uVar0 = Global_2432628.f_1383;
	Global_2432628.f_1383 = 1;
	return uVar0;
}

float func_401(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x999A157665D69393(unk_0xACDF5DE746C18841(), Param0, 1);
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

var func_402(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_403(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_403(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_432(unk_0x0C1D3C552325765B()) || func_431(unk_0x0C1D3C552325765B()))
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
	if (func_430(uParam2))
	{
	}
	if (func_429())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_427(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_426(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_424(0, &iVar1);
					break;
				
				case 3:
					func_424(1, &iVar1);
					break;
				
				case 1:
					func_422(&iVar1);
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
			func_421(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_413((func_420(unk_0x0C1D3C552325765B()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x726276BAB6518437(iVar1, iParam8, iParam9);
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_2 != -1)
				{
					func_421(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_408(iVar1);
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
				func_404((func_406(unk_0x0C1D3C552325765B()) + iVar1));
			}
			else
			{
				func_404((func_406(unk_0x0C1D3C552325765B()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_404(int iParam0)
{
	if (func_429())
	{
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_5 = iParam0;
		func_405(joaat("mpply_globalxp"), iParam0);
	}
}

void func_405(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
}

int func_406(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_706(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return func_407(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_5;
			}
		}
		else
		{
			return func_407(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_407(int iParam0)
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

void func_408(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_62(unk_0x0C1D3C552325765B()) };
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(&Var0))
		{
			iVar13 = func_411(func_412(&Var0));
			if (iVar13 == 0)
			{
				func_410(&Global_1352222, iParam0);
				func_409(joaat("mpply_crew_local_xp_0"), Global_1352222);
			}
			else if (iVar13 == 1)
			{
				func_410(&Global_1352223, iParam0);
				func_409(joaat("mpply_crew_local_xp_1"), Global_1352223);
			}
			else if (iVar13 == 2)
			{
				func_410(&Global_1352224, iParam0);
				func_409(joaat("mpply_crew_local_xp_2"), Global_1352224);
			}
			else if (iVar13 == 3)
			{
				func_410(&Global_1352225, iParam0);
				func_409(joaat("mpply_crew_local_xp_3"), Global_1352225);
			}
			else if (iVar13 == 4)
			{
				func_410(&Global_1352226, iParam0);
				func_409(joaat("mpply_crew_local_xp_4"), Global_1352226);
			}
		}
	}
}

void func_409(int iParam0, int iParam1)
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
			Global_1352217 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1352220 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1352221 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1352222 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1352223 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1352224 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1352225 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1352226 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1352227 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1352228 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1352229 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1352230 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1352231 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1352232 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1352233 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_410(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_411(int iParam0)
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

int func_412(var uParam0)
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

void func_413(int iParam0, int iParam1, int iParam2)
{
	if (func_429())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8058 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1352337[func_131(-1)])
				{
					unk_0x726276BAB6518437(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1352337[func_131(-1)])
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
		if (func_419(unk_0x0C1D3C552325765B()))
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_1 = iParam0;
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_6 = func_417(iParam0, 1);
		}
		func_367(632, iParam0, -1, 1);
		func_368(633, func_417(iParam0, 1), -1, 1, 0);
		Global_1352337[func_131(-1)] = iParam0;
		func_414(7, 0);
	}
}

void func_414(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_416(iParam0, iParam1))
	{
		iVar0 = func_415();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_415()
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

int func_416(int iParam0, var uParam1)
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

int func_417(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_418(iParam0, 0);
}

int func_418(int iParam0, int iParam1)
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

int func_419(int iParam0)
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

int func_420(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_131(-1)];
			}
			else if (func_419(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_131(-1)];
	}
	return 0;
}

void func_421(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_370(iParam0, func_131(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_369(iParam0))
	{
		func_368(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_367(iParam0, iVar0, iParam2, 1);
	}
}

void func_422(int iParam0)
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
				if (unk_0x10B1B072E9514664(iVar5) == iVar1 || func_327(unk_0x10B1B072E9514664(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0C1D3C552325765B())
					{
						if (func_63(unk_0x0C1D3C552325765B(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_423(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_423(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_423(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_424(bool bParam0, int iParam1)
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
				if (func_706(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0C1D3C552325765B())
					{
						iVar1++;
						if (func_63(unk_0x0C1D3C552325765B(), iVar4))
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
			if (func_706(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0C1D3C552325765B())
				{
					if (func_425(unk_0x0C1D3C552325765B(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_63(unk_0x0C1D3C552325765B(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_423(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_423(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_425(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_56(iParam0), func_56(iParam1));
	return 0f;
}

int func_426(int iParam0)
{
	int iVar0;
	
	if (unk_0x666918BF44D91346() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_423(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_427(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x9ABCEFB6E400C9FB(iParam0) > func_420(unk_0x0C1D3C552325765B()))
		{
			iParam0 = -func_420(unk_0x0C1D3C552325765B());
		}
	}
	if (func_428(8000, 0, 0) > 0)
	{
		if (func_428(8000, 0, 0) < (iParam0 + func_420(unk_0x0C1D3C552325765B())))
		{
			iParam0 = (func_428(8000, 0, 0) - func_420(unk_0x0C1D3C552325765B()));
		}
	}
	return iParam0;
}

int func_428(int iParam0, bool bParam1, int iParam2)
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

int func_429()
{
	return 1;
}

int func_430(var uParam0)
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

bool func_431(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_432(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

void func_433()
{
	Global_2453272 = 1;
}

void func_434(int iParam0, var uParam1, var uParam2)
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
	iVar0 = func_436(iParam0);
	iVar1 = func_435(iParam0);
	iVar2 = unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(Global_2482149.f_4698.f_75, unk_0x4B50AAB32FBE0483()));
	if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_16348)
		{
			iVar2 = Global_262145.f_16348;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_16349)
		{
			iVar2 = Global_262145.f_16349;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_16347)
		{
			iVar2 = Global_262145.f_16347;
		}
	}
	else if (func_345(iParam0))
	{
		if (iVar2 > Global_262145.f_16350)
		{
			iVar2 = Global_262145.f_16350;
		}
	}
	else if (func_200(iParam0, 0) || func_365(iParam0))
	{
		if (iVar2 > Global_262145.f_16351)
		{
			iVar2 = Global_262145.f_16351;
		}
	}
	else if (iVar2 > Global_262145.f_10827)
	{
		iVar2 = Global_262145.f_10827;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_435(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10918;
		
		case 152:
			return Global_262145.f_10953;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10941;
		
		case 157:
			return Global_262145.f_10908;
		
		case 159:
			return Global_262145.f_10891;
		
		case 164:
			return Global_262145.f_10931;
		
		case 160:
			return Global_262145.f_10981;
		
		case 162:
			return Global_262145.f_11001;
		
		case 163:
			return Global_262145.f_10966;
		
		case 154:
			return Global_262145.f_11036;
		
		case 155:
			return Global_262145.f_11026;
		
		case 153:
			return Global_262145.f_10990;
		
		case 170:
			return Global_262145.f_12877;
		
		case 171:
			return Global_262145.f_12936;
		
		case 172:
			return Global_262145.f_12954;
		
		case 173:
			return Global_262145.f_12895;
		
		case 166:
			return Global_262145.f_12910;
		
		case 167:
			return Global_262145.f_13001;
		
		case 169:
			return Global_262145.f_12973;
		
		case 168:
			return Global_262145.f_12966;
		
		case 179:
			return Global_262145.f_16230;
		
		case 180:
			return Global_262145.f_16009;
		
		case 182:
			return Global_262145.f_16009;
		
		case 183:
			return Global_262145.f_16009;
		
		case 185:
			return Global_262145.f_16009;
		
		case 186:
			return Global_262145.f_16009;
		
		case 189:
			return Global_262145.f_16230;
		
		case 190:
			return Global_262145.f_15885;
		
		case 191:
			return Global_262145.f_15976;
		
		case 192:
			return Global_262145.f_15770;
		
		case 193:
			return Global_262145.f_16230;
		
		case 194:
			return Global_262145.f_16230;
		
		case 195:
			return Global_262145.f_16009;
		
		case 197:
			return Global_262145.f_16009;
		
		case 198:
			return Global_262145.f_16009;
		
		case 199:
			return Global_262145.f_16230;
		
		case 200:
			return Global_262145.f_16230;
		
		case 201:
			return Global_262145.f_16230;
		
		case 205:
			return Global_262145.f_16230;
		
		case 207:
			return Global_262145.f_16009;
		
		case 208:
			return Global_262145.f_16009;
		
		case 209:
			return Global_262145.f_16009;
		
		case 210:
			return Global_262145.f_16230;
		
		case 211:
			return Global_262145.f_16230;
		
		default:
	}
	return 0;
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10917;
		
		case 152:
			return Global_262145.f_10952;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10940;
		
		case 157:
			return Global_262145.f_10907;
		
		case 159:
			return Global_262145.f_10890;
		
		case 164:
			return Global_262145.f_10930;
		
		case 160:
			return Global_262145.f_10980;
		
		case 162:
			return Global_262145.f_11000;
		
		case 163:
			return Global_262145.f_10965;
		
		case 154:
			return Global_262145.f_11035;
		
		case 155:
			return Global_262145.f_11025;
		
		case 153:
			return Global_262145.f_10989;
		
		case 170:
			return Global_262145.f_12876;
		
		case 171:
			return Global_262145.f_12935;
		
		case 172:
			return Global_262145.f_12953;
		
		case 173:
			return Global_262145.f_12894;
		
		case 166:
			return Global_262145.f_12909;
		
		case 179:
			return Global_262145.f_16229;
		
		case 180:
			return Global_262145.f_16008;
		
		case 182:
			return Global_262145.f_16008;
		
		case 183:
			return Global_262145.f_16008;
		
		case 185:
			return Global_262145.f_16008;
		
		case 186:
			return Global_262145.f_16008;
		
		case 189:
			return Global_262145.f_16229;
		
		case 193:
			return Global_262145.f_16229;
		
		case 194:
			return Global_262145.f_16229;
		
		case 195:
			return Global_262145.f_16008;
		
		case 197:
			return Global_262145.f_16008;
		
		case 198:
			return Global_262145.f_16008;
		
		case 199:
			return Global_262145.f_16229;
		
		case 200:
			return Global_262145.f_16229;
		
		case 201:
			return Global_262145.f_16229;
		
		case 205:
			return Global_262145.f_16229;
		
		case 207:
			return Global_262145.f_16008;
		
		case 208:
			return Global_262145.f_16008;
		
		case 209:
			return Global_262145.f_16008;
		
		case 210:
			return Global_262145.f_16229;
		
		case 211:
			return Global_262145.f_16229;
		
		case 190:
			if (!func_437())
			{
				return Global_262145.f_15884;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_437())
			{
				return Global_262145.f_15975;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_437())
			{
				return Global_262145.f_15769;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

bool func_437()
{
	return func_113(unk_0x0C1D3C552325765B());
}

void func_438(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_437())
		{
			if (func_388(0))
			{
				if (!func_226(0))
				{
					if (unk_0xCB129F9A01D14082(func_390()))
					{
						if (func_447() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_447());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_445(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_442("GB_BCUT_TICK1", func_390(), iVar0, 0, 0, 1, 1);
						}
						func_441(20);
						func_439(func_390(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_439(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_706(iParam0, 0, 1))
	{
		Var0.f_0 = 460;
		Var0.f_1 = unk_0x0C1D3C552325765B();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_440(iParam0));
	}
}

var func_440(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

void func_441(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

int func_442(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		unk_0x212C24688D441F9E(func_320(iParam1, -2, 1, 0));
		unk_0xDA35BDB37E728640(func_443(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x212C24688D441F9E(iParam3);
		}
		unk_0x3F9D1B882EC0B8AF(iParam2);
		iVar0 = unk_0xBCD67D962E393B66(0, 1);
		func_277(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_443(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_444(&cVar0);
}

var func_444(char[4] cParam0)
{
	return cParam0;
}

void func_445(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_446(1);
	}
	else
	{
		iVar1 = func_446(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_446(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10822;
}

int func_447()
{
	return Global_262145.f_10821;
}

void func_448(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_386())
			{
				Var0 = { func_458() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_457(unk_0x0C1D3C552325765B(), Var0.f_0) + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (func_457(unk_0x0C1D3C552325765B(), Var0.f_0) + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_451(unk_0x0C1D3C552325765B(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16459);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16458);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_450(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_16449);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_16448));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_441(88);
				}
				Global_2482149.f_4698.f_186 = *iParam2;
			}
			else if (func_226(0))
			{
				Var15 = { func_449(func_390()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_457(func_390(), Var15.f_0) + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (func_457(func_390(), Var15.f_0) + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_451(func_390(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16459));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16458));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_16498;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_16499;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_449(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_177;
}

int func_450(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(iVar0)))
		{
			iVar2 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_17(iVar2, 0) && !func_71(iVar2, unk_0x0C1D3C552325765B(), 1))
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

int func_451(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_456(iParam1);
	if (func_455(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_14838;
				if (func_452(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14843);
				}
				if (func_452(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14848);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_14837;
				if (func_452(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14842);
				}
				if (func_452(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14847);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_14836;
				if (func_452(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14841);
				}
				if (func_452(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14846);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_14834;
				if (func_452(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14839);
				}
				if (func_452(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_14835;
				if (func_452(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14840);
				}
				if (func_452(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14845);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_452(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_454(iParam0, iParam1))
	{
		iVar0 = func_453(iParam0, iParam1);
		return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_5, iParam2);
	}
	return 0;
}

int func_453(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_455(iParam1) && iParam0 != func_60())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_454(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_455(iParam1) && iParam0 != func_60())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_455(int iParam0)
{
	if (iParam0 == 21 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_456(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		default:
	}
	return -1;
}

int func_457(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_455(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

struct<2> func_458()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_177;
}

void func_459(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_113(unk_0x0C1D3C552325765B()))
		{
			if (bParam1)
			{
				func_487();
			}
			func_486();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_113(unk_0x0C1D3C552325765B()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_478(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_173));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_477(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_450(&uVar2);
					iVar4 = Global_262145.f_14023;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13232));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_441(44);
					}
				}
				func_471(*iParam3);
				func_470();
				Global_2482149.f_4698.f_186 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xE5697AB254094B0D())
				{
					iVar8 = iVar7;
					if (unk_0x1489FFC2CBA39486(iVar8))
					{
						iVar9 = unk_0xF3B8A064D228878B(iVar8);
						if (func_469(iVar9))
						{
							func_461(iVar9, 1);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_113(unk_0x0C1D3C552325765B()))
		{
			func_460();
		}
	}
}

void func_460()
{
	int iVar0;
	
	iVar0 = Global_2507793[func_19()];
	iVar0++;
	func_367(3647, iVar0, -1, 1);
}

void func_461(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_463(iParam0);
	func_462(iParam0, uVar0, iParam1);
}

void func_462(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 457;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_60())
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			unk_0x8E36889D76C8D4FA(1, &Var0, 4, func_440(iParam0));
		}
	}
}

int func_463(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_468();
	iVar0 = func_466(iParam0, iVar0);
	iVar1 = Global_1614576[func_390() /*324*/].f_10.f_233;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12837));
	if (iVar0 < func_465())
	{
		iVar0 = func_465();
	}
	if (iVar0 > func_464())
	{
		iVar0 = func_464();
	}
	return iVar0;
}

int func_464()
{
	return Global_262145.f_12838;
}

int func_465()
{
	return Global_262145.f_14013;
}

int func_466(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_491(iParam0) * func_467());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_467()
{
	return Global_262145.f_14012;
}

var func_468()
{
	return Global_262145.f_10813;
}

int func_469(int iParam0)
{
	if (unk_0xCB129F9A01D14082(iParam0))
	{
		if (iParam0 != unk_0x0C1D3C552325765B())
		{
			if (func_71(iParam0, unk_0x0C1D3C552325765B(), 0))
			{
				if (!func_99(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_470()
{
	int iVar0;
	
	iVar0 = Global_2507799[func_19()];
	iVar0++;
	func_367(3646, iVar0, -1, 1);
}

void func_471(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2507802[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_367(3648, iVar0, -1, 1);
	if (func_474(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_473(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_472(7666, iVar2, -1, 1);
	}
}

var func_472(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_473(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14156;
			break;
		
		case 2:
			return Global_262145.f_14157;
			break;
		
		case 3:
			return Global_262145.f_14158;
			break;
		
		case 4:
			return Global_262145.f_14159;
			break;
		
		case 5:
			return Global_262145.f_14160;
			break;
		
		case 6:
			return Global_262145.f_14161;
			break;
		
		case 7:
			return Global_262145.f_14162;
			break;
		
		case 8:
			return Global_262145.f_14163;
			break;
		
		case 9:
			return Global_262145.f_14164;
			break;
		
		case 10:
			return Global_262145.f_14165;
			break;
		
		case 11:
			return Global_262145.f_14166;
			break;
		
		case 12:
			return Global_262145.f_14167;
			break;
		
		case 13:
			return Global_262145.f_14168;
			break;
		
		case 14:
			return Global_262145.f_14169;
			break;
		
		case 15:
			return Global_262145.f_14170;
			break;
		
		case 16:
			return Global_262145.f_14171;
			break;
		
		case 17:
			return Global_262145.f_14172;
			break;
		
		case 18:
			return Global_262145.f_14173;
			break;
		
		case 19:
			return Global_262145.f_14174;
			break;
		
		case 20:
			return Global_262145.f_14175;
			break;
		
		case 21:
			return Global_262145.f_14176;
			break;
		
		case 22:
			return Global_262145.f_14177;
			break;
		
		case 23:
			return Global_262145.f_14178;
			break;
		
		case 24:
			return Global_262145.f_14179;
			break;
	}
	return 0;
}

int func_474(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_476(iParam0, iParam1);
	uVar2 = func_475(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x43577EDB73960877(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_475(int iParam0)
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

int func_476(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

var func_477(int iParam0)
{
	if (iParam0 >= Global_262145.f_13210)
	{
		return Global_262145.f_13231;
	}
	else if (iParam0 >= Global_262145.f_13209)
	{
		return Global_262145.f_13230;
	}
	else if (iParam0 >= Global_262145.f_13208)
	{
		return Global_262145.f_13229;
	}
	else if (iParam0 >= Global_262145.f_13207)
	{
		return Global_262145.f_13228;
	}
	else if (iParam0 >= Global_262145.f_13206)
	{
		return Global_262145.f_13227;
	}
	else if (iParam0 >= Global_262145.f_13205)
	{
		return Global_262145.f_13226;
	}
	else if (iParam0 >= Global_262145.f_13204)
	{
		return Global_262145.f_13225;
	}
	else if (iParam0 >= Global_262145.f_13203)
	{
		return Global_262145.f_13224;
	}
	else if (iParam0 >= Global_262145.f_13202)
	{
		return Global_262145.f_13223;
	}
	else if (iParam0 >= Global_262145.f_13201)
	{
		return Global_262145.f_13222;
	}
	else if (iParam0 >= Global_262145.f_13200)
	{
		return Global_262145.f_13221;
	}
	else if (iParam0 >= Global_262145.f_13199)
	{
		return Global_262145.f_13220;
	}
	else if (iParam0 >= Global_262145.f_13198)
	{
		return Global_262145.f_13219;
	}
	else if (iParam0 >= Global_262145.f_13197)
	{
		return Global_262145.f_13218;
	}
	else if (iParam0 >= Global_262145.f_13196)
	{
		return Global_262145.f_13217;
	}
	else if (iParam0 >= Global_262145.f_13195)
	{
		return Global_262145.f_13216;
	}
	else if (iParam0 >= Global_262145.f_13194)
	{
		return Global_262145.f_13215;
	}
	else if (iParam0 >= Global_262145.f_13193)
	{
		return Global_262145.f_13214;
	}
	else if (iParam0 >= Global_262145.f_13192)
	{
		return Global_262145.f_13213;
	}
	else if (iParam0 >= Global_262145.f_13191)
	{
		return Global_262145.f_13212;
	}
	return Global_262145.f_13211;
}

int func_478(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_485(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_484(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_483(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_479(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_479(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_483(unk_0xB5BF1B58C833F7A9(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_479(int iParam0)
{
	int iVar0;
	
	if (func_482(iParam0))
	{
		iVar0 = func_480(func_481(iParam0));
		return func_370(iVar0, -1, 0);
	}
	return 0;
}

int func_480(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3626;
	}
	else if (iParam0 == 1)
	{
		return 3627;
	}
	else if (iParam0 == 2)
	{
		return 3628;
	}
	else if (iParam0 == 3)
	{
		return 3629;
	}
	else if (iParam0 == 4)
	{
		return 3630;
	}
	return 3626;
}

int func_481(int iParam0)
{
	int iVar0;
	
	if (func_482(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_482(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_483(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_13410;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_13408;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_13412;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_13406;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_13404;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_13414;
	}
	return 0;
}

int func_484(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_482(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1751743[iVar0] == iParam1 && Global_1751750[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_485(int iParam0)
{
	int iVar0;
	
	if (func_482(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_486()
{
	int iVar0;
	
	iVar0 = Global_2507790[func_19()];
	iVar0++;
	Global_2507790[func_19()] = iVar0;
	func_367(3645, iVar0, -1, 1);
}

void func_487()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507787[func_19()];
	iVar1 = Global_2507796[func_19()];
	iVar0++;
	iVar1++;
	Global_2507787[func_19()] = iVar0;
	Global_2507796[func_19()] = iVar1;
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_89 = iVar1;
	func_367(3643, iVar0, -1, 1);
	func_367(3644, iVar1, -1, 1);
}

void func_488()
{
	if (func_437())
	{
		Global_2443212.f_3065.f_134 = 0;
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
	}
}

void func_489()
{
	if (func_437())
	{
		if (Global_2443212.f_3065.f_134 < 10)
		{
			Global_2443212.f_3065.f_134++;
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
		}
	}
}

void func_490()
{
	if (func_437())
	{
		if (Global_2443212.f_3065.f_134 > 0)
		{
			Global_2443212.f_3065.f_134 = (Global_2443212.f_3065.f_134 - 1);
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
		}
	}
}

int func_491(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_27;
}

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10938) * Global_262145.f_10943));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10888) * Global_262145.f_10893));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10915) * Global_262145.f_10919));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10928) * Global_262145.f_10932));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10950) * Global_262145.f_10955));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11112) * Global_262145.f_11113));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11118) * Global_262145.f_11119));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11116) * Global_262145.f_11117));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11110) * Global_262145.f_11111));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11114) * Global_262145.f_11115));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11108) * Global_262145.f_11109));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_12933;
		
		case 172:
			return Global_262145.f_12949;
		
		case 173:
			return Global_262145.f_12892;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16153;
		
		case 180:
			return Global_262145.f_16029;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16037;
		
		case 185:
			return Global_262145.f_16046;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16241;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16258;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16106;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16289;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16167;
		
		case 205:
			return Global_262145.f_16276;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16134;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16271;
		
		case 211:
			return Global_262145.f_16235;
		
		default:
	}
	return 0;
}

int func_493(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10939) * Global_262145.f_10944));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10889) * Global_262145.f_10894));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10916) * Global_262145.f_10920));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10929) * Global_262145.f_10933));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10951) * Global_262145.f_10956));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10988) * Global_262145.f_10991));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11034) * Global_262145.f_11037));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11024) * Global_262145.f_11027));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10979) * Global_262145.f_10982));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10999) * Global_262145.f_11004));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10964) * Global_262145.f_10967));
		
		case 170:
			return Global_262145.f_12875;
		
		case 171:
			return Global_262145.f_12934;
		
		case 172:
			return Global_262145.f_12950;
		
		case 173:
			return Global_262145.f_12893;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_14967;
		
		case 168:
			return Global_262145.f_14966;
		
		case 179:
			return Global_262145.f_16154;
		
		case 180:
			return Global_262145.f_16030;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16038;
		
		case 185:
			return Global_262145.f_16047;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16242;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16259;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16107;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16290;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16168;
		
		case 205:
			return Global_262145.f_16277;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16135;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16272;
		
		case 211:
			return Global_262145.f_16236;
		
		default:
	}
	return 0;
}

void func_494(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_495(iParam0))
	{
		if (!func_437())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10832;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_291(iParam0))
	{
		*uParam1 = (Global_262145.f_16007 / 100f);
		*uParam2 = (Global_262145.f_16007 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_10831;
		*uParam2 = Global_262145.f_10830;
	}
	if (func_291(iParam0))
	{
		if (func_167(unk_0x0C1D3C552325765B(), 1))
		{
			*uParam1 = (Global_262145.f_16006 / 100f);
			*uParam2 = (Global_262145.f_16006 / 100f);
		}
	}
	else if (func_167(unk_0x0C1D3C552325765B(), 1))
	{
		*uParam1 = Global_262145.f_10829;
		*uParam2 = Global_262145.f_10828;
	}
	iVar0 = func_229();
	if (iVar0 != func_60())
	{
		if (func_71(unk_0x0C1D3C552325765B(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_495(int iParam0)
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

int func_496()
{
	return (Local_99.f_115 * Global_262145.f_12908);
}

int func_497()
{
	return (Local_99.f_115 * Global_262145.f_12907);
}

void func_498(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = func_95(unk_0x0C1D3C552325765B());
	if (func_291(iVar0))
	{
		Global_1750587.f_2 = func_510();
		Global_1750587.f_3 = func_509();
		Global_1750587.f_50 = iParam4;
		Global_1750587.f_51 = iParam5;
		Global_1750587.f_10 = unk_0x39E54E7BC7452169();
		Global_1750587.f_20 = (Global_1750587.f_10 - Global_1750587.f_9);
		Global_1750587.f_12 = iParam1;
		Global_1750587.f_19 = func_503(iVar0, bParam0, func_508(bParam3));
		if (bParam0)
		{
			Global_1750587.f_11 = 1;
		}
		else
		{
			Global_1750587.f_11 = 0;
		}
		if ((func_114(unk_0x0C1D3C552325765B()) || func_125(unk_0x0C1D3C552325765B())) || func_133(unk_0x0C1D3C552325765B()))
		{
			Global_1750587.f_8 = 1;
		}
		else
		{
			Global_1750587.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1750587.f_43 = 0;
			Global_1750587.f_45 = func_502(func_390(), iParam2);
			Global_1750587.f_47 = iParam7;
			Global_1750587.f_46 = iParam6;
			Global_1750587.f_52 = func_501(func_390(), iParam2);
		}
		func_499();
	}
	else
	{
		Global_1750569.f_6 = unk_0x39E54E7BC7452169();
		if (bParam0)
		{
			Global_1750569.f_7 = 1;
		}
		else
		{
			Global_1750569.f_7 = 0;
		}
		Global_1750569.f_8 = iParam1;
		if (Global_1750569.f_4 == 0)
		{
			if ((func_114(unk_0x0C1D3C552325765B()) || func_125(unk_0x0C1D3C552325765B())) || func_133(unk_0x0C1D3C552325765B()))
			{
				Global_1750569.f_4 = 1;
			}
		}
	}
}

void func_499()
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_FIVESTAR"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RACE_P2P"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "AM_PENNED_IN"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BAD_DEAL"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SAFECRACKER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SHUTTLE"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
	}
	unk_0xBF371CD2B64212FD(&Global_1750587);
	func_500();
}

void func_500()
{
	struct<53> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1750587 = { Var0 };
	Global_1750587.f_29 = 0;
	Global_1750587.f_30 = 0;
	Global_1750587.f_17 = 0;
}

int func_501(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_452(iParam0, iParam1, 2);
	bVar1 = func_452(iParam0, iParam1, 1);
	bVar2 = func_452(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_502(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_455(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_503(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_345(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15564;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15563;
		}
		else
		{
			iVar0 = Global_262145.f_15545;
		}
		iVar1 = 19;
	}
	else if (func_344(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_200(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_15544;
			iVar1 = 20;
		}
	}
	else if (func_291(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15564;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15563;
		}
		else
		{
			iVar0 = Global_262145.f_15545;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_507(func_390()), func_506(func_390()), func_510(), func_509(), iVar1, iVar0);
	}
	func_505(iVar0);
	func_504(iVar0);
	return iVar0;
}

void func_504(int iParam0)
{
	int iVar0;
	
	iVar0 = func_370(3936, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_274 = iVar0;
	func_368(3936, iVar0, -1, 1, 0);
}

void func_505(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	Global_1614576[iVar0 /*324*/].f_10.f_273 = (Global_1614576[iVar0 /*324*/].f_10.f_273 + iParam0);
	if (Global_1614576[iVar0 /*324*/].f_10.f_273 < -9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
	else if (Global_1614576[iVar0 /*324*/].f_10.f_273 > 9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
}

int func_506(int iParam0)
{
	if (iParam0 == func_60())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[1];
}

int func_507(int iParam0)
{
	if (iParam0 == func_60())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[0];
}

int func_508(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_114(unk_0x0C1D3C552325765B()) || func_133(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_509()
{
	if (Global_1750569.f_3 != 0)
	{
		return Global_1750569.f_3;
	}
	return -1;
}

int func_510()
{
	if (Global_1750569.f_2 != 0)
	{
		return Global_1750569.f_2;
	}
	return -1;
}

int func_511(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_60();
	iVar1 = func_60();
	iVar2 = func_60();
	return func_512(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_512(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_335(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0x88B0F0DC270164B7(&(Var0.f_63), 2);
	return func_316(&Var0);
}

int func_513(int iParam0)
{
	int iVar0;
	
	iVar0 = func_171(iParam0);
	if (iVar0 != -1)
	{
		return func_169(iVar0);
	}
	return 1;
}

char* func_514(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		uVar0 = func_355(&(Global_1614576[iParam0 /*324*/].f_10.f_97));
		return uVar0;
	}
	if (Global_1614576[iParam0 /*324*/].f_10.f_113 != Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_113)
	{
		uVar0 = func_356(iParam0, 0);
		return uVar0;
	}
	if (((func_99(iParam0, 28) || func_99(unk_0x0C1D3C552325765B(), 28)) || func_359(iParam0)) && !func_358(iParam0))
	{
		return func_356(iParam0, 0);
	}
	iVar1 = func_61(iParam0);
	if (iVar1 != func_60())
	{
		if (iVar1 != unk_0x0C1D3C552325765B())
		{
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_356(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_60())
	{
		uVar0 = func_355(&(Global_1614576[iVar1 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(uVar0))
		{
			return func_356(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_515()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_636() && !func_272())
	{
		return;
	}
	if (!func_336())
	{
		return;
	}
	iVar0 = unk_0x0C1D3C552325765B();
	if (func_17(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	}
	iVar1 = func_124(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_99.f_847)))
	{
		iVar2 = (func_10() - func_529(&(Local_99.f_847), 0, 0));
		iVar3 = (func_528() - Local_99.f_115);
		func_526(iVar2);
		if (iVar2 > 30000)
		{
			func_516(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_516(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_516(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_516(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_524(0) == 0)
	{
		return;
	}
	func_523();
	func_520(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_430(sParam4))
	{
		sVar0 = sParam4;
	}
	func_517(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_517(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_519(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_518(7, iVar0);
		Global_1344178.f_4131[iVar0] = uParam0;
		StringCopy(&(Global_1344178.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_4131.f_172[iVar0] = iParam2;
		Global_1344178.f_4131.f_216[iVar0] = iParam3;
		Global_1344178.f_4131.f_183[iVar0] = iParam4;
		Global_1344178.f_4131.f_194[iVar0] = iParam5;
		Global_1344178.f_4131.f_249[iVar0] = iParam6;
		Global_1344178.f_4131.f_260[iVar0] = iParam7;
		Global_1344178.f_4131.f_205[iVar0] = uParam8;
		Global_1344178.f_4131.f_314[iVar0] = iParam9;
		Global_1344178.f_4131.f_325[iVar0] = iParam10;
		Global_1344178.f_4131.f_357[iVar0] = iParam11;
		Global_1344178.f_4131.f_238[iVar0] = uParam12;
		Global_1344178.f_4131.f_271[iVar0] = iParam13;
		Global_1344178.f_4131.f_368[iVar0] = iParam14;
		Global_1344178.f_4131.f_379[iVar0] = iParam15;
		Global_1344178.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_518(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_519(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

void func_520(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_519(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_518(6, iVar0);
		Global_1344178.f_3579[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_3579.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_3579.f_183[iVar0] = iParam3;
		Global_1344178.f_3579.f_172[iVar0] = iParam2;
		Global_1344178.f_3579.f_260[iVar0] = iParam4;
		Global_1344178.f_3579.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1344178.f_3579.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1344178.f_3579.f_443[iVar0] = iParam7;
		Global_1344178.f_3579.f_454[iVar0] = iParam8;
		Global_1344178.f_3579.f_497[iVar0] = iParam9;
		Global_1344178.f_3579.f_508[iVar0] = iParam10;
		Global_1344178.f_3579.f_205[iVar0] = iParam11;
		Global_1344178.f_3579.f_216[iVar0] = iParam12;
		Global_1344178.f_3579.f_227[iVar0] = iParam13;
		Global_1344178.f_3579.f_238[iVar0] = iParam14;
		Global_1344178.f_3579.f_249[iVar0] = iParam15;
		Global_1344178.f_3579.f_519[iVar0] = iParam16;
		Global_1344178.f_3579.f_530[iVar0] = iParam17;
		Global_1344178.f_3579.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_522())
		{
			Global_1344178.f_941 = 1;
		}
		if (unk_0x955B8C8F89CC3AC0())
		{
			iVar2 = 0;
			unk_0x28EBEB55C44FD509(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1344178.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1344178.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1344178.f_941 = 1;
			}
			if (func_521())
			{
				Global_1344178.f_945 = 1;
			}
		}
	}
}

int func_521()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x955B8C8F89CC3AC0())
	{
		unk_0x28EBEB55C44FD509(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_522()
{
	if ((unk_0x70C239EC67257485() == 8 || unk_0x70C239EC67257485() == 9) || unk_0x70C239EC67257485() == 10)
	{
		return 1;
	}
	return 0;
}

void func_523()
{
	unk_0x7ABD1B29E6C2963D(8);
	unk_0x7ABD1B29E6C2963D(9);
	unk_0x7ABD1B29E6C2963D(6);
	unk_0x7ABD1B29E6C2963D(7);
	Global_2453276 = 1;
}

int func_524(bool bParam0)
{
	if (func_525())
	{
		return 0;
	}
	if (func_255())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_706(unk_0x0C1D3C552325765B(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_525()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 12);
}

void func_526(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(iLocal_1421, 8))
	{
		func_527();
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_1421, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0xB49DAD10DC051295("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0x88B0F0DC270164B7(&iLocal_1421, 15);
				unk_0x88B0F0DC270164B7(&iLocal_1421, 9);
				unk_0x0756AF366187C194("AllowScoreAndRadio", 1);
				unk_0x5A6B86444D23FCA8(0);
				unk_0x0756AF366187C194("WantedMusicDisabled", 1);
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(iLocal_1421, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_1421, 11))
			{
				if (unk_0x27971883A8701E73("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0x88B0F0DC270164B7(&iLocal_1421, 11);
				}
			}
			else
			{
				unk_0x08BA6DD398CA197C(iLocal_1421, 11);
				if (!unk_0x08BA6DD398CA197C(iLocal_1421, 14))
				{
					if (unk_0xB49DAD10DC051295("APT_COUNTDOWN_30S"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_1421, 14);
					}
				}
			}
			if (unk_0x08BA6DD398CA197C(iLocal_1421, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_1421, 12))
					{
						unk_0x5A6B86444D23FCA8(1);
						unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
						unk_0x88B0F0DC270164B7(&iLocal_1421, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0xB49DAD10DC051295("APT_FADE_IN_RADIO"))
						{
							unk_0x8821193EA2732C2C("APT_COUNTDOWN_30S_KILL");
							unk_0x09C86C0C5CA26B1E(&iLocal_1421, 9);
						}
					}
				}
			}
		}
	}
}

void func_527()
{
	if (unk_0x08BA6DD398CA197C(iLocal_1421, 8))
	{
		if (unk_0x08BA6DD398CA197C(iLocal_1421, 9))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_1421, 10))
			{
				if (unk_0x08BA6DD398CA197C(iLocal_1421, 11))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_1421, 12))
					{
						unk_0x5A6B86444D23FCA8(1);
						unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
						unk_0x0756AF366187C194("WantedMusicDisabled", 0);
					}
				}
				if (!unk_0x08BA6DD398CA197C(iLocal_1421, 16))
				{
					if (unk_0xB49DAD10DC051295("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_1421, 16);
					}
				}
				if (unk_0x08BA6DD398CA197C(iLocal_1421, 16))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_1421, 13))
					{
						if (unk_0xB49DAD10DC051295("APT_FADE_IN_RADIO"))
						{
							unk_0x88B0F0DC270164B7(&iLocal_1421, 13);
						}
					}
					if (unk_0x08BA6DD398CA197C(iLocal_1421, 13))
					{
						unk_0x88B0F0DC270164B7(&iLocal_1421, 10);
					}
				}
			}
		}
	}
}

int func_528()
{
	return 4;
}

int func_529(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0);
		}
		else
		{
			return unk_0xDDEA1623E4BFD71B(unk_0xB3FCCA0C64473451(), *uParam0);
		}
	}
	return unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0);
}

void func_530()
{
	int iVar0;
	struct<8> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar17 = unk_0x0C1D3C552325765B();
	iVar18 = unk_0x848AF823A8EA3C62();
	if (func_17(unk_0x0C1D3C552325765B(), 0))
	{
		iVar18 = func_273();
		iVar17 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	}
	iVar19 = func_124(iVar17);
	if (!func_17(unk_0x0C1D3C552325765B(), 0))
	{
		if (!func_336())
		{
			if (func_547("HUNT_OBJ"))
			{
				func_570();
			}
			if (func_547("HUNT_OBJ1L"))
			{
				func_570();
			}
			if (func_547("HUNT_TOBJ"))
			{
				func_570();
			}
			if (func_547("HUNT_DOBJ"))
			{
				func_570();
			}
			if (func_547("HUNT_DOBJ1L"))
			{
				func_570();
			}
			return;
		}
	}
	else if (!unk_0x08BA6DD398CA197C(Local_971[iVar18 /*14*/].f_1, 6))
	{
		func_570();
		return;
	}
	if (iVar19 < 3)
	{
		if (func_547("HUNT_OBJ"))
		{
			func_570();
		}
		if (func_547("HUNT_OBJ1L"))
		{
			func_570();
		}
		if (func_547("HUNT_TOBJ"))
		{
			func_570();
		}
		if (func_547("HUNT_DOBJ"))
		{
			func_570();
		}
		if (func_547("HUNT_DOBJ1L"))
		{
			func_570();
		}
		return;
	}
	bVar20 = func_546() == true;
	if (iVar18 == Local_99.f_118)
	{
		if (!bVar20)
		{
			if (!func_547("HUNT_OBJ"))
			{
				func_543("HUNT_OBJ", 0);
			}
		}
		else if (!func_547("HUNT_OBJ1L"))
		{
			func_543("HUNT_OBJ1L", 0);
		}
	}
	else if (func_637() == Local_99.f_118)
	{
		if (!bVar20)
		{
			if (!func_547("HUNT_OBJ"))
			{
				func_543("HUNT_OBJ", 0);
			}
		}
		else if (!func_547("HUNT_OBJ1L"))
		{
			func_543("HUNT_OBJ1L", 0);
		}
	}
	else if (func_272())
	{
		if (Local_99.f_119 > -1)
		{
			if (!bVar20)
			{
				if (!func_547("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_514(unk_0x81C85E54237F8A2E(Local_99.f_119)), 64);
					iVar0 = func_513(unk_0x81C85E54237F8A2E(Local_99.f_119));
					func_531("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_547("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_514(unk_0x81C85E54237F8A2E(Local_99.f_119)), 64);
				iVar0 = func_513(unk_0x81C85E54237F8A2E(Local_99.f_119));
				func_531("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_531(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_532(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312571 = 16;
		Global_1312571.f_56 = iParam2;
	}
}

int func_532(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (func_542(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_536();
	Global_1312571 = 3;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = uParam3;
	Global_1312571.f_56 = uParam3;
	func_535();
	func_534(bParam2);
	func_533();
	return 1;
}

void func_533()
{
	unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 1);
}

void func_534(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_1312571.f_59), 0);
}

void func_535()
{
	Global_1312571.f_10 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 86400000);
	Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
}

void func_536()
{
	func_538();
	func_537(0);
}

void func_537(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xA86CA03D9749EEB3();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x4B50AAB32FBE0483();
		Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
	}
	StringCopy(&(Global_1312571.f_12), "", 16);
	StringCopy(&(Global_1312571.f_16), "", 64);
	StringCopy(&(Global_1312571.f_32), "", 64);
	Global_1312571.f_52 = 0;
	Global_1312571.f_53 = 0;
	Global_1312571.f_54 = 0;
	Global_1312571.f_55 = -1;
	Global_1312571.f_56 = 0;
	Global_1312571.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_538()
{
	if (!func_541())
	{
	}
	if (func_540())
	{
		unk_0x775C13C3833376FE(&(Global_1312571.f_12));
		func_539();
		unk_0x953FDEB57BB0D276();
	}
}

void func_539()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		default:
	}
}

int func_540()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

int func_541()
{
	if (!func_540())
	{
		return 0;
	}
	unk_0xD6B5839441DD3BED(&(Global_1312571.f_12));
	func_539();
	return unk_0x7A2AFC1B08BD3742();
}

bool func_542(char* sParam0, char* sParam1)
{
	if (!func_540())
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam1))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12)))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam1) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

void func_543(char* sParam0, bool bParam1)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return;
	}
	if (func_544(sParam0))
	{
		return;
	}
	func_536();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_535();
	func_534(bParam1);
	func_533();
}

bool func_544(char* sParam0)
{
	if (!func_540())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_545(uParam0);
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12));
}

bool func_545(char* sParam0)
{
	if (!func_540())
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

int func_546()
{
	return (4 - Local_99.f_115);
}

int func_547(char* sParam0)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (!func_540())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		if (unk_0x8BC27E98D5626ED8(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	return func_544(sParam0);
}

void func_548()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_636() && !func_272())
	{
		return;
	}
	if (!func_336())
	{
		return;
	}
	iVar1 = func_60();
	iVar2 = -1;
	if (!func_17(unk_0x0C1D3C552325765B(), 0))
	{
		iVar1 = unk_0x0C1D3C552325765B();
		iVar2 = unk_0x848AF823A8EA3C62();
	}
	else
	{
		iVar2 = func_273();
		iVar1 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_1420, 1))
	{
		iVar0 = func_124(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_99.f_118 || func_637() == Local_99.f_118)
			{
				if (func_553(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_315(85, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2);
					if (iVar2 == unk_0x848AF823A8EA3C62())
					{
						func_552(1);
						func_549(-1, 0, 0, -1);
					}
				}
			}
			else
			{
				if (iVar2 == unk_0x848AF823A8EA3C62())
				{
					func_549(-1, 0, 0, -1);
				}
				func_315(85, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2);
			}
		}
		unk_0x88B0F0DC270164B7(&iLocal_1420, 1);
	}
}

void func_549(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_95(unk_0x0C1D3C552325765B());
	if (iParam2 || func_291(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1750587 = iVar0;
		if (func_345(iVar0))
		{
			Global_1750587.f_1 = 4;
		}
		else if (func_344(iVar0))
		{
			Global_1750587.f_1 = 5;
		}
		else if (func_200(iVar0, 0))
		{
			Global_1750587.f_1 = 2;
			if (func_364(iVar0))
			{
				Global_1750587.f_1 = 3;
			}
		}
		else
		{
			Global_1750587.f_1 = 1;
		}
		if (func_390() != func_60())
		{
			Global_1750587.f_4 = func_507(func_390());
			Global_1750587.f_5 = func_506(func_390());
		}
		if (func_229() != func_60())
		{
			func_389(func_229(), &(Global_1750587.f_6), &(Global_1750587.f_7));
		}
		Global_1750587.f_9 = unk_0x39E54E7BC7452169();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1750587.f_27 = 1;
			Global_1750587.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1750587.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1750587.f_40 = func_456(iParam1);
			Global_1750587.f_41 = func_551();
			Global_1750587.f_42 = func_457(unk_0x0C1D3C552325765B(), iParam1);
			Global_1750587.f_44 = func_502(unk_0x0C1D3C552325765B(), iParam1);
		}
	}
	else
	{
		if (func_390() != func_60())
		{
			Global_1750569 = func_507(func_390());
			Global_1750569.f_1 = func_506(func_390());
		}
		Global_1750569.f_5 = unk_0x39E54E7BC7452169();
		Global_1750569.f_13 = func_550();
		Global_1750569.f_15 = 0;
		if (func_388(1))
		{
			if (func_229() == func_390())
			{
				Global_1750569.f_15 = 1;
			}
		}
	}
}

int func_550()
{
	int iVar0;
	
	iVar0 = func_390();
	if (iVar0 != func_60())
	{
		return Global_1614576[iVar0 /*324*/].f_10.f_91;
	}
	return 0;
}

var func_551()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_454(unk_0x0C1D3C552325765B(), iVar0))
		{
			unk_0x88B0F0DC270164B7(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_552(bool bParam0)
{
	if (bParam0)
	{
		if (!func_99(unk_0x0C1D3C552325765B(), 9))
		{
			if (func_124(unk_0x0C1D3C552325765B()) != 0)
			{
				func_100(9);
			}
		}
	}
	else if (func_99(unk_0x0C1D3C552325765B(), 9))
	{
		func_98(9);
	}
}

int func_553(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_554(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_554(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_564();
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
	if (func_563() == 0)
	{
		func_561();
		return 0;
	}
	func_560(Global_16812);
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
		func_559(0);
		func_559(2);
		func_559(1);
	}
	else
	{
		func_564();
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
					func_559(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_559(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_559(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_559(3);
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
		func_564();
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
			if (!func_351())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_558(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_555(1);
			func_558(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_555(int iParam0)
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
		if (func_557(14))
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
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
							{
								if (iVar1 == 14)
								{
									func_556(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_556(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_556(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_556(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_556(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
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
								func_152(&(Global_2320[iVar1 /*15*/]));
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
								func_152(&(Global_2320[iVar1 /*15*/]));
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
								func_152(&(Global_2320[iVar1 /*15*/]));
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
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
								func_556(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_556(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_556(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0x509383441597090D(uParam7))
	{
		func_152(sParam7);
	}
	if (!unk_0x509383441597090D(iParam8))
	{
		func_152(iParam8);
	}
	if (!unk_0x509383441597090D(iParam9))
	{
		func_152(iParam9);
	}
	if (!unk_0x509383441597090D(iParam10))
	{
		func_152(iParam10);
	}
	if (!unk_0x509383441597090D(iParam11))
	{
		func_152(iParam11);
	}
	unk_0xE73340DA551C95E1();
}

bool func_557(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_558(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_559(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101553.f_12906[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_560(int iParam0)
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

void func_561()
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
		if (!func_562(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_24 = 1;
}

int func_562(struct<6> Param0, struct<6> Param6)
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

int func_563()
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
			if (!func_562(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
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

void func_564()
{
	if (func_557(14))
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
		Global_14443 = func_565();
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

var func_565()
{
	func_566();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_566()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_569(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_568(unk_0xA0081090911D13E5());
			if (func_567(iVar0) && (!func_557(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_567(Global_101553.f_1991.f_539.f_3549))
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

bool func_567(int iParam0)
{
	return iParam0 < 3;
}

int func_568(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_569(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_569(int iParam0)
{
	if (func_567(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_570()
{
	if (!func_540())
	{
		return;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == Global_1312571.f_9)
	{
		return;
	}
	func_536();
}

void func_571()
{
	if (func_17(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	switch (Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_9)
	{
		case 0:
			func_573();
			func_284();
			if (Local_99.f_117 == 2)
			{
				Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_9 = 2;
			}
			else if (Local_99.f_117 == 3)
			{
				Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_284();
			if (func_572())
			{
				func_527();
			}
			if (Local_99.f_117 == 3)
			{
				Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_650();
			break;
	}
}

bool func_572()
{
	return ((unk_0x08BA6DD398CA197C(Local_99.f_1, 1) || unk_0x08BA6DD398CA197C(Local_99.f_1, 3)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 5));
}

void func_573()
{
	func_593();
	func_592();
	func_548();
	func_530();
	func_582();
	func_581();
	func_576();
	func_575();
	func_515();
	func_574();
}

void func_574()
{
}

void func_575()
{
	if (func_572())
	{
		return;
	}
	if (!func_636())
	{
		return;
	}
	if (!Global_262145.f_12900)
	{
		return;
	}
	if (Local_99.f_115 == 0)
	{
		return;
	}
}

void func_576()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_636())
	{
		return;
	}
	if (func_572())
	{
		return;
	}
	fVar4 = func_134(&iVar0, 1);
	if (fVar4 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_1427 != iVar0)
			{
				Var1 = { unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 0) };
				func_87(10, 0, 0);
				func_577(Var1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
				iLocal_1427 = iVar0;
				unk_0x88B0F0DC270164B7(&iLocal_1420, 16);
			}
		}
	}
	else if (fVar4 > 250000f)
	{
		func_311();
	}
}

void func_577(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0x96549B1C2E196049(Global_2412480.f_6))
	{
		if (!Global_2412480.f_6 == unk_0xEAE20F1125B83888())
		{
			return;
		}
	}
	else
	{
		Global_2412480.f_6 = unk_0xEAE20F1125B83888();
	}
	Var0.f_6 = Global_2412480.f_6;
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
	if (func_578(unk_0x0C1D3C552325765B()))
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
	Global_2412480 = { Var0 };
}

int func_578(int iParam0)
{
	if ((func_579(iParam0, 1) || func_122(iParam0)) || func_96(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_579(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
	{
		return func_580(iParam0) != 0;
	}
	return func_252(iParam0, bParam1);
}

int func_580(int iParam0)
{
	if (func_706(iParam0, 0, 1))
	{
		return Global_2421327[iParam0 /*353*/].f_1;
	}
	return 0;
}

void func_581()
{
	int iVar0;
	
	if (iLocal_1424 != Local_99.f_115)
	{
		if (func_636())
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
				{
					if (!unk_0xA012E3A84A2B2F1A())
					{
						iVar0 = unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B());
						switch (Local_99.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_12897)
								{
									unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), Global_262145.f_12897, 0);
									unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_12898)
								{
									unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), Global_262145.f_12898, 0);
									unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_12899)
								{
									unk_0xCF03D9C8A7F1577C(Global_262145.f_12899);
									unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), Global_262145.f_12899, 0);
									unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
								}
								break;
						}
						iLocal_1424 = Local_99.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_1424 = Local_99.f_115;
		}
	}
}

void func_582()
{
	int iVar0;
	
	if (!func_336())
	{
		if (func_591("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		return;
	}
	iVar0 = func_124(unk_0x0C1D3C552325765B());
	if (iVar0 < 2)
	{
		if (func_591("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_1420, 2))
	{
		if (!func_590(85))
		{
			if (func_584(0, 1, 1, 1))
			{
				if (unk_0x848AF823A8EA3C62() == Local_99.f_118)
				{
					func_583("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_293(1);
					unk_0x88B0F0DC270164B7(&iLocal_1420, 2);
				}
				else if (func_637() == Local_99.f_118)
				{
					func_583("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_293(1);
					unk_0x88B0F0DC270164B7(&iLocal_1420, 2);
				}
				else if (func_272())
				{
					func_583("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_293(1);
					unk_0x88B0F0DC270164B7(&iLocal_1420, 2);
				}
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(iLocal_1420, 2))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_1420, 3))
		{
			if (func_584(0, 1, 1, 1))
			{
				if (!func_591("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (unk_0x848AF823A8EA3C62() == Local_99.f_118 || func_637() == Local_99.f_118)
					{
						func_294("HUNT_HELPB", -1);
						func_293(1);
						unk_0x88B0F0DC270164B7(&iLocal_1420, 3);
					}
				}
			}
		}
	}
}

void func_583(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x55B5433015A91E85(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x212C24688D441F9E(iParam2);
	}
	unk_0xBDE6EEC5F6BDC060(sParam1);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam3);
}

int func_584(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x598A9E990F05F82C())
	{
		return 0;
	}
	if (func_589())
	{
		return 0;
	}
	if (!unk_0xB20CA7A3EE29687A())
	{
		return 0;
	}
	if (func_262())
	{
		return 0;
	}
	if (func_352())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_252(unk_0x0C1D3C552325765B(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_588(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (func_587())
	{
		return 0;
	}
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (Global_1573695)
	{
		return 0;
	}
	if (func_586())
	{
		return 0;
	}
	if (func_585())
	{
		return 0;
	}
	if (func_255())
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (Global_2490098)
	{
		return 0;
	}
	return 1;
}

bool func_585()
{
	return Global_2442442.f_569;
}

bool func_586()
{
	return Global_2442442.f_721;
}

bool func_587()
{
	return Global_2432628.f_2489.f_585;
}

int func_588(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_589()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

bool func_590(int iParam0)
{
	return Global_2432628.f_2198[0 /*72*/].f_1 == iParam0;
}

bool func_591(char* sParam0, char* sParam1)
{
	unk_0xA277242E6FB38513(sParam0);
	unk_0xBDE6EEC5F6BDC060(sParam1);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_592()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_134(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_117(unk_0x0C1D3C552325765B()))
		{
			func_116();
		}
	}
}

void func_593()
{
	if (func_126())
	{
		if (unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1, 1))
		{
			func_102(0);
			unk_0x09C86C0C5CA26B1E(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_124(unk_0x0C1D3C552325765B()) == 0)
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1, 1))
	{
		if (!func_636())
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
			{
				func_102(1);
				unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_1), 1);
			}
		}
	}
}

void func_594()
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
		if (!unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_2, iVar0))
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_110, iVar0))
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							if (func_637() == Local_99.f_118)
							{
								if (func_612(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1)))
								{
									unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_3, iVar0))
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_112, iVar0))
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_2))
				{
					if (func_611(iVar0))
					{
						unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_4, iVar0))
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_111, iVar0))
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xB53CC268A7051C62(unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 1), 10f, 1))
						{
							unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_610(iVar0);
		if (func_336())
		{
			if (!unk_0x16833EFAA58E63DB(uLocal_1435[iVar0]))
			{
				if (!func_572())
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							uLocal_1435[iVar0] = unk_0x91B4D18C6AFDC14C(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1));
							if (func_637() == Local_99.f_118)
							{
								unk_0x420759DE4A6A9555(uLocal_1435[iVar0], 12);
								unk_0x32479C670EB9962F(uLocal_1435[iVar0], 432);
								func_609(&(uLocal_1435[iVar0]), 6);
							}
							else
							{
								unk_0x32479C670EB9962F(uLocal_1435[iVar0], 480);
								func_609(&(uLocal_1435[iVar0]), 9);
							}
							unk_0x3AE9C8E8575D2576(uLocal_1435[iVar0], 1);
							unk_0xFB70601EAE8F9B9E(uLocal_1435[iVar0], 7000);
							unk_0xC40118229E47A3D7(uLocal_1435[iVar0], 1.1f);
							unk_0x6F18BFEFE84565FF(uLocal_1435[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					unk_0x0B57C567D698C373(&(uLocal_1435[iVar0]));
				}
				else if (func_572())
				{
					unk_0x0B57C567D698C373(&(uLocal_1435[iVar0]));
				}
			}
		}
		else if (unk_0x16833EFAA58E63DB(uLocal_1435[iVar0]))
		{
			unk_0x0B57C567D698C373(&(uLocal_1435[iVar0]));
		}
		func_608(iVar0);
		func_607(iVar0);
		func_605(iVar0);
		switch (Local_99.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (unk_0xD9E8CA806A80203D())
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x72550A6F2BC0E12B(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar0 /*26*/].f_2)))
								{
									if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										unk_0x1F1428EF73399830(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0xD9E8CA806A80203D())
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_2))
					{
						if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x72550A6F2BC0E12B(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar0 /*26*/].f_2)))
									{
										if ((unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || unk_0x08BA6DD398CA197C(Local_99.f_108, iVar0))
										{
											unk_0x1F1428EF73399830(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (unk_0x08BA6DD398CA197C(Local_99.f_108, iVar0))
											{
												unk_0x09C86C0C5CA26B1E(&(Local_99.f_108), iVar0);
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
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_603(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xB480350E4250D92A(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x8474D2383AC8AF53(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_603(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xB480350E4250D92A(Local_99.f_2[iVar0 /*26*/].f_1))
									{
										unk_0x971ED137B3AF56D8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_603(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xB480350E4250D92A(Local_99.f_2[iVar0 /*26*/].f_1))
									{
										uVar2 = func_601(iVar0);
										if (!unk_0xEB361B4BD195A4D3(uVar2))
										{
											unk_0x69E46DC398F0B2BD(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xB480350E4250D92A(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							unk_0xF674E664795C8CB3(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_603(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xB480350E4250D92A(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 0);
									unk_0x336610737255D8A5(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xB480350E4250D92A(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							unk_0xF674E664795C8CB3(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_603(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xB480350E4250D92A(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x8A086FF68E8ABF6C(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 1);
									iVar4 = func_600(iVar0, &uVar5);
									if (iVar4 != func_60())
									{
										unk_0x8FFB323431242036(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), unk_0x21F191D9AFF98B5E(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_603(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xB480350E4250D92A(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x6CD01BB6BE485005(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
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
			switch (Local_99.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_603(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xB480350E4250D92A(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x6CD01BB6BE485005(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_603(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xB480350E4250D92A(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0x336610737255D8A5(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_603(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xB480350E4250D92A(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0x336610737255D8A5(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (unk_0x4745637EEB85132D(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_603(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (unk_0xB480350E4250D92A(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 1);
											unk_0x8474D2383AC8AF53(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 3, 1);
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
	if (func_636())
	{
		func_595();
	}
}

void func_595()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_596(uLocal_1681[iVar0], &(Local_1440[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_596(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		if (func_599())
		{
			Global_2432628 = unk_0x0C1D3C552325765B();
		}
		if (bParam3)
		{
			func_598(unk_0x564EAE6038A81C07(uParam0), uParam1, 1, Global_2432628, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_598(unk_0x564EAE6038A81C07(uParam0), uParam1, -1, Global_2432628, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x16833EFAA58E63DB(*uParam1))
	{
		func_597(uParam1);
	}
}

void func_597(var uParam0)
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

int func_598(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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
				if (!unk_0x509383441597090D(sParam7))
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

bool func_599()
{
	return Global_1315206;
}

int func_600(int iParam0, var uParam1)
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
	Var3 = { unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1) };
	iVar6 = 0;
	while (iVar6 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar6)))
		{
			iVar7 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar6));
			if (!func_17(iVar7, 0))
			{
				uVar8 = unk_0x21F191D9AFF98B5E(iVar7);
				if (iVar6 == Local_99.f_118 || Local_971[iVar6 /*14*/].f_10 == Local_99.f_118)
				{
					if (!unk_0xEB361B4BD195A4D3(uVar8))
					{
						fVar2 = unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(iVar8, 1), Var3);
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

var func_601(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_602(iParam0);
	if (iVar1 != func_60())
	{
		uVar0 = unk_0x21F191D9AFF98B5E(iVar1);
	}
	return uVar0;
}

int func_602(int iParam0)
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
	Var4 = { unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 0) };
	iVar3 = 0;
	while (iVar3 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar3)))
		{
			iVar7 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar3));
			uVar8 = unk_0x21F191D9AFF98B5E(iVar7);
			if (func_167(iVar7, 1))
			{
				if (!unk_0x08BA6DD398CA197C(Local_971[iVar3 /*14*/].f_1, 1))
				{
					if (func_61(iVar7) == unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(Local_99.f_118)))
					{
						if (!unk_0xEB361B4BD195A4D3(uVar8))
						{
							fVar2 = unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(iVar8, 1), Var4);
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

int func_603(var uParam0)
{
	if (unk_0x2042D9774DF3D324(uParam0))
	{
		return 1;
	}
	if (func_604(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_604(var uParam0)
{
	if (!unk_0xD9E8CA806A80203D())
	{
		return 0;
	}
	if (!unk_0x3CF373660FCFAFCE(uParam0))
	{
		return 0;
	}
	if (func_42(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_605(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	
	if (!func_336())
	{
		return;
	}
	if (func_124(unk_0x0C1D3C552325765B()) < 1)
	{
		return;
	}
	if (!func_636() && !func_272())
	{
		return;
	}
	if (func_572())
	{
		return;
	}
	if (func_636())
	{
		unk_0x29F530EB20218AC0(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0x29F530EB20218AC0(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_99.f_2[iParam0 /*26*/].f_1))
		{
			if (!unk_0x4745637EEB85132D(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1)))
			{
				Var4 = { unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1) };
				unk_0xA75B05D6DFDD8308(2, Var4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				uVar7 = unk_0xF8DB47D339B8B953(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 0);
				func_606(uVar7, uVar0, uVar1, uVar2);
			}
		}
	}
}

void func_606(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	unk_0xA75B05D6DFDD8308(2, unk_0xC59DF10B4FC39DF8(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_607(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	bool bVar8;
	
	if (Local_99.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_99.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_637() != Local_99.f_118)
	{
		return;
	}
	if (unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
	Var4 = { unk_0xC59DF10B4FC39DF8(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 5625f)
	{
		unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_13), iParam0);
		return;
	}
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_3[iVar7]))
		{
			if (!func_14(Local_99.f_2[iParam0 /*26*/].f_3[iVar7]))
			{
				bVar8 = true;
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_13), iParam0);
	}
}

void func_608(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	if (Local_99.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_99.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_637() != Local_99.f_118)
	{
		return;
	}
	if (unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
	Var4 = { unk_0xC59DF10B4FC39DF8(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 62500f)
	{
		unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_12), iParam0);
		return;
	}
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_3[iVar8]))
		{
			if (func_14(Local_99.f_2[iParam0 /*26*/].f_3[iVar8]))
			{
				unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_12), iParam0);
			}
			else
			{
				uVar7 = unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_3[iVar8]);
				if (func_637() == Local_99.f_118)
				{
					if (unk_0xB7A628320EFF8E47(Var1, Var4) < 40000f)
					{
						unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_12), iParam0);
						return;
					}
					if (func_612(uVar7))
					{
						unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar8++;
	}
}

void func_609(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		uVar0 = func_308(iParam1);
		unk_0x77804F3DCBA01DB5(*uParam0, uVar0);
	}
}

void func_610(int iParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (Local_99.f_2[iParam0 /*26*/] == 0)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_1))
		{
			if (unk_0xB480350E4250D92A(Local_99.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_99.f_2[iParam0 /*26*/].f_1))
				{
					if (!unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = unk_0x39053CCA2C4B5DA1(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							Var2 = { unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 1) };
							Var5 = { Var2 };
							Var5.f_2 = (Var5.f_2 + 500f);
							if (unk_0x776447CD667051CD(Var5, &fVar1, 0))
							{
								if (unk_0x7466327978A6A24C((Var2.f_2 - fVar1)) > 30f)
								{
									unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*26*/].f_1), 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_611(int iParam0)
{
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_99.f_2[iParam0 /*26*/].f_2))
		{
			if (unk_0x9E7343C699F331A6(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_2), 0, 7000) || unk_0x9E7343C699F331A6(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*26*/].f_2), 1, 40000))
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

int func_612(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), uParam0))
	{
		return 1;
	}
	if (unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), uParam0))
	{
		return 1;
	}
	if (func_613())
	{
		if (unk_0xA6804C0975090D0A(unk_0x0C1D3C552325765B(), &uVar0))
		{
			if (unk_0x60F161681C368C4E(uVar0))
			{
				uVar1 = unk_0x90897FA118314142(iVar0);
				if (unk_0xD3FACCDA4D66AEAD(uVar1))
				{
					if (!unk_0x912AD5A10E7633F0(iVar1, 0))
					{
						if (unk_0x39FEE545B315414E(iVar1, 0))
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

bool func_613()
{
	return Global_1573842;
}

void func_614()
{
	int iVar0;
	int iVar1;
	
	if (Local_99.f_0 != 4)
	{
		iVar1 = unk_0x81C85E54237F8A2E(iLocal_1423);
		if (unk_0xCB129F9A01D14082(iVar1))
		{
			if (unk_0x3F3C7C3B52DD0ECA(iVar1))
			{
				if (!func_572())
				{
					if (!func_636())
					{
						if (func_272())
						{
							if (func_167(iVar1, 1))
							{
								iVar0 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(Local_99.f_118));
								if (func_71(iVar1, iVar0, 1))
								{
									if (!unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_8, iLocal_1423))
									{
										func_309(iVar1, 432, 1);
										func_304(iVar1, func_308(iLocal_1712), 1);
										unk_0x88B0F0DC270164B7(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_8), iLocal_1423);
									}
								}
							}
						}
					}
				}
			}
			else if (unk_0x08BA6DD398CA197C(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_8, iLocal_1423))
			{
				func_309(iVar1, 432, 0);
				func_304(iVar1, func_308(iLocal_1712), 0);
				unk_0x09C86C0C5CA26B1E(&(Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_8), iLocal_1423);
			}
		}
	}
	iLocal_1423++;
	if (iLocal_1423 >= 32)
	{
		iLocal_1423 = 0;
	}
}

int func_615()
{
	if (func_616(1))
	{
		return 1;
	}
	if (Global_2482149.f_4698.f_18)
	{
		Global_2482149.f_4698.f_18 = 0;
		return 1;
	}
	if (func_229() == func_60() || !func_706(func_229(), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_616(bool bParam0)
{
	bool bVar0;
	
	if (!func_388(1))
	{
		bVar0 = false;
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 != func_60())
		{
			if (func_706(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55, 0, 1))
			{
				if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 == 4 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 == 8)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_617(func_95(unk_0x0C1D3C552325765B())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_441(31);
				if (func_291(func_95(unk_0x0C1D3C552325765B())))
				{
					func_441(83);
				}
				if (unk_0xCB129F9A01D14082(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55))
				{
					Global_1613160 = func_320(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55, -2, 0, 0);
					if (!func_228(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55))
					{
						func_441(90);
					}
				}
				else
				{
					Global_1613160 = 1;
				}
				Global_1613144 = { Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_97 };
			}
			return 1;
		}
	}
	return 0;
}

int func_617(int iParam0)
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
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_618()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_99.f_2[iVar1 /*26*/] == 2)
			{
				if (func_43(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_1681[iVar0] = Local_99.f_2[iVar1 /*26*/].f_3[iVar2];
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

void func_619()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (unk_0x848AF823A8EA3C62() == Local_99.f_118 || func_637() == Local_99.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
			{
				unk_0x48262A314D66BAF1(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_1), unk_0x0C1D3C552325765B(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					unk_0x48262A314D66BAF1(unk_0x564EAE6038A81C07(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), unk_0x0C1D3C552325765B(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_620()
{
	if (Local_99.f_118 > -1)
	{
		iLocal_1712 = func_513(unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(Local_99.f_118)));
	}
}

void func_621(float fParam0)
{
	float fVar0;
	
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_306())
	{
		return;
	}
	fVar0 = (Global_2482149.f_4693 - fParam0);
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && unk_0x7466327978A6A24C(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2482149.f_4693 = fParam0;
	Global_2482149.f_4694 = unk_0xEAE20F1125B83888();
}

void func_622(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 != iParam0)
	{
		func_635(-1);
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 = iParam0;
		if (func_634() != -1)
		{
			func_633(-1);
		}
		if (func_632() != -1)
		{
			func_631(-1);
		}
		func_630(iParam2);
		func_628(iParam0);
		if (!func_106(iParam0))
		{
			fVar0 = func_105(iParam0);
			if (fVar0 != 1f)
			{
				func_621(fVar0);
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 1);
			}
		}
		if (!func_109(iParam0))
		{
			if (func_107(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xCF03D9C8A7F1577C(0);
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
					unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
				}
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 0);
			}
			else if (unk_0x34E98013CA352B7E() < 5)
			{
				unk_0xACD6D334FD769B0C(1f);
				unk_0xCF03D9C8A7F1577C(5);
			}
		}
		if (func_132())
		{
			func_100(27);
		}
		if (bParam1)
		{
			if (!func_126())
			{
				func_102(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 1) || unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 4)) || unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 0))
			{
				func_441(6);
			}
			func_627();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x806DACE5511E6771(3, 0);
			unk_0x806DACE5511E6771(5, 0);
		}
		if (func_122(unk_0x0C1D3C552325765B()) && func_114(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 8);
		}
		func_623();
	}
}

void func_623()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_626();
	iVar2 = func_61(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x81C85E54237F8A2E(iVar0);
		if (unk_0xCB129F9A01D14082(iVar1))
		{
			if (func_71(iVar1, iVar2, 1) || func_624(iVar1, unk_0x0C1D3C552325765B()))
			{
				unk_0x5EB0EEC362B46453(unk_0x0C1D3C552325765B(), iVar1, uVar3);
				unk_0x5EB0EEC362B46453(iVar1, unk_0x0C1D3C552325765B(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_624(int iParam0, int iParam1)
{
	if (func_167(iParam0, 1) && func_167(iParam1, 1))
	{
		return (func_625(iParam0) == func_61(iParam1) || func_625(iParam1) == func_61(iParam0));
	}
	return 0;
}

int func_625(int iParam0)
{
	if (func_167(iParam0, 1))
	{
		return Global_1614576[func_61(iParam0) /*324*/].f_10.f_268;
	}
	return func_60();
}

int func_626()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_390();
	if (iVar0 != func_60())
	{
		if (func_706(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x08BA6DD398CA197C(Global_1614576[iVar1 /*324*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_627()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 1))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 1);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 4))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 4);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 6))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 6);
	}
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 0);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 2);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_444 = 0;
	if (Global_2482149.f_4418 > 0)
	{
		unk_0xCF03D9C8A7F1577C(Global_2482149.f_4418);
	}
	Global_2482149.f_4417 = 0;
}

void func_628(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_370(3759, -1, 0);
	iVar1 = func_629(iParam0);
	if (iVar1 != -1)
	{
		unk_0x88B0F0DC270164B7(&iVar0, iVar1);
		func_368(3759, iVar0, -1, 1, 0);
	}
}

int func_629(int iParam0)
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

void func_630(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (Global_1614576[iVar0 /*324*/].f_10.f_172 != iParam0)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_172 = iParam0;
	}
}

void func_631(int iParam0)
{
	if (Global_2482149.f_4698.f_146 != iParam0)
	{
		Global_2482149.f_4698.f_146 = iParam0;
	}
}

int func_632()
{
	return Global_2482149.f_4698.f_146;
}

void func_633(int iParam0)
{
	if (Global_2482149.f_4698.f_145 != iParam0)
	{
		Global_2482149.f_4698.f_145 = iParam0;
	}
}

int func_634()
{
	return Global_2482149.f_4698.f_145;
}

void func_635(int iParam0)
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_31 = iParam0;
}

int func_636()
{
	int iVar0;
	
	iVar0 = func_637();
	if (iVar0 > -1)
	{
		if (Local_99.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_637()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_60();
	if (!func_17(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = unk_0x848AF823A8EA3C62();
		iVar1 = unk_0x0C1D3C552325765B();
	}
	else
	{
		iVar0 = func_273();
		iVar1 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_971[iVar0 /*14*/].f_10 != -1)
	{
		return Local_971[iVar0 /*14*/].f_10;
	}
	if (func_113(iVar1))
	{
		Local_971[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_99.f_118)
		{
			func_552(1);
		}
	}
	else if (func_167(iVar1, 1))
	{
		iVar2 = func_61(iVar1);
		if (iVar2 != func_60())
		{
			if (unk_0x3F3C7C3B52DD0ECA(iVar2))
			{
				Local_971[iVar0 /*14*/].f_10 = unk_0x9259DE19D910276C(iVar2);
			}
		}
	}
	return Local_971[iVar0 /*14*/].f_10;
}

int func_638()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*26*/].f_1))
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

int func_639()
{
	return Local_99.f_0;
}

int func_640(int iParam0)
{
	return Local_971[iParam0 /*14*/];
}

int func_641()
{
	bool bVar0;
	var uVar1;
	
	func_646(&bVar0, &uVar1);
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
	if (func_645())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_644())
	{
		return 1;
	}
	if (func_643(157))
	{
		if (!func_642())
		{
			return 1;
		}
	}
	if (func_643(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_306() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_306()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_642()
{
	return Global_2442442.f_576;
}

int func_643(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_644()
{
	return Global_2451777;
}

bool func_645()
{
	return Global_2442442.f_571;
}

void func_646(var uParam0, var uParam1)
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
					func_647(iVar0);
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

void func_647(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_706(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_648(uVar4, &bVar5))
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

int func_648(int iParam0, var uParam1)
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

void func_649()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_650()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0x0C1D3C552325765B(), 0))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_1420, 6))
		{
			if (unk_0xA86CA03D9749EEB3())
			{
				if (func_636() || func_272())
				{
					func_498(0, 4, 0, 0, -1, -1, -1, -1);
					unk_0x88B0F0DC270164B7(&iLocal_1420, 6);
				}
			}
		}
		uVar0 = Local_99.f_115;
		uVar1 = Local_99.f_121;
		iVar2 = -1;
		if (unk_0xA86CA03D9749EEB3())
		{
			iVar2 = Local_971[unk_0x848AF823A8EA3C62() /*14*/].f_11;
		}
		func_688(uVar0, uVar1, iVar2, -1082130432);
		if (unk_0xA86CA03D9749EEB3())
		{
			if (unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5()) == iLocal_1425)
			{
				unk_0x65889F26F311FC55(unk_0xA0081090911D13E5(), iLocal_1426);
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(iLocal_1420, 18))
	{
		func_314(1);
		unk_0x09C86C0C5CA26B1E(&iLocal_1420, 18);
	}
	func_687();
	if (Local_99.f_119 != -1)
	{
		if (unk_0x08BA6DD398CA197C(iLocal_1420, 5))
		{
			if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(Local_99.f_119)))
			{
			}
		}
	}
	if (func_76(0))
	{
		func_75(0);
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0xD9E8CA806A80203D())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_871, iVar3))
				{
					unk_0x322323456FCFAB4D(Local_99.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(iLocal_1420, 17))
	{
		unk_0xCF03D9C8A7F1577C(iLocal_1714);
		unk_0x09C86C0C5CA26B1E(&iLocal_1420, 17);
	}
	func_311();
	unk_0x88B0F0DC270164B7(&iLocal_1421, 8);
	func_527();
	unk_0x671810EE85FFCDFC(1);
	func_552(0);
	func_652(1, 0);
	unk_0xCF03D9C8A7F1577C(5);
	func_303();
	func_651();
}

void func_651()
{
	unk_0x78C587487CD40B92();
}

void func_652(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1332731.f_1.f_108 != 0)
	{
		Global_1332731.f_1.f_108 = 0;
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 167 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 168)
	{
		func_685();
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 4);
	}
	if ((func_386() && iParam1 != 0) && Global_262145.f_14857)
	{
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 190 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 192)
		{
			func_670(unk_0x0C1D3C552325765B(), iParam1);
		}
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 164 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 208)
	{
		unk_0x806DACE5511E6771(3, 1);
		unk_0x806DACE5511E6771(5, 1);
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 != -1)
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 = -1;
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 14) && !func_122(unk_0x0C1D3C552325765B()))
		{
			func_102(0);
		}
	}
	else if (func_668(unk_0x0C1D3C552325765B()) != -1)
	{
		func_635(-1);
	}
	func_667(func_60());
	if (func_76(16))
	{
		func_75(16);
	}
	func_663(0);
	func_630(-1);
	func_662();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_660(iVar0);
		iVar0++;
	}
	if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0))
	{
		unk_0xACD6D334FD769B0C(1f);
		unk_0xCF03D9C8A7F1577C(5);
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 0);
	}
	if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 5))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 5);
	}
	iVar1 = func_296();
	if ((func_199(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_659(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_345(iVar1))
	{
		func_655(-1, 1);
	}
	else if (func_295(iVar1) || func_654(iVar1))
	{
	}
	else
	{
		func_655(-1, 1);
	}
	func_98(19);
	func_98(20);
	func_98(21);
	func_98(22);
	func_98(27);
	func_75(3);
	func_75(4);
	func_75(7);
	func_653();
	if (func_114(unk_0x0C1D3C552325765B()))
	{
		func_552(0);
	}
	func_98(29);
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 = func_60();
	if (Global_2482149.f_4698.f_18 != 0)
	{
		Global_2482149.f_4698.f_18 = 0;
	}
	if (bParam0)
	{
		func_77();
	}
	if (!func_122(unk_0x0C1D3C552325765B()))
	{
		func_97();
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 1);
	}
}

void func_653()
{
	if (func_117(unk_0x0C1D3C552325765B()))
	{
		func_98(25);
	}
}

int func_654(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_655(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_296();
	}
	if (iParam0 > 0)
	{
		if (func_390() != func_60())
		{
			if (func_658(unk_0x0C1D3C552325765B()) == unk_0x0C1D3C552325765B())
			{
				Global_2471291.f_77[func_657(iParam0)] = 1;
			}
		}
		iVar0 = func_657(159);
		if (func_656(iVar0, Global_262145.f_11038, bParam1))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(157);
		if (func_656(iVar0, Global_262145.f_11038, bParam1))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(148);
		if (func_656(iVar0, Global_262145.f_11038, bParam1))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(164);
		if (func_656(iVar0, Global_262145.f_11038, bParam1))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(142);
		if (func_656(iVar0, Global_262145.f_11038, bParam1))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(152);
		if (func_656(iVar0, Global_262145.f_11038, bParam1))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(166);
		if (func_656(iVar0, Global_262145.f_11038, bParam1))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(170);
		if (func_656(iVar0, Global_262145.f_11038, bParam1))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(173);
		if (func_656(iVar0, Global_262145.f_11038, bParam1))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(179);
		if (func_656(iVar0, Global_262145.f_11038, bParam1))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(200);
		if (func_656(iVar0, Global_262145.f_11038, bParam1))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(201);
		if (func_656(iVar0, Global_262145.f_11038, bParam1))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(182);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(183);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(185);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(186);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(180);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(195);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(197);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(198);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(207);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(208);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(209);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_656(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_99(unk_0x0C1D3C552325765B(), 19) && !func_99(unk_0x0C1D3C552325765B(), 20)) && !func_99(unk_0x0C1D3C552325765B(), 9))
		{
			return 0;
		}
	}
	if (Global_2471291.f_77[iParam0] == 1 && func_8(&(Global_2471291[iParam0 /*2*/])))
	{
		if (func_529(&(Global_2471291[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2471291.f_77[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_657(int iParam0)
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
		
		case 179:
			return 17;
		
		case 189:
			return 18;
		
		case 193:
			return 19;
		
		case 194:
			return 20;
		
		case 199:
			return 21;
		
		case 201:
			return 22;
		
		case 200:
			return 23;
		
		case 205:
			return 24;
		
		case 210:
			return 25;
		
		case 182:
			return 26;
		
		case 183:
			return 27;
		
		case 185:
			return 28;
		
		case 186:
			return 29;
		
		case 180:
			return 30;
		
		case 195:
			return 31;
		
		case 197:
			return 32;
		
		case 198:
			return 33;
		
		case 207:
			return 34;
		
		case 208:
			return 35;
		
		case 209:
			return 36;
		
		case 211:
			return 37;
		
		default:
	}
	return -1;
}

int func_658(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_34;
}

void func_659(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_296();
	}
	if (iParam0 > 0)
	{
		if (func_390() != func_60())
		{
			Global_2471291.f_77[func_657(iParam0)] = 1;
		}
		iVar0 = func_657(155);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(163);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(160);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(153);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(162);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(154);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(171);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(172);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(199);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(194);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(193);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(210);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(205);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(189);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(211);
		if (func_656(iVar0, Global_262145.f_11039, 0))
		{
			func_145(&(Global_2471291[iVar0 /*2*/]));
			func_7(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_660(int iParam0)
{
	if (!func_28(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_143[iParam0 /*3*/], func_661(), 0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_143[iParam0 /*3*/] = { func_661() };
	}
	if (!func_28(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_118[iParam0 /*3*/], func_661(), 0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_118[iParam0 /*3*/] = { func_661() };
	}
}

Vector3 func_661()
{
	struct<3> Var0;
	
	return Var0;
}

void func_662()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573418 = { Var0 };
	Global_1573418.f_13 = func_60();
	if (unk_0x08BA6DD398CA197C(Global_1572926, 3))
	{
		unk_0x09C86C0C5CA26B1E(&Global_1572926, 3);
	}
}

void func_663(bool bParam0)
{
	if (bParam0)
	{
		if (!func_666(unk_0x0C1D3C552325765B(), 10))
		{
			func_665(10);
		}
	}
	else if (func_666(unk_0x0C1D3C552325765B(), 10))
	{
		func_664(10);
	}
}

void func_664(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

void func_665(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

bool func_666(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_5, iParam1);
}

void func_667(int iParam0)
{
	if (func_113(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x0C1D3C552325765B() != iParam0)
		{
			if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_268 != iParam0)
			{
				Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_268 = iParam0;
				if (iParam0 != func_60())
				{
				}
			}
		}
	}
}

int func_668(int iParam0)
{
	if (func_669(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_31;
	}
	return -1;
}

int func_669(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_31 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_670(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_454(iParam0, iParam1) && func_684(iParam0, iParam1))
	{
		iVar0 = func_453(iParam0, iParam1);
		func_674(iVar0);
		func_671(iVar0, 1);
	}
}

void func_671(int iParam0, int iParam1)
{
	func_672(func_673(iParam0), iParam1, -1, 1);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_90[iParam0 /*11*/].f_6 = iParam1;
}

int func_672(int iParam0, var uParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar2, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar3, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar4, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar5, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar6, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar7, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar8, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar9, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar10, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar11, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar12, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar13 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar13, uParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		default:
	}
	return 7628;
}

void func_674(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar1 = func_683(unk_0x0C1D3C552325765B(), iParam0);
	Global_2471285[iParam0] = 0;
	if (func_679(func_682(iParam0), -1, -1))
	{
		iVar0 = func_678(iVar1);
		iVar2 = func_502(unk_0x0C1D3C552325765B(), iVar1);
		iVar3 = func_677(iVar1);
		iVar4 = func_678(iVar1);
		fVar5 = (unk_0xBBDA792448DB5A89(iVar4) / unk_0xBBDA792448DB5A89(iVar3));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) * fVar5)));
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		Global_2471285[iParam0] = iVar0;
	}
	else
	{
		iVar0 = (func_678(iVar1) / func_676(unk_0x0C1D3C552325765B(), iVar1) + 1);
	}
	func_675(unk_0x0C1D3C552325765B(), iVar1, iVar0);
}

void func_675(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return;
	}
	if (func_455(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_9 = iParam2;
			}
			iVar0++;
		}
	}
}

int func_676(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_455(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_677(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_456(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_14828;
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14833;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_14827;
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14832;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_14826;
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14831;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_14824;
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14829;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_14825;
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14830;
			}
			break;
	}
	return uVar0;
}

int func_678(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_456(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_14809;
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14818);
			}
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14823);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_14810;
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14817);
			}
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14822);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_14811;
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14816);
			}
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14821);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_14812;
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14814);
			}
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14819);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_14813;
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14815);
			}
			if (func_452(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14820);
			}
			break;
	}
	return iVar0;
}

int func_679(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_681(iParam0, iParam1);
	uVar2 = func_680(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xFC12D914F6DEEF7B(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_680(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_681(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

int func_682(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		default:
	}
	return 9416;
}

int func_683(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_455(Global_1588660[iParam0 /*532*/].f_256.f_90[iParam1 /*11*/]))
	{
		uVar0 = Global_1588660[iParam0 /*532*/].f_256.f_90[iParam1 /*11*/];
	}
	return uVar0;
}

int func_684(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_454(iParam0, iParam1))
	{
		iVar0 = func_453(iParam0, iParam1);
		if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_4 > 0 && Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_685()
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 28);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 29);
	func_686(24);
}

void func_686(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

void func_687()
{
	unk_0x17BC7AF21106B65E(iLocal_1425);
}

void func_688(var uParam0, var uParam1, int iParam2, int iParam3)
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
	
	uVar0 = unk_0x367152330DB70D69();
	Var1.f_0 = Global_1750569;
	Var1.f_1 = Global_1750569.f_1;
	Var1.f_2 = Global_1750569.f_2;
	Var1.f_3 = Global_1750569.f_3;
	Var1.f_4 = Global_1750569.f_4;
	Var1.f_5 = Global_1750569.f_5;
	Var1.f_6 = Global_1750569.f_6;
	Var1.f_7 = Global_1750569.f_7;
	Var1.f_8 = Global_1750569.f_8;
	Var1.f_9 = Global_1750569.f_9;
	Var1.f_10 = Global_1750569.f_10;
	Var1.f_11 = Global_1750569.f_11;
	Var1.f_12 = Global_1750569.f_12;
	Var1.f_13 = Global_1750569.f_14;
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x28C1B9853548BD8E(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1750569.f_15;
			Var15.f_15 = Global_1750569.f_16;
			Var15.f_16 = Global_1750569.f_17;
			unk_0xB52EDE17EA1502EE(&Var15);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1750569.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = uParam1;
			unk_0xA69238A3DCFC16AF(&Var32);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1750569.f_15;
			Var49.f_15 = uParam0;
			unk_0x6228A33A89AE777D(&Var49);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1750569.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = uParam1;
			unk_0x12EF9A511680F9C4(&Var65);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1750569.f_15;
			Var82.f_15 = uParam0;
			unk_0xAFA2BE3145862168(&Var82);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1750569.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = uParam1;
			Var98.f_17 = iParam2;
			unk_0xEB19DBB33ABC60AE(&Var98);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1750569.f_15;
			unk_0xB0FAB98E9AEC7B92(&Var116);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1750569.f_15;
			unk_0x8093409F8C94AF35(&Var134);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1750569.f_15;
			unk_0xFA930B4B51A95117(&Var153);
		}
	}
	func_689();
}

void func_689()
{
	struct<18> Var0;
	
	Global_1750569 = { Var0 };
}

void func_690(struct<20> Param0)
{
	func_704(func_705(Param0.f_0), Param0);
	unk_0xF2797029E839595C(16);
	unk_0x23DFD22869618226(8);
	func_703(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_99, 872);
	unk_0xCCA45C9E00D2BC01(&Local_971, 449);
	if (!func_702())
	{
		func_650();
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		unk_0x401559486BCA4D9B(0);
		if (unk_0xD9E8CA806A80203D())
		{
		}
		func_699();
		func_691(0, 0);
		Local_971[unk_0x848AF823A8EA3C62() /*14*/] = 0;
	}
	else
	{
		func_650();
	}
}

void func_691(int iParam0, int iParam1)
{
	func_698();
	func_695(1);
	if ((iParam0 != 0 && unk_0xCB129F9A01D14082(iParam1)) && func_694(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x88B0F0DC270164B7(&Global_1750555, 0);
				break;
			}
	}
	if (!func_437() && !func_167(unk_0x0C1D3C552325765B(), 1))
	{
		if (func_129())
		{
			func_101(3);
		}
		func_101(4);
	}
	if (func_388(0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 = func_390();
	}
	if (func_291(iParam0))
	{
		func_500();
		Global_1750587.f_18 = func_693(func_229());
	}
	func_692();
}

void func_692()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1332731.f_527[iVar0 /*49*/].f_1 = func_60();
		Global_1332731.f_527[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_693(int iParam0)
{
	if (func_167(iParam0, 1))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_235;
	}
	return -1;
}

int func_694(int iParam0, bool bParam1)
{
	return func_71(unk_0x0C1D3C552325765B(), iParam0, bParam1);
}

void func_695(bool bParam0)
{
	int iVar0;
	
	func_686(33);
	func_686(34);
	func_686(35);
	func_686(36);
	func_686(37);
	func_686(38);
	func_686(39);
	func_686(40);
	func_686(43);
	func_686(41);
	func_686(54);
	func_686(42);
	func_686(47);
	func_697(23);
	func_697(24);
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2482149.f_4698.f_11[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_696(3))
	{
		func_697(3);
	}
	else if (func_696(4))
	{
		func_697(4);
	}
	else if (func_696(5))
	{
		func_697(5);
	}
	else if (func_696(6))
	{
		func_697(6);
	}
	else if (func_696(7))
	{
		func_697(7);
	}
	else if (((((((((((((((((func_696(0) || func_696(1)) || func_696(2)) || func_696(8)) || func_696(9)) || func_696(10)) || func_696(11)) || func_696(12)) || func_696(13)) || func_696(14)) || func_696(15)) || func_696(16)) || func_696(17)) || func_696(18)) || func_696(19)) || func_696(20)) || func_696(21)) || func_696(22))
	{
		func_697(8);
		func_697(0);
		func_697(1);
		func_697(2);
		func_697(9);
		func_697(10);
		func_697(11);
		func_697(12);
		func_697(13);
		func_697(14);
		func_697(15);
		func_697(16);
		func_697(17);
		func_697(18);
		func_697(19);
		func_697(20);
		func_697(21);
		func_697(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2482149.f_4698.f_11[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_696(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_11[iVar0], iVar1);
}

void func_697(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_11[iVar0]), iVar1);
}

void func_698()
{
	struct<14> Var0;
	
	Global_1750569 = { Var0 };
	Global_1750569.f_14 = 0;
	Global_1750569.f_15 = 0;
}

void func_699()
{
	int iVar0;
	int iVar1;
	
	unk_0xD8C3303D0A49D05B("relHeadHunterPlayer", &iLocal_1425);
	iVar0 = unk_0xD28ED8D0CD006D1E(unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		unk_0xFDDE2C1A05E64390(5, Global_1574240[iVar1], iLocal_1425);
		unk_0xFDDE2C1A05E64390(5, iLocal_1425, Global_1574240[iVar1]);
		unk_0xFDDE2C1A05E64390(1, Global_1574240[iVar1], Global_1574282);
		unk_0xFDDE2C1A05E64390(1, Global_1574282, Global_1574240[iVar1]);
		unk_0xFDDE2C1A05E64390(iVar0, iLocal_1425, joaat("COP"));
		unk_0xFDDE2C1A05E64390(iVar0, joaat("COP"), iLocal_1425);
		unk_0xFDDE2C1A05E64390(1, iLocal_1425, Global_1574284[5]);
		unk_0xFDDE2C1A05E64390(1, Global_1574284[5], iLocal_1425);
		unk_0xFDDE2C1A05E64390(1, iLocal_1425, Global_1574273);
		unk_0xFDDE2C1A05E64390(1, Global_1574273, iLocal_1425);
		iVar1++;
	}
	unk_0xFDDE2C1A05E64390(5, iLocal_1425, Global_1574282);
	unk_0xFDDE2C1A05E64390(5, Global_1574282, iLocal_1425);
	unk_0xFDDE2C1A05E64390(1, 2017343592, Global_1574282);
	unk_0xFDDE2C1A05E64390(5, 2017343592, iLocal_1425);
	func_701(1, &Global_1574282);
	func_700(&Global_1574282);
	func_700(&iLocal_1425);
}

void func_700(int iParam0)
{
	unk_0xFDDE2C1A05E64390(1, -1865950624, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, -1865950624);
	unk_0xFDDE2C1A05E64390(1, 296331235, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 296331235);
	unk_0xFDDE2C1A05E64390(1, 1166638144, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 1166638144);
	unk_0xFDDE2C1A05E64390(1, 2037579709, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 2037579709);
	unk_0xFDDE2C1A05E64390(1, 2017343592, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 2017343592);
	unk_0xFDDE2C1A05E64390(1, -1821475077, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, -1821475077);
	unk_0xFDDE2C1A05E64390(1, 1782292358, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 1782292358);
	unk_0xFDDE2C1A05E64390(1, -1033021910, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, -1033021910);
	unk_0xFDDE2C1A05E64390(1, -1285976420, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, -1285976420);
}

void func_701(int iParam0, var uParam1)
{
	unk_0xFDDE2C1A05E64390(iParam0, joaat("COP"), *uParam1);
	unk_0xFDDE2C1A05E64390(iParam0, *uParam1, joaat("COP"));
	unk_0xFDDE2C1A05E64390(iParam0, joaat("army"), *uParam1);
	unk_0xFDDE2C1A05E64390(iParam0, *uParam1, joaat("army"));
	unk_0xFDDE2C1A05E64390(iParam0, -183807561, *uParam1);
	unk_0xFDDE2C1A05E64390(iParam0, *uParam1, -183807561);
}

int func_702()
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
		if (func_645())
		{
			return 0;
		}
		if (func_643(155))
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

int func_703(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_651();
			}
			else
			{
				return 0;
			}
		}
		if (!func_599())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_651();
					}
					else
					{
						return 0;
					}
				}
				if (func_645())
				{
					if (!bParam2)
					{
						func_651();
					}
					else
					{
						return 0;
					}
				}
				if (func_643(155))
				{
					if (!bParam2)
					{
						func_651();
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
					func_651();
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
				func_651();
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
			func_651();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_704(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_651();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_705(int iParam0)
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
		
		case 74:
			return 32;
		
		case 73:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 8;
		
		case 81:
			return 32;
		
		case 82:
			return 8;
		
		case 83:
			return 8;
		
		case 91:
			return 8;
		
		case 84:
			return 8;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 8;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 92:
			return 32;
		
		case 93:
			return 32;
		
		case 94:
			return 32;
		
		case 95:
			return 8;
		
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
		
		case 96:
			return 32;
		
		case 97:
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
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 32;
		
		case 103:
			return 32;
		
		case 101:
			return 32;
		
		case 102:
			return 32;
		
		case 106:
			return 32;
		
		case 107:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 110:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 113:
			return 32;
		
		case 114:
			return 2;
		
		case 119:
			return 1;
		
		case 115:
			return 2;
		
		case 116:
			return 4;
		
		case 117:
			return 2;
		
		case 118:
			return 2;
		
		case 100:
			return 1;
		
		case 120:
			return 2;
		
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return 0;
		
		case 130:
			return 1;
		
		case 127:
			return 4;
		
		case 128:
			return 16;
		
		case 129:
			return 32;
		
		default:
	}
	return 0;
}

int func_706(int iParam0, bool bParam1, bool bParam2)
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

